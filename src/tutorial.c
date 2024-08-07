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

static void HandleMovement_Zubat();
u8 GetZubatPositionY(u8 cord);
u8 isZubatColisionKoffing(struct Sprite *spriteZubat);
u8 isBeamColisionKoffing(struct Sprite *spriteBeam);
static void DestroySpriteBeam(struct Sprite *sprite);
static void Task_Movement_Bgs(u8 taskId);
static void  Task_WaitToCreateKoffings(u8 taskId);

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

#define tTimeToWait data[3]
#define tTimer data[7]

#define HEIGHT_SCREEN 160
#define WIDTH_SCREEN 240

enum{
    CORD_TOP,
    CORD_BOTTOM,
};

#define MAX_NUM_BEAM_SPRITES 10
#define MAX_NUM_KOFFING_SPRITES 8

struct Tutorial
{
    u8 zubatSpriteId;
    u8 countBeam;
    u8 beamSpritesId[MAX_NUM_BEAM_SPRITES];
    u8 koffingSpritesId[MAX_NUM_KOFFING_SPRITES];
};

static EWRAM_DATA struct Tutorial tutorialObj = {0};

const u8 sTextColors[]= {TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY};
const u8 gText_HowToPlay[] = _("Zubat no ve nada. Ayudalo a\n volar por cueva sin chocarse con\p los Pokemon salvajes.\pPulsa {DPAD_UPDOWN} para moverte\nPulsa {A_BUTTON} localizar los obstaculos.");

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
#define sTimer data[7] 

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

#define sColision data[6] 

void SpriteCallbackZubat(struct Sprite *sprite)
{
    HandleMovement_Zubat();

    u8 idKoffing = isZubatColisionKoffing(sprite);

    if( idKoffing != 0xFF && sprite->sColision != TRUE)
    {
        sprite->sColision = TRUE;
        sprite->sTimer = 200;
        gSprites[idKoffing].invisible = FALSE;
    }

    if(sprite->sColision && --sprite->sTimer % 10 == 0)
    {
        sprite->invisible = !sprite->invisible;
    }

    if(sprite->sTimer == 0)
    {
         sprite->sColision = FALSE;
         sprite->invisible = FALSE;
    }
}

static const struct SpriteTemplate spriteTemplateZubat=
{
    .tileTag = TAG_SPRITE_ZUBAT,
    .paletteTag = TAG_PALETTE,
    .oam = &gSpriteOamData32x32, 
    .anims = sAnims_ZubatSprite, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackZubat,
};

//==========BEAM SPRITE==========//

#define sBeamIndex data[1]

static const struct SpriteSheet spriteSheetBeam =
{
    .data = Beam_Sprite,
    .size = 512, // 32 * 32 /2
    .tag = TAG_SPRITE_BEAM,
};

void SpriteCallbackBeam(struct Sprite *sprite)
{
    u8 idKoffing;

    if( sprite->x  >= WIDTH_SCREEN )
    {
        DestroySpriteBeam(sprite);
    }

    idKoffing = isBeamColisionKoffing(sprite);
    if( idKoffing != 0xFF)
    {
        DestroySpriteBeam(sprite);
        gSprites[idKoffing].invisible = FALSE;
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
#define sKoffingIndex data[2]

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
    if( sprite-> x  == 0)
    {
        tutorialObj.koffingSpritesId[sprite->sKoffingIndex] = 0xFF;
        DestroySprite(sprite);
    }

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

    gSprites[id].sColision = FALSE;

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

static void DestroySpriteBeam(struct Sprite *sprite)
{
    DestroySprite(sprite);
    tutorialObj.beamSpritesId[sprite->sBeamIndex] = 0xFF;
    tutorialObj.countBeam -=1;
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
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 28,
        .paletteMode = 0,
        .priority = 1
    },
    {
        .bg = 3,
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
    ShowBg(2);
    ShowBg(3);
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

//==========WINDOW LOAD FUNC==========//

enum{
    WINDOW_MSG
};

static const struct WindowTemplate sWindowTemplatesTutorial[] =
{
   [WINDOW_MSG]{
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 6,
        .width = 28,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE,
};

static void InitWindowTutorial()
{
	InitWindows(sWindowTemplatesTutorial);
    DeactivateAllTextPrinters();
	LoadPalette(GetOverworldTextboxPalettePtr(), 0xf0, 0x20);
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

u8 isZubatColisionKoffing(struct Sprite *spriteZubat)
{
    s8 i;
    struct Sprite *sprite2;

    for ( i = 0; i < MAX_NUM_KOFFING_SPRITES; i++)
    {
        if(tutorialObj.koffingSpritesId[i] == 0xFF)
            continue;

        sprite2 = &gSprites[tutorialObj.koffingSpritesId[i]];

        if (!(spriteZubat->x + 24 <= sprite2->x || spriteZubat->x >= sprite2->x + 24 ||
            spriteZubat->y + 24 <= sprite2->y || spriteZubat->y >= sprite2->y + 24))
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

u8 RandomInRange(u8 min, u8 max)
{
    return Random() % (max - min + 1) + min;
}

static void HandleMovement_Zubat()
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

//==========tasks==========//

static void Task_StartGame(u8 taskId);
static void Task_WaitToCreateKoffings(u8 taskId);
static void Task_CreateKoffings(u8 taskId);
static void Task_RemoveWindow(u8 taskId);

static void Task_MainWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        PutWindowTilemap(WINDOW_MSG);
        DrawStdWindowFrame(WINDOW_MSG, FALSE);
        FillWindowPixelBuffer(WINDOW_MSG, PIXEL_FILL(1));
        CopyWindowToVram(WINDOW_MSG, 3);
        StringExpandPlaceholders(gStringVar4, gText_HowToPlay);
        AddTextPrinterForMessage(TRUE);

        gTasks[taskId].func = Task_RemoveWindow;
    }
}

static void Task_RemoveWindow(u8 taskId)
{
    if(!RunTextPrintersAndIsPrinter0Active() && JOY_NEW(A_BUTTON))
    {
        ClearDialogWindowAndFrameToTransparent(WINDOW_MSG, FALSE);
        ClearStdWindowAndFrameToTransparent(WINDOW_MSG, FALSE);
        CopyWindowToVram(WINDOW_MSG, COPYWIN_GFX);
        RemoveWindow(WINDOW_MSG);
        gTasks[taskId].func = Task_StartGame;
    }
}

static void Task_StartGame(u8 taskId)
{
    tutorialObj.countBeam = 0;
    memset(tutorialObj.koffingSpritesId, 0xFF, sizeof(tutorialObj.koffingSpritesId));
    tutorialObj.zubatSpriteId = CreateZubatSprite(50, 50 ,0);
    CreateTask(Task_CreateKoffings, 1);
    gTasks[taskId].func = Task_Movement_Bgs;
}

#define tBG2HOFS data[4]
#define tBG3HOFS data[5]

static void Task_Movement_Bgs(u8 taskId)
{
    if(gTasks[taskId].tTimer % 4 == 0) 
    {
        SetGpuReg(REG_OFFSET_BG2HOFS, ++gTasks[taskId].tBG2HOFS);
    }

    if(gTasks[taskId].tTimer % 8 == 0) 
    {
        SetGpuReg(REG_OFFSET_BG3HOFS, ++gTasks[taskId].tBG3HOFS);
    }

    gTasks[taskId].tTimer += 1;
}

#undef tBG2HOFS
#undef tBG3HOFS

static void  Task_CreateKoffings(u8 taskId)
{
    u8 i, yPos, numSpriteToCreate, indexKoffing;
    bool8 positionValid;
    u8 attempts = 0;

    if (!gPaletteFade.active)
    {
       numSpriteToCreate = (Random() % (MAX_NUM_KOFFING_SPRITES/2)) + 1;

        for ( i = 0; i < numSpriteToCreate; i++)
        {

            indexKoffing = GetFreeIndexKoffingSpritesIds();
            if( indexKoffing == 0xFF)
                break;
            
            do{
                positionValid = TRUE;
                yPos = RandomInRange(16, HEIGHT_SCREEN-16);

                // Verificar que no se solape con ningún sprite existente
                for (u8 j = 0; j < MAX_NUM_KOFFING_SPRITES; j++)
                {
                    if (tutorialObj.koffingSpritesId[j] != 0xFF)
                    {
                        u8 existingYPos = gSprites[tutorialObj.koffingSpritesId[j]].y;
                        if (abs(yPos - existingYPos) < 32)  // 32 es el tamaño del sprite
                        {
                            positionValid = FALSE;
                            break;
                        }
                    }
                }
                attempts++;

            } while (!positionValid && attempts < 10);

            if(positionValid)
            {
                tutorialObj.koffingSpritesId[indexKoffing] = CreateKoffingSprite(240, yPos, 0);
                gSprites[tutorialObj.koffingSpritesId[indexKoffing]].sKoffingIndex = indexKoffing;
                gSprites[tutorialObj.koffingSpritesId[indexKoffing]].invisible = TRUE;
            }
        }
    }
    gTasks[taskId].tTimeToWait = RandomInRange(50, 100);
    gTasks[taskId].func = Task_WaitToCreateKoffings;
}

static void  Task_WaitToCreateKoffings(u8 taskId)
{
    if(++gTasks[taskId].tTimer == gTasks[taskId].tTimeToWait)
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
        InitWindowTutorial();
        LoadSpritesResources();
        LoadMessageBoxAndBorderGfx();
        gMain.state++;
        break;
    case 3:
        CreateTask(Task_MainWaitFadeIn, 0);
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