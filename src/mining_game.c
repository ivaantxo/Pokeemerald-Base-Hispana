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

//==========VARIBLES EWRAM_DATA==========//

#define WINDOW_MINING_WIDTH 23
#define WINDOW_MINING_HEIGHT 16
#define DEST_TILES_STONES (WINDOW_MINING_WIDTH * WINDOW_MINING_HEIGHT)

#define ITEM_TAG 6000
#define MAX_NUM_ITEMS_MINING 6
#define MAX_NUM_GRIETAS_SPRITES 6

struct MiningGame
{
    u8 cursorSpriteId;
    u8 grietasIds[MAX_NUM_GRIETAS_SPRITES];
    u8 toolsSpriteId[3];
    u8 blockX, blockY; //Posición X e Y del cursor
    u8 tilesStones[WINDOW_MINING_HEIGHT/2][12]; //Estado de las piedras a picas están en bloques de 16px
    u16 itemsIds[MAX_NUM_ITEMS_MINING]; //Id de los item 
    u8 itemsSpritesIds[MAX_NUM_ITEMS_MINING]; //Id de los sprites items que hay para desenterrar
    bool8 itemsStatus[MAX_NUM_ITEMS_MINING]; //Indica si el item fue desenterrado no
    u8 toolType; //Tipo de cursor seleccionado: pico, martillo...
};

static EWRAM_DATA struct MiningGame mining = {0};

const u8 sWallDestroy[] = _("¡El muro se ha derrumbado!");
const u8 sMiningGetItems[] = _("Has obtenido {STR_VAR_1}.");

//==========BG GRAPHICS==========//

static const u32 MiningGameBG3_Tileset[] = INCBIN_U32("graphics/mining_game/bg_tileset.4bpp.lz");
static const u32 MiningGameBG3_Tilemap[] = INCBIN_U32("graphics/mining_game/bg_tilemap.bin.lz");

static const u16 MiningGameBG_Palette[] = INCBIN_U16("graphics/mining_game/bgPal.gbapal");

static const u8 StoneTiles_Gfx[] = INCBIN_U8("graphics/mining_game/sprites/tilesStones.4bpp");
static const u16 GrietasStoneTiles_Palette[] = INCBIN_U16("graphics/mining_game/sprites/grietasTilesPal.gbapal");

//==========SPRITES GRAPHICS==========//

static const u8 Cursor_Sprite[] = INCBIN_U8("graphics/mining_game/sprites/cursorSprite.4bpp");
static const u16 Cursor_Palette[] = INCBIN_U16("graphics/mining_game/sprites/cursorPal.gbapal");

static const u8 Grieta_Sprite[] = INCBIN_U8("graphics/mining_game/sprites/grietaSprite.4bpp");

static const u8 Tool_Sprite[] = INCBIN_U8("graphics/mining_game/sprites/tools.4bpp");
static const u16 Tool_Palette[] = INCBIN_U16("graphics/mining_game/sprites/toolsPal.gbapal");

//==========BG TEMPLATES==========//

static const struct BgTemplate MiningGameBgTemplates[] =
{
    {
        .bg = 0, 
        .charBaseIndex = 0,
        .mapBaseIndex = 15,
        .priority = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    }
};

//==========SPRITE TEMPLATES==========//

#define TAG_SPRITE_CURSOR   5400
#define TAG_SPRITE_GRIETA   5401
#define TAG_SPRITE_TOOL     5402

static const struct OamData gSpriteOamData32x32 =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 0,
};

//==========SPRITE CURSOR==========//

static const struct SpriteSheet spriteSheetCursor =
{
    .data = Cursor_Sprite,
    .size = 1536, 
    .tag = TAG_SPRITE_CURSOR,
};

static const struct SpritePalette spritePaletteCursor =
{
    .data = Cursor_Palette,
    .tag = TAG_SPRITE_CURSOR, 
};

enum CursoresMineria
{
    CURSOR_NORMAL,
    CURSOR_PICK,
    CURSOR_HAMMER,
    CURSOR_BOOM,
};

static const union AnimCmd sAnim_CursorNormal[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CursorPick[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END
};


static const union AnimCmd sAnim_CursorHammer[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_CursorSprite[] =
{
    [CURSOR_NORMAL] = sAnim_CursorNormal,
    [CURSOR_PICK] = sAnim_CursorPick,
    [CURSOR_HAMMER] = sAnim_CursorHammer,
    [CURSOR_BOOM] = sAnim_CursorHammer
};

static const struct SpriteTemplate spriteTemplateCursor=
{
    .tileTag = TAG_SPRITE_CURSOR,
    .paletteTag = TAG_SPRITE_CURSOR,
    .oam = &gSpriteOamData32x32,
    .anims = sAnims_CursorSprite,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackCursor,
};

//==========SPRITE GRIETA==========//

static const struct SpriteSheet spriteSheetGrieta =
{
    .data = Grieta_Sprite,
    .size = 3072, 
    .tag = TAG_SPRITE_GRIETA,
};

static const struct SpritePalette spritePaletteGrieta =
{
    .data = GrietasStoneTiles_Palette,
    .tag = TAG_SPRITE_GRIETA, 
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

static const struct SpriteTemplate spriteTemplateGrieta=
{
    .tileTag = TAG_SPRITE_GRIETA,
    .paletteTag = TAG_SPRITE_GRIETA,
    .oam = &gSpriteOamData32x32,
    .anims = sAnims_GrietaSprite,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

//==========SPRITE TOOL==========//

static const struct SpriteSheet spriteSheetTool =
{
    .data = Tool_Sprite,
    .size = 1536, 
    .tag = TAG_SPRITE_TOOL,
};

static const struct SpritePalette spritePaletteTool =
{
    .data = Tool_Palette,
    .tag = TAG_SPRITE_TOOL,
};

enum HerramientasMineria
{
    TOOL_PICK,
    TOOL_HAMMER,
    TOOL_BOOM,
    TOOLS_COUNT,
};

static const union AnimCmd sAnim_ToolPick[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ToolHammer[] =
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_ToolBoom[] =
{
    ANIMCMD_FRAME(32, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_ToolSprite[] =
{
    [TOOL_PICK] = sAnim_ToolPick,
    [TOOL_HAMMER] = sAnim_ToolHammer,
    [TOOL_BOOM] = sAnim_ToolBoom
};

static const struct SpriteTemplate spriteTemplateTool=
{
    .tileTag = TAG_SPRITE_TOOL,
    .paletteTag = TAG_SPRITE_TOOL,
    .oam = &gSpriteOamData32x32,
    .anims = sAnims_ToolSprite,
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

//==========SPRITES FUNC==========//

static void LoadSpritesResources(void)
{
    LoadSpriteSheet(&spriteSheetCursor); 
    LoadSpritePalette(&spritePaletteCursor);

    LoadSpriteSheet(&spriteSheetGrieta); 
    LoadSpritePalette(&spritePaletteGrieta);

    LoadSpriteSheet(&spriteSheetTool); 
    LoadSpritePalette(&spritePaletteTool);
}

static u8 CreateCursorSprite(u8 x, u8 y)
{
    u8 id;

    id = CreateSprite(&spriteTemplateCursor, x, y, 0);
    return id;
}

static void CreateGrietasSprite(void)
{
    u8 id, x = 16, y = 6;

    for (u8 i = 0; i < MAX_NUM_GRIETAS_SPRITES; i++)
    {   
        id = CreateSprite(&spriteTemplateGrieta, x, y, 0);
        StartSpriteAnim(&gSprites[id], GRIETA_STATE_0);
        gSprites[id].invisible = TRUE;
        mining.grietasIds[i] = id;
        x+=32;
    }
}

static void CreateToolsSprite(void)
{
    u8 id, y = 51;

    for (u8 i = 0; i < TOOLS_COUNT; i++)
    {
        id = CreateSprite(&spriteTemplateTool, 218, y, 0);
        StartSpriteAnim(&gSprites[id], i);
        mining.toolsSpriteId[i] = id;
        y+=44;
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

    for (i = 0; i < TOOLS_COUNT; i++)
    {
        DestroySpriteAndFreeResources(&gSprites[mining.toolsSpriteId[i]]);
    }

    for (i = 0; i < MAX_NUM_ITEMS_MINING; i++)
    {
        if(mining.itemsSpritesIds[i] != 0xFF)
            DestroySpriteAndFreeResources(&gSprites[mining.itemsSpritesIds[i]]);
    }
}

#define sIsHidden data[1]
#define sRow data[2]
#define sColumn data[3]
#define sState data[4]
#define sGlow data[5]
#define sIndex data[6]
#define sTimer data[7]

// void InitSpriteGlow(struct Sprite *sprite)
// {
//     switch (sprite->sState)
//     {
//         case 0:
//             if(++sprite->sTimer == 35)
//                 sprite->sState++;
//             break;

//         case 1:
//             sprite->sTimer++;
//             if ((sprite->sTimer % 6) == 0)
//             {
//                 if(sprite->sGlow == 7){
//                     sprite->sTimer = 0;
//                     sprite->sState++;
//                 }

//                 SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL | BLDCNT_EFFECT_BLEND);
//                 SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(16, sprite->sGlow));
//                 sprite->sGlow++;
//             }
//             break;

//         case 3:
//             if (++sprite->sTimer == 40)
//                 sprite->sState++;
//             break;

//         case 4:
//             sprite->sTimer++;
//             if ((sprite->sTimer % 6) == 0)
//             {
//                 if(sprite->sGlow == 0)
//                 {
//                     sprite->sTimer = 0;
//                     sprite->sState++;
//                 }   

//                 SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL | BLDCNT_EFFECT_BLEND);
//                 SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(16, sprite->sGlow));
//                 sprite->sGlow--;
//             }
//             break;
//         default:
//             sprite->oam.objMode = ST_OAM_OBJ_NORMAL; 
//             sprite->sIsHidden = FALSE;
//             break;

//     }
// }

static void SpriteCallbackCursor(struct Sprite *sprite)
{
    if(!JOY_NEW(A_BUTTON))
        return;

    switch (mining.toolType)
    {
    case TOOL_HAMMER:
        PlaySE(SE_M_DIG);
        break;

    case TOOL_BOOM:
        PlaySE(SE_BANG);
        break;
    
    default:
        PlaySE(SE_M_DIG);
        break;
    }
    
}

static void SpriteCallbackItemIconSprite(struct Sprite *sprite)
{

    if(!sprite->sIsHidden)
    {
        if(sprite->affineAnimEnded && sprite->oam.affineMode != 0)
        {
            sprite->oam.affineMode = 0;
            ResetAffineAnimData();
        }
        return;
    }

    if(mining.tilesStones[sprite->sRow][sprite->sColumn] == 0 
    && mining.tilesStones[sprite->sRow][sprite->sColumn+1] == 0
    && mining.tilesStones[sprite->sRow+1][sprite->sColumn] == 0
    && mining.tilesStones[sprite->sRow+1][sprite->sColumn+1] == 0)
    {
        sprite->oam.affineMode = 1;
        InitSpriteAffineAnim(sprite);
        sprite->sIsHidden = FALSE;
        mining.itemsStatus[sprite->sIndex] = TRUE;
    }
}

void UpdateGrietas(void)
{
    u8 id, animNum;
    bool8 allInvisibles = TRUE;

    for (u8 i = 0 ; i <  MAX_NUM_GRIETAS_SPRITES; i++)
    { 
        id = mining.grietasIds[i];
        animNum = gSprites[id].animNum;

        if(gSprites[id].invisible || gSprites[id].animNum == GRIETA_STATE_5)
        {
            continue;
        }

        switch(mining.toolType)
        {
            default:
            case TOOL_PICK:
                StartSpriteAnim(&gSprites[id], gSprites[id].animNum + 1);
                break;

            case TOOL_HAMMER:
                animNum = (animNum + 2 > 5) ? 5 : animNum + 2;
                StartSpriteAnim(&gSprites[id], animNum);
                break;

            case TOOL_BOOM:
                StartSpriteAnim(&gSprites[id], GRIETA_STATE_5);
                break;
        }

        animNum = gSprites[id].animNum;
        
        if(i > 0 && animNum == GRIETA_STATE_5)
        {
            gSprites[mining.grietasIds[i-1]].invisible = FALSE;
            if(mining.toolType == TOOL_BOOM)
                StartSpriteAnim(&gSprites[mining.grietasIds[i-1]], GRIETA_STATE_4);
        }

        allInvisibles = FALSE;
    }

    if(allInvisibles)
        gSprites[mining.grietasIds[MAX_NUM_GRIETAS_SPRITES-1]].invisible = FALSE;
}

bool8 checkStateGrietas(void)
{
    u8 id;

    for (u8 i = 0 ; i <  MAX_NUM_GRIETAS_SPRITES; i++)
    { 
        id = mining.grietasIds[i];
        if(gSprites[id].animNum != GRIETA_STATE_5)
            return FALSE;
    }

    return TRUE;
}


void UpdateSelectTool(void)
{
    u8 id; 

    for (u8 i = 0; i < TOOLS_COUNT; i++)
    {
        id = mining.toolsSpriteId[i];

        if(mining.toolType != i)
        {
            gSprites[id].oam.objMode = ST_OAM_OBJ_BLEND;
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL | BLDCNT_EFFECT_BLEND);
            SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(6, 8));
        }else{
            gSprites[id].oam.objMode = ST_OAM_OBJ_NORMAL;
        }
    }
}

//==========BG LOAD FUNC==========//

static void LoadBGs_MiningGame(void)
{
    InitBgsFromTemplates(0, MiningGameBgTemplates, NELEMS(MiningGameBgTemplates));

    LZ77UnCompVram(MiningGameBG3_Tileset, (void*) VRAM + 16384 * MiningGameBgTemplates[1].charBaseIndex);
    LZ77UnCompVram(MiningGameBG3_Tilemap, (u16*) BG_SCREEN_ADDR(MiningGameBgTemplates[1].mapBaseIndex));

    LoadPalette(MiningGameBG_Palette, 0, 0x20);

    ResetAllBgsCoordinates(); 

    LoadBgTiles(0, StoneTiles_Gfx, 1024, DEST_TILES_STONES);
    LoadPalette(GrietasStoneTiles_Palette, 0x10, 0x20);

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
	LoadPalette(GetOverworldTextboxPalettePtr(), 0xf0, 0x20);
    PutWindowTilemap(WINDOW_TILES);
}

void RemoveWindowMiningGame(u8 windowId)
{
    // ClearStdWindowAndFrame(WINDOW_TILES, TRUE);
    // RemoveWindow(WINDOW_TILES);
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

void generateItemsSprites(void)
{
    u8 i, idItem;
    u16 xValues[6] = {16, 48, 80, 112, 144, 176};
    u16 yValues[4] = {48, 80, 112, 144};


    u16 items[13] = {
        ITEM_FIRE_STONE, ITEM_WATER_STONE, ITEM_AERODACTYLITE, 
        ITEM_SKULL_FOSSIL, ITEM_CLAW_FOSSIL, ITEM_LEAF_STONE,
        ITEM_ICE_STONE, ITEM_MAX_REVIVE, ITEM_OLD_AMBER, ITEM_MASTER_BALL,
        ITEM_ABILITY_PATCH, ITEM_DYNAMAX_CANDY, ITEM_GALARICA_WREATH
    };

    u8 numItems = RandomMinMax(2, 4);

    ShuffleList((u16*)xValues, ARRAY_COUNT(xValues));
    ShuffleList((u16*)yValues, ARRAY_COUNT(yValues));
    ShuffleList(items, ARRAY_COUNT(items));

    for (i = 0; i < numItems; i++)
    {
        if(mining.itemsSpritesIds[i] != 0xFF || items[i] == ITEM_NONE)
            continue;

        idItem = AddItemIconSprite(ITEM_TAG + i, ITEM_TAG + i,  items[i]);
        mining.itemsSpritesIds[i] = idItem;
        mining.itemsIds[i] = items[i];

        gSprites[idItem].x = xValues[i] + 4;
        gSprites[idItem].y = yValues[i] - 2;
        gSprites[idItem].sIsHidden = TRUE;
        gSprites[idItem].sIndex = i;
        gSprites[idItem].sState = 0;
        gSprites[idItem].sTimer = 0;
        gSprites[idItem].sGlow = 0;
        gSprites[idItem].sRow = yValues[i]/16 - 3;
        gSprites[idItem].sColumn = (xValues[i]/16 == 0) ? 0 : xValues[i]/16 - 1; 
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
            
            x += 2;
            mining.tilesStones[i/2][j/2] = statusStone;
        }
        x = INITIAL_POS_X;
        y += 2;
    }

    ScheduleBgCopyTilemapToVram(0);
    CopyWindowToVram(WINDOW_TILES, 3);
}

u8 getStatusValueToTileUpdate(u8 i, u8 j)
{
    u8 pickStatusUpdate[3][3] = {{0,1,0}, {1,1,1}, {0,1,0}};
    u8 hammerStatusUpdate[3][3] = {{1,2,1}, {2,2,2}, {1,2,1}};

    u8 statusValueToUpdate = (mining.toolType == TOOL_PICK) ? pickStatusUpdate[i][j] : hammerStatusUpdate[i][j];

    return statusValueToUpdate;
}

void updateTileStone(void) 
{
    u8 posX, posY, statusValueUpdate;
    u16 tileNum = DEST_TILES_STONES;

    u8 currentRow = mining.blockY;
    u8 currentColumn = mining.blockX;

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

            if(mining.tilesStones[i][j] == 0)
            {
                countColumn += 1;
                continue;
            }

            if(mining.toolType == TOOL_BOOM)
            {
                tileNum =  DEST_TILES_STONES;
            }else{
                statusValueUpdate = mining.tilesStones[i][j] - getStatusValueToTileUpdate(countRow, countColumn);
                tileNum = (statusValueUpdate < 3) ? DEST_TILES_STONES : DEST_TILES_STONES + (statusValueUpdate * 4);
            }

            mining.tilesStones[i][j] = (tileNum == DEST_TILES_STONES) ? 0 : statusValueUpdate;
    
            FillBgTilemapBufferRect(0, tileNum, posX, posY, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 1, posX + 1, posY, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 2, posX, posY + 1, 1, 1, 1);
            FillBgTilemapBufferRect(0, tileNum + 3, posX + 1, posY + 1, 1, 1, 1);

            countColumn += 1;
        }
        countRow += 1;
        countColumn = (currentColumn > 0) ? 0 : 1;
    }
    ScheduleBgCopyTilemapToVram(0);
    CopyWindowToVram(WINDOW_TILES, 3); 
}

#define INITIAL_CURSOR_POS_Y 32

static bool8 IsCursorXPotionOnBorder(bool8 isRight)
{
    u8 x = gSprites[mining.cursorSpriteId].x;

    if(isRight){
        return ( x + 16 <=  WINDOW_MINING_WIDTH * 8) ? TRUE : FALSE;
    }else{
        return ( x - 16 >= 0) ? TRUE : FALSE;
    }
}

static bool8 IsCursorYPotionOnBorder(bool8 isUp)
{
    u8 y = gSprites[mining.cursorSpriteId].y;

    if(isUp){
        return ( y - 16 >= INITIAL_CURSOR_POS_Y) ? TRUE : FALSE;
    }else{
        return ( y + 16 <=  ( (WINDOW_MINING_HEIGHT-1) * 8) + INITIAL_CURSOR_POS_Y) ? TRUE : FALSE;
    }
}

static void Task_FadeIn(u8 taskId)
{
    if(!gPaletteFade.active) 
    {
        mining.blockX = 0;
        mining.blockY = 0;
        mining.toolType = TOOL_PICK;
        UpdateSelectTool();
        CreateGrietasSprite();
        mining.cursorSpriteId = CreateCursorSprite(8, INITIAL_CURSOR_POS_Y);
        gTasks[taskId].func = Task_MainHandle;
    }
}

#define tWindowId data[6]
#define tIndexItem data[7]

static void Task_MainHandle(u8 taskId)
{
    if(checkStateGrietas())
    {
        BeginNormalPaletteFade(PALETTES_ALL, 10, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_FadeOut;
    }

    // if(JOY_NEW(B_BUTTON))
    // {
    //     BeginNormalPaletteFade(PALETTES_ALL, 10, 0, 16, RGB_BLACK);
    //     gTasks[taskId].func = Task_FadeOut;
    // }

    if(JOY_NEW(DPAD_UP) && IsCursorYPotionOnBorder(TRUE))
    {
        gSprites[mining.cursorSpriteId].y -= 16;
        mining.blockY -= 1;
    }

    if(JOY_NEW(DPAD_DOWN) && IsCursorYPotionOnBorder(FALSE))
    {
        gSprites[mining.cursorSpriteId].y += 16;
        mining.blockY += 1;
    }

    if(JOY_NEW(DPAD_LEFT) && IsCursorXPotionOnBorder(FALSE))
    {
        gSprites[mining.cursorSpriteId].x -= 16;
        mining.blockX -= 1;
    }

    if(JOY_NEW(DPAD_RIGHT) && IsCursorXPotionOnBorder(TRUE))
    {
        gSprites[mining.cursorSpriteId].x += 16;
        mining.blockX += 1;
    }

    if(JOY_NEW(R_BUTTON))
    {
        if (mining.toolType < TOOLS_COUNT - 1)
        {
            PlaySE(SE_SELECT);
            mining.toolType += 1;
            UpdateSelectTool();
        }
    }

    if(JOY_NEW(L_BUTTON))
    {
        if (mining.toolType > 0)
        {
            PlaySE(SE_SELECT);
            mining.toolType -= 1;
            UpdateSelectTool();
        }
    }

    if(JOY_NEW(A_BUTTON))
    {
        StartSpriteAnim(&gSprites[mining.cursorSpriteId], mining.toolType + 1);
        updateTileStone();
        UpdateGrietas();
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
    for ( u8 i = currentIndex; i < MAX_NUM_ITEMS_MINING; i++)
    {
        if(mining.itemsStatus[i] == TRUE 
        && mining.itemsIds[i] != ITEM_NONE)
            return i;
    }

    return MAX_NUM_ITEMS_MINING;
}
static void Task_GetItems(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active() && JOY_NEW(A_BUTTON))
    {
        if(gTasks[taskId].tIndexItem != MAX_NUM_ITEMS_MINING)
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
    if(!gPaletteFade.active)
    {
        PlaySE(SE_M_EARTHQUAKE);
        DestroySpritesGame();
        RemoveWindowMiningGame(WINDOW_TILES);

        gTasks[taskId].tWindowId = AddWindow(&sWindowTemplate_MsgBox);

        LoadUserWindowBorderGfxOnBg(0, 243, 14);
        LoadMessageBoxGfx(gTasks[taskId].tWindowId, 252, BG_PLTT_ID(15));
        NewGameBirchSpeech_ShowDialogueWindow(gTasks[taskId].tWindowId, 1);
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
        for ( i = 0; i < MAX_NUM_ITEMS_MINING; i++)
        {
            mining.itemsIds[i] = ITEM_NONE;
        }
        generateItemsSprites();
        CreateToolsSprite();
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

bool8 isMiningPlaceActive(void)
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

    if (!isMiningPlaceActive())
    {
        // Usamos OR para poner el bit en 1
        miningPlaces |= mask;
    }
    else
    {
        // Usamos AND con el complemento de la máscara para poner el bit en 0
        miningPlaces &= ~mask;
    }
    
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
