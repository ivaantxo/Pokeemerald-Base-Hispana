#include "global.h"
#include "data.h"
#include "decompress.h"
#include "graphics.h"
#include "mail.h"
#include "palette.h"
#include "pokemon_sprite_visualizer.h"
#include "pokemon_icon.h"
#include "sprite.h"
#include "util.h"
#include "constants/pokemon_icon.h"
#include "config/pbh.h"

struct MonIconSpriteTemplate
{
    const struct OamData *oam;
    const u32 *image;
    const union AnimCmd *const *anims;
    const union AffineAnimCmd *const *affineAnims;
    void (*callback)(struct Sprite *);
    u16 paletteTag;
};

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *, s16, s16, u8);
static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite);

const struct SpritePalette gMonIconPaletteTable[] =
{
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },

    // There are only 3 actual palettes, but we repurpose the last 3 as duplicates for the new icon system
    { gMonIconPalettes[3 % 3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4 % 3], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5 % 3], POKE_ICON_BASE_PAL_TAG + 5 },
};

static const struct OamData sMonIconOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

// fastest to slowest

static const union AnimCmd sAnim_0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_2[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_3[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_4[] =
{
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29), // frame 0 is repeated
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sMonIconAnims[] =
{
    sAnim_0,
    sAnim_1,
    sAnim_2,
    sAnim_3,
    sAnim_4,
};

static const union AffineAnimCmd sAffineAnim_0[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_1[] =
{
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sMonIconAffineAnims[] =
{
    sAffineAnim_0,
    sAffineAnim_1,
};

static const u16 sSpriteImageSizes[3][4] =
{
    [ST_OAM_SQUARE] =
    {
        [SPRITE_SIZE(8x8)]   =  8 * 8  / 2,
        [SPRITE_SIZE(16x16)] = 16 * 16 / 2,
        [SPRITE_SIZE(32x32)] = 32 * 32 / 2,
        [SPRITE_SIZE(64x64)] = 64 * 64 / 2,
    },
    [ST_OAM_H_RECTANGLE] =
    {
        [SPRITE_SIZE(16x8)]  = 16 * 8  / 2,
        [SPRITE_SIZE(32x8)]  = 32 * 8  / 2,
        [SPRITE_SIZE(32x16)] = 32 * 16 / 2,
        [SPRITE_SIZE(64x32)] = 64 * 32 / 2,
    },
    [ST_OAM_V_RECTANGLE] =
    {
        [SPRITE_SIZE(8x16)]  =  8 * 16 / 2,
        [SPRITE_SIZE(8x32)]  =  8 * 32 / 2,
        [SPRITE_SIZE(16x32)] = 16 * 32 / 2,
        [SPRITE_SIZE(32x64)] = 32 * 64 / 2,
    },
};

// Find or allocate a palette slot for a pokemon icon
// Prefers unused slots with tags in the icon range (IS_MON_ICON_TAG),
// but if not found, will allocate a new palette slot
u32 FindFreeIconPaletteSlot(u16 tag)
{
    u32 i;
    u16 tag2, used;
    // look for an unused mon icon slot
    for (i = 0, used = 0; i < MAX_SPRITES; i++) // compute a bitfield of in-use sprite palettes
        if (gSprites[i].inUse)
            used |= 1 << gSprites[i].oam.paletteNum;
    for (i = 0; i < 16; i++)
    {
        if (used & (1 << i)) // skip in-use palettes
            continue;
        tag2 = GetSpritePaletteTagByPaletteNum(i);
        if (IS_MON_ICON_TAG(tag2))
            return i;
    }
    // Allocate new slot
    return AllocSpritePalette(tag);
}

u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality)
{
    u8 spriteId;

    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = GetMonIconPtr(species, personality),
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = TAG_NONE,
    };

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);
    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

// Carga la paleta del Pokémon en paletteNum.
u8 SetMonIconPalette(struct Pokemon *mon, struct Sprite *sprite, u8 paletteNum) 
{
    const struct CompressedSpritePalette *pal1, *pal2;
    pal1 = &gEgg1PaletteTable[gSpeciesInfo[GetMonData(mon, MON_DATA_SPECIES)].types[0]];
    pal2 = &gEgg2PaletteTable[gSpeciesInfo[GetMonData(mon, MON_DATA_SPECIES)].types[1]];

    if (paletteNum < 16)
    {
        if (GetMonData(mon, MON_DATA_IS_EGG) && PBH_HUEVOS_COLOR_TIPO)
        {
            LZ77UnCompWram(pal1->data, gEggDecompressionBuffer);
            CpuCopy16(gEggDecompressionBuffer, &gPlttBufferUnfaded[OBJ_PLTT_ID(paletteNum)], PLTT_SIZE_4BPP);
            CpuCopy16(gEggDecompressionBuffer, &gPlttBufferFaded[OBJ_PLTT_ID(paletteNum)], PLTT_SIZE_4BPP);
            LZ77UnCompWram(pal2->data, gEggDecompressionBuffer);
            CpuCopy16(gEggDecompressionBuffer, &gPlttBufferUnfaded[OBJ_PLTT_ID(paletteNum) + 8], PLTT_SIZE_4BPP);
            CpuCopy16(gEggDecompressionBuffer, &gPlttBufferFaded[OBJ_PLTT_ID(paletteNum) + 8], PLTT_SIZE_4BPP);
        }
        else
        {
            LoadCompressedPalette(GetMonFrontSpritePal(mon), OBJ_PLTT_ID(paletteNum), PLTT_SIZE_4BPP);
            if (PBH_PALETAS_UNICAS)
            {
                UniquePalette(OBJ_PLTT_ID(paletteNum), &mon->box);
                CpuCopy32(&gPlttBufferFaded[OBJ_PLTT_ID(paletteNum)], &gPlttBufferUnfaded[OBJ_PLTT_ID(paletteNum)], PLTT_SIZE_4BPP);
            }
        }
        if (sprite)
            sprite->oam.paletteNum = paletteNum;
    }
    return paletteNum;
}

// Solo se usa en los sistemas que no pueden ser shiny, por eso le pasamos un 0 en personalidad.
u8 CreateMonIconNoPersonality(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority)
{
    return CreateMonIcon(species, callback, x, y, subpriority, 0);
}

u16 GetIconSpecies(u16 species, u32 personality)
{
    species = SanitizeSpeciesId(species);
    if (species == SPECIES_UNOWN)
        species = GetUnownSpeciesId(personality);
    return species;
}

u16 GetUnownLetterByPersonality(u32 personality)
{
    if (!personality)
        return 0;
    else
        return GET_UNOWN_LETTER(personality);
}

u16 GetIconSpeciesNoPersonality(u16 species)
{
    species = SanitizeSpeciesId(species);

    if (MailSpeciesToSpecies(species, &species) == SPECIES_UNOWN)
        return species += SPECIES_UNOWN_B; // TODO
    return GetIconSpecies(species, 0);
}

const u32 *GetMonIconPtr(u16 species, u32 personality)
{
    return GetMonIconTiles(GetIconSpecies(species, personality), personality);
}

void FreeAndDestroyMonIconSprite(struct Sprite *sprite)
{
    FreeAndDestroyMonIconSprite_(sprite);
}

void LoadMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

void FreeMonIconPalettes(void)
{
    u32 i;
    u16 tag;
    for (i = 0; i < 16; i++)
    {
        tag = GetSpritePaletteTagByPaletteNum(i);
        if (IS_MON_ICON_TAG(tag))
            SetSpritePaletteTagByPaletteNum(i, TAG_NONE);
    }
}

void SpriteCB_MonIcon(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

const u32 *GetMonIconTiles(u16 species, u32 personality)
{
    const u32 *iconSprite;

    if (species > NUM_SPECIES)
        species = SPECIES_NONE;

    if (gSpeciesInfo[species].iconSpriteFemale != NULL && IsPersonalityFemale(species, personality))
        iconSprite = gSpeciesInfo[species].iconSpriteFemale;
    else if (gSpeciesInfo[species].iconSprite != NULL)
        iconSprite = gSpeciesInfo[species].iconSprite;
    else
        iconSprite = gSpeciesInfo[SPECIES_NONE].iconSprite;

    return iconSprite;
}

// Loads pokemon icon palettes into the BG palettes, in the PC. Changed to always load an all-white palette.
void TryLoadAllMonIconPalettesAtOffset(u16 offset)
{
    s32 i;
    const struct SpritePalette* monIconPalettePtr;
    if (offset <= BG_PLTT_ID(16 - ARRAY_COUNT(gMonIconPaletteTable)))
    {
        u16 whitePalette[16];
        for (i = 0; i < 16; i++)
          whitePalette[i] = 0xFFFF;
        monIconPalettePtr = gMonIconPaletteTable;
        for(i = ARRAY_COUNT(gMonIconPaletteTable) - 1; i >= 0; i--)
        {
            LoadPalette(&whitePalette[0], offset, PLTT_SIZE_4BPP);
            offset += 16;
            monIconPalettePtr++;
        }
    }
}

u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration & 0xFF;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;
    struct SpriteFrameImage image = {NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size]};

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = TAG_NONE,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

static void FreeAndDestroyMonIconSprite_(struct Sprite *sprite)
{
    struct SpriteFrameImage image = {NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]};
    sprite->images = &image;
    DestroySprite(sprite);
}

void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}
