#ifndef GUARD_CONFIG_BATTLE_H
#define GUARD_CONFIG_BATTLE_H

// Configuración de cálculos
#define B_CRIT_CHANCE               GEN_LATEST // Probabilidades de que un golpe crítico acierte. Consulta CalcCritChanceStage. En Gen6+, las probabilidades garantizan que Farfetch'd y Sirfetch'd siempre obtengan golpes críticos mientras sostengan un Puerro y usen movimientos de alta relación crítica.
#define B_CRIT_MULTIPLIER           GEN_LATEST // En Gen6+, los golpes críticos multiplican el daño por 1.5 en lugar de 2.
#define B_PARALYSIS_SPEED           GEN_LATEST // En Gen7+, la Velocidad se reduce en un 50% en lugar de un 75%.
#define B_CONFUSION_SELF_DMG_CHANCE GEN_LATEST // En Gen7+, la confusión tiene un 33.3% de causar daño a uno mismo, en lugar de un 50%.
#define B_MULTI_HIT_CHANCE          GEN_LATEST // En Gen5+, los movimientos de múltiples golpes tienen porcentajes diferentes. Consulta Cmd_setmultihitcounter para los valores.
#define B_WHITEOUT_MONEY            GEN_LATEST // En Gen4+, la cantidad de dinero perdido al perder una batalla se determina por la cantidad de medallas ganadas. Anteriormente, se reducían los fondos actuales a la mitad. (Aunque este cambio también estuvo en FRLG, por simplicidad, establecer esto en GEN_3 resultará en el comportamiento de RSE.)
#define B_LIGHT_BALL_ATTACK_BOOST   GEN_LATEST // En Gen4+, la Bola Luz duplica el poder de los movimientos físicos además de los especiales.

// Configuración de experiencia
#define B_EXP_CATCH                 GEN_LATEST // En Gen6+, los Pokémon obtienen experiencia al capturar.
#define B_TRAINER_EXP_MULTIPLIER    GEN_LATEST // En Gen7+, las batallas contra entrenadores ya no dan un multiplicador de 1.5 para la ganancia de EXP.
#define B_SPLIT_EXP                 GEN_LATEST // En Gen6+, todos los Pokémon participantes obtienen experiencia completa.
#define B_SCALED_EXP                GEN_LATEST // En Gen5 y Gen7+, la experiencia se pondera según la diferencia de nivel.
#define B_UNEVOLVED_EXP_MULTIPLIER  GEN_LATEST // En Gen6+, si el Pokémon está en el nivel o más allá del nivel en el que podría evolucionar, pero no lo ha hecho, obtiene un multiplicador de ~1.2 para la ganancia de EXP. Solo se aplica a los Pokémon con el método EVO_LEVEL.
#define B_LEVEL_UP_NOTIFICATION     GEN_LATEST // En Gen9+, si el Pokémon obtiene suficiente experiencia para subir de nivel varias veces, el mensaje solo se muestra una vez.

// Configuración de estadísticas
#define B_BADGE_BOOST               GEN_LATEST // En Gen4+, las Medallas de Gimnasio ya no aumentan las estadísticas de un Pokémon.
#define B_FRIENDSHIP_BOOST          FALSE      // Solo en LGPE, todas las estadísticas excepto HP se incrementan hasta un 10% basado en la Amistad. A diferencia de B_BADGE_BOOST, estos aumentos se tienen en cuenta al calcular las estadísticas base.
#define B_MAX_LEVEL_EV_GAINS        GEN_LATEST // En Gen5+, los Pokémon de nivel 100 pueden obtener Valores de Esfuerzo normalmente.
#define B_RECALCULATE_STATS         GEN_LATEST // En Gen5+, las estadísticas de los Pokémon que participan en la batalla se recalculan al final de cada batalla.

// Configuración de daño
#define B_BURN_DAMAGE               GEN_LATEST // En Gen7+, el daño por quemadura es 1/16 de HP máximo en lugar de 1/8. También se aplica a Frostbite.
#define B_BURN_FACADE_DMG           GEN_LATEST // En Gen6+, el efecto de la quemadura de reducir el stat de Ataque ya no se aplica a Facade.
#define B_BINDING_DAMAGE            GEN_LATEST // En Gen6+, el daño por movimientos de atadura es 1/8 de HP máximo en lugar de 1/16. (Con Banda de Ataduras, 1/6 y 1/8 respectivamente.)
#define B_PSYWAVE_DMG               GEN_LATEST // Fórmula de daño de Psywave. Consulta Cmd_psywavedamageeffect.
#define B_PAYBACK_SWITCH_BOOST      GEN_LATEST // En Gen5+, si el oponente cambia, el daño de Payback ya no se dobla.
#define B_HIDDEN_POWER_DMG          GEN_LATEST // En Gen6+, el poder base de Hidden Power se establece siempre en 60. Antes, se determinaba por los IVs del Pokémon.
#define B_ROUGH_SKIN_DMG            GEN_LATEST // En Gen4+, el daño de contacto de Rough Skin es 1/8 de HP máximo en lugar de 1/16. Esto también afectará a Iron Barbs.
#define B_KNOCK_OFF_DMG             GEN_LATEST // En Gen6+, Knock Off hace un 50% más de daño al quitar un objeto.
#define B_SPORT_DMG_REDUCTION       GEN_LATEST // En Gen5+, Water/Mud Sport reduce el daño de Fuego/Eléctrico en un 67% en lugar de un 50%.
#define B_EXPLOSION_DEFENSE         GEN_LATEST // En Gen5+, Self-Destruct y Explosion no reducen a la mitad la defensa de los objetivos.
#define B_PARENTAL_BOND_DMG         GEN_LATEST // En Gen7+, el segundo golpe de Parental Bond hace el 25% del daño del primer golpe. Antes, hacía el 50%.
#define B_MULTIPLE_TARGETS_DMG      GEN_LATEST // En Gen4+, el daño causado por movimientos que golpean múltiples objetivos a la vez se reduce al 75%. Antes, era 50%.

// Configuración de tipos
#define B_GHOSTS_ESCAPE             GEN_LATEST // En Gen6+, habilidades como Shadow Tag o movimientos como Mean Look fallan contra Pokémon de tipo Fantasma. También pueden escapar de cualquier Batalla Silvestre.
#define B_PARALYZE_ELECTRIC         GEN_LATEST // En Gen6+, los Pokémon de tipo Eléctrico no pueden ser paralizados.
#define B_POWDER_GRASS              GEN_LATEST // En Gen6+, los Pokémon de tipo Planta son inmunes a los movimientos de polvo y esporas.
#define B_UPDATED_TYPE_MATCHUPS     GEN_LATEST // Actualiza las interacciones de tipos. Consulta src/data/types_info.h para detalles.
#define B_PRANKSTER_DARK_TYPES      GEN_LATEST // En Gen7+, los movimientos de estado elevados por Prankster no afectan a Pokémon de tipo Sombra.
#define B_SHEER_COLD_IMMUNITY       GEN_LATEST // En Gen7+, los Pokémon de tipo Hielo son inmunes a Sheer Cold.
#define B_ROOST_PURE_FLYING         GEN_LATEST // En Gen5+, Roost convierte a los tipos de tipo Volador puros en tipo Normal.
#define B_STATUS_TYPE_IMMUNITY      GEN_LATEST // En Gen1, los Pokémon eran inmunes a los efectos secundarios de parálisis/congelación/quema de movimientos de ataque, si compartían un tipo con el movimiento.

// Configuración de turnos
#define B_BINDING_TURNS             GEN_LATEST // En Gen5+, los movimientos de atadura duran 4-5 turnos en lugar de 2-5 turnos. (Con Grip Claw, 7 y 5 turnos respectivamente.)
#define B_UPROAR_TURNS              GEN_LATEST // En Gen5+, Uproar dura 3 turnos en lugar de 2-5 turnos.
#define B_UPROAR_IGNORE_SOUNDPROOF  GEN_LATEST // En Gen5+, el estado de Uproar ignora Soundproof.
#define B_DISABLE_TURNS             GEN_LATEST // Turnos de Disable. Consulta Cmd_disablelastusedattack.
#define B_TAILWIND_TURNS            GEN_LATEST // En Gen5+, Tailwind dura 4 turnos en lugar de 3.
#define B_SLEEP_TURNS               GEN_LATEST // En Gen5+, el sueño dura 1-3 turnos en lugar de 2-5 turnos.
#define B_TAUNT_TURNS               GEN_LATEST // En Gen5+, Taunt dura 3 turnos si el usuario actúa antes que el objetivo, o 4 turnos si el objetivo actúa antes que el usuario. En Gen3, Taunt dura 2 turnos y en Gen4, 3-5 turnos.
#define B_SPORT_TURNS               GEN_LATEST // En Gen6+, Water/Mud Sport dura 5 turnos, incluso si el usuario cambia de Pokémon.
#define B_MEGA_EVO_TURN_ORDER       GEN_LATEST // En Gen7, la Velocidad de un Pokémon después de la Mega Evolución se usa para determinar el orden de los turnos, no su Velocidad antes.
#define B_RECALC_TURN_AFTER_ACTIONS GEN_LATEST // En Gen8, cambiar/usar un movimiento afecta el orden de acciones del turno actual, conocido como velocidad dinámica.
#define B_FAINT_SWITCH_IN           GEN_LATEST // En Gen4+, enviar un nuevo Pokémon después de que el anterior se desmaye sucede al final del turno. Antes, ocurría después de cada acción.

<<<<<<< HEAD
// Configuración de datos de movimientos
#define B_UPDATED_MOVE_DATA         GEN_LATEST // Actualiza los datos de los movimientos en gMovesInfo, incluyendo Poder, Precisión, PP, cambios de estadísticas, objetivos y probabilidades de efectos secundarios.
#define B_UPDATED_MOVE_TYPES        GEN_LATEST // Actualiza los tipos de movimientos.
#define B_UPDATED_MOVE_FLAGS        GEN_LATEST // Actualiza las flags de los movimientos.
#define B_PHYSICAL_SPECIAL_SPLIT    GEN_LATEST // En Gen3, el tipo del movimiento determina si será físico o especial. El ícono de división en el resumen reflejará esto.
#define B_RECOIL_IF_MISS_DMG        GEN_LATEST // En Gen5+, Patada salto y Patada salto alta siempre harán la mitad del HP máximo del usuario al fallar.
#define B_KLUTZ_FLING_INTERACTION   GEN_LATEST // En Gen5+, los Pokémon con la habilidad Klutz no pueden usar Fling.
#define B_UPDATED_CONVERSION        GEN_LATEST // En Gen6+, Conversion cambia el tipo del usuario para coincidir con el primer movimiento del usuario. Antes, elegía un movimiento al azar.
#define B_UPDATED_CONVERSION_2      GEN_LATEST // En Gen5+, Conversión 2 cambia el tipo del usuario a un tipo que resista el último ataque del objetivo. Antes, lo hacía al último ataque recibido. Además, Forcejeo se consideraba tipo Normal antes de 5ª gen.
#define B_PP_REDUCED_BY_SPITE       GEN_LATEST // En Gen4+, Spite reduce el PP del último movimiento del oponente en 4, en lugar de 2 a 5.
#define B_EXTRAPOLATED_MOVE_FLAGS   TRUE       // Agrega flags de movimiento a movimientos que no tienen oficialmente pero que probablemente tendrían si estuvieran en el juego de la serie principal más reciente.
=======
// Move data settings
#define B_UPDATED_MOVE_DATA         GEN_LATEST // Updates move data in gMovesInfo, including Power, Accuracy, PP, stat changes, targets and chances of secondary effects.
#define B_UPDATED_MOVE_TYPES        GEN_LATEST // Updates move types.
#define B_UPDATED_MOVE_FLAGS        GEN_LATEST // Updates move flags.
#define B_PHYSICAL_SPECIAL_SPLIT    GEN_LATEST // In Gens1-3, the move's type determines if it will do physical or special damage. The split icon in the summary will reflect this.
#define B_RECOIL_IF_MISS_DMG        GEN_LATEST // In Gen5+, Jump Kick and High Jump Kick will always do half of the user's max HP when missing.
#define B_KLUTZ_FLING_INTERACTION   GEN_LATEST // In Gen5+, Pokémon with the Klutz ability can't use Fling.
#define B_UPDATED_CONVERSION        GEN_LATEST // In Gen6+, Conversion changes the user's type to match their first move's. Before, it would choose a move at random.
#define B_UPDATED_CONVERSION_2      GEN_LATEST // In Gen5+, Conversion 2 changes the user's type to a type that resists the last move used by the selected target. Before, it would consider the last move being successfully hit by. Additionally, Struggle is considered Normal type before Gen 5.
#define B_PP_REDUCED_BY_SPITE       GEN_LATEST // In Gen4+, Spite reduces the foe's last move's PP by 4, instead of 2 to 5.
#define B_EXTRAPOLATED_MOVE_FLAGS   TRUE       // Adds move flags to moves that they don't officially have but would likely have if they were in the latest core series game.
#define B_HIDDEN_POWER_COUNTER      GEN_LATEST // Prior to Gen4, Counter and Mirror Coat treat Hidden Power as Physical regardless of type.
#define B_MODERN_TRICK_CHOICE_LOCK  GEN_LATEST // In Gen5+, if a Choice Item is swapped for a Choice Item, the Trick/Switcheroo user can pick another move, and then they'll be locked into it.
#define B_PROTECT_FAILURE_RATE      GEN_LATEST // In Gen5+, protect moves fails 1/3 of the time instead of 1/2
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b

// Configuración de datos de habilidades
#define B_UPDATED_ABILITY_DATA      GEN_LATEST // Afecta las flags.

// Configuración de precisión de movimientos
#define B_TOXIC_NEVER_MISS          GEN_LATEST // En Gen6+, si Tóxico es usado por un Pokémon de tipo Veneno, nunca fallará.
#define B_MINIMIZE_DMG_ACC          GEN_LATEST // En Gen6+, los movimientos que causan daño doble a Pokémon minimizados también omitirán las comprobaciones de precisión.
#define B_BLIZZARD_HAIL             GEN_LATEST // En Gen4+, Ventisca pasa por alto las comprobaciones de precisión si está granizando.
#define B_SHEER_COLD_ACC            GEN_LATEST // En Gen7+, la probabilidad base de que Frío polar acierte se reduce al 20% si el usuario no es de tipo Hielo.

// Configuración de cambios de estadísticas de movimientos
#define B_FELL_STINGER_STAT_RAISE   GEN_LATEST // En Gen7+, eleva el Atk en 3 etapas en lugar de 2 si causa que el objetivo se desmaye.
#define B_KINGS_SHIELD_LOWER_ATK    GEN_LATEST // En Gen8+, reduce el Atk en 1 etapa en lugar de 2 a los oponentes que lo golpean.
#define B_SPEED_BUFFING_RAPID_SPIN  GEN_LATEST // En Gen8, Giro rápido aumenta la Velocidad del usuario en 1 etapa.
#define B_CHARGE_SPDEF_RAISE        GEN_LATEST // En Gen5+, Charge aumenta la Defensa Especial del usuario en 1 etapa.
#define B_MINIMIZE_EVASION          GEN_LATEST // En Gen5+, Reducción aumenta la evasión en 2 etapas en lugar de 1.
#define B_GROWTH_STAT_RAISE         GEN_LATEST // En Gen5+, Desarrollo aumenta el Ataque además de la Ataque Especial en 1 etapa cada uno. Bajo los efectos del sol, los aumenta en 2 etapas cada uno en su lugar.
#define B_FOCUS_ENERGY_CRIT_RATIO   GEN_LATEST // En Gen3+, Foco energía aumenta el ratio de golpes críticos en 2 en vez de en 1.
#define B_PSYCH_UP_CRIT_RATIO       GEN_LATEST // In Gen6+, Psych Up also copies the target's critical hit ratio.

// Otras configuraciones de movimientos
#define B_INCINERATE_GEMS           GEN_LATEST // En Gen6+, Incinerate puede destruir Gemas.
#define B_CAN_SPITE_FAIL            GEN_LATEST // En Gen4+, Spite ya no puede fallar si el último movimiento del oponente solo tiene 1 PP restante.
#define B_CRASH_IF_TARGET_IMMUNE    GEN_LATEST // En Gen4+, el usuario de Patada salto y Patada salto alta "seguirá adelante y chocará" si ataca a un objetivo que es inmune al movimiento.
#define B_MEMENTO_FAIL              GEN_LATEST // En Gen4+, Memento falla si no hay objetivo o si el objetivo está protegido o detrás de un sustituto. Pero no si el Atk/Sp. Atk están en -6.
#define B_PARTING_SHOT_SWITCH       GEN_LATEST // En Gen7+, el usuario no se retirar� si Desarme (Parting Shot) falla al bajar las estad�sticas del objetivo.
#define B_BATON_PASS_TRAPPING       GEN_LATEST // In Gen5+, Baton Pass does not keep trapping effects on other battlers when the user switches out.
<<<<<<< HEAD
#define B_GLARE_GHOST               GEN_LATEST // En Gen4+, Deslumbrar puede golpear a Pokémon de tipo Fantasma normalmente.
#define B_SKILL_SWAP                GEN_LATEST // En Gen4+, Skill Swap activa las habilidades de entrada después de su uso.
#define B_BRICK_BREAK               GEN_LATEST // En Gen4+, puedes destruir las pantallas de tu propio lado. En Gen 5+, las pantallas no se eliminan si el objetivo es inmune.
#define B_WISH_HP_SOURCE            GEN_LATEST // En Gen5+, Deseo cura la mitad del HP máximo del usuario en lugar del objetivo.
#define B_RAMPAGE_CANCELLING        GEN_LATEST // En Gen5+, un Thrash fallido, etc., se cancela excepto en su último turno.
#define B_HEAL_BLOCKING             GEN_LATEST // En Gen5+, Heal Block previene la curación por Black Sludge, Leftovers, Shell Bell. Los Pokémon afectados no consumirán Bayas que restauran HP o Berry Juice.
                                               // Las habilidades drenantes no curarán pero prevendrán daño. En Gen6+, Heal Block previene el uso de la mayoría de los movimientos que drenan HP.
#define B_ROOTED_GROUNDING          GEN_LATEST // En Gen4+, Ingrain hace que el Pokémon afectado se vuelva terreno.
#define B_METRONOME_MOVES           GEN_LATEST // Esta configuración determinará hasta qué generación Metronome seleccionará movimientos.
#define B_TELEPORT_BEHAVIOR         GEN_LATEST // A partir de LGPE (Gen8+ aquí), Teleport permite al usuario intercambiarse con otro miembro del equipo.
#define B_BEAT_UP                   GEN_LATEST // En Gen5+, Beat Up usa una fórmula diferente para calcular su daño y causa daño de tipo Sombra. Antes de Gen 5, cada golpe también anunciaba el nombre del miembro del equipo.
#define B_DARK_VOID_FAIL            GEN_LATEST // En Gen7+, solo Darkrai puede usar Brecha negra.
#define B_BURN_HIT_THAW             GEN_LATEST // En Gen6+, los movimientos dañinos con una posibilidad de quemadura descongelarán al objetivo, independientemente de si son movimientos de tipo Fuego o no.
#define B_HEALING_WISH_SWITCH       GEN_LATEST // En Gen5+, el Pokémon que recibe Healing Wish entra al final del turno.
                                               // Además, en gen8+ el efecto de Healing Wish se almacenará hasta que el usuario cambie a un Pokémon afectado por estado o herido.
#define B_DEFOG_EFFECT_CLEARING     GEN_LATEST // En Gen6+, Despejar quita las trapas de los campos de ambos rivales. En Gen8+, Defog también quita los Campos activos.
#define B_STOCKPILE_RAISES_DEFS     GEN_LATEST // En Gen4+, Reserva también aumenta las estadísticas de Defensa y Defensa Especial. Una vez que se usa Escupir / Tragar, estos cambios de estadísticas se pierden.
#define B_TRANSFORM_SHINY           GEN_LATEST // En Gen4+, Transformación copiará el estado shiny del oponente en lugar de mantener su propio estado shiny.
#define B_TRANSFORM_FORM_CHANGES    GEN_LATEST // En Gen5+, los Pokémon transformados no pueden cambiar de forma.
#define B_WIDE_GUARD                GEN_LATEST // Solo en Gen5, Vastaguardia tiene una posibilidad de fallar si se usa consecutivamente.
#define B_QUICK_GUARD               GEN_LATEST // Solo en Gen5, Quick Guard tiene una posibilidad de fallar si se usa consecutivamente.
=======
#define B_GLARE_GHOST               GEN_LATEST // In Gen4+, Glare can hit Ghost-type Pokémon normally.
#define B_SKILL_SWAP                GEN_LATEST // In Gen4+, Skill Swap triggers switch-in abilities after use.
#define B_BRICK_BREAK               GEN_LATEST // In Gen4+, you can destroy your own side's screens. In Gen 5+, screens are not removed if the target is immune.
#define B_WISH_HP_SOURCE            GEN_LATEST // In Gen5+, Wish heals half of the user's max HP instead of the target's.
#define B_RAMPAGE_CANCELLING        GEN_LATEST // In Gen5+, a failed Thrash, etc, will cancel except on its last turn.
#define B_HEAL_BLOCKING             GEN_LATEST // In Gen5+, Heal Block prevents healing by Black Sludge, Leftovers, Shell Bell. Affected Pokémon will not consume held HP-restoring Berries or Berry Juice.
                                               // Draining abilities will not heal but will prevent damage. In Gen6+, Heal Block prevents the use of most HP-draining moves.
#define B_ROOTED_GROUNDING          GEN_LATEST // In Gen4+, Ingrain causes the affected Pokémon to become grounded.
#define B_METRONOME_MOVES           GEN_LATEST // This config will determine up to which generation will Metronome pull moves from.
#define B_TELEPORT_BEHAVIOR         GEN_LATEST // In LGPE onwards (Gen8+ here), Teleport allows the user to swap out with another party member.
#define B_BEAT_UP                   GEN_LATEST // In Gen5+, Beat Up uses a different formula to calculate its damage, and deals Dark-type damage. Prior to Gen 5, each hit also announces the party member's name.
#define B_DARK_VOID_FAIL            GEN_LATEST // In Gen7+, only Darkrai can use Dark Void.
#define B_HIT_THAW                  GEN_LATEST // In Gen6+, damaging moves that thaw the user will thaw the target. In Gen 3+, Fire-type moves thaw the target. In Gen 1-2, damaging moves that can burn will thaw the target, regardless if they can be burned or not.
#define B_HEALING_WISH_SWITCH       GEN_LATEST // In Gen5+, the mon receiving Healing Wish is sent out at the end of the turn.
                                               // Additionally, in gen8+ the Healing Wish's effect will be stored until the user switches into a statused or hurt mon.
#define B_DEFOG_EFFECT_CLEARING     GEN_LATEST // In Gen5+, Defog does not lower Evasion of target behind Subsitute. In Gen6+, Defog clears Spikes, Toxic Spikes, Stealth Rock and Sticky Web from both sides. In Gen8+, Defog also clears active Terrain.
#define B_STOCKPILE_RAISES_DEFS     GEN_LATEST // In Gen4+, Stockpile also raises Defense and Sp. Defense stats. Once Spit Up / Swallow is used, these stat changes are lost.
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b
#define B_TRANSFORM_SEMI_INV_FAIL   GEN_LATEST // In Gen2+, Transform fails if the target is semi-invulnerable.
#define B_TRANSFORM_TARGET_FAIL     GEN_LATEST // In Gen2+, Transform fails if the target is already transformed.
#define B_TRANSFORM_USER_FAIL       GEN_LATEST // In Gen5+, Transform fails if the user is already transformed.
#define B_TRANSFORM_SUBSTITUTE_FAIL GEN_LATEST // In Gen5+, Transform fails if the target is behind a Substitute.
#define B_IMPRISON                  GEN_LATEST // En Gen5+, Imprison no falla si los Pokémon opuestos no tienen ningún movimiento que el usuario conozca.
#define B_ALLY_SWITCH_FAIL_CHANCE   GEN_LATEST // En Gen9, usar Ally Switch consecutivamente disminuye la probabilidad de éxito de cada uso consecutivo.
#define B_SKETCH_BANS               GEN_LATEST // En Gen9+, Esquema no puede copiar más movimientos que en generaciones anteriores.
#define B_KNOCK_OFF_REMOVAL         GEN_LATEST // En Gen5+, Desarme elimina el objeto del oponente en lugar de hacerlo inutilizable.
#define B_HEAL_BELL_SOUNDPROOF      GEN_LATEST // En Gen5, Heal Bell afecta a todos los Pokémon con Soundproof. En Gen6-8 afecta a Pokémon inactivos, pero no a los que están en batalla. En Gen9 siempre afecta al usuario.
#define B_TAUNT_ME_FIRST            GEN_LATEST // In Gen5+, Taunt does not block Me First.
<<<<<<< HEAD
#define B_CHARGE                    GEN_LATEST // En Gen8-, estado Cargado se pierde sea cuál sea el tipo del siguiente movimiento.
#define B_POWDER_RAIN               GEN_LATEST // En Gen7+, Polvo explosivo no daña al atacante si está lloviendo.
#define B_AFTER_YOU_TURN_ORDER      GEN_LATEST // En Gen8+, Cede paso no falla si el orden del turno no cambiaría después de usarse.
#define B_QUASH_TURN_ORDER          GEN_LATEST // En Gen8+, los ataques se ven afectados por Último lugar según su velocidad. Antes de la 8 gen, los que eran afectados por este ataque se movían en el orden en que recibían el movimiento.
#define B_DESTINY_BOND_FAIL         GEN_LATEST // En Gen7+, Mismodestino falla si lo usas repetidamente.
=======
#define B_ALLY_SWITCH_FAIL_CHANCE   GEN_LATEST // In Gen9+, using Ally Switch consecutively decreases the chance of success for each consecutive use.
#define B_SKETCH_BANS               GEN_LATEST // In Gen9+, Sketch is unable to copy more moves than in previous generations.
#define B_KNOCK_OFF_REMOVAL         GEN_LATEST // In Gen5+, Knock Off removes the foe's item instead of rendering it unusable.
#define B_HEAL_BELL_SOUNDPROOF      GEN_LATEST // In Gen5, Heal Bell affects all mons with Soundproof.  In Gen6-8 it affects inactive mons, but not battlers. In Gen9 it always affects the user.
#define B_CHARGE                    GEN_LATEST // In Gen9+, Charge status is lost regardless of the typing of the next move.
#define B_POWDER_STATUS_HEAVY_RAIN  GEN_LATEST // In Gen7+, Powder doesn't damage the user of a Fire type move in heavy rain.
#define B_AFTER_YOU_TURN_ORDER      GEN_LATEST // In Gen8+, After You doesn't fail if the turn order wouldn't change after use.
#define B_QUASH_TURN_ORDER          GEN_LATEST // In Gen8+, Quash-affected battlers move according to speed order. Before Gen8, Quash-affected battlers move in the order they were affected by Quash.
#define B_DESTINY_BOND_FAIL         GEN_LATEST // In Gen7+, Destiny Bond fails if used repeatedly.
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b
#define B_FORESIGHT_FAIL            GEN_LATEST // In Gen2 and Gen5+, Foresight fails if used against a target already under its effect.
#define B_MIRACLE_EYE_FAIL          GEN_LATEST // In Gen5+, Miracle Eye fails if used against a target already under its effect.
#define B_PURSUIT_TARGET            GEN_LATEST // En Gen4+, Persecución ataca al Pokémon que está cambiando aunque no fuera el objetivo original. En generaciones anteriores, Persecución solo ataca al Pokémon que cambia si era el objetivo del movimiento.
#define B_SKIP_RECHARGE             GEN_LATEST // En Gen1, movimientos que requieren recarga como Hiperrayo no lo necesitan si el oponente es debilitado.
#define B_ENCORE_TARGET             GEN_LATEST // In Gen5+, encored moves are allowed to choose a target
#define B_TIME_OF_DAY_HEALING_MOVES GEN_LATEST // In Gen2, Morning Sun, Moonlight, and Synthesis heal twice as much HP based off the time of day. Also changes how much they heal. Evening affects Moonlight.
                                               // If OW_TIMES_OF_DAY is set to Gen 3, then Morning Sun is boosted during the day.
#define B_DREAM_EATER_LIQUID_OOZE   GEN_LATEST // In Gen5+, Dream Eater is affected by Liquid Ooze.
#define B_DREAM_EATER_SUBSTITUTE    GEN_LATEST // In Gen5+, Dream Eater can successfully hit and drain from a Substitute.
#define B_SNATCH                    GEN_LATEST // In Gen5+, Snatch no longer steals moves that were already stolen by another Pokémon's Snatch on the same turn.
#define B_FOCUS_PUNCH_FAILURE       GEN_LATEST // To determine if Focus is lost, in Gen4-, check if the current move is Focus Punch.
                                               // In Gens 5-6, check if the selected move is Focus Punch.
                                               // In Gen7+, check if the current move and the selected move are Focus Punch.
                                               // Also in Gen4-, the check for Focus Punch fail will occur after effects like pp consumption and flinching while it happens before in Gen5+
#define B_COUNTER_MIRROR_COAT_ALLY  GEN_LATEST // In Gen5+, an ally's attack does not count for uses of Counter/Mirror Coat/Metal Burst. In Gen4-, if the last attack taken was from an ally, Counter/Mirror Coat/Metal Burst would fail.
#define B_COUNTER_TRY_HIT_PARTNER   GEN_LATEST // In Gen5+, if the user of the last attack is not on the field, it will be redirected to the partner. In Gen4-, Counter/Mirror Coat/Metal Burst would fail.
#define B_RAGE_BUILDS               GEN_LATEST // In Gen4+, Rage's effect only sets in when it successfully hits. In Gen3, Rage's effect sets in regardless of whether it hits, misses or fails.
#define B_CHECK_USER_FAILURE        GEN_LATEST // In Gen5+, The user no longer checks it's own failure, e.g. Soundproof will not block it's own Perish Song
#define B_ABSORB_MESSAGE            GEN_LATEST // In Gen5+, No absorb message is played if user is already at full hp.

<<<<<<< HEAD
// Configuración de habilidades
#define B_GALE_WINGS                GEN_LATEST // En Gen7+ requiere HP completo para activarse.
#define B_STANCE_CHANGE_FAIL        GEN_LATEST // En Gen7+, Stance Change falla si el Pokémon no puede usar un movimiento debido a confusión, parálisis, etc. En Gen6, no lo hacía.
#define B_SHADOW_TAG_ESCAPE         GEN_LATEST // En Gen4+, si ambos lados tienen un Pokémon con Shadow Tag, todos los combatientes pueden escapar. Antes, ningún lado podía escapar de esta situación.
#define B_MOODY_ACC_EVASION         GEN_LATEST // En Gen8, Moody NO PUEDE aumentar la Precisión y Evasión más.
#define B_FLASH_FIRE_FROZEN         GEN_LATEST // En Gen5+, Flash Fire puede activarse incluso cuando está congelado, cuando antes no podía.
#define B_SYNCHRONIZE_TOXIC         GEN_LATEST // En Gen5+, si un Pokémon con Synchronize es gravemente envenenado, el oponente también se volverá gravemente envenenado. Anteriormente, el oponente se volvía envenenado regularmente.
#define B_UPDATED_INTIMIDATE        GEN_LATEST // En Gen8, Intimidate no funciona en oponentes con las habilidades Inner Focus, Scrappy, Own Tempo u Oblivious. También activa Rattled.
#define B_OBLIVIOUS_TAUNT           GEN_LATEST // En Gen6+, los Pokémon con Oblivious no pueden ser burlados.
#define B_STURDY                    GEN_LATEST // En Gen5+, Sturdy hace que el Pokémon tenga 1 HP restante si un ataque de otro Pokémon o el daño por confusión lo habría llevado de salud completa a 0 HP.
#define B_PLUS_MINUS_INTERACTION    GEN_LATEST // En Gen5+, Plus y Minus pueden activarse con ellos mismos y con la habilidad opuesta. Antes, solo la habilidad opuesta podía activarlo.
#define B_WEATHER_FORMS             GEN_LATEST // En Gen5+, Castform y Cherrim vuelven a su forma base al perder su habilidad respectiva. Cherrim necesita Flower Gift para cambiar de forma.
#define B_SYMBIOSIS_GEMS            GEN_LATEST // En Gen7+, Symbiosis pasa un objeto después de un ataque potenciado por gema. Anteriormente, los objetos se pasaban antes de que el ataque potenciado por gema golpeara, haciendo que el efecto del objeto se aplicara.
#define B_ABSORBING_ABILITY_STRING  GEN_LATEST // En Gen5+, las habilidades que absorben movimientos de un tipo específico usan una cadena genérica para aumentos y disminuciones de estadísticas.
#define B_REDIRECT_ABILITY_IMMUNITY GEN_LATEST // En Gen5+, Pokémon con Lightning Rod/Storm Drain se vuelven inmunes a movimientos de tipo Eléctrico/Agua y aumentan su Sp. Atk en 1 etapa además del efecto de redirección.
#define B_REDIRECT_ABILITY_ALLIES   GEN_LATEST // En Gen4+, Pararrayos/Colector tambi�n redirigen los movimientos de los aliados.
#define B_LEAF_GUARD_PREVENTS_REST  GEN_LATEST // En Gen5+, Leaf Guard previene el uso de Rest en luz solar intensa.
#define B_TRANSISTOR_BOOST          GEN_LATEST // En Gen9+, Transistor solo aumentará los movimientos de tipo Eléctrico en 1.3x en lugar de 1.5x.
#define B_ILLUMINATE_EFFECT         GEN_LATEST // En Gen9+, Illuminate previene reducciones de precisión e ignora la evasión del objetivo.
#define B_WEAK_ARMOR_SPEED          GEN_LATEST // En Gen7+, Weak Armor aumenta la Velocidad en 2 etapas en lugar de 1 cuando es golpeado por un movimiento físico.
#define B_PROTEAN_LIBERO            GEN_LATEST // En Gen9+, Protean y Libero cambian el tipo del usuario solo una vez por Batalla.
#define B_INTREPID_SWORD            GEN_LATEST // En Gen9+, Intrepid Sword aumenta el Ataque en una etapa solo una vez por Batalla.
#define B_DAUNTLESS_SHIELD          GEN_LATEST // En Gen9+, Dauntless Shield aumenta la Defensa en una etapa solo una vez por Batalla.
#define B_DISGUISE_HP_LOSS          GEN_LATEST // En Gen8+, cuando el Disguise de Mimikyu se rompe, al cambiar a su Forma Busted pierde HP igual a 1/8 de su HP máximo.
#define B_ABILITY_TRIGGER_CHANCE    GEN_LATEST // En Gen3, Shed Skin, Cute Charm, Flame Body, Static y Poison Point tienen un 1/3 de probabilidad de activarse. En Gen 4+ es 30%.
                                               // En Gen3, Effect Spore tiene un 10% de probabilidad de dormir, envenenar o paralizar, con una probabilidad igual.
                                               // En Gen4, es 30%. En Gen5+ tiene un 11% de probabilidad de dormir, 9% de envenenar y 10% de paralizar.
#define B_PICKUP_WILD               GEN_LATEST // En Gen9+, Recogida permite al usuario utilizar su propio objeto usado en batallas contra Pokémon salvajes.
#define B_MAGIC_GUARD               GEN_LATEST // En Gen4+, Guardia mágica ignora la inmovilización causada por la parálisis.
#define B_BATTLE_BOND               GEN_LATEST // A partir de la Gen 9, la habilidad Fuerte afecto aumenta el Ataque, Ataque Especial y Velocidad en un nivel una vez por combate.
#define B_ATE_MULTIPLIER            GEN_LATEST // Desde la Gen 7, las habilidades del tipo -ado (Ej.: Piel celeste, Piel eléctrica, Normalidad, Piel feérica, Piel helada) multiplican el daño por 1.2. En generaciones anteriores, el multiplicador es 1.3, excepto para Normalidad, que no aplica bonificación.
=======
// Ability settings
#define B_GALE_WINGS                GEN_LATEST // In Gen7+ requires full HP to trigger.
#define B_STANCE_CHANGE_FAIL        GEN_LATEST // In Gen7+, Stance Change fails if the Pokémon is unable to use a move because of confusion, paralysis, etc. In Gen6, it doesn't.
#define B_SHADOW_TAG_ESCAPE         GEN_LATEST // In Gen4+, if both sides have a Pokémon with Shadow Tag, all battlers can escape. Before, neither side could escape this situation.
#define B_MOODY_ACC_EVASION         GEN_LATEST // In Gen8+, Moody CANNOT raise Accuracy and Evasion anymore.
#define B_FLASH_FIRE_FROZEN         GEN_LATEST // In Gen5+, Flash Fire can trigger even when frozen, when it couldn't before.
#define B_SYNCHRONIZE_TOXIC         GEN_LATEST // In Gen5+, if a Pokémon with Synchronize is badly poisoned, the opponent will also become badly poisoned. Previously, the opponent would become regular poisoned.
#define B_UPDATED_INTIMIDATE        GEN_LATEST // In Gen8+, Intimidate doesn't work on opponents with the Inner Focus, Scrappy, Own Tempo or Oblivious abilities. It also activates Rattled.
#define B_OBLIVIOUS_TAUNT           GEN_LATEST // In Gen6+, Pokémon with Oblivious can't be taunted.
#define B_STURDY                    GEN_LATEST // In Gen5+, Sturdy causes the Pokémon to have 1 HP remaining if another Pokémon's attack or confusion damage would have brought it from full health to 0 HP.
#define B_PLUS_MINUS_INTERACTION    GEN_LATEST // In Gen5+, Plus and Minus can be activated with themselves and the opposite ability. Before, only the opposing ability could activate it.
#define B_WEATHER_FORMS             GEN_LATEST // In Gen5+, Castform and Cherrim revert to their base form upon losing their respective ability. Cherrim needs Flower Gift to swap forms.
#define B_SYMBIOSIS_GEMS            GEN_LATEST // In Gen7+, Symbiosis passes an item after a gem-boosted attack. Previously, items are passed before the gem-boosted attack hits, making the item effect apply.
#define B_REDIRECT_ABILITY_IMMUNITY GEN_LATEST // In Gen5+, Pokémon with Lightning Rod/Storm Drain become immune to Electric/Water-type moves and increase their Sp. Attack by 1 stage on top of the redirecting effect.
#define B_REDIRECT_ABILITY_ALLIES   GEN_LATEST // In Gen4+, Lightning Rod/Storm Drain redirect ally's moves as well.
#define B_LEAF_GUARD_PREVENTS_REST  GEN_LATEST // In Gen5+, Leaf Guard prevents the use of Rest in harsh sunlight.
#define B_TRANSISTOR_BOOST          GEN_LATEST // In Gen9+, Transistor will only boost Electric-type moves by 1.3x as opposed to 1.5x.
#define B_ILLUMINATE_EFFECT         GEN_LATEST // In Gen9+, Illuminate prevents accuracy reductions and ignores the target's evasion.
#define B_WEAK_ARMOR_SPEED          GEN_LATEST // In Gen7+, Weak Armor raises Speed by 2 stages instead of 1 when hit by a physical move.
#define B_PROTEAN_LIBERO            GEN_LATEST // In Gen9+, Protean and Libero change the user's type only once per Battle.
#define B_INTREPID_SWORD            GEN_LATEST // In Gen9+, Intrepid Sword raises Attack by one stage only once per Battle.
#define B_DAUNTLESS_SHIELD          GEN_LATEST // In Gen9+, Dauntless Shield raises Defense by one stage only once per Battle.
#define B_DISGUISE_HP_LOSS          GEN_LATEST // In Gen8+, when a Disguised Mimikyu's Disguise is busted, upon changing to its Busted Form it loses HP equal to 1/8 of its maximum HP.
#define B_ABILITY_TRIGGER_CHANCE    GEN_LATEST // In Gen3, Shed Skin, Cute Charm, Flame Body, Static and Poison Point have a 1/3 chance to trigger. In Gen 4+ it's 30%.
                                               // In Gen3, Effect Spore has a 10% chance to sleep, poison or paralyze, with an equal chance.
                                               // In Gen4, it's 30%. In Gen5+ it has 11% to sleep, 9% chance to poison and 10% chance to paralyze.
#define B_PICKUP_WILD               GEN_LATEST // In Gen9+, Pickup allows its user to pickup its own used item at the end of the turn in wild battles.
#define B_MAGIC_GUARD               GEN_LATEST // In Gen4 only, Magic Guard ignores immobilization caused by paralysis
#define B_BATTLE_BOND               GEN_LATEST // In Gen9+, Battle Bond increases Atk, SpAtk and Speed by one stage, once per battle
#define B_ATE_MULTIPLIER            GEN_LATEST // In Gen7+, -ate abilities (Aerilate, Galvanize, Normalize, Pixilate, Refrigerate) multiply damage by 1.2. Otherwise, it's 1.3, except Normalize which has no multiplier.
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b
#define B_DEFIANT_STICKY_WEB        GEN_LATEST // In Gen9+, Defiant activates on Sticky Web regardless of who set it up. In Gen8, Defiant does not activate on Sticky Web set up by an ally after Court Change swaps its side.
#define B_POWDER_OVERCOAT           GEN_LATEST // In Gen6+, Overcoat blocks powder and spore moves from affecting the user.
#define B_INFILTRATOR_SUBSTITUTE    GEN_LATEST // In Gen6+, Infiltrator bypasses Substitute when using a move, excluding Transform and Sky Drop.

<<<<<<< HEAD
// Configuración de ítems
#define B_CONFUSE_BERRIES_HEAL      GEN_LATEST // Antes de Gen7, Figy y bayas similares restauran 1/8 de HP y se activan a la mitad de HP. En Gen7 restauran la mitad de HP, activándose al 25% de HP. En Gen8 curan 1/3 de HP.
#define B_X_ITEMS_BUFF              GEN_LATEST // En Gen7+, los X Items aumentan una estadística en 2 etapas en lugar de 1.
#define B_MENTAL_HERB               GEN_LATEST // En Gen5+, Hierba mental cura Mofa, Otra vez, Tormento, Anticura y Anulación además de Enamoramiento.
#define B_TRAINERS_KNOCK_OFF_ITEMS  TRUE       // Si está habilitado, los entrenadores pueden robar/intercambiar tus ítems (los ítems no bayas se restauran después de la batalla). En los juegos vanilla, los entrenadores no pueden robar ítems.
#define B_RETURN_STOLEN_NPC_ITEMS   GEN_LATEST // En Gen5+, Ladrón y Antojo ya no roban ítems de NPCs.
#define B_STEAL_WILD_ITEMS          GEN_LATEST // En Gen9, Ladrón y Antojo roban el objeto a los Pokémon salvajes y los mandan a la mochila. Antes, este era equipado al usuario del ataque.
#define B_RESTORE_HELD_BATTLE_ITEMS GEN_LATEST // En Gen9, todos los ítems no bayas se restauran después de la batalla.
#define B_SOUL_DEW_BOOST            GEN_LATEST // En Gens3-6, Soul Dew aumenta el Ataque especial y Defensa especial de Latios y Latias. En Gen7+ aumenta el poder de sus movimientos de tipo Psíquico y Dragón en su lugar.
#define B_NET_BALL_MODIFIER         GEN_LATEST // En Gen7+, el multiplicador de captura de Net Ball es x5 en lugar de x3.
#define B_DIVE_BALL_MODIFIER        GEN_LATEST // En Gen4+, la efectividad de Dive Ball aumenta cuando se navega o se pesca.
#define B_NEST_BALL_MODIFIER        GEN_LATEST // La fórmula de Nest Ball varía según la Gen. Consulta Cmd_handleballthrow.
#define B_REPEAT_BALL_MODIFIER      GEN_LATEST // En Gen7+, el multiplicador de captura de Repeat Ball es x3.5 en lugar de x3.
#define B_TIMER_BALL_MODIFIER       GEN_LATEST // En Gen5+, la efectividad de Timer Ball aumenta en x0.3 por turno en lugar de x0.1.
#define B_DUSK_BALL_MODIFIER        GEN_LATEST // En Gen7+, el multiplicador de captura de Dusk Ball es x3 en lugar de x3.5.
#define B_QUICK_BALL_MODIFIER       GEN_LATEST // En Gen5+, el multiplicador de captura de Quick Ball es x5 en lugar de x4.
#define B_LURE_BALL_MODIFIER        GEN_LATEST // En Gen8+, el multiplicador de captura de Lure Ball es x4. En Gen7, es x5. En Gen6 y anteriores, es x3.
#define B_HEAVY_BALL_MODIFIER       GEN_LATEST // En Gen7+, los rangos de Heavy Ball cambian. Consulta Cmd_handleballthrow.
#define B_DREAM_BALL_MODIFIER       GEN_LATEST // En Gen8+, el multiplicador de captura de Dream Ball es x4 cuando el objetivo está dormido o tiene la habilidad Comatose.
#define B_SPORT_BALL_MODIFIER       GEN_LATEST // En Gen8+, el multiplicador de captura de Sport Ball se redujo de x1.5 a x1.
#define B_SAFARI_BALL_MODIFIER      GEN_LATEST // En Gen8+, el multiplicador de captura de Safari Ball se redujo de x1.5 a x1.
#define B_FRIEND_BALL_MODIFIER      GEN_LATEST // En Gen8+, el aumento de amistad de Amigo Ball se redujo de 200 a 150.
#define B_SERENE_GRACE_BOOST        GEN_LATEST // En Gen5+, Dicha aumenta la probabilidad adicional de retroceso de Roca del Rey y Colmillo afilado.
#define B_IRON_BALL                 GEN_LATEST // En Gen5+, Pokémon tipo Volador que lleven Bola férrea reciben daño de Tierra neutro sea cual sea su segundo tipo, excepto en combates invertidos o si el Pokémon está en el suelo por otra razón.
=======
// Various volatile timers
#define B_CONFUSION_TURNS    5
#define B_UPROAR_TURN_COUNT  5
#define B_RAMPAGE_TURNS      3
#define B_DISABLE_TIMER      4
#define B_ENCORE_TIMER       4
#define B_PERISH_SONG_TIMER  3
#define B_TAUNT_TIMER        5
#define B_SLOW_START_TIMER   5
#define B_EMBARGO_TIMER      5
#define B_MAGNET_RISE_TIMER  5
#define B_TELEKINESIS_TIMER  3
#define B_HEAL_BLOCK_TIMER   5
#define B_LASER_FOCUS_TIMER  2
#define B_THROAT_CHOP_TIMER  2
#define B_WRAP_TURNS         7 // Max number of turns with Grip Claw
#define B_SYRUP_BOMB_TIMER   3
#define B_TORMENT_TIMER      3

// Item settings
#define B_CONFUSE_BERRIES_HEAL      GEN_LATEST // In Gens3-6, Figy and similar berries restore 1/8th of HP and trigger at half HP. In Gen7 they restore half HP, triggering at 25% HP. In Gen8 they heal 1/3rd of HP.
#define B_X_ITEMS_BUFF              GEN_LATEST // In Gen7+, the X Items raise a stat by 2 stages instead of 1.
#define B_X_ITEMS_CROSSUSE          TRUE       // In Gen3, you can only use X item on the current battler, but in Gen7 you can use an X item on any friendly battler in double battles (we are not sure in which gen the change occured)
#define B_MENTAL_HERB               GEN_LATEST // In Gen5+, the Mental Herb cures Taunt, Encore, Torment, Heal Block, and Disable in addition to Infatuation from before.
#define B_TRAINERS_KNOCK_OFF_ITEMS  TRUE       // If TRUE, trainers can steal/swap your items (non-berries are restored after battle). In vanilla games, trainers cannot steal items outside of facilities.
#define B_RETURN_STOLEN_NPC_ITEMS   GEN_LATEST // In Gen5+, Thief and Covet no longer steal items from NPCs.
#define B_STEAL_WILD_ITEMS          GEN_LATEST // In Gen9+, Thief and Covet steal a wild pokemon's item and send it to the bag. In Gens2-8, the stolen item would be held by the Thief/Covet user.
#define B_RESTORE_HELD_BATTLE_ITEMS GEN_LATEST // In Gen9+, all non-berry items are restored after battle.
#define B_SOUL_DEW_BOOST            GEN_LATEST // In Gens3-6, Soul Dew boosts Latis' Sp. Atk and Sp. Def. In Gen7+ it boosts the power of their Psychic and Dragon type moves instead.
#define B_NET_BALL_MODIFIER         GEN_LATEST // In Gen7+, Net Ball's catch multiplier is x5 instead of x3.
#define B_DIVE_BALL_MODIFIER        GEN_LATEST // In Gen4+, Dive Ball's effectiveness increases by x3.5 when Surfing or Fishing.
#define B_NEST_BALL_MODIFIER        GEN_LATEST // Nest Ball's formula varies depending on the Gen. See Cmd_handleballthrow.
#define B_REPEAT_BALL_MODIFIER      GEN_LATEST // In Gen7+, Repeat Ball's catch multiplier is x3.5 instead of x3.
#define B_TIMER_BALL_MODIFIER       GEN_LATEST // In Gen5+, Timer Ball's effectiveness increases by x0.3 per turn instead of x0.1
#define B_DUSK_BALL_MODIFIER        GEN_LATEST // In Gen7+, Dusk Ball's catch multiplier is x3 instead of x3.5.
#define B_QUICK_BALL_MODIFIER       GEN_LATEST // In Gen5+, Quick Ball's catch multiplier is x5 instead of x4.
#define B_LURE_BALL_MODIFIER        GEN_LATEST // In Gen8+, Lure Ball's catch multiplier is x4. In Gen7, it's x5. In Gen6 and earlier, it's x3.
#define B_HEAVY_BALL_MODIFIER       GEN_LATEST // In Gen7+, Heavy Ball's ranges change. See Cmd_handleballthrow.
#define B_DREAM_BALL_MODIFIER       GEN_LATEST // In Gen8+, Dream Ball's catch multiplier is x4 when the target is asleep or has the ability Comatose.
#define B_SPORT_BALL_MODIFIER       GEN_LATEST // In Gen8+, Sport Ball's catch multiplier was reduced from x1.5 to x1.
#define B_SAFARI_BALL_MODIFIER      GEN_LATEST // In Gen8+, Safari Ball's catch multiplier was reduced from x1.5 to x1.
#define B_FRIEND_BALL_MODIFIER      GEN_LATEST // In Gen8+, Friend Ball's friendship boost was reduced from 200 to 150.
#define B_SERENE_GRACE_BOOST        GEN_LATEST // In Gen5+, Serene Grace boosts the added flinch chance of King's Rock and Razor Fang.
#define B_IRON_BALL                 GEN_LATEST // In Gen5+, Flying-type Pokemon holding Iron Ball take x1 damage from Ground-type moves regardless of their other types, except during Inverse Battles or if the Pokemon is grounded by any other effect.
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b

// Configuración de flags
// Para usar las siguientes características en scripting, reemplaza los 0s con el ID de la flag que le asignas.
// Ej: Reemplaza con FLAG_UNUSED_0x264 para que puedas usar esa flag para activar la característica.

// Flags de potenciadores por medallas
#define B_FLAG_BADGE_BOOST_ATTACK   FLAG_BADGE01_GET // Si esta flag está activada y B_BADGE_BOOST == GEN_3, se multiplicará el Ataque del Pokémon por 1,1.
#define B_FLAG_BADGE_BOOST_DEFENSE  FLAG_BADGE05_GET // Si esta flag está activada y B_BADGE_BOOST == GEN_3, se multiplicará la Defensa del Pokémon por 1,1.
#define B_FLAG_BADGE_BOOST_SPEED    FLAG_BADGE03_GET // Si esta flag está activada y B_BADGE_BOOST == GEN_3, se multiplicará la Velocidad del Pokémon por 1,1.
#define B_FLAG_BADGE_BOOST_SPATK    FLAG_BADGE07_GET // Si esta flag está activada y B_BADGE_BOOST == GEN_3, se multiplicará el Ataque Especial del Pokémon por 1,1.
#define B_FLAG_BADGE_BOOST_SPDEF    FLAG_BADGE07_GET // Si esta flag está activada y B_BADGE_BOOST == GEN_3, se multiplicará la Defensa Especial del Pokémon por 1,1.

<<<<<<< HEAD
// Otras flags de batalla
#define B_FLAG_INVERSE_BATTLE       0     // Si esta flag está activada, la efectividad de los tipos en la batalla se invierte. Por ejemplo, fuego es super efectivo contra agua.
#define B_FLAG_FORCE_DOUBLE_WILD    0     // Si esta flag está activada, todas las batallas salvajes en tierra y en surf serán batallas dobles.
#define B_SMART_WILD_AI_FLAG        0     // Si no es 0, puedes configurar esta flag en un script para habilitar la IA inteligente de Pokémon salvajes.
#define B_FLAG_NO_BAG_USE           0     // Si esta flag está activada, la capacidad de usar la bolsa en batalla está desactivada.
#define B_FLAG_NO_CATCHING          0     // Si esta flag está activada, la capacidad de capturar Pokémon salvajes está desactivada.
#define B_FLAG_NO_RUNNING           0     // Si esta flag está activada, no se puede escapar de batallas salvajes. Además, hace que Rugido/Torbellino y Teletransporte (con el config en menos de 8ª Gen) fallen.
#define B_FLAG_AI_VS_AI_BATTLE      0     // Si esta flag está activada, los Pokémon del jugador serán controlados por la IA en las siguientes batallas.
#define B_FLAG_DYNAMAX_BATTLE       0     // Si esta flag está activada, la habilidad de Dynamax en batalla está habilitada para todos los entrenadores.
#define B_FLAG_TERA_ORB_CHARGED     0     // Si esta flag está activada, el Tera Orb está cargado. Se activa automáticamente al curar y se borra al Terastalizar una vez configurado.
#define B_FLAG_TERA_ORB_NO_COST     0     // Si esta flag está activada, el Tera Orb no usa su carga al Terastalizar. En S/V, esto ocurre después de un evento con Terapagos.
#define B_FLAG_SLEEP_CLAUSE         0     // Si esta flag está activada, clausula de sueño está activada; si el jugador o la IA ha puesto a dormir ya a algún Pokémon, no puede dormir más. IA requiere AI_FLAG_CHECK_BAD_MOVE para entenderlo.
#define B_FLAG_NO_WHITEOUT          0     // Si esta flag está activada, el jugador no puede perder contra entrenadores. Ten en cuenta que esto no cura a tu equipo automáticamente.
=======
// Var Settings
// To use the following features, change the 0 for a var present in include/constants/vars.h, preferably an unused one.
// Eg: You may rename VAR_UNUSED_0x404E to a descriptive name and use it below.
#define B_VAR_WILD_AI_FLAGS         0     // If not 0, you can use this var to add to default wild AI flags. IMPORTANT: NOT usable with flags above (1 << 15)
                                          // This var should never remain non-zero long enough for the player to save.
                                          // For better wild AI handling, edit GetWildAiFlags() in src/battle_ai_main.c
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b

// Configuración de variables
// Para usar las siguientes características en scripting, reemplaza los 0s con el ID de la variable que le asignas.
// Ej: Reemplaza con VAR_UNUSED_0x40F7 para que puedas usar B_VAR_STARTING_STATUS para esa característica.
#define B_VAR_STARTING_STATUS               0       // Si esta variable tiene un valor, asignar un STATUS_FIELD_xx_TERRAIN a ella antes de la batalla hace que la batalla comience con ese terreno activo.
                                                    // Esta var no debería permanecer como un valor distinto de cero el tiempo suficiente para que el jugador guarde.
#define B_VAR_STARTING_STATUS_TIMER         0       // Si esta variable tiene un valor mayor o igual a 1, los terrenos de campo durarán esa cantidad de turnos, de lo contrario durarán hasta que sean sobrescritos.
#define B_VAR_WILD_AI_FLAGS                 0       // Si no es 0, puedes usar esta variable para añadir a los flags de IA salvaje predeterminados. NO usable con las flags anteriores (1 << 15)
                                                    // Esta var no debería permanecer como un valor distinto de cero el tiempo suficiente para que el jugador guarde.
                                                    // Para controlar mejor la IA de los Pokémon salvajes, edita GetWildAiFlags() en src/battle_ai_main.c
#define B_VAR_DIFFICULTY                    0       // Si no es 0, puedes usar esta Var para controlar qué nivel de dificultad tienen los entrenadores. Esto debe ser implementado manualmente por el desarrollador usando Script_SetDifficulty DESPUÉS de que NewGameInitData haya sido llamada.

// No bag settings
#define NO_BAG_RESTRICTION       0
#define NO_BAG_AGAINST_TRAINER   1
#define NO_BAG_IN_BATTLE         2

#define B_VAR_NO_BAG_USE         0     // If 1, the ability to use the bag in battle is disabled in trainer battles. If 2, it is also disabled in wild battles.

// Batallas en el cielo
#define B_FLAG_SKY_BATTLE                   0       // Si esta flag tiene un valor, el jugador podrá participar en Batallas en el Cielo programadas.
#define B_VAR_SKY_BATTLE                    0       // Si esta variable tiene un valor, el juego recordará las posiciones de los Pokémon usados en Batallas en el Cielo.
#define B_SKY_BATTLE_STRICT_ELIGIBILITY     FALSE   // Si está habilitado, las Batallas en el Cielo usarán la elegibilidad de Pokémon XY. Si está deshabilitado, se permiten todos los tipos Volador o Pokémon con Levitate.

// Configuración de flags y Variables
#define B_RESET_FLAGS_VARS_AFTER_WHITEOUT   TRUE    // Si está habilitado, Overworld_ResetBattleFlagsAndVars reiniciará las flags y variables relacionadas con la batalla cuando el jugador se desmaye.

// Configuración de compañero de batalla
#define B_SHOW_PARTNER_TARGET               FALSE   // Si está habilitado, muestra el objetivo del ataque del compañero.

// Descripción de movimientos
#define B_SHOW_MOVE_DESCRIPTION             TRUE    // Muestra información del movimiento en batalla

// Weather settings
// Search for 'rain', 'sunny day', and 'hail' for move-specific or species-specific weather interactions.
#define B_ICE_WEATHER_BOTH              0
#define B_ICE_WEATHER_HAIL              1
#define B_ICE_WEATHER_SNOW              2

<<<<<<< HEAD
#define B_ABILITY_WEATHER               GEN_LATEST // En Gen6+, el clima inducido por habilidades dura 5 turnos. Antes, duraba hasta que terminara la batalla o hasta que fuera cambiado por un movimiento o una habilidad que afecte el clima.
#define B_SANDSTORM_SPDEF_BOOST         GEN_LATEST // En Gen4+, la Tormenta de Arena multiplica la Defensa Esp. de los Pokémon de tipo Roca por 1.5.
=======
#define B_ABILITY_WEATHER               GEN_LATEST // In Gen6+, ability-induced weather lasts 5 turns. Before, it lasted until the battle ended or until it was changed by a move or a different weather-affecting ability.
#define B_SANDSTORM_SPDEF_BOOST         GEN_LATEST // In Gen4+, Sandstorm weather multiplies the Sp. Defense of Rock-type Pokémon by x1.5.
#define B_SANDSTORM_SOLAR_BEAM          GEN_LATEST // In Gen3+, Sandstorm decreases the power of Solar Beam, when it didn't before.
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b
#define B_OVERWORLD_FOG                 GEN_LATEST // In Gen8+, overworld Fog summons Misty Terrain in battle. In Gen4 only, overworld Fog summons the unique fog weather condition in battle.
#define B_OVERWORLD_SNOW                GEN_LATEST // In Gen9+, overworld Snow will summon snow instead of hail in battle.
#define B_SNOW_WARNING                  GEN_LATEST // En Gen9+, Snow Warning convocará nieve en lugar de granizo.
#define B_PREFERRED_ICE_WEATHER         B_ICE_WEATHER_BOTH // Toggles Hail move effects to Snow and vice versa.

// Configuración de Terrenos
#define B_TERRAIN_BG_CHANGE         TRUE       // Si se establece en TRUE, los movimientos de terreno cambian permanentemente el fondo de batalla predeterminado hasta que el efecto se desvanezca.
#define B_THUNDERSTORM_TERRAIN      TRUE       // Si está habilitado, las tormentas eléctricas en el mundo exterior generan Lluvia y Terreno Eléctrico como en Gen 8.
#define B_TERRAIN_TYPE_BOOST        GEN_LATEST // En Gen8, el daño se aumenta en un 30% en lugar de un 50%.
#define B_SECRET_POWER_EFFECT       GEN_LATEST // Los efectos de Daño secreto cambian según el terreno y la generación. Consulta el caso de MOVE_EFFECT_SECRET_POWER en `SetMoveEffect`.
#define B_SECRET_POWER_ANIMATION    GEN_LATEST // Las animaciones de Daño secreto cambian según el terreno y la generación.
#define B_NATURE_POWER_MOVES        GEN_LATEST // Adaptación llama a diferentes movimientos según el terreno y la generación. Consulta sNaturePowerMoves.
#define B_CAMOUFLAGE_TYPES          GEN_LATEST // Camuflaje cambia al usuario a diferentes tipos según el terreno y la generación. Consulta sTerrainToType.
#define B_NEW_TERRAIN_BACKGROUNDS   FALSE      // Si está habilitado, usa nuevos fondos para los Campos.

// Configuración de Interfaz
#define B_FAST_INTRO_PKMN_TEXT      TRUE  // Si se establece en TRUE, los textos de introducción de la batalla se imprimen al mismo tiempo que la animación de un Pokémon, en lugar de esperar a que termine la animación.
#define B_FAST_INTRO_NO_SLIDE       FALSE // Si se establece en TRUE, se saltará la animación de deslizamiento que se produce al entrar en combate.
#define B_FAST_HP_DRAIN             TRUE  // Si se establece en TRUE, las barras de HP se moverán más rápido.
#define B_FAST_EXP_GROW             TRUE  // Si se establece en TRUE, las barras de EXP se moverán más rápido.
#define B_SHOW_TARGETS              TRUE  // Si se establece en TRUE, se mostrarán todos los objetivos disponibles para los movimientos que golpean a 2 o 3 Pokémon antes de seleccionar un movimiento.
#define B_SHOW_CATEGORY_ICON        TRUE  // Si se establece en TRUE, se mostrará un ícono en el resumen que indica la categoría del movimiento.
#define B_HIDE_HEALTHBOX_IN_ANIMS   TRUE  // Si se establece en TRUE, se ocultan las cajas de salud durante las animaciones de movimiento.
#define B_WAIT_TIME_MULTIPLIER      16    // Esto determina cuánto duran las pausas de texto en la batalla. En Vanilla es 16. Valores más bajos resultan en batallas más rápidas.
#define B_QUICK_MOVE_CURSOR_TO_RUN  FALSE // Si se establece en TRUE, presionar B en las opciones de batalla contra un encuentro salvaje moverá el cursor a la opción de huir.
#define B_RUN_TRAINER_BATTLE                TRUE  // If set to TRUE, players can run from Trainer battles. This is treated as a whiteout.
#define B_MOVE_DESCRIPTION_BUTTON   L_BUTTON // Si se establece en un botón diferente a B_LAST_USED_BALL_BUTTON, presionar este botón abrirá el menú de descripción del movimiento.
#define B_SHOW_USELESS_Z_MOVE_INFO          FALSE // If set to TRUE, Z-moves without additional effects like newer gen status moves will say "no additional effect"
#define B_ANIMATE_MON_AFTER_KO              TRUE // If set to TRUE, if a Pokémon on the opposite site faints, the non-fainted Pokemon will display a victory animation.
#define B_ANIMATE_MON_AFTER_FAILED_POKEBALL TRUE  // If set to TRUE, if a Pokémon on the opposite side breaks out of a thrown Poké Ball, the wild Pokémon will display its animation.
#define B_SHOW_DYNAMAX_MESSAGE              FALSE // If set to TRUE, an additional battle message is shown after completing Dynamaxing/Gigantamaxing.
#define B_HPBAR_COLOR_THRESHOLD             GEN_LATEST // In Gen 5+, HP bar color thresholds were changed to be based on the actual HP values instead of the pixel length of the HP bar, leading to more accurate HP bar colors.

<<<<<<< HEAD
// Configuración de Captura
#define B_SEMI_INVULNERABLE_CATCH   GEN_LATEST // En Gen4+, no puedes lanzar una Poké Ball contra un Pokémon que está en un estado semi-invulnerable (excavar/volar/etc).
#define B_CATCHING_CHARM_BOOST      100         // % de aumento en las probabilidades de Captura Crítica si el jugador tiene el Catching Charm.
#define B_CRITICAL_CAPTURE          TRUE       // Si se establece en TRUE, la Captura Crítica estará habilitada.
=======
// Catching settings
#define B_SEMI_INVULNERABLE_CATCH       GEN_LATEST // In Gen4+, you cannot throw a ball against a Pokemon that is in a semi-invulnerable state (dig/fly/etc)
#define B_CATCHING_CHARM_BOOST          100        // % boost in Critical Capture odds if player has the Catching Charm.
#define B_INCAPACITATED_CATCH_BONUS     GEN_LATEST // In Gen5+, the catch rate bonus for a mon with sleep or freeze is 2.5x. In Gen4 and below its only a 2x bonus.
#define B_LOW_LEVEL_CATCH_BONUS         GEN_LATEST // In Gen8, a bonus is added to the catch rate if catching a mon lower than level 20. In Gen9, the bonus is only applied to mons lower than level 13.
#define B_MISSING_BADGE_CATCH_MALUS     GEN_LATEST // In Gen9, a penalty is added to the catch rate if trying to catch a mon 5 levels above the current obedience level, based on the number of gym badges obtained.
#define B_CRITICAL_CAPTURE              TRUE       // If set to TRUE, Critical Capture will be enabled.
>>>>>>> 150649546e909fe96591be707c0fc1810b86480b
#define B_CRITICAL_CAPTURE_LOCAL_DEX    TRUE       // If set to FALSE, Critical Capture % is based off of the National Pokedex estimated by enabled generations.
#define B_CRITICAL_CAPTURE_IF_OWNED     GEN_LATEST // In Gen9, a capture appear critical if the pokemon you are trying to catch already has a dex entry (has already been caught)

#define B_LAST_USED_BALL            TRUE       // Si está habilitado, se implementará la característica de "última bola usada" de Gen 7.
#define B_LAST_USED_BALL_BUTTON     R_BUTTON   // Si se implementa la última bola usada, este botón (o combinación de botones) activará el lanzamiento de la última Poké Ball usada.
#define B_LAST_USED_BALL_CYCLE      TRUE       // Si está habilitado, mantener presionado B_LAST_USED_BALL_BUTTON mientras se presiona el D-Pad ciclará entre las Poké Balls.
#define B_CATCH_SWAP_INTO_PARTY     GEN_LATEST // De 7ma Generación en adelante, aparecerá la opción de intercambiar el Pokémon salvaje capturado con uno del equipo, permitiéndote enviar otro Pokémon a la caja.
#define B_CATCH_SWAP_CHECK_HMS      TRUE       // Si está en TRUE, la función de intercambio al capturar mencionada encima evitará enviar a la caja a los Pokémon que conozcan movimientos MO.

// Otras Configuraciones
#define B_DOUBLE_WILD_CHANCE            0          // % de probabilidad de encontrar dos Pokémon en un Encuentro Salvaje.
#define B_DOUBLE_WILD_REQUIRE_2_MONS    FALSE      // Si se establece en TRUE, las Batallas Dobles Salvajes se convertirán en Batallas Simples cuando el jugador solo tenga 1 Pokémon utilizable, ignorando B_DOUBLE_WILD_CHANCE y B_FLAG_FORCE_DOUBLE_WILD.
#define B_MULTI_BATTLE_WHITEOUT         GEN_LATEST // En Gen4+, las batallas múltiples terminan cuando el Jugador y también su Compañero no tienen más Pokémon para luchar.
#define B_EVOLUTION_AFTER_WHITEOUT      GEN_LATEST // En Gen6+, los Pokémon que califican para la evolución después de la batalla evolucionarán incluso si el jugador pierde.
#define B_WILD_NATURAL_ENEMIES          TRUE       // Si se establece en TRUE, ciertas especies salvajes atacarán a otras especies cuando estén emparejadas en batallas dobles salvajes (por ejemplo, Zangoose vs Seviper).
#define B_AFFECTION_MECHANICS           TRUE       // En Gen6+, hay una estadística llamada afecto que puede desencadenar diferentes efectos en batalla. A partir de LGPE, esos efectos usan amistad en su lugar.
#define B_TRAINER_CLASS_POKE_BALLS      GEN_LATEST // En Gen7+, los entrenadores usarán ciertos tipos de Poké Balls según su clase de entrenador.
#define B_TRAINER_MON_RANDOM_ABILITY    FALSE      // Si se establece en TRUE, se generará una habilidad legal aleatoria para un Pokémon de entrenador.
#define B_OBEDIENCE_MECHANICS           GEN_LATEST // En PLA+ (aquí Gen8+), las restricciones de obediencia también se aplican a los Pokémon no extranjeros, aunque basadas en su nivel encontrado en lugar de nivel real.
#define B_USE_FROSTBITE                 FALSE      // En PLA, Frostbite reemplaza a Freeze. Habilitar esta flag hace lo mismo aquí. Los movimientos aún pueden ser seleccionados para Freeze o Frostbite. Freeze-Dry, Secret Power y Tri Attack dependen de esta configuración.
#define B_TOXIC_REVERSAL                GEN_LATEST // En Gen5+, el veneno grave se convierte en veneno normal al final de las batallas.
#define B_TRY_CATCH_TRAINER_BALL        GEN_LATEST // En Gen4+, intentar capturar a un Pokémon de un entrenador no consume la Poké Ball.
#define B_SLEEP_CLAUSE                  FALSE     //  Si está habilitado, activa la cláusula de sueño siempre, sin importar el B_FLAG_SLEEP_CLAUSE. Usa esto si quieres que sea más fácil de ajustar.
#define B_PARTNER_MONS_MARKED_SEEN      FALSE      // If TRUE, if your double battle partner sends out a Pokémon you haven't encountered yet, it will be marked as SEEN in your Pokédex.

#define NUM_BEEPS_GEN_LATEST            4                    // Loops 4 times
#define NUM_BEEPS_GEN_3                 -1                   // Loops infinitely
#define NUM_BEEPS_OFF                   0                    // Doesn't play at all
#define B_NUM_LOW_HEALTH_BEEPS          NUM_BEEPS_GEN_LATEST // This controls the number of times the "low health" beep will loop. Setting this value to NUM_BEEPS_OFF will disable the beep, while NUM_BEEPS_GEN_3 will loop infinitely. You can set this to any number you want, the defines listed are just for ease of use.

// Configuración de Animaciones
#define B_NEW_SWORD_PARTICLE            TRUE    // Si se establece en TRUE, actualiza la partícula de Danza espada.
#define B_NEW_LEECH_SEED_PARTICLE       TRUE    // Si se establece en TRUE, actualiza la partícula de animación de Drenadoras.
#define B_NEW_HORN_ATTACK_PARTICLE      TRUE    // Si se establece en TRUE, actualiza la partícula de cuerno de Horn Attack.
#define B_NEW_ROCKS_PARTICLE            TRUE    // Si se establece en TRUE, actualiza las partículas de roca.
#define B_NEW_LEAF_PARTICLE             TRUE    // Si se establece en TRUE, actualiza la partícula de hoja.
#define B_NEW_EMBER_PARTICLES           TRUE    // Si se establece en TRUE, actualiza la partícula de fuego de Ascuas.
#define B_NEW_MEAN_LOOK_PARTICLE        TRUE    // Si se establece en TRUE, actualiza la partícula de ojo de Mal de ojo.
#define B_NEW_TEETH_PARTICLE            TRUE    // Si se establece en TRUE, actualiza la partícula de dientes de Mordisco/Triturar.
#define B_NEW_HANDS_FEET_PARTICLE       TRUE    // Si se establece en TRUE, actualiza las partículas de golpe/pateo/punch.
#define B_NEW_SPIKES_PARTICLE           TRUE    // Si se establece en TRUE, actualiza la partícula de Púas.
#define B_NEW_FLY_BUBBLE_PARTICLE       TRUE    // Si se establece en TRUE, actualiza la partícula de 'burbuja' de Vuelo.
#define B_NEW_CURSE_NAIL_PARTICLE       TRUE    // Si se establece en TRUE, actualiza la uña de Maldición.
#define B_NEW_BATON_PASS_BALL_PARTICLE  TRUE    // Si se establece en TRUE, actualiza el sprite de Poké Ball de Relevo.
#define B_NEW_MORNING_SUN_STAR_PARTICLE TRUE    // Si se establece en TRUE, actualiza las partículas de estrella de Morning Sun.
#define B_NEW_IMPACT_PALETTE            TRUE    // Si se establece en TRUE, actualiza la paleta básica de 'impacto'.
#define B_NEW_SURF_PARTICLE_PALETTE     TRUE    // Si se establece en TRUE, actualiza la paleta de ola de Surf.

// Animación y Sonidos de Poké Balls
#define B_ENEMY_THROW_BALLS          GEN_LATEST  // En GEN_6+, los entrenadores enemigos lanzan Poké Balls en la batalla en lugar de aparecer solo en el suelo y abrirse.
#define B_ENEMY_THROW_BALLS_SOUND    GEN_LATEST  // En GEN_5+, las Poké Balls de los entrenadores enemigos hacen un sonido al ser lanzadas para sacar un Pokémon. Esto solo se puede usar cuando B_ENEMY_THROW_BALLS está configurado en GEN_6 o posterior.
#define B_PLAYER_THROW_BALLS_SOUND   GEN_LATEST  // En GEN_5+, las Poké Balls del jugador hacen un sonido al ser lanzadas para sacar un Pokémon.

#define SHOW_TYPES_NEVER    0                    // Never shows types in battle
#define SHOW_TYPES_ALWAYS   1                    // Always show types in battle
#define SHOW_TYPES_CAUGHT   2                    // Only show types if you've caught a species of the mon.
#define SHOW_TYPES_SEEN     3                    // Only show types if you've seen a species of the mon.
#define B_SHOW_TYPES        SHOW_TYPES_NEVER     // When to show type indicators next to Pokémon health bars in battle, while choosing a move after selecting a target Pokémon.

#define SHOW_EFFECTIVENESS_NEVER    0           // Never show effectiveness when selecting moves.
#define SHOW_EFFECTIVENESS_ALWAYS   1           // Always show effectiveness when selecting moves.
#define SHOW_EFFECTIVENESS_CAUGHT   2           // Only show effectiveness if you've caught a species of the mon.
#define SHOW_EFFECTIVENESS_SEEN     3           // Only show effectiveness if you've seen a species of the mon.
#define B_SHOW_EFFECTIVENESS        SHOW_EFFECTIVENESS_SEEN // If not SHOW_EFFECTIVENESS_NEVER, the PP string is replaced by a type effectiveness indicator based off the moves and the opposing side.

// Pokémon battle sprite settings
#define B_ENEMY_MON_SHADOW_STYLE        GEN_LATEST // En Gen4+, todos los rivales tienen sombra.

//  Battle UI settings
#define B_MOVE_REARRANGEMENT_IN_BATTLE  GEN_LATEST  //  In Gen 4+ move slots cannot be rearranged in battle

#define B_POOL_SETTING_CONSISTENT_RNG       FALSE    // If set to true, the same trainer will always generate the same pool on the same save file
#define B_POOL_SETTING_USE_FIXED_SEED       FALSE    // If set to true, will use the fixed seed defined in B_POOL_SETTING_FIXED_SEED
#define B_POOL_SETTING_FIXED_SEED           0x1D4127 // "Random" number, unless a mistake was made, it's へだら in Emerald charmap which should spell he-da-ra
#define B_POOL_RULE_SPECIES_CLAUSE          FALSE    // Only pick a single pokemon of a unique NatDex number
#define B_POOL_RULE_EXCLUDE_FORMS           FALSE    // Exclude different forms from the Species Clause
#define B_POOL_RULE_ITEM_CLAUSE             FALSE    // Only allow each item to be picked once
#define B_POOL_RULES_USE_ITEM_EXCLUSIONS    FALSE    // Exclude items listed in poolItemClauseExclusions
#define B_POOL_RULE_MEGA_STONE_CLAUSE       FALSE    // Pick only 1 mon with mega stone
#define B_POOL_RULE_Z_CRYSTAL_CLAUSE        FALSE    // Pick only 1 mon with Z-crystal

#endif // GUARD_CONFIG_BATTLE_H
