#ifndef GUARD_CONFIG_SUMMARY_SCREEN_H
#define GUARD_CONFIG_SUMMARY_SCREEN_H

// Configuraciones
#define P_SUMMARY_SCREEN_NATURE_COLORS   TRUE   // If TRUE, nature-based stat boosts and reductions will be red and blue in the summary screen.
#define P_SUMMARY_SCREEN_RENAME          TRUE   // If TRUE, an option to change Pokémon nicknames replaces the cancel prompt on the summary screen info page.

// Configuraciones IV/EV
#define P_SUMMARY_SCREEN_IV_EV_INFO      FALSE  // Si está habilitado, permitirá al jugador rotar Estadísticas, IVs, y EVs en la página de habilidades en la pantalla de sumario.
#define P_SUMMARY_SCREEN_IV_EV_BOX_ONLY  FALSE  // Si está habilitado, permitirá al jugador rotar Estadísticas, IVs, y EVs en la página de habilidades en la pantalla de sumario, pero solo en la caja Pokémon.
#define P_SUMMARY_SCREEN_IV_HYPERTRAIN   TRUE   // If TRUE, stats that have been hyper trained will show as 31/S when viewing them in the summary screen
#define P_SUMMARY_SCREEN_IV_EV_TILESET   FALSE  // Si está habilitado, cargará un tileset alternativo para permitir cambiar la etiqueta "Estadísticas" en la página de habilidades en la pantalla de sumario. Nota: puede ser que requiera un make clean.
#define P_SUMMARY_SCREEN_IV_EV_VALUES    FALSE  // Si está habilitado, mostrará el valor de IV en vez de la letra.
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
#define P_SUMMARY_SCREEN_IV_ONLY         FALSE  // Si está habilitado, solo mostrará IV en la pantalla de sumario.
#define P_SUMMARY_SCREEN_EV_ONLY         FALSE  // Si está habilitado, solo mostrará EV en la pantalla de sumario.

// Flags
#define P_FLAG_SUMMARY_SCREEN_IV_EV_INFO 0      // Si esta flag está seteada, permitirá al jugador rotar Estadísticas, IVs, y EVs en la página de habilidades en la pantalla de sumario. Nota: si P_SUMMARY_SCREEN_IV_EV_INFO es TRUE, esta flag no hace nada.

// Move Relearner settings
#define P_ENABLE_MOVE_RELEARNERS         FALSE   // If TRUE, it enables move relearners for egg, TM and tutor. (see below for specific configs /flags)
#define P_SORT_MOVES                     FALSE   // If TRUE, sorts all moves alphabetically in the relearner's list.

// Level up Relearner
#define P_PRE_EVO_MOVES                  FALSE   // If TRUE, it enables the Pokémon to learn moves from it's pre evolution.
#define P_ENABLE_ALL_LEVEL_UP_MOVES      FALSE   // If TRUE, it enables the Pokémon to learn all level up moves, regardless of its level.

// TM Relearner
#define P_TM_MOVES_RELEARNER             TRUE    // If TRUE, enables machine move relearner.
#define P_ENABLE_ALL_TM_MOVES            FALSE   // If TRUE, it enables the Pokémon to learn all TMs its compatible with, regardless of it being in the bag.

// Relearner flags - Redundant if P_ENABLE_MOVE_RELEARNERS is TRUE, but still added here incase you don't want all relearners unlocked at the same time.
// To use the following features in scripting, replace the 0s with the flag ID you're assigning it to.
// Eg: Replace with FLAG_UNUSED_0x264 so you can use that flag to toggle the feature.
#define P_FLAG_EGG_MOVES                 0       // If this flag is set, enables egg move relearner.
#define P_FLAG_TUTOR_MOVES               0       // If this flag is set, enables tutor move relearner.

// Move Relearner summary screen
#define P_SUMMARY_SCREEN_MOVE_RELEARNER  TRUE   // Si está habilitado, mostrará una opción para recordar movimientos en la pantalla de sumario.
#define P_SUMMARY_MOVE_RELEARNER_FULL_PP TRUE   // Si está habilitado, el recordador de movimientos de la pantalla de sumario recuperará los PP de los ataques al máximo.

// Move Relearner party menu
#define P_PARTY_MOVE_RELEARNER           FALSE  // If TRUE, it enables the move relearner in the party menu.

#endif // GUARD_CONFIG_SUMMARY_SCREEN_H
