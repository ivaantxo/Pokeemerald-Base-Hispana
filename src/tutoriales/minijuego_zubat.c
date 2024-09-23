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
#include "config/tutoriales.h"

#if TUTORIAL_MINIJUEGO_ZUBAT == TRUE

static void HandleMovementZubat(void);
u8 GetZubatPositionY(u8 cord);
u8 IsZubatColisionKoffing(struct Sprite *spriteZubat);
u8 IsBeamColisionKoffing(struct Sprite *spriteBeam);
static bool8 HasLivesToContinue(void);
static void DestroySpriteBeam(struct Sprite *sprite);
static void Task_MovementBgs(u8 taskId);
static void Task_WaitToCreateKoffings(u8 taskId);
static void Task_ZubatFall(u8 taskId);
static void Task_EndGame(u8 taskId);
static void PrintLives(void);
static void PrintDistance(void);

//==========VARS==========//

#define tTimeToWait data[3]
#define tTimer data[7]

#define NUM_LIVES 5

enum CoordsZubat
{
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
    u16 distance;
    u8 numLives;
};

//Los EWRAM_DATA son variables globales que vamos a utilizar a lo largo de muchas funciones (se pueden usar en todo el repo). Por eso, se definen ya en la memoria EWRAM para tenerlas siempre a mano.
static EWRAM_DATA struct Tutorial tutorialObj = {0};

const u8 sTextoNormal[]= {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY};
const u8 sTextoLila[]= {0, 6, 12}; //Usa la paleta asignada a Zubat (BG_PLTT_ID(1)), el color 6 es violeta, y el 12 es violeta oscuro.

const u8 gText_HowToPlay[] = _("Zubat no ve nada. Ayúdalo a volar por la\n"
                               "cueva sin chocarse con los {PKMN} salvajes.\p"
                               "Pulsa {DPAD_UPDOWN} para moverte.\n"
                               "Pulsa {A_BUTTON} localizar los obstaculos.");
const u8 gText_Distance[] = _("Distancia: {STR_VAR_1}m");
const u8 gText_Lives[] = _(" x {STR_VAR_1}");

enum ZubatStates
{
    ZUBAT_MOVEMENT,
    ZUBAT_DIE,
};

//==========SECCIÓN DE CARGA DE SPRITES==========//

//Todo lo que necesitamos para cargar cualquier sprite es un OamData, una paleta (normalmente, un SpritePalette), un SpriteSheet y un SpriteTemplate. Una vez tengamos esto, basta con cargarlos mediante LoadSpriteSheet y LoadSpritePalette, y luego crear el sprite mediante CreateSprite.

//Un tag es una manera de marcar que un sprite o una paleta ya están cargados. De esa forma, no es necesario cargar las paletas en un slot u otro, ya que se asigna dinámicamente. Cada sprite o paleta debe de tener su propia tag, aunque un tag puede servir para varios sprites o paletas.
enum TagSpritesTutorialZubat
{
    TAG_SPRITE_ZUBAT = 5400,
    TAG_SPRITE_KOFFING,
    TAG_SPRITE_BEAM,
    TAG_PALETTE_ZUBAT_KOFFING,
};

//Los OamData son los datos de un sprite: características como su tamaño, su forma o su prioridad. Es posible asignarle más datos, como si es transparente, o si tiene animaciones afines, pero estos 3 parámetros son los que nunca pueden faltar.
static const struct OamData gSpriteOamDataSpritesTutorialZubat =
{
    .shape = SPRITE_SHAPE(32x32), //La forma del sprite, que debe de variar en función del tamaño (16x16, 32x32)
    .size = SPRITE_SIZE(32x32), //El tamaño del sprite.
    .priority = 0, //La prioridad es qué sprite se dibuja delante de otros. Va del 0 al 3, y cuanto menos valor, más prioridad (Un sprite de prioridad 1 se ve delante de uno de prioridad 3).
};

//Aquí definimos la paleta de nuestro sprite y le asignamos un tag, que será lo que luego "enlacemos" con el sprite, de modo que el juego sepa que x paleta va con x sprite.
static const struct SpritePalette sSpritePaletteZubatKoffing =
{
    .data = ZubatKoffing_Palette, //La paleta como tal.
    .tag = TAG_PALETTE_ZUBAT_KOFFING, //El tag, funciona igual que para los sprites.
};

//==========ZUBAT SPRITE==========//

#define sTimer data[7]

//Lo que son los "gráficos" del sprite.
static const struct SpriteSheet sSpriteSheetZubat =
{
    .data = ZubatSprite, //Los gráficos del Sprite (en el caso de un SpriteSheet, sus tiles).
    .size = 32 * 128 / 2, //Ancho * Alto / 2
    .tag = TAG_SPRITE_ZUBAT, //El tag del sprite.
};

static const union AnimCmd sAnim_ZubatMovement[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(16, 16),
    ANIMCMD_FRAME(32, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ZubatDie[] =
{
    ANIMCMD_FRAME(48, 16),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnims_ZubatSprite[] =
{
    [ZUBAT_MOVEMENT] = sAnim_ZubatMovement,
    [ZUBAT_DIE] = sAnim_ZubatDie
};

#define sColision data[6] 

void SpriteCallbackZubat(struct Sprite *sprite)
{
    if (!HasLivesToContinue())
    {
        StartSpriteAnim(sprite, ZUBAT_DIE);
        return;
    }

    HandleMovementZubat();

    u8 idKoffing = IsZubatColisionKoffing(sprite);

    if (idKoffing != 0xFF && sprite->sColision != TRUE)
    {
        sprite->sColision = TRUE;
        sprite->sTimer = 200;
        gSprites[idKoffing].invisible = FALSE;
        tutorialObj.numLives -= 1;
        PrintLives();
        PlaySE(SE_M_STAT_DECREASE);
    }

    if (sprite->sColision && --sprite->sTimer % 10 == 0)
    {
        sprite->invisible = !sprite->invisible;
        //PlayCry_Normal(CRY_KOFFING, 0);
    }

    if (sprite->sTimer == 0)
    {
        sprite->sColision = FALSE;
        sprite->invisible = FALSE;
        //PlayCry_Normal(CRY_KOFFING, 0);
    }
}

//El SpriteTemplate es donde se unen las imágenes del sprite, su callback, su paletteTag...
static const struct SpriteTemplate sSpriteTemplateZubat =
{
    .tileTag = TAG_SPRITE_ZUBAT,
    .paletteTag = TAG_PALETTE_ZUBAT_KOFFING,
    .oam = &gSpriteOamDataSpritesTutorialZubat, 
    .anims = sAnims_ZubatSprite, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackZubat,
};

//==========BEAM SPRITE==========//

#define sBeamIndex data[1]

static const struct SpriteSheet sSpriteSheetBeam =
{
    .data = BeamSprite,
    .size = 32 * 32 / 2, //Ancho * Alto / 2
    .tag = TAG_SPRITE_BEAM,
};

void SpriteCallbackBeam(struct Sprite *sprite)
{
    u8 idKoffing;

    if (sprite->x  >= DISPLAY_WIDTH)
    {
        DestroySpriteBeam(sprite);
    }

    idKoffing = IsBeamColisionKoffing(sprite);
    if (idKoffing != 0xFF)
    {
        DestroySpriteBeam(sprite);
        gSprites[idKoffing].invisible = FALSE;
        PlaySE(SE_WALL_HIT); //Sonido que hace cuando Koffing se vuelve visible.
    }

    if (++ sprite->sTimer % 2 == 0)
    {
        sprite->x += 4;
    }
}

static const struct SpriteTemplate sSpriteTemplateBeam =
{
    .tileTag = TAG_SPRITE_BEAM,
    .paletteTag = TAG_PALETTE_ZUBAT_KOFFING,
    .oam = &gSpriteOamDataSpritesTutorialZubat, 
    .anims = gDummySpriteAnimTable, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackBeam,
};

//==========KOFFING SPRITE==========//

#define sKoffingIndex data[2]

static const struct SpriteSheet sSpriteSheetKoffing =
{
    .data = KoffingSprite,
    .size = 32 * 64 / 2, // Ancho * Alto / 2
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
    if (!HasLivesToContinue())
    {
        sprite->invisible = FALSE;
    }
    else
    {
        if (sprite->x == 0)
        {
            tutorialObj.koffingSpritesId[sprite->sKoffingIndex] = 0xFF;
            DestroySprite(sprite);
        }

        if(++sprite->sTimer % 2 == 0)
        {
            sprite->x -= 2;
        }
    }
}

#undef sTimer

static const struct SpriteTemplate sSpriteTemplateKoffing =
{
    .tileTag = TAG_SPRITE_KOFFING,
    .paletteTag = TAG_PALETTE_ZUBAT_KOFFING,
    .oam = &gSpriteOamDataSpritesTutorialZubat, 
    .anims = sAnims_KoffingSprite, 
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackKoffing,
};

//Esta función es ejemplo de lo que siempre hay que hacer para poder mostrar sprites en pantalla: cargar el SpriteSheet y cargar el SpritePalette. Una vez estén cargados, ya podemos crear el sprite con CreateSprite(SpriteTemplate, x, y, subpriority).
void LoadSpritesResources(void)
{
    LoadSpriteSheet(&sSpriteSheetZubat);
    LoadSpriteSheet(&sSpriteSheetKoffing);
    LoadSpriteSheet(&sSpriteSheetBeam);
    LoadSpritePalette(&sSpritePaletteZubatKoffing);
}

u8 CreateZubatSprite(u8 x, u8 y, u8 animNum)
{
    u8 id;

    id = CreateSprite(&sSpriteTemplateZubat, x, y, 0);
    StartSpriteAnim(&gSprites[id], animNum);

    gSprites[id].sColision = FALSE;

    return id;
}

u8 CreateKoffingSprite(u8 x, u8 y, u8 animNum)
{
    u8 id;

    id = CreateSprite(&sSpriteTemplateKoffing, x, y, 0);
    StartSpriteAnim(&gSprites[id], animNum);

    return id;
}

u8 CreateBeamSprite(void)
{
    u8 id;

    u8 yPos = GetZubatPositionY(CORD_TOP);
    u8 xPos = gSprites[tutorialObj.zubatSpriteId].x + 16;

    id = CreateSprite(&sSpriteTemplateBeam, xPos, yPos, 0);
    return id;
}

static void DestroySpriteBeam(struct Sprite *sprite)
{
    DestroySprite(sprite);
    tutorialObj.beamSpritesId[sprite->sBeamIndex] = 0xFF;
    tutorialObj.countBeam -=1;
}

static void DestroySpritesGame(void)
{
    u8 i;

    DestroySprite(&gSprites[tutorialObj.zubatSpriteId]);
    tutorialObj.zubatSpriteId = 0xFF;
  
    for (i = 0; i < MAX_NUM_KOFFING_SPRITES; i++)
    {
        if(tutorialObj.koffingSpritesId[i] == 0xFF)
            continue;
        DestroySprite(&gSprites[tutorialObj.koffingSpritesId[i]]);
        tutorialObj.koffingSpritesId[i] = 0xFF;
    }

    for (i = 0; i < MAX_NUM_BEAM_SPRITES; i++)
    {
        if(tutorialObj.beamSpritesId[i] == 0xFF)
            continue;
        DestroySprite(&gSprites[tutorialObj.beamSpritesId[i]]);
        tutorialObj.beamSpritesId[i] = 0xFF;
    }
}

//==========SECCIÓN DE CREACIÓN DE BGS==========//

//Para cargar un background o backgrounds, solo necesitamos un BgTemplate que defina sus características, InitBgsFromTemplates, cargar su tileset, cargar su tilemap y ShowBg(MI_BG). Con eso, si hemos limpiado la memoria previamente, se verán sin problemas.
//Aquí hacemos un enum para poder usar constantes en vez de números: ShowBg(BG_VIDAS_Y_TEXTO) en vez de ShowBg(0). Esto no es necesario, pero facilita un poco el trabajo.
enum BgsMinijuegoZubat
{
    BG_VIDAS_Y_TEXTO,
    BG_CUEVA_CERCA,
    BG_CUEVA_LEJOS
};

//En el BgTemplate definimos las características que van a tener nuestros backgrounds.
//La GBA tiene 4 backgrounds (capas de video) que se numeran del 0 al 3.
static const struct BgTemplate TutorialBgTemplates[] =
{
    [BG_VIDAS_Y_TEXTO] =
    {
        .bg = 0, //El background en el que se va a cargar.
        .charBaseIndex = 0, //Posición en la que se cargan los tiles en la VRAM. Si quieres verlo en mGBA, ve a Herramientas > Game State Views > Ver mosaicos.
        .mapBaseIndex = 28, //Posición en la que se carga el tilemap en la VRAM. Si quieres verlo en mGBA, ve a Herramientas > Game State Views > Ver mosaicos.
        .priority = 0 //Prioridad: qué background se muestra encima de otros. Va de 0 a 3, y cuanto más bajo, más prioridad (Un bg con prioridad 1 se ve delante de uno con prioridad 2).
    },
    [BG_CUEVA_CERCA] =
    {
        .bg = 1,
        .charBaseIndex = 2,
        .mapBaseIndex = 30,
        .priority = 1
    },
    [BG_CUEVA_LEJOS] =
    {
        .bg = 2,
        .charBaseIndex = 3,
        .mapBaseIndex = 31,
        .priority = 2
    }
};

//==========BG LOAD FUNC==========//

static void LoadBgs(void) //Esta función es la que carga los tiles y los tilemaps de los bgs, carga la paleta, y los muestra en pantalla. 
{
    InitBgsFromTemplates(0, TutorialBgTemplates, ARRAY_COUNT(TutorialBgTemplates));

    LZ77UnCompVram(TutorialBG2_Tileset, (void*) BG_CHAR_ADDR(TutorialBgTemplates[BG_CUEVA_LEJOS].charBaseIndex)); //Descomprimimos el tileset del bg 2 en la VRAM según el charBaseIndex que le hemos asignado previamente.
    LZ77UnCompVram(TutorialBG2_Tilemap, (u16*) BG_SCREEN_ADDR(TutorialBgTemplates[BG_CUEVA_LEJOS].mapBaseIndex)); //Descomprimos el tilemap del bg 2 en la VRAM según el mapBaseIndex que le hemos asignado previamente.

    LZ77UnCompVram(TutorialBG1_Tileset, (void*) BG_CHAR_ADDR(TutorialBgTemplates[BG_CUEVA_CERCA].charBaseIndex)); //Igual que arriba pero para el tileset del bg 1.
    LZ77UnCompVram(TutorialBG1_Tilemap, (u16*) BG_SCREEN_ADDR(TutorialBgTemplates[BG_CUEVA_CERCA].mapBaseIndex)); //Igual que arriba pero para el tilemap del bg 1.

    LoadPalette(TutorialBG_Palette, BG_PLTT_ID(0), PLTT_SIZE_4BPP); //Cargamos la paleta o paletas de nuestros bgs en el índice que le hayamos asignado en el tilemap (en TilemapStudio)

    ResetAllBgsCoordinates(); //Ponemos a 0 las coordenadas de los bgs, porque los vamos a mover (efecto de scroll).

    //Estas funciones son las que, una vez tenemos cargados los tiles y tilemaps de los bgs, los muestran. Si quisiéramos que alguno no se viera, simplemente bastaría con HideBg(MI_BG).
    ShowBg(BG_VIDAS_Y_TEXTO);
    ShowBg(BG_CUEVA_CERCA);
    ShowBg(BG_CUEVA_LEJOS);
}

//Estas funciones preparan la Oam para que funcione con los nuevos sprites al cambiar de pantalla.
static void VBlank_CB_Tutorial(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

//Esta función empieza los Tasks, que son las funciones ejecutadas en orden de nuestro minijuego; anima los sprites, arranca el buffer del Oam, y actualiza el fade de paletas.
static void CB2_Tutorial(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

//==========WINDOW LOAD FUNC==========//

//Aquí definimos las ventanas, en este caso 3. Como se ve en el tutorial, pueden usarse ventanas para muchas cosas: texto con vidas, texto con borde, una zona más oscura o diferente de la pantalla...
enum
{
    WINDOW_MSG,
    WINDOW_DISTANCE,
    WINDOW_LIVES,
};

static const struct WindowTemplate sWindowTemplatesTutorial[] =
{
    [WINDOW_MSG]
    {
        .bg = 0, //Bg donde va estar la window
        .tilemapLeft = 1, //Cuantos bloques de 8x8 va a tener a la izquierda el inicio de la window
        .tilemapTop = 6, //Cuantos bloques de 8x8 va a tener arriba el inicio de la window
        .width = 28, //Ancho de la window, en bloques de 8x8
        .height = 5, //Alto de la window, en bloques de 8x8
        .paletteNum = 15, //Paleta que va a usar la window, siempre de las correspondientes a los backgrounds.
        .baseBlock = 1 //Posicionamiento de la window en la VRAM, a la primera simpre se le da el valor 1
    },
    [WINDOW_DISTANCE]
    {
        .bg = 0,
        .tilemapLeft = 18,
        .tilemapTop = 0,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 28 * 5 + 1 //Para calcular el valor del baseblock, multiplicamos el ancho por el alto de la window previa, más el baseblock de la previa. Podemos escribir explícitamente el valor, o dejar que nos lo calcule.
    },
    [WINDOW_LIVES]
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 0,
        .width = 6,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = (28 * 5 + 1) + (10 * 2)
    },
    DUMMY_WIN_TEMPLATE,
};

static void InitWindowTutorial(void)
{
	InitWindows(sWindowTemplatesTutorial); //Esta función es la que inicializa las windows que vamos a usar.
    DeactivateAllTextPrinters();
	LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(15), PLTT_SIZE_4BPP); //Cargamos la paleta de la ventana de texto del OW para poder utilizarla.
}

static void PrintDistance(void)
{
    FillWindowPixelBuffer(WINDOW_DISTANCE, PIXEL_FILL(0)); //Funcion que rellena con color la window, en este caso coloca el color 0 (el transparete) del paleteNum indicada en WINDOW_DISTANCE
    ConvertIntToDecimalStringN(gStringVar1, tutorialObj.distance, STR_CONV_MODE_LEFT_ALIGN, 3); //Convierte el valor tutorialObj.distance en un string, y lo almacena en gStringVar1 para ser utilizada como controlador de texto (STR_VAR_1) en gText_Distance.
    StringExpandPlaceholders(gStringVar2, gText_Distance);
    AddTextPrinterParameterized3(WINDOW_DISTANCE, FONT_SMALL, 0, 0, sTextoNormal, 0, gStringVar2); //Funcion para printear los textos.
    CopyWindowToVram(WINDOW_DISTANCE, COPYWIN_GFX); //Funcion para que cargue el texto en la VRAM. Lo que hace es "actualizar" los cambios que hemos hecho en la window y la vuelve a copiar a la RAM de video.
}

static void PrintLives(void)
{
    FillWindowPixelBuffer(WINDOW_LIVES, PIXEL_FILL(0));
    BlitBitmapToWindow(WINDOW_LIVES, ZubatIcon, 0, 0, 16, 16);
    ConvertIntToDecimalStringN(gStringVar1, tutorialObj.numLives, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar2, gText_Lives);
    AddTextPrinterParameterized3(WINDOW_LIVES, FONT_SMALL, 17, 0, sTextoLila, 0, gStringVar2);
    CopyWindowToVram(WINDOW_LIVES, COPYWIN_GFX);
}

//==========Otras funciones==========//

u8 GetZubatPositionY(u8 cord)
{
    u8 topEdge = gSprites[tutorialObj.zubatSpriteId].y - 16;
    u8 bottomEdge = gSprites[tutorialObj.zubatSpriteId].y + 16;

    if (cord == CORD_TOP)
    {
        return (topEdge <= 0) ? 0 : gSprites[tutorialObj.zubatSpriteId].y;
    }
    else //(cord == CORD_BOTTOM)
    {
        return (bottomEdge >= DISPLAY_HEIGHT) ? DISPLAY_HEIGHT : gSprites[tutorialObj.zubatSpriteId].y;
    }
}

u8 IsBeamColisionKoffing(struct Sprite *spriteBeam)
{
    s8 i;
    struct Sprite *sprite2;

    for (i = 0; i < MAX_NUM_KOFFING_SPRITES; i++)
    {
        if (tutorialObj.koffingSpritesId[i] == 0xFF)
            continue;

            sprite2 = &gSprites[tutorialObj.koffingSpritesId[i]];

            if (!(spriteBeam->x + 32 <= sprite2->x || spriteBeam->x >= sprite2->x + 32 ||
                spriteBeam->y + 24 <= sprite2->y || spriteBeam->y >= sprite2->y + 24))
                return tutorialObj.koffingSpritesId[i];
    }
    return 0xFF;
}

u8 IsZubatColisionKoffing(struct Sprite *spriteZubat)
{
    s8 i;
    struct Sprite *sprite2;

    for (i = 0; i < MAX_NUM_KOFFING_SPRITES; i++)
    {
        if (tutorialObj.koffingSpritesId[i] == 0xFF)
            continue;

        sprite2 = &gSprites[tutorialObj.koffingSpritesId[i]];

        if (!(spriteZubat->x + 24 <= sprite2->x || spriteZubat->x >= sprite2->x + 24 ||
            spriteZubat->y + 24 <= sprite2->y || spriteZubat->y >= sprite2->y + 24))
            return tutorialObj.koffingSpritesId[i];
    }
    
    return 0xFF;
}

u8 GetFreeIndexKoffingSpritesIds(void)
{
    u8 i;
    for (i = 0; i < MAX_NUM_KOFFING_SPRITES; i++)
    {
        if (tutorialObj.koffingSpritesId[i] == 0xFF)
            return i;
    }
    return 0xFF;
}

u8 RandomInRange(u8 min, u8 max)
{
    return Random() % (max - min + 1) + min;
}

static void HandleMovementZubat(void)
{
     
    if (JOY_HELD(DPAD_UP) && GetZubatPositionY(CORD_TOP) > 0)
    {
        gSprites[tutorialObj.zubatSpriteId].y -= 1;
    }

    if (JOY_HELD(DPAD_DOWN) && GetZubatPositionY(CORD_BOTTOM) < DISPLAY_HEIGHT)
    {
        gSprites[tutorialObj.zubatSpriteId].y += 1;
    }

    if (JOY_NEW(A_BUTTON))
    {
        if(tutorialObj.countBeam < MAX_NUM_BEAM_SPRITES)
        {
            tutorialObj.beamSpritesId[tutorialObj.countBeam] = CreateBeamSprite();
            gSprites[tutorialObj.beamSpritesId[tutorialObj.countBeam]].sBeamIndex = tutorialObj.countBeam;
            tutorialObj.countBeam += 1;
            PlaySE(SE_M_SUPERSONIC); //Cada vez que lanza un supersónico, se emite el efecto de sonido.
        }
    }
}

static bool8 HasLivesToContinue(void)
{
    if (tutorialObj.numLives == 0)
        return FALSE;
    return TRUE;
}

//==========Tasks==========//

static void Task_StartGame(u8 taskId);
static void Task_WaitToCreateKoffings(u8 taskId);
static void Task_CreateKoffings(u8 taskId);
static void Task_RemoveWindow(u8 taskId);

static void Task_MainWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        PutWindowTilemap(WINDOW_DISTANCE);
        PutWindowTilemap(WINDOW_LIVES);
        PutWindowTilemap(WINDOW_MSG);
        DrawStdWindowFrame(WINDOW_MSG, FALSE);
        FillWindowPixelBuffer(WINDOW_MSG, PIXEL_FILL(1));
        CopyWindowToVram(WINDOW_MSG, COPYWIN_FULL);
        StringExpandPlaceholders(gStringVar4, gText_HowToPlay);
        AddTextPrinterForMessage(TRUE);

        gTasks[taskId].func = Task_RemoveWindow;
    }
}

static void Task_RemoveWindow(u8 taskId)
{
    if(!RunTextPrintersAndIsPrinter0Active() && JOY_NEW(A_BUTTON))
    {
        ClearDialogWindowAndFrameToTransparent(WINDOW_MSG, TRUE);
        ClearStdWindowAndFrameToTransparent(WINDOW_MSG, FALSE);
        CopyWindowToVram(WINDOW_MSG, COPYWIN_GFX);
        RemoveWindow(WINDOW_MSG);
        gTasks[taskId].func = Task_StartGame;
    }
}

static void Task_StartGame(u8 taskId)
{
    tutorialObj.countBeam = 0;
    tutorialObj.distance = 0;
    tutorialObj.numLives = NUM_LIVES;
    memset(tutorialObj.koffingSpritesId, 0xFF, sizeof(tutorialObj.koffingSpritesId));
    PrintLives();
    PrintDistance();
    tutorialObj.zubatSpriteId = CreateZubatSprite(50, 50, 0);
    CreateTask(Task_CreateKoffings, 1);
    gTasks[taskId].func = Task_MovementBgs;
}

#define tBG1HOFS data[4]
#define tBG2HOFS data[5]

static void Task_MovementBgs(u8 taskId)
{
    if(!HasLivesToContinue())
    {
        gTasks[taskId].tTimer = 0;
        gTasks[taskId].func = Task_ZubatFall;
        PlaySE(SE_RG_CARD_FLIP);
    }

    if(gTasks[taskId].tTimer % 4 == 0) 
    {
        SetGpuReg(REG_OFFSET_BG1HOFS, ++gTasks[taskId].tBG1HOFS);
    }

    if(gTasks[taskId].tTimer % 8 == 0) 
    {
        SetGpuReg(REG_OFFSET_BG2HOFS, ++gTasks[taskId].tBG2HOFS);
    }

    if(gTasks[taskId].tTimer % 30 == 0)
    {
        tutorialObj.distance += 1;
        PrintDistance();
    } 

    gTasks[taskId].tTimer += 1;
}

#undef tBG1HOFS
#undef tBG2HOFS

static void Task_CreateKoffings(u8 taskId)
{
    u8 i, yPos, numSpriteToCreate, indexKoffing;
    bool8 positionValid;
    u8 attempts = 0;

    if (!gPaletteFade.active)
    {
        if (!HasLivesToContinue())
        {
            DestroyTask(taskId);
        }

       numSpriteToCreate = (Random() % (MAX_NUM_KOFFING_SPRITES / 2)) + 1;

        for (i = 0; i < numSpriteToCreate; i++)
        {
            indexKoffing = GetFreeIndexKoffingSpritesIds();
            if (indexKoffing == 0xFF)
                break;
            
            do
            {
                positionValid = TRUE;
                yPos = RandomInRange(16, DISPLAY_HEIGHT-16);

                // Comprobamos que no se solape con ningún sprite existente
                for (u8 j = 0; j < MAX_NUM_KOFFING_SPRITES; j++)
                {
                    if (tutorialObj.koffingSpritesId[j] != 0xFF)
                    {
                        u8 existingYPos = gSprites[tutorialObj.koffingSpritesId[j]].y;
                        if (abs(yPos - existingYPos) < 32) // 32 es el tamaño del sprite
                        {
                            positionValid = FALSE;
                            break;
                        }
                    }
                }
                attempts++;
            }
            while (!positionValid && attempts < 10);

            if (positionValid)
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

static void Task_WaitToCreateKoffings(u8 taskId)
{
    if (++gTasks[taskId].tTimer == gTasks[taskId].tTimeToWait)
    {
        gTasks[taskId].tTimer = 0;
        gTasks[taskId].func = Task_CreateKoffings;
    }
}

static void Task_ZubatFall(u8 taskId)
{
    if (gSprites[tutorialObj.zubatSpriteId].y == DISPLAY_HEIGHT)
    {
        gSprites[tutorialObj.zubatSpriteId].invisible = TRUE;
        gTasks[taskId].func = Task_EndGame;
    }
    gSprites[tutorialObj.zubatSpriteId].y += 1;
}

static void Task_FadeOut(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 10, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_FadeOut;
}

static void Task_EndGame(u8 taskId)
{
    u16 music = GetCurrLocationDefaultMusic();

    if (!gPaletteFade.active)
    {
        Free(&tutorialObj);
        FreeAllWindowBuffers();
        DestroySpritesGame();
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
        FadeOutAndPlayNewMapMusic(music, 4);
        DestroyTask(taskId);
    }
}

//==========GFX SETUP FUNC==========//

void CB2_InitTutorialSetUp(void)
{
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
        VBlank_CB_Tutorial();
        CB2_Tutorial();
        gMain.state++;
        break;
    case 2:
        LoadBgs();
        InitWindowTutorial();
        LoadSpritesResources();
        LoadMessageBoxAndBorderGfx();
        LoadPalette(ZubatKoffing_Palette, BG_PLTT_ID(1), PLTT_SIZE_4BPP); //"Reutilizamos" la paleta de los iconos en el bg para cargar el icono de Zubat. Si os dais cuenta, se ha cargado como parte del background, y, por tanto, se le ha asignado previamente (en TilemapStudio) el índice de paleta que usará.
        FadeOutAndPlayNewMapMusic(MUS_WEATHER_GROUDON, 4); //Aquí es donde se hace la transición entre la música del OW y la música de nuestro menú. El 4 es el tiempo de transición: cuanto más alto, más lenta la transición.
        gMain.state++;
        break;
    case 3:
        CreateTask(Task_MainWaitFadeIn, 0);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK); //Fundido a negro.
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

#endif //TUTORIAL_MINIJUEGO_ZUBAT

//==========CALLNATIVE FUNC==========//

bool8 StartTutorialMinijuegoZubat_CB2(void)
{
    #if TUTORIAL_MINIJUEGO_ZUBAT == TRUE
    {
        if (!gPaletteFade.active)
        {
            gMain.state = 0;
            CleanupOverworldWindowsAndTilemaps();
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
            SetMainCallback2(CB2_InitTutorialSetUp);

            return TRUE;
        }
    }
    #endif //TUTORIAL_MINIJUEGO_ZUBAT
    return FALSE;
}
