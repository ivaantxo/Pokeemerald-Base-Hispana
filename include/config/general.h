#ifndef GUARD_CONFIG_GENERAL_H
#define GUARD_CONFIG_GENERAL_H

// En los juegos de la Generación 3, se usaron asserts en varias compilaciones de depuración.
// Ruby/Sapphire y Emerald no tienen estos asserts, mientras que Fire Red
// aún los tiene en el ROM. Esto se debe a que los desarrolladores olvidaron
// definir NDEBUG antes del lanzamiento; sin embargo, esto se ha cambiado ya que
// la compilación de depuración de Ruby no usa las funciones AGBPrint.
#define NDEBUG

// Para habilitar la depuración con printf, comenta "#define NDEBUG". Esto permite
// usar las diversas funciones AGBPrint. (Consulta include/gba/isagbprint.h).
// Consulta a continuación para habilitar diferentes versiones de impresión bonita.

#ifndef NDEBUG

#define PRETTY_PRINT_MINI_PRINTF (0)
#define PRETTY_PRINT_LIBC (1)

#define LOG_HANDLER_AGB_PRINT (0)
#define LOG_HANDLER_NOCASH_PRINT (1)
#define LOG_HANDLER_MGBA_PRINT (2)

// Usa este interruptor para elegir un manejador para la impresión bonita.
// NOTA: mini_printf soporta un formateador personalizado para mostrar cadenas codificadas en preprocesador. (%S)
//       Algunas distribuciones de libc (especialmente dkp arm-libc) fallarán al enlazar impresión bonita.
#define PRETTY_PRINT_HANDLER (PRETTY_PRINT_MINI_PRINTF)

// Usa este interruptor para elegir un manejador para la salida de printf.
// NOTA: Estos solo funcionarán en los emuladores respectivos y no deben usarse en un entorno productivo.
//       Algunos emuladores o hardware real podrían (y está permitido) fallar si se usan.
//       AGB_PRINT está soportado en unidades de depuración respectivas.

#define LOG_HANDLER (LOG_HANDLER_MGBA_PRINT)
#endif

// Descomenta para arreglar algunos errores menores identificados
#define BUGFIX

// Varios comportamientos indefinidos pueden o no impedir la compilación con
// compiladores más nuevos. Así que siempre corrígelos al usar un compilador moderno.
#if MODERN || defined(BUGFIX)
#ifndef UBFIX
#define UBFIX
#endif
#endif

// Definición de compatibilidad para que otros proyectos detecten pokeemerald-expansion
#define RHH_EXPANSION

// Definiciones basadas en ramas heredadas incluidas para compatibilidad hacia atrás
#define BATTLE_ENGINE
#define POKEMON_EXPANSION
#define ITEM_EXPANSION

// Constantes de generación utilizadas en configuraciones para definir comportamientos.
#define GEN_1 0
#define GEN_2 1
#define GEN_3 2
#define GEN_4 3
#define GEN_5 4
#define GEN_6 5
#define GEN_7 6
#define GEN_8 7
#define GEN_9 8
// Cambiar el valor de GEN_LATEST a una Generación diferente cambiará todas las configuraciones predeterminadas que lo usan a la vez.
#define GEN_LATEST GEN_9

// Configuraciones generales
#define EXPANSION_INTRO              TRUE    // Si está habilitado, se reproducirá una introducción personalizada de RHH después de la pantalla de derechos de autor original.
#define SUMMARY_SCREEN_NATURE_COLORS TRUE    // Si está habilitado, los aumentos y reducciones basados en la naturaleza se mostrarán en rojo y azul en la pantalla de resumen.
#define HQ_RANDOM                    TRUE    // Si está habilitado, reemplaza el RNG predeterminado con una implementación del RNG SFC32. Puede romper el código que depende del RNG.
#define COMPETITIVE_PARTY_SYNTAX     TRUE    // Si está habilitado, los equipos se definen en "sintaxis competitiva".
#define AUTO_SCROLL_TEXT             TRUE    // Si está habilitado, el texto automáticamente pasará a la siguiente línea después de NUM_FRAMES_AUTO_SCROLL_DELAY. El jugador todavía podrá pulsar A_BUTTON o B_BUTTON para pasar a la siguiente línea por sí mismo.
#define NUM_FRAMES_AUTO_SCROLL_DELAY 49

// Constantes del sistema de medidas para usar con UNITS
#define UNITS_IMPERIAL               0       // Pulgadas, pies, libras
#define UNITS_METRIC                 1       // metros, kilogramos

#define UNITS                        UNITS_METRIC
#define CHAR_DEC_SEPARATOR           CHAR_COMMA // CHAR_PERIOD se usa como separador decimal solo en el Reino Unido y EE.UU. El resto del mundo usa CHAR_COMMA.

// Pantalla de Nombres
#define AUTO_LOWERCASE_KEYBOARD      GEN_LATEST  // A partir de GEN_6, después de ingresar el primer carácter en mayúsculas, el teclado cambia a letras minúsculas.

#define SAVE_TYPE_ERROR_SCREEN              FALSE   // When enabled, this shows an error message when the game is loaded on a cart without a flash chip or on an emulator with the wrong save type setting instead of crashing.
#endif // GUARD_CONFIG_GENERAL_H
