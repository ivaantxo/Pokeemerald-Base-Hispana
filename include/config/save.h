#ifndef GUARD_CONFIG_SAVE_H
#define GUARD_CONFIG_SAVE_H

// Configuraciones de SaveBlock1
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK1    FALSE   // Libera las flags de Pokédex vistas no utilizadas (52 bytes).
#define FREE_TRAINER_HILL                   FALSE   // Libera los datos de Trainer Hill (28 bytes).
#define FREE_MYSTERY_EVENT_BUFFERS          FALSE   // Libera el espacio de ramScript (1104 bytes).
#define FREE_MATCH_CALL                     FALSE   // Libera los datos de llamadas de batalla y rematches / buscador VS. (104 bytes).
#define FREE_UNION_ROOM_CHAT                FALSE   // Libera el chat de la sala de unión (212 bytes).
#define FREE_ENIGMA_BERRY                   FALSE   // Libera los datos de la Baya Enigma del E-Reader (52 bytes).
#define FREE_LINK_BATTLE_RECORDS            FALSE   // Libera los datos de récords de batallas por enlace (88 bytes).
#define FREE_MYSTERY_GIFT                   FALSE   // Libera los datos de Regalo Misterioso (876 bytes).
                                            // Total de SaveBlock1: 2516 bytes
// Configuraciones de SaveBlock2
#define FREE_BATTLE_TOWER_E_READER          FALSE   // Libera los datos del E-Reader de Battle Tower (188 bytes).
#define FREE_POKEMON_JUMP                   FALSE   // Libera los datos de Pokémon Jump (16 bytes).
#define FREE_RECORD_MIXING_HALL_RECORDS     FALSE   // Libera los récords de la sala de mezclado de récords (1032 bytes).
#define FREE_EXTRA_SEEN_FLAGS_SAVEBLOCK2    FALSE   // Libera las flags de Pokédex vistas no utilizadas (108 bytes).
                                            // Total de SaveBlock2: 1274 bytes

                                            // Gran Total: 3790


#endif // GUARD_CONFIG_SAVE_H
