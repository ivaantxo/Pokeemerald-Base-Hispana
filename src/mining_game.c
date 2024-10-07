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
#include "main_menu.h"
#include "menu.h"
#include "item.h"
#include "event_data.h"

//==========FUNCIONES STATIC==========//

static void Task_FadeIn(u8 taskId);
static void Task_MainHandle(u8 taskId);
static void Task_FadeOut(u8 taskId);

static bool8 IsCursorYPotionOnBorder(bool8 isUp);
static bool8 IsCursorXPotionOnBorder(bool8 isRight);

static void SpriteCallbackCursor(struct Sprite *sprite);

static void UpdateTileStone(u8 x, u8 y); 
static void UpdateGrietas(void);

//==========VARIBLES EWRAM_DATA==========//

#define WINDOW_MINING_WIDTH 23
#define WINDOW_MINING_HEIGHT 16
#define DEST_TILES_STONES (WINDOW_MINING_WIDTH * WINDOW_MINING_HEIGHT)

#define ITEM_TAG 6000
#define MAX_NUM_ITEMS_MINING 6 //Máximo número de items por pared
#define MAX_NUM_GRIETAS_SPRITES 6
#define NUM_ITEMS_POSIBLES_MINERIA 13 //Número de tipos de items posibles. Estos son los items que pueden salir en el minijuego. Si quieres añadir más, debes actualizar este número, y añadir tus items a la lista en GenerateItemsSprites

struct MiningGame
{
    u8 cursorSpriteId;
    u8 grietasIds[MAX_NUM_GRIETAS_SPRITES];
    u8 toolsSpriteId[3];
    u8 blockX, blockY; //Posición X e Y del cursor
    u8 tilesStones[WINDOW_MINING_HEIGHT / 2][12]; //Estado de las piedras a picar. Están en bloques de 16px
    u16 itemsIds[MAX_NUM_ITEMS_MINING]; //Id de los item
    u8 itemsSpritesIds[MAX_NUM_ITEMS_MINING]; //Id de los sprites de items que hay para desenterrar
    bool8 itemsStatus[MAX_NUM_ITEMS_MINING]; //Indica si el item fue desenterrado o no
    u8 toolType; //Tipo de cursor seleccionado: pico, martillo...
    u8 bombaSpriteId;
};

static EWRAM_DATA struct MiningGame mining = {0};

const u8 sWallDestroy[] = _("¡El muro se ha derrumbado!");
const u8 sMiningGetItems[] = _("Has obtenido {STR_VAR_1}.");
const u8 gText_DescMineria[] = _("¡Mira, una pared cubierta de rocas!\n"
                                 "Parece que hay objetos debajo…\p"
                                 "Cambia de herramientas con {L_BUTTON} y {R_BUTTON}.");

//==========BG GRAPHICS==========//

static const u32 Bg_Gfx[] = INCBIN_U32("graphics/mining_game/bg.4bpp.lz");
static const u32 Bg_Map[] = INCBIN_U32("graphics/mining_game/bg.bin.lz");

static const u16 Bg_Pal[] = INCBIN_U16("graphics/mining_game/bg.gbapal");

static const u8 Rocas_Gfx[] = INCBIN_U8("graphics/mining_game/sprites/rocas.4bpp");
static const u16 GrietasRocas_Pal[] = INCBIN_U16("graphics/mining_game/sprites/grietas_rocas.gbapal");

//==========SPRITES GRAPHICS==========//

static const u8 Cursor_Gfx[] = INCBIN_U8("graphics/mining_game/sprites/cursor.4bpp");
static const u16 Cursor_Pal[] = INCBIN_U16("graphics/mining_game/sprites/cursor.gbapal");

static const u8 Grietas_Gfx[] = INCBIN_U8("graphics/mining_game/sprites/grietas.4bpp");

static const u8 Herramientas_Gfx[] = INCBIN_U8("graphics/mining_game/sprites/herramientas.4bpp");
static const u16 Herramientas_Pal[] = INCBIN_U16("graphics/mining_game/sprites/herramientas.gbapal");

static const u8 Bomba_Gfx[] = INCBIN_U8("graphics/mining_game/sprites/bomba.4bpp");
static const u16 Bomba_Pal[] = INCBIN_U16("graphics/mining_game/sprites/bomba.gbapal");

//==========BG TEMPLATES==========//

//enum BgsMineria
//{
//    BG_ROCAS,
//    BG_FONDO
//};

static const struct BgTemplate MiningGameBgTemplates[] =
{
    //[BG_TEXTO] =
    //{
    //    .bg = 0, 
    //    .charBaseIndex = 0,
    //    .mapBaseIndex = 15,
    //    .priority = 0
    //},
//    [BG_ROCAS] =
    {
        .bg = 0, 
        .charBaseIndex = 0,
        .mapBaseIndex = 15,
        .priority = 0
    },
//    [BG_FONDO] =
    {
        .bg = 3,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    }
};

//==========SPRITE TEMPLATES==========//

enum TagsMineria
{
    TAG_CURSOR = 5400,
    TAG_GRIETAS,
    TAG_HERRAMIENTAS,
    TAG_BOMBA,
};

static const struct OamData gSpriteOamData32x32 =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 0,
};

static const struct OamData gSpriteOamData16x16 =
{
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .priority = 0,
};

//==========SPRITE CURSOR==========//

static const struct SpriteSheet sSpriteSheet_Cursor =
{
    .data = Cursor_Gfx,
    .size = 1536, 
    .tag = TAG_CURSOR,
};

static const struct SpritePalette sSpritePalette_Cursor =
{
    .data = Cursor_Pal,
    .tag = TAG_CURSOR, 
};

enum CursoresMineria
{
    CURSOR_NORMAL,
    CURSOR_PICO,
    CURSOR_MARTILLO,
    CURSOR_BOMBA,
};

static const union AnimCmd sAnim_CursorNormal[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CursorPico[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END
};


static const union AnimCmd sAnim_CursorMartillo[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_CursorSprite[] =
{
    [CURSOR_NORMAL] = sAnim_CursorNormal,
    [CURSOR_PICO] = sAnim_CursorPico,
    [CURSOR_MARTILLO] = sAnim_CursorMartillo,
    [CURSOR_BOMBA] = sAnim_CursorMartillo
};

static const struct SpriteTemplate sSpriteTemplate_Cursor =
{
    .tileTag = TAG_CURSOR,
    .paletteTag = TAG_CURSOR,
    .oam = &gSpriteOamData32x32,
    .anims = sAnims_CursorSprite,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackCursor,
};

//==========SPRITE GRIETA==========//

static const struct SpriteSheet sSpriteSheet_Grietas =
{
    .data = Grietas_Gfx,
    .size = 3072, 
    .tag = TAG_GRIETAS,
};

static const struct SpritePalette sSpritePalette_Grietas =
{
    .data = GrietasRocas_Pal,
    .tag = TAG_GRIETAS, 
};

enum EstadosGrieta
{
    GRIETA_STATE_0,
    GRIETA_STATE_1,
    GRIETA_STATE_2,
    GRIETA_STATE_3,
    GRIETA_STATE_4,
    GRIETA_STATE_5
};

static const union AnimCmd sAnim_GrietaState0[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GrietaState1[] =
{
    ANIMCMD_FRAME(16, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GrietaState2[] =
{
    ANIMCMD_FRAME(32, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GrietaState3[] =
{
    ANIMCMD_FRAME(48, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GrietaState4[] =
{
    ANIMCMD_FRAME(64, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GrietaState5[] =
{
    ANIMCMD_FRAME(80, 16),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnims_GrietaSprite[] =
{
    [GRIETA_STATE_0] = sAnim_GrietaState0,
    [GRIETA_STATE_1] = sAnim_GrietaState1,
    [GRIETA_STATE_2] = sAnim_GrietaState2,
    [GRIETA_STATE_3] = sAnim_GrietaState3,
    [GRIETA_STATE_4] = sAnim_GrietaState4,
    [GRIETA_STATE_5] = sAnim_GrietaState5
};

static const struct SpriteTemplate sSpriteTemplate_Grieta =
{
    .tileTag = TAG_GRIETAS,
    .paletteTag = TAG_GRIETAS,
    .oam = &gSpriteOamData32x32,
    .anims = sAnims_GrietaSprite,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

//==========SPRITE HERRAMIENTAS==========//

static const struct SpriteSheet sSpriteSheet_Herramientas =
{
    .data = Herramientas_Gfx,
    .size = 1536, 
    .tag = TAG_HERRAMIENTAS,
};

static const struct SpritePalette sSpritePalette_Herramientas =
{
    .data = Herramientas_Pal,
    .tag = TAG_HERRAMIENTAS,
};

enum HerramientasMineria
{
    PICO,
    MARTILLO,
    BOMBA,
    HERRAMIENTAS_TOTALES,
};

static const union AnimCmd sAnim_Pico[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Martillo[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_Bomba[] =
{
    ANIMCMD_FRAME(32, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_Herramientas[] =
{
    [PICO] = sAnim_Pico,
    [MARTILLO] = sAnim_Martillo,
    [BOMBA] = sAnim_Bomba
};

static const struct SpriteTemplate sSpriteTemplate_Herramientas =
{
    .tileTag = TAG_HERRAMIENTAS,
    .paletteTag = TAG_HERRAMIENTAS,
    .oam = &gSpriteOamData32x32,
    .anims = sAnims_Herramientas,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const union AffineAnimCmd sAffineAnim_Item[] =
{
    AFFINEANIMCMD_FRAME(0.5, 0.5, 0, 8),
    AFFINEANIMCMD_FRAME(1, 1, 0, 8),
    AFFINEANIMCMD_FRAME(1.5, 1.5, 0, 8),
    AFFINEANIMCMD_FRAME(2, 2, 0, 8),
    AFFINEANIMCMD_FRAME(1.5, 1.5, 0, 8),
    AFFINEANIMCMD_FRAME(1, 1, 0, 8),
    AFFINEANIMCMD_FRAME(0.5, 0.5, 0, 8),
    AFFINEANIMCMD_FRAME(0, 0, 0, 8),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sAffineAnims_Items[] =
{
    sAffineAnim_Item
};

//==========SPRITE BOMBA==========//

static const struct SpriteSheet sSpriteSheet_Bomba =
{
    .data = Bomba_Gfx,
    .size = 16 * 64 / 2,
    .tag = TAG_BOMBA,
};

static const struct SpritePalette sSpritePalette_Bomba =
{
    .data = Bomba_Pal,
    .tag = TAG_BOMBA,
};

static const union AnimCmd sAnim_BombaStates[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(4, 16),
    ANIMCMD_FRAME(8, 16),
    ANIMCMD_FRAME(12, 16),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_Bomba[] =
{
    sAnim_BombaStates
};

#define sRow data[2]
#define sColumn data[3]
#define sTimer data[7]

static void  SpriteCallbackBomba(struct Sprite *sprite)
{
    if (sprite->animEnded)
    {
        UpdateTileStone(sprite->sColumn, sprite->sRow);
        UpdateGrietas();
        DestroySprite(sprite);
        mining.bombaSpriteId = 0xFF;
    }

    if (+sprite->sTimer > 20)
        StartSpriteAnim(&gSprites[mining.bombaSpriteId], 0);
}

static const struct SpriteTemplate sSpriteTemplate_Bomba =
{
    .tileTag = TAG_BOMBA,
    .paletteTag = TAG_BOMBA,
    .oam = &gSpriteOamData16x16,
    .anims = sAnims_Bomba,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackBomba,
};

//==========SPRITES FUNC==========//

static void LoadSpritesResources(void)
{
    LoadSpriteSheet(&sSpriteSheet_Cursor); 
    LoadSpritePalette(&sSpritePalette_Cursor);

    LoadSpriteSheet(&sSpriteSheet_Grietas); 
    LoadSpritePalette(&sSpritePalette_Grietas);

    LoadSpriteSheet(&sSpriteSheet_Herramientas); 
    LoadSpritePalette(&sSpritePalette_Herramientas);

    LoadSpriteSheet(&sSpriteSheet_Bomba); 
    LoadSpritePalette(&sSpritePalette_Bomba);
}

static void CreateSpriteGrietas(void)
{
    u8 id, x = 16, y = 6;

    for (u8 i = 0; i < MAX_NUM_GRIETAS_SPRITES; i++)
    {   
        id = CreateSprite(&sSpriteTemplate_Grieta, x, y, 0);
        StartSpriteAnim(&gSprites[id], GRIETA_STATE_0);
        gSprites[id].invisible = TRUE;
        mining.grietasIds[i] = id;
        x += 32;
    }
}

static void CreateSpriteHerramientas(void)
{
    u8 id, y = 51;

    for (u8 i = 0; i < HERRAMIENTAS_TOTALES; i++)
    {
        id = CreateSprite(&sSpriteTemplate_Herramientas, 218, y, 0);
        StartSpriteAnim(&gSprites[id], i);
        mining.toolsSpriteId[i] = id;
        y += 44;
    }
}

static void DestroySpritesGame(void)
{
    u8 i;
    DestroySpriteAndFreeResources(&gSprites[mining.cursorSpriteId]);
    
    for (i = 0; i < MAX_NUM_GRIETAS_SPRITES; i++)
    {
        DestroySpriteAndFreeResources(&gSprites[mining.grietasIds[i]]);
    }

    for (i = 0; i < HERRAMIENTAS_TOTALES; i++)
    {
        DestroySpriteAndFreeResources(&gSprites[mining.toolsSpriteId[i]]);
    }

    for (i = 0; i < MAX_NUM_ITEMS_MINING; i++)
    {
        if (mining.itemsSpritesIds[i] != 0xFF)
            DestroySpriteAndFreeResources(&gSprites[mining.itemsSpritesIds[i]]);
    }
}

#define sIsHidden data[1]
#define sState data[4]
#define sIndex data[6]


static void SpriteCallbackCursor(struct Sprite *sprite)
{
    if (!JOY_NEW(A_BUTTON))
        return;

    switch (mining.toolType)
    {
        case MARTILLO:
            PlaySE(SE_M_DIG);
            break;
        case BOMBA:
            PlaySE(SE_BANG);
            break;
        default:
            PlaySE(SE_M_DIG);
            break;
    }
}

static void SpriteCallbackItemIconSprite(struct Sprite *sprite)
{
    if (!sprite->sIsHidden)
    {
        if (sprite->affineAnimEnded && sprite->oam.affineMode != ST_OAM_AFFINE_OFF)
        {
            sprite->oam.affineMode = ST_OAM_AFFINE_OFF;
            ResetAffineAnimData();
        }
        return;
    }

    if (mining.tilesStones[sprite->sRow][sprite->sColumn] == 0 
    && mining.tilesStones[sprite->sRow][sprite->sColumn + 1] == 0
    && mining.tilesStones[sprite->sRow + 1][sprite->sColumn] == 0
    && mining.tilesStones[sprite->sRow + 1][sprite->sColumn + 1] == 0)
    {
        sprite->oam.affineMode = ST_OAM_AFFINE_NORMAL;
        InitSpriteAffineAnim(sprite);
        sprite->sIsHidden = FALSE;
        mining.itemsStatus[sprite->sIndex] = TRUE;
    }
}

static void UpdateGrietas(void)
{
    u8 id, animNum;
    bool8 allInvisibles = TRUE;

    for (u8 i = 0 ; i <  MAX_NUM_GRIETAS_SPRITES; i++)
    { 
        id = mining.grietasIds[i];
        animNum = gSprites[id].animNum;

        if (gSprites[id].invisible || gSprites[id].animNum == GRIETA_STATE_5)
            continue;

        switch (mining.toolType)
        {
            default:
            case PICO:
                StartSpriteAnim(&gSprites[id], gSprites[id].animNum + 1);
                break;
            case MARTILLO:
                animNum = (animNum + 2 > 5) ? 5 : animNum + 2;
                StartSpriteAnim(&gSprites[id], animNum);
                break;
            case BOMBA:
                StartSpriteAnim(&gSprites[id], GRIETA_STATE_5);
                break;
        }

        animNum = gSprites[id].animNum;
        
        if (i > 0 && animNum == GRIETA_STATE_5)
        {
            gSprites[mining.grietasIds[i - 1]].invisible = FALSE;
            if (mining.toolType == BOMBA)
                StartSpriteAnim(&gSprites[mining.grietasIds[i - 1]], GRIETA_STATE_4);
        }
        allInvisibles = FALSE;
    }

    if (allInvisibles)
        gSprites[mining.grietasIds[MAX_NUM_GRIETAS_SPRITES - 1]].invisible = FALSE;
}

void TryCreateSpriteBomba(void)
{
    if (mining.toolType == BOMBA)
    {
        mining.bombaSpriteId = CreateSprite(&sSpriteTemplate_Bomba, gSprites[mining.cursorSpriteId].x, gSprites[mining.cursorSpriteId].y, 0);
        gSprites[mining.bombaSpriteId].sTimer = 0;
        gSprites[mining.bombaSpriteId].sColumn = mining.blockX;
        gSprites[mining.bombaSpriteId].sRow = mining.blockY;
    }
}

bool8 CheckStateGrietas(void)
{
    u8 id;

    for (u8 i = 0 ; i < MAX_NUM_GRIETAS_SPRITES; i++)
    { 
        id = mining.grietasIds[i];
        if (gSprites[id].animNum != GRIETA_STATE_5)
            return FALSE;
    }

    return TRUE;
}

void UpdateSelectTool(void)
{
    u8 id; 

    for (u8 i = 0; i < HERRAMIENTAS_TOTALES; i++)
    {
        id = mining.toolsSpriteId[i];

        if (mining.toolType != i)
        {
            gSprites[id].oam.objMode = ST_OAM_OBJ_BLEND;
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL | BLDCNT_EFFECT_BLEND);
            SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 8));
        }
        else
            gSprites[id].oam.objMode = ST_OAM_OBJ_NORMAL;
    }
}

//==========BG LOAD FUNC==========//

static void LoadBGs_MiningGame(void)
{
    InitBgsFromTemplates(0, MiningGameBgTemplates, ARRAY_COUNT(MiningGameBgTemplates));

    LZ77UnCompVram(Bg_Gfx, (void*) BG_CHAR_ADDR(MiningGameBgTemplates[1].charBaseIndex));
    LZ77UnCompVram(Bg_Map, (u16*) BG_SCREEN_ADDR(MiningGameBgTemplates[1].mapBaseIndex));

    LoadPalette(Bg_Pal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);

    ResetAllBgsCoordinates(); 

    LoadBgTiles(0, Rocas_Gfx, 1024, DEST_TILES_STONES);
    //LoadBgTiles(BG_ROCAS, Rocas_Gfx, 1024, DEST_TILES_STONES);
    LoadPalette(GrietasRocas_Pal, BG_PLTT_ID(1), PLTT_SIZE_4BPP);

    //ShowBg(BG_ROCAS);
    //ShowBg(BG_FONDO);
    ShowBg(0);
    ShowBg(3);
}

#define WINDOW_TILES    0

static const struct WindowTemplate sWindowTemplatesMiningGame[] =
{
    [WINDOW_TILES]
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 3,
        .width = WINDOW_MINING_WIDTH,
        .height = WINDOW_MINING_HEIGHT,
        .paletteNum = 1,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE,
};

static const struct WindowTemplate sWindowTemplate_MsgBox =
{
    .bg = 0,
    .tilemapLeft = 2,
    .tilemapTop = 15,
    .width = 27,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 1
};

static void InitWindowMiningGame(void)
{
	InitWindows(sWindowTemplatesMiningGame);
    DeactivateAllTextPrinters();
	LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(15), PLTT_SIZE_4BPP);
    PutWindowTilemap(WINDOW_TILES);
}

void RemoveWindowMiningGame(u8 windowId)
{
    ClearDialogWindowAndFrameToTransparent(windowId, TRUE);
    ClearStdWindowAndFrameToTransparent(windowId, FALSE);
    CopyWindowToVram(windowId, COPYWIN_GFX);
    RemoveWindow(windowId);
}

static void VBlank_CB_MiningGame(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_MiningGame(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

#define INITIAL_POS_X 0
#define INITIAL_POS_Y 3

#define CALC_TILE_NUM(n) DEST_TILES_STONES + (n * 4)
#define TILE_COUNT 8

void GenerateItemsSprites(void)
{
    u8 i, idItem;
    u16 xValues[6] = {16, 48, 80, 112, 144, 176};
    u16 yValues[4] = {48, 80, 112, 144};


    u16 itemsPosibles[NUM_ITEMS_POSIBLES_MINERIA] =
    {
        ITEM_FIRE_STONE, ITEM_WATER_STONE, ITEM_AERODACTYLITE, 
        ITEM_SKULL_FOSSIL, ITEM_CLAW_FOSSIL, ITEM_LEAF_STONE,
        ITEM_ICE_STONE, ITEM_MAX_REVIVE, ITEM_OLD_AMBER, ITEM_MASTER_BALL,
        ITEM_ABILITY_PATCH, ITEM_DYNAMAX_CANDY, ITEM_GALARICA_WREATH
    };

    u8 numItems = RandomMinMax(2, 4);

    ShuffleList((u16*)xValues, ARRAY_COUNT(xValues));
    ShuffleList((u16*)yValues, ARRAY_COUNT(yValues));
    ShuffleList(itemsPosibles, ARRAY_COUNT(itemsPosibles));

    for (i = 0; i < numItems; i++)
    {
        if (mining.itemsSpritesIds[i] != 0xFF || itemsPosibles[i] == ITEM_NONE)
            continue;

        idItem = AddItemIconSprite(ITEM_TAG + i, ITEM_TAG + i,  itemsPosibles[i]);
        mining.itemsSpritesIds[i] = idItem;
        mining.itemsIds[i] = itemsPosibles[i];

        gSprites[idItem].x = xValues[i] + 4;
        gSprites[idItem].y = yValues[i] - 2;
        gSprites[idItem].sIsHidden = TRUE;
        gSprites[idItem].sIndex = i;
        gSprites[idItem].sState = 0;
        gSprites[idItem].sTimer = 0;
        gSprites[idItem].sRow = yValues[i] / 16 - 3;
        gSprites[idItem].sColumn = (xValues[i] / 16 == 0) ? 0 : xValues[i] / 16 - 1; 
        gSprites[idItem].callback = SpriteCallbackItemIconSprite;
        gSprites[idItem].affineAnims = sAffineAnims_Items;
        gSprites[idItem].oam.priority = 2; 
    }
}

void LoadRandomTilesStones(void)
{
    u8 i, j;
    u8 x = INITIAL_POS_X;
    u8 y = INITIAL_POS_Y;

    for (i = 0; i < WINDOW_MINING_HEIGHT; i += 2)
    {
        for (j = 0; j < WINDOW_MINING_WIDTH; j += 2)
        {
            u8 statusStone;
            u16 tileNum;

            statusStone = RandomMinMax(3, TILE_COUNT - 1);

            tileNum = CALC_TILE_NUM(statusStone);

            FillBgTilemapBufferRect(0, tileNum, x, y, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 1, x + 1, y, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 2, x, y + 1, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 3, x + 1, y + 1, 1, 1, 1);
            //FillBgTilemapBufferRect(BG_ROCAS, tileNum, x, y, 1, 1, 1);
            //FillBgTilemapBufferRect(BG_ROCAS, tileNum + 1, x + 1, y, 1, 1, 1);
            //FillBgTilemapBufferRect(BG_ROCAS, tileNum + 2, x, y + 1, 1, 1, 1);
            //FillBgTilemapBufferRect(BG_ROCAS, tileNum + 3, x + 1, y + 1, 1, 1, 1);
            
            x += 2;
            mining.tilesStones[i / 2][j / 2] = statusStone;
        }
        x = INITIAL_POS_X;
        y += 2;
    }

    ScheduleBgCopyTilemapToVram(0);
    //ScheduleBgCopyTilemapToVram(BG_ROCAS);
    CopyWindowToVram(WINDOW_TILES, COPYWIN_FULL);
}

u8 GetStatusValueToTileUpdate(u8 i, u8 j)
{
    u8 pickStatusUpdate[3][3] = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}};
    u8 hammerStatusUpdate[3][3] = {{1, 2, 1}, {2, 2, 2}, {1, 2, 1}};

    u8 statusValueToUpdate = (mining.toolType == PICO) ? pickStatusUpdate[i][j] : hammerStatusUpdate[i][j];

    return statusValueToUpdate;
}

static void UpdateTileStone(u8 x, u8 y) 
{
    u8 posX, posY, statusValueUpdate;
    u16 tileNum = DEST_TILES_STONES;

    u8 currentRow = y;
    u8 currentColumn = x;

    u8 rows = ARRAY_COUNT(mining.tilesStones);
    u8 columns = ARRAY_COUNT(mining.tilesStones[0]);

    u8 startRow = (currentRow > 0) ? currentRow - 1 : currentRow;
    u8 startColumn = (currentColumn > 0) ? currentColumn - 1 : currentColumn;

    u8 countRow = (currentRow > 0) ? 0 : 1;
    u8 countColumn = (currentColumn > 0) ? 0 : 1;

    for (u8 i = startRow; i <= currentRow + 1 && i < rows; i++) 
    {
        for (u8 j = startColumn; j <= currentColumn + 1 && j < columns; j++) 
        {
            posX = j * 2;
            posY = INITIAL_POS_Y + (i * 2);

            if (mining.tilesStones[i][j] == 0)
            {
                countColumn += 1;
                continue;
            }

            if (mining.toolType == BOMBA)
            {
                tileNum =  DEST_TILES_STONES;
            }
            else
            {
                statusValueUpdate = mining.tilesStones[i][j] - GetStatusValueToTileUpdate(countRow, countColumn);
                tileNum = (statusValueUpdate < 3) ? DEST_TILES_STONES : DEST_TILES_STONES + (statusValueUpdate * 4);
            }

            mining.tilesStones[i][j] = (tileNum == DEST_TILES_STONES) ? 0 : statusValueUpdate;

            FillBgTilemapBufferRect(0, tileNum, posX, posY, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 1, posX + 1, posY, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 2, posX, posY + 1, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 3, posX + 1, posY + 1, 1, 1, 1);

            //FillBgTilemapBufferRect(BG_ROCAS, tileNum, posX, posY, 1, 1, 1);
            //FillBgTilemapBufferRect(BG_ROCAS, tileNum + 1, posX + 1, posY, 1, 1, 1);
            //FillBgTilemapBufferRect(BG_ROCAS, tileNum + 2, posX, posY + 1, 1, 1, 1);
            //FillBgTilemapBufferRect(BG_ROCAS, tileNum + 3, posX + 1, posY + 1, 1, 1, 1);

            countColumn += 1;
        }
        countRow += 1;
        countColumn = (currentColumn > 0) ? 0 : 1;
    }
    ScheduleBgCopyTilemapToVram(0);
    //ScheduleBgCopyTilemapToVram(BG_ROCAS);
    CopyWindowToVram(WINDOW_TILES, COPYWIN_FULL); 
}

#define INITIAL_CURSOR_POS_Y 32

static bool8 IsCursorXPotionOnBorder(bool8 isRight)
{
    u8 x = gSprites[mining.cursorSpriteId].x;

    if (isRight)
        return (x + 16 <=  WINDOW_MINING_WIDTH * 8) ? TRUE : FALSE;
    else
        return (x - 16 >= 0) ? TRUE : FALSE;
}

static bool8 IsCursorYPotionOnBorder(bool8 isUp)
{
    u8 y = gSprites[mining.cursorSpriteId].y;

    if (isUp)
        return (y - 16 >= INITIAL_CURSOR_POS_Y) ? TRUE : FALSE;
    else
        return (y + 16 <= ((WINDOW_MINING_HEIGHT - 1) * 8) + INITIAL_CURSOR_POS_Y) ? TRUE : FALSE;
}

static void Task_FadeIn(u8 taskId)
{
    if (!gPaletteFade.active) 
    {
        mining.blockX = 0;
        mining.blockY = 0;
        mining.toolType = PICO;
        UpdateSelectTool();
        CreateSpriteGrietas();
        mining.cursorSpriteId = CreateSprite(&sSpriteTemplate_Cursor, 8, INITIAL_CURSOR_POS_Y, 0);
        gTasks[taskId].func = Task_MainHandle;
    }
}

#define tWindowId data[6]
#define tIndexItem data[7]

static void Task_MainHandle(u8 taskId)
{
    if (CheckStateGrietas())
    {
        BeginNormalPaletteFade(PALETTES_ALL, 10, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_FadeOut;
    }

    // if (JOY_NEW(B_BUTTON))
    // {
    //     BeginNormalPaletteFade(PALETTES_ALL, 10, 0, 16, RGB_BLACK);
    //     gTasks[taskId].func = Task_FadeOut;
    // }

    if (JOY_NEW(DPAD_UP) && IsCursorYPotionOnBorder(TRUE))
    {
        gSprites[mining.cursorSpriteId].y -= 16;
        mining.blockY -= 1;
    }

    if (JOY_NEW(DPAD_DOWN) && IsCursorYPotionOnBorder(FALSE))
    {
        gSprites[mining.cursorSpriteId].y += 16;
        mining.blockY += 1;
    }

    if (JOY_NEW(DPAD_LEFT) && IsCursorXPotionOnBorder(FALSE))
    {
        gSprites[mining.cursorSpriteId].x -= 16;
        mining.blockX -= 1;
    }

    if (JOY_NEW(DPAD_RIGHT) && IsCursorXPotionOnBorder(TRUE))
    {
        gSprites[mining.cursorSpriteId].x += 16;
        mining.blockX += 1;
    }

    if (JOY_NEW(R_BUTTON))
    {
        if (mining.toolType < HERRAMIENTAS_TOTALES - 1)
        {
            PlaySE(SE_SELECT);
            mining.toolType += 1;
            UpdateSelectTool();
        }
    }

    if (JOY_NEW(L_BUTTON))
    {
        if (mining.toolType > 0)
        {
            PlaySE(SE_SELECT);
            mining.toolType -= 1;
            UpdateSelectTool();
        }
    }

    if (JOY_NEW(A_BUTTON))
    {
        if(mining.toolType == BOMBA){
            TryCreateSpriteBomba();
        }else{
            StartSpriteAnim(&gSprites[mining.cursorSpriteId], mining.toolType + 1);
            UpdateTileStone(mining.blockX, mining.blockY);
            UpdateGrietas();
            TryCreateSpriteBomba();
        }

    }
}

static void Task_ReturnToField(u8 taskId)
{
    FreeAllWindowBuffers();
    SetMainCallback2(CB2_ReturnToField);
    DestroyTask(taskId);
}

u8 GetIndexOfObtainedItems(u8 currentIndex)
{
    for (u8 i = currentIndex; i < MAX_NUM_ITEMS_MINING; i++)
    {
        if (mining.itemsStatus[i] == TRUE 
        && mining.itemsIds[i] != ITEM_NONE)
            return i;
    }

    return MAX_NUM_ITEMS_MINING;
}
static void Task_GetItems(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active() && JOY_NEW(A_BUTTON))
    {
        if (gTasks[taskId].tIndexItem != MAX_NUM_ITEMS_MINING)
        {
            PlayFanfare(MUS_OBTAIN_ITEM);
            AddBagItem(mining.itemsIds[gTasks[taskId].tIndexItem], 1);
            CopyItemName(mining.itemsIds[gTasks[taskId].tIndexItem], gStringVar1);
            StringExpandPlaceholders(gStringVar4, sMiningGetItems);
            FillWindowPixelBuffer(gTasks[taskId].tWindowId, PIXEL_FILL(1));
            AddTextPrinterForMessage(TRUE);

            gTasks[taskId].tIndexItem = GetIndexOfObtainedItems(gTasks[taskId].tIndexItem + 1);
            gTasks[taskId].func = Task_GetItems;
        }
        else
        {
            RemoveWindowMiningGame(gTasks[taskId].tWindowId);
            gTasks[taskId].func = Task_ReturnToField;
        }
    }
}

static void Task_FadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        PlaySE(SE_M_EARTHQUAKE);
        DestroySpritesGame();
        RemoveWindowMiningGame(WINDOW_TILES);

        gTasks[taskId].tWindowId = AddWindow(&sWindowTemplate_MsgBox);

        LoadMessageBoxGfx(gTasks[taskId].tWindowId, 252, BG_PLTT_ID(15));
        NewGameBirchSpeech_ShowDialogueWindow(gTasks[taskId].tWindowId, TRUE);
        PutWindowTilemap(gTasks[taskId].tWindowId);
        CopyWindowToVram(gTasks[taskId].tWindowId, COPYWIN_GFX);
        NewGameBirchSpeech_ClearWindow(gTasks[taskId].tWindowId);
        StringExpandPlaceholders(gStringVar4, sWallDestroy);
        AddTextPrinterForMessage(TRUE);

        gTasks[taskId].tIndexItem = GetIndexOfObtainedItems(0);
        gTasks[taskId].func = Task_GetItems;
    }
}

//==========GFX SETUP FUNC==========//

void CB2_InitMiningGameSetUp(void)
{
    u8 i;

    switch (gMain.state)
    {
        case 0:
            SetVBlankHBlankCallbacksToNull();
            ScanlineEffect_Stop();
            ResetTasks();
            ResetSpriteData();
            ResetPaletteFade();
            DmaClearLarge16(3, (void *) VRAM, VRAM_SIZE, 4096);
            FreeAllSpritePalettes();
            gMain.state++;
        case 1:
            LoadBGs_MiningGame(); 
            LoadSpritesResources();
            InitWindowMiningGame();
            LoadRandomTilesStones();
            memset(mining.itemsSpritesIds, 0xFF, MAX_NUM_ITEMS_MINING);
            memset(mining.itemsStatus, FALSE, MAX_NUM_ITEMS_MINING);
            mining.bombaSpriteId = 0xFF;
            for (i = 0; i < MAX_NUM_ITEMS_MINING; i++)
            {
                mining.itemsIds[i] = ITEM_NONE;
            }
            GenerateItemsSprites();
            CreateSpriteHerramientas();
            FadeOutAndPlayNewMapMusic(MUS_RG_TEACHY_TV_SHOW, 4);
            gMain.state++;
            break;
        case 2:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            gMain.state++;
        default:
            SetVBlankCallback(VBlank_CB_MiningGame);
            SetMainCallback2(CB2_MiningGame);
            CreateTask(Task_FadeIn, 0); 
    }
}

bool8 IsMiningPlaceActive(void)
{
    u32 miningPlaces;
    u32 mask;
    u8 indexMining = VarGet(VAR_0x8001);

    mask = 1 << indexMining;
    miningPlaces = gSaveBlock2Ptr->miningPlaces;

    gSpecialVar_Result = (miningPlaces & mask) != 0;
    return (miningPlaces & mask) != 0;
}

void SetBitValueMiningPlace(u8 indexMining)
{
    u32 mask;
    u32 miningPlaces = gSaveBlock2Ptr->miningPlaces;

    mask = 1 << indexMining;

    if (!IsMiningPlaceActive())
        miningPlaces |= mask; // Usamos OR para poner el bit en 1
    else
        miningPlaces &= ~mask; // Usamos AND con el complemento de la máscara para poner el bit en 0
    gSaveBlock2Ptr->miningPlaces = miningPlaces;
}

void DesactiveMiningPlace(void)
{
    SetBitValueMiningPlace(VarGet(VAR_0x8001));
}

//==========CALLNATIVE FUNC==========//

bool8 StartMiningGame_CB2(void) 
{
    if (!gPaletteFade.active)
    {
        gMain.state = 0;
        SetMainCallback2(CB2_InitMiningGameSetUp);
        return TRUE;
    }
    return FALSE;
}

void DoSpecialMiningGame(void)
{
    ScriptContext_Stop();
    StartMiningGame_CB2();
}

/*
Para usarlo desde un script hacer esto:
script Sing1_Route201{
    setvar(0x8001, 1)
    call(MiningGame_Event)
}
*/
