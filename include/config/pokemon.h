#ifndef GUARD_CONFIG_POKEMON_H
#define GUARD_CONFIG_POKEMON_H

// Configuración de datos de especies
#define P_UPDATED_TYPES             GEN_LATEST  // Desde Gen 6, varios Pokémon cambiaron a ser parcialmente o completamente de tipo Hada.
#define P_UPDATED_STATS             GEN_LATEST  // Desde Gen 6, las estadísticas de los Pokémon se actualizan con cada generación.
#define P_UPDATED_ABILITIES         GEN_LATEST  // Desde Gen 6, ciertos Pokémon tienen sus habilidades cambiadas.
#define P_UPDATED_EGG_GROUPS        GEN_LATEST  // Desde Gen 8, ciertos Pokémon han ganado nuevos grupos de huevos.
#define P_UPDATED_FRIENDSHIP        GEN_LATEST  // Desde Gen 8, la amistad base de ciertos Pokémon fue cambiada.
#define P_UPDATED_EVS               GEN_LATEST  // Algunos Pokémon han recibido actualizaciones de EV después de su introducción.
#define P_UPDATED_EXP_YIELDS        GEN_LATEST  // Desde Gen 5, algunos Pokémon han recibido cambios en la Experiencia base.

// Aprendizajes
#define P_LVL_UP_LEARNSETS          GEN_LATEST  // Elige qué conjunto de Aprendizajes por Nivel usar.
                                                // Para generaciones que no habían introducido una especie aún, usamos su primera aparición (por ejemplo, los datos de Gen2 de Chikorita si la configuración está en GEN_1).
                                                // Para generaciones que no incluyen una especie previamente introducida, usamos su última aparición (por ejemplo, los datos de Gen7 de Snivy si la configuración está en GEN_8).
                                                // GEN_1/2/3/4/5/6/7: Yellow, Crystal, RSE, HGSS, B2W2, ORAS, USUM aprendizajes respectivamente.
                                                // GEN_8: Usa la siguiente prioridad: BDSP para Pokémon de Gen1-4, luego LA para especies introducidas en ese juego, luego SwSh para especies presentes en esos juegos. De lo contrario, usa GEN_7.
                                                // GEN_9: SV para especies presentes en esos juegos. De lo contrario, usa GEN_8.

// Configuración de evolución
#define P_FRIENDSHIP_EVO_THRESHOLD   GEN_LATEST  // Desde Gen 8, los Pokémon que evolucionan por amistad evolucionan en o arriba de 160 de amistad en lugar de 220.

// Configuración de cría
#define P_NIDORAN_M_DITTO_BREED         GEN_LATEST  // Desde Gen 5, cuando Nidoran♂ cría con Ditto puede producir descendencia Nidoran♀. Antes, solo producía descendencia masculina. Este cambio también se aplica a Volbeat.
#define P_INCENSE_BREEDING              GEN_LATEST  // Desde Gen 9, los Pokémon Bebés de generaciones cruzadas no requieren que los padres sostengan Incienso para ser obtenidos mediante cría.
#define P_EGG_HATCH_LEVEL               GEN_LATEST  // Desde Gen 4, los Pokémon nacerán de los huevos en el nivel 1 en lugar de 5.
#define P_BALL_INHERITING               GEN_LATEST  // Desde Gen 6, los Huevos del Centro de Crianza heredarán la Pokébola de su madre. Desde Gen 7 en adelante, el padre también puede transmitirla siempre que sea de la misma especie que la madre.
#define P_TM_INHERITANCE                GEN_LATEST  // Desde Gen 6, el padre ya no transmite MTs al bebé.
#define P_MOTHER_EGG_MOVE_INHERITANCE   GEN_LATEST  // Desde Gen 6, la madre también puede transmitir Movimientos de Huevo.
#define P_NATURE_INHERITANCE            GEN_LATEST  // En Gen 3, Everstone otorga a Ditto y a las madres un 50% de probabilidad de transmitir la Naturaleza. Desde Gen 4, cualquiera puede transmitir la naturaleza. Desde Gen 5, la probabilidad es del 100%.
#define P_ABILITY_INHERITANCE           GEN_LATEST  // En B2W2, un Pokémon hembra tiene un 80% de probabilidad de transmitir su habilidad si se cría con un macho. Desde Gen 6, la probabilidad es del 80% para habilidad normal y 60% para Habilidad Oculta, y cualquiera puede transmitir sus habilidades si se cría con Ditto. NOTA: Efecto de BW: Se ha omitido la probabilidad del 60% de transmitir HA y aleatorio para habilidad normal.
#define P_EGG_MOVE_TRANSFER             GEN_LATEST  // A partir de Gen 8, si dos Pokémon de la misma especie están juntos en el Centro de Crianza, uno conoce un Movimiento de Huevo y el otro tiene un espacio vacío, el otro Pokémon recibirá el Movimiento de Huevo en el espacio vacío. En Gen 9, si un Pokémon sostiene una Hierba Espejo, recibirá Movimientos de Huevo del otro independientemente de la especie.

// Species-specific settings
#define P_SHEDINJA_BALL             GEN_LATEST  // Since Gen 4, Shedinja requires a Poké Ball for its evolution. In Gen 3, Shedinja inherits Nincada's Ball.
#define P_KADABRA_EVERSTONE         GEN_LATEST  // Since Gen 4, Kadabra can evolve even when holding an Everstone.
#define P_SHUCKLE_BERRY_JUICE       GEN_LATEST  // In Gen 2, Shuckle had a 1/16 chance of converting Berry that it's holding into Berry Juice. Enabling this will allow Shuckle to do this with an Oran Berry, which is the spiritual succesor of the Berry item.

// Other settings
#define P_FOOTPRINTS                     TRUE        // If TRUE, Pokémon will have footprints (as was the case up to Gen 5 and in BDSP). Disabling this saves some ROM space.
#define P_CRIES_ENABLED                  TRUE        // If TRUE, Pokémon will have cries. Disabling this saves around a LOT of ROM space (over 25%!), but instead we recommend disabling individual unused Pokémon families in include/config/species_enabled.h.
#define P_LEGENDARY_PERFECT_IVS          GEN_LATEST  // Since Gen 6, Legendaries, Mythicals and Ultra Beasts found in the wild or given through gifts have at least 3 perfect IVs.
#define P_EV_CAP                         GEN_LATEST  // Since Gen 6, the max EVs per stat is 252 instead of 255.
#define P_SHOW_TERA_TYPE                 GEN_8       // Since Gen 9, the Tera Type is shown on the summary screen.
#define P_TM_LITERACY                    GEN_LATEST  // Since Gen 6, TM illiterate Pokémon can learn TMs that teach moves that are in their level-up learnsets.
#define P_CAN_FORGET_HIDDEN_MOVE         FALSE       // If TRUE, Pokémon can forget any move, even if it is a Hidden Move.
#define P_EGG_CYCLE_LENGTH               GEN_LATEST  // Since Gen 8, egg cycles take half as many steps as before.
#define P_TWO_FRAME_FRONT_SPRITES        TRUE        // In Pokémon Emerald, Pokémon front sprites always consist of two frames. This config can revert it to only use the first frame, as is the case in the other Gen 3 games.
#define P_ONLY_OBTAINABLE_SHINIES        FALSE       // If TRUE, Pokémon encountered in the Battle Pyramid won't be shiny.
#define P_NO_SHINIES_WITHOUT_POKEBALLS   FALSE       // If TRUE, Pokémon encountered when the player is out of Poké Balls won't be shiny

// Configuración de ayudantes de aprendizajes
#define P_LEARNSET_HELPER_TEACHABLE TRUE        // Si es TRUE, teachable_learnsets.h será poblado por tools/learnset_helpers/teachable.py usando los archivos JSON incluidos basados en las MTs y tutores disponibles.

// Configuración de flags
// Para usar las siguientes características en la programación, reemplaza los 0s con el ID de la flag que le estás asignando.
// Ejemplo: Reemplaza con FLAG_UNUSED_0x264 para que puedas usar esa flag para activar la característica.
#define P_FLAG_FORCE_SHINY      0     // Si esta flag está activada, todos los Pokémon salvajes y regalos serán obligatoriamente Shiny.
#define P_FLAG_FORCE_NO_SHINY   0     // Si esta flag está activada, todos los Pokémon salvajes y regalos serán obligatoriamente NO Shiny.

// Ve aquí si deseas deshabilitar familias específicas de Pokémon.
#include "config/species_enabled.h"

#endif // GUARD_CONFIG_POKEMON_H
