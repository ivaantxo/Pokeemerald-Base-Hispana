#ifndef GUARD_CONFIG_DEBUG_H
#define GUARD_CONFIG_DEBUG_H

// Depuración en el Mundo Exterior
#define DEBUG_OVERWORLD_MENU            TRUE                // Habilita un menú de depuración en el mundo exterior para cambiar flags, variables, otorgar Pokémon y más, accesible manteniendo presionado R y presionando START mientras estás en el mundo exterior por defecto.
#define DEBUG_OVERWORLD_HELD_KEYS       (R_BUTTON)          // Las teclas que deben mantenerse presionadas para abrir el menú de depuración.
#define DEBUG_OVERWORLD_TRIGGER_EVENT   pressedStartButton  // El evento que abre el menú al mantener presionada(s) la(s) tecla(s) definidas en DEBUG_OVERWORLD_HELD_KEYS.
#define DEBUG_OVERWORLD_IN_MENU         FALSE               // Reemplaza la combinación de botones del menú de depuración en el mundo exterior con una entrada en el menú de inicio (por encima del Pokédex).

// Menú de Depuración de Batalla
#define DEBUG_BATTLE_MENU               TRUE    // Si se establece en TRUE, habilita un menú de depuración para usar en batallas al presionar el botón Select.
#define DEBUG_AI_DELAY_TIMER            FALSE   // Si se establece en TRUE, muestra el número de frames que tarda la IA en elegir un movimiento. Reemplaza el texto "Qué hará PKMN". Útil para desarrolladores o cualquier persona que modifique el código de la IA y quiera ver si no tarda demasiado en ejecutarse.

// Depuración de Pokémon
#define DEBUG_POKEMON_SPRITE_VISUALIZER TRUE    // Habilita un menú de depuración para los sprites e íconos de los Pokémon, accesible al presionar SELECT en la pantalla de resumen.


#endif // GUARD_CONFIG_DEBUG_H
