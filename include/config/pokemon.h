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
#define P_EVOLUTION_LEVEL_1_LEARN   GEN_LATEST  // En Gen 8+, Pokémon que evolucionen al nivel 1 no aprenden los ataques de ese nivel, mientras que antes sí lo hacían.

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
#define P_SCATTERBUG_LINE_FORM_BREED   SPECIES_SCATTERBUG_FANCY  // Elige la forma de Scatterbug de la que saldrá un huevo de Vivillon/Spewpa/Scatterbug, básicamente alineando todas las diferentes formas de "localización".

// Configuración específica de especies
#define P_SHEDINJA_BALL             GEN_LATEST  // Desde Gen 4, Shedinja requiere una Pokébola para su evolución. En Gen 3, Shedinja hereda la Pokébola de Nincada.
#define P_KADABRA_EVERSTONE         GEN_LATEST  // Desde Gen 4, Kadabra puede evolucionar incluso cuando sostiene un Everstone.
#define P_SHUCKLE_BERRY_JUICE       GEN_LATEST  // En Gen 2, Shuckle tenía una probabilidad de 1/16 de convertir la Baya que sostiene en Jugo de Baya. Habilitar esto permitirá que Shuckle haga esto con una Baya Oran, que es el sucesor espiritual del artículo Baya.

//Configuración de gráficos de especies
#define P_GENDER_DIFFERENCES             TRUE        // Si TRUE, los Pokémon tendrán diferencias gráficas si son hembras. Pokémon como Meowstic no son afectados por esta configuración.
#define P_CUSTOM_GENDER_DIFF_ICONS       TRUE        // Si está habilitado, dará a más Pokémon íconos personalizados para sus formas femeninas, es decir, Hippopotas y Hippowdon
#define P_ARCEUS_UNIQUE_FORM_ICONS       GEN_LATEST  // Desde Gen 9, Arceus además cambia su ícono para reflejar su forma actual.
#define P_FOOTPRINTS                     TRUE        // Si está habilitado, los Pokémon tendrán huellas (como era el caso hasta Gen 5 y en BDSP). Deshabilitar esto ahorra algo de espacio en la ROM.
#define P_TWO_FRAME_FRONT_SPRITES        TRUE        // En Pokémon Esmeralda, los sprites frontales de Pokémon siempre consisten en dos cuadros. Esta configuración puede revertirlo para usar solo el primer cuadro, como en los otros juegos de Gen 3.
#define P_GBA_STYLE_SPECIES_GFX          FALSE       // Por defecto, los sprites de Pokémon son de estilo NDS. Este config los vuelve al estilo GBA. NOTA: B_ENEMY_MON_SHADOW_STYLE se desactiva cuando usas estos sprites de momento.
#define P_GBA_STYLE_SPECIES_ICONS        FALSE       // Por defecto, Pokémon tienen sus iconos actualizados. Este config los vuelve al estilo GBA.
#define P_GBA_STYLE_SPECIES_FOOTPRINTS   FALSE       // Por defecto, Pokémon tienen sus huellas actualizadas. Este config las vuelve al estilo GBA.

// Otras configuraciones
#define P_CRIES_ENABLED                  TRUE        // Si está habilitado, los Pokémon tendrán llantos. Deshabilitar esto ahorra alrededor de MUCHO espacio en la ROM (¡más del 25%!), pero en su lugar recomendamos deshabilitar familias de Pokémon individuales no utilizadas en include/config/species_enabled.h.
#define P_LEGENDARY_PERFECT_IVS          GEN_LATEST  // Desde Gen 6, los Legendarios, Mitológicos y Bestias Ultra encontradas en la naturaleza o recibidas como regalos tienen al menos 3 IVs perfectos.
#define P_EV_CAP                         GEN_LATEST  // Desde Gen 6, el máximo de EVs por estadística es 252 en lugar de 255.
#define P_SHOW_TERA_TYPE                 GEN_8       // Desde Gen 9, el Tipo Tera se muestra en la pantalla de resumen.
#define P_TM_LITERACY                    GEN_LATEST  // Desde Gen 6, Pokémon que no pueden aprender MTs pueden aprender MTs que enseñan movimientos que están en sus aprendizajes por nivel.
#define P_CAN_FORGET_HIDDEN_MOVE         FALSE       // Si está habilitado, los Pokémon pueden olvidar cualquier movimiento, incluso si es un Movimiento Oculto.
#define P_EGG_CYCLE_LENGTH               GEN_LATEST  // Desde Gen 8, los ciclos de huevo toman la mitad de pasos que antes.
#define P_ONLY_OBTAINABLE_SHINIES        FALSE       // Si está habilitado, los Pokémon encontrados en la Pirámide de Batalla no serán shiny.
#define P_NO_SHINIES_WITHOUT_POKEBALLS   FALSE       // Si está habilitado, los Pokémon encontrados cuando el jugador se queda sin Poké Balls no serán shiny.
#define P_SHOW_DYNAMIC_TYPES             FALSE       // Si está habilitado, todos los ataques con tipo dinámico se mostrarán así en combate y en la pantalla de sumario.

// Configuración de ayuda de aprendizaje de movimientos
#define P_LEARNSET_HELPER_TEACHABLE      TRUE        // Si está habilitado, teachable_learnsets.h será poblado por tools/learnset_helpers/teachable.py usando los archivos JSON incluidos basados en las MTs y tutores disponibles.
#define P_TUTOR_MOVES_ARRAY              FALSE       // Si está habilitado, genera gTutorMoves automáticamente usando make_teachables.py. (generalmente no se necesita, pero la Pokédex HGSS tiene una opción para usarlo).

// Configuración de flags
// Para usar las siguientes características en la programación, reemplaza los 0s con el ID de la flag que le estás asignando.
// Ejemplo: Reemplaza con FLAG_UNUSED_0x264 para que puedas usar esa flag para activar la característica.
#define P_FLAG_FORCE_SHINY      0     // Si esta flag está activada, todos los Pokémon salvajes y regalos serán obligatoriamente Shiny.
#define P_FLAG_FORCE_NO_SHINY   0     // Si esta flag está activada, todos los Pokémon salvajes y regalos serán obligatoriamente NO Shiny.

// Ve aquí si deseas deshabilitar familias específicas de Pokémon.
#include "config/species_enabled.h"

#endif // GUARD_CONFIG_POKEMON_H
