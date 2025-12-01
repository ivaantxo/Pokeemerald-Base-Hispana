#ifndef GUARD_CONFIG_ITEM_H
#define GUARD_CONFIG_ITEM_H

// Configuración de Artículos
#define I_SHINY_CHARM_ADDITIONAL_ROLLS  2           // Cantidad de posibilidades adicionales de shiny si el jugador tiene el Shiny Charm. Establecer en 0 para desactivar los efectos del Shiny Charm.
#define I_KEY_FOSSILS                   GEN_LATEST  // En Gen4+, todos los fósiles de Gen 3 se convirtieron en objetos normales.
#define I_KEY_ESCAPE_ROPE               GEN_LATEST  // En Gen8, Escape Rope se convirtió en un Objeto Clave. Ten en cuenta que esto hará que sea gratis en las tiendas.
#define I_HEALTH_RECOVERY               GEN_LATEST  // En Gen7+, ciertos objetos de curación recuperan una cantidad diferente de HP que antes.
#define I_SITRUS_BERRY_HEAL             GEN_LATEST  // En Gen4+, Sitrus Berry se cambió de curar 30 HP a curar el 25% del HP máximo.
#define I_VITAMIN_EV_CAP                GEN_LATEST  // En Gen8+, las Vitaminas ya no tienen un límite de 100 EV por estadística.
#define I_BERRY_EV_JUMP                 GEN_LATEST  // Solo en Gen4, las Berries que reducen EV bajan el EV de una estadística a 100 si está por encima de 100.
#define I_GRISEOUS_ORB_FORM_CHANGE      GEN_LATEST  // En Gen9+, el Griseous Orb ya no cambia la forma de Giratina cuando se sostiene.
#define I_GEM_BOOST_POWER               GEN_LATEST  // En Gen6+, el aumento de poder del Gem se redujo del 50% al 30%.
#define I_USE_EVO_HELD_ITEMS_FROM_BAG   FALSE       // Si está habilitado, objetos como Razor Claw o Electirizer serán utilizables desde la bolsa para evolucionar un Pokémon al igual que en LA.
#define I_TYPE_BOOST_POWER              GEN_LATEST  // En Gen4+, todos los objetos que aumentan el poder de un tipo regular aumentaron su potencia del 10% al 20%. Ej. Charcoal
#define I_SELL_VALUE_FRACTION           GEN_LATEST  // En Gen9+, los objetos se venden por 1/4 de su valor en lugar de 1/2.
#define I_PRICE                         GEN_LATEST  // Algunos objetos han variado en valor a lo largo de las generaciones.
#define I_BERRY_PRICE                   GEN_7       // Desde que las Berries se volvieron inplantables (Gen8+), su precio ha aumentado.
#define I_POWER_ITEM_BOOST              GEN_LATEST  // En Gen7+, los Power Items otorgan 8 EV en lugar de 4 EV.
#define I_PREMIER_BALL_BONUS            GEN_LATEST  // En LGPE a partir de (Gen8+ aquí), se te da una Premier Ball por cada 10 Poké Balls de cualquier tipo y en la misma compra. Anteriormente, solo se aplicaba a Poké Balls regulares y solo se podía obtener 1 por compra.
#define I_ROTOM_CATALOG_THUNDER_SHOCK   GEN_LATEST  // En Gen9+, retornar a Rotom a su forma base hará que aprenda Impactrueno aunque ya sepa otro movimiento.
#define I_REPEL_INCLUDE_FAINTED         GEN_LATEST  // En Gen1 y Gen6+, los repelentes siempre usan el nivel del primer miembro del equipo para comprobar el nivel de los Pokémon salvajes, aunque estén debilitados.En Gen2-5, usa el nivel del primer Pokémon no debilitado.

// Configuración de TM
#define I_REUSABLE_TMS          FALSE       // En Gen5-8, los TMs son reutilizables. Establecer esto en TRUE hará que todos los TMs de la versión estándar sean reutilizables, aunque también se pueden seleccionar individualmente estableciendo su importancia en 1.

// Configuración de Experiencia Compartida
// Para usar esta función, reemplaza el 0 con el ID de la flag que estás asignando.
// Ej: Reemplaza con FLAG_UNUSED_0x264 para que puedas usar esa flag para activar la función.
#define I_EXP_SHARE_FLAG        0           // Si esta flag está establecida, todos los Pokémon en el equipo ganarán experiencia, independientemente de si participaron en la batalla o no.
#define I_EXP_SHARE_ITEM        GEN_5       // En Gen6+, el Exp. Share se cambió de un objeto en mano a un Objeto Clave que activa el efecto descrito arriba.

// Configuración de Repelentes/Atrayentes
// Estas dos configuraciones son independientes y complementarias.
#define VAR_LAST_REPEL_LURE_USED    0       // Si esta variable ha sido asignada, el último Repelente/Atrayente usado se guardará y el jugador será advertido con la opción de repelente estándar SÍ/NO, a menos que I_REPEL_LURE_MENU esté establecido en TRUE.
#define I_REPEL_LURE_MENU           TRUE    // Si está habilitado, el jugador podrá elegir qué Repelente/Atrayente usar una vez que el anterior se agote. La posición del cursor se guarda mediante VAR_LAST_REPEL_LURE_USED si no es 0.

// Buscapelea (VS seeker)
#define I_VS_SEEKER_CHARGING        0     // Si esta flag está asignada, la funcionalidad del Buscador VS se habilitará. Cuando el jugador tenga el Buscador VS, las funciones de rematch de Match Call dejarán de funcionar.

// Pesca
#define I_FISHING_BITE_ODDS         GEN_LATEST  // En Gen 1 y Gen 2, la Caña vieja tiene 100% de posibilidades de que pique un Pokémon, Caña buena un 66%, y la Super caña un 50%. En Gen 3, todas tienen un 50%. De Gen 4 en adelante, la Caña vieja tiene un 25%, la Caña buena un 50% y la Super caña un 75%.
#define I_FISHING_MINIGAME          GEN_3       // Cada generación utiliza una variación de la mecánica de pesca una vez que el Pokémon ha sido enganchado.
#define I_FISHING_ENVIRONMENT       GEN_LATEST  // En Gen 3, el terreno de batalla cuando combates contra un Pokémon pescado depende del tile donde esté el jugador. A partir de Gen 4, el terreno depende del tile donde es pescado el Pokémon (lo que suele ser terreno de agua).
#define I_FISHING_STICKY_BOOST      GEN_LATEST  // En Gen 3, un Pokémon con Ventosas o Viscosidad como primer miembro del equipo aumenta las posibilidades de que pique un Pokémon un 35%. De Gen 4 en adelante, dobla las posibilidades.
#define I_FISHING_FOLLOWER_BOOST    FALSE       // En HGSS, las posibilidades de que pique un Pokémon aumentan con la felicidad del Pokémon que te sigue.
#define I_FISHING_CHAIN             FALSE       // Introducido en XY, enganchar al mismo Pokémon repetidamente aumenta las probabilidades de que ese Pokémon sea shiny. NOTA: Esta implementación es una aproximación de la característica real, ya que XY no ha sido exhaustivamente documentado ni datamineado.
#define I_FISHING_PROXIMITY         FALSE       // Introducido en XY, pescar lejos de otras personas en áreas cerradas aumenta las probabilidades de que un Pokémon sea enganchado. NOTA: Esta implementación es una aproximación de la característica real, ya que XY no ha sido exhaustivamente documentado ni datamineado.

// ORAS Dowsing Machine
#define I_ORAS_DOWSING_FLAG         0           // Replace 0 with an unused flag to enable the Dowsing Machine mechanic from ORAS.
#define I_ORAS_DOWSING_SOUNDS       TRUE        // If TRUE, the Dowsing Machine will make sounds based on how far away the hidden item is.
#define I_ORAS_DOWSING_COLOR_PAL    15          // The color within the palette that will change based on proximity to the item.
// Color values for the ORAS dowsing distances/anims
#define I_ORAS_DOWSING_COLOR_NONE   RGB_GRAY
#define I_ORAS_DOWSING_COLOR_SLOW   RGB2GBA(56, 120, 255)
#define I_ORAS_DOWSING_COLOR_NORMAL RGB2GBA(24, 216, 24)
#define I_ORAS_DOWSING_COLOR_FAST   RGB2GBA(255, 255, 40)
#define I_ORAS_DOWSING_COLOR_FASTER RGB_RED

#endif // GUARD_CONFIG_ITEM_H
