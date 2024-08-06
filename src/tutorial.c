#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "sprite.h"
#include "window.h"
#include "random.h"

u8 GetZubatPositionY(u8 cord);
u8 isBeamColisionKoffing(struct Sprite *spriteBeam);

//==========BG GRAPHICS==========//
static const u32 TutorialBG1_Tileset[] = INCBIN_U32("graphics/tutorial/bg1_tileset.4bpp.lz");
static const u32 TutorialBG1_Tilemap[] = INCBIN_U32("graphics/tutorial/bg1_tilemap.bin.lz");

static const u32 TutorialBG2_Tileset[] = INCBIN_U32("graphics/tutorial/bg2_tileset.4bpp.lz");
static const u32 TutorialBG2_Tilemap[] = INCBIN_U32("graphics/tutorial/bg2_tilemap.bin.lz");

static const u16 TutorialBG_Palette[] = INCBIN_U16("graphics/tutorial/bgPal.gbapal");


//==========SPRITES GRAPHICS==========//
static const u8 Zubat_Sprite[] = INCBIN_U8("graphics/tutorial/sprites/zubatSprite.4bpp");
static const u8 Koffing_Sprite[] = INCBIN_U8("graphics/tutorial/sprites/koffingSprite.4bpp");
static const u8 Beam_Sprite[] = INCBIN_U8("graphics/tutorial/sprites/beamSprite.4bpp");

static const u16 ZubatKoffing_Palette[] = INCBIN_U16("graphics/tutorial/sprites/spritesPal.gbapal");


//==========VARS==========//

#define tTimer data[7]

#define HEIGHT_SCREEN 160
#define WIDTH_SCREEN 240

enum{
    CORD_TOP,
    CORD_BOTTOM,
};

#define MAX_NUM_BEAM_SPRITES 10
#define MAX_NUM_KOFFING_SPRITES 5

struct Tutorial
{
    u8 zubatSpriteId;
    u8 countBeam;
    u8 beamSpritesId[MAX_NUM_BEAM_SPRITES];
    u8 koffingSpritesId[MAX_NUM_KOFFING_SPRITES];
};

static EWRAM_DATA struct Tutorial tutorialObj = {0};

//==========SPRITES TEMPLATES==========//

#define TAG_SPRITE_ZUBAT 5400
#define TAG_SPRITE_KOFFING 5401
#define TAG_SPRITE_BEAM 5402
#define TAG_PALETTE 5403

static const struct OamData gSpriteOamData32x32 =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};


static const struct SpritePalette spritePaletteZubatKoffing =
{
        .data = ZubatKoffing_Palette,
        .tag = TAG_PALETTE, 
};


//==========ZUBAT SPRITE==========//

static const struct SpriteSheet spriteSheetZubat =
{
            .data = Zubat_Sprite,
            .size = 1536, // 32 * 96 /2
            .tag = TAG_SPRITE_ZUBAT,
};

enum{
    ZUBAT_MOVEMENT,
};

static const union AnimCmd sAnim_ZubatMovement[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(16, 16),
    ANIMCMD_FRAME(32, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnims_ZubatSprite[] =
{
    [ZUBAT_MOVEMENT] = sAnim_ZubatMovement,
};

static const struct SpriteTemplate spriteTemplateZubat=
{
    .tileTag = TAG_SPRITE_ZUBAT,
    .paletteTag = TAG_PALETTE,
    .oam = &gSpriteOamData32x32, 
    .anims = sAnims_ZubatSprite, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

//==========BEAM SPRITE==========//

#define sBeamIndex data[1]

static const struct SpriteSheet spriteSheetBeam =
{
            .data = Beam_Sprite,
            .size = 512, // 32 * 32 /2
            .tag = TAG_SPRITE_BEAM,
};


#define sTimer data[7] 

void SpriteCallbackBeam(struct Sprite *sprite)
{
    u8 id;

    if( sprite->x  >= WIDTH_SCREEN )
    {
        DestroySprite(sprite);
        tutorialObj.beamSpritesId[sprite->sBeamIndex] = 0xFF;
        tutorialObj.countBeam -=1;
    }

    id = isBeamColisionKoffing(sprite);
    if( id != 0xFF)
    {
        // sprite->invisible = TRUE;
        DestroySprite(sprite);
        gSprites[id].invisible = FALSE;
    }

    if(++ sprite->sTimer % 2 == 0){
        sprite->x += 4;
    }
}



static const struct SpriteTemplate spriteTemplateBeam=
{
    .tileTag = TAG_SPRITE_BEAM,
    .paletteTag = TAG_PALETTE,
    .oam = &gSpriteOamData32x32, 
    .anims = gDummySpriteAnimTable, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackBeam,
};

//==========KOFFING SPRITE==========//

static const struct SpriteSheet spriteSheetKoffing =
{
            .data = Koffing_Sprite,
            .size = 1024, // 32 * 64 /2
            .tag = TAG_SPRITE_KOFFING,
};


static const union AnimCmd sAnim_KoffingMovement[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(16, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnims_KoffingSprite[] =
{
    sAnim_KoffingMovement,
};

void SpriteCallbackKoffing(struct Sprite *sprite)
{
    if(++ sprite->sTimer % 2 == 0)
    {
        sprite->x -= 2;
    }
}

#undef sTimer

static const struct SpriteTemplate spriteTemplateKoffing =
{
    .tileTag = TAG_SPRITE_KOFFING,
    .paletteTag = TAG_PALETTE,
    .oam = &gSpriteOamData32x32, 
    .anims = sAnims_KoffingSprite, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackKoffing,
};

void LoadSpritesResources()
{
    LoadSpriteSheet(&spriteSheetZubat);
    LoadSpriteSheet(&spriteSheetKoffing);
    LoadSpriteSheet(&spriteSheetBeam);

    LoadSpritePalette(&spritePaletteZubatKoffing);
}

u8 CreateZubatSprite(u8 x, u8 y, u8 animNum)
{
    u8 id;

    id = CreateSprite(&spriteTemplateZubat, x, y, 0);
    StartSpriteAnim(&gSprites[id], animNum);

    return id;
}

u8 CreateKoffingSprite(u8 x, u8 y, u8 animNum)
{
    u8 id;

    id = CreateSprite(&spriteTemplateKoffing, x, y, 0);
    StartSpriteAnim(&gSprites[id], animNum);

    return id;
}

u8 CreateBeamSprite()
{
    u8 id;

    u8 yPos = GetZubatPositionY(CORD_TOP);
    u8 xPos = gSprites[tutorialObj.zubatSpriteId].x + 16;

    id = CreateSprite(&spriteTemplateBeam, xPos, yPos, 0);
    return id;
}

//==========BG TEMPLATES==========//
static const struct BgTemplate TutorialBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 6,
        .paletteMode = 0,
        .priority = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .paletteMode = 0,
        .priority = 1
    },
    {
        .bg = 2,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .paletteMode = 0,
        .priority = 2
    }
};
//==========BG LOAD FUNC==========//
static void LoadBGs_EventStart()
{
    InitBgsFromTemplates(0, TutorialBgTemplates, NELEMS(TutorialBgTemplates));


    LZ77UnCompVram(TutorialBG2_Tileset, (void*) VRAM + 0x4000 * TutorialBgTemplates[2].charBaseIndex);
    LZ77UnCompVram(TutorialBG2_Tilemap, (u16*) BG_SCREEN_ADDR(TutorialBgTemplates[2].mapBaseIndex));

    LZ77UnCompVram(TutorialBG1_Tileset, (void*) VRAM + 0x4000 * TutorialBgTemplates[1].charBaseIndex);
    LZ77UnCompVram(TutorialBG1_Tilemap, (u16*) BG_SCREEN_ADDR(TutorialBgTemplates[1].mapBaseIndex));

    LoadPalette(TutorialBG_Palette, 0x00, 0x20);

    ResetAllBgsCoordinates();

    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
}

static void VBlank_CB_Tutorial()
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_Tutorial()
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

//==========Other functions==========//


u8 GetZubatPositionY(u8 cord)
{
    u8 topEdge = gSprites[tutorialObj.zubatSpriteId].y - 16;
    u8 bottomEdge = gSprites[tutorialObj.zubatSpriteId].y + 16;

    if(cord == CORD_TOP){
        return (topEdge <= 0) ? 0 : gSprites[tutorialObj.zubatSpriteId].y;
    }else{
        return (bottomEdge >= HEIGHT_SCREEN) ? HEIGHT_SCREEN : gSprites[tutorialObj.zubatSpriteId].y;
    }
}

u8 isBeamColisionKoffing(struct Sprite *spriteBeam)
{
    s8 i;
    struct Sprite *sprite2;

    for ( i = 0; i < MAX_NUM_KOFFING_SPRITES; i++)
    {
        if(tutorialObj.koffingSpritesId[i] == 0xFF)
            continue;

            sprite2 = &gSprites[tutorialObj.koffingSpritesId[i]];

            if (!(spriteBeam->x + 32 <= sprite2->x || spriteBeam->x >= sprite2->x + 32 ||
             spriteBeam->y + 24 <= sprite2->y || spriteBeam->y >= sprite2->y + 24))
                return tutorialObj.koffingSpritesId[i];
    }
    
    return 0xFF;
}

u8 GetFreeIndexKoffingSpritesIds()
{
    u8 i;
    for ( i = 0; i < MAX_NUM_KOFFING_SPRITES; i++)
    {
        if( tutorialObj.koffingSpritesId[i] == 0xFF)
            return i;
    }
    return 0xFF;
}

//==========tasks==========//

static void Task_HandleMovement_Zubat(u8 taskId);

static void Task_MainWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        tutorialObj.countBeam = 0;
        memset(tutorialObj.koffingSpritesId, 0xFF, sizeof(tutorialObj.koffingSpritesId));
        tutorialObj.zubatSpriteId = CreateZubatSprite(50, 50 ,0);
        gTasks[taskId].func = Task_HandleMovement_Zubat;
    }
}

static void Task_HandleMovement_Zubat(u8 taskId)
{
     
    if(JOY_HELD(DPAD_UP) && GetZubatPositionY(CORD_TOP) > 0)
    {
        gSprites[tutorialObj.zubatSpriteId].y -= 1;
    }

    if(JOY_HELD(DPAD_DOWN) && GetZubatPositionY(CORD_BOTTOM) < HEIGHT_SCREEN)
    {
        gSprites[tutorialObj.zubatSpriteId].y += 1;
    }

    if(JOY_NEW(A_BUTTON))
    {
        if(tutorialObj.countBeam < MAX_NUM_BEAM_SPRITES)
        {
            tutorialObj.beamSpritesId[tutorialObj.countBeam] = CreateBeamSprite();
            gSprites[tutorialObj.beamSpritesId[tutorialObj.countBeam]].sBeamIndex = tutorialObj.countBeam;
            tutorialObj.countBeam += 1;
        }
    }
}

static void  Task_WaitToCreateKoffings(u8 taskId);

static void  Task_CreateKoffings(u8 taskId)
{
    u8 i, yPos, numSpriteToCreate, indexKoffing;

    if (!gPaletteFade.active)
    {
       
       numSpriteToCreate = Random() % MAX_NUM_KOFFING_SPRITES;

        for ( i = 0; i < numSpriteToCreate; i++)
        {
            indexKoffing = GetFreeIndexKoffingSpritesIds();
            if( indexKoffing == 0xFF)
                break;

            yPos = Random() % HEIGHT_SCREEN;
            tutorialObj.koffingSpritesId[indexKoffing] = CreateKoffingSprite(240, yPos, 0);
            gSprites[tutorialObj.koffingSpritesId[indexKoffing]].invisible = FALSE;
        }
    }
}

static void  Task_WaitToCreateKoffings(u8 taskId)
{
    if(++gTasks[taskId].tTimer == 50)
    {
        gTasks[taskId].tTimer = 0;
        gTasks[taskId].func = Task_CreateKoffings;
    }
}   


//==========GFX SETUP FUNC==========//
void CB2_InitTutorialSetUp()
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        ResetPaletteFade();
        DmaClearLarge16(3, (void *) VRAM, VRAM_SIZE, 0x1000);
        FreeAllSpritePalettes();
        gMain.state++;
    case 1:
        VBlank_CB_Tutorial();
        CB2_Tutorial();
        gMain.state++;
        break;
    case 2:
        LoadBGs_EventStart();
        LoadSpritesResources();
        gMain.state++;
        break;
    case 3:
        CreateTask(Task_MainWaitFadeIn, 0);
        CreateTask(Task_CreateKoffings, 1);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 4:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
    default:
        SetVBlankCallback(VBlank_CB_Tutorial);
        SetMainCallback2(CB2_Tutorial);
    }
}

//==========CALLNATIVE FUNC==========//
bool8 StartTutorial_CB2()
{
    if (!gPaletteFade.active)
    {
        gMain.state = 0;
        CleanupOverworldWindowsAndTilemaps();
        SetMainCallback2(CB2_InitTutorialSetUp);

        return TRUE;
    }

    return FALSE;
}