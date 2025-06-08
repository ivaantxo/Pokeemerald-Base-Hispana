#include "global.h"
#include "malloc.h"
#include "data.h"
#include "decompress.h"
#include "pokemon.h"
#include "pokemon_sprite_visualizer.h"
#include "text.h"
#include "menu.h"
#include "constants/egg_hatch.h"

void LZDecompressWram(const u32 *src, void *dest)
{
    LZ77UnCompWram(src, dest);
}

void LZDecompressVram(const u32 *src, void *dest)
{
    LZ77UnCompVram(src, dest);
}

// Checks if `ptr` is likely LZ77 data
// Checks word-alignment, min/max size, and header byte
// Returns uncompressed size if true, 0 otherwise
u32 IsLZ77Data(const void *ptr, u32 minSize, u32 maxSize)
{
    const u8 *data = ptr;
    u32 size;
    // Compressed data must be word aligned
    if (((u32)ptr) & 3)
        return 0;
    // Check LZ77 header byte
    // See https://problemkaputt.de/gbatek.htm#biosdecompressionfunctions
    if (data[0] != 0x10)
        return 0;

    // Read 24-bit uncompressed size
    size = data[1] | (data[2] << 8) | (data[3] << 16);
    if (size >= minSize && size <= maxSize)
        return size;
    return 0;
}

static inline u32 DoLoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src, void *buffer)
{
    struct SpriteSheet dest;

    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    return LoadSpriteSheet(&dest);
}

u32 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src)
{
    void *buffer = malloc_and_decompress(src->data, NULL);
    u32 ret = DoLoadCompressedSpriteSheet(src, buffer);
    Free(buffer);

    return ret;
}

u32 LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer)
{
    LZDecompressWram(src->data, buffer);
    return DoLoadCompressedSpriteSheet(src, buffer);
}

// This can be used for either compressed or uncompressed sprite sheets
u32 LoadCompressedSpriteSheetByTemplate(const struct SpriteTemplate *template, s32 offset)
{
    struct SpriteTemplate myTemplate;
    struct SpriteFrameImage myImage;
    u32 size;

    // Check for LZ77 header and read uncompressed size, or fallback if not compressed (zero size)
    if ((size = IsLZ77Data(template->images->data, TILE_SIZE_4BPP, MAX_DECOMPRESSION_BUFFER_SIZE)) == 0)
        return LoadSpriteSheetByTemplate(template, 0, offset);

    void *buffer = malloc_and_decompress(template->images->data, NULL);
    myImage.data = buffer;
    myImage.size = size + offset;
    myTemplate.images = &myImage;
    myTemplate.tileTag = template->tileTag;

    u32 ret = LoadSpriteSheetByTemplate(&myTemplate, 0, offset);
    Free(buffer);
    return ret;
}

u32 LoadCompressedSpritePalette(const struct CompressedSpritePalette *src)
{
    return LoadCompressedSpritePaletteWithTag(src->data, src->tag);
}

u32 LoadCompressedSpritePaletteWithTag(const u32 *pal, u16 tag)
{
    u32 index;
    struct SpritePalette dest;
    void *buffer = malloc_and_decompress(pal, NULL);

    dest.data = buffer;
    dest.tag = tag;
    index = LoadSpritePalette(&dest);
    Free(buffer);
    return index;
}

u32 LoadCompressedSpritePaletteWithTagHueShifted(const u32 *pal, u16 tag, u32 personality)
{
    u32 index;
    struct SpritePalette dest;
    void *buffer = malloc_and_decompress(pal, NULL);

    dest.data = buffer;
    dest.tag = tag;
    index = LoadUniqueSpritePalette(&dest, personality);
    Free(buffer);
    return index;
}

void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *src, void *buffer)
{
    struct SpritePalette dest;

    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer)
{
    LZ77UnCompWram(src->data, buffer);
}

void HandleLoadSpecialPokePic(bool32 isFrontPic, void *dest, s32 species, u32 personality)
{
    LoadSpecialPokePic(dest, species, personality, isFrontPic);
}

void LoadSpecialPokePic(void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    species = SanitizeSpeciesId(species);
    if (species == SPECIES_UNOWN)
        species = GetUnownSpeciesId(personality);

    if (isFrontPic)
    {
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].frontPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZ77UnCompWram(gSpeciesInfo[species].frontPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].frontPic != NULL)
            LZ77UnCompWram(gSpeciesInfo[species].frontPic, dest);
        else
            LZ77UnCompWram(gSpeciesInfo[SPECIES_NONE].frontPic, dest);
    }
    else
    {
    #if P_GENDER_DIFFERENCES
        if (gSpeciesInfo[species].backPicFemale != NULL && IsPersonalityFemale(species, personality))
            LZ77UnCompWram(gSpeciesInfo[species].backPicFemale, dest);
        else
    #endif
        if (gSpeciesInfo[species].backPic != NULL)
            LZ77UnCompWram(gSpeciesInfo[species].backPic, dest);
        else
            LZ77UnCompWram(gSpeciesInfo[SPECIES_NONE].backPic, dest);
    }

    if (species == SPECIES_SPINDA && isFrontPic)
    {
        DrawSpindaSpots(personality, dest, FALSE);
        DrawSpindaSpots(personality, dest, TRUE);
    }
}

u32 GetDecompressedDataSize(const u32 *ptr)
{
    const u8 *ptr8 = (const u8 *)ptr;
    return (ptr8[3] << 16) | (ptr8[2] << 8) | (ptr8[1]);
}

bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;
    void *buffer;

    buffer = AllocZeroed(src->data[0] >> 8);
    LZ77UnCompWram(src->data, buffer);

    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;

    LoadSpriteSheet(&dest);
    Free(buffer);
    return FALSE;
}

bool8 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;
    void *buffer;

    buffer = AllocZeroed(src->data[0] >> 8);
    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;

    LoadSpritePalette(&dest);
    Free(buffer);
    return FALSE;
}

void LoadCompressedEggSpritePalette(const struct CompressedSpritePalette *src1, const struct CompressedSpritePalette *src2)
{
    void *buffer1 = malloc_and_decompress(src1->data, NULL); // 8 colores
    void *buffer2 = malloc_and_decompress(src2->data, NULL); // 8 colores

    struct SpritePalette dest1 = {
        .data = buffer1,
        .tag = src1->tag
    };
    struct SpritePalette dest2 = {
        .data = buffer2,
        .tag = src2->tag
    };

    LoadEggSpritePalette(&dest1, &dest2);

    Free(buffer1);
    Free(buffer2);
}

void LoadCompressedEggHatchSpritePalette(const struct CompressedSpritePalette *src1, const struct CompressedSpritePalette *src2)
{
    void *buffer1 = malloc_and_decompress(src1->data, NULL); // 8 colores
    void *buffer2 = malloc_and_decompress(src2->data, NULL); // 8 colores

    struct SpritePalette dest1 = {
        .data = buffer1,
        .tag = PALTAG_EGG
    };
    struct SpritePalette dest2 = {
        .data = buffer2,
        .tag = src2->tag
    };

    LoadEggSpritePalette(&dest1, &dest2);

    Free(buffer1);
    Free(buffer2);
}