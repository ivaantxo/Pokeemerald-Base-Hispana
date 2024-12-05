#ifndef GUARD_CONFIG_ITEM_H
#define GUARD_CONFIG_ITEM_H

// Configuración de Artículos
#define I_EXPANDED_ITEM_NAMES           TRUE        // Si se establece en FALSE, los nombres de los ítems se reducen de 20 caracteres a 14 caracteres.
#define I_SHINY_CHARM_ADDITIONAL_ROLLS  2           // Cantidad de posibilidades adicionales de shiny si el jugador tiene el Shiny Charm. Establecer en 0 para desactivar los efectos del Shiny Charm.
#define I_KEY_FOSSILS                   GEN_LATEST  // En Gen4+, todos los fósiles de Gen 3 se convirtieron en objetos normales.
#define I_KEY_ESCAPE_ROPE               GEN_LATEST  // En Gen8, Escape Rope se convirtió en un Objeto Clave. Ten en cuenta que esto hará que sea gratis en las tiendas.
#define I_HEALTH_RECOVERY               GEN_LATEST  // En Gen7+, ciertos objetos de curación recuperan una cantidad diferente de HP que antes.
#define I_SITRUS_BERRY_HEAL             GEN_LATEST  // En Gen4+, Sitrus Berry se cambió de curar 30 HP a curar el 25% del HP máximo.
#define I_VITAMIN_EV_CAP                GEN_LATEST  // En Gen8+, las Vitaminas ya no tienen un límite de 100 EV por estadística.
#define I_BERRY_EV_JUMP                 GEN_LATEST  // Solo en Gen4, las Berries que reducen EV bajan el EV de una estadística a 100 si está por encima de 100.
#define I_GRISEOUS_ORB_FORM_CHANGE      GEN_LATEST  // En Gen9+, el Griseous Orb ya no cambia la forma de Giratina cuando se sostiene.
#define I_GEM_BOOST_POWER               GEN_LATEST  // En Gen6+, el aumento de poder del Gem se redujo del 50% al 30%.
#define I_USE_EVO_HELD_ITEMS_FROM_BAG   FALSE       // Si es TRUE, objetos como Razor Claw o Electirizer serán utilizables desde la bolsa para evolucionar un Pokémon al igual que en LA.
#define I_TYPE_BOOST_POWER              GEN_LATEST  // En Gen4+, todos los objetos que aumentan el poder de un tipo regular aumentaron su potencia del 10% al 20%. Ej. Charcoal
#define I_SELL_VALUE_FRACTION           GEN_LATEST  // En Gen9+, los objetos se venden por 1/4 de su valor en lugar de 1/2.
#define I_PRICE                         GEN_LATEST  // Algunos objetos han variado en valor a lo largo de las generaciones.
#define I_BERRY_PRICE                   GEN_7       // Desde que las Berries se volvieron inplantables (Gen8+), su precio ha aumentado.
#define I_POWER_ITEM_BOOST              GEN_LATEST  // En Gen7+, los Power Items otorgan 8 EV en lugar de 4 EV.
#define I_PREMIER_BALL_BONUS            GEN_LATEST  // En LGPE a partir de (Gen8+ aquí), se te da una Premier Ball por cada 10 Poké Balls de cualquier tipo y en la misma compra. Anteriormente, solo se aplicaba a Poké Balls regulares y solo se podía obtener 1 por compra.
#define I_ROTOM_CATALOG_THUNDER_SHOCK   GEN_LATEST  // In Gen9+, reverting Rotom to its base form will teach it Thunder Shock even if it knows another move.
#define I_REPEL_INCLUDE_FAINTED         GEN_LATEST  // In Gen1 and Gen6+, Repels always use the level of the first member of the party to check which wild Pokémon to prevent encounters with, even if that member is fainted. In Gen2-5, it only uses the level of the first non-fainted Pokémon.

// Configuración de TM
#define I_REUSABLE_TMS          FALSE       // En Gen5-8, los TMs son reutilizables. Establecer esto en TRUE hará que todos los TMs de la versión estándar sean reutilizables, aunque también se pueden seleccionar individualmente estableciendo su importancia en 1.

// Configuración de Experiencia Compartida
// Para usar esta función, reemplaza el 0 con el ID de la bandera que estás asignando.
// Ej: Reemplaza con FLAG_UNUSED_0x264 para que puedas usar esa bandera para activar la función.
#define I_EXP_SHARE_FLAG        0           // Si esta bandera está establecida, todos los Pokémon en el equipo ganarán experiencia, independientemente de si participaron en la batalla o no.
#define I_EXP_SHARE_ITEM        GEN_5       // En Gen6+, el Exp. Share se cambió de un objeto en mano a un Objeto Clave que activa el efecto descrito arriba.

// Configuración de Repelentes/Atrayentes
// Estas dos configuraciones son independientes y complementarias.
#define VAR_LAST_REPEL_LURE_USED    0       // Si esta variable ha sido asignada, el último Repelente/Atrayente usado se guardará y el jugador será advertido con la opción de repelente estándar SÍ/NO, a menos que I_REPEL_LURE_MENU esté establecido en TRUE.
#define I_REPEL_LURE_MENU           TRUE    // Si es TRUE, el jugador podrá elegir qué Repelente/Atrayente usar una vez que el anterior se agote. La posición del cursor se guarda mediante VAR_LAST_REPEL_LURE_USED si no es 0.

// Buscapelea (VS seeker)
#define I_VS_SEEKER_CHARGING        0     // Si esta bandera está asignada, la funcionalidad del Buscador VS se habilitará. Cuando el jugador tenga el Buscador VS, las funciones de rematch de Match Call dejarán de funcionar.

// Fishing
#define I_FISHING_BITE_ODDS        GEN_LATEST // In Gen 1 and Gen 2, the Old Rod has a 100% chance for a bite, Good Rod has a 66% chance for a bite, and Super Rod has a 50% chance for a bite. In Gen 3, all rods have a base 50% chance for a bite. In Gen 4 onwards, the Old Rod has a base 25% chance for a bite, Good Rod has a 50% chance for a bite, and Super Rod has a 75% chance for a bite.
#define I_FISHING_MINIGAME         GEN_3      // Each generation uses a variation of reeling in Pokémon once they have been hooked. NOTE: Only the Gen 1/2 and Gen 3 minigames are implemented right now!
#define I_FISHING_STICKY_BOOST     GEN_LATEST // In Gen 3, a Pokemon with Suction Cups or Sticky Hold in the first slot of the party causes the chance for a bite to increase by about 35%. In Gen 4 onwards, it doubles the base bite chance.
#define I_FISHING_FOLLOWER_BOOST   FALSE      // In HGSS, fishing bite odds are increased depending on the friendship of the current following Pokémon.
#define I_FISHING_CHAIN            FALSE      // Introduced in XY, hooking the same Pokémon repeatedly will increase the odds of that mon being shiny. NOTE: This implementation is an approximation of the actual feature, as XY have not been throughoutly documented or datamined.
#define I_FISHING_PROXIMITY        FALSE      // Introduced in XY, fishing away from other people in enclosed areas will increase the chances of a Pokémon being hooked. NOTE: This implementation is an approximation of the actual feature, as XY have not been throughoutly documented or datamined.

#endif // GUARD_CONFIG_ITEM_H
