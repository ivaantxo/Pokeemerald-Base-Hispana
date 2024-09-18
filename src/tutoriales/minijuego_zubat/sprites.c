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
#include "config/tutoriales.h"

/*
    NOTA:
    - Se han comentado las partes de codigo q seguramente se vayan a tener q ser editadas para adaptarlo a la creacion de otras interfaces
    - El resto es un copia y pega, ya q siempre cumple el mismo esquema
    - Los puntos importantes a comprender son la definicion del BgTemplete, sobretodo los parametros de charbaseIndex y mapBaseIndex
    - Y el funcionamiento del task
*/

//==========FUNCIONES STATIC==========//
// Son las funciones q no van a ser llamadas fueras del .c en el que estan
// Se declaran aqui, ya q estan definidas mas abajo de donde se les llama, si no se hace al compilar no encontra la funcion
static void Task_FadeIn(u8 taskId);
static void Task_MainHandle(u8 taskId);
static void Task_FadeOut(u8 taskId);


//==========VARIBLES EWRAM_DATA==========//
// Son varibles globales(puenden ser llamadas en cualquier parte de codigo), las cuales las vamos a utilizar
// para guardar informacion q vamos a necesitar en el transcurso de la ejecucion
static EWRAM_DATA u8 zubatSpriteId = 0;//Va almacenar el id q generera al crear el sprite de Zubat

//==========BG TEMPLATES==========//
//Definimos los bgs q vamos a usar. Unicamente se puedn definir de 0 al 3 q son los 4 bgs q tienes GBA
static const struct BgTemplate TutorialBgTemplates[] =
{
    {
        .bg = 0, //indica el bg q se va cargar
        .charBaseIndex = 0,//posicion donde se va a cargar el tileset en la VRAM, Si quereis verlo en MGBA ir a Herramientas > Game State Views > Ver mosaicos
        .mapBaseIndex = 6,//posicion donde se va a cargar el tielamp en la VRAM, Si quereis verlo en MGBA ir a Herramientas > Game State Views > Ver mosaicos
        .paletteMode = 0,
        .priority = 0//indica la prioridad q va tener.  EL valor 0 es la priordad mas alta y 3 al mas baja
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

//==========SPRITE TEMPLATES==========//

//definimos los valores de los TAGS q vamos a usar, cada sprite que se carge debe tener un TAG unico
//Hay excepciones, el el caso de que tengais dos sprites q usen la misma paleta podeis usar el mismo TAG de la paleta para los dos
#define TAG_SPRITE_ZUBAT 5400
#define TAG_PALETTE 5403


//Todos los sprites deben de tener una Oam definidad con el tamaño correcto 
static const struct OamData gSpriteOamData32x32 =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = SPRITE_SHAPE(32x32),//modifcar este valor en caso de q el tamaño sea distinto
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),//modificar este valor en caso de q el tamaño sea distinto
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct SpriteSheet spriteSheetZubat =
{
            .data = Zubat_Sprite,//varible definidad previamente q indica donde se encuentra el grafico del sprite
            .size = 2048, //IMPORTANTE: para calcular este valor debeis mirar el ancho y el alto de la imagen, lo podeis ver en la opcion de Propiedas > Detalles, ahora unicamente haceis este calculo simple (ancho * alto) / 2
            .tag = TAG_SPRITE_ZUBAT,//Indicar el TAG definidod previamente
};

static const struct SpritePalette spritePaletteZubatKoffing =
{
        .data = ZubatKoffing_Palette,//varible definidad previamente q indica donde se encuentra la paleta del sprite
        .tag = TAG_PALETTE, //Indicar el TAG definidod previamente
};

static const struct SpriteTemplate spriteTemplateZubat=
{
    .tileTag = TAG_SPRITE_ZUBAT,
    .paletteTag = TAG_PALETTE,
    .oam = &gSpriteOamData32x32, //indicamos la oam definida previamente para el sprite
    .anims = gDummySpriteAnimTable, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

//==========SPRITES FUNC==========//

//Funcion donde cargamos el SpriteSheet y el SpritePalette definidos previamente
static void LoadSpritesResources()
{
    LoadSpriteSheet(&spriteSheetZubat); 
    LoadSpritePalette(&spritePaletteZubatKoffing);
}

//Funcion deonde creamos el Sprite pasandole sus propiedad x e y, y la cual devuelve el id q genera
static u8 CreateZubatSprite(u8 x, u8 y)
{
    u8 id;

    id = CreateSprite(&spriteTemplateZubat, x, y, 0);
    return id;
}

//Funcion q se encarga de destruir el sprite de ZUBAT
static void DestroySpritesGame()
{
    DestroySprite(&gSprites[zubatSpriteId]);
    //gSprites es un array donde se almacenan los datos de los Sprites cargados, en cual podemos hacer 
    //referencia a un sprite especifico siempre q tengamos el id q se genero al crearlo
}

//==========BG LOAD FUNC==========//
static void LoadBGs_Tutorial()
{
    InitBgsFromTemplates(0, TutorialBgTemplates, NELEMS(TutorialBgTemplates));//Inicializa la carga de los bgs

    LZ77UnCompVram(TutorialBG3_Tileset, (void*) VRAM + 0x4000 * TutorialBgTemplates[2].charBaseIndex);//cargamos el tileset del bg3 en la VRAM
    LZ77UnCompVram(TutorialBG3_Tilemap, (u16*) BG_SCREEN_ADDR(TutorialBgTemplates[2].mapBaseIndex));//cargamos el tilemap del bg3 en la VRAM

    LZ77UnCompVram(TutorialBG2_Tileset, (void*) VRAM + 0x4000 * TutorialBgTemplates[1].charBaseIndex);//cargamos el tileset del bg2 en la VRAM
    LZ77UnCompVram(TutorialBG2_Tilemap, (u16*) BG_SCREEN_ADDR(TutorialBgTemplates[1].mapBaseIndex));//cargamos el tilemap del bg2 en la VRAM

    LoadPalette(TutorialBG_Palette, 0x00, 0x20); // cargamos la paleta. 
    //El primero parametro es la definicion de la paleta 
    //el segundo es el slot en el q se va a cargar 0x00 = 0 , 0x10 = 1 ....
    //el tercero es el tamaño 0x20 = 16.

    ResetAllBgsCoordinates(); 

    ShowBg(0); //mostar el bg 0
    ShowBg(2); //mostar el bg 2
    ShowBg(3); //mostar el bg 3
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

//Los metodod TASK ejecutaran en bucle hasta q se cumpla la condicion y salte a la siguiente cmn gTasks[taskId].func
//o se detengan con DestroyTask
//Funcion q se llama el task principal en CB2_InitTutorialSetUp 
static void Task_FadeIn(u8 taskId)//el parametro taskId indica el id del task q se enta ejecutando
{
    if(!gPaletteFade.active) // esperamos a q se quite el fade de negro, cuando eso pase llamara a Task_Movement_Bgs
    {
        zubatSpriteId = CreateZubatSprite(50, 50);
        gTasks[taskId].func = Task_MainHandle;// con esto cambiaremos a la siguiente funcion q se indica
    }
}

//Con esta funcion controlamos las acciones q hara cada btn cuando el usuario pulse
static void Task_MainHandle(u8 taskId)
{
    if(JOY_NEW(B_BUTTON))//cuando pulsa B se hara un fade a negro y  saltara a la fucion Task_FadeOut
    {
        BeginNormalPaletteFade(PALETTES_ALL, 10, 0, 16, RGB_BLACK);//hace el fade a negro, el segundo parametro es el delay q va a tener fade
        gTasks[taskId].func = Task_FadeOut;
    }

    if(JOY_HELD(DPAD_UP))//cuando pulsa UP se hara un desplazamiento de un pixel del sprite
    {
        gSprites[zubatSpriteId].y -= 1; // con la funcion gSprites podemos acceder y modificar los valores x e y de un sprite detenerminado
    }

    if(JOY_HELD(DPAD_DOWN))//cuando pulsa DOWN se hara un desplazamiento de un pixel del sprite
    {
        gSprites[zubatSpriteId].y += 1;
    }
}

static void Task_FadeOut(u8 taskId)
{
    if(!gPaletteFade.active)//esperamos q se cabe de hacer la transion a negro del fade
    {
        DestroySpritesGame();
        FreeAllWindowBuffers();
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);//Volvemos al mundo con el menu abierto, hay mas opciones CB2_ReturnToField, CB2_ReturnToFieldContinueScript
        DestroyTask(taskId);//Destruye la ejecucion del task 
    }
}

//==========GFX SETUP FUNC==========//
void CB2_InitTutorialSpritesSetUp()
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
        LoadBGs_Tutorial(); //funcion que se llama para la carga de bgs
        LoadSpritesResources();//funcion q cargar los rescuros necesarios para la creacion del sprite
        gMain.state++;
        break;
    case 3:
        // es el task principal q se encargara de la acciones q se van ejecutar cuando pulses X btn
        CreateTask(Task_FadeIn, 0); //El primero parametro es la funcion q va a llamar y el segundo es la prioridad de la task
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
//Esta funcion se suele utilizar para ser llamdas desde el comando callnative en un script
bool8 StartTutorialSprites_CB2() 
{
    if (TUTORIAL_MINIJUEGO_ZUBAT)
    {
        if (!gPaletteFade.active)
        {
            gMain.state = 0;
            CleanupOverworldWindowsAndTilemaps();
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            SetMainCallback2(CB2_InitTutorialSpritesSetUp);

            return TRUE;
        }      
    }
    return FALSE;
}
