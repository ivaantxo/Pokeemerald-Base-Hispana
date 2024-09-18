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

/*
    NOTA:
    - Se han comentado las partes de codigo q seguramente se vayan a tener q ser editadas para adaptarlo a la creacion de otras interfaces
    - El resto es un copia y pega, ya q siempre cumple el mismo esquema
    - Los puntos importantes a comprender son la definicion del BgTemplete, sobretodo los parametros de charbaseIndex y mapBaseIndex
    - Y el funcionamiento del task
*/
#if TUTORIAL== TRUE

//==========FUNCIONES STATIC==========//

static void Task_FadeIn(u8 taskId);
static void Task_Movement_Bgs(u8 taskId);
static void Task_FadeOut(u8 taskId);


//==========BG GRAPHICS==========//
//Aqui se define la ruta del tileset, tilemap y con su correspondiente paleta. 
//El lz significa q se esta cargando comprimido
static const u32 TutorialBG2_Tileset[] = INCBIN_U32("graphics/tutorial/bg2_tileset.4bpp.lz");
static const u32 TutorialBG2_Tilemap[] = INCBIN_U32("graphics/tutorial/bg2_tilemap.bin.lz");

static const u32 TutorialBG3_Tileset[] = INCBIN_U32("graphics/tutorial/bg3_tileset.4bpp.lz");
static const u32 TutorialBG3_Tilemap[] = INCBIN_U32("graphics/tutorial/bg3_tilemap.bin.lz");

static const u16 TutorialBG_Palette[] = INCBIN_U16("graphics/tutorial/bgPal.gbapal");

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
        gTasks[taskId].func = Task_Movement_Bgs;// con esto cambiaremos a la siguiente funcion q se indica
    }
}
//Con esta funcion controlamos las acciones q hara cada btn cuando el usuario pulse
static void Task_Movement_Bgs(u8 taskId)
{
    if(JOY_NEW(B_BUTTON))//cuando pulsa B se hara un fade a negro y  saltara a la fucion Task_FadeOut
    {
        BeginNormalPaletteFade(PALETTES_ALL, 10, 0, 16, RGB_BLACK);//hace el fade a negro, el segundo parametro es el delay q va a tener fade
        gTasks[taskId].func = Task_FadeOut;
    }
}

static void Task_FadeOut(u8 taskId)
{
    if(!gPaletteFade.active)//esperamos q se cabe de hacer la transion a negro del fade
    {
        FreeAllWindowBuffers();
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);//Volvemos al mundo con el menu abierto, hay mas opciones CB2_ReturnToField, CB2_ReturnToFieldContinueScript
        DestroyTask(taskId);//Destruye la ejecucion del task 
    }
}

//==========GFX SETUP FUNC==========//
void CB2_InitTutorialBgsSetUp()
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
#endif

//==========CALLNATIVE FUNC==========//
//Esta funcion se suele utilizar para ser llamdas desde el comando callnative en un script
bool8 StartTutorialBgs_CB2() 
{
    #if TUTORIAL
    if (!gPaletteFade.active)
    {
        gMain.state = 0;
        CleanupOverworldWindowsAndTilemaps();
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetMainCallback2(CB2_InitTutorialBgsSetUp);
        

        return TRUE;
    }
    #endif
    return FALSE;
}
