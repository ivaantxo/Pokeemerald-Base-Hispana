#ifndef GUARD_CONFIG_SUMMARY_SCREEN_H
#define GUARD_CONFIG_SUMMARY_SCREEN_H

// Configuraciones
#define P_SUMMARY_SCREEN_MOVE_RELEARNER  TRUE   // Si es TRUE, mostrará una opción para recordar movimientos en la pantalla de sumario.
#define P_SUMMARY_MOVE_RELEARNER_FULL_PP TRUE   // Si es TRUE, el recordador de movimientos de la pantalla de sumario recuperará los PP de los ataques al máximo.
#define P_SUMMARY_SCREEN_RENAME          TRUE   // Si es TRUE, una opción para cambiar el nombre de los Pokémon sustituirá la opción de cancelar en la pantalla de sumario.
#define P_SUMMARY_SCREEN_IV_EV_INFO      FALSE  // Si es TRUE, permitirá al jugador rotar Estadísticas, IVs, y EVs en la página de habilidades en la pantalla de sumario.
#define P_SUMMARY_SCREEN_IV_EV_BOX_ONLY  FALSE  // Si es TRUE, permitirá al jugador rotar Estadísticas, IVs, y EVs en la página de habilidades en la pantalla de sumario, pero solo en la caja Pokémon.
#define P_SUMMARY_SCREEN_IV_EV_TILESET   FALSE  // Si es TRUE, cargará un tileset alternativo para permitir cambiar la etiqueta "Estadísticas" en la página de habilidades en la pantalla de sumario. Nota: puede ser que requiera un make clean.
#define P_SUMMARY_SCREEN_IV_EV_VALUES    FALSE  // Si es TRUE, mostrará el valor de IV en vez de la letra.
/* 
GUÍA DE LETRAS/IVs:

    F = 0
    D = 1 - 15
    C = 16 - 25
    B = 26 - 29
    A = 30
    S = 31

Información de https://bulbapedia.bulbagarden.net/wiki/Stats_judge.
*/
#define P_SUMMARY_SCREEN_IV_ONLY         FALSE  // Si es TRUE, solo mostrará IV en la pantalla de sumario.
#define P_SUMMARY_SCREEN_EV_ONLY         FALSE  // Si es TRUE, solo mostrará EV en la pantalla de sumario.

// Flags
#define P_FLAG_SUMMARY_SCREEN_IV_EV_INFO 0      // Si esta flag está seteada, permitirá al jugador rotar Estadísticas, IVs, y EVs en la página de habilidades en la pantalla de sumario. Nota: si P_SUMMARY_SCREEN_IV_EV_INFO es TRUE, esta flag no hace nada.

#endif // GUARD_CONFIG_SUMMARY_SCREEN_H
