const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
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
        .description = COMPOUND_STRING("Va subiendo la velocidad."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Armadura batalla"),
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
        .name = _("Velo arena"),
        .description = COMPOUND_STRING("Más evasión en Arena."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Electr. estática"),
        .description = COMPOUND_STRING("Paraliza al contacto."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Absorbe electr."),
        .description = COMPOUND_STRING("Cambia electricidad por PS."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Absorbe agua"),
        .description = COMPOUND_STRING("Convierte agua en PS."),
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
        .name = _("Ojo compuesto"),
        .description = COMPOUND_STRING("Aumenta la precisión."),
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
        .name = _("Cambio color"),
        .description = COMPOUND_STRING("Cambia tipo al ataque rival."),
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
        .name = _("Absorbe fuego"),
        .description = COMPOUND_STRING("Se carga si recibe Fuego."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Polvo escudo"),
        .description = COMPOUND_STRING("Evita efectos secundarios."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Ritmo propio"),
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
        .description = COMPOUND_STRING("Baja el ataque del rival."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Sombra trampa"),
        .description = COMPOUND_STRING("Evita que el enemigo huya."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Piel tosca"),
        .description = COMPOUND_STRING("Hiere al tacto."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Superguarda"),
        .description = COMPOUND_STRING("Solo “super efectivo” le daña."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitación"),
        .description = COMPOUND_STRING("Inmune a Tierra."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Efecto espora"),
        .description = COMPOUND_STRING("Deja esporas al contacto."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Sincronía"),
        .description = COMPOUND_STRING("Transmite cambios de estado."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Cuerpo puro"),
        .description = COMPOUND_STRING("Evita bajón de estadísticas."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Cura natural"),
        .description = COMPOUND_STRING("Se cura al salir."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Pararrayos"),
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
        .name = _("Nado rápido"),
        .description = COMPOUND_STRING("Con lluvia, sube velocidad."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Clorofila"),
        .description = COMPOUND_STRING("Con Sol, sube la velocidad."),
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
        .description = COMPOUND_STRING("Aumenta el ataque."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Punto tóxico"),
        .description = COMPOUND_STRING("Envenena al contacto."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Foco interno"),
        .description = COMPOUND_STRING("Evita el retroceso."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Escudo magma"),
        .description = COMPOUND_STRING("Evita el congelamiento."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Velo agua"),
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
        .name = _("Cura lluvia"),
        .description = COMPOUND_STRING("Sube PS cuando llueve."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Chorro arena"),
        .description = COMPOUND_STRING("Crea Tormenta de Arena."),
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
        .description = COMPOUND_STRING("Despierta rápido."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Cuerpo llama"),
        .description = COMPOUND_STRING("Quema al contacto."),
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
        .name = _("Vista lince"),
        .description = COMPOUND_STRING("Evita que baje precisión."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Corte fuerte"),
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
        .description = COMPOUND_STRING("Interviene cada 2 turnos."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Entusiasmo"),
        .description = COMPOUND_STRING("Cambia precisión por ataque."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Gran encanto"),
        .description = COMPOUND_STRING("Emboba al mínimo contacto."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Más"),
        .description = COMPOUND_STRING("Mejora con habilidad Menos."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Menos"),
        .description = COMPOUND_STRING("Mejora con habilidad Más."),
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
        .description = COMPOUND_STRING("Sube el ataque si sufre."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Escama especial"),
        .description = COMPOUND_STRING("Sube la defensa si sufre."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Lodo líquido"),
        .description = COMPOUND_STRING("En vez de ser drenado, daña."),
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
        .name = _("Mar llamas"),
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
        .name = _("Cabeza roca"),
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
        .name = _("Trampa arena"),
        .description = COMPOUND_STRING("Evita la huida."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Espíritu vital"),
        .description = COMPOUND_STRING("Evita quedarse dormido."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Humo blanco"),
        .description = COMPOUND_STRING("Evita que baje la habilidad."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Energía pura"),
        .description = COMPOUND_STRING("Aumenta el ataque."),
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
        .name = _("Bucle aire"),
        .description = COMPOUND_STRING("Anula los efectos del clima."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tumbos"),
        .description = COMPOUND_STRING("Sube evasión si está confundido."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Electromotor"),
        .description = COMPOUND_STRING("Sube velocidad si recibe Electricidad."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalidad"),
        .description = COMPOUND_STRING("Sube ataque de mismo sexo."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Impasible"),
        .description = COMPOUND_STRING("Retroceder sube velocidad."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Manto níveo"),
        .description = COMPOUND_STRING("Sube evasión en Granizo."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gula"),
        .description = COMPOUND_STRING("Come bayas antes."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Irascible"),
        .description = COMPOUND_STRING("Golpe crítico sube ataque."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Liviano"),
        .description = COMPOUND_STRING("Sube velocidad si usa objeto."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Ignífugo"),
        .description = COMPOUND_STRING("Resiste calor y quemaduras."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("Duplica cambios de estadísticas."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Piel seca"),
        .description = COMPOUND_STRING("Pierde PS si hace calor."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Descarga"),
        .description = COMPOUND_STRING("Ajusta ataque favorablemente."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Puño férreo"),
        .description = COMPOUND_STRING("Potencia puñetazos."),
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
        .description = COMPOUND_STRING("Potencia ataques de mismo tipo."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Encadenado"),
        .description = COMPOUND_STRING("Múltiples golpes aciertan todos."),
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
        .name = _("Poder solar"),
        .description = COMPOUND_STRING("Sube el ataque con Sol."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Pies rápidos"),
        .description = COMPOUND_STRING("Sube velocidad con estado."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalidad"),
        .description = COMPOUND_STRING("Ataques son tipo Normal."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Francotirador"),
        .description = COMPOUND_STRING("Potencia críticos."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Muro mágico"),
        .description = COMPOUND_STRING("Solo se daña por ataques."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Indefenso"),
        .description = COMPOUND_STRING("Todos los ataques aciertan."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Rezagado"),
        .description = COMPOUND_STRING("Ejecuta ataques el último."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Experto"),
        .description = COMPOUND_STRING("Potencia ataques débiles."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Defensa hoja"),
        .description = COMPOUND_STRING("Evita estados con Sol."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Zoquete"),
        .description = COMPOUND_STRING("No puede usar objetos."),
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
        .description = COMPOUND_STRING("Prevé ataques peligrosos."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Alerta"),
        .description = COMPOUND_STRING("Dice ataque rival fuerte."),
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
        .description = COMPOUND_STRING("Potencia ataques no eficaces."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filtro"),
        .description = COMPOUND_STRING("Reduce supereficaces."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Inicio lento"),
        .description = COMPOUND_STRING("Tarda poco en prepararse."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Intrépido"),
        .description = COMPOUND_STRING("Golpea a Fantasmas."),
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
        .name = _("Roca sólida"),
        .description = COMPOUND_STRING("Debilita supereficaces."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Nevada"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Trae Nieve al combate"),
    #else
        .description = COMPOUND_STRING("Trae Granizo al combate"),
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
        .description = COMPOUND_STRING("Potencia ataques de retroceso."),
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
        .name = _("Don floral"),
        .description = COMPOUND_STRING("Se transforma con Sol."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Mal sueño"),
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
        .name = _("Potencia bruta"),
        .description = COMPOUND_STRING("Cambia efecto por potencia."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Respondón"),
        .description = COMPOUND_STRING("Invierte cambios en estadísticas."),
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
        .description = COMPOUND_STRING("Bajón de estadísticas sube ataque."),
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
        .name = _("Cuerpo maldito"),
        .description = COMPOUND_STRING("Anula ataques al contacto."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Alma cura"),
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
        .name = _("Armadura frágil"),
        .description = COMPOUND_STRING("Sube velocidad si sufre daño físico."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Metal pesado"),
        .description = COMPOUND_STRING("Duplica su peso."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Metal liviano"),
        .description = COMPOUND_STRING("Reduce a la mitad su peso."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiescamas"),
        .description = COMPOUND_STRING("Reduce daño si PS 100%."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Ímpetu tóxico"),
        .description = COMPOUND_STRING("Sube ataque si es envenenado."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Ímpetu ardiente"),
        .description = COMPOUND_STRING("Sube ataque si está quemado."),
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
        .description = COMPOUND_STRING("Sube estadística al azar."),
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
        .name = _("Toque tóxico"),
        .description = COMPOUND_STRING("Envenena al contacto."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regeneración"),
        .description = COMPOUND_STRING("Cura al cambio."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Sacapecho"),
        .description = COMPOUND_STRING("Impide bajón de defensa."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Ímpetu arena"),
        .description = COMPOUND_STRING("Sube velocidad con Arena."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Piel milagro"),
        .description = COMPOUND_STRING("Reduce problemas de estado."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Cálculo final"),
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
        .description = COMPOUND_STRING("Debilitar sube el ataque."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justiciero"),
        .description = COMPOUND_STRING("Siniestro sube ataque."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Cobardía"),
        .description = COMPOUND_STRING("Sube velocidad con susto."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Espejo mágico"),
        .description = COMPOUND_STRING("Refleja movientos de estado."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Herbívoro"),
        .description = COMPOUND_STRING("Planta sube ataque."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Bromista"),
        .description = COMPOUND_STRING("Estado tienen prioridad."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Poder arena"),
        .description = COMPOUND_STRING("Sube ataque en Arena."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Punta acero"),
        .description = COMPOUND_STRING("Hiere al contacto."),
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
        .description = COMPOUND_STRING("Sube precisión del equipo."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turbollama"),
        .description = COMPOUND_STRING("Rompe habilidades."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Terravoltaje"),
        .description = COMPOUND_STRING("Rompe habilidades."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Velo aroma"),
        .description = COMPOUND_STRING("Previene límite de ataques."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Velo flor"),
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
        .description = COMPOUND_STRING("Cambia tipo al ataque usado."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Pelaje recio"),
        .description = COMPOUND_STRING("Reduce el daño físico."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Mago"),
        .description = COMPOUND_STRING("Roba objeto rival."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Antibalas"),
        .description = COMPOUND_STRING("Evita algunos proyectiles."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Tenacidad"),
        .description = COMPOUND_STRING("Sube ataque especial si baja estadística."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Mandíbula fuerte"),
        .description = COMPOUND_STRING("Potencia mordiscos."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Piel helada"),
        .description = COMPOUND_STRING("Ataques Normales pasan a Hielo."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Velo dulce"),
        .description = COMPOUND_STRING("Previene sueño de equipo."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Cambio táctico"),
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
        .name = _("Alas vendaval"),
        .description = COMPOUND_STRING("Volador tiene prioridad."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Megadisparador"),
        .description = COMPOUND_STRING("Potencia pulsos."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Manto frondoso"),
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
        .name = _("Garra dura"),
        .description = COMPOUND_STRING("Potencia contacto."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Piel feérica"),
        .description = COMPOUND_STRING("Ataques Normales pasan a Hada."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Baba"),
        .description = COMPOUND_STRING("Baja velocidad al contacto."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Piel celeste"),
        .description = COMPOUND_STRING("Ataques Normales pasan a Volador."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Amor filial"),
        .description = COMPOUND_STRING("Golpea 2 veces."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Aura oscura"),
        .description = COMPOUND_STRING("Potencia Siniestro."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Aura feérica"),
        .description = COMPOUND_STRING("Potencia Hada."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Rompeaura"),
        .description = COMPOUND_STRING("Invierte habilidades de aura."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Mar del Albor"),
        .description = COMPOUND_STRING("Invoca Diluvio."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Tierra del Ocaso"),
        .description = COMPOUND_STRING("Invoca Sol abrasador."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Ráfaga Delta"),
        .description = COMPOUND_STRING("Invoca Turbulencias."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Firmeza"),
        .description = COMPOUND_STRING("Sube defensa con cada golpe."),
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
        .name = _("Retirada"),
        .description = COMPOUND_STRING("Huye a la mitad de PS."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Hidrorrefuerzo"),
        .description = COMPOUND_STRING("Agua potencia defensa."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Ensañamiento"),
        .description = COMPOUND_STRING("Golpe crítico a envenenado."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Escudo limitado"),
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
        .description = COMPOUND_STRING("Duplica daño si cambian."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Pompa"),
        .description = COMPOUND_STRING("Protege de Fuego y quemaduras."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Acero templado"),
        .description = COMPOUND_STRING("Potencia Acero."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Cólera"),
        .description = COMPOUND_STRING("Sube ataque especial si pocos PS."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Quitanieves"),
        .description = COMPOUND_STRING("Sube velocidad en Granizo/Nieve."),
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
        .name = _("Voz fluida"),
        .description = COMPOUND_STRING("Sonido pasa a Agua."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Primer auxilio"),
        .description = COMPOUND_STRING("Curación tiene prioridad."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Piel eléctrica"),
        .description = COMPOUND_STRING("Normal pasa a Eléctrico."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Cola surf"),
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
        .name = _("Fuerte afecto"),
        .description = COMPOUND_STRING("Cambia forma después de KO."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Agrupamiento"),
        .description = COMPOUND_STRING("Células ayudan si está débil."),
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
        .name = _("Letargo perenne"),
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
        .name = _("Regia presencia"),
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
        .name = _("Pareja de baile"),
        .description = COMPOUND_STRING("Copia bailes."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batería"),
        .description = COMPOUND_STRING("Sube ataque especial aliado."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Peluche"),
        .description = COMPOUND_STRING("Sube defensa, débil a fuego."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Cuerpo vívido"),
        .description = COMPOUND_STRING("Protege de prioridad."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Coránima"),
        .description = COMPOUND_STRING("Debilitar sube ataque especial."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Rizos rebeldes"),
        .description = COMPOUND_STRING("Baja velococidad al contacto."),
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
        .name = _("Reacción química"),
        .description = COMPOUND_STRING("Copia habilidad de aliado."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Ultraimpulso"),
        .description = COMPOUND_STRING("KO sube mejor estadística."),
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
        .name = _("Electrogénesis"),
        .description = COMPOUND_STRING("Pone Campo Eléctrico."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psicogénesis"),
        .description = COMPOUND_STRING("Pone Campo Psíquico."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Nebulogénesis"),
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
        .name = _("Guardia metálica"),
        .description = COMPOUND_STRING("Previene reducción de estadísticas."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Guardia espectro"),
        .description = COMPOUND_STRING("Reduce daño si PS 100%."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Armadura prisma"),
        .description = COMPOUND_STRING("Debilita supereficaces."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Fuerza cerebral"),
        .description = COMPOUND_STRING("Potencia supereficaces."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Espada indómita"),
        .description = COMPOUND_STRING("Sube ataque al entrar."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Escudo Recio"),
        .description = COMPOUND_STRING("Sube defensa al entrar."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Líbero"),
        .description = COMPOUND_STRING("Cambia tipo al ataque usado."),
        .aiRating = 8,
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
        .description = COMPOUND_STRING("Baja velocidad al contacto."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Hélice caudal"),
        .description = COMPOUND_STRING("Ignora cambios de posición."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Coraza reflejo"),
        .description = COMPOUND_STRING("Refleja reducción de estadísticas."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Tragamisil"),
        .description = COMPOUND_STRING("Escupe presa si es golpeado."),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Acérrimo"),
        .description = COMPOUND_STRING("Ignora cambios de posición."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Combustible"),
        .description = COMPOUND_STRING("Sube velocidad con Fuego y Agua."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk rock"),
        .description = COMPOUND_STRING("Sube y resiste sonido."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Expulsarena"),
        .description = COMPOUND_STRING("Pone Arena si lo golpean."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Escama de hielo"),
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
        .name = _("Cara de hielo"),
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
        .name = _("Fuente energía"),
        .description = COMPOUND_STRING("Potencia ataques aliados."),
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
        .name = _("Antibarrera"),
        .description = COMPOUND_STRING("Elimina las barreras."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Alma acerada"),
        .description = COMPOUND_STRING("Potencia Acero aliado."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Cuerpo mortal"),
        .description = COMPOUND_STRING("Debilita al rival en 3 turnos."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Alma errante"),
        .description = COMPOUND_STRING("Cambia habilidad al contacto."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Monotema"),
        .description = COMPOUND_STRING("Sube ataque pero solo 1 movimiento."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Gas reactivo"),
        .description = COMPOUND_STRING("Desactiva todas las habilidades."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Velo Pastel"),
        .description = COMPOUND_STRING("Protege equipo del veneno."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Mutapetito"),
        .description = COMPOUND_STRING("Cambia forma cada turno."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Mano rápida"),
        .description = COMPOUND_STRING("A veces se mueve primero."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Puño invisible"),
        .description = COMPOUND_STRING("Evade protección física."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Medicina extraña"),
        .description = COMPOUND_STRING("Anula cambios de estadísticas en equipo."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Potencia Eléctricidad."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Mandíbula dragón"),
        .description = COMPOUND_STRING("Sube ataques Dragón."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Relincho blanco"),
        .description = COMPOUND_STRING("KOs suben ataque."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Relincho negro"),
        .description = COMPOUND_STRING("KOs suben ataque especial."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("Unidad ecuestre"),
        .description = COMPOUND_STRING("Nerviosismo + Relincho negro."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("Unidad ecuestre"),
        .description = COMPOUND_STRING("Nerviosismo + Relincho blanco."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Olor persistente"),
        .description = COMPOUND_STRING("Se propaga con contacto."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Disemillar"),
        .description = COMPOUND_STRING("Cambia terreno al ser golpeado."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Termoconversión"),
        .description = COMPOUND_STRING("El fuego aumenta el ataque."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Coraza ira"),
        .description = COMPOUND_STRING("Se enfada a mitad de PS."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Sal purificadora"),
        .description = COMPOUND_STRING("Protección de sales puras."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Cuerpo horneado"),
        .description = COMPOUND_STRING("Aumenta defensa si recibe fuego."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Surcavientos"),
        .description = COMPOUND_STRING("Volador aumenta el ataque."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Perro guardián"),
        .description = COMPOUND_STRING("Imposible de intimidar."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Transportarrocas"),
        .description = COMPOUND_STRING("Potencia Roca."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Energía eólica"),
        .description = COMPOUND_STRING("Recupera energía con Volador."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Cambio heroico"),
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
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Dinamo"),
        .description = COMPOUND_STRING("Se recarga al contacto."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Paleosíntesis"),
        .description = COMPOUND_STRING("Sol sube mejor estadística."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Carga cuark"),
        .description = COMPOUND_STRING("Campo elécrico sube mejor estadística."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Cuerpo áureo"),
        .description = COMPOUND_STRING("Evita movimientos de estado."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Caldero debacle"),
        .description = COMPOUND_STRING("Reduce ataque especial rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Espada debacle"),
        .description = COMPOUND_STRING("Reduce defensa rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Tablilla debacle"),
        .description = COMPOUND_STRING("Reduce ataque rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Abalorio debacle"),
        .description = COMPOUND_STRING("Reduce defensa especial rival."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Latido oricalco"),
        .description = COMPOUND_STRING("Invoca el Sol en combate."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Motor hadrónico"),
        .description = COMPOUND_STRING("Pone campo eléctrico y potencia."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Oportunista"),
        .description = COMPOUND_STRING("Copia cambios de estadísticas rivales."),
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
        .description = COMPOUND_STRING("Potencia cortes."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("General supremo"),
        .description = COMPOUND_STRING("Recupera fuerza de caídos."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Unísono"),
        .description = COMPOUND_STRING("Copia cambios aliados de estadísticas."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Capa tóxica"),
        .description = COMPOUND_STRING("Al golpear, caen puás tóxicas."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Cola armadura"),
        .description = COMPOUND_STRING("Protege de la prioridad."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Geofagia"),
        .description = COMPOUND_STRING("Come Tierra para curarse."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Poder fúngico"),
        .description = COMPOUND_STRING("Movimientos de estado no fallan."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitalidad"),
        .description = COMPOUND_STRING("Recupera PS de aliados."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Ojo mental"),
        .description = COMPOUND_STRING("Vista lince + Intrépido."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Evocarrecuerdos"),
        .description = COMPOUND_STRING("Aumenta velocidad"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Evocarrecuerdos"),
        .description = COMPOUND_STRING("Aumenta ataque."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Evocarrecuerdos"),
        .description = COMPOUND_STRING("Aumenta defensa especial."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Evocarrecuerdos"),
        .description = COMPOUND_STRING("Aumenta defensa."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Cadena tóxica"),
        .description = COMPOUND_STRING("Ataques pueden envenenar."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Néctar dulce"),
        .description = COMPOUND_STRING("Baja la evasion rival."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Teracambio"),
        .description = COMPOUND_STRING("Teracristaliza al entrar."),
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
        .description = COMPOUND_STRING("Si PS al 100%, resiste ataques."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Teraformación 0"),
        .description = COMPOUND_STRING("Elimina clima y terreno."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Títere tóxico"),
        .description = COMPOUND_STRING("Confunde si envenena."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },
};
