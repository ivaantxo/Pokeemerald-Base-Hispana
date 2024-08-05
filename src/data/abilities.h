const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Hedor"),
        .description = COMPOUND_STRING("Aleja a Pokémon salvajes."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Llovizna"),
        .description = COMPOUND_STRING("Hace que llueva en combate."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Impulso"),
        .description = COMPOUND_STRING("Va subiendo la Velocidad."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Armadura Batalla"),
        .description = COMPOUND_STRING("Bloquea golpes críticos."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Robustez"),
        .description = COMPOUND_STRING("Anula golpes fulminantes."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Humedad"),
        .description = COMPOUND_STRING("Evita la autodestrucción."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Flexibilidad"),
        .description = COMPOUND_STRING("Evita la parálisis."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Velo Arena"),
        .description = COMPOUND_STRING("Más evasión en Torm. Arena."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Elec. Estática"),
        .description = COMPOUND_STRING("Paraliza al mín. contacto."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Absorbe Elec"),
        .description = COMPOUND_STRING("Cambia electricidad en PS."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Absorbe Agua"),
        .description = COMPOUND_STRING("Convierte el agua en PS."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Despiste"),
        .description = COMPOUND_STRING("Evita la atracción."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Aclimatación"),
        .description = COMPOUND_STRING("Anula los efectos del clima."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Ojocompuesto"),
    #else
        .name = _("Ojocompuesto"),
    #endif
        .description = COMPOUND_STRING("Aumenta la Precisión."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnio"),
        .description = COMPOUND_STRING("Evita el quedarse dormido."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Cambio Color"),
        .description = COMPOUND_STRING("Toma el tipo del mov. rival."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Inmunidad"),
        .description = COMPOUND_STRING("Evita el envenenamiento."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Absorbefuego"),
        .description = COMPOUND_STRING("Se carga si recibe Fuego."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Polvo Escudo"),
        .description = COMPOUND_STRING("Evita efectos secundarios."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Ritmo Propio"),
        .description = COMPOUND_STRING("Evita la confusión."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Ventosas"),
        .description = COMPOUND_STRING("Fija el cuerpo con firmeza."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidación"),
        .description = COMPOUND_STRING("Baja el Ataque del rival."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Sombratrampa"),
        .description = COMPOUND_STRING("Evita que el enemigo huya."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Piel Tosca"),
        .description = COMPOUND_STRING("Hiere al tacto."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Superguarda"),
        .description = COMPOUND_STRING("Cuesta mucho hacerle daño."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitación"),
        .description = COMPOUND_STRING("No sufre at. tipo Tierra."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Efectoespora"),
        .description = COMPOUND_STRING("Deja esporas al contacto."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Sincronía"),
        .description = COMPOUND_STRING("Transmite problem. de estado"),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Cuerpo Puro"),
        .description = COMPOUND_STRING("Evita que baje la habilidad."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Cura Natural"),
        .description = COMPOUND_STRING("Se cura al salir."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Pararrayos"),
    #else
        .name = _("Pararrayos"),
    #endif
        .description = COMPOUND_STRING("Frena ataques eléctricos."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Dicha"),
        .description = COMPOUND_STRING("Añade efectos secundarios."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Nado Rápido"),
        .description = COMPOUND_STRING("Con lluvia, sube Velocidad."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Clorofila"),
        .description = COMPOUND_STRING("Con sol, sube la Velocidad."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Iluminación"),
        .description = COMPOUND_STRING("Facilita el encuentro."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Rastro"),
        .description = COMPOUND_STRING("Copia habilidad especial."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Potencia"),
        .description = COMPOUND_STRING("Aumenta el Ataque."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Punto Tóxico"),
        .description = COMPOUND_STRING("Envenena al mín. contacto."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Foco Interno"),
        .description = COMPOUND_STRING("Evita el retroceso."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Escudo Magma"),
        .description = COMPOUND_STRING("Evita el congelamiento."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Velo Agua"),
        .description = COMPOUND_STRING("Evita las quemaduras."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Imán"),
        .description = COMPOUND_STRING("Atrapa Pokémon de Acero."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Insonorizar"),
        .description = COMPOUND_STRING("Evita ataques de sonido."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Cura Lluvia"),
        .description = COMPOUND_STRING("Sube PS cuando llueve."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Chorro Arena"),
        .description = COMPOUND_STRING("Crea una Tormenta de Arena."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Presión"),
        .description = COMPOUND_STRING("Baja los PP del enemigo."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Sebo"),
        .description = COMPOUND_STRING("Protege del frío y calor."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Madrugar"),
        .description = COMPOUND_STRING("Despierta rápido al Pkmn."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Cuerpo Llama"),
        .description = COMPOUND_STRING("Quema al mín. contacto."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Fuga"),
        .description = COMPOUND_STRING("Facilita la huida."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Vista Lince"),
        .description = COMPOUND_STRING("Evita que baje precisión."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Corte Fuerte"),
        .description = COMPOUND_STRING("Evita que baje el ataque."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Recogida"),
        .description = COMPOUND_STRING("Puede tomar objetos."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Ausente"),
        .description = COMPOUND_STRING("Interviene cada 2 rondas."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Entusiasmo"),
        .description = COMPOUND_STRING("Cambia Precis. por energía."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Gran Encanto"),
        .description = COMPOUND_STRING("Emboba al mínimo contacto."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Más"),
        .description = COMPOUND_STRING("Mejora con habilidad menos."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Menos"),
        .description = COMPOUND_STRING("Mejora con habilidad más."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Predicción"),
        .description = COMPOUND_STRING("Cambia con el clima."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Viscosidad"),
        .description = COMPOUND_STRING("Evita el robo de objetos."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Mudar"),
        .description = COMPOUND_STRING("Se cura mudando la piel."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Agallas"),
        .description = COMPOUND_STRING("Sube el Ataque si sufre."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Esc. Espec"),
        .description = COMPOUND_STRING("Sube la Defensa si sufre."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Lodo Líquido"),
        .description = COMPOUND_STRING("Al verterlo, hiere."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Espesura"),
        .description = COMPOUND_STRING("Sube ataques tipo Planta."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Mar Llamas"),
        .description = COMPOUND_STRING("Sube ataques tipo Fuego."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrente"),
        .description = COMPOUND_STRING("Sube ataques tipo Agua."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Enjambre"),
        .description = COMPOUND_STRING("Sube ataques tipo Bicho."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Cabeza Roca"),
        .description = COMPOUND_STRING("Evita volver a ser golpeado."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Sequía"),
        .description = COMPOUND_STRING("Toma luz solar en batalla."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Trampa Arena"),
        .description = COMPOUND_STRING("Evita la huida."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Espíritu Vital"),
        .description = COMPOUND_STRING("Evita quedarse dormido."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Humo Blanco"),
        .description = COMPOUND_STRING("Evita que baje la habilidad."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Energía Pura"),
        .description = COMPOUND_STRING("Aumenta el Ataque."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Caparazón"),
        .description = COMPOUND_STRING("Bloquea golpes críticos."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Bucle Aire"),
        .description = COMPOUND_STRING("Anula los efectos del clima."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tumbos"),
        .description = COMPOUND_STRING("Sube Evas. estando conf."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Electromotor"),
        .description = COMPOUND_STRING("Sube Vel. si recibe Eléct."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalidad"),
        .description = COMPOUND_STRING("Sube Ataque mismo sexo."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Impasible"),
        .description = COMPOUND_STRING("Retroceder aumenta la Vel."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Manto Níveo"),
        .description = COMPOUND_STRING("Sube la Evas. con Granizo."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gula"),
        .description = COMPOUND_STRING("Come bayas más pronto."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Irascible"),
        .description = COMPOUND_STRING("Golpe crítico sube Ataque."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Liviano"),
        .description = COMPOUND_STRING("Sube Vel. al usar obj. eq."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Ignífugo"),
        .description = COMPOUND_STRING("Resiste calor y quemadura."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("Duplica cambios en estad."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Piel Seca"),
        .description = COMPOUND_STRING("Pierde PS si hace calor."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Descarga"),
        .description = COMPOUND_STRING("Sube At. según Def. rival."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Puño Férreo"),
        .description = COMPOUND_STRING("Sube poten. de puñetazos."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Antídoto"),
        .description = COMPOUND_STRING("Recupera PS con veneno."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptable"),
        .description = COMPOUND_STRING("Potencia mov. mismo tipo."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Encadenado"),
        .description = COMPOUND_STRING("Siempre pot. mult. golpe."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hidratación"),
        .description = COMPOUND_STRING("Cura estado si llueve."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Poder Solar"),
        .description = COMPOUND_STRING("Sube el Ataque con sol."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Pies Rápidos"),
        .description = COMPOUND_STRING("Sube Vel. con prob. est."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalidad"),
        .description = COMPOUND_STRING("Mov. vuelven tipo Normal."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Francotiradr"),
        .description = COMPOUND_STRING("Potencia mov. críticos."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Muro Mágico"),
        .description = COMPOUND_STRING("Solo se daña por ataques."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Indefenso"),
        .description = COMPOUND_STRING("Todos los mov. aciertan."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Rezagado"),
        .description = COMPOUND_STRING("Ejecuta mov. tras demás."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Experto"),
        .description = COMPOUND_STRING("Potencia mov. más débiles."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Defensa Hoja"),
        .description = COMPOUND_STRING("Evita prob. est. con sol."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Zoquete"),
        .description = COMPOUND_STRING("No puede usar obj. equip."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Rompemoldes"),
        .description = COMPOUND_STRING("Suprime habilidad rival."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Afortunado"),
        .description = COMPOUND_STRING("Los críticos aciertan más."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Detonación"),
        .description = COMPOUND_STRING("Ser vencido daña al rival."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipación"),
        .description = COMPOUND_STRING("Prevé mov. peligrosos."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Alerta"),
        .description = COMPOUND_STRING("Dice mov. rival fuerte."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Ignorante"),
        .description = COMPOUND_STRING("Ignora cambios de estado."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Cromolente"),
        .description = COMPOUND_STRING("Potencia mov. no eficaces."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filtro"),
        .description = COMPOUND_STRING("Mitiga mov. supereficaces."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Inicio Lento"),
        .description = COMPOUND_STRING("Tarda poco en prepararse."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Intrépido"),
        .description = COMPOUND_STRING("Golpea a Pkmn Fantasma."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Colector"),
        .description = COMPOUND_STRING("Atrae movimientos de Agua."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Gélido"),
        .description = COMPOUND_STRING("Recupera PS con Granizo."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solid Rock"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Nevada"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Summons snow in battle."),
    #else
        .description = COMPOUND_STRING("Summons hail in battle."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Recogemiel"),
        .description = COMPOUND_STRING("Puede encontrar miel."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Cacheo"),
        .description = COMPOUND_STRING("Puede ver el objeto rival."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Audaz"),
        .description = COMPOUND_STRING("Potencia mov. hirientes."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multitipo"),
        .description = COMPOUND_STRING("Cambio tipo según tabla."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Don Floral"),
        .description = COMPOUND_STRING("Se transforma con sol."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Mal Sueño"),
        .description = COMPOUND_STRING("Daña al rival dormido."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Hurto"),
        .description = COMPOUND_STRING("Roba el objeto al rival."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Potencia Bruta"),
        .description = COMPOUND_STRING("Pot. mov. con prob. est."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Respondón"),
        .description = COMPOUND_STRING("Invierte cambios en estad."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Nerviosismo"),
        .description = COMPOUND_STRING("Rival no puede comer baya."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Competitivo"),
        .description = COMPOUND_STRING("Bajadas de est. suben At."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Flaqueza"),
        .description = COMPOUND_STRING("Se rinde con mitad de PS."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Cuerpo Maldito"),
        .description = COMPOUND_STRING("Desactiva mov. al contacto."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Alma Cura"),
        .description = COMPOUND_STRING("Cura estado del aliado."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Compiescolta"),
        .description = COMPOUND_STRING("Reduce el daño a aliados."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Armadura Frágil"),
        .description = COMPOUND_STRING("Carac. cambian al golpear."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Metal Pesado"),
        .description = COMPOUND_STRING("Duplica su peso."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Metal Liviano"),
        .description = COMPOUND_STRING("Reduce a la mitad su peso."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiescamas"),
        .description = COMPOUND_STRING("Reduce daño PS completo."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Ímpetu Tóxico"),
        .description = COMPOUND_STRING("Sube At. si es envenenado."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Ímpetu Ardiente"),
        .description = COMPOUND_STRING("Sube At. si está quemado."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Cosecha"),
        .description = COMPOUND_STRING("Puede reutilizar bayas."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepatía"),
        .description = COMPOUND_STRING("Elude los ataques aliados."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Veleta"),
        .description = COMPOUND_STRING("Carac. suben gradualmente."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Funda"),
        .description = COMPOUND_STRING("Bloquea clima y polvo."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Poison Touch"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regenerator"),
        .description = COMPOUND_STRING("Heals upon switching out."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Sacapecho"),
        .description = COMPOUND_STRING("Impide bajadas de defensa."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Ímpetu Arena"),
        .description = COMPOUND_STRING("Sube vel. con Tor. Arena."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Piel Milagro"),
        .description = COMPOUND_STRING("Puede evitar prob. estado."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Cálculofinal"),
        .description = COMPOUND_STRING("Ser último sube potencia."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Ilusión"),
        .description = COMPOUND_STRING("Adopta aspecto compañero."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Impostor"),
        .description = COMPOUND_STRING("Se transforma en el rival."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Allanamiento"),
        .description = COMPOUND_STRING("Atraviesa barrera rival."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Momia"),
        .description = COMPOUND_STRING("Se propaga con contacto."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Autoestima"),
        .description = COMPOUND_STRING("Debilitar sube el Ataque."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justiciero"),
        .description = COMPOUND_STRING("Mov. Siniestros suben At."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Cobardía"),
        .description = COMPOUND_STRING("Sube Velocidad con susto."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Espejomágico"),
        .description = COMPOUND_STRING("Refleja mov. de estado."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Herbívoro"),
        .description = COMPOUND_STRING("Mov. Planta suben Ataque."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Bromista"),
        .description = COMPOUND_STRING("Mov. estado prioridad."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Poder Arena"),
        .description = COMPOUND_STRING("Sube ataque en Tor. Arena."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Iron Barbs"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Modo Daruma"),
        .description = COMPOUND_STRING("Transforma a mitad de PS."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Tinovictoria"),
        .description = COMPOUND_STRING("Sube precisión del bando."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turboblaze"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Velo Aroma"),
        .description = COMPOUND_STRING("Previene límite de mov."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Velo Flor"),
        .description = COMPOUND_STRING("Protege al tipo Planta."),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Carrillo"),
        .description = COMPOUND_STRING("Restaura PS si come bayas."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Mutatipo"),
        .description = COMPOUND_STRING("Cambia tipo al mov. usado."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Pelaje Recio"),
        .description = COMPOUND_STRING("Reduce el daño físico."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Magician"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Antibalas"),
        .description = COMPOUND_STRING("Evita algunos proyectiles."),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Tenacidad"),
        .description = COMPOUND_STRING("Sube At. Esp. si baja est."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Mandíbula Fuerte"),
        .description = COMPOUND_STRING("Potencia mov. mordiscos."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Piel Helada"),
        .description = COMPOUND_STRING("Mov. Normales de Hielo."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Velo Dulce"),
        .description = COMPOUND_STRING("Previene sueño al bando."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Cambio Táctico"),
    #else
        .name = _("Cambio Táctico"),
    #endif
        .description = COMPOUND_STRING("Transforma según combate."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Alas Vendaval"),
        .description = COMPOUND_STRING("Mov. Volador prioritarios."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Megadisparador"),
    #else
        .name = _("Megadisparador"),
    #endif
        .description = COMPOUND_STRING("Potencia mov. de pulsos."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Manto Frondoso"),
        .description = COMPOUND_STRING("Sube defensa en hierba."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Simbiosis"),
        .description = COMPOUND_STRING("Pasa objeto a aliado."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Garra Dura"),
        .description = COMPOUND_STRING("Potencia mov. de contacto."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Piel Feérica"),
        .description = COMPOUND_STRING("Mov. Normales son de Hada."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Baba"),
        .description = COMPOUND_STRING("Baja Veloc. al contacto."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Piel Celeste"),
        .description = COMPOUND_STRING("Mov. Normales son Volador."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Amor Filial"),
    #else
        .name = _("Amor Filial"),
    #endif
        .description = COMPOUND_STRING("Mov. golpean dos veces."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Aura Oscura"),
        .description = COMPOUND_STRING("Potencia mov. Siniestro."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Aura Feérica"),
        .description = COMPOUND_STRING("Potencia mov. Hada."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Rompeaura"),
        .description = COMPOUND_STRING("Invierte hab. de aura."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mar Albor"),
    #else
        .name = _("PrimrdialSea"),
    #endif
        .description = COMPOUND_STRING("Invoca un diluvio."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Tierra Ocaso"),
    #else
        .name = _("Tierra Ocaso"),
    #endif
        .description = COMPOUND_STRING("Invoca rayos abrasadores."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Ráfaga Delta"),
        .description = COMPOUND_STRING("Invoca turbulencias."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Firmeza"),
        .description = COMPOUND_STRING("Potencia Def. con golpe."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Huida"),
        .description = COMPOUND_STRING("Huye con mitad de PS."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Emergency Exit"),
    #else
        .name = _("EmergncyExit"),
    #endif
        .description = COMPOUND_STRING("Flees at half HP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hidrorefuerzo"),
    #else
        .name = _("WtrCmpaction"),
    #endif
        .description = COMPOUND_STRING("Agua potencia Defensa."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Ensañamiento"),
        .description = COMPOUND_STRING("Golpe crít. a envenenado."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Escudo Limitado"),
        .description = COMPOUND_STRING("Se rompe con mitad de PS."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Vigilante"),
        .description = COMPOUND_STRING("Fuerte si rivales cambian."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Pompa"),
        .description = COMPOUND_STRING("Protege del Fuego y quem."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Acero Templado"),
        .description = COMPOUND_STRING("Potencia mov. Acero."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Cólera"),
        .description = COMPOUND_STRING("Sube At. Esp. si pocos PS."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Quitanieves"),
        .description = COMPOUND_STRING("Sube velocidad en Granizo."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Remoto"),
        .description = COMPOUND_STRING("Nunca hace contacto."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Voz Fluida"),
        .description = COMPOUND_STRING("Mov. sonido son de Agua."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Primer Auxilio"),
        .description = COMPOUND_STRING("Mov. curación prioridad."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Piel Eléctrica"),
        .description = COMPOUND_STRING("Mov. Normal son Eléctric."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Cola Surf"),
        .description = COMPOUND_STRING("Rápido en electricidad."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Banco"),
        .description = COMPOUND_STRING("Forma banco con muchos PS."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Disfraz"),
        .description = COMPOUND_STRING("Protege de un golpe."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Fuerteafecto"),
        .description = COMPOUND_STRING("Cambia forma después KO."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Agrupamiento"),
    #else
        .name = _("PwrConstruct"),
    #endif
        .description = COMPOUND_STRING("Cél. ayudan si está débil."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosión"),
        .description = COMPOUND_STRING("Envenena todos los tipos."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Letargo Perenne"),
        .description = COMPOUND_STRING("Actúa como dormido."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Regia Presencia"),
    #else
        .name = _("QueenlyMjsty"),
    #endif
        .description = COMPOUND_STRING("Protege de prioridad."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Revés"),
        .description = COMPOUND_STRING("Hiere al agresor al KO."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Pareja Baile"),
        .description = COMPOUND_STRING("Copia mov. de danza."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batería"),
        .description = COMPOUND_STRING("Sube at. esp. del aliado."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Peluche"),
        .description = COMPOUND_STRING("Suave pero inflamable."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Dazzling"),
        .description = COMPOUND_STRING("Protects from priority."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Soul-Heart"),
        .description = COMPOUND_STRING("KOs raise Sp. Atk."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Rizo Rebelde"),
    #else
        .name = _("Rizo Rebelde"),
    #endif
        .description = COMPOUND_STRING("Baja Veloc. al contacto."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receptor"),
        .description = COMPOUND_STRING("Copia habilidad de aliado."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Power Of Alchemy"),
    #else
        .name = _("PwrOfAlchemy"),
    #endif
        .description = COMPOUND_STRING("Copies ally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Ultraimpulso"),
        .description = COMPOUND_STRING("KO mejora est. más alta."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("Sistema Alfa"),
        .description = COMPOUND_STRING("Disco cambia su tipo."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Electrogénes"),
    #else
        .name = _("ElectrcSurge"),
    #endif
        .description = COMPOUND_STRING("Pone Campo Eléctrico."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Psicogénesis"),
    #else
        .name = _("Psicogénesis"),
    #endif
        .description = COMPOUND_STRING("Pone Campo Psíquico."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Nebulogénes"),
        .description = COMPOUND_STRING("Pone Campo de Niebla."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Herbogénesis"),
        .description = COMPOUND_STRING("Pone Campo de Hierba."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Full Metal Body"),
    #else
        .name = _("FullMetalBdy"),
    #endif
        .description = COMPOUND_STRING("Previene reducción de est."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Shadow Shield"),
    #else
        .name = _("ShadowShield"),
    #endif
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prism Armor"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Fuerza Cerebral"),
        .description = COMPOUND_STRING("Potencia supereficaces."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Espada Indómita"),
    #else
        .name = _("IntrepidSwrd"),
    #endif
        .description = COMPOUND_STRING("Sube Ataque al entrar."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Escudo Recio"),
    #else
        .name = _("DauntlssShld"),
    #endif
        .description = COMPOUND_STRING("Sube Defensa al entrar."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Líbero"),
        .description = COMPOUND_STRING("Cambia tipo al mov. usado."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Recogebolas"),
        .description = COMPOUND_STRING("Recupera Poké Balls."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Pelusa"),
        .description = COMPOUND_STRING("Baja Vel. todos al cont."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Hélice Caudal"),
    #else
        .name = _("PropellrTail"),
    #endif
        .description = COMPOUND_STRING("Ignora cambio de pos."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Coraza Reflejo"),
        .description = COMPOUND_STRING("Devuelve disminución est."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Tragamisil"),
        .description = COMPOUND_STRING("Escupe presa si golpeado."),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Acérrimo"),
        .description = COMPOUND_STRING("Ignora cambio de pos."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Combustible"),
        .description = COMPOUND_STRING("Sube Vel. con Fuego y Agua."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Sube y resiste sonido."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Expulsarena"),
        .description = COMPOUND_STRING("T. Arena si lo golpean."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Escama Hielo"),
        .description = COMPOUND_STRING("Reduce daño especial."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Maduración"),
        .description = COMPOUND_STRING("Duplica efecto de bayas."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Cara Hielo"),
        .description = COMPOUND_STRING("Cara regenera con Granizo."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Fuente Energía"),
        .description = COMPOUND_STRING("Potencia mov. aliados."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimetismo"),
        .description = COMPOUND_STRING("Cambia tipo al campo."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Antibarrera"),
    #else
        .name = _("ScreenCleanr"),
    #endif
        .description = COMPOUND_STRING("Elimina las barreras."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Alma Acerada"),
    #else
        .name = _("Alma Acerada"),
    #endif
        .description = COMPOUND_STRING("Pot. mov. Acero aliado."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Cuerpo mortal"),
        .description = COMPOUND_STRING("Deb. al rival en 3 turnos."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Alma Errante"),
    #else
        .name = _("WandrngSprit"),
    #endif
        .description = COMPOUND_STRING("Cambia hab. al contacto."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Monotema"),
    #else
        .name = _("GorillaTacti"),
    #endif
        .description = COMPOUND_STRING("Sube At. e impide otros."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Gas Reactivo"),
    #else
        .name = _("NeutrlzngGas"),
    #endif
        .description = COMPOUND_STRING("Desactiva todas las hab."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Velo Pastel"),
        .description = COMPOUND_STRING("Protege bando del veneno."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Mutapetito"),
    #else
        .name = _("Mutapetito"),
    #endif
        .description = COMPOUND_STRING("Cambia forma cada turno."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Mano Rápida"),
        .description = COMPOUND_STRING("A veces se mueve primero."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Puño Invisible"),
        .description = COMPOUND_STRING("Evade protección con fís."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Medicina Extraña"),
    #else
        .name = _("CuriusMedicn"),
    #endif
        .description = COMPOUND_STRING("Anula camb. estad. aliado."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Potencia mov. Eléctricos."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("Ups Dragon-type moves."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Relincho Blanco"),
    #else
        .name = _("ChillngNeigh"),
    #endif
        .description = COMPOUND_STRING("KOs suben Ataque."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Relincho Negro"),
        .description = COMPOUND_STRING("KOs suben At. Esp."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Olor Persistente"),
    #else
        .name = _("LngerngAroma"),
    #endif
        .description = COMPOUND_STRING("Se propaga con contacto."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Disemillar"),
        .description = COMPOUND_STRING("Camb. terreno al ser golp."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Termoconversión"),
    #else
        .name = _("ThrmlExchnge"),
    #endif
        .description = COMPOUND_STRING("El fuego aumenta el ataque."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Coraza Ira"),
        .description = COMPOUND_STRING("Se enfada a mitad de PS."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Sal Purificadora"),
    #else
        .name = _("PurfyingSalt"),
    #endif
        .description = COMPOUND_STRING("Protección de sales puras."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Well-Baked Body"),
    #else
        .name = _("WellBakedBdy"),
    #endif
        .description = COMPOUND_STRING("Strengthened by Fire."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Surcavientos"),
        .description = COMPOUND_STRING("Áereo aumenta el ataque."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Perro Guardián"),
        .description = COMPOUND_STRING("Imposible de intimidar."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Transportarrocas"),
    #else
        .name = _("Transportarrocas"),
    #endif
        .description = COMPOUND_STRING("Potencia movs. de roca."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Energía Eólica"),
        .description = COMPOUND_STRING("Rec. energía con el aire."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Zero to Hero"),
        .description = COMPOUND_STRING("Cambia de forma al salir."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Comandar"),
        .description = COMPOUND_STRING("Da órdenes a Dondozo."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Dinamo"),
    #else
        .name = _("Elecmrphosis"),
    #endif
        .description = COMPOUND_STRING("Se recarga al contacto."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Paleosíntesis"),
    #else
        .name = _("Protosnthsis"),
    #endif
        .description = COMPOUND_STRING("Sol mejora su mejor stat."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Carga Cuark"),
        .description = COMPOUND_STRING("Camp.Elec.Aum. mejor stat."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Good as Gold"),
        .description = COMPOUND_STRING("Evita problemas de estado."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Vessel of Ruin"),
    #else
        .name = _("VesselOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce atq. esp. rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Sword of Ruin"),
    #else
        .name = _("SwordOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce defensa rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Tablets of Ruin"),
    #else
        .name = _("TabltsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce ataque rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Beads of Ruin"),
    #else
        .name = _("BeadsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Reduce la def. esp. rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Latido oricalco"),
    #else
        .name = _("OrchlcumPlse"),
    #endif
        .description = COMPOUND_STRING("Invoca el sol en combate."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Motor Hadrónico"),
    #else
        .name = _("Motor Hadrónico"),
    #endif
        .description = COMPOUND_STRING("El Campo se transf. Elect."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Oportunista"),
        .description = COMPOUND_STRING("Copia cambios stats riv."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Rumia"),
        .description = COMPOUND_STRING("Consume una baya ya usada."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Cortante"),
        .description = COMPOUND_STRING("Pot. Movs. de corte."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("General Supremo"),
    #else
        .name = _("SuprmeOvrlrd"),
    #endif
        .description = COMPOUND_STRING("Rec. fuerza de los caidos."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Unísono"),
        .description = COMPOUND_STRING("Copia camb. stats aliados."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Capa Tóxica"),
        .description = COMPOUND_STRING("Al golp. caen puás tóx."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Cola Armadura"),
        .description = COMPOUND_STRING("Protege de la prioridad."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Geofagia"),
        .description = COMPOUND_STRING("Come tierra para curarse."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Poder Fúngico"),
    #else
        .name = _("MceliumMight"),
    #endif
        .description = COMPOUND_STRING("Movs. de estado no fallan."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitalidad"),
        .description = COMPOUND_STRING("Recupera PS aliados."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Ojo Mental"),
        .description = COMPOUND_STRING("V. lince e Intrépido."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Veloc."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Ataque."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Def. Esp."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Evocarrec."),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Aumenta Defensa."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Cadena Tóxica"),
        .description = COMPOUND_STRING("Movs. pueden envenenar."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Néctar Dulce"),
    #else
        .name = _("SuprswtSyrup"),
    #endif
        .description = COMPOUND_STRING("Baja la evasion rival."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Teracambio"),
        .description = COMPOUND_STRING("Tera. al entrar."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Teracaparazón"),
        .description = COMPOUND_STRING("Res. tipos con PS completo."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Teraform. 0"),
    #else
        .name = _("Teraform Zero"),
    #endif
        .description = COMPOUND_STRING("Elimina clima y terreno."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Títere tóxico"),
    #else
        .name = _("PoisnPuppter"),
    #endif
        .description = COMPOUND_STRING("Confunde si envenena."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },
};
