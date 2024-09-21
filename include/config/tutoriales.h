#ifndef GUARD_CONFIG_TUTORIALES_H
#define GUARD_CONFIG_TUTORIALES_H

#define TUTORIAL_ICONOS_DE_TIPOS    TRUE

/* Tutorial de Ivantxo
Si el config es TRUE, los iconos de tipos son sustituidos por otros de estilo moderno (Colores de Pokémon HOME, iconos basados en los de ChefSrGio https://www.deviantart.com/chefsrgio/art/Type-Icons-Masters-Style-980891722, créditos a él).
¡OJO! Ten en cuenta que estos iconos ocupan 5 paletas en vez de las 3 que suelen ocupar los que vienen por defecto.

Antes que nada, unos links a páginas que sirven de mucha ayuda para entender cómo funcionan los gráficos de la GBA, la diferencia entre sprites y bgs, cómo cargar unos y otros... /http://coranac.com/tonc/text/regobj.htm#sec-intro, https://ianfinlayson.net/class/cpsc305/notes/15-sprites)
Un sprite en la GBA es un objeto de un tamaño de píxeles múltiplo de 8 (hasta 64x64, normalmente) que está indexado a una paleta a una paleta de máximo 16 colores.
Esta paleta, para que el sprite pueda verse, debe de estar cargada en las paletas que el juego destina para objetos (Esto puede verse en mGBA->Herramientas->Estado del juego->Paletas), y el sprite debe de estar "unido" a esta paleta, como veremos después.

Lo primero, es crear una paleta o paletas para el sprite; y el sprite en sí. En mi caso, he usado Aseprite para crear los sprites indexados a cada paleta con la que después se verán (en la carpeta graphics/tutoriales/iconos_tipos) más las paletas que después se usarán (en la misma carpeta, iconos_tipos_x.pal, 5 en total).
Después, hay que "identificarlas", para que podamos trabajar con ellas en el código: en el caso de los tipos, estos se cargan de una manera especial, ya que se "unen" como si fuesen un solo sprite (y después se carga uno u otro como si fuese un sprite animado). 
Esto puede verse en mGBA, en cualquier interfaz que los use, por ejemplo la pantalla de sumario, yendo a Herramientas->Ver mosaicos, y veremos en la memoria destinada a sprites/objetos como están cargados todos los iconos de los tipos + los de concurso.
Para unir los sprites, se hace en graphics_file_rules.mk, donde se crean con lo que realmente trabaja la GBA: Archivos .4bpp, a partir de los .png, y archivos .gbapal, a partir de los .pal. 
En nuestro caso, se han generado "iconos_tipos.4bpp" e "iconos_tipos.gbapal", el primero son todos los sprites de tipos unidos en uno solo, y el segundo las 5 paletas que también se cargan como una sola.

Para la gran mayoría de sprites, este paso de "unión" no será necesario, y podemos directamente identificarlos en src/graphics.c y en include/graphics.h: 
const u32 gIconosTipos_Gfx[] = INCBIN_U32("graphics/tutoriales/iconos_tipos/iconos_tipos.4bpp.lz");
const u32 gIconosTipos_Pal[] = INCBIN_U32("graphics/tutoriales/iconos_tipos/iconos_tipos.gbapal.lz");

extern const u32 gIconosTipos_Gfx[];
extern const u32 gIconosTipos_Pal[];

En el primer caso en src/graphics.c estamos creando un u32 que contiene nuestro sprite que está en graphics/tutoriales/iconos_tipos/iconos_tipos.4bpp, y en el segundo estamos creando un u32 que son nuestras paletas, que están en graphics/tutoriales/iconos_tipos/iconos_tipos.gbapal. ¡OJO! El .lz al final de cada uno significa que están comprimidas, y que para cargarlas deberemos usar LoadCompressedPalette y similares (Si no, se verán pixelados = sin descomprimir).
En include/graphics.h es donde permitimos que los demás archivos .c que contengan #include "graphics.h" puedan reconocerlos.

Ya tenemos nuestros gráficos adecuados para la GBA, convertidos en código, y reconocidos por los archivos donde queremos que se lean, ahora solo falta el código para que se muestren.
Al menos, necesitamos un Sprite Sheet y un Sprite Template, para ver qué es cada cosa vamos a usar de ejemplo la pantalla de sumario (pokemon_summary_screen.c):

const struct CompressedSpriteSheet gSpriteSheet_MoveTypes =
{
    .data = TUTORIAL_ICONOS_DE_TIPOS ? gIconosTipos_Gfx : gMoveTypes_Gfx,   Qué gráficos es este sprite.
    .size = (NUMBER_OF_MON_TYPES + CONTEST_CATEGORIES_COUNT) * 256,         Qué tamaño tiene este sprite (Que es Ancho x Alto / 2, SOLO QUE EN NUESTRO CASO FUNCIONA COMO UN SPRITE ANIMADO, CON UN "FRAME" para cada icono, por eso lo multiplica por el número de tipos).
    .tag = TAG_MOVE_TYPES                                                   Qué "etiqueta" tiene, para saber que si ya está cargado, no necesita cargarse otra vez. Esta es un número decimal, que suele ser muy alto, y se busca que sea único, para que no coincida con otro tag.
};
const struct SpriteTemplate gSpriteTemplate_MoveTypes =
{
    .tileTag = TAG_MOVE_TYPES,                                              La etiqueta de antes, pero para saber si está cargado el gráfico o no. 
    .paletteTag = TAG_MOVE_TYPES,                                           La misma etiqueta, pero para saber si la paleta está cargada o no.
    .oam = &sOamData_MoveTypes,                                             Los datos de OAM (Object Attribute Memory), que son las características del sprite, como su posición, si tiene animación afín, su modo (si es transparente se asigna aquí), su forma (tamaño adecuado) y su paleta correspondiente.
    .anims = sSpriteAnimTable_MoveTypes,                                    Las animaciones, que en nuestro caso, si lo comprobáis, veréis que es solo el tipo x 8 (Como son sprites de 32x16, cada uno tiene 8 tiles, por lo que si avanzamos 8 tiles, saltaremos al siguiente frame).
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

Recomiendo jugar un poco con estos valores y ver cómo cambia lo que vemos en la pantalla y en la memoria para ir entendiendo qué hace realmente cada uno.

¿Dónde se asigna qué paleta debe llevar nuestro sprite? En general, esto lo haremos en el parámetro .paletteNum del OamData (Un número del 0 al 15 que indica cuál de las 16 paletas de objetos usa nuestro sprite), o también podríamos hacerlo haciendo "sprite->oam.paletteNum = LoQueQueramos", si queremos hacerlo dinámico (que cambie según x condiciones).
En el caso de los iconos de tipos, esto se hace directamente en TypesInfo, donde cada tipo tiene un parámetro .palette asignado (obviamente, también del 0 al 15), y que luego se lee en la función SetTypeSpritePosAndPal en pokemon_summary_screen.c, donde podemos ver que hace:

    if (typeId < NUMBER_OF_MON_TYPES)                           Si el tipo está antes del índice de los tipos de concurso, entonces
        sprite->oam.paletteNum = gTypesInfo[typeId].palette;    el índice de la paleta será el que se indique en el parámetro .palette dentro de la estructura gTypesInfo para el [typeId] que corresponda.

Cuando ya tenemos esto, basta cargar el SpriteSheet mediante LoadCompressedSpriteSheet(&gSpriteSheet_MoveTypes), cargar la paleta con LoadCompressedPalette(gIconosTipos_Pal, tal, tal), y crear el sprite finalmente con CreateSprite(&gSpriteTemplate_MoveTypes, tal, tal, tal) en la función que queramos,
y ya tendríamos nuestros nuevos sprites cargados en la pantalla de la GBA, y solo faltaría escribir el código para ver qué hacemos con ellos.
*/

#define TUTORIAL_MINIJUEGO_ZUBAT    TRUE
/* Tutorial-Minijuego de Caco
Si el config es TRUE, activa una opción en el Start Menu que carga tres opciones: un background, un background más sprites, y un minijuego.
El tutorial viene en src/tutoriales/minijuego_zubat.c, y está pensado para seguir el orden en ese archivo, desde la carga de bgs y sprites, hasta el mismo minijuego.
*/
#endif // GUARD_CONFIG_TUTORIALES_H
