#if I_EXPANDED_ITEM_NAMES == TRUE
#define HANDLE_EXPANDED_ITEM_NAME(_name, ...) _(DEFAULT(_name, __VA_ARGS__))
#else
#define HANDLE_EXPANDED_ITEM_NAME(_name, ...) _(_name)
#endif

#if I_USE_EVO_HELD_ITEMS_FROM_BAG == TRUE
    #define EVO_HELD_ITEM_TYPE ITEM_USE_PARTY_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_EvolutionStone
#else
    #define EVO_HELD_ITEM_TYPE ITEM_USE_BAG_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_CannotUse
#endif

#define GEM_BOOST_PARAM ((I_GEM_BOOST_POWER >= GEN_6) ? 30 : 50)
#define TYPE_BOOST_PARAM ((I_TYPE_BOOST_POWER >= GEN_4) ? 20 : 10) // For non Pokémon-specific type-boosting held items.
#define POWER_ITEM_BOOST ((I_POWER_ITEM_BOOST >= GEN_7) ? 8 : 4)

#define X_ITEM_STAGES ((B_X_ITEMS_BUFF >= GEN_7) ? 2 : 1)

#define TREASURE_FACTOR ((I_SELL_VALUE_FRACTION >= GEN_9) ? 2 : 1)

// Shared Item Description entries

static const u8 sFullHealDesc[]       = _("Cura todos los\n"
                                          "problemas de estado de\n"
                                          "un Pokémon.");

static const u8 sPokeDollDesc[]       = _("Usar para huir de\n"
                                          "cualquier batalla con\n"
                                          "un Pokémon salvaje.");

static const u8 sMaxReviveDesc[]      = _("Revive a un Pokémon\n"
                                          "debilitado con todos\n"
                                          "sus PS.");

static const u8 sHealthFeatherDesc[]  = _("Un objeto que aumenta\n"
                                          "los PS base de\n"
                                          "un Pokémon.");

static const u8 sMuscleFeatherDesc[]  = _("Un objeto que aumenta\n"
                                          "el Ataque base de\n"
                                          "un Pokémon.");

static const u8 sResistFeatherDesc[]  = _("Un objeto que aumenta\n"
                                          "la Defensa base de\n"
                                          "un Pokémon.");

static const u8 sGeniusFeatherDesc[]  = _("Un objeto que aumenta\n"
                                          "el Ataque Especial\n"
                                          "base de un Pokémon.");

static const u8 sCleverFeatherDesc[]  = _("Un objeto que aumenta\n"
                                          "la Defensa Especial\n"
                                          "base de un Pokémon.");

static const u8 sSwiftFeatherDesc[]   = _("Un objeto que aumenta\n"
                                          "la Velocidad base de\n"
                                          "un Pokémon.");

static const u8 sBigMushroomDesc[]    = _("Un hongo raro que\n"
                                          "se vendería a un\n"
                                          "precio alto.");

static const u8 sShardsDesc[]         = _("Un fragmento de un\n"
                                          "objeto antiguo. Se\n"
                                          "puede vender a bajo precio.");

static const u8 sRootFossilDesc[]     = _("Un fósil de un\n"
                                          "Pokémon antiguo\n"
                                          "que vivía en el fondo del mar.");

static const u8 sFossilizedFishDesc[] = _("Un fósil de un\n"
                                          "Pokémon antiguo\n"
                                          "que vivía en el mar.");

static const u8 sBeadMailDesc[]       = _("Carta con un\n"
                                          "dibujo del Pokémon\n"
                                          "que lo sostiene.");

static const u8 sEvolutionStoneDesc[] = _("Hace evolucionar a\n"
                                          "ciertas especies de Pokémon.");

static const u8 sNectarDesc[]         = _("Néctar de flor que\n"
                                          "cambia la forma de\n"
                                          "ciertos Pokémon.");

static const u8 sCharizarditeDesc[]   = _("Esta piedra permite\n"
                                          "a Charizard Megaevolucionar en batalla.");

static const u8 sMewtwoniteDesc[]     = _("Esta piedra permite\n"
                                          "a Mewtwo Megaevolucionar en batalla.");

static const u8 sSeaIncenseDesc[]     = _("Un objeto que se lleva\n"
                                          "puesto y aumenta\n"
                                          "levemente el poder de los movimientos de tipo Agua.");

static const u8 sOddIncenseDesc[]     = _("Un objeto que se lleva\n"
                                          "puesto y aumenta el\n"
                                          "poder de los movimientos de tipo Psíquico.");

static const u8 sRockIncenseDesc[]    = _("Un objeto que se lleva\n"
                                          "puesto y aumenta el\n"
                                          "poder de los movimientos de tipo Roca.");

static const u8 sFullIncenseDesc[]    = _("Un objeto que se lleva\n"
                                          "puesto y hace que el\n"
                                          "portador se mueva más lentamente.");

static const u8 sRoseIncenseDesc[]    = _("Un objeto que se lleva\n"
                                          "puesto y aumenta el\n"
                                          "poder de los movimientos de tipo Planta.");

static const u8 sLuckIncenseDesc[]    = _("Duplica el dinero en\n"
                                          "batalla si el portador\n"
                                          "participa.");

static const u8 sPureIncenseDesc[]    = _("Un objeto que se lleva\n"
                                          "puesto y ayuda a\n"
                                          "rechazar a los Pokémon salvajes.");

static const u8 sKingsRockDesc[]      = _("Un objeto que se lleva\n"
                                          "puesto y puede hacer\n"
                                          "que el objetivo retroceda al ser alcanzado.");

static const u8 sFigyBerryDesc[]      = _("Un objeto que se lleva\n"
                                          "puesto y restaura PS,\n"
                                          "pero puede causar confusión.");

static const u8 sQuestionMarksDesc[]  = _("?????");

static const u8 sKeyToRoomDesc[]      = _("Una llave que abre una\n"
                                          "puerta dentro del\n"
                                          "Barco Abandonado.");

static const u8 sTeraShardDesc[]      = _("Estos fragmentos pueden\n"
                                          "formarse cuando un\n"
                                          "Pokémon Tera se desmaya.");

static const u8 sGenericMulchDesc[]   = _("Un fertilizante que\n"
                                          "no es adecuado para\n"
                                          "el suelo local.");

const struct Item gItemsInfo[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .price = 0,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_QuestionMark,
        .iconPalette = gItemIconPalette_QuestionMark,
    },

// Poké Balls

    [ITEM_POKE_BALL] =
    {
        .name = _("Poké Ball"),
        .price = 200,
        .description = COMPOUND_STRING("Herramienta para\n"
                                       "capturar Pokémon\n"
                                       "salvajes."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POKE_BALL - FIRST_BALL,
        .iconPic = gItemIcon_PokeBall,
        .iconPalette = gItemIconPalette_PokeBall,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = _("Super Ball"),
        .price = 600,
        .description = COMPOUND_STRING("Buena para atrapar\n"
                                       "Pokémon con mayor\n"
                                       "índice de captura."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_GREAT_BALL - FIRST_BALL,
        .iconPic = gItemIcon_GreatBall,
        .iconPalette = gItemIconPalette_GreatBall,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = _("Ultra Ball"),
        .price = (I_PRICE >= GEN_7) ? 800 : 1200,
        .description = COMPOUND_STRING(
            "Mejor para atrapar\n"
            "Pokémon con mayor\n"
            "índice de captura."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_ULTRA_BALL - FIRST_BALL,
        .iconPic = gItemIcon_UltraBall,
        .iconPalette = gItemIconPalette_UltraBall,
    },

    [ITEM_MASTER_BALL] =
    {
        .name = _("Master Ball"),
        .price = 0,
        .description = COMPOUND_STRING("La mejor para\n"
                                       "atrapar Pokémon\n"
                                       "sin fallar."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_MASTER_BALL - FIRST_BALL,
        .iconPic = gItemIcon_MasterBall,
        .iconPalette = gItemIconPalette_MasterBall,
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = _("Honor Ball"),
        .price = (I_PRICE >= GEN_7) ? 20 : 200,
        .description = COMPOUND_STRING("Rara, creada en\n"
                                       "conmemoración de\n"
                                       "algún evento."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_PREMIER_BALL - FIRST_BALL,
        .iconPic = gItemIcon_PremierBall,
        .iconPalette = gItemIconPalette_LuxuryBall,
    },

    [ITEM_HEAL_BALL] =
{
    .name = _("Sana Ball"),
    .price = 300,
    .description = COMPOUND_STRING(
        "Una Poké Ball que\n"
        "cura al Pokémon\n"
        "atrapado."),
    .pocket = POCKET_POKE_BALLS,
    .type = ITEM_USE_BAG_MENU,
    .battleUsage = EFFECT_ITEM_THROW_BALL,
    .secondaryId = ITEM_HEAL_BALL - FIRST_BALL,
    .iconPic = gItemIcon_HealBall,
    .iconPalette = gItemIconPalette_HealBall,
},

[ITEM_NET_BALL] =
{
    .name = _("Malla Ball"),
    .price = 1000,
    .description = COMPOUND_STRING(
        "Funciona bien\n"
        "con Pokémon de\n"
        "tipo Agua y Bicho."),
    .pocket = POCKET_POKE_BALLS,
    .type = ITEM_USE_BAG_MENU,
    .battleUsage = EFFECT_ITEM_THROW_BALL,
    .secondaryId = ITEM_NET_BALL - FIRST_BALL,
    .iconPic = gItemIcon_NetBall,
    .iconPalette = gItemIconPalette_NetBall,
},

[ITEM_NEST_BALL] =
{
    .name = _("Nido Ball"),
    .price = 1000,
    .description = COMPOUND_STRING(
        "Una Poké Ball que\n"
        "funciona mejor con\n"
        "Pokémon más débiles."),
    .pocket = POCKET_POKE_BALLS,
    .type = ITEM_USE_BAG_MENU,
    .battleUsage = EFFECT_ITEM_THROW_BALL,
    .secondaryId = ITEM_NEST_BALL - FIRST_BALL,
    .iconPic = gItemIcon_NestBall,
    .iconPalette = gItemIconPalette_NestBall,
},

[ITEM_DIVE_BALL] =
{
    .name = _("Buceo Ball"),
    .price = 1000,
    .description = COMPOUND_STRING(
        "Funciona mejor\n"
        "con Pokémon del\n"
        "fondo del mar."),
    .pocket = POCKET_POKE_BALLS,
    .type = ITEM_USE_BAG_MENU,
    .battleUsage = EFFECT_ITEM_THROW_BALL,
    .secondaryId = ITEM_DIVE_BALL - FIRST_BALL,
    .iconPic = gItemIcon_DiveBall,
    .iconPalette = gItemIconPalette_DiveBall,
},


    [ITEM_DUSK_BALL] =
    {
        .name = _("Ocaso Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Funciona bien en\n"
            "lugares oscuros."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_DUSK_BALL - FIRST_BALL,
        .iconPic = gItemIcon_DuskBall,
        .iconPalette = gItemIconPalette_DuskBall,
    },

    [ITEM_TIMER_BALL] =
    {
        .name = _("Turno Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Aumenta efectividad\n"
            "con el paso de los\n"
            "turnos."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_TIMER_BALL - FIRST_BALL,
        .iconPic = gItemIcon_TimerBall,
        .iconPalette = gItemIconPalette_RepeatBall,
    },

    [ITEM_QUICK_BALL] =
    {
        .name = _("Veloz Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Funciona genial si\n"
            "es el primer turno."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_QUICK_BALL - FIRST_BALL,
        .iconPic = gItemIcon_QuickBall,
        .iconPalette = gItemIconPalette_QuickBall,
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = _("Acopio Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Funciona mejor si\n"
            "ya habías capturado\n"
            "a ese Pokémon."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_REPEAT_BALL - FIRST_BALL,
        .iconPic = gItemIcon_RepeatBall,
        .iconPalette = gItemIconPalette_RepeatBall,
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = _("Lujo Ball"),
        .price = (I_PRICE >= GEN_8) ? 3000 : 1000,
        .description = COMPOUND_STRING(
            "Es acogedora, y hace\n"
            "a los Pokémon más\n"
            "amigables."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LUXURY_BALL - FIRST_BALL,
        .iconPic = gItemIcon_LuxuryBall,
        .iconPalette = gItemIconPalette_LuxuryBall,
    },

    [ITEM_LEVEL_BALL] =
    {
        .name = _("Nivel Ball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Funciona mejor con\n"
            "Pokémon de nivel\n"
            "bajo."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LEVEL_BALL - FIRST_BALL,
        .iconPic = gItemIcon_LevelBall,
        .iconPalette = gItemIconPalette_LevelBall,
    },

    [ITEM_LURE_BALL] =
    {
        .name = _("Cebo Ball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Está diseñada\n"
            "especialmente para\n"
            "pescar."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LURE_BALL - FIRST_BALL,
        .iconPic = gItemIcon_LureBall,
        .iconPalette = gItemIconPalette_LureBall,
    },

    [ITEM_MOON_BALL] =
    {
        .name = _("Luna Ball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Diseñada para\n"
            "Pokémon que aman\n"
            "la Piedra Lunar."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_MOON_BALL - FIRST_BALL,
        .iconPic = gItemIcon_MoonBall,
        .iconPalette = gItemIconPalette_MoonBall,
    },

    [ITEM_FRIEND_BALL] =
    {
        .name = _("Amigo Ball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Hace a los Pokémon\n"
            "más amigables al\n"
            "capturarlos."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_FRIEND_BALL - FIRST_BALL,
        .iconPic = gItemIcon_FriendBall,
        .iconPalette = gItemIconPalette_FriendBall,
    },

    [ITEM_LOVE_BALL] =
    {
        .name = _("Amor Ball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Funciona mejor si el\n"
            "Pokémon es de género\n"
            "opuesto."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LOVE_BALL - FIRST_BALL,
        .iconPic = gItemIcon_LoveBall,
        .iconPalette = gItemIconPalette_LoveBall,
    },

    [ITEM_FAST_BALL] =
    {
        .name = _("Rapid Ball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Funciona mejor en\n"
            "Pokémon que sean\n"
            "veloces."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_FAST_BALL - FIRST_BALL,
        .iconPic = gItemIcon_FastBall,
        .iconPalette = gItemIconPalette_FastBall,
    },

    [ITEM_HEAVY_BALL] =
    {
        .name = _("Peso Ball"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Diseñada para\n"
            "capturar Pokémon\n"
            "muy pesados."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_HEAVY_BALL - FIRST_BALL,
        .iconPic = gItemIcon_HeavyBall,
        .iconPalette = gItemIconPalette_HeavyBall,
    },

    [ITEM_DREAM_BALL] =
    {
        .name = _("Ensueño Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
        #if B_DREAM_BALL_MODIFIER >= GEN_8
            "Funciona mejor si el\n"
            "Pokémon duerme."),
        #else
            "A Poké Ball used in\n"
            "the Entree Forest."),
        #endif
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_DREAM_BALL - FIRST_BALL,
        .iconPic = gItemIcon_DreamBall,
        .iconPalette = gItemIconPalette_DreamBall,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = _("Safari Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Poké Ball especial\n"
            "de la Zona Safari.\n"
            "No se usa fuera."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_SAFARI_BALL - FIRST_BALL,
        .iconPic = gItemIcon_SafariBall,
        .iconPalette = gItemIconPalette_SafariBall,
    },

    [ITEM_SPORT_BALL] =
    {
        .name = _("Competi Ball"),
        .price = (I_PRICE < GEN_3 || I_PRICE >= GEN_9) ? 0 : 300,
        .description = COMPOUND_STRING(
            "Se usa solo en el\n"
            "Concurso Cazabichos."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_SPORT_BALL - FIRST_BALL,
        .iconPic = gItemIcon_SportBall,
        .iconPalette = gItemIconPalette_SportBall,
    },

    [ITEM_PARK_BALL] =
    {
        .name = _("Parque Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Poké Ball especial\n"
            "del Parque Compi."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_PARK_BALL - FIRST_BALL,
        .iconPic = gItemIcon_ParkBall,
        .iconPalette = gItemIconPalette_ParkBall,
    },

    [ITEM_BEAST_BALL] =
    {
        .name = _("Ente Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Diseñada para\n"
            "cazar Ultra Entes."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_BEAST_BALL - FIRST_BALL,
        .iconPic = gItemIcon_BeastBall,
        .iconPalette = gItemIconPalette_BeastBall,
    },

    [ITEM_CHERISH_BALL] =
    {
        .name = _("Gloria Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Poké Ball rara que\n"
            "se creó para\n"
            "conmemorar algo."),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_CHERISH_BALL - FIRST_BALL,
        .iconPic = gItemIcon_CherishBall,
        .iconPalette = gItemIconPalette_CherishBall,
    },

// Medicine

    [ITEM_POTION] =
{
    .name = _("Poción"),
    .price = (I_PRICE >= GEN_7) ? 200 : 300,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Restaura PS de\n"
        "un Pokémon en\n"
        "20 puntos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_Potion,
    .flingPower = 30,
    .iconPic = gItemIcon_Potion,
    .iconPalette = gItemIconPalette_Potion,
},

[ITEM_SUPER_POTION] =
{
    .name = _("Superpoción"),
    .price = 700,
    .holdEffectParam = 60,
    .description = COMPOUND_STRING(
        "Restaura PS de\n"
        "un Pokémon en\n"
    #if I_HEALTH_RECOVERY >= GEN_7
        "60 puntos."),
    #else
        "50 puntos."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_SuperPotion,
    .flingPower = 30,
    .iconPic = gItemIcon_Potion,
    .iconPalette = gItemIconPalette_SuperPotion,
},

[ITEM_HYPER_POTION] =
{
    .name = _("Hiperpoción"),
    .price = (I_PRICE >= GEN_2 && I_PRICE <= GEN_6) ? 1200 : 1500,
    .holdEffectParam = 120,
    .description = COMPOUND_STRING(
        "Restaura PS de\n"
        "un Pokémon en\n"
    #if I_HEALTH_RECOVERY >= GEN_7
        "120 puntos."),
    #else
        "200 puntos."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_HyperPotion,
    .flingPower = 30,
    .iconPic = gItemIcon_Potion,
    .iconPalette = gItemIconPalette_HyperPotion,
},

[ITEM_MAX_POTION] =
{
    .name = _("Maxipoción"),
    .price = 2500,
    .holdEffectParam = 255,
    .description = COMPOUND_STRING(
        "Restaura totalmente\n"
        "PS de un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_MaxPotion,
    .flingPower = 30,
    .iconPic = gItemIcon_LargePotion,
    .iconPalette = gItemIconPalette_MaxPotion,
},

[ITEM_FULL_RESTORE] =
{
    .name = _("Restaurar todo"),
    .price = 3000,
    .holdEffectParam = 255,
    .description = COMPOUND_STRING(
        "Restaura totalmente\n"
        "los PS y el estado de\n"
        "un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_HEAL_AND_CURE_STATUS,
    .effect = gItemEffect_FullRestore,
    .flingPower = 30,
    .iconPic = gItemIcon_LargePotion,
    .iconPalette = gItemIconPalette_FullRestore,
},

[ITEM_REVIVE] =
{
    .name = _("Revivir"),
    .price = (I_PRICE >= GEN_7) ? 2000 : 1500,
    .description = COMPOUND_STRING(
        "Revive a un Pokémon\n"
        "derrotado con 50%\n"
        "de sus PS."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_REVIVE,
    .effect = gItemEffect_Revive,
    .flingPower = 30,
    .iconPic = gItemIcon_Revive,
    .iconPalette = gItemIconPalette_Revive,
},

[ITEM_MAX_REVIVE] =
{
    .name = _("Revivir máx."),
    .price = 4000,
    .description = sMaxReviveDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_REVIVE,
    .effect = gItemEffect_MaxRevive,
    .flingPower = 30,
    .iconPic = gItemIcon_MaxRevive,
    .iconPalette = gItemIconPalette_Revive,
},

[ITEM_FRESH_WATER] =
{
    .name = _("Agua fresca"),
    .price = 200,
    .holdEffectParam = 30,
    .description = COMPOUND_STRING(
        "Un agua mineral\n"
        "que restaura PS\n"
    #if I_HEALTH_RECOVERY >= GEN_7
        "en 30 puntos."),
    #else
        "en 50 puntos."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_FreshWater,
    .flingPower = 30,
    .iconPic = gItemIcon_FreshWater,
    .iconPalette = gItemIconPalette_FreshWater,
},

[ITEM_SODA_POP] =
{
    .name = _("Soda"),
    .price = 300,
    .holdEffectParam = 50,
    .description = COMPOUND_STRING(
        "Una bebida gaseosa\n"
        "que restaura PS\n"
    #if I_HEALTH_RECOVERY >= GEN_7
        "en 50 puntos."),
    #else
        "en 60 puntos."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_SodaPop,
    .flingPower = 30,
    .iconPic = gItemIcon_SodaPop,
    .iconPalette = gItemIconPalette_SodaPop,
},

    [ITEM_LEMONADE] =
{
    .name = _("Limonada"),
    .price = (I_PRICE >= GEN_7) ? 400 : 350,
    .holdEffectParam = 70,
#if I_HEALTH_RECOVERY >= GEN_7
    .description = COMPOUND_STRING(
        "Una bebida muy dulce\n"
        "que restaura PS\n"
        "en 70 puntos."),
#else
    .description = COMPOUND_STRING(
        "Una bebida muy dulce\n"
        "que restaura PS\n"
        "en 80 puntos."),
#endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_Lemonade,
    .flingPower = 30,
    .iconPic = gItemIcon_Lemonade,
    .iconPalette = gItemIconPalette_Lemonade,
},

[ITEM_MOOMOO_MILK] =
{
    .name = _("Leche Moomoo"),
    .pluralName = _("Leche Moomoo"),
    .price = (I_PRICE >= GEN_7) ? 600 : 500,
    .holdEffectParam = 100,
    .description = COMPOUND_STRING(
        "Una leche nutritiva\n"
        "que restaura PS\n"
        "en 100 puntos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_MoomooMilk,
    .flingPower = 30,
    .iconPic = gItemIcon_MoomooMilk,
    .iconPalette = gItemIconPalette_MoomooMilk,
},

[ITEM_ENERGY_POWDER] =
{
    .name = _("Polvo energía"),
    .pluralName = _("Polvos energía"),
    .price = 500,
    .description = COMPOUND_STRING(
        "Un polvo amargo\n"
        "que restaura PS\n"
    #if I_HEALTH_RECOVERY >= GEN_7
        "en 60 puntos."),
    #else
        "en 50 puntos."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_EnergyPowder,
    .flingPower = 30,
    .iconPic = gItemIcon_Powder,
    .iconPalette = gItemIconPalette_EnergyPowder,
},

[ITEM_ENERGY_ROOT] =
{
    .name = _("Raíz Energía"),
    .price = (I_PRICE >= GEN_7) ? 1200 : 800,
    .description = COMPOUND_STRING(
        "Una raíz amarga\n"
        "que restaura PS\n"
    #if I_HEALTH_RECOVERY >= GEN_7
        "en 120 puntos."),
    #else
        "en 200 puntos."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_EnergyRoot,
    .flingPower = 30,
    .iconPic = gItemIcon_EnergyRoot,
    .iconPalette = gItemIconPalette_EnergyRoot,
},

[ITEM_HEAL_POWDER] =
{
    .name = _("Polvo curación"),
    .price = (I_PRICE >= GEN_7) ? 300 : 450,
    .description = COMPOUND_STRING(
        "Un polvo amargo\n"
        "que cura todos los\n"
        "problemas de estado."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_HealPowder,
    .flingPower = 30,
    .iconPic = gItemIcon_Powder,
    .iconPalette = gItemIconPalette_HealPowder,
},

[ITEM_REVIVAL_HERB] =
{
    .name = _("Hierba rev."),
    .price = 2800,
    .description = COMPOUND_STRING(
        "Hierba muy amarga\n"
        "que revive a un\n"
        "Pokémon derrotado."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_REVIVE,
    .effect = gItemEffect_RevivalHerb,
    .flingPower = 30,
    .iconPic = gItemIcon_RevivalHerb,
    .iconPalette = gItemIconPalette_RevivalHerb,
},

[ITEM_ANTIDOTE] =
{
    .name = _("Antídoto"),
    .price = (I_PRICE >= GEN_7) ? 200 : 100,
    .description = COMPOUND_STRING(
        "Cura a un Pokémon\n"
        "envenenado."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_Antidote,
    .flingPower = 30,
    .iconPic = gItemIcon_Antidote,
    .iconPalette = gItemIconPalette_Antidote,
},

    [ITEM_PARALYZE_HEAL] =
{
    .name = _("Antiparaliz"),
    .price = (I_PRICE == GEN_7) ? 300 : 200,
    .description = COMPOUND_STRING(
        "Cura a un Pokémon\n"
        "paralizado."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_ParalyzeHeal,
    .flingPower = 30,
    .iconPic = gItemIcon_StatusHeal,
    .iconPalette = gItemIconPalette_ParalyzeHeal,
},

[ITEM_BURN_HEAL] =
{
    .name = _("Antiquemar"),
    .price = (I_PRICE == GEN_7) ? 300 : ((I_PRICE <= GEN_7) ? 250 : 200),
    .description = COMPOUND_STRING(
        "Cura al Pokémon\n"
        "de una quemadura."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_BurnHeal,
    .flingPower = 30,
    .iconPic = gItemIcon_StatusHeal,
    .iconPalette = gItemIconPalette_BurnHeal,
},

[ITEM_ICE_HEAL] =
{
    .name = _("Antihielo"),
    .price = (I_PRICE == GEN_7) ? 100 : ((I_PRICE <= GEN_7) ? 250 : 200),
    .description = COMPOUND_STRING(
        "Descongela a un Pokémon\n"
        "congelado."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_IceHeal,
    .flingPower = 30,
    .iconPic = gItemIcon_StatusHeal,
    .iconPalette = gItemIconPalette_IceHeal,
},

[ITEM_AWAKENING] =
{
    .name = _("Despertar"),
    .price = (I_PRICE >= GEN_2 && I_PRICE <= GEN_6) ? 250 : ((I_PRICE == GEN_7) ? 100 : 200),
    .description = COMPOUND_STRING(
        "Despierta a un Pokémon\n"
        "dormido."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_Awakening,
    .flingPower = 30,
    .iconPic = gItemIcon_StatusHeal,
    .iconPalette = gItemIconPalette_Awakening,
},

[ITEM_FULL_HEAL] =
{
    .name = _("Cura total"),
    .price = (I_PRICE >= GEN_7) ? 400 : 600,
    .description = sFullHealDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_FullHeal,
    .flingPower = 30,
    .iconPic = gItemIcon_FullHeal,
    .iconPalette = gItemIconPalette_FullHeal,
},

[ITEM_ETHER] =
{
    .name = _("Éter"),
    .price = (I_PRICE >= GEN_2) ? 1200 : 1,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Restaura los PP\n"
        "de un movimiento\n"
        "en 10."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU_MOVES,
    .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
    .battleUsage = EFFECT_ITEM_RESTORE_PP,
    .effect = gItemEffect_Ether,
    .flingPower = 30,
    .iconPic = gItemIcon_Ether,
    .iconPalette = gItemIconPalette_Ether,
},

[ITEM_MAX_ETHER] =
{
    .name = _("Max éter"),
    .price = (I_PRICE >= GEN_2) ? 2000 : 1,
    .holdEffectParam = 255,
    .description = COMPOUND_STRING(
        "Restaura por completo\n"
        "los PP de un movimiento."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU_MOVES,
    .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
    .battleUsage = EFFECT_ITEM_RESTORE_PP,
    .effect = gItemEffect_MaxEther,
    .flingPower = 30,
    .iconPic = gItemIcon_Ether,
    .iconPalette = gItemIconPalette_MaxEther,
},

[ITEM_ELIXIR] =
{
    .name = _("Elixir"),
    .price = (I_PRICE >= GEN_2) ? 3000 : 1,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Restaura los PP\n"
        "de todos los movimientos\n"
        "en 10."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
    .battleUsage = EFFECT_ITEM_RESTORE_PP,
    .effect = gItemEffect_Elixir,
    .flingPower = 30,
    .iconPic = gItemIcon_Ether,
    .iconPalette = gItemIconPalette_Elixir,
},

[ITEM_MAX_ELIXIR] =
{
    .name = _("Max elixir"),
    .price = (I_PRICE >= GEN_2) ? 4500 : 1,
    .holdEffectParam = 255,
    .description = COMPOUND_STRING(
        "Restaura por completo\n"
        "los PP de los movimientos\n"
        "de un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
    .battleUsage = EFFECT_ITEM_RESTORE_PP,
    .effect = gItemEffect_MaxElixir,
    .flingPower = 30,
    .iconPic = gItemIcon_Ether,
    .iconPalette = gItemIconPalette_MaxElixir,
},

[ITEM_BERRY_JUICE] =
{
    .name = _("Zumo de Baya"),
    .pluralName = _("Jugos de Baya"),
    .price = 100,
    .holdEffect = HOLD_EFFECT_RESTORE_HP,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Un jugo 100% puro\n"
        "que restaura PS\n"
        "en 20 puntos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_Potion,
    .flingPower = 30,
    .iconPic = gItemIcon_BerryJuice,
    .iconPalette = gItemIconPalette_BerryJuice,
},

[ITEM_SACRED_ASH] =
{
    .name = _("Ceniza sag."),
    .pluralName = _("Ceniza Sagrada"),
    .price = (I_PRICE >= GEN_7) ? 50000 : 200,
    .description = COMPOUND_STRING(
        "Revive por completo y\n"
        "restaura a todos\n"
        "los Pokémon derrotados."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
    .effect = gItemEffect_SacredAsh,
    .flingPower = 30,
    .iconPic = gItemIcon_SacredAsh,
    .iconPalette = gItemIconPalette_SacredAsh,
},

[ITEM_SWEET_HEART] =
{
    .name = _("Corazón dulce"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 100,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Un dulce de chocolate\n"
        "que restaura PS\n"
        "en 20 puntos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_Potion,
    .flingPower = 30,
    .iconPic = gItemIcon_SweetHeart,
    .iconPalette = gItemIconPalette_SweetHeart,
},

[ITEM_MAX_HONEY] =
{
    .name = _("Maxipanal"),
    .pluralName = _("Maxipanal"),
    .price = 8000,
    .description = sMaxReviveDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_REVIVE,
    .effect = gItemEffect_MaxRevive,
    .flingPower = 30,
    .iconPic = gItemIcon_MaxHoney,
    .iconPalette = gItemIconPalette_MaxHoney,
},

// Regional Specialties

    [ITEM_PEWTER_CRUNCHIES] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Rokikos"),
        .pluralName = HANDLE_EXPANDED_ITEM_NAME("Rokikos"),
        .price = 250,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_PewterCrunchies,
        .iconPalette = gItemIconPalette_PewterCrunchies,
    },

    [ITEM_RAGE_CANDY_BAR] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Caram. furia", "Caramelo furia"),
        .price = (I_PRICE >= GEN_7) ? 350 : 300,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_RageCandyBar,
        .iconPalette = gItemIconPalette_RageCandyBar,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = _("Galleta lava"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = COMPOUND_STRING(
            "A local specialty\n"
            "that heals all\n"
            "status problems."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_LavaCookie,
        .iconPalette = gItemIconPalette_LavaCookieAndLetter,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = _("Barrita plus"),
        .pluralName = _("Barrita plus"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_OldGateau,
        .iconPalette = gItemIconPalette_OldGateau,
    },

    [ITEM_CASTELIACONE] =
    {
        .name = _("Porcehelado"),
        .price = (I_PRICE >= GEN_7) ? 350 : 100,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_Casteliacone,
        .iconPalette = gItemIconPalette_Casteliacone,
    },

    [ITEM_LUMIOSE_GALETTE] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Luminicola", "Luminicola"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_LumioseGalette,
        .iconPalette = gItemIconPalette_LumioseGalette,
    },

    [ITEM_SHALOUR_SABLE] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Gall. Yantra", "Galleta Yantra"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_ShalourSable,
        .iconPalette = gItemIconPalette_ShalourSable,
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = _("Maxi malasada"),
        .price = 350,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_BigMalasada,
        .iconPalette = gItemIconPalette_BigMalasada,
    },

// Vitamins

    [ITEM_HP_UP] =
{
    .name = _("Más PS"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
    .description = COMPOUND_STRING(
        "Aumenta PS base\n"
        "de un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_HPUp,
    .flingPower = 30,
    .iconPic = gItemIcon_HPUp,
    .iconPalette = gItemIconPalette_HPUp,
},

[ITEM_PROTEIN] =
{
    .name = _("Proteína"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
    .description = COMPOUND_STRING(
        "Aumenta el estad.\n"
        "base de Ataque de un\n"
        "Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_Protein,
    .flingPower = 30,
    .iconPic = gItemIcon_Vitamin,
    .iconPalette = gItemIconPalette_Protein,
},

[ITEM_IRON] =
{
    .name = _("Hierro"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
    .description = COMPOUND_STRING(
        "Aumenta el estad.\n"
        "base de Defensa de\n"
        "un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_Iron,
    .flingPower = 30,
    .iconPic = gItemIcon_Vitamin,
    .iconPalette = gItemIconPalette_Iron,
},

[ITEM_CALCIUM] =
{
    .name = _("Calcio"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
    .description = COMPOUND_STRING(
        "Aumenta el estad.\n"
        "base de Sp. Atk de un\n"
        "Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_Calcium,
    .flingPower = 30,
    .iconPic = gItemIcon_Vitamin,
    .iconPalette = gItemIconPalette_Calcium,
},

[ITEM_ZINC] =
{
    .name = _("Zinc"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
    .description = COMPOUND_STRING(
        "Aumenta el estad.\n"
        "base de Sp. Def de\n"
        "un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_Zinc,
    .flingPower = 30,
    .iconPic = gItemIcon_Vitamin,
    .iconPalette = gItemIconPalette_Zinc,
},

[ITEM_CARBOS] =
{
    .name = _("Carburante"),
    .pluralName = _("Carburantes"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
    .description = COMPOUND_STRING(
        "Aumenta el estad.\n"
        "base de Velocidad de\n"
        "un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_Carbos,
    .flingPower = 30,
    .iconPic = gItemIcon_Vitamin,
    .iconPalette = gItemIconPalette_Carbos,
},

[ITEM_PP_UP] =
{
    .name = _("Más PP"),
    .price = (I_PRICE == GEN_1) ? 1 : ((I_PRICE >= GEN_7) ? 10000 : 9800),
    .description = COMPOUND_STRING(
        "Aumenta el máximo\n"
        "de PP de un movimiento."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    .effect = gItemEffect_PPUp,
    .flingPower = 30,
    .iconPic = gItemIcon_PPUp,
    .iconPalette = gItemIconPalette_PPUp,
},

[ITEM_PP_MAX] =
{
    .name = _("Máx. PP"),
    .pluralName = _("PP Máx."),
    .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
    .description = COMPOUND_STRING(
        "Aumenta los PP de un\n"
        "movimiento al máximo."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    .effect = gItemEffect_PPMax,
    .flingPower = 30,
    .iconPic = gItemIcon_PPMax,
    .iconPalette = gItemIconPalette_PPMax,
},

// EV Feathers

    [ITEM_HEALTH_FEATHER] =
{
    .name = _("Pluma vigor"),
    .price = (I_PRICE >= GEN_7) ? 300 : 3000,
    .description = sHealthFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_HpFeather,
    .flingPower = 20,
    .iconPic = gItemIcon_HealthFeather,
    .iconPalette = gItemIconPalette_HealthFeather,
},

[ITEM_MUSCLE_FEATHER] =
{
    .name = _("Pluma músculo"),
    .price = (I_PRICE >= GEN_7) ? 300 : 3000,
    .description = sMuscleFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_AtkFeather,
    .flingPower = 20,
    .iconPic = gItemIcon_MuscleFeather,
    .iconPalette = gItemIconPalette_MuscleFeather,
},

[ITEM_RESIST_FEATHER] =
{
    .name = _("Pluma aguante"),
    .price = (I_PRICE >= GEN_7) ? 300 : 3000,
    .description = sResistFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_DefFeather,
    .flingPower = 20,
    .iconPic = gItemIcon_ResistFeather,
    .iconPalette = gItemIconPalette_ResistFeather,
},

[ITEM_GENIUS_FEATHER] =
{
    .name = _("Pluma inte."),
    .price = (I_PRICE >= GEN_7) ? 300 : 3000,
    .description = sGeniusFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_SpatkFeather,
    .flingPower = 20,
    .iconPic = gItemIcon_GeniusFeather,
    .iconPalette = gItemIconPalette_GeniusFeather,
},

[ITEM_CLEVER_FEATHER] =
{
    .name = _("Pluma mente"),
    .price = (I_PRICE >= GEN_7) ? 300 : 3000,
    .description = sCleverFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_SpdefFeather,
    .flingPower = 20,
    .iconPic = gItemIcon_CleverFeather,
    .iconPalette = gItemIconPalette_CleverFeather,
},

[ITEM_SWIFT_FEATHER] =
{
    .name = _("Pluma ímpetu"),
    .price = (I_PRICE >= GEN_7) ? 300 : 3000,
    .description = sSwiftFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_SpeedFeather,
    .flingPower = 20,
    .iconPic = gItemIcon_SwiftFeather,
    .iconPalette = gItemIconPalette_SwiftFeather,
},

// Ability Modifiers

    [ITEM_ABILITY_CAPSULE] =
{
    .name = _("Cápsula hab."),
    .price = (I_PRICE < GEN_7) ? 1000 : ((I_PRICE < GEN_9) ? 10000 : 100000),
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Cambia la habilidad\n"
        "de un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
    .iconPic = gItemIcon_AbilityCapsule,
    .iconPalette = gItemIconPalette_AbilityCapsule,
},

[ITEM_ABILITY_PATCH] =
{
    .name = _("Parche hab."),
    .pluralName = _("Parche habilidad"),
    .price = (I_PRICE >= GEN_9) ? 250000 : 20,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Convierte la habilidad\n"
        "de un Pokémon en\n"
        "una habilidad rara."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_AbilityPatch,
    .iconPic = gItemIcon_AbilityPatch,
    .iconPalette = gItemIconPalette_AbilityPatch,
},

// Mints

    [ITEM_LONELY_MINT] =
{
    .name = _("Menta huraña"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Ataque, pero\n"
        "reduce la Defensa."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_LONELY,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_RedMint,
},

[ITEM_ADAMANT_MINT] =
{
    .name = _("Menta firme"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Ataque, pero\n"
        "reduce el Sp. Atk."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_ADAMANT,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_RedMint,
},

[ITEM_NAUGHTY_MINT] =
{
    .name = _("Menta pícara"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Ataque, pero\n"
        "reduce el Sp. Def."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_NAUGHTY,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_RedMint,
},

[ITEM_BRAVE_MINT] =
{
    .name = _("Menta audaz"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Ataque, pero\n"
        "reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_BRAVE,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_RedMint,
},

[ITEM_BOLD_MINT] =
{
    .name = _("Menta osada"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Defensa, pero\n"
        "reduce el Ataque."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_BOLD,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_BlueMint,
},

[ITEM_IMPISH_MINT] =
{
    .name = _("Menta agitada"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Defensa, pero\n"
        "reduce el Sp. Atk."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_IMPISH,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_BlueMint,
},

[ITEM_LAX_MINT] =
{
    .name = _("Menta floja"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Defensa, pero\n"
        "reduce el Sp. Def."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_LAX,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_BlueMint,
},

[ITEM_RELAXED_MINT] =
{
    .name = _("Menta Relajada"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Defensa, pero\n"
        "reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_RELAXED,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_BlueMint,
},

[ITEM_MODEST_MINT] =
{
    .name = _("Menta modesta"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Atk, pero\n"
        "reduce el Ataque."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_MODEST,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_LightBlueMint,
},

[ITEM_MILD_MINT] =
{
    .name = _("Menta afable"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Atk, pero\n"
        "reduce la Defensa."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_MILD,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_LightBlueMint,
},

[ITEM_RASH_MINT] =
{
    .name = _("Menta alocada"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Atk, pero\n"
        "reduce el Sp. Def."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_RASH,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_LightBlueMint,
},

[ITEM_QUIET_MINT] =
{
    .name = _("Menta mansa"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Atk, pero\n"
        "reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_QUIET,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_LightBlueMint,
},

[ITEM_CALM_MINT] =
{
    .name = _("Menta serena"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Def, pero\n"
        "reduce el Ataque."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_CALM,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_PinkMint,
},

[ITEM_GENTLE_MINT] =
{
    .name = _("Menta amable"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Def, pero\n"
        "reduce la Defensa."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_GENTLE,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_PinkMint,
},

[ITEM_CAREFUL_MINT] =
{
    .name = _("Menta grosera"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Def, pero\n"
        "reduce el Sp. Atk."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_CAREFUL,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_PinkMint,
},

[ITEM_SASSY_MINT] =
{
    .name = _("Menta grosera"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "el Sp. Def, pero\n"
        "reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_SASSY,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_PinkMint,
},

[ITEM_TIMID_MINT] =
{
    .name = _("Menta miedosa"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Velocidad, pero\n"
        "reduce el Ataque."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_TIMID,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_GreenMint,
},

[ITEM_HASTY_MINT] =
{
    .name = _("Menta activa"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Velocidad, pero\n"
        "reduce la Defensa."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_HASTY,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_GreenMint,
},

[ITEM_JOLLY_MINT] =
{
    .name = _("Menta alegre"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Velocidad, pero\n"
        "reduce el Sp. Atk."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_JOLLY,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_GreenMint,
},

[ITEM_NAIVE_MINT] =
{
    .name = _("Menta ingenua"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Aumenta\n"
        "la Velocidad, pero\n"
        "reduce el Sp. Def."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_NAIVE,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_GreenMint,
},

[ITEM_SERIOUS_MINT] =
{
    .name = _("Menta seria"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 20,
    .description = COMPOUND_STRING(
        "Se puede oler. Hace\n"
        "que cada estadística\n"
        "aumente por igual."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Mint,
    .secondaryId = NATURE_SERIOUS,
    .flingPower = 10,
    .iconPic = gItemIcon_Mint,
    .iconPalette = gItemIconPalette_YellowMint,
},

// Candy

    [ITEM_RARE_CANDY] =
{
    .name = _("Caramelo Raro"),
    .pluralName = _("Caramelos Raros"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 4800,
    .description = COMPOUND_STRING(
        "Aumenta el nivel\n"
        "de un Pokémon en\n"
        "uno."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    .effect = gItemEffect_RareCandy,
    .flingPower = 30,
    .iconPic = gItemIcon_RareCandy,
    .iconPalette = gItemIconPalette_RareCandy,
},

[ITEM_EXP_CANDY_XS] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. XS", "Caram. Exp. XS"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. XS", "Caram. Exp. XS"),
    .price = 20,
    .holdEffectParam = EXP_100,
    .description = COMPOUND_STRING(
        "Otorga una cantidad\n"
        "muy pequeña de Exp.\n"
        "a un solo Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    .effect = gItemEffect_RareCandy,
    .flingPower = 30,
    .iconPic = gItemIcon_ExpCandyXS,
    .iconPalette = gItemIconPalette_ExpCandies,
},

[ITEM_EXP_CANDY_S] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. S", "Caram. Exp. S"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. S", "Caram. Exp. S"),
    .price = 240,
    .holdEffectParam = EXP_800,
    .description = COMPOUND_STRING(
        "Otorga una cantidad\n"
        "pequeña de Exp. a\n"
        "un solo Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    .effect = gItemEffect_RareCandy,
    .flingPower = 30,
    .iconPic = gItemIcon_ExpCandyS,
    .iconPalette = gItemIconPalette_ExpCandies,
},

[ITEM_EXP_CANDY_M] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. M", "Caram. Exp. M"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. M", "Caram. Exp. M"),
    .price = 1000,
    .holdEffectParam = EXP_3000,
    .description = COMPOUND_STRING(
        "Otorga una cantidad\n"
        "moderada de Exp. a\n"
        "un solo Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    .effect = gItemEffect_RareCandy,
    .flingPower = 30,
    .iconPic = gItemIcon_ExpCandyM,
    .iconPalette = gItemIconPalette_ExpCandies,
},

[ITEM_EXP_CANDY_L] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. L", "Caram. Exp. L"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. L", "Caram. Exp. L"),
    .price = 3000,
    .holdEffectParam = EXP_10000,
    .description = COMPOUND_STRING(
        "Otorga una cantidad\n"
        "grande de Exp. a\n"
        "un solo Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    .effect = gItemEffect_RareCandy,
    .flingPower = 30,
    .iconPic = gItemIcon_ExpCandyL,
    .iconPalette = gItemIconPalette_ExpCandies,
},

[ITEM_EXP_CANDY_XL] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. XL", "Caram. Exp. XL"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("Caram. Exp. XL", "Caram. Exp. XL"),
    .price = 10000,
    .holdEffectParam = EXP_30000,
    .description = COMPOUND_STRING(
        "Otorga una cantidad\n"
        "muy grande de Exp.\n"
        "a un solo Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    .effect = gItemEffect_RareCandy,
    .flingPower = 30,
    .iconPic = gItemIcon_ExpCandyXL,
    .iconPalette = gItemIconPalette_ExpCandies,
},

[ITEM_DYNAMAX_CANDY] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Caram. Dynamax", "Caram. Dynamax"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("Caram. Dynamax", "Caram. Dynamax"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Aumenta el Nivel\n"
        "Dynamax de un solo\n"
        "Pokémon en uno."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_DynamaxCandy,
    .flingPower = 30,
    .iconPic = gItemIcon_DynamaxCandy,
    .iconPalette = gItemIconPalette_DynamaxCandy,
},

// Medicinal Flutes

    [ITEM_BLUE_FLUTE] =
{
    .name = _("Flauta Azul"),
    .price = (I_PRICE >= GEN_7) ? 20 : 100,
    .description = COMPOUND_STRING(
        "Una flauta de vidrio\n"
        "que despierta a los\n"
        "Pokémon dormidos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_Awakening,
    .flingPower = 30,
    .iconPic = gItemIcon_Flute,
    .iconPalette = gItemIconPalette_BlueFlute,
},

[ITEM_YELLOW_FLUTE] =
{
    .name = _("Flauta Amarilla"),
    .price = (I_PRICE >= GEN_7) ? 20 : 300,
    .description = COMPOUND_STRING(
        "Una flauta de vidrio\n"
        "que elimina la\n"
        "confusión de los Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_YellowFlute,
    .flingPower = 30,
    .iconPic = gItemIcon_Flute,
    .iconPalette = gItemIconPalette_YellowFlute,
},

[ITEM_RED_FLUTE] =
{
    .name = _("Flauta Roja"),
    .price = (I_PRICE >= GEN_7) ? 20 : 200,
    .description = COMPOUND_STRING(
        "Una flauta de vidrio\n"
        "que elimina la\n"
        "atracción de los Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .effect = gItemEffect_RedFlute,
    .flingPower = 30,
    .iconPic = gItemIcon_Flute,
    .iconPalette = gItemIconPalette_RedFlute,
},

// Encounter-modifying Flutes

    [ITEM_BLACK_FLUTE] =
{
    .name = _("Flauta Negra"),
    .price = (I_PRICE >= GEN_7) ? 20 : 400,
    .holdEffectParam = 50,
    .description = COMPOUND_STRING(
        "Una flauta de vidrio\n"
        "que ahuyenta a los\n"
        "Pokémon salvajes."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    .flingPower = 30,
    .iconPic = gItemIcon_Flute,
    .iconPalette = gItemIconPalette_BlackFlute,
},

[ITEM_WHITE_FLUTE] =
{
    .name = _("Flauta Blanca"),
    .price = (I_PRICE >= GEN_7) ? 20 : 500,
    .holdEffectParam = 150,
    .description = COMPOUND_STRING(
        "Una flauta de vidrio\n"
        "que atrae a los\n"
        "Pokémon salvajes."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    .flingPower = 30,
    .iconPic = gItemIcon_Flute,
    .iconPalette = gItemIconPalette_WhiteFlute,
},

// Encounter Modifiers

    [ITEM_REPEL] =
{
    .name = _("Repelente"),
    .price = (I_PRICE >= GEN_7) ? 400 : 350,
    .holdEffectParam = 100,
    .description = COMPOUND_STRING(
        "Repelente para Pokémon\n"
        "salvajes débiles por\n"
        "100 pasos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Repel,
    .flingPower = 30,
    .iconPic = gItemIcon_Repel,
    .iconPalette = gItemIconPalette_Repel,
},

[ITEM_SUPER_REPEL] =
{
    .name = _("Super Repel"),
    .price = (I_PRICE >= GEN_7) ? 700 : 500,
    .holdEffectParam = 200,
    .description = COMPOUND_STRING(
        "Repelente para Pokémon\n"
        "salvajes débiles por\n"
        "200 pasos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Repel,
    .flingPower = 30,
    .iconPic = gItemIcon_Repel,
    .iconPalette = gItemIconPalette_SuperRepel,
},

[ITEM_MAX_REPEL] =
{
    .name = _("Máx Repel"),
    .price = (I_PRICE >= GEN_7) ? 900 : 700,
    .holdEffectParam = 250,
    .description = COMPOUND_STRING(
        "Repelente para Pokémon\n"
        "salvajes débiles por\n"
        "250 pasos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Repel,
    .flingPower = 30,
    .iconPic = gItemIcon_Repel,
    .iconPalette = gItemIconPalette_MaxRepel,
},

[ITEM_LURE] =
{
    .name = _("Cebo"),
    .price = 400,
    .holdEffectParam = 100,
    .description = COMPOUND_STRING(
        "Hace que los Pokémon\n"
        "sean más propensos a\n"
        "aparecer por 100 pasos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Lure,
    .secondaryId = 0,
    .flingPower = 30,
    .iconPic = gItemIcon_Lure,
    .iconPalette = gItemIconPalette_Lure,
},

[ITEM_SUPER_LURE] =
{
    .name = _("Super Cebo"),
    .price = 700,
    .holdEffectParam = 200,
    .description = COMPOUND_STRING(
        "Hace que los Pokémon\n"
        "sean más propensos a\n"
        "aparecer por 200 pasos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Lure,
    .secondaryId = 0,
    .flingPower = 30,
    .iconPic = gItemIcon_Lure,
    .iconPalette = gItemIconPalette_SuperLure,
},

[ITEM_MAX_LURE] =
{
    .name = _("Maxi Cebo"),
    .price = 900,
    .holdEffectParam = 250,
    .description = COMPOUND_STRING(
        "Hace que los Pokémon\n"
        "sean más propensos a\n"
        "aparecer por 250 pasos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Lure,
    .secondaryId = 0,
    .flingPower = 30,
    .iconPic = gItemIcon_Lure,
    .iconPalette = gItemIconPalette_MaxLure,
},

[ITEM_ESCAPE_ROPE] =
{
    .name = _("Cuerda Huida"),
    .description = COMPOUND_STRING(
        "Úsala para escapar\n"
        "instantáneamente de\n"
        "una cueva o un calabozo."),
    #if I_KEY_ESCAPE_ROPE >= GEN_8
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
    #else
        .price = (I_PRICE >= GEN_7) ? 1000 : 550,
        .pocket = POCKET_ITEMS,
    #endif
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
    .flingPower = 30,
    .iconPic = gItemIcon_EscapeRope,
    .iconPalette = gItemIconPalette_EscapeRope,
},

// X Items

    [ITEM_X_ATTACK] =
{
    .name = _("Ataque X"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 500,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
    #if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "el stat Ataque durante\n"
        "una batalla."),
    #else
        "Aumenta el stat\n"
        "Ataque durante una\n"
        "batalla."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    .effect = gItemEffect_XAttack,
    .flingPower = 30,
    .iconPic = gItemIcon_BattleStatItem,
    .iconPalette = gItemIconPalette_XAttack,
},

[ITEM_X_DEFENSE] =
{
    .name = _("Defensa X"),
    .price = (I_PRICE >= GEN_7) ? 2000 : 550,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
    #if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "el stat Defensa durante\n"
        "una batalla."),
    #else
        "Aumenta el stat\n"
        "Defensa durante una\n"
        "batalla."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    .effect = gItemEffect_XDefense,
    .flingPower = 30,
    .iconPic = gItemIcon_BattleStatItem,
    .iconPalette = gItemIconPalette_XDefend,
},

[ITEM_X_SP_ATK] =
{
    .name = _("Atq. Esp. X"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 350,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
    #if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "el stat Atq. Esp. durante\n"
        "una batalla."),
    #else
        "Aumenta el stat\n"
        "Atq. Esp. durante una\n"
        "batalla."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    .effect = gItemEffect_XSpecialAttack,
    .flingPower = 30,
    .iconPic = gItemIcon_BattleStatItem,
    .iconPalette = gItemIconPalette_XSpecial,
},

[ITEM_X_SP_DEF] =
{
    .name = _("Def. Esp. X"),
    .price = (I_PRICE >= GEN_7) ? 2000 : 350,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
    #if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "el stat Def. Esp. durante\n"
        "una batalla."),
    #else
        "Aumenta el stat\n"
        "Def. Esp. durante una\n"
        "batalla."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    .effect = gItemEffect_XSpecialDefense,
    .flingPower = 30,
    .iconPic = gItemIcon_XSpecialDefense,
    .iconPalette = gItemIconPalette_XSpecialDefense,
},

[ITEM_X_SPEED] =
{
    .name = _("Veloc. X"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 350,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
    #if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "el stat Velocidad durante\n"
        "una batalla."),
    #else
        "Aumenta el stat\n"
        "Velocidad durante una\n"
        "batalla."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    .effect = gItemEffect_XSpeed,
    .flingPower = 30,
    .iconPic = gItemIcon_BattleStatItem,
    .iconPalette = gItemIconPalette_XSpeed,
},

[ITEM_X_ACCURACY] =
{
    .name = _("Precisión X"),
    .pluralName = _("X Precisiones"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 950,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
    #if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente la\n"
        "precisión de los movimientos\n"
        "durante una batalla."),
    #else
        "Aumenta la precisión\n"
        "de los movimientos de ataque\n"
        "durante una batalla."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_INCREASE_STAT,
    .effect = gItemEffect_XAccuracy,
    .flingPower = 30,
    .iconPic = gItemIcon_BattleStatItem,
    .iconPalette = gItemIconPalette_XAccuracy,
},

[ITEM_DIRE_HIT] =
{
    .name = _("Directo"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 650,
    .description = COMPOUND_STRING(
        "Aumenta el ratio de\n"
        "golpes críticos durante\n"
        "una batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_SET_FOCUS_ENERGY,
    .effect = gItemEffect_DireHit,
    .flingPower = 30,
    .iconPic = gItemIcon_BattleStatItem,
    .iconPalette = gItemIconPalette_DireHit,
},

[ITEM_GUARD_SPEC] =
{
    .name = _("Guardia Esp."),
    .pluralName = _("Guardias Esp."),
    .price = (I_PRICE >= GEN_7) ? 1500 : 700,
    .description = COMPOUND_STRING(
        "Previene la reducción\n"
        "de stats cuando se usa\n"
        "en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_SET_MIST,
    .effect = gItemEffect_GuardSpec,
    .flingPower = 30,
    .iconPic = gItemIcon_BattleStatItem,
    .iconPalette = gItemIconPalette_GuardSpec,
},

[ITEM_POKE_DOLL] =
{
    .name = _("Poké Muñeco"),
    .price = (I_PRICE < GEN_7) ? 1000 : ((I_PRICE == GEN_7) ? 100 : 300),
    .description = sPokeDollDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_ESCAPE,
    .flingPower = 30,
    .iconPic = gItemIcon_PokeDoll,
    .iconPalette = gItemIconPalette_PokeDoll,
},

[ITEM_FLUFFY_TAIL] =
{
    .name = _("Cola Skitty"),
    .price = (I_PRICE >= GEN_7) ? 100 : 1000,
    .description = sPokeDollDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_ESCAPE,
    .flingPower = 30,
    .iconPic = gItemIcon_FluffyTail,
    .iconPalette = gItemIconPalette_FluffyTail,
},

[ITEM_POKE_TOY] =
{
    .name = _("Pokéseñuelo"),
    .price = (I_PRICE >= GEN_7) ? 100 : 1000,
    .description = sPokeDollDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_ESCAPE,
    .flingPower = 30,
    .iconPic = gItemIcon_PokeToy,
    .iconPalette = gItemIconPalette_PokeToy,
},

[ITEM_MAX_MUSHROOMS] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("MaxMushrooms", "Setas Max"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("MaxMushrooms", "Setas Max"),
    .price = 8000,
    .description = COMPOUND_STRING(
        "Aumenta todos los stats\n"
        "durante una batalla\n"
        "en un nivel."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .battleUsage = EFFECT_ITEM_INCREASE_ALL_STATS,
    .flingPower = 30,
    .iconPic = gItemIcon_MaxMushrooms,
    .iconPalette = gItemIconPalette_MaxMushrooms,
},

// Treasures

        [ITEM_BOTTLE_CAP] =
    {
        .name = _("Chapa plata"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 5000,
        .description = COMPOUND_STRING(
            "Una hermosa tapa de\n"
            "botella que brilla\n"
            "con un resplandor plateado."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BottleCap,
        .iconPalette = gItemIconPalette_BottleCap,
    },

    [ITEM_GOLD_BOTTLE_CAP] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Chapa oro", "Chapa de oro"),
        .price = (I_PRICE >= GEN_9) ? 60000 : 10000,
        .description = COMPOUND_STRING(
            "Una hermosa tapa de\n"
            "botella que brilla\n"
            "con un resplandor dorado."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BottleCap,
        .iconPalette = gItemIconPalette_GoldBottleCap,
    },

    [ITEM_NUGGET] =
    {
        .name = _("Pepita"),
        .price = 10000 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Una pepita de oro\n"
            "puro. Se puede vender\n"
            "a un alto precio."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Nugget,
        .iconPalette = gItemIconPalette_Nugget,
    },

    [ITEM_BIG_NUGGET] =
    {
        .name = _("Maxipepita"),
        .price = (I_PRICE >= GEN_7) ? (40000 * TREASURE_FACTOR) : 20000,
        .description = COMPOUND_STRING(
            "Una gran pepita de oro,\n"
            "vendible a un alto\n"
            "precio."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 130,
        .iconPic = gItemIcon_BigNugget,
        .iconPalette = gItemIconPalette_BigNugget,
    },

    [ITEM_TINY_MUSHROOM] =
    {
        .name = _("Seta Pequeña"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Una seta común\n"
            "que se vendería\n"
            "a un precio bajo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_TinyMushroom,
        .iconPalette = gItemIconPalette_Mushroom,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = _("Seta Grande"),
        .price = 5000 * TREASURE_FACTOR,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BigMushroom,
        .iconPalette = gItemIconPalette_Mushroom,
    },

    [ITEM_BALM_MUSHROOM] =
    {
        .name = _("Seta aroma"),
        .price = (I_PRICE >= GEN_7) ? 15000 * TREASURE_FACTOR : 12500,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BalmMushroom,
        .iconPalette = gItemIconPalette_BalmMushroom,
    },

    [ITEM_PEARL] =
    {
        .name = _("Perla"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 1400,
        .description = COMPOUND_STRING(
            "Una hermosa perla\n"
            "que se vendería\n"
            "a un precio bajo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Pearl,
        .iconPalette = gItemIconPalette_Pearl,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = _("Perla Grande"),
        .price = (I_PRICE >= GEN_7) ? 8000 * TREASURE_FACTOR : 7500,
        .description = COMPOUND_STRING(
            "Una hermosa perla\n"
            "grande que se vendería\n"
            "a un precio alto."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BigPearl,
        .iconPalette = gItemIconPalette_Pearl,
    },

    [ITEM_PEARL_STRING] =
    {
        .name = _("Cadena perlas"),
        .price = (I_PRICE >= GEN_8) ? 15000 * TREASURE_FACTOR : ((I_PRICE == GEN_7) ? 30000 : 15000),
        .description = COMPOUND_STRING(
            "Cadenas de perlas\n"
            "que se venderían\n"
            "a un precio alto."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_PearlString,
        .iconPalette = gItemIconPalette_PearlString,
    },

    [ITEM_STARDUST] =
    {
        .name = _("Polvoestelar"),
        .pluralName = _("Polvo Estelar"),
        .price = (I_PRICE >= GEN_7) ? 3000 * TREASURE_FACTOR : 2000,
        .description = COMPOUND_STRING(
            "Hermosa arena roja.\n"
            "Se puede vender a un\n"
            "alto precio."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Stardust,
        .iconPalette = gItemIconPalette_Star,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = _("Pieza estelar"),
        .price = (I_PRICE >= GEN_7) ? 12000 * TREASURE_FACTOR : 9800,
        .description = COMPOUND_STRING(
            "Un fragmento de gema\n"
            "roja. Se vendería a\n"
            "un precio muy alto."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_StarPiece,
        .iconPalette = gItemIconPalette_Star,
    },

    [ITEM_COMET_SHARD] =
    {
        .name = _("Frag. Cometa"),
        .price = (I_PRICE <= GEN_5) ? 0 : ((I_PRICE == GEN_6) ? 30000 : ((I_PRICE == GEN_7) ? 60000 : 25000 * TREASURE_FACTOR)),
        .description = COMPOUND_STRING(
            "Un fragmento de cometa.\n"
            "Se vendería a un\n"
            "alto precio."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_CometShard,
        .iconPalette = gItemIconPalette_CometShard,
    },

    [ITEM_SHOAL_SALT] =
    {
        .name = _("Sal Cardumen"),
        .pluralName = _("Sales Cardumen"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Sal obtenida de\n"
            "lo profundo de la\n"
            "Cueva Shoal."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Powder,
        .iconPalette = gItemIconPalette_ShoalSalt,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = _("C. Cardumen"),
        .pluralName = _("Concha Cardumen"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Una concha obtenida\n"
            "de lo profundo de\n"
            "la Cueva Shoal."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ShoalShell,
        .iconPalette = gItemIconPalette_Shell,
    },

    [ITEM_RED_SHARD] =
    {
        .name = _("Frag. Rojo"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Un fragmento rojo\n"
            "que puede ser\n"
            "intercambiado en la\n"
            "Cueva Fragmentada."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_RedShard,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = _("Frag. Azul"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Un fragmento azul\n"
            "que puede ser\n"
            "intercambiado en la\n"
            "Cueva Fragmentada."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_BlueShard,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = _("Frag. Verde"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Un fragmento verde\n"
            "que puede ser\n"
            "intercambiado en la\n"
            "Cueva Fragmentada."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_GreenShard,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = _("Frag. Amar"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Un fragmento amarillo\n"
            "que puede ser\n"
            "intercambiado en la\n"
            "Cueva Fragmentada."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_Shard,
        .iconPalette = gItemIconPalette_YellowShard,
    },

[ITEM_RELIC_SILVER] =
{
    .name = _("Plata Antigua"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una moneda de plata\n"
        "usada hace mucho.\n"
        "Se vende a un alto precio."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_RelicCoin,
    .iconPalette = gItemIconPalette_RelicSilver,
},

[ITEM_RELIC_GOLD] =
{
    .name = _("Oro Antiguo"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una moneda de oro\n"
        "usada hace mucho.\n"
        "Se vende a un alto precio."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_RelicCoin,
    .iconPalette = gItemIconPalette_RelicGold,
},

[ITEM_RELIC_VASE] =
{
    .name = _("Jarrón Antiguo"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Un jarrón hecho hace\n"
        "mucho tiempo. Se vende\n"
        "a un alto precio."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_RelicVase,
    .iconPalette = gItemIconPalette_Relics,
},

[ITEM_RELIC_BAND] =
{
    .name = _("Banda Antigua"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una pulsera antigua.\n"
        "Se vende a un alto\n"
        "precio."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_RelicBand,
    .iconPalette = gItemIconPalette_Relics,
},

[ITEM_RELIC_STATUE] =
{
    .name = _("Estatua Antigua"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una estatua antigua.\n"
        "Se vende a un alto\n"
        "precio."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_RelicStatue,
    .iconPalette = gItemIconPalette_Relics,
},

[ITEM_RELIC_CROWN] =
{
    .name = _("Corona Antigua"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una corona antigua.\n"
        "Se vende a un alto\n"
        "precio."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_RelicCrown,
    .iconPalette = gItemIconPalette_Relics,
},

[ITEM_STRANGE_SOUVENIR] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Souv. Extraño", "Souv. Extraño"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 10,
    .description = COMPOUND_STRING(
        "Un adorno que\n"
        "representa a un Pokémon\n"
        "de Alola."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_StrangeSouvenir,
    .iconPalette = gItemIconPalette_StrangeSouvenir,
},



// Fossils

        [ITEM_HELIX_FOSSIL] =
    {
        .name = _("Fósil Helix"),
        .description = COMPOUND_STRING(
            "Un fragmento de una\n"
            "concha de un antiguo\n"
            "Pokémon marino."),
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_HelixFossil,
        .iconPalette = gItemIconPalette_KantoFossil,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = _("Fósil Domo"),
        .description = COMPOUND_STRING(
            "Un fragmento de una\n"
            "concha de un antiguo\n"
            "Pokémon marino."),
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_DomeFossil,
        .iconPalette = gItemIconPalette_KantoFossil,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = _("Ámbar viejo"),
        .description = COMPOUND_STRING(
            "Una piedra que contiene\n"
            "los genes de un antiguo\n"
            "Pokémon."),
        #if I_KEY_FOSSILS >= GEN_4
            .price = 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_OldAmber,
        .iconPalette = gItemIconPalette_OldAmber,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = _("Fósil raíz"),
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_RootFossil,
        .iconPalette = gItemIconPalette_HoennFossil,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = _("Fósil garra"),
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_ClawFossil,
        .iconPalette = gItemIconPalette_HoennFossil,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
        .name = _("Fósil arm."),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "Un fragmento de la\n"
            "cabeza de un Pokémon\n"
            "prehistórico."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_ArmorFossil,
        .iconPalette = gItemIconPalette_ArmorFossil,
    },

    [ITEM_SKULL_FOSSIL] =
    {
        .name = _("Fósil cráneo"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "Un fragmento del\n"
            "collar de un Pokémon\n"
            "prehistórico."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_SkullFossil,
        .iconPalette = gItemIconPalette_SkullFossil,
    },

    [ITEM_COVER_FOSSIL] =
    {
        .name = _("Fósil cub."),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "Un fragmento de la\n"
            "espalda de un Pokémon\n"
            "prehistórico."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_CoverFossil,
        .iconPalette = gItemIconPalette_CoverFossil,
    },

    [ITEM_PLUME_FOSSIL] =
    {
        .name = _("Fósil pluma"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "Un fragmento del\n"
            "ala de un Pokémon\n"
            "prehistórico."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_PlumeFossil,
        .iconPalette = gItemIconPalette_PlumeFossil,
    },

    [ITEM_JAW_FOSSIL] =
    {
        .name = _("Fósil mand."),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "Un fragmento de la\n"
            "gran mandíbula de un\n"
            "Pokémon prehistórico."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_JawFossil,
        .iconPalette = gItemIconPalette_JawFossil,
    },

    [ITEM_SAIL_FOSSIL] =
    {
        .name = _("Fósil aleta"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "Un fragmento de la\n"
            "vela de piel de un\n"
            "Pokémon prehistórico."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_SailFossil,
        .iconPalette = gItemIconPalette_SailFossil,
    },

    [ITEM_FOSSILIZED_BIRD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Fósil ave", "Fósil ave"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "Un fósil de un\n"
            "Pokémon antiguo que\n"
            "volaba por el cielo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedBird,
        .iconPalette = gItemIconPalette_FossilizedBird,
    },

    [ITEM_FOSSILIZED_FISH] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Fósil pez", "Fósil pez"),
        .pluralName = HANDLE_EXPANDED_ITEM_NAME("Fósil pez", "Fósil peces"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedFish,
        .iconPalette = gItemIconPalette_FossilizedFish,
    },

    [ITEM_FOSSILIZED_DRAKE] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Fósil draco", "Fósil draco"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "Un fósil de un Pokémon\n"
            "antiguo que vagaba por\n"
            "la tierra."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedDrake,
        .iconPalette = gItemIconPalette_FossilizedDrake,
    },

    [ITEM_FOSSILIZED_DINO] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Fósil plesio", "Fósil plesio"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_FossilizedDino,
        .iconPalette = gItemIconPalette_FossilizedDino,
    },

// Mulch

        [ITEM_GROWTH_MULCH] =
    {
        .name = _("Abono rápido"),
        .pluralName = _("Abono rápido"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante que\n"
            "acelera el\n"
            "crecimiento de las Berries."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GROWTH_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_GrowthMulch,
    },

    [ITEM_DAMP_MULCH] =
    {
        .name = _("Abono lento"),
        .pluralName = _("Abono lento"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante que\n"
            "retrasa el\n"
            "crecimiento de las Berries."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_DAMP_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_DampMulch,
    },

    [ITEM_STABLE_MULCH] =
    {
        .name = _("Abono Fijador"),
        .pluralName = _("Abono Fijador"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante que\n"
            "aumenta la duración\n"
            "de los árboles de Berries."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_STABLE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_StableMulch,
        .iconPalette = gItemIconPalette_StableMulch,
    },

    [ITEM_GOOEY_MULCH] =
    {
        .name = _("Abono Brote"),
        .pluralName = _("Abono Brote"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante que\n"
            "hace que más Berries\n"
            "vuelvan a crecer después\n"
            "de caer."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GOOEY_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_GooeyMulch,
    },

    [ITEM_RICH_MULCH] =
    {
        .name = _("Abono Fértil"),
        .pluralName = _("Abono Fértil"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante que\n"
            "aumenta la cantidad de\n"
            "Berries cosechadas."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_RICH_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_RichMulch,
    },

    [ITEM_SURPRISE_MULCH] =
    {
        .name = _("Abono Sorp."),
        .pluralName = _("Abono Sorp."),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante que\n"
            "aumenta la probabilidad de\n"
            "mutaciones en las Berries."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_SURPRISE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_SurpriseMulch,
    },

    [ITEM_BOOST_MULCH] =
    {
        .name = _("Abono Fruct."),
        .pluralName = _("Abono Fruct."),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante que\n"
            "aumenta la velocidad de\n"
            "secado del suelo blando."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_BOOST_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_BoostMulch,
    },

    [ITEM_AMAZE_MULCH] =
    {
        .name = _("Abono Asombro"),
        .pluralName = _("Abonos Asombro"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "Un fertilizante Rico\n"
            "Sorpresivo y\n"
            "también Impulsor."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_AMAZE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_AmazeMulch,
    },

// Apricorns

        [ITEM_RED_APRICORN] =
    {
        .name = _("Bonguri rojo"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "Un Bonguri rojo.\n"
            "Te asalta con su\n"
            "olor."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RedApricorn,
        .iconPalette = gItemIconPalette_RedApricorn,
    },

    [ITEM_BLUE_APRICORN] =
    {
        .name = _("Bonguri azul"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "Un Bonguri azul.\n"
            "Huele un poco\n"
            "a hierba."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BlueApricorn,
        .iconPalette = gItemIconPalette_BlueApricorn,
    },

    [ITEM_YELLOW_APRICORN] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Bonguri Amar", "Bonguri Amar"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "Un Bonguri amarillo.\n"
            "Tiene un aroma\n"
            "revitalizante."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_YellowApricorn,
        .iconPalette = gItemIconPalette_YellowApricorn,
    },

    [ITEM_GREEN_APRICORN] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Bonguri verde", "Bonguri verde"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "Un Bonguri verde.\n"
            "Tiene un aroma\n"
            "extraño y aromático."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GreenApricorn,
        .iconPalette = gItemIconPalette_GreenApricorn,
    },

    [ITEM_PINK_APRICORN] =
    {
        .name = _("Bonguri rosa"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "Un Bonguri rosa.\n"
            "Tiene un aroma\n"
            "agradable y dulce."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_PinkApricorn,
        .iconPalette = gItemIconPalette_PinkApricorn,
    },

    [ITEM_WHITE_APRICORN] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Bonguri blanco", "Bonguri blanco"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "Un Bonguri blanco.\n"
            "No huele a nada."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_WhiteApricorn,
        .iconPalette = gItemIconPalette_WhiteApricorn,
    },

    [ITEM_BLACK_APRICORN] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Bonguri negro", "Bonguri negro"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "Un Bonguri negro.\n"
            "Tiene un aroma\n"
            "indescriptible."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BlackApricorn,
        .iconPalette = gItemIconPalette_BlackApricorn,
    },

    [ITEM_WISHING_PIECE] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Trozo deseo", "Trozo de deseo"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Lanza en una\n"
            "{PKMN} Den para atraer\n"
            "Pokémon Dynamax."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 50,
        .iconPic = gItemIcon_WishingPiece,
        .iconPalette = gItemIconPalette_WishingPiece,
    },

    [ITEM_GALARICA_TWIG] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Rama Galar", "Rama de Galar"),
        .price = 20 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "Una rama de un árbol\n"
            "en Galar llamado\n"
            "Galarica."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_GalaricaTwig,
        .iconPalette = gItemIconPalette_GalaricaItem,
    },

    [ITEM_ARMORITE_ORE] =
    {
        .name = _("Min. Duralium"),
        .pluralName = _("Min. Duraliums"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Un mineral raro. Se\n"
            "puede encontrar en\n"
            "la Isla de la Armadura en Galar."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ArmoriteOre,
        .iconPalette = gItemIconPalette_ArmoriteOre,
    },

    [ITEM_DYNITE_ORE] =
    {
        .name = _("Min. Maxinium"),
        .pluralName = _("Min. Maxiniums"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Un mineral misterioso.\n"
            "Se puede encontrar en\n"
            "la Cueva Max de Galar."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_DyniteOre,
        .iconPalette = gItemIconPalette_DyniteOre,
    },

// Mail

        [ITEM_ORANGE_MAIL] =
    {
        .name = _("Carta Naranja"),
        .pluralName = _("Cartas Naranjas"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Zigzagoon para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
        .iconPic = gItemIcon_OrangeMail,
        .iconPalette = gItemIconPalette_OrangeMail,
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = _("Carta Puerto"),
        .pluralName = _("Cartas Puerto"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Wingull para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
        .iconPic = gItemIcon_HarborMail,
        .iconPalette = gItemIconPalette_HarborMail,
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = _("Carta Brillante"),
        .pluralName = _("Cartas Brillantes"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Pikachu para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
        .iconPic = gItemIcon_GlitterMail,
        .iconPalette = gItemIconPalette_GlitterMail,
    },

    [ITEM_MECH_MAIL] =
    {
        .name = _("Carta Mecánico"),
        .pluralName = _("Cartas Mecánicos"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Magnemite para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
        .iconPic = gItemIcon_MechMail,
        .iconPalette = gItemIconPalette_MechMail,
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = _("Carta de Madera"),
        .pluralName = _("Cartas de Madera"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Slakoth para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
        .iconPic = gItemIcon_WoodMail,
        .iconPalette = gItemIconPalette_WoodMail,
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = _("Carta Onda"),
        .pluralName = _("Cartas Onda"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Wailmer para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
        .iconPic = gItemIcon_WaveMail,
        .iconPalette = gItemIconPalette_WaveMail,
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = _("Carta Perla"),
        .pluralName = _("Cartas Perla"),
        .price = 50,
        .description = sBeadMailDesc, // Mantener la descripción si ya está en español
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
        .iconPic = gItemIcon_BeadMail,
        .iconPalette = gItemIconPalette_BeadMail,
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = _("Carta Sombra"),
        .pluralName = _("Cartas Sombra"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Duskull para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
        .iconPic = gItemIcon_ShadowMail,
        .iconPalette = gItemIconPalette_ShadowMail,
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = _("Carta Tropical"),
        .pluralName = _("Cartas Tropicales"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "de Bellossom para\n"
            "ser llevado por un\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
        .iconPic = gItemIcon_TropicMail,
        .iconPalette = gItemIconPalette_TropicMail,
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = _("Carta Sueño"),
        .pluralName = _("Cartas Sueño"),
        .price = 50,
        .description = sBeadMailDesc, // Mantener la descripción si ya está en español
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
        .iconPic = gItemIcon_DreamMail,
        .iconPalette = gItemIconPalette_DreamMail,
    },

    [ITEM_FAB_MAIL] =
    {
        .name = _("Carta Fab"),
        .pluralName = _("Cartas Fab"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con diseño\n"
            "elegante para ser\n"
            "llevado por un Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
        .iconPic = gItemIcon_FabMail,
        .iconPalette = gItemIconPalette_FabMail,
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = _("Carta Retro"),
        .pluralName = _("Cartas Retro"),
        .price = 50,
        .description = COMPOUND_STRING(
            "Un Carta con dibujos\n"
            "de tres Pokémon."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
        .iconPic = gItemIcon_RetroMail,
        .iconPalette = gItemIconPalette_RetroMail,
    },

// Evolution Items

    [ITEM_FIRE_STONE] =
{
    .name = _("Piedra Fuego"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_FireStone,
    .iconPalette = gItemIconPalette_FireStone,
},

[ITEM_WATER_STONE] =
{
    .name = _("Piedra Agua"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_WaterStone,
    .iconPalette = gItemIconPalette_WaterStone,
},

[ITEM_THUNDER_STONE] =
{
    .name = _("Piedra Trueno"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_ThunderStone,
    .iconPalette = gItemIconPalette_ThunderStone,
},

[ITEM_LEAF_STONE] =
{
    .name = _("Piedra Hoja"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_LeafStone,
    .iconPalette = gItemIconPalette_LeafStone,
},

[ITEM_ICE_STONE] =
{
    .name = _("Piedra Hielo"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_IceStone,
    .iconPalette = gItemIconPalette_IceStone,
},

[ITEM_SUN_STONE] =
{
    .name = _("Piedra Solar"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_SunStone,
    .iconPalette = gItemIconPalette_SunStone,
},

[ITEM_MOON_STONE] =
{
    .name = _("Piedra Lunar"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_MoonStone,
    .iconPalette = gItemIconPalette_MoonStone,
},

[ITEM_SHINY_STONE] =
{
    .name = _("Piedra día"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_ShinyStone,
    .iconPalette = gItemIconPalette_ShinyStone,
},

[ITEM_DUSK_STONE] =
{
    .name = _("Piedra Noche"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_DuskStone,
    .iconPalette = gItemIconPalette_DuskStone,
},

[ITEM_DAWN_STONE] =
{
    .name = _("Piedra Alba"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
    .description = sEvolutionStoneDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_DawnStone,
    .iconPalette = gItemIconPalette_DawnStone,
},

[ITEM_SWEET_APPLE] =
{
    .name = _("Manzana Dulce"),
    .price = 2200,
    .description = COMPOUND_STRING(
        "Una manzana muy dulce\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_SweetApple,
    .iconPalette = gItemIconPalette_SweetApple,
},

[ITEM_TART_APPLE] =
{
    .name = _("Manzana Ácida"),
    .price = 2200,
    .description = COMPOUND_STRING(
        "Una manzana muy ácida\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_TartApple,
    .iconPalette = gItemIconPalette_TartApple,
},

[ITEM_CRACKED_POT] =
{
    .name = _("T. Agrietada"),
    .price = 1600,
    .description = COMPOUND_STRING(
        "Una tetera agrietada\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_CrackedPot,
    .iconPalette = gItemIconPalette_Pot,
},

[ITEM_CHIPPED_POT] =
{
    .name = _("Tetera Rota"),
    .price = 38000,
    .description = COMPOUND_STRING(
        "Una tetera astillada\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_ChippedPot,
    .iconPalette = gItemIconPalette_Pot,
},

[ITEM_GALARICA_CUFF] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Puño Galarica", "Puño Galarica"),
    .price = (I_PRICE >= GEN_9) ? 3000 : 6000,
    .description = COMPOUND_STRING(
        "Una pulsera de Galar\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_GalaricaCuff,
    .iconPalette = gItemIconPalette_GalaricaItem,
},

[ITEM_GALARICA_WREATH] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("G. Galarica", "G. Galarica"),
    .price = (I_PRICE >= GEN_9) ? 3000 : 6000,
    .description = COMPOUND_STRING(
        "Una guirnalda de Galar\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_GalaricaWreath,
    .iconPalette = gItemIconPalette_GalaricaItem,
},

    [ITEM_DRAGON_SCALE] =
{
    .name = _("Esc. Dragón"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Una extraña escama\n"
        "sostenida por Pokémon\n"
        "de tipo Dragón."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_DragonScale,
    .iconPalette = gItemIconPalette_DragonScale,
},

[ITEM_UPGRADE] =
{
    .name = _("Mejora"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .holdEffect = HOLD_EFFECT_UPGRADE,
    .description = COMPOUND_STRING(
        "Una caja peculiar hecha\n"
        "por Silph Co."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_Upgrade,
    .iconPalette = gItemIconPalette_Upgrade,
},

[ITEM_PROTECTOR] =
{
    .name = _("Protector"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .description = COMPOUND_STRING(
        "Amado por cierto Pokémon.\n"
        "Es rígido y pesado."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_Protector,
    .iconPalette = gItemIconPalette_Protector,
},

[ITEM_ELECTIRIZER] =
{
    .name = _("Electrificador"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .description = COMPOUND_STRING(
        "Amado por cierto Pokémon.\n"
        "Está lleno de energía\n"
        "eléctrica."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_Electirizer,
    .iconPalette = gItemIconPalette_Electirizer,
},

[ITEM_MAGMARIZER] =
{
    .name = _("Magmatizador"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .description = COMPOUND_STRING(
        "Amado por cierto Pokémon.\n"
        "Está lleno de energía\n"
        "magma."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_Magmarizer,
    .iconPalette = gItemIconPalette_Magmarizer,
},

[ITEM_DUBIOUS_DISC] =
{
    .name = _("Disco dudoso"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .description = COMPOUND_STRING(
        "Un dispositivo claro\n"
        "rebosante de datos\n"
        "dudosos."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 50,
    .iconPic = gItemIcon_DubiousDisc,
    .iconPalette = gItemIconPalette_DubiousDisc,
},

[ITEM_REAPER_CLOTH] =
{
    .name = _("Tela lúgubre"),
    .pluralName = _("Tela lúgubre"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .description = COMPOUND_STRING(
        "Amada por cierto Pokémon.\n"
        "Empapada en energía\n"
        "espiritual."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 10,
    .iconPic = gItemIcon_ReaperCloth,
    .iconPalette = gItemIconPalette_ReaperCloth,
},

[ITEM_PRISM_SCALE] =
{
    .name = _("Esc. prisma"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 2000 : 500),
    .description = COMPOUND_STRING(
        "Una misteriosa escama\n"
        "que evoluciona ciertos\n"
        "Pokémon. Brilla."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_PrismScale,
    .iconPalette = gItemIconPalette_PrismScale,
},

[ITEM_WHIPPED_DREAM] =
{
    .name = _("Sueño montado"),
    .pluralName = _("Sueño montado"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .description = COMPOUND_STRING(
        "Un dulce suave y\n"
        "dulce amado por\n"
        "cierto Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_WhippedDream,
    .iconPalette = gItemIconPalette_WhippedDream,
},

[ITEM_SACHET] =
{
    .name = _("Frag. Sachet"),
    .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
    .description = COMPOUND_STRING(
        "Un sache lleno de\n"
        "perfumes amados por\n"
        "cierto Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_Sachet,
    .iconPalette = gItemIconPalette_Sachet,
},

[ITEM_OVAL_STONE] =
{
    .name = _("Piedra oval"),
    .price = (I_PRICE >= GEN_7) ? 2000 : 2100,
    .description = COMPOUND_STRING(
        "Hace que cierto\n"
        "Pokémon evolucione.\n"
        "Tiene forma de huevo."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_OvalStone,
    .iconPalette = gItemIconPalette_OvalStone,
},

[ITEM_STRAWBERRY_SWEET] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("C. fresa", "C. fresa"),
    .price = 500 * TREASURE_FACTOR,
    .description = COMPOUND_STRING(
        "Un dulce con forma\n"
        "de fresa amado por\n"
        "Milcery."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_StrawberrySweet,
    .iconPalette = gItemIconPalette_StrawberrySweet,
},

[ITEM_LOVE_SWEET] =
{
    .name = _("C. amor"),
    .price = 500 * TREASURE_FACTOR,
    .description = COMPOUND_STRING(
        "Un dulce con forma\n"
        "de corazón amado por\n"
        "Milcery."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_LoveSweet,
    .iconPalette = gItemIconPalette_LoveSweet,
},

[ITEM_BERRY_SWEET] =
{
    .name = _("C. fruto"),
    .price = 500 * TREASURE_FACTOR,
    .description = COMPOUND_STRING(
        "Un dulce con forma\n"
        "de baya amado por\n"
        "Milcery."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_BerrySweet,
    .iconPalette = gItemIconPalette_BerrySweet,
},

[ITEM_CLOVER_SWEET] =
{
    .name = _("C. trébol"),
    .price = 500 * TREASURE_FACTOR,
    .description = COMPOUND_STRING(
        "Un dulce con forma\n"
        "de trébol amado por\n"
        "Milcery."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_CloverSweet,
    .iconPalette = gItemIconPalette_CloverSweet,
},

[ITEM_FLOWER_SWEET] =
{
    .name = _("C. flor"),
    .price = 500 * TREASURE_FACTOR,
    .description = COMPOUND_STRING(
        "Un dulce con forma\n"
        "de flor amado por\n"
        "Milcery."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_FlowerSweet,
    .iconPalette = gItemIconPalette_FlowerSweet,
},

[ITEM_STAR_SWEET] =
{
    .name = _("C. estrella"),
    .price = 500 * TREASURE_FACTOR,
    .description = COMPOUND_STRING(
        "Un dulce con forma\n"
        "de estrella amado por\n"
        "Milcery."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_StarSweet,
    .iconPalette = gItemIconPalette_StarSweet,
},

[ITEM_RIBBON_SWEET] =
{
    .name = _("C. lazo"),
    .price = 500 * TREASURE_FACTOR,
    .description = COMPOUND_STRING(
        "Un dulce con forma\n"
        "de cinta amado por\n"
        "Milcery."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RibbonSweet,
    .iconPalette = gItemIconPalette_RibbonSweet,
},

[ITEM_EVERSTONE] =
{
    .name = _("Piedra eterna"),
    .price = (I_PRICE >= GEN_7) ? 3000 : 200,
    .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
    .description = COMPOUND_STRING(
        "Un objeto maravilloso\n"
        "que impide la evolución."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_Everstone,
    .iconPalette = gItemIconPalette_Everstone,
},

// Nectars

    [ITEM_RED_NECTAR] =
{
    .name = _("Néctar rojo"),
    .price = 300,
    .holdEffectParam = 0,
    .description = sNectarDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RedNectar,
    .iconPalette = gItemIconPalette_RedNectar,
},

[ITEM_YELLOW_NECTAR] =
{
    .name = _("Néctar amar"),
    .price = 300,
    .holdEffectParam = 0,
    .description = sNectarDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
    .flingPower = 10,
    .iconPic = gItemIcon_YellowNectar,
    .iconPalette = gItemIconPalette_YellowNectar,
},

[ITEM_PINK_NECTAR] =
{
    .name = _("Néctar rosa"),
    .price = 300,
    .holdEffectParam = 0,
    .description = sNectarDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PinkNectar,
    .iconPalette = gItemIconPalette_PinkNectar,
},

[ITEM_PURPLE_NECTAR] =
{
    .name = _("Néctar morado"),
    .price = 300,
    .holdEffectParam = 0,
    .description = sNectarDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PurpleNectar,
    .iconPalette = gItemIconPalette_PurpleNectar,
},

// Plates

    [ITEM_FLAME_PLATE] =
{
    .name = _("Tabla llama"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Fuego."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIRE,
    .flingPower = 90,
    .iconPic = gItemIcon_FlamePlate,
    .iconPalette = gItemIconPalette_FlamePlate,
},

[ITEM_SPLASH_PLATE] =
{
    .name = _("Tabla linfa"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Agua."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_WATER,
    .flingPower = 90,
    .iconPic = gItemIcon_SplashPlate,
    .iconPalette = gItemIconPalette_SplashPlate,
},

[ITEM_ZAP_PLATE] =
{
    .name = _("Tabla trueno"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Eléctrico."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ELECTRIC,
    .flingPower = 90,
    .iconPic = gItemIcon_ZapPlate,
    .iconPalette = gItemIconPalette_ZapPlate,
},

[ITEM_MEADOW_PLATE] =
{
    .name = _("Tabla pradal"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Planta."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GRASS,
    .flingPower = 90,
    .iconPic = gItemIcon_MeadowPlate,
    .iconPalette = gItemIconPalette_MeadowPlate,
},

[ITEM_ICICLE_PLATE] =
{
    .name = _("Tabla helada"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Hielo."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ICE,
    .flingPower = 90,
    .iconPic = gItemIcon_IciclePlate,
    .iconPalette = gItemIconPalette_IciclePlate,
},

[ITEM_FIST_PLATE] =
{
    .name = _("Tabla fuerte"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Lucha."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIGHTING,
    .flingPower = 90,
    .iconPic = gItemIcon_FistPlate,
    .iconPalette = gItemIconPalette_FistPlate,
},

[ITEM_TOXIC_PLATE] =
{
    .name = _("Tabla tóxica"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Veneno."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_POISON,
    .flingPower = 90,
    .iconPic = gItemIcon_ToxicPlate,
    .iconPalette = gItemIconPalette_ToxicPlate,
},

[ITEM_EARTH_PLATE] =
{
    .name = _("Tabla terrax"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Tierra."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GROUND,
    .flingPower = 90,
    .iconPic = gItemIcon_EarthPlate,
    .iconPalette = gItemIconPalette_EarthPlate,
},

[ITEM_SKY_PLATE] =
{
    .name = _("Tabla cielo"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Volador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FLYING,
    .flingPower = 90,
    .iconPic = gItemIcon_SkyPlate,
    .iconPalette = gItemIconPalette_SkyPlate,
},

[ITEM_MIND_PLATE] =
{
    .name = _("Tabla mental"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Psíquico."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_PSYCHIC,
    .flingPower = 90,
    .iconPic = gItemIcon_MindPlate,
    .iconPalette = gItemIconPalette_MindPlate,
},

[ITEM_INSECT_PLATE] =
{
    .name = _("Tabla bicho"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Bicho."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_BUG,
    .flingPower = 90,
    .iconPic = gItemIcon_InsectPlate,
    .iconPalette = gItemIconPalette_InsectPlate,
},

[ITEM_STONE_PLATE] =
{
    .name = _("Tabla pétrea"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Roca."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ROCK,
    .flingPower = 90,
    .iconPic = gItemIcon_StonePlate,
    .iconPalette = gItemIconPalette_StonePlate,
},

[ITEM_SPOOKY_PLATE] =
{
    .name = _("Tabla terror"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Fantasma."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GHOST,
    .flingPower = 90,
    .iconPic = gItemIcon_SpookyPlate,
    .iconPalette = gItemIconPalette_SpookyPlate,
},

[ITEM_DRACO_PLATE] =
{
    .name = _("Tabla draco"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Dragón."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DRAGON,
    .flingPower = 90,
    .iconPic = gItemIcon_DracoPlate,
    .iconPalette = gItemIconPalette_DracoPlate,
},

[ITEM_DREAD_PLATE] =
{
    .name = _("Tabla oscura"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Siniestro."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DARK,
    .flingPower = 90,
    .iconPic = gItemIcon_DreadPlate,
    .iconPalette = gItemIconPalette_DreadPlate,
},

[ITEM_IRON_PLATE] =
{
    .name = _("Tabla acero"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Acero."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_STEEL,
    .flingPower = 90,
    .iconPic = gItemIcon_IronPlate,
    .iconPalette = gItemIconPalette_IronPlate,
},

[ITEM_PIXIE_PLATE] =
{
    .name = _("Tabla duende"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_PLATE,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Una tableta que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Hada."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FAIRY,
    .flingPower = 90,
    .iconPic = gItemIcon_PixiePlate,
    .iconPalette = gItemIconPalette_PixiePlate,
},

// Drives

    [ITEM_DOUSE_DRIVE] =
    {
        .name = _("HidroROM"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING("Cambia el Ataque Tecnoblast\n"
                                       "de Genesect a tipo Agua."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 70,
        .iconPic = gItemIcon_DouseDrive,
        .iconPalette = gItemIconPalette_DouseDrive,
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = _("FulgoROM"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING("Cambia el Ataque Tecnoblast\n"
                                       "de Genesect a tipo Eléctrico."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 70,
        .iconPic = gItemIcon_ShockDrive,
        .iconPalette = gItemIconPalette_ShockDrive,
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = _("PiroROM"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING("Cambia el Ataque Tecnoblast\n"
                                       "de Genesect a tipo Fuego."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 70,
        .iconPic = gItemIcon_BurnDrive,
        .iconPalette = gItemIconPalette_BurnDrive,
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = _("CrioROM"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING("Cambia el Ataque Tecnoblast\n"
                                       "de Genesect a tipo Hielo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 70,
        .iconPic = gItemIcon_ChillDrive,
        .iconPalette = gItemIconPalette_ChillDrive,
    },

// Memories

    [ITEM_FIRE_MEMORY] =
{
    .name = _("Disco fuego"),
    .pluralName = _("Discos fuego"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Fuego. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIRE,
    .flingPower = 50,
    .iconPic = gItemIcon_FireMemory,
    .iconPalette = gItemIconPalette_FireMemory,
},

[ITEM_WATER_MEMORY] =
{
    .name = _("Disco agua"),
    .pluralName = _("Discos agua"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Agua. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_WATER,
    .flingPower = 50,
    .iconPic = gItemIcon_WaterMemory,
    .iconPalette = gItemIconPalette_WaterMemory,
},

[ITEM_ELECTRIC_MEMORY] =
{
    .name = _("Disco eléc."),
    .pluralName = _("Discos eléc."),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Eléctrico. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ELECTRIC,
    .flingPower = 50,
    .iconPic = gItemIcon_ElectricMemory,
    .iconPalette = gItemIconPalette_ElectricMemory,
},

[ITEM_GRASS_MEMORY] =
{
    .name = _("Disco planta"),
    .pluralName = _("Discos planta"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Planta. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GRASS,
    .flingPower = 50,
    .iconPic = gItemIcon_GrassMemory,
    .iconPalette = gItemIconPalette_GrassMemory,
},

[ITEM_ICE_MEMORY] =
{
    .name = _("Disco hielo"),
    .pluralName = _("Discos hielo"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Hielo. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ICE,
    .flingPower = 50,
    .iconPic = gItemIcon_IceMemory,
    .iconPalette = gItemIconPalette_IceMemory,
},

[ITEM_FIGHTING_MEMORY] =
{
    .name = _("Disco lucha"),
    .pluralName = _("Discos lucha"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Lucha. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIGHTING,
    .flingPower = 50,
    .iconPic = gItemIcon_FightingMemory,
    .iconPalette = gItemIconPalette_FightingMemory,
},

[ITEM_POISON_MEMORY] =
{
    .name = _("Disco veneno"),
    .pluralName = _("Discos veneno"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Veneno. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_POISON,
    .flingPower = 50,
    .iconPic = gItemIcon_PoisonMemory,
    .iconPalette = gItemIconPalette_PoisonMemory,
},

[ITEM_GROUND_MEMORY] =
{
    .name = _("Disco terra"),
    .pluralName = _("Discos terra"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Tierra. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GROUND,
    .flingPower = 50,
    .iconPic = gItemIcon_GroundMemory,
    .iconPalette = gItemIconPalette_GroundMemory,
},

[ITEM_FLYING_MEMORY] =
{
    .name = _("Disco vuelo"),
    .pluralName = _("Discos vuelo"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Volador. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FLYING,
    .flingPower = 50,
    .iconPic = gItemIcon_FlyingMemory,
    .iconPalette = gItemIconPalette_FlyingMemory,
},

[ITEM_PSYCHIC_MEMORY] =
{
    .name = _("Disco psíq."),
    .pluralName = _("Discos psíq."),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Psíquico. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_PSYCHIC,
    .flingPower = 50,
    .iconPic = gItemIcon_PsychicMemory,
    .iconPalette = gItemIconPalette_PsychicMemory,
},

[ITEM_BUG_MEMORY] =
{
    .name = _("Disco bicho"),
    .pluralName = _("Discos bicho"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Bicho. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_BUG,
    .flingPower = 50,
    .iconPic = gItemIcon_BugMemory,
    .iconPalette = gItemIconPalette_BugMemory,
},

[ITEM_ROCK_MEMORY] =
{
    .name = _("Disco roca"),
    .pluralName = _("Discos roca"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Roca. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ROCK,
    .flingPower = 50,
    .iconPic = gItemIcon_RockMemory,
    .iconPalette = gItemIconPalette_RockMemory,
},

[ITEM_GHOST_MEMORY] =
{
    .name = _("Disco fant."),
    .pluralName = _("Discos fant."),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Fantasma. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GHOST,
    .flingPower = 50,
    .iconPic = gItemIcon_GhostMemory,
    .iconPalette = gItemIconPalette_GhostMemory,
},

[ITEM_DRAGON_MEMORY] =
{
    .name = _("Disco draco"),
    .pluralName = _("Discos draco"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Dragón. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DRAGON,
    .flingPower = 50,
    .iconPic = gItemIcon_DragonMemory,
    .iconPalette = gItemIconPalette_DragonMemory,
},

[ITEM_DARK_MEMORY] =
{
    .name = _("Disco sin."),
    .pluralName = _("Discos sin."),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Siniestro. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DARK,
    .flingPower = 50,
    .iconPic = gItemIcon_DarkMemory,
    .iconPalette = gItemIconPalette_DarkMemory,
},

[ITEM_STEEL_MEMORY] =
{
    .name = _("Disco acero"),
    .pluralName = _("Discos acero"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Acero. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_STEEL,
    .flingPower = 50,
    .iconPic = gItemIcon_SteelMemory,
    .iconPalette = gItemIconPalette_SteelMemory,
},

[ITEM_FAIRY_MEMORY] =
{
    .name = _("Disco hada"),
    .pluralName = _("Discos hada"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_MEMORY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Un disco con datos del\n"
        "tipo Hada. Cambia\n"
        "el tipo de Silvally."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FAIRY,
    .flingPower = 50,
    .iconPic = gItemIcon_FairyMemory,
    .iconPalette = gItemIconPalette_FairyMemory,
},

[ITEM_RUSTED_SWORD] =
{
    .name = _("Espada ox."),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una espada oxidada. Un\n"
        "héroe la usó para\n"
        "detener un desastre."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_RustedSword,
    .iconPalette = gItemIconPalette_RustedWeapons,
},

[ITEM_RUSTED_SHIELD] =
{
    .name = _("Escudo ox."),
    .price = 0,
    .description = COMPOUND_STRING(
        "Un escudo oxidado. Un\n"
        "héroe lo usó para\n"
        "detener un desastre."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_RustedShield,
    .iconPalette = gItemIconPalette_RustedWeapons,
},

// Colored Orbs

    [ITEM_RED_ORB] =
{
    .name = _("Orbe rojo"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
    .description = COMPOUND_STRING(
        "Un orbe rojo y brillante\n"
        "que se dice contiene un\n"
        "poder ancestral."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_RedOrb,
    .iconPalette = gItemIconPalette_RedOrb,
},

[ITEM_BLUE_ORB] =
{
    .name = _("Orbe azul"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
    .description = COMPOUND_STRING(
        "Un orbe azul y brillante\n"
        "que se dice contiene un\n"
        "poder ancestral."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_BlueOrb,
    .iconPalette = gItemIconPalette_BlueOrb,
},


// Mega Stones

    [ITEM_VENUSAURITE] =
{
    .name = _("Venusaurita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Venusaur Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Venusaurite,
    .iconPalette = gItemIconPalette_Venusaurite,
},

[ITEM_CHARIZARDITE_X] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("CharizarditaX", "Charizardita X"),
    .pluralName = _("Charizarditas X"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = sCharizarditeDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_CharizarditeX,
    .iconPalette = gItemIconPalette_CharizarditeX,
},

[ITEM_CHARIZARDITE_Y] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("CharizarditaY", "Charizardita Y"),
    .pluralName = _("Charizarditas Y"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = sCharizarditeDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_CharizarditeY,
    .iconPalette = gItemIconPalette_CharizarditeY,
},

[ITEM_BLASTOISINITE] =
{
    .name = _("Blastoisinita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Blastoise Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Blastoisinite,
    .iconPalette = gItemIconPalette_Blastoisinite,
},

[ITEM_BEEDRILLITE] =
{
    .name = _("Beedrillita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Beedrill Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Beedrillite,
    .iconPalette = gItemIconPalette_Beedrillite,
},

[ITEM_PIDGEOTITE] =
{
    .name = _("Pidgeotita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Pidgeot Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Pidgeotite,
    .iconPalette = gItemIconPalette_Pidgeotite,
},

[ITEM_ALAKAZITE] =
{
    .name = _("Alakazita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Alakazam Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Alakazite,
    .iconPalette = gItemIconPalette_Alakazite,
},

[ITEM_SLOWBRONITE] =
{
    .name = _("Slowbronita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Slowbro Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Slowbronite,
    .iconPalette = gItemIconPalette_Slowbronite,
},

[ITEM_GENGARITE] =
{
    .name = _("Gengarita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Gengar Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Gengarite,
    .iconPalette = gItemIconPalette_Gengarite,
},

[ITEM_KANGASKHANITE] =
{
    .name = _("Kangaskhanita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Kangaskhan Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Kangaskhanite,
    .iconPalette = gItemIconPalette_Kangaskhanite,
},

[ITEM_PINSIRITE] =
{
    .name = _("Pinsirita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Pinsir Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Pinsirite,
    .iconPalette = gItemIconPalette_Pinsirite,
},

[ITEM_GYARADOSITE] =
{
    .name = _("Gyaradosita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Gyarados Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Gyaradosite,
    .iconPalette = gItemIconPalette_Gyaradosite,
},

[ITEM_AERODACTYLITE] =
{
    .name = _("Aerodactylita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Aerodactyl Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Aerodactylite,
    .iconPalette = gItemIconPalette_Aerodactylite,
},

[ITEM_MEWTWONITE_X] =
{
    .name = _("Mewtwonita X"),
    .pluralName = _("Mewtwonitas X"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = sMewtwoniteDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_MewtwoniteX,
    .iconPalette = gItemIconPalette_MewtwoniteX,
},

[ITEM_MEWTWONITE_Y] =
{
    .name = _("Mewtwonita Y"),
    .pluralName = _("Mewtwonitas Y"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = sMewtwoniteDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_MewtwoniteY,
    .iconPalette = gItemIconPalette_MewtwoniteY,
},

[ITEM_TYRANITARITE] =
{
    .name = _("Tyranitarita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Tyranitar Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Tyranitarite,
    .iconPalette = gItemIconPalette_Tyranitarite,
},

    [ITEM_SCEPTILITE] =
{
    .name = _("Sceptilita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Sceptile Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Sceptilite,
    .iconPalette = gItemIconPalette_Sceptilite,
},

[ITEM_BLAZIKENITE] =
{
    .name = _("Blazikenita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Blaziken Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Blazikenite,
    .iconPalette = gItemIconPalette_Blazikenite,
},

[ITEM_SWAMPERTITE] =
{
    .name = _("Swampertita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Swampert Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Swampertite,
    .iconPalette = gItemIconPalette_Swampertite,
},

[ITEM_GARDEVOIRITE] =
{
    .name = _("Gardevoirita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Gardevoir Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Gardevoirite,
    .iconPalette = gItemIconPalette_Gardevoirite,
},

[ITEM_SABLENITE] =
{
    .name = _("Sablenita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Sableye Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Sablenite,
    .iconPalette = gItemIconPalette_Sablenite,
},

[ITEM_MAWILITE] =
{
    .name = _("Mawilita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Mawile Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Mawilite,
    .iconPalette = gItemIconPalette_Mawilite,
},

[ITEM_AGGRONITE] =
{
    .name = _("Aggronita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Aggron Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Aggronite,
    .iconPalette = gItemIconPalette_Aggronite,
},

[ITEM_MEDICHAMITE] =
{
    .name = _("Medichamita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Medicham Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Medichamite,
    .iconPalette = gItemIconPalette_Medichamite,
},

[ITEM_MANECTITE] =
{
    .name = _("Manectrita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Manectric Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Manectite,
    .iconPalette = gItemIconPalette_Manectite,
},

[ITEM_SHARPEDONITE] =
{
    .name = _("Sharpedonita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Sharpedo Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Sharpedonite,
    .iconPalette = gItemIconPalette_Sharpedonite,
},

[ITEM_CAMERUPTITE] =
{
    .name = _("Cameruptita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Camerupt Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Cameruptite,
    .iconPalette = gItemIconPalette_Cameruptite,
},

[ITEM_ALTARIANITE] =
{
    .name = _("Altarianita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Altaria Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Altarianite,
    .iconPalette = gItemIconPalette_Altarianite,
},

[ITEM_BANETTITE] =
{
    .name = _("Banettita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Banette Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Banettite,
    .iconPalette = gItemIconPalette_Banettite,
},

[ITEM_ABSOLITE] =
{
    .name = _("Absolita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Absol Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Absolite,
    .iconPalette = gItemIconPalette_Absolite,
},

[ITEM_GLALITITE] =
{
    .name = _("Glalitita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Glalie Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Glalitite,
    .iconPalette = gItemIconPalette_Glalitite,
},

[ITEM_SALAMENCITE] =
{
    .name = _("Salamencita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Salamence Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Salamencite,
    .iconPalette = gItemIconPalette_Salamencite,
},

[ITEM_METAGROSSITE] =
{
    .name = _("Metagrossita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Metagross Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Metagrossite,
    .iconPalette = gItemIconPalette_Metagrossite,
},

[ITEM_LATIASITE] =
{
    .name = _("Latiasita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Latias Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Latiasite,
    .iconPalette = gItemIconPalette_Latiasite,
},

[ITEM_LATIOSITE] =
{
    .name = _("Latiosita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Latios Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Latiosite,
    .iconPalette = gItemIconPalette_Latiosite,
},

[ITEM_LOPUNNITE] =
{
    .name = _("Lopunnita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Lopunny Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Lopunnite,
    .iconPalette = gItemIconPalette_Lopunnite,
},

[ITEM_GARCHOMPITE] =
{
    .name = _("Garchompita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Garchomp Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Garchompite,
    .iconPalette = gItemIconPalette_Garchompite,
},

[ITEM_LUCARIONITE] =
{
    .name = _("Lucarionita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Lucario Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Lucarionite,
    .iconPalette = gItemIconPalette_Lucarionite,
},

[ITEM_ABOMASITE] =
{
    .name = _("Abomasita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Abomasnow Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Abomasite,
    .iconPalette = gItemIconPalette_Abomasite,
},

[ITEM_GALLADITE] =
{
    .name = _("Galladita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Gallade Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Galladite,
    .iconPalette = gItemIconPalette_Galladite,
},

[ITEM_AUDINITE] =
{
    .name = _("Audinita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Audino Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Audinite,
    .iconPalette = gItemIconPalette_Audinite,
},

[ITEM_DIANCITE] =
{
    .name = _("Diancita"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_MEGA_STONE,
    .description = COMPOUND_STRING(
        "Esta piedra permite\n"
        "que Diancie Mega\n"
        "Evolucione en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_Diancite,
    .iconPalette = gItemIconPalette_Diancite,
},


// Gems

    [ITEM_NORMAL_GEM] =
{
    .name = _("Gema normal"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Normal."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_NORMAL,
    .iconPic = gItemIcon_NormalGem,
    .iconPalette = gItemIconPalette_NormalGem,
},

[ITEM_FIRE_GEM] =
{
    .name = _("Gema fuego"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Fuego."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIRE,
    .iconPic = gItemIcon_FireGem,
    .iconPalette = gItemIconPalette_FireGem,
},

[ITEM_WATER_GEM] =
{
    .name = _("Gema agua"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Agua."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_WATER,
    .iconPic = gItemIcon_WaterGem,
    .iconPalette = gItemIconPalette_WaterGem,
},

[ITEM_ELECTRIC_GEM] =
{
    .name = _("Gema eléc."),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Eléctrico."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ELECTRIC,
    .iconPic = gItemIcon_ElectricGem,
    .iconPalette = gItemIconPalette_ElectricGem,
},

[ITEM_GRASS_GEM] =
{
    .name = _("Gema planta"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Planta."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GRASS,
    .iconPic = gItemIcon_GrassGem,
    .iconPalette = gItemIconPalette_GrassGem,
},

[ITEM_ICE_GEM] =
{
    .name = _("Gema hielo"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Hielo."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ICE,
    .iconPic = gItemIcon_IceGem,
    .iconPalette = gItemIconPalette_IceGem,
},

[ITEM_FIGHTING_GEM] =
{
    .name = _("Gema lucha"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Lucha."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIGHTING,
    .iconPic = gItemIcon_FightingGem,
    .iconPalette = gItemIconPalette_FightingGem,
},

[ITEM_POISON_GEM] =
{
    .name = _("Gema veneno"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Veneno."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_POISON,
    .iconPic = gItemIcon_PoisonGem,
    .iconPalette = gItemIconPalette_PoisonGem,
},

[ITEM_GROUND_GEM] =
{
    .name = _("Gema tierra"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Tierra."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GROUND,
    .iconPic = gItemIcon_GroundGem,
    .iconPalette = gItemIconPalette_GroundGem,
},

[ITEM_FLYING_GEM] =
{
    .name = _("Gema volador"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Volador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FLYING,
    .iconPic = gItemIcon_FlyingGem,
    .iconPalette = gItemIconPalette_FlyingGem,
},

[ITEM_PSYCHIC_GEM] =
{
    .name = _("Gema psíquica"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Psíquico."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_PSYCHIC,
    .iconPic = gItemIcon_PsychicGem,
    .iconPalette = gItemIconPalette_PsychicGem,
},

[ITEM_BUG_GEM] =
{
    .name = _("Gema bicho"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Bicho."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_BUG,
    .iconPic = gItemIcon_BugGem,
    .iconPalette = gItemIconPalette_BugGem,
},

[ITEM_ROCK_GEM] =
{
    .name = _("Gema roca"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Roca."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ROCK,
    .iconPic = gItemIcon_RockGem,
    .iconPalette = gItemIconPalette_RockGem,
},

[ITEM_GHOST_GEM] =
{
    .name = _("Gema fant."),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Fantasma."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GHOST,
    .iconPic = gItemIcon_GhostGem,
    .iconPalette = gItemIconPalette_GhostGem,
},

[ITEM_DRAGON_GEM] =
{
    .name = _("Gema dragón"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Dragón."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DRAGON,
    .iconPic = gItemIcon_DragonGem,
    .iconPalette = gItemIconPalette_DragonGem,
},

[ITEM_DARK_GEM] =
{
    .name = _("Gema sin."),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Siniestro."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DARK,
    .iconPic = gItemIcon_DarkGem,
    .iconPalette = gItemIconPalette_DarkGem,
},

[ITEM_STEEL_GEM] =
{
    .name = _("Gema acero"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Acero."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_STEEL,
    .iconPic = gItemIcon_SteelGem,
    .iconPalette = gItemIconPalette_SteelGem,
},


[ITEM_FAIRY_GEM] =
{
    .name = _("Gema hada"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GEMS,
    .holdEffectParam = GEM_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Aumenta la\n"
        "potencia de los\n"
        "movimientos de Tipo Hada."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FAIRY,
    .iconPic = gItemIcon_FairyGem,
    .iconPalette = gItemIconPalette_FairyGem,
},


// Z-Crystals

    [ITEM_NORMALIUM_Z] =
{
    .name = _("Normastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Normal a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_NORMAL,
    .iconPic = gItemIcon_NormaliumZ,
    .iconPalette = gItemIconPalette_NormaliumZ,
},

[ITEM_FIRIUM_Z] =
{
    .name = _("Pirostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Fuego a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIRE,
    .iconPic = gItemIcon_FiriumZ,
    .iconPalette = gItemIconPalette_FiriumZ,
},

[ITEM_WATERIUM_Z] =
{
    .name = _("Hidrostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Agua a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_WATER,
    .iconPic = gItemIcon_WateriumZ,
    .iconPalette = gItemIconPalette_WateriumZ,
},

[ITEM_ELECTRIUM_Z] =
{
    .name = _("Electrostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Eléctrico a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ELECTRIC,
    .iconPic = gItemIcon_ElectriumZ,
    .iconPalette = gItemIconPalette_ElectriumZ,
},

[ITEM_GRASSIUM_Z] =
{
    .name = _("Fitostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Planta a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GRASS,
    .iconPic = gItemIcon_GrassiumZ,
    .iconPalette = gItemIconPalette_GrassiumZ,
},

[ITEM_ICIUM_Z] =
{
    .name = _("Criostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Hielo a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ICE,
    .iconPic = gItemIcon_IciumZ,
    .iconPalette = gItemIconPalette_IciumZ,
},

[ITEM_FIGHTINIUM_Z] =
{
    .name = _("Lizastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Lucha a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FIGHTING,
    .iconPic = gItemIcon_FightiniumZ,
    .iconPalette = gItemIconPalette_FightiniumZ,
},

[ITEM_POISONIUM_Z] =
{
    .name = _("Toxistal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Veneno a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_POISON,
    .iconPic = gItemIcon_PoisoniumZ,
    .iconPalette = gItemIconPalette_PoisoniumZ,
},

[ITEM_GROUNDIUM_Z] =
{
    .name = _("Geostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Tierra a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GROUND,
    .iconPic = gItemIcon_GroundiumZ,
    .iconPalette = gItemIconPalette_GroundiumZ,
},

[ITEM_FLYINIUM_Z] =
{
    .name = _("Aerostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Mejora los movimientos\n"
        "de tipo Volador a\n"
        "movimientos Z."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FLYING,
    .iconPic = gItemIcon_FlyiniumZ,
    .iconPalette = gItemIconPalette_FlyiniumZ,
},


    [ITEM_PSYCHIUM_Z] =
{
    .name = _("Psicostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Psíquico en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_PSYCHIC,
    .iconPic = gItemIcon_PsychiumZ,
    .iconPalette = gItemIconPalette_PsychiumZ,
},

[ITEM_BUGINIUM_Z] =
{
    .name = _("Insectostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Bicho en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_BUG,
    .iconPic = gItemIcon_BuginiumZ,
    .iconPalette = gItemIconPalette_BuginiumZ,
},

[ITEM_ROCKIUM_Z] =
{
    .name = _("Litostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Roca en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_ROCK,
    .iconPic = gItemIcon_RockiumZ,
    .iconPalette = gItemIconPalette_RockiumZ,
},

[ITEM_GHOSTIUM_Z] =
{
    .name = _("Espect. Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Fantasma en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_GHOST,
    .iconPic = gItemIcon_GhostiumZ,
    .iconPalette = gItemIconPalette_GhostiumZ,
},

[ITEM_DRAGONIUM_Z] =
{
    .name = _("Dracostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Dragón en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DRAGON,
    .iconPic = gItemIcon_DragoniumZ,
    .iconPalette = gItemIconPalette_DragoniumZ,
},

[ITEM_DARKINIUM_Z] =
{
    .name = _("Nictostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Siniestro en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_DARK,
    .iconPic = gItemIcon_DarkiniumZ,
    .iconPalette = gItemIconPalette_DarkiniumZ,
},

[ITEM_STEELIUM_Z] =
{
    .name = _("Metalostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Acero en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_STEEL,
    .iconPic = gItemIcon_SteeliumZ,
    .iconPalette = gItemIconPalette_SteeliumZ,
},

[ITEM_FAIRIUM_Z] =
{
    .name = _("Feeristal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza los movimientos\n"
        "de tipo Hada en\n"
        "Z-Moves."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = TYPE_FAIRY,
    .iconPic = gItemIcon_FairiumZ,
    .iconPalette = gItemIconPalette_FairiumZ,
},

[ITEM_PIKANIUM_Z] =
{
    .name = _("Pikastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Volt Tackle\n"
        "de Pikachu en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_PikaniumZ,
    .iconPalette = gItemIconPalette_PikaniumZ,
},

[ITEM_EEVIUM_Z] =
{
    .name = _("Eeveestal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Last Resort\n"
        "de Eevee en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_EeviumZ,
    .iconPalette = gItemIconPalette_EeviumZ,
},

[ITEM_SNORLIUM_Z] =
{
    .name = _("Snorlastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Giga Impact\n"
        "de Snorlax en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_SnorliumZ,
    .iconPalette = gItemIconPalette_SnorliumZ,
},

[ITEM_MEWNIUM_Z] =
{
    .name = _("Mewstal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Psíquico\n"
        "de Mew en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_MewniumZ,
    .iconPalette = gItemIconPalette_MewniumZ,
},

[ITEM_DECIDIUM_Z] =
{
    .name = _("Dueyestal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Spirit Shackle\n"
        "de Decidueye en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_DecidiumZ,
    .iconPalette = gItemIconPalette_DecidiumZ,
},

[ITEM_INCINIUM_Z] =
{
    .name = _("Incinostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Darkest Lariat\n"
        "de Incineroar en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_InciniumZ,
    .iconPalette = gItemIconPalette_InciniumZ,
},

[ITEM_PRIMARIUM_Z] =
{
    .name = _("Primastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Sparkling Aria\n"
        "de Primarina en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_PrimariumZ,
    .iconPalette = gItemIconPalette_PrimariumZ,
},

[ITEM_LYCANIUM_Z] =
{
    .name = _("Lycanrostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Stone Edge\n"
        "de Lycanroc en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_LycaniumZ,
    .iconPalette = gItemIconPalette_LycaniumZ,
},

[ITEM_MIMIKIUM_Z] =
{
    .name = _("Mimikyustal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Play Rough\n"
        "de Mimikyu en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_MimikiumZ,
    .iconPalette = gItemIconPalette_MimikiumZ,
},

[ITEM_KOMMONIUM_Z] =
{
    .name = _("Kommostal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Clanging Scales\n"
        "de Kommo-o en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_KommoniumZ,
    .iconPalette = gItemIconPalette_KommoniumZ,
},

[ITEM_TAPUNIUM_Z] =
{
    .name = _("Tapistal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Nature's Madness\n"
        "de los Tapus en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_TapuniumZ,
    .iconPalette = gItemIconPalette_TapuniumZ,
},

[ITEM_SOLGANIUM_Z] =
{
    .name = _("Solgastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Sunsteel Strike\n"
        "de Solgaleo en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_SolganiumZ,
    .iconPalette = gItemIconPalette_SolganiumZ,
},

[ITEM_LUNALIUM_Z] =
{
    .name = _("Lunalastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Moongeist Beam\n"
        "de Lunala en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_LunaliumZ,
    .iconPalette = gItemIconPalette_LunaliumZ,
},

[ITEM_MARSHADIUM_Z] =
{
    .name = _("Marshastal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Spectral Thief\n"
        "de Marshadow en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_MarshadiumZ,
    .iconPalette = gItemIconPalette_MarshadiumZ,
},

[ITEM_ALORAICHIUM_Z] =
{
    .name = _("Alo-Raistal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Thunderbolt\n"
        "de Raichu de Alola en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_AloraichiumZ,
    .iconPalette = gItemIconPalette_AloraichiumZ,
},

[ITEM_PIKASHUNIUM_Z] =
{
    .name = _("Ashtal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Actualiza el Thunderbolt\n"
        "de Pikachu con una gorra en un Z-Move."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255,  // Z-move exclusivo
    .iconPic = gItemIcon_PikashuniumZ,
    .iconPalette = gItemIconPalette_PikashuniumZ,
},

[ITEM_ULTRANECROZIUM_Z] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Ultranestal Z", "Ultranestal Z"),
    .price = 0,
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
    .description = COMPOUND_STRING(
        "Un cristal para transformar\n"
        "a Necrozma fusionado\n"
        "en una nueva forma."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = 255, // Z-move exclusivo
    .iconPic = gItemIcon_UltranecroziumZ,
    .iconPalette = gItemIconPalette_UltranecroziumZ,
},


// Species-specific Held Items

   [ITEM_LIGHT_BALL] =
{
    .name = _("Bola luminosa"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 100,
    .holdEffect = HOLD_EFFECT_LIGHT_BALL,
    .description = COMPOUND_STRING(
        "Un objeto que se sostiene\n"
        "y que aumenta el Ataque y\n"
        "el Ataque Especial de Pikachu."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_LightBall,
    .iconPalette = gItemIconPalette_LightBall,
},

[ITEM_LEEK] =
{
    .name = _("Puerro"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 200,
    .holdEffect = HOLD_EFFECT_LEEK,
    .description = COMPOUND_STRING(
        "Un objeto que se sostiene\n"
        "y que aumenta el ratio\n"
        "de golpe crítico de Farfetch'd."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_Leek,
    .iconPalette = gItemIconPalette_Leek,
},

[ITEM_THICK_CLUB] =
{
    .name = _("Hueso grueso"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 500,
    .holdEffect = HOLD_EFFECT_THICK_CLUB,
    .description = COMPOUND_STRING(
        "Un objeto que se sostiene\n"
        "y que aumenta el Ataque de\n"
        "Cubone o Marowak."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 90,
    .iconPic = gItemIcon_ThickClub,
    .iconPalette = gItemIconPalette_ThickClub,
},

[ITEM_LUCKY_PUNCH] =
{
    .name = _("Puño suerte"),
    .pluralName = _("Puños suerte"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 10,
    .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
    .description = COMPOUND_STRING(
        "Un objeto que se sostiene\n"
        "y que aumenta la tasa de\n"
        "golpes críticos de Chansey."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 40,
    .iconPic = gItemIcon_LuckyPunch,
    .iconPalette = gItemIconPalette_LuckyPunch,
},

[ITEM_METAL_POWDER] =
{
    .name = _("P. metálico"),
    .pluralName = _("P. metálico"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 10,
    .holdEffect = HOLD_EFFECT_METAL_POWDER,
    .description = COMPOUND_STRING(
        "Un objeto que se sostiene\n"
        "y que aumenta la Defensa de\n"
        "Ditto."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_MetalPowder,
    .iconPalette = gItemIconPalette_MetalPowder,
},

[ITEM_QUICK_POWDER] =
{
    .name = _("P. veloz"),
    .pluralName = _("P. veloces"),
    .price = (I_PRICE >= GEN_7) ? 1000 : 10,
    .holdEffect = HOLD_EFFECT_QUICK_POWDER,
    .description = COMPOUND_STRING(
        "Un objeto para ser sostenido\n"
        "por Ditto. Este polvo raro\n"
        "aumenta la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_QuickPowder,
    .iconPalette = gItemIconPalette_QuickPowder,
},

[ITEM_DEEP_SEA_SCALE] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Escama marina", "Escama marina"),
    .price = (I_PRICE >= GEN_7) ? 2000 : 200,
    .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
    .description = COMPOUND_STRING(
        "Un objeto que se sostiene\n"
        "y que aumenta la Defensa Especial\n"
        "de Clamperl."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_DeepSeaScale,
    .iconPalette = gItemIconPalette_DeepSeaScale,
},

[ITEM_DEEP_SEA_TOOTH] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Diente Marino", "Diente Marino"),
    .pluralName = _("Dientes Profundos"),
    .price = (I_PRICE >= GEN_7) ? 2000 : 200,
    .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
    .description = COMPOUND_STRING(
        "Un objeto que se sostiene\n"
        "y que aumenta el Ataque Especial\n"
        "de Clamperl."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 90,
    .iconPic = gItemIcon_DeepSeaTooth,
    .iconPalette = gItemIconPalette_DeepSeaTooth,
},

[ITEM_SOUL_DEW] =
{
    .name = _("Rocío bondad"),
    .price = (I_PRICE >= GEN_7) ? 0 : 200,
    .holdEffect = HOLD_EFFECT_SOUL_DEW,
    .holdEffectParam = B_SOUL_DEW_BOOST >= GEN_7 ? 20 : 50,
    .description = COMPOUND_STRING(
    #if B_SOUL_DEW_BOOST >= GEN_7
        "Aumenta el poder de los\n"
        "movimientos de tipo Psíquico y\n"
        "Dragón de Latios y Latias."),
    #else
        "Objeto que aumenta el\n"
        "Ataque Especial y la Defensa\n"
        "Especial de Latios y Latias."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_SoulDew,
    .iconPalette = gItemIconPalette_SoulDew,
},

[ITEM_ADAMANT_ORB] =
{
    .name = _("Diamansfera"),
    .price = (I_PRICE >= GEN_7) ? 0 : 10000,
    .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Aumenta el poder de los\n"
        "movimientos de tipo Dragón y\n"
        "Acero de Dialga."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_AdamantOrb,
    .iconPalette = gItemIconPalette_AdamantOrb,
},

[ITEM_LUSTROUS_ORB] =
{
    .name = _("Lustresfera"),
    .price = (I_PRICE >= GEN_7) ? 0 : 10000,
    .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Aumenta el poder de los\n"
        "movimientos de tipo Dragón y\n"
        "Agua de Palkia."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_LustrousOrb,
    .iconPalette = gItemIconPalette_LustrousOrb,
},

[ITEM_GRISEOUS_ORB] =
{
    .name = _("Griseosfera"),
    .price = (I_PRICE >= GEN_7) ? 0 : 10000,
    .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Aumenta el poder de los\n"
        "movimientos de tipo Dragón y\n"
        "Fantasma de Giratina."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_GriseousOrb,
    .iconPalette = gItemIconPalette_GriseousOrb,
},

// Incenses

    [ITEM_SEA_INCENSE] =
    {
        .name = _("Inc. marino"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_SeaIncense,
        .iconPalette = gItemIconPalette_SeaIncense,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = _("Inc. suave"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Un objeto de agarre que\n"
            "reduce ligeramente la\n"
            "precisión del oponente."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LaxIncense,
        .iconPalette = gItemIconPalette_LaxIncense,
    },

    [ITEM_ODD_INCENSE] =
    {
        .name = _("Inc. raro"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
        .description = sOddIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_OddIncense,
        .iconPalette = gItemIconPalette_OddIncense,
    },

    [ITEM_ROCK_INCENSE] =
    {
        .name = _("Inc. roca"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = sRockIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RockIncense,
        .iconPalette = gItemIconPalette_RockIncense,
    },

    [ITEM_FULL_INCENSE] =
    {
        .name = _("Inc. lento"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
        .description = sFullIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_FullIncense,
        .iconPalette = gItemIconPalette_FullIncense,
    },

    [ITEM_WAVE_INCENSE] =
    {
        .name = _("Inc. acua"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WaveIncense,
        .iconPalette = gItemIconPalette_WaveIncense,
    },

    [ITEM_ROSE_INCENSE] =
    {
        .name = _("Inc. floral"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_RoseIncense,
        .iconPalette = gItemIconPalette_RoseIncense,
    },

    [ITEM_LUCK_INCENSE] =
    {
        .name = _("Inc. duplo"),
        .price = (I_PRICE >= GEN_7) ? 11000 : 9600,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_LuckIncense,
        .iconPalette = gItemIconPalette_LuckIncense,
    },

    [ITEM_PURE_INCENSE] =
    {
        .name = _("Inc. puro"),
        .price = (I_PRICE >= GEN_7) ? 6000 : 9600,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_PureIncense,
        .iconPalette = gItemIconPalette_PureIncense,
    },

// Contest Scarves

    [ITEM_RED_SCARF] =
{
    .name = _("Pañuelo roja"),
    .pluralName = _("Pañuelos rojas"),
    .price = 100,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el Carisma en\n"
        "los Concursos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_Scarf,
    .iconPalette = gItemIconPalette_RedScarf,
},

[ITEM_BLUE_SCARF] =
{
    .name = _("Pañuelo azul"),
    .pluralName = _("Pañuelos azules"),
    .price = 100,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta la Belleza en\n"
        "los Concursos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_Scarf,
    .iconPalette = gItemIconPalette_BlueScarf,
},

[ITEM_PINK_SCARF] =
{
    .name = _("Pañuelo rosa"),
    .pluralName = _("Pañuelos rosas"),
    .price = 100,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el Encanto en\n"
        "los Concursos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_Scarf,
    .iconPalette = gItemIconPalette_PinkScarf,
},

[ITEM_GREEN_SCARF] =
{
    .name = _("Pañuelo verde"),
    .pluralName = _("Pañuelos verdes"),
    .price = 100,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta la Inteligencia en\n"
        "los Concursos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_Scarf,
    .iconPalette = gItemIconPalette_GreenScarf,
},

[ITEM_YELLOW_SCARF] =
{
    .name = _("Pañuelo Amar"),
    .pluralName = _("Pañuelos Amar"),
    .price = 100,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta la Dureza en\n"
        "los Concursos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_Scarf,
    .iconPalette = gItemIconPalette_YellowScarf,
},


// EV Gain Modifiers

    [ITEM_MACHO_BRACE] =
{
    .name = _("Brazal firme"),
    .price = 3000,
    .holdEffect = HOLD_EFFECT_MACHO_BRACE,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "promueve el crecimiento,\n"
        "pero reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_MachoBrace,
    .iconPalette = gItemIconPalette_MachoBrace,
},

[ITEM_POWER_WEIGHT] =
{
    .name = _("Pesa recia"),
    .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
    .holdEffect = HOLD_EFFECT_POWER_ITEM,
    .holdEffectParam = POWER_ITEM_BOOST,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "promueve el aumento de HP,\n"
        "pero reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = STAT_HP,
    .flingPower = 70,
    .iconPic = gItemIcon_PowerWeight,
    .iconPalette = gItemIconPalette_PowerWeight,
},

[ITEM_POWER_BRACER] =
{
    .name = _("Brazal recio"),
    .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
    .holdEffect = HOLD_EFFECT_POWER_ITEM,
    .holdEffectParam = POWER_ITEM_BOOST,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "promueve el aumento de Atq,\n"
        "pero reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = STAT_ATK,
    .flingPower = 70,
    .iconPic = gItemIcon_PowerBracer,
    .iconPalette = gItemIconPalette_PowerBracer,
},

[ITEM_POWER_BELT] =
{
    .name = _("Cinto recio"),
    .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
    .holdEffect = HOLD_EFFECT_POWER_ITEM,
    .holdEffectParam = POWER_ITEM_BOOST,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "promueve el aumento de Def,\n"
        "pero reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = STAT_DEF,
    .flingPower = 70,
    .iconPic = gItemIcon_PowerBelt,
    .iconPalette = gItemIconPalette_PowerBelt,
},

[ITEM_POWER_LENS] =
{
    .name = _("Lente recia"),
    .pluralName = _("Lentes recias"),
    .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
    .holdEffect = HOLD_EFFECT_POWER_ITEM,
    .holdEffectParam = POWER_ITEM_BOOST,
    .description = COMPOUND_STRING(
        "Objeto de agarre que\n"
        "aumenta de Sp. Atq,\n"
        "pero reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = STAT_SPATK,
    .flingPower = 70,
    .iconPic = gItemIcon_PowerLens,
    .iconPalette = gItemIconPalette_PowerLens,
},

[ITEM_POWER_BAND] =
{
    .name = _("Banda recia"),
    .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
    .holdEffect = HOLD_EFFECT_POWER_ITEM,
    .holdEffectParam = POWER_ITEM_BOOST,
    .description = COMPOUND_STRING(
        "Objeto de agarre que\n"
        "aumenta de Sp. Def,\n"
        "pero reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = STAT_SPDEF,
    .flingPower = 70,
    .iconPic = gItemIcon_PowerBand,
    .iconPalette = gItemIconPalette_PowerBand,
},

[ITEM_POWER_ANKLET] =
{
    .name = _("Franja recia"),
    .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
    .holdEffect = HOLD_EFFECT_POWER_ITEM,
    .holdEffectParam = POWER_ITEM_BOOST,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "promueve el aumento de Spd,\n"
        "pero reduce la Velocidad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .secondaryId = STAT_SPEED,
    .flingPower = 70,
    .iconPic = gItemIcon_PowerAnklet,
    .iconPalette = gItemIconPalette_PowerAnklet,
},


// Type-boosting Held Items

    [ITEM_SILK_SCARF] =
{
    .name = _("Pañuelo Seda"),
    .pluralName = _("Pañuelos Seda"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_NORMAL_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Normal."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_SilkScarf,
    .iconPalette = gItemIconPalette_SilkScarf,
},

[ITEM_CHARCOAL] =
{
    .name = _("Carbón"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 9800),
    .holdEffect = HOLD_EFFECT_FIRE_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Fuego."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_Charcoal,
    .iconPalette = gItemIconPalette_Charcoal,
},

[ITEM_MYSTIC_WATER] =
{
    .name = _("Agua Mística"),
    .pluralName = _("Aguas Místicas"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_WATER_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Agua."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_MysticWater,
    .iconPalette = gItemIconPalette_MysticWater,
},

[ITEM_MAGNET] =
{
    .name = _("Imán"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Eléctrico."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_Magnet,
    .iconPalette = gItemIconPalette_Magnet,
},

[ITEM_MIRACLE_SEED] =
{
    .name = _("Sem. Milagro"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_GRASS_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Planta."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_MiracleSeed,
    .iconPalette = gItemIconPalette_MiracleSeed,
},

[ITEM_NEVER_MELT_ICE] =
{
    .name = _("Hielo Eterno"),
    .pluralName = _("Hielos Eternos"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_ICE_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Hielo."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_NeverMeltIce,
    .iconPalette = gItemIconPalette_NeverMeltIce,
},

[ITEM_BLACK_BELT] =
{
    .name = _("Cinto Negro"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Lucha."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_BlackBelt,
    .iconPalette = gItemIconPalette_BlackTypeEnhancingItem,
},

[ITEM_POISON_BARB] =
{
    .name = _("Púa veneno"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_POISON_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Veneno."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 70,
    .iconPic = gItemIcon_PoisonBarb,
    .iconPalette = gItemIconPalette_PoisonBarb,
},

[ITEM_SOFT_SAND] =
{
    .name = _("Arena fina"),
    .pluralName = _("Arenas finas"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_GROUND_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Tierra."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_SoftSand,
    .iconPalette = gItemIconPalette_SoftSand,
},

[ITEM_SHARP_BEAK] =
{
    .name = _("Pico afilado"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_FLYING_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Volador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 50,
    .iconPic = gItemIcon_SharpBeak,
    .iconPalette = gItemIconPalette_SharpBeak,
},

[ITEM_TWISTED_SPOON] =
{
    .name = _("Cúchara torcida"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Psíquico."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_TwistedSpoon,
    .iconPalette = gItemIconPalette_TwistedSpoon,
},

[ITEM_SILVER_POWDER] =
{
    .name = _("Polvo Plata"),
    .pluralName = _("Polvos Plata"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_BUG_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Bicho."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_SilverPowder,
    .iconPalette = gItemIconPalette_SilverPowder,
},

[ITEM_HARD_STONE] =
{
    .name = _("Piedra dura"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_ROCK_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Roca."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 100,
    .iconPic = gItemIcon_HardStone,
    .iconPalette = gItemIconPalette_HardStone,
},

[ITEM_SPELL_TAG] =
{
    .name = _("E. Mística"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_GHOST_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Fantasma."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_SpellTag,
    .iconPalette = gItemIconPalette_SpellTag,
},

[ITEM_DRAGON_FANG] =
{
    .name = _("Colm. Dragón"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_DRAGON_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Dragón."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 70,
    .iconPic = gItemIcon_DragonFang,
    .iconPalette = gItemIconPalette_DragonFang,
},

[ITEM_BLACK_GLASSES] =
{
    .name = _("Gafa oscura"),
    .pluralName = _("Gafas oscuras"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
    .holdEffect = HOLD_EFFECT_DARK_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Sombra."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_BlackGlasses,
    .iconPalette = gItemIconPalette_BlackTypeEnhancingItem,
},

[ITEM_METAL_COAT] =
{
    .name = _("Abrigo met."),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 2000 : 100),
    .holdEffect = HOLD_EFFECT_STEEL_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto de agarre que\n"
        "aumenta el poder de\n"
        "los movimientos de tipo Acero."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_MetalCoat,
    .iconPalette = gItemIconPalette_MetalCoat,
},


// Choice Items

    [ITEM_CHOICE_BAND] =
{
    .name = _("Banda Elec."),
    .price = (I_PRICE >= GEN_9) ? 100000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_CHOICE_BAND,
    .description = COMPOUND_STRING(
        "Aumenta el Ataque, pero\n"
        "permite usar solo\n"
        "un movimiento."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ChoiceBand,
    .iconPalette = gItemIconPalette_ChoiceBand,
},

[ITEM_CHOICE_SPECS] =
{
    .name = _("Gafas Elec."),
    .pluralName = _("Gafas Elec."),
    .price = (I_PRICE >= GEN_9) ? 100000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
    .description = COMPOUND_STRING(
        "Aumenta el Sp. Atk, pero\n"
        "permite usar solo\n"
        "un movimiento."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ChoiceSpecs,
    .iconPalette = gItemIconPalette_ChoiceSpecs,
},

[ITEM_CHOICE_SCARF] =
{
    .name = _("Bufanda Elec."),
    .pluralName = _("Bufandas Elec."),
    .price = (I_PRICE >= GEN_9) ? 100000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
    .description = COMPOUND_STRING(
        "Aumenta la Velocidad, pero\n"
        "permite usar solo\n"
        "un movimiento."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ChoiceScarf,
    .iconPalette = gItemIconPalette_ChoiceScarf,
},


// Status Orbs

    [ITEM_FLAME_ORB] =
{
    .name = _("Orbe Llamas"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_FLAME_ORB,
    .description = COMPOUND_STRING(
        "Un orbe extraño que\n"
        "inflige una quemadura\n"
        "al portador en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_FlameOrb,
    .iconPalette = gItemIconPalette_FlameOrb,
},

[ITEM_TOXIC_ORB] =
{
    .name = _("Orbe Tóxico"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_TOXIC_ORB,
    .description = COMPOUND_STRING(
        "Un orbe extraño que\n"
        "envenena gravemente\n"
        "al portador en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_ToxicOrb,
    .iconPalette = gItemIconPalette_ToxicOrb,
},

// Weather Rocks

    [ITEM_DAMP_ROCK] =
{
    .name = _("Roca lluvia"),
    .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_DAMP_ROCK,
    .description = COMPOUND_STRING(
        "Extiende la duración\n"
        "de Danza Lluvia si\n"
        "es usado por el portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_DampRock,
    .iconPalette = gItemIconPalette_DampRock,
},

[ITEM_HEAT_ROCK] =
{
    .name = _("Roca calor"),
    .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_HEAT_ROCK,
    .description = COMPOUND_STRING(
        "Extiende la duración\n"
        "de Día Soleado si\n"
        "es usado por el portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_HeatRock,
    .iconPalette = gItemIconPalette_HeatRock,
},

[ITEM_SMOOTH_ROCK] =
{
    .name = _("Roca suave"),
    .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
    .description = COMPOUND_STRING(
        "Extiende la duración\n"
        "de Tormenta Arena si\n"
        "es usado por el portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_SmoothRock,
    .iconPalette = gItemIconPalette_SmoothRock,
},

[ITEM_ICY_ROCK] =
{
    .name = _("Roca helada"),
    .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_ICY_ROCK,
    .description = COMPOUND_STRING(
        "Extiende la duración\n"
        "del movimiento Granizo\n"
        "si es usado por el portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 40,
    .iconPic = gItemIcon_IcyRock,
    .iconPalette = gItemIconPalette_IcyRock,
},


// Terrain Seeds

    [ITEM_ELECTRIC_SEED] =
{
    .name = _("Sem. Eléctro"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
    .holdEffect = HOLD_EFFECT_SEEDS,
    .holdEffectParam = HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN,
    .description = COMPOUND_STRING(
        "Aumenta la Defensa en\n"
        "Terreno Eléctrico,\n"
        "pero solo una vez."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ElectricSeed,
    .iconPalette = gItemIconPalette_ElectricSeed,
},

[ITEM_PSYCHIC_SEED] =
{
    .name = _("Sem. Psíquica"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
    .holdEffect = HOLD_EFFECT_SEEDS,
    .holdEffectParam = HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN,
    .description = COMPOUND_STRING(
        "Aumenta la Sp. Def. en\n"
        "Terreno Psíquico,\n"
        "pero solo una vez."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PsychicSeed,
    .iconPalette = gItemIconPalette_PsychicSeed,
},

[ITEM_MISTY_SEED] =
{
    .name = _("Sem. Bruma"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
    .holdEffect = HOLD_EFFECT_SEEDS,
    .holdEffectParam = HOLD_EFFECT_PARAM_MISTY_TERRAIN,
    .description = COMPOUND_STRING(
        "Aumenta la Sp. Def. en\n"
        "Terreno Nebuloso,\n"
        "pero solo una vez."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_MistySeed,
    .iconPalette = gItemIconPalette_MistySeed,
},

[ITEM_GRASSY_SEED] =
{
    .name = _("Sem. Planta"),
    .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
    .holdEffect = HOLD_EFFECT_SEEDS,
    .holdEffectParam = HOLD_EFFECT_PARAM_GRASSY_TERRAIN,
    .description = COMPOUND_STRING(
        "Aumenta la Defensa en\n"
        "Terreno Herbáceo,\n"
        "pero solo una vez."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_GrassySeed,
    .iconPalette = gItemIconPalette_GrassySeed,
},


// Type-activated Stat Modifiers

    [ITEM_ABSORB_BULB] =
{
    .name = _("Túberculo"),
    .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_ABSORB_BULB,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Aumenta la Sp. Atk si\n"
        "el portador recibe un\n"
        "movimiento de tipo Agua."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_AbsorbBulb,
    .iconPalette = gItemIconPalette_AbsorbBulb,
},

[ITEM_CELL_BATTERY] =
{
    .name = _("Pila"),
    .pluralName = _("Pilas"),
    .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_CELL_BATTERY,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Aumenta el Atk si el\n"
        "portador recibe un\n"
        "movimiento de tipo Eléctrico."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_CellBattery,
    .iconPalette = gItemIconPalette_CellBattery,
},

[ITEM_LUMINOUS_MOSS] =
{
    .name = _("Musgo Lum."),
    .pluralName = _("Musgo Lum."),
    .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 1000),
    .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Aumenta la Sp. Def si\n"
        "el portador recibe un\n"
        "movimiento de tipo Agua."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_LuminousMoss,
    .iconPalette = gItemIconPalette_LuminousMoss,
},

[ITEM_SNOWBALL] =
{
    .name = _("Bola de nieve"),
    .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_SNOWBALL,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Aumenta el Atk si el\n"
        "portador recibe un\n"
        "movimiento de tipo Hielo."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_Snowball,
    .iconPalette = gItemIconPalette_Snowball,
},


// Misc. Held Items

    [ITEM_BRIGHT_POWDER] =
{
    .name = _("Polvo Brillo"),
    .pluralName = _("Polvos Brillo"),
    .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 10),
    .holdEffect = HOLD_EFFECT_EVASION_UP,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "emite un resplandor\n"
        "para reducir la precisión."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_BrightPowder,
    .iconPalette = gItemIconPalette_BrightPowder,
},

[ITEM_WHITE_HERB] =
{
    .name = _("Hierba Blanca"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_RESTORE_STATS,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "restaura cualquier\n"
        "estadística reducida."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_InBattleHerb,
    .iconPalette = gItemIconPalette_WhiteHerb,
},

[ITEM_EXP_SHARE] =
{
    .name = _("Repartir exp."),
    .holdEffect = HOLD_EFFECT_EXP_SHARE,
    #if I_EXP_SHARE_ITEM >= GEN_6
        .price = 0,
        .description = COMPOUND_STRING(
            "Este dispositivo otorga\n"
            "exp. a otros miembros\n"
            "del equipo."),
    #else
        .price = 3000,
        .description = COMPOUND_STRING(
            "Un objeto que recibe Exp.\n"
            "de las batallas."),
    #endif
    .pocket = I_EXP_SHARE_ITEM >= GEN_6 ? POCKET_KEY_ITEMS : POCKET_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
    .flingPower = 30,
    .iconPic = gItemIcon_ExpShare,
    .iconPalette = gItemIconPalette_ExpShare,
},

[ITEM_QUICK_CLAW] =
{
    .name = _("Garra rápida"),
    .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_QUICK_CLAW,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "ocasionalmente permite\n"
        "atacar primero."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_QuickClaw,
    .iconPalette = gItemIconPalette_QuickClaw,
},

[ITEM_SOOTHE_BELL] =
{
    .name = _("Campana calma"),
    .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "calma los espíritus y\n"
        "fomenta la amistad."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_SootheBell,
    .iconPalette = gItemIconPalette_SootheBell,
},

[ITEM_MENTAL_HERB] =
{
    .name = _("Hierba Mental"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_MENTAL_HERB,
    .description = COMPOUND_STRING(
    #if B_MENTAL_HERB >= GEN_5
        "Libera a los Pokémon\n"
        "de efectos de\n"
        "ataduras de movimientos."),
    #else
        "Un objeto que libera\n"
        "a los Pokémon de la\n"
        "enamoramiento."),
    #endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_InBattleHerb,
    .iconPalette = gItemIconPalette_MentalHerb,
},

[ITEM_KINGS_ROCK] =
{
    .name = _("Roca del rey"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 5000 : 100),
    .holdEffect = HOLD_EFFECT_FLINCH,
    .holdEffectParam = 10,
    .description = sKingsRockDesc,
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_KingsRock,
    .iconPalette = gItemIconPalette_KingsRock,
},

[ITEM_AMULET_COIN] =
{
    .name = _("Mon. Amuleto"),
    .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 10000 : 100),
    .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
    .description = sLuckIncenseDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_AmuletCoin,
    .iconPalette = gItemIconPalette_AmuletCoin,
},

[ITEM_CLEANSE_TAG] =
{
    .name = _("Amuleto Puro"),
    .price = (I_PRICE >= GEN_7) ? 5000 : 200,
    .holdEffect = HOLD_EFFECT_REPEL,
    .description = sPureIncenseDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_CleanseTag,
    .iconPalette = gItemIconPalette_CleanseTag,
},

[ITEM_SMOKE_BALL] =
{
    .name = _("Bola de humo"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
    .description = COMPOUND_STRING(
        "Un objeto que asegura\n"
        "la huida de Pokémon\n"
        "salvajes."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_SmokeBall,
    .iconPalette = gItemIconPalette_SmokeBall,
},

[ITEM_FOCUS_BAND] =
{
    .name = _("Banda focus"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_FOCUS_BAND,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Un objeto que ocasionalmente\n"
        "previene el desmayo."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_FocusBand,
    .iconPalette = gItemIconPalette_FocusBand,
},

[ITEM_LUCKY_EGG] =
{
    .name = _("Huevo suerte"),
    .price = (I_PRICE >= GEN_7) ? 10000 : 200,
    .holdEffect = HOLD_EFFECT_LUCKY_EGG,
    .description = COMPOUND_STRING(
        "Un objeto que aumenta los\n"
        "Puntos de Exp. obtenidos en\n"
        "la batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_LuckyEgg,
    .iconPalette = gItemIconPalette_LuckyEgg,
},

[ITEM_SCOPE_LENS] =
{
    .name = _("Lupa enfoque"),
    .pluralName = _("Lupas enfoque"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_SCOPE_LENS,
    .description = COMPOUND_STRING(
        "Un objeto que mejora la\n"
        "probabilidad de golpes críticos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_ScopeLens,
    .iconPalette = gItemIconPalette_ScopeLens,
},

[ITEM_LEFTOVERS] =
{
    .name = _("Restos"),
    .pluralName = _("Restos"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_LEFTOVERS,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Un objeto que restaura\n"
        "gradualmente los PS en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_Leftovers,
    .iconPalette = gItemIconPalette_Leftovers,
},

[ITEM_SHELL_BELL] =
{
    .name = _("Camp. Concha"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_SHELL_BELL,
    .holdEffectParam = 8,
    .description = COMPOUND_STRING(
        "Un objeto que restaura PS al\n"
        "atacar al oponente."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_ShellBell,
    .iconPalette = gItemIconPalette_Shell,
},

[ITEM_WIDE_LENS] =
{
    .name = _("Lente angular"),
    .pluralName = _("Lentes angular"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_WIDE_LENS,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Una lente de aumento\n"
        "que aumenta la precisión\n"
        "de los movimientos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_WideLens,
    .iconPalette = gItemIconPalette_WideLens,
},

[ITEM_MUSCLE_BAND] =
{
    .name = _("Banda fuerte"),
    .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Una cinta que aumenta el\n"
        "poder de los movimientos físicos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_MuscleBand,
    .iconPalette = gItemIconPalette_MuscleBand,
},

[ITEM_WISE_GLASSES] =
{
    .name = _("Gafas sabias"),
    .pluralName = _("Gafas sabias"),
    .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_WISE_GLASSES,
    .holdEffectParam = 10,
    .description = COMPOUND_STRING(
        "Un par de gafas que aumenta\n"
        "el poder de los movimientos especiales."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_WiseGlasses,
    .iconPalette = gItemIconPalette_WiseGlasses,
},

[ITEM_EXPERT_BELT] =
{
    .name = _("Cinto Experto"),
    .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_EXPERT_BELT,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Un cinturón que aumenta el\n"
        "poder de los movimientos súper efectivos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ExpertBelt,
    .iconPalette = gItemIconPalette_ExpertBelt,
},

[ITEM_LIGHT_CLAY] =
{
    .name = _("Arc. Ligera"),
    .pluralName = _("Arc. Ligeras"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
    .description = COMPOUND_STRING(
        "Extiende la duración\n"
        "de los movimientos de barrera\n"
        "usados por el portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_LightClay,
    .iconPalette = gItemIconPalette_LightClay,
},

    [ITEM_LIFE_ORB] =
{
    .name = _("Orbe vida"),
    .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_LIFE_ORB,
    .description = COMPOUND_STRING(
        "Aumenta el poder de\n"
        "los movimientos a cambio\n"
        "de algunos PS por turno."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_LifeOrb,
    .iconPalette = gItemIconPalette_LifeOrb,
},

[ITEM_POWER_HERB] =
{
    .name = _("Hierba pod."),
    .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_POWER_HERB,
    .description = COMPOUND_STRING(
        "Permite el uso inmediato\n"
        "de un movimiento que\n"
        "normalmente requiere carga."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PowerHerb,
    .iconPalette = gItemIconPalette_PowerHerb,
},

[ITEM_FOCUS_SASH] =
{
    .name = _("Banda enfoque"),
    .pluralName = _("Bandas enfoque"),
    .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_FOCUS_SASH,
    .description = COMPOUND_STRING(
        "Si el portador tiene\n"
        "PS completos, soporta\n"
        "los golpes que lo derriban\n"
        "a 1 PS."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_FocusSash,
    .iconPalette = gItemIconPalette_FocusSash,
},

[ITEM_ZOOM_LENS] =
{
    .name = _("Lupa aum."),
    .pluralName = _("Lupa aum."),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_ZOOM_LENS,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Si el portador se mueve\n"
        "después del oponente,\n"
        "aumenta la precisión."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ZoomLens,
    .iconPalette = gItemIconPalette_ZoomLens,
},

[ITEM_METRONOME] =
{
    .name = _("Metrónomo"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_METRONOME,
    .holdEffectParam = 20,
    .description = COMPOUND_STRING(
        "Un objeto que aumenta\n"
        "el poder de un movimiento\n"
        "usado consecutivamente."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_Metronome,
    .iconPalette = gItemIconPalette_Metronome,
},

[ITEM_IRON_BALL] =
{
    .name = _("Bola Férrea"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_IRON_BALL,
    .description = COMPOUND_STRING(
        "Reduce la Velocidad y\n"
        "permite que los Pokémon de\n"
        "tipo Volador sean afectados\n"
        "por movimientos de tipo Tierra."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 130,
    .iconPic = gItemIcon_IronBall,
    .iconPalette = gItemIconPalette_IronBall,
},

[ITEM_LAGGING_TAIL] =
{
    .name = _("Cola rezagada"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
    .description = sFullIncenseDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_LaggingTail,
    .iconPalette = gItemIconPalette_LaggingTail,
},

[ITEM_DESTINY_KNOT] =
{
    .name = _("Nudo destino"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
    .description = COMPOUND_STRING(
        "Si el portador se enamora,\n"
        "el oponente también lo hace."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_DestinyKnot,
    .iconPalette = gItemIconPalette_DestinyKnot,
},

[ITEM_BLACK_SLUDGE] =
{
    .name = _("Lodo negro"),
    .pluralName = _("Lodos negros"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
    .description = COMPOUND_STRING(
        "Restaura gradualmente\n"
        "los PS de los Pokémon de tipo\n"
        "Veneno. Daña a otros tipos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_BlackSludge,
    .iconPalette = gItemIconPalette_BlackSludge,
},

[ITEM_GRIP_CLAW] =
{
    .name = _("Garra agarre"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_GRIP_CLAW,
    .description = COMPOUND_STRING(
        "Hace que los movimientos de\n"
        "atadura usados por el portador\n"
        "duren 7 turnos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 90,
    .iconPic = gItemIcon_GripClaw,
    .iconPalette = gItemIconPalette_GripClaw,
},

[ITEM_STICKY_BARB] =
{
    .name = _("Barba peg."),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_STICKY_BARB,
    .description = COMPOUND_STRING(
        "Daño al portador cada turno.\n"
        "Puede engancharse a los\n"
        "oponentes."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 80,
    .iconPic = gItemIcon_StickyBarb,
    .iconPalette = gItemIconPalette_StickyBarb,
},

[ITEM_SHED_SHELL] =
{
    .name = _("C. Muda"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
    .holdEffect = HOLD_EFFECT_SHED_SHELL,
    .description = COMPOUND_STRING(
        "Permite al portador salir de\n"
        "la batalla sin fallar."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ShedShell,
    .iconPalette = gItemIconPalette_ShedShell,
},

[ITEM_BIG_ROOT] =
{
    .name = _("Raíz grande"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_BIG_ROOT,
    .holdEffectParam = 30,
    .description = COMPOUND_STRING(
        "Un objeto que aumenta el\n"
        "poder de los movimientos que\n"
        "recuperan PS."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_BigRoot,
    .iconPalette = gItemIconPalette_BigRoot,
},

[ITEM_RAZOR_CLAW] =
{
    .name = _("Garra afilada"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 5000 : 2100),
    .holdEffect = HOLD_EFFECT_SCOPE_LENS,
    .description = COMPOUND_STRING(
        "Una garra afilada que\n"
        "aumenta el ratio de\n"
        "golpes críticos del portador."),
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_RazorClaw,
    .iconPalette = gItemIconPalette_RazorClaw,
},

[ITEM_RAZOR_FANG] =
{
    .name = _("Colm. Afilado"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 5000 : 2100),
    .holdEffect = HOLD_EFFECT_FLINCH,
    .holdEffectParam = 10,
    .description = sKingsRockDesc,
    .pocket = POCKET_ITEMS,
    .type = EVO_HELD_ITEM_TYPE,
    .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_RazorFang,
    .iconPalette = gItemIconPalette_RazorFang,
},

[ITEM_EVIOLITE] =
{
    .name = _("Eviolita"),
    .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_EVIOLITE,
    .holdEffectParam = 50,
    .description = COMPOUND_STRING(
        "Aumenta la Def y la\n"
        "Def. Esp. de los Pokémon\n"
        "que pueden evolucionar."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 40,
    .iconPic = gItemIcon_Eviolite,
    .iconPalette = gItemIconPalette_Eviolite,
},

[ITEM_FLOAT_STONE] =
{
    .name = _("Piedra ligera"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_FLOAT_STONE,
    .description = COMPOUND_STRING(
        "Es tan ligera que, al ser\n"
        "sostenida, reduce a la mitad\n"
        "el peso de un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_FloatStone,
    .iconPalette = gItemIconPalette_FloatStone,
},

[ITEM_ROCKY_HELMET] =
{
    .name = _("Casco dentado"),
    .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Daño al oponente si\n"
        "entran en contacto con\n"
        "el portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_RockyHelmet,
    .iconPalette = gItemIconPalette_RockyHelmet,
},

[ITEM_AIR_BALLOON] =
{
    .name = _("Globo helio"),
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_AIR_BALLOON,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Eleva al portador en el aire.\n"
        "Si es golpeado, este objeto\n"
        "explotará."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_AirBalloon,
    .iconPalette = gItemIconPalette_AirBalloon,
},

[ITEM_RED_CARD] =
{
    .name = _("Tarjeta roja"),
    .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_RED_CARD,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Saca al oponente si\n"
        "golpea al portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RedCard,
    .iconPalette = gItemIconPalette_RedCard,
},

[ITEM_RING_TARGET] =
{
    .name = _("Blanco"),
    .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_RING_TARGET,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Movimientos que normalmente\n"
        "no tendrían efecto sí\n"
        "afectarán al portador."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RingTarget,
    .iconPalette = gItemIconPalette_RingTarget,
},

[ITEM_BINDING_BAND] =
{
    .name = _("Banda atadura"),
    .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_BINDING_BAND,
    .description = COMPOUND_STRING(
        "Aumenta el poder de los\n"
        "movimientos de atadura\n"
        "cuando se sostiene."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_BindingBand,
    .iconPalette = gItemIconPalette_BindingBand,
},

[ITEM_EJECT_BUTTON] =
{
    .name = _("Botón escape"),
    .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
    .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
    .holdEffectParam = 0,
    .description = COMPOUND_STRING(
        "Saca al usuario de la batalla\n"
        "si es golpeado por el oponente."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 30,
    .iconPic = gItemIcon_EjectButton,
    .iconPalette = gItemIconPalette_EjectButton,
},

        [ITEM_WEAKNESS_POLICY] =
    {
        .name = _("Seguro deb."),
        .pluralName = _("Seguros deb."),
        .price = (I_PRICE >= GEN_9) ? 50000 : 1000,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Si el Pokémon es golpeado\n"
            "por un movimiento Súper\n"
            "Eficaz, aumenta su Atk\n"
            "y Sp. Atk."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_WeaknessPolicy,
        .iconPalette = gItemIconPalette_WeaknessPolicy,
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = _("Chaleco asalto"),
        .price = (I_PRICE >= GEN_9) ? 50000 : 1000,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "Aumenta la Sp. Def pero\n"
            "previene el uso de\n"
            "movimientos de estado."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_AssaultVest,
        .iconPalette = gItemIconPalette_AssaultVest,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = _("Gafa protec"),
        .pluralName = _("Gafas protec"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 1000),
        .holdEffect = HOLD_EFFECT_SAFETY_GOGGLES,
        .description = COMPOUND_STRING(
            "Protege contra el daño\n"
            "del clima y los movimientos\n"
            "en polvo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_SafetyGoggles,
        .iconPalette = gItemIconPalette_SafetyGoggles,
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = _("Nerviosfera"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_8) ? 4000 : 300),
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .description = COMPOUND_STRING(
            "Aumenta la Velocidad si el\n"
            "usuario está intimidado,\n"
            "pero solo una vez."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_AdrenalineOrb,
        .iconPalette = gItemIconPalette_AdrenalineOrb,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = _("Cubresuelos"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = COMPOUND_STRING(
            "Extiende la duración del\n"
            "terreno de batalla activo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_TerrainExtender,
        .iconPalette = gItemIconPalette_TerrainExtender,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = _("Paracontacto"),
        .pluralName = _("Paracontactos"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .description = COMPOUND_STRING(
            "Protege al portador de los\n"
            "efectos de movimientos de\n"
            "contacto."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ProtectivePads,
        .iconPalette = gItemIconPalette_ProtectivePads,
    },

    [ITEM_THROAT_SPRAY] =
    {
        .name = _("Espray bucal"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_THROAT_SPRAY,
        .description = COMPOUND_STRING(
            "Aumenta la Sp. Atk si el\n"
            "portador usa un movimiento\n"
            "basado en sonido."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ThroatSpray,
        .iconPalette = gItemIconPalette_ThroatSpray,
    },

    [ITEM_EJECT_PACK] =
    {
        .name = _("Moch. escape"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_EJECT_PACK,
        .description = COMPOUND_STRING(
            "Fuerza al usuario a cambiar\n"
            "si sus estadísticas son\n"
            "bajadas."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 50,
        .iconPic = gItemIcon_EjectPack,
        .iconPalette = gItemIconPalette_EjectPack,
    },

    [ITEM_HEAVY_DUTY_BOOTS] =
    {
        .name = _("Botas gruesas"),
        .pluralName = _("Botas gruesas"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_HEAVY_DUTY_BOOTS,
        .description = COMPOUND_STRING(
            "Botas que previenen los\n"
            "efectos de trampas en el\n"
            "campo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_HeavyDutyBoots,
        .iconPalette = gItemIconPalette_HeavyDutyBoots,
    },

    [ITEM_BLUNDER_POLICY] =
    {
        .name = _("Seguro fallo"),
        .pluralName = _("Seguro fallo"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_BLUNDER_POLICY,
        .description = COMPOUND_STRING(
            "Aumenta la Velocidad si\n"
            "el usuario falla por\n"
            "precisión."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        .iconPic = gItemIcon_BlunderPolicy,
        .iconPalette = gItemIconPalette_BlunderPolicy,
    },

    [ITEM_ROOM_SERVICE] =
    {
        .name = _("Servicio raro"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_ROOM_SERVICE,
        .description = COMPOUND_STRING(
            "Reduce la Velocidad si el\n"
            "Truco Sala está activo."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_RoomService,
        .iconPalette = gItemIconPalette_RoomService,
    },

    [ITEM_UTILITY_UMBRELLA] =
    {
        .name = _("Sombrilla"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,
        .description = COMPOUND_STRING(
            "Una sombrilla que protege\n"
            "de los efectos del clima."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_UtilityUmbrella,
        .iconPalette = gItemIconPalette_UtilityUmbrella,
    },


// Berries

        [ITEM_CHERI_BERRY] =
    {
        .name = _("Baya Ziuela"),
        .pluralName = _("Bayas Ziuela"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que cura la\n"
            "parálisis en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_ParalyzeHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_CheriBerry,
        .iconPalette = gItemIconPalette_CheriBerry,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = _("Baya Atania"),
        .pluralName = _("Bayas Atania"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que despierta a\n"
            "un Pokémon en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 10,
        .iconPic = gItemIcon_ChestoBerry,
        .iconPalette = gItemIconPalette_ChestoBerry,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = _("Baya Meloc"),
        .pluralName = _("Bayas Meloc"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que cura el\n"
            "envenenamiento en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Antidote,
        .flingPower = 10,
        .iconPic = gItemIcon_PechaBerry,
        .iconPalette = gItemIconPalette_PechaBerry,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = _("Baya Safre"),
        .pluralName = _("Bayas Safre"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que cura una\n"
            "quemadura en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_BurnHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_RawstBerry,
        .iconPalette = gItemIconPalette_RawstBerry,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = _("Baya Perasi"),
        .pluralName = _("Bayas Perasi"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que descongela\n"
            "a un Pokémon en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_IceHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_AspearBerry,
        .iconPalette = gItemIconPalette_AspearBerry,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = _("Baya Zanama"),
        .pluralName = _("Bayas Zanama"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que restaura 10 PP\n"
            "en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_LeppaBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_LeppaBerry,
        .iconPalette = gItemIconPalette_LeppaBerry,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = _("Baya Aranja"),
        .pluralName = _("Bayas Aranja"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que restaura 10 HP\n"
            "en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_OranBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_OranBerry,
        .iconPalette = gItemIconPalette_OranBerry,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = _("Baya Caquic"),
        .pluralName = _("Bayas Caquic"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que cura la\n"
            "confusión en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_PersimBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_PersimBerry,
        .iconPalette = gItemIconPalette_PersimBerry,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = _("Baya Ziuela"),
        .pluralName = _("Bayas Ziuela"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = COMPOUND_STRING(
            "Un objeto que se puede\n"
            "tener y que cura cualquier\n"
            "problema de estado en batalla."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 10,
        .iconPic = gItemIcon_LumBerry,
        .iconPalette = gItemIconPalette_LumBerry,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = _("Baya Zidra"),
        .pluralName = _("Bayas Zidra"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        #if I_SITRUS_BERRY_HEAL >= GEN_4
            .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
            .holdEffectParam = 25,
            .description = COMPOUND_STRING(
                "Un objeto que se puede\n"
                "tener y que restaura\n"
                "un poco de HP del usuario."),
        #else
            .holdEffect = HOLD_EFFECT_RESTORE_HP,
            .holdEffectParam = 30,
            .description = COMPOUND_STRING(
                "Un objeto que se puede\n"
                "tener y que restaura 30 HP\n"
                "en batalla."),
        #endif
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SitrusBerry,
        .flingPower = 10,
        .iconPic = gItemIcon_SitrusBerry,
        .iconPalette = gItemIconPalette_SitrusBerry,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = _("Baya Higog"),
        .pluralName = _("Bayas Higog"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_FigyBerry,
        .iconPalette = gItemIconPalette_FigyBerry,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = _("Baya Wiki"),
        .pluralName = _("Bayas Wiki"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_WikiBerry,
        .iconPalette = gItemIconPalette_WikiBerry,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = _("Baya Ango"),
        .pluralName = _("Bayas Ango"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_MagoBerry,
        .iconPalette = gItemIconPalette_MagoBerry,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = _("Baya Guaya"),
        .pluralName = _("Bayas Guaya"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_AguavBerry,
        .iconPalette = gItemIconPalette_AguavBerry,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = _("Baya Pabaya"),
        .pluralName = _("Bayas Pabaya"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        .iconPic = gItemIcon_IapapaBerry,
        .iconPalette = gItemIconPalette_IapapaBerry,
    },

    [ITEM_RAZZ_BERRY] =
{
    .name = _("Baya Latano"),
    .pluralName = _("Bayas Latano"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Latano."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RazzBerry,
    .iconPalette = gItemIconPalette_RazzBerry,
},

[ITEM_BLUK_BERRY] =
{
    .name = _("Baya Oram"),
    .pluralName = _("Bayas Oram"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Oram."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_BlukBerry,
    .iconPalette = gItemIconPalette_BlukBerry,
},

[ITEM_NANAB_BERRY] =
{
    .name = _("Baya Nanab"),
    .pluralName = _("Bayas Nanab"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Nanab."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_NanabBerry,
    .iconPalette = gItemIconPalette_NanabBerry,
},

[ITEM_WEPEAR_BERRY] =
{
    .name = _("Baya Peragu"),
    .pluralName = _("Bayas Peragu"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Peragu."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_WepearBerry,
    .iconPalette = gItemIconPalette_WepearBerry,
},

[ITEM_PINAP_BERRY] =
{
    .name = _("Baya Pinia"),
    .pluralName = _("Bayas Pinia"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Pinia."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PinapBerry,
    .iconPalette = gItemIconPalette_PinapBerry,
},

[ITEM_POMEG_BERRY] =
{
    .name = _("Baya Grana"),
    .pluralName = _("Bayas Grana"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "Hace que un Pokémon\n"
        "sea más amistoso pero\n"
        "baja PS base."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    .effect = gItemEffect_PomegBerry,
    .flingPower = 10,
    .iconPic = gItemIcon_PomegBerry,
    .iconPalette = gItemIconPalette_PomegBerry,
},

[ITEM_KELPSY_BERRY] =
{
    .name = _("Baya Algama"),
    .pluralName = _("Bayas Algama"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "Hace que un Pokémon\n"
        "sea más amistoso pero\n"
        "baja el Ataque base."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    .effect = gItemEffect_KelpsyBerry,
    .flingPower = 10,
    .iconPic = gItemIcon_KelpsyBerry,
    .iconPalette = gItemIconPalette_KelpsyBerry,
},

[ITEM_QUALOT_BERRY] =
{
    .name = _("Baya Ispero"),
    .pluralName = _("Bayas Ispero"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "Hace que un Pokémon\n"
        "sea más amistoso pero\n"
        "baja la Defensa base."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    .effect = gItemEffect_QualotBerry,
    .flingPower = 10,
    .iconPic = gItemIcon_QualotBerry,
    .iconPalette = gItemIconPalette_QualotBerry,
},

[ITEM_HONDEW_BERRY] =
{
    .name = _("Baya Meluce"),
    .pluralName = _("Bayas Meluce"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "Hace que un Pokémon\n"
        "sea más amistoso pero\n"
        "baja el Ataque Esp."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    .effect = gItemEffect_HondewBerry,
    .flingPower = 10,
    .iconPic = gItemIcon_HondewBerry,
    .iconPalette = gItemIconPalette_HondewBerry,
},

[ITEM_GREPA_BERRY] =
{
    .name = _("Baya Uvav"),
    .pluralName = _("Bayas Uvav"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "Hace que un Pokémon\n"
        "sea más amistoso pero\n"
        "baja la Defensa Esp."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    .effect = gItemEffect_GrepaBerry,
    .flingPower = 10,
    .iconPic = gItemIcon_GrepaBerry,
    .iconPalette = gItemIconPalette_GrepaBerry,
},

[ITEM_TAMATO_BERRY] =
{
    .name = _("Baya Tamate"),
    .pluralName = _("Bayas Tamate"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "Hace que un Pokémon\n"
        "sea más amistoso pero\n"
        "baja la Velocidad base."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    .effect = gItemEffect_TamatoBerry,
    .flingPower = 10,
    .iconPic = gItemIcon_TamatoBerry,
    .iconPalette = gItemIconPalette_TamatoBerry,
},

[ITEM_CORNN_BERRY] =
{
    .name = _("Baya Mais"),
    .pluralName = _("Bayas Mais"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Mais."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_CornnBerry,
    .iconPalette = gItemIconPalette_CornnBerry,
},

[ITEM_MAGOST_BERRY] =
{
    .name = _("Baya Aostan"),
    .pluralName = _("Bayas Aostan"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Aostan."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_MagostBerry,
    .iconPalette = gItemIconPalette_MagostBerry,
},

[ITEM_RABUTA_BERRY] =
{
    .name = _("Baya Rautan"),
    .pluralName = _("Bayas Rautan"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Rautan."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RabutaBerry,
    .iconPalette = gItemIconPalette_RabutaBerry,
},

[ITEM_NOMEL_BERRY] =
{
    .name = _("Baya Monli"),
    .pluralName = _("Bayas Monli"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Monli."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_NomelBerry,
    .iconPalette = gItemIconPalette_NomelBerry,
},

[ITEM_SPELON_BERRY] =
{
    .name = _("Baya Wikano"),
    .pluralName = _("Bayas Wikano"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Wikano."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_SpelonBerry,
    .iconPalette = gItemIconPalette_SpelonBerry,
},

[ITEM_PAMTRE_BERRY] =
{
    .name = _("Baya Plama"),
    .pluralName = _("Bayas Plama"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Plama."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PamtreBerry,
    .iconPalette = gItemIconPalette_PamtreBerry,
},

[ITEM_WATMEL_BERRY] =
{
    .name = _("Baya Sambia"),
    .pluralName = _("Bayas Sambia"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Sambia."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_WatmelBerry,
    .iconPalette = gItemIconPalette_WatmelBerry,
},

[ITEM_DURIN_BERRY] =
{
    .name = _("Baya Rudion"),
    .pluralName = _("Bayas Rudion"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Rudion."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_DurinBerry,
    .iconPalette = gItemIconPalette_DurinBerry,
},

[ITEM_BELUE_BERRY] =
{
    .name = _("Baya Andano"),
    .pluralName = _("Bayas Andano"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "{POKEBLOCK} ingrediente.\n"
        "Plántala en suelo\n"
        "fértil para obtener Andano."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_BelueBerry,
    .iconPalette = gItemIconPalette_BelueBerry,
},

    [ITEM_CHILAN_BERRY] =
{
    .name = _("Baya Chilan"),
    .pluralName = _("Bayas Chilan"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_NORMAL,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento Normal."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ChilanBerry,
    .iconPalette = gItemIconPalette_ChilanBerry,
},

[ITEM_OCCA_BERRY] =
{
    .name = _("Baya Caoca"),
    .pluralName = _("Bayas Caoca"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_FIRE,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Fuego si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_OccaBerry,
    .iconPalette = gItemIconPalette_OccaBerry,
},

[ITEM_PASSHO_BERRY] =
{
    .name = _("Baya Pasio"),
    .pluralName = _("Bayas Pasio"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_WATER,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Agua si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PasshoBerry,
    .iconPalette = gItemIconPalette_PasshoBerry,
},

[ITEM_WACAN_BERRY] =
{
    .name = _("Baya Gualot"),
    .pluralName = _("Bayas Gualot"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_ELECTRIC,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Eléctrico si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_WacanBerry,
    .iconPalette = gItemIconPalette_WacanBerry,
},

[ITEM_RINDO_BERRY] =
{
    .name = _("Baya Tamar"),
    .pluralName = _("Bayas Tamar"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_GRASS,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Planta si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RindoBerry,
    .iconPalette = gItemIconPalette_RindoBerry,
},

[ITEM_YACHE_BERRY] =
{
    .name = _("Baya Rimoya"),
    .pluralName = _("Bayas Rimoya"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_ICE,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Hielo si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_YacheBerry,
    .iconPalette = gItemIconPalette_YacheBerry,
},

[ITEM_CHOPLE_BERRY] =
{
    .name = _("Baya Pomaro"),
    .pluralName = _("Bayas Pomaro"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_FIGHTING,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Lucha si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ChopleBerry,
    .iconPalette = gItemIconPalette_ChopleBerry,
},

[ITEM_KEBIA_BERRY] =
{
    .name = _("Baya Kebia"),
    .pluralName = _("Bayas Kebia"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_POISON,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Veneno si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_KebiaBerry,
    .iconPalette = gItemIconPalette_KebiaBerry,
},

[ITEM_SHUCA_BERRY] =
{
    .name = _("Baya Acardo"),
    .pluralName = _("Bayas Acardo"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_GROUND,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Tierra si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ShucaBerry,
    .iconPalette = gItemIconPalette_ShucaBerry,
},

[ITEM_COBA_BERRY] =
{
    .name = _("Baya Kouba"),
    .pluralName = _("Bayas Kouba"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_FLYING,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Volador si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_CobaBerry,
    .iconPalette = gItemIconPalette_CobaBerry,
},

[ITEM_PAYAPA_BERRY] =
{
    .name = _("Baya Payapa"),
    .pluralName = _("Bayas Payapa"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_PSYCHIC,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Psíquico si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PayapaBerry,
    .iconPalette = gItemIconPalette_PayapaBerry,
},

[ITEM_TANGA_BERRY] =
{
    .name = _("Baya Yecana"),
    .pluralName = _("Bayas Yecana"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_BUG,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Bicho si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_TangaBerry,
    .iconPalette = gItemIconPalette_TangaBerry,
},

[ITEM_CHARTI_BERRY] =
{
    .name = _("Baya Alcho"),
    .pluralName = _("Bayas Alcho"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_ROCK,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Roca si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ChartiBerry,
    .iconPalette = gItemIconPalette_ChartiBerry,
},

[ITEM_KASIB_BERRY] =
{
    .name = _("Baya Drasi"),
    .pluralName = _("Bayas Drasi"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_GHOST,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Fantasma si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_KasibBerry,
    .iconPalette = gItemIconPalette_KasibBerry,
},

[ITEM_HABAN_BERRY] =
{
    .name = _("Baya Anjiro"),
    .pluralName = _("Bayas Anjiro"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_DRAGON,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Dragón si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_HabanBerry,
    .iconPalette = gItemIconPalette_HabanBerry,
},

[ITEM_COLBUR_BERRY] =
{
    .name = _("Baya Dillo"),
    .pluralName = _("Bayas Dillo"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_DARK,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Siniestro si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ColburBerry,
    .iconPalette = gItemIconPalette_ColburBerry,
},

[ITEM_BABIRI_BERRY] =
{
    .name = _("Baya Baribá"),
    .pluralName = _("Bayas Baribá"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_STEEL,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Acero si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_BabiriBerry,
    .iconPalette = gItemIconPalette_BabiriBerry,
},

[ITEM_ROSELI_BERRY] =
{
    .name = _("Baya Hibis"),
    .pluralName = _("Bayas Hibis"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RESIST_BERRY,
    .holdEffectParam = TYPE_FAIRY,
    .description = COMPOUND_STRING(
        "Un objeto que debilita\n"
        "un movimiento de tipo\n"
        "Hada si es débil a él."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RoseliBerry,
    .iconPalette = gItemIconPalette_RoseliBerry,
},

    [ITEM_LIECHI_BERRY] =
{
    .name = _("Baya Lichi"),
    .pluralName = _("Bayas Lichi"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_ATTACK_UP,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta el Ataque\n"
        "en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_LiechiBerry,
    .iconPalette = gItemIconPalette_LiechiBerry,
},

[ITEM_GANLON_BERRY] =
{
    .name = _("Baya Gonlan"),
    .pluralName = _("Bayas Gonlan"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_DEFENSE_UP,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta la Defensa\n"
        "en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_GanlonBerry,
    .iconPalette = gItemIconPalette_GanlonBerry,
},

[ITEM_SALAC_BERRY] =
{
    .name = _("Baya Aslac"),
    .pluralName = _("Bayas Aslac"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_SPEED_UP,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta la Velocidad\n"
        "en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_SalacBerry,
    .iconPalette = gItemIconPalette_SalacBerry,
},

[ITEM_PETAYA_BERRY] =
{
    .name = _("Baya Yapati"),
    .pluralName = _("Bayas Yapati"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta el At. Esp.\n"
        "en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_PetayaBerry,
    .iconPalette = gItemIconPalette_PetayaBerry,
},

[ITEM_APICOT_BERRY] =
{
    .name = _("Baya Aricoc"),
    .pluralName = _("Bayas Aricoc"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta la Def. Esp.\n"
        "en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_ApicotBerry,
    .iconPalette = gItemIconPalette_ApicotBerry,
},

[ITEM_LANSAT_BERRY] =
{
    .name = _("Baya Zonlan"),
    .pluralName = _("Bayas Zonlan"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_CRITICAL_UP,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta la probabilidad\n"
        "de golpe crítico en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_LansatBerry,
    .iconPalette = gItemIconPalette_LansatBerry,
},

[ITEM_STARF_BERRY] =
{
    .name = _("Baya Arabol"),
    .pluralName = _("Bayas Arabol"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta una estadística\n"
        "al azar en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_StarfBerry,
    .iconPalette = gItemIconPalette_StarfBerry,
},

[ITEM_ENIGMA_BERRY] =
{
    .name = _("Baya Enigma"),
    .pluralName = _("Bayas Enigma"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_ENIGMA_BERRY,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "cura tras recibir\n"
        "un movimiento súper efectivo."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_EnigmaBerry,
    .iconPalette = gItemIconPalette_EnigmaBerry,
},

[ITEM_MICLE_BERRY] =
{
    .name = _("Baya Lagro"),
    .pluralName = _("Bayas Lagro"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_MICLE_BERRY,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "aumenta la Precisión\n"
        "de un movimiento en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_MicleBerry,
    .iconPalette = gItemIconPalette_MicleBerry,
},

[ITEM_CUSTAP_BERRY] =
{
    .name = _("Baya Chiri"),
    .pluralName = _("Bayas Chiri"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
    .holdEffectParam = 4,
    .description = COMPOUND_STRING(
        "Un objeto que\n"
        "permite atacar primero\n"
        "una vez en un apuro."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_CustapBerry,
    .iconPalette = gItemIconPalette_CustapBerry,
},

[ITEM_JABOCA_BERRY] =
{
    .name = _("Baya Jaboca"),
    .pluralName = _("Bayas Jaboca"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
    .description = COMPOUND_STRING(
        "Si recibe un movimiento\n"
        "físico, hiere al atacante\n"
        "un poco."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_JabocaBerry,
    .iconPalette = gItemIconPalette_JabocaBerry,
},

[ITEM_ROWAP_BERRY] =
{
    .name = _("Baya Magua"),
    .pluralName = _("Bayas Magua"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_ROWAP_BERRY,
    .description = COMPOUND_STRING(
        "Si recibe un movimiento\n"
        "especial, hiere al atacante\n"
        "un poco."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_RowapBerry,
    .iconPalette = gItemIconPalette_RowapBerry,
},

[ITEM_KEE_BERRY] =
{
    .name = _("Baya Biglia"),
    .pluralName = _("Bayas Biglia"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_KEE_BERRY,
    .description = COMPOUND_STRING(
        "Si recibe un movimiento\n"
        "físico, aumenta la\n"
        "Defensa un poco."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_KeeBerry,
    .iconPalette = gItemIconPalette_KeeBerry,
},

[ITEM_MARANGA_BERRY] =
{
    .name = _("Baya Maranga"),
    .pluralName = _("Bayas Maranga"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .holdEffect = HOLD_EFFECT_MARANGA_BERRY,
    .description = COMPOUND_STRING(
        "Si recibe un movimiento\n"
        "especial, aumenta la\n"
        "Def. Esp. un poco."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_MarangaBerry,
    .iconPalette = gItemIconPalette_MarangaBerry,
},

[ITEM_ENIGMA_BERRY_E_READER] =
{
    .name = _("Baya Enigma"),
    .pluralName = _("Bayas Enigma"),
    .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
    .description = COMPOUND_STRING(
        "Ingrediente para\n"
        "Pokécubos.\n"
        "Plántala en tierra fértil\n"
        "para hacer crecer un misterio."),
    .pocket = POCKET_BERRIES,
    .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
    .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
    .battleUsage = EFFECT_ITEM_ENIGMA_BERRY_EREADER,
    .flingPower = 10,
    .iconPic = gItemIcon_EnigmaBerry,
    .iconPalette = gItemIconPalette_EnigmaBerry,
},


// TMs/HMs. They don't have a set flingPower, as that's handled by GetFlingPowerFromItemId.

    [ITEM_TM_FOCUS_PUNCH] =
{
    .name = _("MT01"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Poderoso, pero hace que\n"
        "el usuario se estremezca si\n"
        "es golpeado por el oponente."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_FOCUS_PUNCH,
},

[ITEM_TM_DRAGON_CLAW] =
{
    .name = _("MT02"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Atrapa y corta al oponente\n"
        "con garras largas y afiladas."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_DRAGON_CLAW,
},

[ITEM_TM_WATER_PULSE] =
{
    .name = _("MT03"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Genera una ola ultrasónica\n"
        "que puede confundir."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_WATER_PULSE,
},

[ITEM_TM_CALM_MIND] =
{
    .name = _("MT04"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Aumenta Sp. Atk y Sp. Def\n"
        "al concentrar la mente."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_CALM_MIND,
},

[ITEM_TM_ROAR] =
{
    .name = _("MT05"),
    .price = 1000,
    .description = COMPOUND_STRING(
        "Un rugido salvaje que\n"
        "hace que el oponente huya\n"
        "para terminar la batalla."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_ROAR,
},

[ITEM_TM_TOXIC] =
{
    .name = _("MT06"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Envenena al oponente\n"
        "con una toxina que\n"
        "empeora gradualmente."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_TOXIC,
},

[ITEM_TM_HAIL] =
{
    .name = _("MT07"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Crea una tormenta de granizo\n"
        "que daña a todos los tipos\n"
        "excepto Hielo."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_HAIL,
},

[ITEM_TM_BULK_UP] =
{
    .name = _("MT08"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Fortalece el cuerpo\n"
        "para aumentar tanto\n"
        "Ataque como Defensa."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_BULK_UP,
},

[ITEM_TM_BULLET_SEED] =
{
    .name = _("MT09"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Dispara de 2 a 5 semillas\n"
        "en fila para atacar\n"
        "al oponente."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_BULLET_SEED,
},

[ITEM_TM_HIDDEN_POWER] =
{
    .name = _("MT10"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "El poder de ataque\n"
        "varía entre\n"
        "diferentes Pokémon."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_HIDDEN_POWER,
},

[ITEM_TM_SUNNY_DAY] =
{
    .name = _("MT11"),
    .price = 2000,
    .description = COMPOUND_STRING(
        "Aumenta el poder de\n"
        "los movimientos de tipo\n"
        "Fuego durante 5 turnos."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SUNNY_DAY,
},

[ITEM_TM_TAUNT] =
{
    .name = _("MT12"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Enfurece al oponente para\n"
        "que solo pueda usar\n"
        "movimientos de ataque."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_TAUNT,
},

[ITEM_TM_ICE_BEAM] =
{
    .name = _("MT13"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Lanza un rayo helado que\n"
        "puede\n"
    #if B_USE_FROSTBITE == TRUE
        "infligir congelación."),
    #else
        "congelar al oponente."),
    #endif
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_ICE_BEAM,
},

[ITEM_TM_BLIZZARD] =
{
    .name = _("MT14"),
    .price = 5500,
    .description = COMPOUND_STRING(
    #if B_USE_FROSTBITE == TRUE
        "Un ataque de nieve y viento\n"
        "que puede\n"
        "infligir congelación."),
    #else
        "Un ataque brutal de nieve y\n"
        "viento que puede\n"
        "congelar al oponente."),
    #endif
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_BLIZZARD,
},

[ITEM_TM_HYPER_BEAM] =
{
    .name = _("MT15"),
    .price = 7500,
    .description = COMPOUND_STRING(
        "Poderoso, pero necesita\n"
        "recargar el siguiente\n"
        "turno."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_HYPER_BEAM,
},

[ITEM_TM_LIGHT_SCREEN] =
{
    .name = _("MT16"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Crea una pared de luz que\n"
        "reduce el daño de Sp. Atk."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_LIGHT_SCREEN,
},

[ITEM_TM_PROTECT] =
{
    .name = _("MT17"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Anula todo daño,\n"
        "pero puede fallar si se usa\n"
        "en sucesión."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_PROTECT,
},

[ITEM_TM_RAIN_DANCE] =
{
    .name = _("MT18"),
    .price = 2000,
    .description = COMPOUND_STRING(
        "Aumenta el poder de\n"
        "los movimientos de tipo Agua\n"
        "durante 5 turnos."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_RAIN_DANCE,
},

[ITEM_TM_GIGA_DRAIN] =
{
    .name = _("MT19"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Recupera la mitad de\n"
        "la HP del daño que\n"
        "esta técnica inflige."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_GIGA_DRAIN,
},

[ITEM_TM_SAFEGUARD] =
{
    .name = _("MT20"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Previene la anormalidad\n"
        "de estado con un poder\n"
        "místico."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SAFEGUARD,
},


    [ITEM_TM_FRUSTRATION] =
{
    .name = _("MT21"),
    .price = 1000,
    .description = COMPOUND_STRING(
        "Cuanto menos te guste\n"
        "el usuario, más\n"
        "poderoso es este movimiento."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_FRUSTRATION,
},

[ITEM_TM_SOLAR_BEAM] =
{
    .name = _("MT22"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Absorbe la luz solar en\n"
        "el primer turno, luego\n"
        "ataca en el siguiente turno."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SOLAR_BEAM,
},

[ITEM_TM_IRON_TAIL] =
{
    .name = _("MT23"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Golpea al oponente con\n"
        "una cola dura. Puede\n"
        "reducir la Defensa."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_IRON_TAIL,
},

[ITEM_TM_THUNDERBOLT] =
{
    .name = _("MT24"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Un potente ataque eléctrico\n"
        "que puede causar\n"
        "parálisis."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_THUNDERBOLT,
},

[ITEM_TM_THUNDER] =
{
    .name = _("MT25"),
    .price = 5500,
    .description = COMPOUND_STRING(
        "Golpea al oponente\n"
        "con un rayo. Puede\n"
        "paralizar."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_THUNDER,
},

[ITEM_TM_EARTHQUAKE] =
{
    .name = _("MT26"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Causa un terremoto\n"
        "que no afecta\n"
        "a los Pokémon voladores."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_EARTHQUAKE,
},

[ITEM_TM_RETURN] =
{
    .name = _("MT27"),
    .price = 1000,
    .description = COMPOUND_STRING(
        "Cuanto más te guste\n"
        "el usuario, más\n"
        "poderoso es este movimiento."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_RETURN,
},

[ITEM_TM_DIG] =
{
    .name = _("MT28"),
    .price = 2000,
    .description = COMPOUND_STRING(
        "Cava bajo tierra en\n"
        "el primer turno, luego\n"
        "ataca en el siguiente turno."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_DIG,
},

[ITEM_TM_PSYCHIC] =
{
    .name = _("MT29"),
    .price = 2000,
    .description = COMPOUND_STRING(
        "Un potente ataque psíquico\n"
        "que puede reducir\n"
        "la Sp. Def."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_PSYCHIC,
},

[ITEM_TM_SHADOW_BALL] =
{
    .name = _("MT30"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Lanza una esfera oscura\n"
        "al oponente. Puede\n"
        "reducir la Sp. Def."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SHADOW_BALL,
},

[ITEM_TM_BRICK_BREAK] =
{
    .name = _("MT31"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Destruye barreras\n"
        "como Pantalla Luz\n"
        "y causa daño."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_BRICK_BREAK,
},

[ITEM_TM_DOUBLE_TEAM] =
{
    .name = _("MT32"),
    .price = 2000,
    .description = COMPOUND_STRING(
        "Crea copias ilusorias\n"
        "para mejorar\n"
        "la evasividad."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_DOUBLE_TEAM,
},

[ITEM_TM_REFLECT] =
{
    .name = _("MT33"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Crea una pared de\n"
        "luz que debilita\n"
        "los ataques físicos."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_REFLECT,
},

[ITEM_TM_SHOCK_WAVE] =
{
    .name = _("MT34"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Da un descarga eléctrica\n"
        "que nunca falla."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SHOCK_WAVE,
},

[ITEM_TM_FLAMETHROWER] =
{
    .name = _("MT35"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Lanza una ráfaga de\n"
        "fuego que puede quemar\n"
        "al oponente."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_FLAMETHROWER,
},

[ITEM_TM_SLUDGE_BOMB] =
{
    .name = _("MT36"),
    .price = 1000,
    .description = COMPOUND_STRING(
        "Lanza lodo al oponente.\n"
        "Puede envenenarlo."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SLUDGE_BOMB,
},

[ITEM_TM_SANDSTORM] =
{
    .name = _("MT37"),
    .price = 2000,
    .description = COMPOUND_STRING(
        "Causa una tormenta de arena\n"
        "que daña al oponente\n"
        "durante varios turnos."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SANDSTORM,
},

[ITEM_TM_FIRE_BLAST] =
{
    .name = _("MT38"),
    .price = 5500,
    .description = COMPOUND_STRING(
        "Un poderoso ataque de fuego\n"
        "que puede quemar\n"
        "al oponente."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_FIRE_BLAST,
},

[ITEM_TM_ROCK_TOMB] =
{
    .name = _("MT39"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Impide que el oponente\n"
        "se mueva con rocas.\n"
        "Puede reducir la Velocidad."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_ROCK_TOMB,
},

[ITEM_TM_AERIAL_ACE] =
{
    .name = _("MT40"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Un ataque extremadamente rápido\n"
        "que no se puede evitar."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_AERIAL_ACE,
},

[ITEM_TM_TORMENT] =
{
    .name = _("MT41"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Impide que el oponente\n"
        "use el mismo movimiento\n"
        "en una fila."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_TORMENT,
},

[ITEM_TM_FACADE] =
{
    .name = _("MT42"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Aumenta el Ataque cuando\n"
        "está envenenado, quemado,\n"
        "o paralizado."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_FACADE,
},

    [ITEM_TM_SECRET_POWER] =
{
    .name = _("MT43"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Añade un efecto al\n"
        "ataque dependiendo\n"
        "de la ubicación."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SECRET_POWER,
},

[ITEM_TM_REST] =
{
    .name = _("MT44"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "El usuario duerme\n"
        "durante 2 turnos para\n"
        "restaurar salud y estado."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_REST,
},

[ITEM_TM_ATTRACT] =
{
    .name = _("MT45"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Dificulta atacar a un\n"
        "foe del sexo opuesto."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_ATTRACT,
},

[ITEM_TM_THIEF] =
{
    .name = _("MT46"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Mientras ataca,\n"
        "puede robar el objeto\n"
        "sostenido por el foe."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_THIEF,
},

[ITEM_TM_STEEL_WING] =
{
    .name = _("MT47"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Extiende alas duras y\n"
        "lanza un golpe al foe."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_STEEL_WING,
},

[ITEM_TM_SKILL_SWAP] =
{
    .name = _("MT48"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Intercambia habilidades\n"
        "con el foe durante el\n"
        "turno en que se usa."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SKILL_SWAP,
},

[ITEM_TM_SNATCH] =
{
    .name = _("MT49"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Roba los efectos del\n"
        "movimiento que el foe\n"
        "está intentando usar."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SNATCH,
},

[ITEM_TM_OVERHEAT] =
{
    .name = _("MT50"),
    .price = 3000,
    .description = COMPOUND_STRING(
        "Permite un ataque a\n"
        "pleno poder, pero\n"
        "reduce drásticamente el Sp. Atk."),
    .importance = I_REUSABLE_TMS,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_OVERHEAT,
},


    [ITEM_TM51] =
    {
        .name = _("MT51"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM52] =
    {
        .name = _("MT52"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM53] =
    {
        .name = _("MT53"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM54] =
    {
        .name = _("MT54"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM55] =
    {
        .name = _("MT55"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM56] =
    {
        .name = _("MT56"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM57] =
    {
        .name = _("MT57"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM58] =
    {
        .name = _("MT58"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM59] =
    {
        .name = _("MT59"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM60] =
    {
        .name = _("MT60"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM61] =
    {
        .name = _("MT61"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM62] =
    {
        .name = _("MT62"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM63] =
    {
        .name = _("MT63"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM64] =
    {
        .name = _("MT64"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM65] =
    {
        .name = _("MT65"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM66] =
    {
        .name = _("MT66"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM67] =
    {
        .name = _("MT67"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM68] =
    {
        .name = _("MT68"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM69] =
    {
        .name = _("MT69"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM70] =
    {
        .name = _("MT70"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM71] =
    {
        .name = _("MT71"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM72] =
    {
        .name = _("MT72"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM73] =
    {
        .name = _("MT73"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM74] =
    {
        .name = _("MT74"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM75] =
    {
        .name = _("MT75"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM76] =
    {
        .name = _("MT76"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM77] =
    {
        .name = _("MT77"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM78] =
    {
        .name = _("MT78"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM79] =
    {
        .name = _("MT79"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM80] =
    {
        .name = _("MT80"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM81] =
    {
        .name = _("MT81"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM82] =
    {
        .name = _("MT82"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM83] =
    {
        .name = _("MT83"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM84] =
    {
        .name = _("MT84"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM85] =
    {
        .name = _("MT85"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM86] =
    {
        .name = _("MT86"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM87] =
    {
        .name = _("MT87"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM88] =
    {
        .name = _("MT88"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM89] =
    {
        .name = _("MT89"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM90] =
    {
        .name = _("MT90"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM91] =
    {
        .name = _("MT91"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM92] =
    {
        .name = _("MT92"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM93] =
    {
        .name = _("MT93"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM94] =
    {
        .name = _("MT94"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM95] =
    {
        .name = _("MT95"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM96] =
    {
        .name = _("MT96"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM97] =
    {
        .name = _("MT97"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM98] =
    {
        .name = _("MT98"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM99] =
    {
        .name = _("MT99"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM100] =
    {
        .name = _("MT100"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_HM_CUT] =
{
    .name = _("MO01"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Ataca al foe con\n"
        "cuchillas o garras\n"
        "afiladas."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_CUT,
},

[ITEM_HM_FLY] =
{
    .name = _("MO02"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Se eleva en el\n"
        "primer turno y luego\n"
        "ataca en el siguiente."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_FLY,
},

[ITEM_HM_SURF] =
{
    .name = _("MO03"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Crea una enorme\n"
        "ola y luego la lanza\n"
        "contra el foe."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_SURF,
},

[ITEM_HM_STRENGTH] =
{
    .name = _("MO04"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Acumula un enorme\n"
        "poder y luego golpea\n"
        "al foe."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_STRENGTH,
},

[ITEM_HM_FLASH] =
{
    .name = _("MO05"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Lanza un potente\n"
        "destello de luz que\n"
        "reduce la precisión."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_FLASH,
},

[ITEM_HM_ROCK_SMASH] =
{
    .name = _("MO06"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Un ataque muy\n"
        "fuerte que puede\n"
        "reducir la Defensa."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_ROCK_SMASH,
},

[ITEM_HM_WATERFALL] =
{
    .name = _("MO07"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Ataca al foe con\n"
        "suficiente poder para\n"
        "subir cascadas."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_WATERFALL,
},

[ITEM_HM_DIVE] =
{
    .name = _("MO08"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Se sumerge bajo el\n"
        "agua en el 1er turno y\n"
        "luego ataca en el siguiente."),
    .importance = 1,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    .secondaryId = MOVE_DIVE,
},

// Charms

    [ITEM_OVAL_CHARM] =
{
    .name = _("Amuleto oval"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Aumenta la probabilidad\n"
        "de encontrar huevos\n"
        "en la guardería."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_OvalCharm,
    .iconPalette = gItemIconPalette_OvalCharm,
},

[ITEM_SHINY_CHARM] =
{
    .name = _("Amuleto iris"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un amuleto que aumenta\n"
        "la probabilidad de\n"
        "encontrar Pokémon Shiny."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_ShinyCharm,
    .iconPalette = gItemIconPalette_ShinyCharm,
},

[ITEM_CATCHING_CHARM] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Amuleto Captura", "Amuleto Captura"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un amuleto que aumenta\n"
        "la probabilidad de\n"
        "Capturas Críticas."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_CatchingCharm,
    .iconPalette = gItemIconPalette_CatchingCharm,
},

[ITEM_EXP_CHARM] =
{
    .name = _("Amuleto Exp."),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un amuleto que aumenta\n"
        "la cantidad de Exp.\n"
        "ganada en batalla."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_ExpCharm,
    .iconPalette = gItemIconPalette_ExpCharm,
},

// Form-changing Key Items

    [ITEM_ROTOM_CATALOG] =
{
    .name = _("Catálogo Rotom"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un catálogo lleno de\n"
        "dispositivos que le\n"
        "gustan a Rotom."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_RotomCatalog,
    .iconPic = gItemIcon_RotomCatalog,
    .iconPalette = gItemIconPalette_RotomCatalog,
},

[ITEM_GRACIDEA] =
{
    .name = _("Gracidea"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Los ramos hechos con\n"
        "esto se ofrecen como\n"
        "un gesto de gratitud."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    .iconPic = gItemIcon_Gracidea,
    .iconPalette = gItemIconPalette_Gracidea,
},

[ITEM_REVEAL_GLASS] =
{
    .name = _("Espejo veraz"),
    .pluralName = _("Espejo veraz"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Este cristal devuelve\n"
        "a un Pokémon a su\n"
        "forma original."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    .iconPic = gItemIcon_RevealGlass,
    .iconPalette = gItemIconPalette_RevealGlass,
},

[ITEM_DNA_SPLICERS] =
{
    .name = _("Punta ADN"),
    .pluralName = _("Puntas ADN"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Divisor que fusiona\n"
        "a Kyurem con un\n"
        "cierto Pokémon."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    .iconPic = gItemIcon_DNASplicers,
    .iconPalette = gItemIconPalette_DNASplicers,
},

[ITEM_ZYGARDE_CUBE] =
{
    .name = _("Cubo Zygarde"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un objeto para almacenar\n"
        "los Núcleos y Células\n"
        "de Zygarde."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ZygardeCube,
    .iconPic = gItemIcon_ZygardeCube,
    .iconPalette = gItemIconPalette_ZygardeCube,
},

[ITEM_PRISON_BOTTLE] =
{
    .name = _("Vasija castigo"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Una botella usada para\n"
        "sellar a un cierto\n"
        "Pokémon hace mucho tiempo."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    .iconPic = gItemIcon_PrisonBottle,
    .iconPalette = gItemIconPalette_PrisonBottle,
},

[ITEM_N_SOLARIZER] =
{
    .name = _("Necrosol"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un dispositivo para fusionar\n"
        "y separar a Necrozma\n"
        "usando a Solgaleo."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    .iconPic = gItemIcon_NecrozmaFuser,
    .iconPalette = gItemIconPalette_NSolarizer,
},

[ITEM_N_LUNARIZER] =
{
    .name = _("Necroluna"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un dispositivo para fusionar\n"
        "y separar a Necrozma\n"
        "usando a Lunala."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    .iconPic = gItemIcon_NecrozmaFuser,
    .iconPalette = gItemIconPalette_NLunarizer,
},

[ITEM_REINS_OF_UNITY] =
{
    .name = _("Riendas unión"),
    .pluralName = _("Riendas unión"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Riendas que unen a\n"
        "Calyrex con su\n"
        "amado corcel."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    .iconPic = gItemIcon_ReinsOfUnity,
    .iconPalette = gItemIconPalette_ReinsOfUnity,
},

// Battle Mechanic Key Items

[ITEM_MEGA_RING] =
{
    .name = _("Anillo Mega"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Permite que los Pokémon\n"
        "con su Mega Piedra\n"
        "Mega Evolucionen."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_MegaRing,
    .iconPalette = gItemIconPalette_MegaRing,
},

[ITEM_Z_POWER_RING] =
{
    .name = _("Anillo Z"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un extraño anillo\n"
        "que permite el uso\n"
        "de los movimientos Z."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_ZPowerRing,
    .iconPalette = gItemIconPalette_ZPowerRing,
},

[ITEM_DYNAMAX_BAND] =
{
    .name = _("Banda Dynamax"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una banda que lleva una\n"
        "Estrella de Deseos que\n"
        "permite el Dynamax."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_DynamaxBand,
    .iconPalette = gItemIconPalette_DynamaxBand,
},

// Misc. Key Items

[ITEM_BICYCLE] =
{
    .name = _("Bicicleta"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una bicicleta plegable\n"
        "que es más rápida que\n"
        "las Zapatillas de Correr."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_Bicycle,
    .iconPalette = gItemIconPalette_Bicycle,
},

[ITEM_MACH_BIKE] =
{
    .name = _("Bici carrera"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una bicicleta plegable\n"
        "que duplica tu\n"
        "velocidad o más."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_Bike,
    .secondaryId = MACH_BIKE,
    .iconPic = gItemIcon_MachBike,
    .iconPalette = gItemIconPalette_MachBike,
},

[ITEM_ACRO_BIKE] =
{
    .name = _("Acro Bici"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una bicicleta plegable\n"
        "capaz de hacer saltos\n"
        "y caballitos."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_Bike,
    .secondaryId = ACRO_BIKE,
    .iconPic = gItemIcon_AcroBike,
    .iconPalette = gItemIconPalette_AcroBike,
},

[ITEM_OLD_ROD] =
{
    .name = _("Caña vieja"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Úsala en cualquier\n"
        "cuerpo de agua para\n"
        "pescar Pokémon salvajes."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_Rod,
    .secondaryId = OLD_ROD,
    .iconPic = gItemIcon_OldRod,
    .iconPalette = gItemIconPalette_OldRod,
},

[ITEM_GOOD_ROD] =
{
    .name = _("Caña buena"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una caña de pescar\n"
        "decentemente buena\n"
        "para pescar Pokémon salvajes."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_Rod,
    .secondaryId = GOOD_ROD,
    .iconPic = gItemIcon_GoodRod,
    .iconPalette = gItemIconPalette_GoodRod,
},

[ITEM_SUPER_ROD] =
{
    .name = _("Súper caña"),
    .price = 0,
    .description = COMPOUND_STRING(
        "La mejor caña de pescar\n"
        "para pescar Pokémon salvajes."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_Rod,
    .secondaryId = SUPER_ROD,
    .iconPic = gItemIcon_SuperRod,
    .iconPalette = gItemIconPalette_SuperRod,
},

[ITEM_DOWSING_MACHINE] =
{
    .name = _("Zahorí"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Un dispositivo que\n"
        "señala un objeto invisible\n"
        "con sonido."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
    .iconPic = gItemIcon_DowsingMachine,
    .iconPalette = gItemIconPalette_DowsingMachine,
},

[ITEM_TOWN_MAP] =
{
    .name = _("Mapa"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Se puede ver en\n"
        "cualquier momento. Muestra\n"
        "tu ubicación actual."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_TownMap,
    .iconPalette = gItemIconPalette_TownMap,
},

[ITEM_VS_SEEKER] =
{
    .name = _("Buscapelea"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una unidad recargable\n"
        "que marca a los Entrenadores\n"
        "listos para batallar."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
#if I_VS_SEEKER_CHARGING != 0
    .fieldUseFunc = FieldUseFunc_VsSeeker,
#else
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
#endif
    .iconPic = gItemIcon_VsSeeker,
    .iconPalette = gItemIconPalette_VsSeeker,
},

[ITEM_TM_CASE] =
{
    .name = _("Caja MT"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Un estuche conveniente\n"
        "que guarda TMs y MOs."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_TMCase,
    .iconPalette = gItemIconPalette_TMCase,
},

[ITEM_BERRY_POUCH] =
{
    .name = _("Saco bayas"),
    .pluralName = _("Bolsas de Bayas"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Un contenedor conveniente\n"
        "que guarda Bayas."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_BerryPouch,
    .iconPalette = gItemIconPalette_BerryPouch,
},

[ITEM_POKEMON_BOX_LINK] =
{
    .name = _("Caja Pokémon"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Este dispositivo otorga\n"
        "acceso al Sistema de\n"
        "{PKMN}."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_PokemonBoxLink,
    .iconPic = gItemIcon_PokemonBoxLink,
    .iconPalette = gItemIconPalette_PokemonBoxLink,
},

[ITEM_COIN_CASE] =
{
    .name = _("Monedero"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una caja que guarda\n"
        "hasta 9,999 Monedas."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
    .iconPic = gItemIcon_CoinCase,
    .iconPalette = gItemIconPalette_CoinCase,
},

[ITEM_POWDER_JAR] =
{
    .name = _("Bote polvos"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Guarda Polvo de Baya hecho\n"
        "usando un Triturador de Bayas."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
    .iconPic = gItemIcon_PowderJar,
    .iconPalette = gItemIconPalette_PowderJar,
},

[ITEM_WAILMER_PAIL] =
{
    .name = _("Wailmegadera"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una herramienta utilizada\n"
        "para regar Bayas\n"
        "y plantas."),
    .importance = 1,
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_FIELD,
    .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
    .iconPic = gItemIcon_WailmerPail,
    .iconPalette = gItemIconPalette_WailmerPail,
},

        [ITEM_POKE_RADAR] =
    {
        .name = _("Pokéradar"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una herramienta usada\n"
            "para buscar Pokémon\n"
            "ocultos en la hierba."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .iconPic = gItemIcon_PokeRadar,
        .iconPalette = gItemIconPalette_PokeRadar,
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = _("Caja pokécubos"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una caja para guardar\n"
            "{POKEBLOCK}s hechos con\n"
            "una Licuadora de Berries."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
        .iconPic = gItemIcon_PokeblockCase,
        .iconPalette = gItemIconPalette_PokeblockCase,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = _("Saco cenizas"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un saco usado para\n"
            "recoger y guardar\n"
            "cenizas volcánicas."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SootSack,
        .iconPalette = gItemIconPalette_SootSack,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = _("Pokéflauta"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una flauta melodiosa\n"
            "que despierta a los\n"
            "Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_PokeFlute,
        .iconPalette = gItemIconPalette_PokeFlute,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = _("Memorín"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Almacena información\n"
            "sobre personas famosas\n"
            "para consulta instantánea."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_FameChecker,
        .iconPalette = gItemIconPalette_FameChecker,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = _("Teachy TV"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un televisor sintonizado\n"
            "a un programa de consejos\n"
            "para Entrenadores."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeachyTV,
        .iconPalette = gItemIconPalette_TeachyTV,
    },

// Story Key Items

    [ITEM_SS_TICKET] =
    {
        .name = _("Ticket S.S."),
        .price = 0,
        .description = COMPOUND_STRING(
            "El ticket necesario\n"
            "para navegar en un\n"
            "ferry."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SSTicket,
        .iconPalette = gItemIconPalette_SSTicket,
    },

    [ITEM_EON_TICKET] =
    {
        .name = _("Ticket Eon"),
        .price = 0,
        .description = COMPOUND_STRING(
            "El ticket para un\n"
            "ferry a una isla\n"
            "del sur."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
        .iconPic = gItemIcon_EonTicket,
        .iconPalette = gItemIconPalette_EonTicket,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = _("Ticket Mystic"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un ticket necesario\n"
            "para abordar el barco\n"
            "a Navel Rock."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_MysticTicket,
        .iconPalette = gItemIconPalette_MysticTicket,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = _("Ticket Aurora"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un ticket necesario\n"
            "para abordar el barco\n"
            "a Birth Island."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_AuroraTicket,
        .iconPalette = gItemIconPalette_AuroraTicket,
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = _("Mapa viejo"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un mapa marino descolorido\n"
            "que muestra el camino\n"
            "a una isla determinada."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_OldSeaMap,
        .iconPalette = gItemIconPalette_OldSeaMap,
    },

    [ITEM_LETTER] =
    {
        .name = _("Carta"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una carta de Steven\n"
            "del Presidente de\n"
            "Devon Corp."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Letter,
        .iconPalette = gItemIconPalette_LavaCookieAndLetter,
    },

    [ITEM_DEVON_PARTS] =
    {
        .name = _("Gafas aisl."),
        .pluralName = _("Gafas aisl."),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un paquete que contiene\n"
            "las partes de la máquina de\n"
            "Devon."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_DevonParts,
        .iconPalette = gItemIconPalette_DevonParts,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = _("Gafas de Arena"),
        .pluralName = _("Gafas de Arena"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Gafas prácticas que\n"
            "protegen los ojos de\n"
            "tormentas de arena del desierto."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GoGoggles,
        .iconPalette = gItemIconPalette_GoGoggles,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = _("Det. Devon"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un dispositivo de Devon\n"
            "que señala cualquier\n"
            "Pokémon invisible."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_DevonScope,
        .iconPalette = gItemIconPalette_DevonScope,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = _("Llave Sótano"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una llave para acceder\n"
            "al sótano del edificio\n"
            "de Devon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BasementKey,
        .iconPalette = gItemIconPalette_OldKey,
    },

        [ITEM_SCANNER] =
    {
        .name = _("Escáner"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un dispositivo encontrado\n"
            "dentro del\n"
            "Barco Abandonado."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Scanner,
        .iconPalette = gItemIconPalette_Scanner,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = _("Llave Almacén"),
        .price = 0,
        .description = COMPOUND_STRING(
            "La llave del\n"
            "almacén dentro del\n"
            "Barco Abandonado."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_StorageKey,
        .iconPalette = gItemIconPalette_OldKey,
    },

    [ITEM_KEY_TO_ROOM_1] =
    {
        .name = _("Llave Sala 1"),
        .pluralName = _("Llaves Sala 1"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom1,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_2] =
    {
        .name = _("Llave Sala 2"),
        .pluralName = _("Llaves Sala 2"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom2,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_4] =
    {
        .name = _("Llave Sala 4"),
        .pluralName = _("Llaves Sala 4"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom4,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_6] =
    {
        .name = _("Llave Sala 6"),
        .pluralName = _("Llaves Sala 6"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom6,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_METEORITE] =
    {
        .name = _("Meteorito"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un meteorito encontrado\n"
            "en la Cascada Meteorito."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        .iconPic = gItemIcon_Meteorite,
        .iconPalette = gItemIconPalette_Meteorite,
    },

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = _("Emblema Magma"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un objeto en forma de\n"
            "medalla con el símbolo\n"
            "del Team Magma."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_MagmaEmblem,
        .iconPalette = gItemIconPalette_MagmaEmblem,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = _("Pase Concurso"),
        .pluralName = _("Pases Concurso"),
        .price = 0,
        .description = COMPOUND_STRING(
            "El pase necesario\n"
            "para entrar en los\n"
            "Concursos Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_ContestPass,
        .iconPalette = gItemIconPalette_ContestPass,
    },

    [ITEM_PARCEL] =
    {
        .name = _("Paquete"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un paquete para el Prof.\n"
            "Oak enviado por un\n"
            "empleado de la tienda Pokémon."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Parcel,
        .iconPalette = gItemIconPalette_Parcel,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = _("Llave Secreta"),
        .price = 0,
        .description = COMPOUND_STRING(
            "La llave de la\n"
            "entrada del Gimnasio\n"
            "de Isla Canela."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SecretKey,
        .iconPalette = gItemIconPalette_SecretKey,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = _("Cupón Bici"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un cupón para\n"
            "obtener una bicicleta\n"
            "en la tienda de bicicletas."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BikeVoucher,
        .iconPalette = gItemIconPalette_BikeVoucher,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = _("Dientes Dorados"),
        .pluralName = _("Dientes Dorados"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Dentaduras doradas perdidas\n"
            "por el Guardián de la Zona Safari."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GoldTeeth,
        .iconPalette = gItemIconPalette_GoldTeeth,
    },

        [ITEM_CARD_KEY] =
    {
        .name = _("Ll. tarjeta"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una llave tipo tarjeta\n"
            "usada en la oficina\n"
            "de Silph Co."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_CardKey,
        .iconPalette = gItemIconPalette_CardKey,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = _("Llave ascensor"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una llave de ascensor\n"
            "usada en el escondite\n"
            "del Team Rocket."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_LiftKey,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = _("Visor Silph"),
        .price = 0,
        .description = COMPOUND_STRING(
            "El ámbito de Silph Co\n"
            "hace que los Pokémon\n"
            "invisibles sean visibles."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_SilphScope,
        .iconPalette = gItemIconPalette_SilphScope,
    },

    [ITEM_TRI_PASS] =
    {
        .name = _("Tri-Pase"),
        .pluralName = _("Tri-Pases"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un pase para los ferris\n"
            "entre la Isla Uno, Dos,\n"
            "y Tres."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TriPass,
        .iconPalette = gItemIconPalette_TriPass,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = _("Pase Iris"),
        .pluralName = _("Pases Iris"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Para los ferris que sirven\n"
            "a Vermilion y las\n"
            "Islas Sevii."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RainbowPass,
        .iconPalette = gItemIconPalette_RainbowPass,
    },

    [ITEM_TEA] =
    {
        .name = _("Té"),
        .pluralName = _("Tés"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un té que quita la sed\n"
            "preparado por una\n"
            "anciana."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Tea,
        .iconPalette = gItemIconPalette_Tea,
    },

    [ITEM_RUBY] =
    {
        .name = _("Rubí"),
        .pluralName = _("Rubíes"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una gema roja y\n"
            "brillante que simboliza\n"
            "la pasión."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Gem,
        .iconPalette = gItemIconPalette_Ruby,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = _("Zafiro"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una gema azul brillante\n"
            "que simboliza\n"
            "la honestidad."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Gem,
        .iconPalette = gItemIconPalette_Sapphire,
    },

    [ITEM_ABILITY_SHIELD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Escudo hab.", "EscudoHabilidad"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_ABILITY_SHIELD,
        .description = COMPOUND_STRING(
            "Los cambios de habilidad\n"
            "se previenen para el\n"
            "portador de este objeto."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_AbilityShield,
        .iconPalette = gItemIconPalette_AbilityShield,
    },

// GEN 9 ITEMS

        [ITEM_CLEAR_AMULET] =
    {
        .name = _("Amuleto puro"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_CLEAR_AMULET,
        .description = COMPOUND_STRING(
            "Previene la reducción\n"
            "de estadísticas para\n"
            "el portador de este objeto."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_ClearAmulet,
        .iconPalette = gItemIconPalette_ClearAmulet,
    },

    [ITEM_PUNCHING_GLOVE] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Guante boxeo", "Guante boxeo"),
        .price = 15000,
        .holdEffect = HOLD_EFFECT_PUNCHING_GLOVE,
        .description = COMPOUND_STRING(
            "Aumenta los movimientos\n"
            "de golpeo y elimina\n"
            "su contacto."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_PunchingGlove,
        .iconPalette = gItemIconPalette_PunchingGlove,
    },

    [ITEM_COVERT_CLOAK] =
    {
        .name = _("Capa furtiva"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_COVERT_CLOAK,
        .description = COMPOUND_STRING(
            "Protege al portador\n"
            "de los efectos secundarios\n"
            "de los movimientos."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_CovertCloak,
        .iconPalette = gItemIconPalette_CovertCloak,
    },

    [ITEM_LOADED_DICE] =
    {
        .name = _("Dado cargado"),
        .pluralName = _("Dados cargados"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_LOADED_DICE,
        .description = COMPOUND_STRING(
            "Lanza números altos.\n"
            "Los golpes múltiples\n"
            "acertarán más veces."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_LoadedDice,
        .iconPalette = gItemIconPalette_LoadedDice,
    },

    [ITEM_AUSPICIOUS_ARMOR] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Arm. afort.", "Arm. afort."),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Armadura habitada por\n"
            "deseos auspiciosos.\n"
            "Causa evolución."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_AuspiciousArmor,
        .iconPalette = gItemIconPalette_AuspiciousArmor,
    },

    [ITEM_BOOSTER_ENERGY] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("E. potencia", "E. potencia"),
        .pluralName = HANDLE_EXPANDED_ITEM_NAME("E. potencia", "E. potencia"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_BOOSTER_ENERGY,
        .description = COMPOUND_STRING(
            "Energía encapsulada\n"
            "que potencia a Pokémon\n"
            "con ciertas Habilidades."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BoosterEnergy,
        .iconPalette = gItemIconPalette_BoosterEnergy,
    },

    [ITEM_BIG_BAMBOO_SHOOT] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Bambú grande", "Bambú grande"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Un brote de bambú grande\n"
            "y raro. Mejor\n"
            "vendido a gourmets."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_BigBambooShoot,
        .iconPalette = gItemIconPalette_BigBambooShoot,
    },

    [ITEM_GIMMIGHOUL_COIN] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("M. Gimmighoul", "M. Gimmighoul"),
        .price = 400,
        .description = COMPOUND_STRING(
            "Gimmighoul acumula\n"
            "y atesora estas\n"
            "monedas curiosas."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_GimmighoulCoin,
        .iconPalette = gItemIconPalette_GimmighoulCoin,
    },

    [ITEM_LEADERS_CREST] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Filo líder", "Filo líder"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Un fragmento de una\n"
            "antigua espada de algún\n"
            "tipo. Sostenido por Bisharp."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_LeadersCrest,
        .iconPalette = gItemIconPalette_LeadersCrest,
    },

    [ITEM_MALICIOUS_ARMOR] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Arm. malicia", "Arm. malicia"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Armadura habitada por\n"
            "voluntad maliciosa.\n"
            "Causa evolución."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_MaliciousArmor,
        .iconPalette = gItemIconPalette_MaliciousArmor,
    },

    [ITEM_MIRROR_HERB] =
    {
        .name = _("Hierba espejo"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_MIRROR_HERB,
        .description = COMPOUND_STRING(
            "Refleja el aumento de\n"
            "estadísticas del enemigo\n"
            "pero solo una vez."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_MirrorHerb,
        .iconPalette = gItemIconPalette_MirrorHerb,
    },

    [ITEM_SCROLL_OF_DARKNESS] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("P. oscuro", "P. oscuro"),
        .pluralName = HANDLE_EXPANDED_ITEM_NAME("P. oscuro", "P. oscuro"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un pergamino peculiar\n"
            "con secretos del\n"
            "camino oscuro."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .iconPic = gItemIcon_ScrollOfDarkness,
        .iconPalette = gItemIconPalette_ScrollOfDarkness,
    },

    [ITEM_SCROLL_OF_WATERS] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("P. aguas", "P. aguas"),
        .pluralName = HANDLE_EXPANDED_ITEM_NAME("P. aguas", "P. aguas"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Un pergamino peculiar\n"
            "con secretos del\n"
            "camino acuático."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .iconPic = gItemIcon_ScrollOfWaters,
        .iconPalette = gItemIconPalette_ScrollOfWaters,
    },

    [ITEM_TERA_ORB] =
    {
        .name = _("Orbe tera"),
        .price = 0,
        .description = COMPOUND_STRING(
            "La energía acumulada\n"
            "puede usarse para\n"
            "causar Terastalización."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraOrb,
        .iconPalette = gItemIconPalette_TeraOrb,
    },

        [ITEM_TINY_BAMBOO_SHOOT] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Bambú peq.", "Bambú peq."),
        .price = 750,
        .description = COMPOUND_STRING(
            "Un brote de bambú\n"
            "pequeño y raro. Mejor\n"
            "vendido a gourmets."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_TinyBambooShoot,
        .iconPalette = gItemIconPalette_TinyBambooShoot,
    },

    [ITEM_BUG_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera bicho", "Tera bicho"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_BugTeraShard,
    },

    [ITEM_DARK_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera siniestro", "Tera siniestro"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_DarkTeraShard,
    },

    [ITEM_DRAGON_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera dragón", "Tera dragón"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_DragonTeraShard,
    },

    [ITEM_ELECTRIC_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera eléc.", "Tera eléc."),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_ElectricTeraShard,
    },

    [ITEM_FAIRY_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera Hada", "Tera Hada"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FairyTeraShard,
    },

    [ITEM_FIGHTING_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera lucha", "Tera lucha"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FightingTeraShard,
    },

    [ITEM_FIRE_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera fuego", "Tera fuego"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FireTeraShard,
    },

    [ITEM_FLYING_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera vuelo", "Tera vuelo"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_FlyingTeraShard,
    },

    [ITEM_GHOST_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera fantasma", "Tera fantasma"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_GhostTeraShard,
    },

    [ITEM_GRASS_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera planta", "Tera planta"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_GrassTeraShard,
    },

    [ITEM_GROUND_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera tierra", "Tera tierra"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_GroundTeraShard,
    },

    [ITEM_ICE_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera hielo", "Tera hielo"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_IceTeraShard,
    },

    [ITEM_NORMAL_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera normal", "Tera normal"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_NormalTeraShard,
    },

    [ITEM_POISON_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera veneno", "Tera veneno"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_PoisonTeraShard,
    },

    [ITEM_PSYCHIC_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera psíquico", "Tera psíquico"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_PsychicTeraShard,
    },

    [ITEM_ROCK_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera roca", "Tera roca"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_RockTeraShard,
    },

    [ITEM_STEEL_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera acero", "Tera acero"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_SteelTeraShard,
    },

    [ITEM_WATER_TERA_SHARD] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("Tera agua", "Tera agua"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_TeraShard,
        .iconPalette = gItemIconPalette_WaterTeraShard,
    },

    [ITEM_ADAMANT_CRYSTAL] =
    {
        .name = HANDLE_EXPANDED_ITEM_NAME("C. adamantino", "C. adamantino"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una gema grande y brillante\n"
            "que permite a Dialga\n"
            "cambiar de forma."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_AdamantCrystal,
        .iconPalette = gItemIconPalette_AdamantCrystal,
    },

    [ITEM_GRISEOUS_CORE] =
    {
        .name = _("Núcleo griseo"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Una gema grande y brillante\n"
            "que permite a Giratina\n"
            "cambiar de forma."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        .iconPic = gItemIcon_GriseousCore,
        .iconPalette = gItemIconPalette_GriseousCore,
    },

    [ITEM_LUSTROUS_GLOBE] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("E. lustrosa", "E. lustrosa"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Una gran gema resplandeciente\n"
        "que permite a Palkia\n"
        "cambiar de forma."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 60,
    .iconPic = gItemIcon_LustrousGlobe,
    .iconPalette = gItemIconPalette_LustrousGlobe,
},

[ITEM_BLACK_AUGURITE] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Augurita negra", "Augurita Negra"),
    .price = 8000,
    .description = COMPOUND_STRING(
        "Una piedra negra que\n"
        "hace que algunos Pokémon\n"
        "evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_BlackAugurite,
    .iconPalette = gItemIconPalette_BlackAugurite,
},

[ITEM_LINKING_CORD] =
{
    .name = _("Cordón unión"),
    .price = 8000,
    .description = COMPOUND_STRING(
        "Una cuerda misteriosa\n"
        "que hace que algunos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_LinkingCord,
    .iconPalette = gItemIconPalette_LinkingCord,
},

[ITEM_PEAT_BLOCK] =
{
    .name = _("Bloque turba"),
    .price = 10000,
    .description = COMPOUND_STRING(
        "Un bloque de material\n"
        "que hace que algunos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_PeatBlock,
    .iconPalette = gItemIconPalette_PeatBlock,
},

[ITEM_BERSERK_GENE] =
{
    .name = _("Gen loco"),
    .price = 20,
    .holdEffect = HOLD_EFFECT_BERSERK_GENE,
    .description = COMPOUND_STRING(
        "Aumenta drásticamente\n"
        "el Ataque, pero causa\n"
        "confusión duradera."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_BerserkGene,
    .iconPalette = gItemIconPalette_BerserkGene,
},

[ITEM_FAIRY_FEATHER] =
{
    .name = _("Pluma feérica"),
    .price = 1000,
    .holdEffect = HOLD_EFFECT_FAIRY_POWER,
    .holdEffectParam = TYPE_BOOST_PARAM,
    .description = COMPOUND_STRING(
        "Un objeto que aumenta\n"
        "el poder de los movimientos\n"
        "de tipo Hada."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .flingPower = 10,
    .iconPic = gItemIcon_FairyFeather,
    .iconPalette = gItemIconPalette_FairyFeather,
},

[ITEM_SYRUPY_APPLE] =
{
    .name = _("Man. melosa"),
    .price = 2200,
    .description = COMPOUND_STRING(
        "Una manzana muy almibada\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 30,
    .iconPic = gItemIcon_SyrupyApple,
    .iconPalette = gItemIconPalette_SyrupyApple,
},

[ITEM_UNREMARKABLE_TEACUP] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Taza mediocre", "Taza mediocre"),
    .price = 1600,
    .description = COMPOUND_STRING(
        "Una taza agrietada\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_UnremarkableTeacup,
    .iconPalette = gItemIconPalette_UnremarkableTeacup,
},

[ITEM_MASTERPIECE_TEACUP] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Taza exq.", "Taza exq."),
    .price = 38000,
    .description = COMPOUND_STRING(
        "Una taza astillada\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .flingPower = 80,
    .iconPic = gItemIcon_MasterpieceTeacup,
    .iconPalette = gItemIconPalette_MasterpieceTeacup,
},

[ITEM_CORNERSTONE_MASK] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Másc. cim.", "Másc. cim."),
    .price = 0,
    .description = COMPOUND_STRING(
        "Permite a Ogerpon\n"
        "utilizar el tipo Roca\n"
        "en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_CornerstoneMask,
    .iconPalette = gItemIconPalette_CornerstoneMask,
},

[ITEM_WELLSPRING_MASK] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Másc. aguas", "Másc. aguas"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Permite a Ogerpon\n"
        "utilizar el tipo Agua\n"
        "en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_WellspringMask,
    .iconPalette = gItemIconPalette_WellspringMask,
},

[ITEM_HEARTHFLAME_MASK] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Másc. hoguera", "Másc. hoguera"),
    .price = 0,
    .description = COMPOUND_STRING(
        "Permite a Ogerpon\n"
        "utilizar el tipo Fuego\n"
        "en batalla."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_HearthflameMask,
    .iconPalette = gItemIconPalette_HearthflameMask,
},

[ITEM_HEALTH_MOCHI] =
{
    .name = _("Mochi vigor"),
    .pluralName = _("Mochis vigor"),
    .price = 500,
    .description = sHealthFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_HpMochi,
    .flingPower = 30,
    .iconPic = gItemIcon_Mochi,
    .iconPalette = gItemIconPalette_HealthMochi,
},

[ITEM_MUSCLE_MOCHI] =
{
    .name = _("Mochi músculo"),
    .pluralName = _("Moochi músculo"),
    .price = 500,
    .description = sMuscleFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_AtkMochi,
    .flingPower = 30,
    .iconPic = gItemIcon_Mochi,
    .iconPalette = gItemIconPalette_MuscleMochi,
},

[ITEM_RESIST_MOCHI] =
{
    .name = _("Mochi aguante"),
    .pluralName = _("Mochis aguantea"),
    .price = 500,
    .description = sResistFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_DefMochi,
    .flingPower = 30,
    .iconPic = gItemIcon_Mochi,
    .iconPalette = gItemIconPalette_ResistMochi,
},

[ITEM_GENIUS_MOCHI] =
{
    .name = _("Mochi int."),
    .pluralName = _("Mochis int."),
    .price = 500,
    .description = sGeniusFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_SpatkMochi,
    .flingPower = 30,
    .iconPic = gItemIcon_Mochi,
    .iconPalette = gItemIconPalette_GeniusMochi,
},

[ITEM_CLEVER_MOCHI] =
{
    .name = _("Mochi mente"),
    .pluralName = _("Mochi mente"),
    .price = 500,
    .description = sCleverFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_SpdefMochi,
    .flingPower = 30,
    .iconPic = gItemIcon_Mochi,
    .iconPalette = gItemIconPalette_CleverMochi,
},

[ITEM_SWIFT_MOCHI] =
{
    .name = _("Mochi ímpetu"),
    .pluralName = _("Mochi ímpetu"),
    .price = 500,
    .description = sSwiftFeatherDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .effect = gItemEffect_SpeedMochi,
    .flingPower = 30,
    .iconPic = gItemIcon_Mochi,
    .iconPalette = gItemIconPalette_SwiftMochi,
},

[ITEM_FRESH_START_MOCHI] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Mochi Renacer", "Mochi Renacer"),
    .pluralName = HANDLE_EXPANDED_ITEM_NAME("Mochis Renacer", "Mochis Renacer"),
    .price = 300,
    .description = COMPOUND_STRING(
        "Un objeto que reinicia\n"
        "todos los puntos base\n"
        "de un Pokémon."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_ResetEVs,
    .effect = gItemEffect_ResetMochi,
    .flingPower = 30,
    .iconPic = gItemIcon_Mochi,
    .iconPalette = gItemIconPalette_FreshStartMochi,
},

[ITEM_GLIMMERING_CHARM] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Am. Brillante", "Am. Brillante"),
    .price = 0,
    .importance = 1,
    .description = COMPOUND_STRING(
        "Un amuleto que aumenta\n"
        "las esquirlas obtenidas\n"
        "en las Tera Incursiones."),
    .pocket = POCKET_KEY_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_GlimmeringCharm,
    .iconPalette = gItemIconPalette_GlimmeringCharm,
},

[ITEM_METAL_ALLOY] =
{
    .name = _("Al. Metálica"),
    .price = 6000,
    .description = COMPOUND_STRING(
        "Un metal peculiar\n"
        "que hace que ciertos\n"
        "Pokémon evolucionen."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    .effect = gItemEffect_EvoItem,
    .iconPic = gItemIcon_MetalAlloy,
    .iconPalette = gItemIconPalette_MetalAlloy,
},

[ITEM_STELLAR_TERA_SHARD] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Tera estelar", "Tera estelar"),
    .price = 0,
    .description = sTeraShardDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_StellarTeraShard,
    .iconPalette = gItemIconPalette_StellarTeraShard,
},

[ITEM_JUBILIFE_MUFFIN] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Muffin Jubileo", "Muffin Jubileo"),
    .price = 250,
    .description = sFullHealDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_CURE_STATUS,
    .flingPower = 30,
    .iconPic = gItemIcon_JubilifeMuffin,
    .iconPalette = gItemIconPalette_JubilifeMuffin,
},

[ITEM_REMEDY] =
{
    .name = _("Remedio"),
    .price = 150,
    .description = COMPOUND_STRING(
        "Un polvo amargo\n"
        "que restaura PS\n"
        "en 20 puntos."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_Remedy,
    .flingPower = 30,
    .iconPic = gItemIcon_Remedy,
    .iconPalette = gItemIconPalette_Remedy,
},

[ITEM_FINE_REMEDY] =
{
    .name = _("Superremedio"),
    .price = 150,
    .description = COMPOUND_STRING(
        "Un polvo amargo\n"
        "que restaura PS\n"
#if I_HEALTH_RECOVERY >= GEN_7
        "en 60 puntos."),
#else
        "en 50 puntos."),
#endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_FineRemedy,
    .flingPower = 30,
    .iconPic = gItemIcon_FineRemedy,
    .iconPalette = gItemIconPalette_FineRemedy,
},

    [ITEM_SUPERB_REMEDY] =
{
    .name = _("Hiperremedio"),
    .price = 750,
    .description = COMPOUND_STRING(
        "Un polvo amargo\n"
#if I_HEALTH_RECOVERY >= GEN_7
        "que restaura PS\n"
        "en 120 puntos."),
#else
        "que restaura PS\n"
        "en 200 puntos."),
#endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    .battleUsage = EFFECT_ITEM_RESTORE_HP,
    .effect = gItemEffect_SuperbRemedy,
    .flingPower = 30,
    .iconPic = gItemIcon_SuperbRemedy,
    .iconPalette = gItemIconPalette_SuperbRemedy,
},

[ITEM_AUX_EVASION] =
{
    .name = _("Gragea evasiva"),
    .price = 800,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "la evasión durante\n"
        "una batalla."),
#else
        "Aumenta la evasión\n"
        "durante una batalla."),
#endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    //.effect = currently missing
    .iconPic = gItemIcon_AuxBottle,
    .iconPalette = gItemIconPalette_AuxEvasion,
},

[ITEM_AUX_GUARD] =
{
    .name = _("Gragea defensiva"),
    .price = 400,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "las defensas durante\n"
        "una batalla."),
#else
        "Aumenta las defensas\n"
        "durante una batalla."),
#endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    //.effect = currently missing
    .iconPic = gItemIcon_AuxBottle,
    .iconPalette = gItemIconPalette_AuxGuard,
},

[ITEM_AUX_POWER] =
{
    .name = _("Gragea ofensiva"),
    .price = 400,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "los ataques durante\n"
        "una batalla."),
#else
        "Aumenta los ataques\n"
        "durante una batalla."),
#endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    //.effect = currently missing
    .iconPic = gItemIcon_AuxBottle,
    .iconPalette = gItemIconPalette_AuxPower,
},

[ITEM_AUX_POWERGUARD] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Gragea multi", "Gragea multi"),
    .price = 1200,
    .holdEffectParam = X_ITEM_STAGES,
    .description = COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
        "Aumenta drásticamente\n"
        "los ataques y defensas\n"
        "durante una batalla."),
#else
        "Aumenta los ataques\n"
        "y defensas durante\n"
        "una batalla."),
#endif
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    //.effect = currently missing
    .iconPic = gItemIcon_AuxPowerguard,
    .iconPalette = gItemIconPalette_AuxPowerguard,
},

[ITEM_CHOICE_DUMPLING] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Ap. elección", "Ap. elección"),
    .price = 1200,
    .description = sQuestionMarksDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    //.effect = currently missing
    .iconPic = gItemIcon_ChoiceDumpling,
    .iconPalette = gItemIconPalette_ChoiceDumpling,
},

[ITEM_SWAP_SNACK] =
{
    .name = _("Bocadito inv."),
    .price = 1200,
    .description = sQuestionMarksDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    //.effect = currently missing
    .iconPic = gItemIcon_SwapSnack,
    .iconPalette = gItemIconPalette_SwapSnack,
},

[ITEM_TWICE_SPICED_RADISH] =
{
    .name = HANDLE_EXPANDED_ITEM_NAME("Encurtidoble", "Encurtidoble"),
    .price = 1600,
    .description = sQuestionMarksDesc,
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    //.effect = currently missing
    .iconPic = gItemIcon_TwiceSpicedRadish,
    .iconPalette = gItemIconPalette_TwiceSpicedRadish,
},

[ITEM_POKESHI_DOLL] =
{
    .name = _("Pokémuñeca"),
    .price = 2000,
    .description = COMPOUND_STRING(
        "Un juguete de madera\n"
        "esculpido a imagen de\n"
        "un Pokémon. Puede ser vendido."),
    .pocket = POCKET_ITEMS,
    .type = ITEM_USE_BAG_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    .iconPic = gItemIcon_PokeshiDoll,
    .iconPalette = gItemIconPalette_PokeshiDoll,
},

};
