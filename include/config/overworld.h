#ifndef GUARD_CONFIG_OVERWORLD_H
#define GUARD_CONFIG_OVERWORLD_H

// Configuración de movimiento
#define OW_RUNNING_INDOORS          GEN_LATEST  // En Gen4+, los jugadores pueden correr en interiores.

// Otras configuraciones
#define OW_POISON_DAMAGE                GEN_LATEST // En Gen4, los Pokémon ya no se desmayan por Veneno en el mundo exterior. En Gen5+, no reciben daño en absoluto.
#define OW_DOUBLE_APPROACH_WITH_ONE_MON FALSE      // Si está habilitado, puedes ser visto por dos entrenadores al mismo tiempo incluso si solo tienes un Pokémon elegible en tu equipo.
#define OW_HIDE_REPEAT_MAP_POPUP        FALSE      // Si está habilitado, las ventanas emergentes del mapa no aparecerán si entras en un mapa con el mismo Id de Sección del Mapa que el último.

// Estas definiciones generacionales solo hacen una distinción para Bayas y el OW_PC_MOVE_ORDER
#define GEN_6_XY GEN_6
#define GEN_6_ORAS GEN_LATEST + 1

// Configuración del PC
#define OW_PC_PRESS_B               GEN_LATEST // En Gen4, presionar B mientras sostienes un Pokémon es equivalente a colocarlo. En Gen3, da el error "¡Estás sosteniendo un Pokémon!"
#define OW_PC_JAPAN_WALDA_ICONS     TRUE       // En la versión de EE.UU. de Emerald, los íconos de Cruz, Rayo y Plusle para los fondos de Walda quedaron en blanco de la versión japonesa. Configurar esto en TRUE los restaurará.
#define OW_PC_HEAL                  GEN_LATEST // En Gen8+, los Pokémon no se curan cuando se depositan en el PC.
#define OW_PC_MOVE_ORDER            GEN_LATEST // A partir de Gen4, el orden de opciones en el menú del PC cambia.
#define OW_PC_RELEASE_ITEM          GEN_LATEST // En Gen8+, los Pokémon que se liberan con un objeto en mano lo devuelven a la bolsa.

#define OW_BERRY_MUTATIONS             FALSE      // Si está habilitado, las plantas de bayas pueden mutar basándose en las bayas plantadas a su lado.
#define OW_BERRY_MUTATION_CHANCE       25         // Determina el % de probabilidad de una mutación.
#define OW_BERRY_MOISTURE              FALSE      // Si está habilitado, el riego de las bayas no se trata de regarlas una vez por etapa, sino de mantener el suelo húmedo.
#define OW_BERRY_ALWAYS_WATERABLE      FALSE      // Si OW_BERRY_MOISTURE está habilitado, esta configuración permite al jugador regar continuamente el suelo; el suelo seco causará una disminución en el Rendimiento de la Baya (como en Gen4). Cuando está desactivado, el suelo solo se puede regar cuando esté seco y el riego aumenta el rendimiento (como en Gen6).
#define OW_BERRY_MULCH_USAGE           FALSE      // Si está habilitado, el Abono puede usarse en el suelo para fertilizarlo. De lo contrario, se considera inutilizable. ¡Nota que los efectos de humedad solo funcionan con OW_BERRY_MOISTURE habilitado!
#define OW_BERRY_WEEDS                 FALSE      // Si está habilitado, pueden crecer malezas en las plantas de bayas que el jugador debe cuidar. Sin OW_BERRY_MOISTURE, los bonos de desmalezado se redondean hacia abajo.
#define OW_BERRY_PESTS                 FALSE      // Si está habilitado, pueden aparecer plagas en las plantas de bayas que el jugador debe cuidar. Sin OW_BERRY_MOISTURE, los bonos de plagas se redondean hacia abajo.
#define OW_BERRY_SIX_STAGES            FALSE      // En XY, las bayas pasan por seis etapas en lugar de cuatro. Este interruptor no afecta el tiempo que tarda un árbol en estar listo para la cosecha. Sin OW_BERRY_MOISTURE, las dos etapas adicionales se cuentan como BERRY_STAGE_TALLER para fines de riego.

#define OW_BERRY_GROWTH_RATE           GEN_3      // Preajustes para cuánto tiempo tarda cada planta de baya en crecer.
#define OW_BERRY_YIELD_RATE            GEN_3      // Preajustes para cuántas bayas puede producir cada planta.
#define OW_BERRY_DRAIN_RATE            GEN_6_ORAS // Si OW_BERRY_MOISTURE está habilitado, esta configuración cambia la rapidez con la que se seca el suelo. GEN_4 usa una tasa de drenaje dependiente de la baya, GEN_6_XY se seca en 24 horas (4 horas con el Abono relevante) y GEN_6_ORAS se seca en 4 horas. Otros valores son ilegales.

// Pokémon en el mundo exterior
#define OW_POKEMON_OBJECT_EVENTS       TRUE       // Agrega campos de Evento de Objeto para cada especie. Puede ser utilizado para NPCs usando el macro OBJ_EVENT_GFX_SPECIES (por ejemplo, OBJ_EVENT_GFX_SPECIES(BULBASAUR))
#define OW_SUBSTITUTE_PLACEHOLDER      TRUE       // Usa un sustituto OW para Pokémon que faltan sprites en el mundo exterior
#define OW_LARGE_OW_SUPPORT            TRUE       // Si es verdadero, agrega una pequeña cantidad de sobrecarga al código OW para que los OW grandes (48x48, 64x64) se muestren correctamente debajo de puentes, etc.
#define OW_PKMN_OBJECTS_SHARE_PALETTES FALSE      // [¡WIP! NO TODAS LAS PALETAS SE HAN AJUSTADO PARA ESTO!] Si es TRUE, las paletas de seguidores se toman de los sprites de batalla.
#define OW_GFX_COMPRESS                TRUE       // Agrega soporte para gráficos OW comprimidos, (También comprime gráficos de seguidores de Pokémon).
                                                  // Los gráficos comprimidos son incompatibles con tamaños de sprites que no son potencias de dos:
                                                  // (No debes usar sprites/tablas de 48x48 para gráficos comprimidos)
                                                  // 16x32, 32x32, 64x64, etc., están bien
#define OW_MON_WANDER_WALK             TRUE       // Si TRUE, los OW de Pokémon con MOVEMENT_TYPE_WANDER andarán en el sitio entre pasos.

// Pokémon seguidores
#define OW_FOLLOWERS_ENABLED           FALSE      // Habilita Pokémon seguidores, al estilo de HGSS. Requiere OW_POKEMON_OBJECT_EVENTS. ¡Nota que puede ser necesaria una programación adicional para que se soporten completamente!
#define OW_FOLLOWERS_BOBBING           TRUE       // Si es verdadero, los Pokémon seguidores se moverán hacia arriba y hacia abajo durante sus animaciones de inactividad y caminata.
#define OW_FOLLOWERS_POKEBALLS         TRUE       // Los seguidores emergerán de la Pokébola en la que están almacenados, en lugar de una Pokébola normal

// Efectos de Habilidad fuera de batalla
#define OW_SYNCHRONIZE_NATURE       GEN_LATEST // En Gen8+, si un Pokémon con Sincronía lidera el equipo, los Pokémon salvajes siempre tendrán la misma Naturaleza en lugar del 50% de probabilidad en juegos anteriores. Pokémon regalo excluidos.
                                               // En USUM (aquí GEN_7), si un Pokémon con Sincronía lidera el equipo, los Pokémon regalo siempre tendrán la misma Naturaleza independientemente de su Grupo de Huevos.
                                               // En ORAS (aquí GEN_6), si un Pokémon con Sincronía lidera el equipo, los Pokémon regalo del Grupo de Huevos Sin Huevos Descubiertos siempre tendrán la misma Naturaleza.
#define OW_SUPER_LUCK               GEN_LATEST // En Gen8+, si un Pokémon con Super Suerte está liderando el equipo, la tasa de objetos sostenidos salvajes se incrementa al 60%/20%.
#define OW_INFILTRATOR              GEN_LATEST // En Gen8+, si un Pokémon con Infiltrador está liderando el equipo, la tasa de encuentros salvajes se reduce a la mitad.
#define OW_HARVEST                  GEN_LATEST // En Gen8+, si un Pokémon con Cosecha está liderando el equipo, hay un 50% de probabilidad de encontrar un Pokémon de tipo Planta.
#define OW_LIGHTNING_ROD            GEN_LATEST // En Gen8+, si un Pokémon con Pararrayos está liderando el equipo, hay un 50% de probabilidad de encontrar un Pokémon de tipo Eléctrico.
#define OW_STORM_DRAIN              GEN_LATEST // En Gen8+, si un Pokémon con Absorbe Agua está liderando el equipo, hay un 50% de probabilidad de encontrar un Pokémon de tipo Agua.
#define OW_FLASH_FIRE               GEN_LATEST // En Gen8+, si un Pokémon con Absorbe Fuego está liderando el equipo, hay un 50% de probabilidad de encontrar un Pokémon de tipo Fuego.

// Estas definiciones generacionales solo hacen una distinción para OW_ALTERED_TIME_RATIO
#define GEN_8_PLA                       GEN_LATEST + 2

// Tiempo
#define OW_TIMES_OF_DAY                 GEN_LATEST // Diferentes generaciones cambian los tiempos del día en diferentes momentos.
#define OW_USE_FAKE_RTC                 FALSE      // Cuando es TRUE, los segundos en el reloj del juego solo avanzarán una vez cada 60 playTimeVBlanks (cada 60 fotogramas).
#define OW_ALTERED_TIME_RATIO           GEN_LATEST // En GEN_8_PLA, el tiempo en el juego avanza 60 segundos por cada segundo en el RTC. En GEN_9, son 20 segundos. Esto no tiene efecto si OW_USE_FAKE_RTC es FALSE.

// Banderas del mundo exterior
// Para usar las siguientes características en la programación, reemplaza los 0s con el ID de la bandera que le estás asignando.
// Ejemplo: Reemplaza con FLAG_UNUSED_0x264 para que puedas usar esa bandera para activar la característica.
#define OW_FLAG_PAUSE_TIME          0  // Si esta bandera está activada y OW_USE_FAKE_RTC está habilitado, los segundos en el reloj del juego no avanzarán.
#define OW_FLAG_NO_ENCOUNTER        0  // Si esta bandera está activada, los encuentros salvajes estarán deshabilitados.
#define OW_FLAG_NO_TRAINER_SEE      0  // Si esta bandera está activada, los entrenadores no pelearán con el jugador a menos que se les hable.
#define OW_FLAG_NO_COLLISION        0  // Si esta bandera está activada, el jugador podrá caminar sobre losetas con colisión. Principalmente destinado para fines de depuración.

#define BATTLE_PYRAMID_RANDOM_ENCOUNTERS    FALSE    // Si se establece en TRUE, los Pokémon de la pirámide de batalla se generarán aleatoriamente en función del desafío de la ronda en lugar de estar codificados en src/data/battle_frontier/battle_pyramid_level_50_wild_mons.h (o open_level_wild_mons.h)

// Configuración de ventanas emergentes del mapa
#define OW_POPUP_GENERATION        GEN_3    // Diferentes generaciones muestran los nombres de ubicación en las ventanas emergentes del mundo exterior de manera diferente.
                                            // Solo las opciones actuales son GEN_3 y GEN_5, todas las demás se ajustarán a las ventanas emergentes de Gen3.

// Configuración de ventanas emergentes del mapa Gen5
// Constantes
#define OW_POPUP_BW_TIME_NONE      0   // No mostrar la hora
#define OW_POPUP_BW_TIME_12_HR     1   // Usar hora de 12 horas (AM/PM)
#define OW_POPUP_BW_TIME_24_HR     2   // Usar hora de 24 horas

#define OW_POPUP_BW_COLOR_BLACK    0   // Ventana emergente negra de B2
#define OW_POPUP_BW_COLOR_WHITE    1   // Ventana emergente blanca de W2

// Configuración
#define OW_POPUP_BW_COLOR          OW_POPUP_BW_COLOR_BLACK  // B2W2 usan diferentes colores para sus ventanas emergentes del mapa.
#define OW_POPUP_BW_TIME_MODE      OW_POPUP_BW_TIME_NONE    // Determina qué tipo de hora se muestra.
#define OW_POPUP_BW_ALPHA_BLEND    FALSE                    // Habilita el mezclado alfa/transparencia para las ventanas emergentes. Principalmente destinado a usarse con la opción de color negro.

// Centro Pokémon
#define OW_IGNORE_EGGS_ON_HEAL     GEN_LATEST               // En Gen 4+, la enfermera en el Centro Pokémon no cura los Huevos en la máquina de curación.

#endif // GUARD_CONFIG_OVERWORLD_H
