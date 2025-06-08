#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen9[] =
{
#endif

#if P_FAMILY_SPRIGATITO
    [SPECIES_SPRIGATITO] =
    {
        .baseHP        = 40,
        .baseAttack    = 61,
        .baseDefense   = 54,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sprigatito"),
        .cryId = CRY_SPRIGATITO,
        .natDexNum = NATIONAL_DEX_SPRIGATITO,
        .categoryName = _("Gato Planta"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "El dulce aroma que emana su cuerpo\n"
            "hipnotiza a quien lo rodean. Este\n"
            "aroma se intensifica cuando este\n"
            "Pokémon está bajo el sol."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sprigatito,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sprigatito,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sprigatito,
        .shinyPalette = gMonShinyPalette_Sprigatito,
        .iconSprite = gMonIcon_Sprigatito,
        .iconPalIndex = 1,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Sprigatito)
        OVERWORLD(
            sPicTable_Sprigatito,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sprigatito,
            gShinyOverworldPalette_Sprigatito
        )
        .levelUpLearnset = sSprigatitoLevelUpLearnset,
        .teachableLearnset = sSprigatitoTeachableLearnset,
        .eggMoveLearnset = sSprigatitoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLORAGATO}),
    },

    [SPECIES_FLORAGATO] =
    {
        .baseHP        = 61,
        .baseAttack    = 80,
        .baseDefense   = 63,
        .baseSpeed     = 83,
        .baseSpAttack  = 60,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Floragato"),
        .cryId = CRY_FLORAGATO,
        .natDexNum = NATIONAL_DEX_FLORAGATO,
        .categoryName = _("Gato Planta"),
        .height = 9,
        .weight = 122,
        .description = COMPOUND_STRING(
            "Floragato maneja hábilmente la enredadera\n"
            "oculta bajo su pelaje largo, golpeando\n"
            "el capullo de flor duro contra sus\n"
            "oponentes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Floragato,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Floragato,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Floragato,
        .shinyPalette = gMonShinyPalette_Floragato,
        .iconSprite = gMonIcon_Floragato,
        .iconPalIndex = 1,
        SHADOW(-3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Floragato)
        OVERWORLD(
            sPicTable_Floragato,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Floragato,
            gShinyOverworldPalette_Floragato
        )
        .levelUpLearnset = sFloragatoLevelUpLearnset,
        .teachableLearnset = sFloragatoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_MEOWSCARADA}),
    },

    [SPECIES_MEOWSCARADA] =
    {
        .baseHP        = 76,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 123,
        .baseSpAttack  = 81,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DARK),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Meowscarada"),
        .cryId = CRY_MEOWSCARADA,
        .natDexNum = NATIONAL_DEX_MEOWSCARADA,
        .categoryName = _("Mago"),
        .height = 15,
        .weight = 312,
        .description = COMPOUND_STRING(
            "Este Pokémon utiliza el pelaje\n"
            "reflectante que reviste su capa para\n"
            "camuflar el tallo de su flor, creando\n"
            "la ilusión de que la flor está flotando."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meowscarada,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Meowscarada,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Meowscarada,
        .shinyPalette = gMonShinyPalette_Meowscarada,
        .iconSprite = gMonIcon_Meowscarada,
        .iconPalIndex = 1,
        SHADOW(-3, 14, SHADOW_SIZE_S)
        FOOTPRINT(Meowscarada)
        OVERWORLD(
            sPicTable_Meowscarada,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Meowscarada,
            gShinyOverworldPalette_Meowscarada
        )
        .levelUpLearnset = sMeowscaradaLevelUpLearnset,
        .teachableLearnset = sMeowscaradaTeachableLearnset,
    },
#endif //P_FAMILY_SPRIGATITO

#if P_FAMILY_FUECOCO
    [SPECIES_FUECOCO] =
    {
        .baseHP        = 67,
        .baseAttack    = 45,
        .baseDefense   = 59,
        .baseSpeed     = 36,
        .baseSpAttack  = 63,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 62,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fuecoco"),
        .cryId = CRY_FUECOCO,
        .natDexNum = NATIONAL_DEX_FUECOCO,
        .categoryName = _("Fuegodrilo"),
        .height = 4,
        .weight = 98,
        .description = COMPOUND_STRING(
            "Su saco de fuego es pequeño, por lo que la\n"
            "energía siempre está escapando. Se libera\n"
            "desde la parte superior de la cabeza\n"
            "de Fuecoco y titila de un lado a otro."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fuecoco,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fuecoco,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Fuecoco,
        .shinyPalette = gMonShinyPalette_Fuecoco,
        .iconSprite = gMonIcon_Fuecoco,
        .iconPalIndex = 2,
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Fuecoco)
        OVERWORLD(
            sPicTable_Fuecoco,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fuecoco,
            gShinyOverworldPalette_Fuecoco
        )
        .levelUpLearnset = sFuecocoLevelUpLearnset,
        .teachableLearnset = sFuecocoTeachableLearnset,
        .eggMoveLearnset = sFuecocoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CROCALOR}),
    },

    [SPECIES_CROCALOR] =
    {
        .baseHP        = 81,
        .baseAttack    = 55,
        .baseDefense   = 78,
        .baseSpeed     = 49,
        .baseSpAttack  = 90,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 144,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Crocalor"),
        .cryId = CRY_CROCALOR,
        .natDexNum = NATIONAL_DEX_CROCALOR,
        .categoryName = _("Fuegodrilo"),
        .height = 10,
        .weight = 307,
        .description = COMPOUND_STRING(
            "La combinación de fuego de Crocalor y su\n"
            "fuerte vitalidad ha provocado que salga\n"
            "una bola de fuego en forma de huevo en\n"
            "la cabeza del Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crocalor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Crocalor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Crocalor,
        .shinyPalette = gMonShinyPalette_Crocalor,
        .iconSprite = gMonIcon_Crocalor,
        .iconPalIndex = 0,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Crocalor)
        OVERWORLD(
            sPicTable_Crocalor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Crocalor,
            gShinyOverworldPalette_Crocalor
        )
        .levelUpLearnset = sCrocalorLevelUpLearnset,
        .teachableLearnset = sCrocalorTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SKELEDIRGE}),
    },

    [SPECIES_SKELEDIRGE] =
    {
        .baseHP        = 104,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 66,
        .baseSpAttack  = 110,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 265,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Skeledirge"),
        .cryId = CRY_SKELEDIRGE,
        .natDexNum = NATIONAL_DEX_SKELEDIRGE,
        .categoryName = _("Cantante"),
        .height = 16,
        .weight = 3265,
        .description = COMPOUND_STRING(
            "El canto suave de Skeledirge calma las\n"
            "almas de todos los que lo escuchan. Quema\n"
            "a sus enemigos hasta carbonizarlos\n"
            "con llamas de más de 2.000 ºC."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skeledirge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skeledirge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Skeledirge,
        .shinyPalette = gMonShinyPalette_Skeledirge,
        .iconSprite = gMonIcon_Skeledirge,
        .iconPalIndex = 0,
        SHADOW(6, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Skeledirge)
        OVERWORLD(
            sPicTable_Skeledirge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skeledirge,
            gShinyOverworldPalette_Skeledirge
        )
        .levelUpLearnset = sSkeledirgeLevelUpLearnset,
        .teachableLearnset = sSkeledirgeTeachableLearnset,
    },
#endif //P_FAMILY_FUECOCO

#if P_FAMILY_QUAXLY
    [SPECIES_QUAXLY] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield =  62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Quaxly"),
        .cryId = CRY_QUAXLY,
        .natDexNum = NATIONAL_DEX_QUAXLY,
        .categoryName = _("Patito"),
        .height = 5,
        .weight = 61,
        .description = COMPOUND_STRING(
            "Con sus fuertes patas, puede nadar\n"
            "fácilmente incluso en ríos de flujo rápido.\n"
            "Le gusta mantener las cosas ordenadas\n"
            "y tiende a pensar demasiado en las cosas."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quaxly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Quaxly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Quaxly,
        .shinyPalette = gMonShinyPalette_Quaxly,
        .iconSprite = gMonIcon_Quaxly,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Quaxly)
        OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sQuaxlyLevelUpLearnset,
        .teachableLearnset = sQuaxlyTeachableLearnset,
        .eggMoveLearnset = sQuaxlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUAXWELL}),
    },

    [SPECIES_QUAXWELL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Quaxwell"),
        .cryId = CRY_QUAXWELL,
        .natDexNum = NATIONAL_DEX_QUAXWELL,
        .categoryName = _("Disciplinado"),
        .height = 12,
        .weight = 215,
        .description = COMPOUND_STRING(
            "El trabajador Quaxwell observa\n"
            "a personas y Pokémon de varias\n"
            "regiones e incorpora sus\n"
            "movs. en sus propias rutinas de baile."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quaxwell,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Quaxwell,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Quaxwell,
        .shinyPalette = gMonShinyPalette_Quaxwell,
        .iconSprite = gMonIcon_Quaxwell,
        .iconPalIndex = 0,
        SHADOW(1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Quaxwell)
        OVERWORLD(
            sPicTable_Quaxwell,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quaxwell,
            gShinyOverworldPalette_Quaxwell
        )
        .levelUpLearnset = sQuaxwellLevelUpLearnset,
        .teachableLearnset = sQuaxwellTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_QUAQUAVAL}),
    },

    [SPECIES_QUAQUAVAL] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Quaquaval"),
        .cryId = CRY_QUAQUAVAL,
        .natDexNum = NATIONAL_DEX_QUAQUAVAL,
        .categoryName = _("Bailarín"),
        .height = 18,
        .weight = 619,
        .description = COMPOUND_STRING(
            "Un solo golpe de un Quaquaval puede\n"
            "hacer rodar un camión. Este Pokémon\n"
            "utiliza sus fuertes piernas para realizar\n"
            "danzas impactantes de tierras lejanas."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quaquaval,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Quaquaval,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Quaquaval,
        .shinyPalette = gMonShinyPalette_Quaquaval,
        .iconSprite = gMonIcon_Quaquaval,
        .iconPalIndex = 0,
        SHADOW(-7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Quaquaval)
        OVERWORLD(
            sPicTable_Quaquaval,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quaquaval,
            gShinyOverworldPalette_Quaquaval
        )
        .levelUpLearnset = sQuaquavalLevelUpLearnset,
        .teachableLearnset = sQuaquavalTeachableLearnset,
    },
#endif //P_FAMILY_QUAXLY

#if P_FAMILY_LECHONK
    [SPECIES_LECHONK] =
    {
        .baseHP        = 54,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 51,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Lechonk"),
        .cryId = CRY_LECHONK,
        .natDexNum = NATIONAL_DEX_LECHONK,
        .categoryName = _("Gorrino"),
        .height = 5,
        .weight = 102,
        .description = COMPOUND_STRING(
            "Busca comida todo el día. Posee un\n"
            "agudo sentido del olfato, pero no lo\n"
            "utiliza para nada más que buscar alimento."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lechonk,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lechonk,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Lechonk,
        .shinyPalette = gMonShinyPalette_Lechonk,
        .iconSprite = gMonIcon_Lechonk,
        .iconPalIndex = 1,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Lechonk)
        OVERWORLD(
            sPicTable_Lechonk,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lechonk,
            gShinyOverworldPalette_Lechonk
        )
        .levelUpLearnset = sLechonkLevelUpLearnset,
        .teachableLearnset = sLechonkTeachableLearnset,
        .eggMoveLearnset = sLechonkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_MALE, 18, SPECIES_OINKOLOGNE_M},
                                {EVO_LEVEL_FEMALE, 18, SPECIES_OINKOLOGNE_F}),
    },

    [SPECIES_OINKOLOGNE_M] =
    {
        .baseHP        = 110,
        .baseAttack    = 100,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 59,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 100,
        .expYield = 171,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LINGERING_AROMA, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Oinkologne"),
        .cryId = CRY_OINKOLOGNE_M,
        .natDexNum = NATIONAL_DEX_OINKOLOGNE,
        .categoryName = _("Gorrino"),
        .height = 10,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Oinkologne se enorgullece de su piel fina y\n"
            "brillante. Emite un aroma concentrado\n"
            "desde la punta de su cola."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OinkologneM,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OinkologneM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OinkologneM,
        .shinyPalette = gMonShinyPalette_OinkologneM,
        .iconSprite = gMonIcon_OinkologneM,
        .iconPalIndex = 1,
        SHADOW(5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Oinkologne)
        OVERWORLD(
            sPicTable_OinkologneM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OinkologneM,
            gShinyOverworldPalette_OinkologneM
        )
        .levelUpLearnset = sOinkologneMLevelUpLearnset,
        .teachableLearnset = sOinkologneTeachableLearnset,
        .formSpeciesIdTable = sOinkologneFormSpeciesIdTable,
    },

    [SPECIES_OINKOLOGNE_F] =
    {
        .baseHP        = 115,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 59,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 100,
        .expYield = 171,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(100),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Oinkologne"),
        .cryId = CRY_OINKOLOGNE_F,
        .natDexNum = NATIONAL_DEX_OINKOLOGNE,
        .categoryName = _("Gorrino"),
        .height = 10,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Este es un Pokémon meticuloso que\n"
            "le gusta mantener las cosas ordenadas. Se\n"
            "envuelve en un aroma floral que\n"
            "calma a los Pokémon a su alrededor."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OinkologneF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OinkologneF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OinkologneF,
        .shinyPalette = gMonShinyPalette_OinkologneF,
        .iconSprite = gMonIcon_OinkologneF,
        .iconPalIndex = 0,
        SHADOW(5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Oinkologne)
        OVERWORLD(
            sPicTable_OinkologneF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OinkologneF,
            gShinyOverworldPalette_OinkologneF
        )
        .levelUpLearnset = sOinkologneFLevelUpLearnset,
        .teachableLearnset = sOinkologneTeachableLearnset,
        .formSpeciesIdTable = sOinkologneFormSpeciesIdTable,
    },
#endif //P_FAMILY_LECHONK

#if P_FAMILY_TAROUNTULA
    [SPECIES_TAROUNTULA] =
    {
        .baseHP        = 35,
        .baseAttack    = 41,
        .baseDefense   = 45,
        .baseSpeed     = 20,
        .baseSpAttack  = 29,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = 42,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tarountula"),
        .cryId = CRY_TAROUNTULA,
        .natDexNum = NATIONAL_DEX_TAROUNTULA,
        .categoryName = _("Ovillo"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "El hilo que secreta desde su\n"
            "parte trasera es tan fuerte como alambre.\n"
            "El secreto detrás de la fuerza del hilo\n"
            "es el tema de investigación en curso."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tarountula,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tarountula,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Tarountula,
        .shinyPalette = gMonShinyPalette_Tarountula,
        .iconSprite = gMonIcon_Tarountula,
        .iconPalIndex = 1,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Tarountula)
        OVERWORLD(
            sPicTable_Tarountula,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Tarountula,
            gShinyOverworldPalette_Tarountula
        )
        .levelUpLearnset = sTarountulaLevelUpLearnset,
        .teachableLearnset = sTarountulaTeachableLearnset,
        .eggMoveLearnset = sTarountulaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_SPIDOPS}),
    },

    [SPECIES_SPIDOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 92,
        .baseSpeed     = 35,
        .baseSpAttack  = 52,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
        .expYield = 141,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Spidops"),
        .cryId = CRY_SPIDOPS,
        .natDexNum = NATIONAL_DEX_SPIDOPS,
        .categoryName = _("Trampa"),
        .height = 10,
        .weight = 165,
        .description = COMPOUND_STRING(
            "Se aferra a ramas y techos\n"
            "utilizando sus hilos y se mueve sin\n"
            "hacer ruido. Elimina a su presa\n"
            "antes de que esta se dé cuenta."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spidops,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Spidops,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Spidops,
        .shinyPalette = gMonShinyPalette_Spidops,
        .iconSprite = gMonIcon_Spidops,
        .iconPalIndex = 1,
        SHADOW(6, 8, SHADOW_SIZE_L)
        FOOTPRINT(Spidops)
        OVERWORLD(
            sPicTable_Spidops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spidops,
            gShinyOverworldPalette_Spidops
        )
        .levelUpLearnset = sSpidopsLevelUpLearnset,
        .teachableLearnset = sSpidopsTeachableLearnset,
    },
#endif //P_FAMILY_TAROUNTULA

#if P_FAMILY_NYMBLE
    [SPECIES_NYMBLE] =
    {
        .baseHP        = 33,
        .baseAttack    = 46,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 21,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 190,
        .expYield = 42,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 20,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Nymble"),
        .cryId = CRY_NYMBLE,
        .natDexNum = NATIONAL_DEX_NYMBLE,
        .categoryName = _("Saltamontes"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Tiene su tercer conjunto de patas\n"
            "plegado. Cuando está en apuros, este\n"
            "Pokémon salta más de 30 pies utilizando\n"
            "la fuerza de sus patas."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nymble,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nymble,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Nymble,
        .shinyPalette = gMonShinyPalette_Nymble,
        .iconSprite = gMonIcon_Nymble,
        .iconPalIndex = 0,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Nymble)
        OVERWORLD(
            sPicTable_Nymble,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Nymble,
            gShinyOverworldPalette_Nymble
        )
        .levelUpLearnset = sNymbleLevelUpLearnset,
        .teachableLearnset = sNymbleTeachableLearnset,
        .eggMoveLearnset = sNymbleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_LOKIX}),
    },

    [SPECIES_LOKIX] =
    {
        .baseHP        = 71,
        .baseAttack    = 102,
        .baseDefense   = 78,
        .baseSpeed     = 92,
        .baseSpAttack  = 52,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_BUG, TYPE_DARK),
        .catchRate = 30,
        .expYield = 158,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Lokix"),
        .cryId = CRY_LOKIX,
        .natDexNum = NATIONAL_DEX_LOKIX,
        .categoryName = _("Saltamontes"),
        .height = 10,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Cuando decide luchar al máximo, se\n"
            "apoya en las patas previamente dobladas\n"
            "para entrar en el Modo Desafío. Neutraliza\n"
            "a sus enemigos rápidamente."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lokix,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lokix,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Lokix,
        .shinyPalette = gMonShinyPalette_Lokix,
        .iconSprite = gMonIcon_Lokix,
        .iconPalIndex = 0,
        SHADOW(0, 11, SHADOW_SIZE_M)
        FOOTPRINT(Lokix)
        OVERWORLD(
            sPicTable_Lokix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lokix,
            gShinyOverworldPalette_Lokix
        )
        .levelUpLearnset = sLokixLevelUpLearnset,
        .teachableLearnset = sLokixTeachableLearnset,
    },
#endif //P_FAMILY_NYMBLE

#if P_FAMILY_PAWMI
    [SPECIES_PAWMI] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 20,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = 48,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pawmi"),
        .cryId = CRY_PAWMI,
        .natDexNum = NATIONAL_DEX_PAWMI,
        .categoryName = _("Ratón"),
        .height = 3,
        .weight = 25,
        .description = COMPOUND_STRING(
            "Las almohadillas de sus patas son órganos\n"
            "que descargan elec. Pawmi la lanza desde\n"
            "sus patas delanteras mientras se\n"
            "mantiene inestable en las traseras."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pawmi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pawmi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pawmi,
        .shinyPalette = gMonShinyPalette_Pawmi,
        .iconSprite = gMonIcon_Pawmi,
        .iconPalIndex = 0,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Pawmi)
            OVERWORLD(
            sPicTable_Pawmi,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pawmi,
            gShinyOverworldPalette_Pawmi
        )
        .levelUpLearnset = sPawmiLevelUpLearnset,
        .teachableLearnset = sPawmiTeachableLearnset,
        .eggMoveLearnset = sPawmiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_PAWMO}),
    },

    [SPECIES_PAWMO] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 40,
        .baseSpeed     = 85,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FIGHTING),
        .catchRate = 80,
        .expYield = 123,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pawmo"),
        .cryId = CRY_PAWMO,
        .natDexNum = NATIONAL_DEX_PAWMO,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Cuando su grupo es atacado, Pawmo es\n"
            "el primero en saltar al combate, venciendo\n"
            "a los enemigos con una técnica de lucha\n"
            "que utiliza descargas eléctricas."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pawmo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pawmo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pawmo,
        .shinyPalette = gMonShinyPalette_Pawmo,
        .iconSprite = gMonIcon_Pawmo,
        .iconPalIndex = 0,
        SHADOW(-3, 10, SHADOW_SIZE_S)
        FOOTPRINT(Pawmo)
        OVERWORLD(
            sPicTable_Pawmo,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pawmo,
            gShinyOverworldPalette_Pawmo
        )
        .levelUpLearnset = sPawmoLevelUpLearnset,
        .teachableLearnset = sPawmoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_OVERWORLD_STEPS, 1000, SPECIES_PAWMOT}),
    },

    [SPECIES_PAWMOT] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 245,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pawmot"),
        .cryId = CRY_PAWMOT,
        .natDexNum = NATIONAL_DEX_PAWMOT,
        .categoryName = _("Palmada"),
        .height = 9,
        .weight = 410,
        .description = COMPOUND_STRING(
            "Normalmente, este Pokémon es lento para\n"
            "reaccionar, pero una vez que entra en\n"
            "batalla,abatirá a sus enemigos con\n"
            "movimientos de una rapidez sorprendente."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pawmot,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pawmot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pawmot,
        .shinyPalette = gMonShinyPalette_Pawmot,
        .iconSprite = gMonIcon_Pawmot,
        .iconPalIndex = 0,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Pawmot)
        OVERWORLD(
            sPicTable_Pawmot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pawmot,
            gShinyOverworldPalette_Pawmot
        )
        .levelUpLearnset = sPawmotLevelUpLearnset,
        .teachableLearnset = sPawmotTeachableLearnset,
    },
#endif //P_FAMILY_PAWMI

#if P_FAMILY_TANDEMAUS
    [SPECIES_TANDEMAUS] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 150,
        .expYield = 61,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tandemaus"),
        .cryId = CRY_TANDEMAUS,
        .natDexNum = NATIONAL_DEX_TANDEMAUS,
        .categoryName = _("Pareja"),
        .height = 3,
        .weight = 18,
        .description = COMPOUND_STRING(
            "Mostrando gran coordinación, usan sus\n"
            "incisivos para cortar cualquier material\n"
            "que pueda ser útil para un nido y\n"
            "luego se llevarselas consigo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tandemaus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tandemaus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Tandemaus,
        .shinyPalette = gMonShinyPalette_Tandemaus,
        .iconSprite = gMonIcon_Tandemaus,
        .iconPalIndex = 1,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Tandemaus)
        OVERWORLD(
            sPicTable_Tandemaus,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tandemaus,
            gShinyOverworldPalette_Tandemaus
        )
        .levelUpLearnset = sTandemausLevelUpLearnset,
        .teachableLearnset = sTandemausTeachableLearnset,
        .eggMoveLearnset = sTandemausEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FAMILY_OF_FOUR, 25, SPECIES_MAUSHOLD_FOUR},
                                {EVO_LEVEL_FAMILY_OF_THREE, 25, SPECIES_MAUSHOLD_THREE}),
    },

    [SPECIES_MAUSHOLD_THREE] =
    {
        .baseHP        = 74,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_FRIEND_GUARD, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Maushold"),
        .cryId = CRY_MAUSHOLD_THREE,
        .natDexNum = NATIONAL_DEX_MAUSHOLD,
        .categoryName = _("Pareja"),
        .height = 3,
        .weight = 23,
        .description = COMPOUND_STRING(
            "El pequeño simplemente apareció un día.\n"
            "Todos viven juntos como una familia,\n"
            "pero la relación entre los tres\n"
            "aún no está clara."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MausholdThree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_MausholdThree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_Maushold,
        .shinyPalette = gMonShinyPalette_Maushold,
        .iconSprite = gMonIcon_MausholdThree,
        .iconPalIndex = 1,
        SHADOW(4, -1, SHADOW_SIZE_L)
        FOOTPRINT(MausholdThree)
        OVERWORLD(
            sPicTable_MausholdThree,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MausholdThree,
            gShinyOverworldPalette_MausholdThree
        )
        .levelUpLearnset = sMausholdLevelUpLearnset,
        .teachableLearnset = sMausholdTeachableLearnset,
        .formSpeciesIdTable = sMausholdFormSpeciesIdTable,
    },
    [SPECIES_MAUSHOLD_FOUR] =
    {
        .baseHP        = 74,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_FRIEND_GUARD, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Maushold"),
        .cryId = CRY_MAUSHOLD_FOUR,
        .natDexNum = NATIONAL_DEX_MAUSHOLD,
        .categoryName = _("Pareja"),
        .height = 3,
        .weight = 28,
        .description = COMPOUND_STRING(
            "La pareja más grande protege a los\n"
            "pequeños durante las batallas. Cuando\n"
            "enfrentan oponentes fuertes, todo\n"
            "el grupo se une a la lucha."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MausholdFour,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_MausholdFour,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_Maushold,
        .shinyPalette = gMonShinyPalette_Maushold,
        .iconSprite = gMonIcon_MausholdFour,
        .iconPalIndex = 1,
        SHADOW(0, -1, SHADOW_SIZE_L)
        FOOTPRINT(MausholdFour)
        OVERWORLD(
            sPicTable_MausholdFour,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MausholdFour,
            gShinyOverworldPalette_MausholdFour
        )
        .levelUpLearnset = sMausholdLevelUpLearnset,
        .teachableLearnset = sMausholdTeachableLearnset,
        .formSpeciesIdTable = sMausholdFormSpeciesIdTable,
    },
#endif //P_FAMILY_TANDEMAUS

#if P_FAMILY_FIDOUGH
    [SPECIES_FIDOUGH] =
    {
        .baseHP        = 37,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 190,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_KLUTZ },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Fidough"),
        .cryId = CRY_FIDOUGH,
        .natDexNum = NATIONAL_DEX_FIDOUGH,
        .categoryName = _("Perrito"),
        .height = 3,
        .weight = 109,
        .description = COMPOUND_STRING(
            "Este Pokémon es suave y húmedo\n"
            "al tacto. La levadura en la respiración de\n"
            "Fidough induce la fermentación en\n"
            "las cercanías del Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fidough,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fidough,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Fidough,
        .shinyPalette = gMonShinyPalette_Fidough,
        .iconSprite = gMonIcon_Fidough,
        .iconPalIndex = 1,
        SHADOW(4, 0, SHADOW_SIZE_S)
        FOOTPRINT(Fidough)
        OVERWORLD(
            sPicTable_Fidough,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fidough,
            gShinyOverworldPalette_Fidough
        )
        .levelUpLearnset = sFidoughLevelUpLearnset,
        .teachableLearnset = sFidoughTeachableLearnset,
        .eggMoveLearnset = sFidoughEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DACHSBUN}),
    },

    [SPECIES_DACHSBUN] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 115,
        .baseSpeed     = 95,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 90,
        .expYield = 167,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_WELL_BAKED_BODY, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dachsbun"),
        .cryId = CRY_DACHSBUN,
        .natDexNum = NATIONAL_DEX_DACHSBUN,
        .categoryName = _("Perro"),
        .height = 5,
        .weight = 149,
        .description = COMPOUND_STRING(
            "El agradable aroma que emana del cuerpo de\n"
            "este Pokémon ayuda a que crezca el trigo,\n"
            "por lo que Dachsbun ha sido apreciado por\n"
            "pueblos agrícolas."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dachsbun,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dachsbun,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dachsbun,
        .shinyPalette = gMonShinyPalette_Dachsbun,
        .iconSprite = gMonIcon_Dachsbun,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Dachsbun)
        OVERWORLD(
            sPicTable_Dachsbun,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dachsbun,
            gShinyOverworldPalette_Dachsbun
        )
        .levelUpLearnset = sDachsbunLevelUpLearnset,
        .teachableLearnset = sDachsbunTeachableLearnset,
    },
#endif //P_FAMILY_FIDOUGH

#if P_FAMILY_SMOLIV
    [SPECIES_SMOLIV] =
    {
        .baseHP        = 41,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 30,
        .baseSpAttack  = 58,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_GRASS, TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 52,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Smoliv"),
        .cryId = CRY_SMOLIV,
        .natDexNum = NATIONAL_DEX_SMOLIV,
        .categoryName = _("Aceituna"),
        .height = 3,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Convierte los nutrientes en aceite,\n"
            "que almacena en el fruto de su\n"
            "cabeza. Puede pasar fácilmente\n"
            "una semana sin comer ni beber."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Smoliv,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Smoliv,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Smoliv,
        .shinyPalette = gMonShinyPalette_Smoliv,
        .iconSprite = gMonIcon_Smoliv,
        .iconPalIndex = 1,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Smoliv)
        OVERWORLD(
            sPicTable_Smoliv,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Smoliv,
            gShinyOverworldPalette_Smoliv
        )
        .levelUpLearnset = sSmolivLevelUpLearnset,
        .teachableLearnset = sSmolivTeachableLearnset,
        .eggMoveLearnset = sSmolivEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_DOLLIV}),
    },

    [SPECIES_DOLLIV] =
    {
        .baseHP        = 52,
        .baseAttack    = 53,
        .baseDefense   = 60,
        .baseSpeed     = 33,
        .baseSpAttack  = 78,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_GRASS, TYPE_NORMAL),
        .catchRate = 120,
        .expYield = 124,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dolliv"),
        .cryId = CRY_DOLLIV,
        .natDexNum = NATIONAL_DEX_DOLLIV,
        .categoryName = _("Aceituna"),
        .height = 6,
        .weight = 119,
        .description = COMPOUND_STRING(
            "Dolliv comparte su aceite aromático\n"
            "y fresco con los demás. Esta especie\n"
            "ha coexistido con los humanos\n"
            "desde tiempos antiguos."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dolliv,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dolliv,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dolliv,
        .shinyPalette = gMonShinyPalette_Dolliv,
        .iconSprite = gMonIcon_Dolliv,
        .iconPalIndex = 1,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Dolliv)
        OVERWORLD(
            sPicTable_Dolliv,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dolliv,
            gShinyOverworldPalette_Dolliv
        )
        .levelUpLearnset = sDollivLevelUpLearnset,
        .teachableLearnset = sDollivTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ARBOLIVA}),
    },

    [SPECIES_ARBOLIVA] =
    {
        .baseHP        = 78,
        .baseAttack    = 69,
        .baseDefense   = 90,
        .baseSpeed     = 39,
        .baseSpAttack  = 125,
        .baseSpDefense = 109,
        .types = MON_TYPES(TYPE_GRASS, TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 255,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_SEED_SOWER, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Arboliva"),
        .cryId = CRY_ARBOLIVA,
        .natDexNum = NATIONAL_DEX_ARBOLIVA,
        .categoryName = _("Aceituna"),
        .height = 14,
        .weight = 482,
        .description = COMPOUND_STRING(
            "Este Pokémon repele a sus enemigos\n"
            "lanzando su aceite rico y aromático\n"
            "con suficiente fuerza como\n"
            "para romper una roca."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arboliva,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arboliva,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arboliva,
        .shinyPalette = gMonShinyPalette_Arboliva,
        .iconSprite = gMonIcon_Arboliva,
        .iconPalIndex = 1,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Arboliva)
        OVERWORLD(
            sPicTable_Arboliva,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arboliva,
            gShinyOverworldPalette_Arboliva
        )
        .levelUpLearnset = sArbolivaLevelUpLearnset,
        .teachableLearnset = sArbolivaTeachableLearnset,
    },
#endif //P_FAMILY_SMOLIV

#if P_FAMILY_SQUAWKABILLY
    [SPECIES_SQUAWKABILLY_GREEN] =
    {
        .baseHP        = 82,
        .baseAttack    = 96,
        .baseDefense   = 51,
        .baseSpeed     = 92,
        .baseSpAttack  = 45,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 190,
        .expYield = 146,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Loro"),
        .height = 6,
        .weight = 24,
        .description = COMPOUND_STRING(
            "Las bandadas con plumas verdes tienen\n"
            "más influencia. Cuando salen en busca de\n"
            "comida por las mañanas y\n"
            "las tardes, se vuelve muy ruidoso."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyGreen,
        .shinyPalette = gMonShinyPalette_SquawkabillyGreen,
        .iconSprite = gMonIcon_SquawkabillyGreen,
        .iconPalIndex = 1,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyGreen,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyGreen,
            gShinyOverworldPalette_SquawkabillyGreen
        )
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
    },

    [SPECIES_SQUAWKABILLY_BLUE] =
    {
        .baseHP        = 82,
        .baseAttack    = 96,
        .baseDefense   = 51,
        .baseSpeed     = 92,
        .baseSpAttack  = 45,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 190,
        .expYield = 146,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Loro"),
        .height = 6,
        .weight = 24,
        .description = COMPOUND_STRING(
            "La bandada más grande puede contener\n"
            "más de 50 individuos. Vuelan alrededor de\n"
            "pueblos y bosques, buscando comida\n"
            "y armando alboroto."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyBlue,
        .shinyPalette = gMonShinyPalette_SquawkabillyBlue,
        .iconSprite = gMonIcon_SquawkabillyBlue,
        .iconPalIndex = 0,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyBlue,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyBlue,
            gShinyOverworldPalette_SquawkabillyBlue
        )
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
    },

    [SPECIES_SQUAWKABILLY_YELLOW] =
    {
        .baseHP        = 82,
        .baseAttack    = 96,
        .baseDefense   = 51,
        .baseSpeed     = 92,
        .baseSpAttack  = 45,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 190,
        .expYield = 146,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Loro"),
        .height = 6,
        .weight = 24,
        .description = COMPOUND_STRING(
            "Estos Squawkabilly son temperamentales\n"
            "y su estilo de combate es feroz. Saltarán\n"
            "dentro del alcance de sus enemigos para\n"
            "participar en combates cercanos."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyYellow,
        .shinyPalette = gMonShinyPalette_SquawkabillyYellow,
        .iconSprite = gMonIcon_SquawkabillyYellow,
        .iconPalIndex = 1,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyYellow,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyYellow,
            gShinyOverworldPalette_SquawkabillyYellow
        )
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
    },

    [SPECIES_SQUAWKABILLY_WHITE] =
    {
        .baseHP        = 82,
        .baseAttack    = 96,
        .baseDefense   = 51,
        .baseSpeed     = 92,
        .baseSpAttack  = 45,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 190,
        .expYield = 146,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Squawkabilly"),
        .cryId = CRY_SQUAWKABILLY,
        .natDexNum = NATIONAL_DEX_SQUAWKABILLY,
        .categoryName = _("Loro"),
        .height = 6,
        .weight = 24,
        .description = COMPOUND_STRING(
            "Aunque estos Squawkabilly son los menos\n"
            "numerosos, no tienen problemas para vivir\n"
            "en las ciudades ya que se mezclan\n"
            "con los edificios blancos."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_SquawkabillyWhite,
        .shinyPalette = gMonShinyPalette_SquawkabillyWhite,
        .iconSprite = gMonIcon_SquawkabillyWhite,
        .iconPalIndex = 0,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyWhite,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyWhite,
            gShinyOverworldPalette_SquawkabillyWhite
        )
        .levelUpLearnset = sSquawkabillyLevelUpLearnset,
        .teachableLearnset = sSquawkabillyTeachableLearnset,
        .eggMoveLearnset = sSquawkabillyEggMoveLearnset,
        .formSpeciesIdTable = sSquawkabillyFormSpeciesIdTable,
    },
#endif //P_FAMILY_SQUAWKABILLY

#if P_FAMILY_NACLI
    [SPECIES_NACLI] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 25,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Nacli"),
        .cryId = CRY_NACLI,
        .natDexNum = NATIONAL_DEX_NACLI,
        .categoryName = _("Halita"),
        .height = 4,
        .weight = 160,
        .description = COMPOUND_STRING(
            "La tierra raspa su cuerpo mientras\n"
            "se desplaza, causando que deje sal.\n"
            "La sal se crea y se repone\n"
            "constantemente dentro de su cuerpo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nacli,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nacli,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Nacli,
        .shinyPalette = gMonShinyPalette_Nacli,
        .iconSprite = gMonIcon_Nacli,
        .iconPalIndex = 2,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Nacli)
        OVERWORLD(
            sPicTable_Nacli,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nacli,
            gShinyOverworldPalette_Nacli
        )
        .levelUpLearnset = sNacliLevelUpLearnset,
        .teachableLearnset = sNacliTeachableLearnset,
        .eggMoveLearnset = sNacliEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_NACLSTACK}),
    },

    [SPECIES_NACLSTACK] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 120,
        .expYield = 124,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Naclstack"),
        .cryId = CRY_NACLSTACK,
        .natDexNum = NATIONAL_DEX_NACLSTACK,
        .categoryName = _("Halita"),
        .height = 6,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "Comprime sal gema dentro de su cuerpo y\n"
            "dispara bolas de sal endurecida con\n"
            "suficiente fuerza como para perforar una\n"
            "lámina de hierro."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Naclstack,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Naclstack,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Naclstack,
        .shinyPalette = gMonShinyPalette_Naclstack,
        .iconSprite = gMonIcon_Naclstack,
        .iconPalIndex = 2,
        SHADOW(0, 5, SHADOW_SIZE_L)
        FOOTPRINT(Naclstack)
        OVERWORLD(
            sPicTable_Naclstack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Naclstack,
            gShinyOverworldPalette_Naclstack
        )
        .levelUpLearnset = sNaclstackLevelUpLearnset,
        .teachableLearnset = sNaclstackTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_GARGANACL}),
    },

    [SPECIES_GARGANACL] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 130,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 45,
        .expYield = 250,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Garganacl"),
        .cryId = CRY_GARGANACL,
        .natDexNum = NATIONAL_DEX_GARGANACL,
        .categoryName = _("Halita"),
        .height = 23,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "Se frota las yemas de los dedos\n"
            "y espolvorea la sal sobre los\n"
            "Pokémon heridos para curar sus\n"
            "heridas, incluso las más graves."),        
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Garganacl,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Garganacl,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Garganacl,
        .shinyPalette = gMonShinyPalette_Garganacl,
        .iconSprite = gMonIcon_Garganacl,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Garganacl)
        OVERWORLD(
            sPicTable_Garganacl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Garganacl,
            gShinyOverworldPalette_Garganacl
        )
        .levelUpLearnset = sGarganaclLevelUpLearnset,
        .teachableLearnset = sGarganaclTeachableLearnset,
    },
#endif //P_FAMILY_NACLI

#if P_FAMILY_CHARCADET
    [SPECIES_CHARCADET] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 90,
        .expYield = 51,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charcadet"),
        .cryId = CRY_CHARCADET,
        .natDexNum = NATIONAL_DEX_CHARCADET,
        .categoryName = _("Piroescudero"),
        .height = 6,
        .weight = 105,
        .description = COMPOUND_STRING(
            "Un carbón quemado cobró vida y se\n"
            "convirtió en un Pokémon. Poseyendo un\n"
            "espíritu combativo y ardiente, Charcadet\n"
            "luchará incluso contra oponentes fuertes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Charcadet,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Charcadet,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Charcadet,
        .shinyPalette = gMonShinyPalette_Charcadet,
        .iconSprite = gMonIcon_Charcadet,
        .iconPalIndex = 0,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Charcadet)
        OVERWORLD(
            sPicTable_Charcadet,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Charcadet,
            gShinyOverworldPalette_Charcadet
        )
        .levelUpLearnset = sCharcadetLevelUpLearnset,
        .teachableLearnset = sCharcadetTeachableLearnset,
        .eggMoveLearnset = sCharcadetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_AUSPICIOUS_ARMOR, SPECIES_ARMAROUGE},
                                {EVO_ITEM, ITEM_MALICIOUS_ARMOR, SPECIES_CERULEDGE}),
    },

    [SPECIES_ARMAROUGE] =
    {
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 25,
        .expYield = 263,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 20,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Armarouge"),
        .cryId = CRY_ARMAROUGE,
        .natDexNum = NATIONAL_DEX_ARMAROUGE,
        .categoryName = _("Piroguerrero"),
        .height = 15,
        .weight = 850,
        .description = COMPOUND_STRING(
            "Armarouge evolucionó mediante el uso\n"
            "de un conjunto de armaduras que\n"
            "perteneció a un distinguido guerrero.\n"
            "Este Pokémon es increíblemente leal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Armarouge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Armarouge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Armarouge,
        .shinyPalette = gMonShinyPalette_Armarouge,
        .iconSprite = gMonIcon_Armarouge,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Armarouge)
        OVERWORLD(
            sPicTable_Armarouge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Armarouge,
            gShinyOverworldPalette_Armarouge
        )
        .levelUpLearnset = sArmarougeLevelUpLearnset,
        .teachableLearnset = sArmarougeTeachableLearnset,
    },

    [SPECIES_CERULEDGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 25,
        .expYield = 263,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 20,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ceruledge"),
        .cryId = CRY_CERULEDGE,
        .natDexNum = NATIONAL_DEX_CERULEDGE,
        .categoryName = _("Piroespada"),
        .height = 16,
        .weight = 620,
        .description = COMPOUND_STRING(
            "Las llamas ardientes en sus brazos arden\n"
            "ferozmente con el resentimiento\n"
            "persistente de un espadachín que cayó\n"
            "antes de lograr su objetivo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ceruledge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Ceruledge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Ceruledge,
        .shinyPalette = gMonShinyPalette_Ceruledge,
        .iconSprite = gMonIcon_Ceruledge,
        .iconPalIndex = 2,
        SHADOW(9, 14, SHADOW_SIZE_L)
        FOOTPRINT(Ceruledge)
        OVERWORLD(
            sPicTable_Ceruledge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ceruledge,
            gShinyOverworldPalette_Ceruledge
        )
        .levelUpLearnset = sCeruledgeLevelUpLearnset,
        .teachableLearnset = sCeruledgeTeachableLearnset,
    },
#endif //P_FAMILY_CHARCADET

#if P_FAMILY_TADBULB
    [SPECIES_TADBULB] =
    {
        .baseHP        = 61,
        .baseAttack    = 31,
        .baseDefense   = 41,
        .baseSpeed     = 45,
        .baseSpAttack  = 59,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = 54,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_STATIC, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tadbulb"),
        .cryId = CRY_TADBULB,
        .natDexNum = NATIONAL_DEX_TADBULB,
        .categoryName = _("Electrocuajo"),
        .height = 3,
        .weight = 4,
        .description = COMPOUND_STRING(
            "Tadbulb agita su cola para generar\n"
            "electricidad. Si detecta peligro, hará\n"
            "que su cabeza parpadee encendida y\n"
            "apagada para alertar a sus aliados."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tadbulb,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Tadbulb,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Tadbulb,
        .shinyPalette = gMonShinyPalette_Tadbulb,
        .iconSprite = gMonIcon_Tadbulb,
        .iconPalIndex = 0,
        SHADOW(0, 19, SHADOW_SIZE_S)
        FOOTPRINT(Tadbulb)
        OVERWORLD(
            sPicTable_Tadbulb,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Tadbulb,
            gShinyOverworldPalette_Tadbulb
        )
        .levelUpLearnset = sTadbulbLevelUpLearnset,
        .teachableLearnset = sTadbulbTeachableLearnset,
        .eggMoveLearnset = sTadbulbEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_BELLIBOLT}),
    },

    [SPECIES_BELLIBOLT] =
    {
        .baseHP        = 109,
        .baseAttack    = 64,
        .baseDefense   = 91,
        .baseSpeed     = 45,
        .baseSpAttack  = 103,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 50,
        .expYield = 173,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_ELECTROMORPHOSIS, ABILITY_STATIC, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bellibolt"),
        .cryId = CRY_BELLIBOLT,
        .natDexNum = NATIONAL_DEX_BELLIBOLT,
        .categoryName = _("Electrorrana"),
        .height = 12,
        .weight = 1130,
        .description = COMPOUND_STRING(
            "Cuando este Pokémon expande y contrae\n"
            "su cuerpo tambaleante, el dinamo\n"
            "del ombligo en su estómago produce una\n"
            "gran cantidad de electricidad."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bellibolt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bellibolt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bellibolt,
        .shinyPalette = gMonShinyPalette_Bellibolt,
        .iconSprite = gMonIcon_Bellibolt,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Bellibolt)
        OVERWORLD(
            sPicTable_Bellibolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bellibolt,
            gShinyOverworldPalette_Bellibolt
        )
        .levelUpLearnset = sBelliboltLevelUpLearnset,
        .teachableLearnset = sBelliboltTeachableLearnset,
    },
#endif //P_FAMILY_TADBULB

#if P_FAMILY_WATTREL
    [SPECIES_WATTREL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 180,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_WIND_POWER, ABILITY_VOLT_ABSORB, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Wattrel"),
        .cryId = CRY_WATTREL,
        .natDexNum = NATIONAL_DEX_WATTREL,
        .categoryName = _("Paíño"),
        .height = 4,
        .weight = 36,
        .description = COMPOUND_STRING(
            "Cuando sus alas atrapan el viento, los\n"
            "huesos en su interior producen elec.\n"
            "Este Pokémon se sumerge en el océano,\n"
            "atrapando presas electrocutándolas."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wattrel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wattrel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wattrel,
        .shinyPalette = gMonShinyPalette_Wattrel,
        .iconSprite = gMonIcon_Wattrel,
        .iconPalIndex = 0,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Wattrel)
        OVERWORLD(
            sPicTable_Wattrel,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Wattrel,
            gShinyOverworldPalette_Wattrel
        )
        .levelUpLearnset = sWattrelLevelUpLearnset,
        .teachableLearnset = sWattrelTeachableLearnset,
        .eggMoveLearnset = sWattrelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_KILOWATTREL}),
    },

    [SPECIES_KILOWATTREL] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 90,
        .expYield = 172,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_WIND_POWER, ABILITY_VOLT_ABSORB, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kilowattrel"),
        .cryId = CRY_KILOWATTREL,
        .natDexNum = NATIONAL_DEX_KILOWATTREL,
        .categoryName = _("Fregata"),
        .height = 14,
        .weight = 386,
        .description = COMPOUND_STRING(
           "Emplea su saco de garganta para almacenar\n"
           "electricidad generada por sus alas. Casi\n"
           "no tiene aceite en sus plumas, así que es\n"
           "un nadador mediocre."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kilowattrel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kilowattrel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kilowattrel,
        .shinyPalette = gMonShinyPalette_Kilowattrel,
        .iconSprite = gMonIcon_Kilowattrel,
        .iconPalIndex = 0,
        SHADOW(-6, 6, SHADOW_SIZE_M)
        FOOTPRINT(Kilowattrel)
        OVERWORLD(
            sPicTable_Kilowattrel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kilowattrel,
            gShinyOverworldPalette_Kilowattrel
        )
        .levelUpLearnset = sKilowattrelLevelUpLearnset,
        .teachableLearnset = sKilowattrelTeachableLearnset,
    },
#endif //P_FAMILY_WATTREL

#if P_FAMILY_MASCHIFF
    [SPECIES_MASCHIFF] =
    {
        .baseHP        = 60,
        .baseAttack    = 78,
        .baseDefense   = 60,
        .baseSpeed     = 51,
        .baseSpAttack  = 40,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 150,
        .expYield = 68,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Maschiff"),
        .cryId = CRY_MASCHIFF,
        .natDexNum = NATIONAL_DEX_MASCHIFF,
        .categoryName = _("Bisoño"),
        .height = 5,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Su mandíbula y colmillos bien\n"
            "desarrollados son lo tan fuertes\n"
            "como para romper rocas, y su gruesa\n"
            "grasa proporciona una excelente defensa."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Maschiff,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Maschiff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Maschiff,
        .shinyPalette = gMonShinyPalette_Maschiff,
        .iconSprite = gMonIcon_Maschiff,
        .iconPalIndex = 0,
        SHADOW(2, 5, SHADOW_SIZE_L)
        FOOTPRINT(Maschiff)
        OVERWORLD(
            sPicTable_Maschiff,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Maschiff,
            gShinyOverworldPalette_Maschiff
        )
        .levelUpLearnset = sMaschiffLevelUpLearnset,
        .teachableLearnset = sMaschiffTeachableLearnset,
        .eggMoveLearnset = sMaschiffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MABOSSTIFF}),
    },

    [SPECIES_MABOSSTIFF] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 75,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_GUARD_DOG, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Mabosstiff"),
        .cryId = CRY_MABOSSTIFF,
        .natDexNum = NATIONAL_DEX_MABOSSTIFF,
        .categoryName = _("Jefazo"),
        .height = 11,
        .weight = 610,
        .description = COMPOUND_STRING(
            "A Mabosstiff le encanta jugar con niños.\n"
            "Aunque suele ser amable, adopta una\n"
            "apariencia intimidante cuando\n"
            "protege a su familia."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mabosstiff,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mabosstiff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Mabosstiff,
        .shinyPalette = gMonShinyPalette_Mabosstiff,
        .iconSprite = gMonIcon_Mabosstiff,
        .iconPalIndex = 0,
        SHADOW(1, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Mabosstiff)
        OVERWORLD(
            sPicTable_Mabosstiff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mabosstiff,
            gShinyOverworldPalette_Mabosstiff
        )
        .levelUpLearnset = sMabosstiffLevelUpLearnset,
        .teachableLearnset = sMabosstiffTeachableLearnset,
    },
#endif //P_FAMILY_MASCHIFF

#if P_FAMILY_SHROODLE
    [SPECIES_SHROODLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_POISON, TYPE_NORMAL),
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_UNBURDEN, ABILITY_PICKPOCKET, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Shroodle"),
        .cryId = CRY_SHROODLE,
        .natDexNum = NATIONAL_DEX_SHROODLE,
        .categoryName = _("Ratón Veneno"),
        .height = 2,
        .weight = 7,
        .description = COMPOUND_STRING(
            "Para mantener alejados a los enemigos\n"
            "de su territorio, pinta marcas alrededor\n"
            "de su nido con un líquido venenoso\n"
            "que tiene un olor acre."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shroodle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shroodle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Shroodle,
        .shinyPalette = gMonShinyPalette_Shroodle,
        .iconSprite = gMonIcon_Shroodle,
        .iconPalIndex = 0,
        SHADOW(0, -6, SHADOW_SIZE_S)
        FOOTPRINT(Shroodle)
        OVERWORLD(
            sPicTable_Shroodle,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Shroodle,
            gShinyOverworldPalette_Shroodle
        )
        .levelUpLearnset = sShroodleLevelUpLearnset,
        .teachableLearnset = sShroodleTeachableLearnset,
        .eggMoveLearnset = sShroodleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_GRAFAIAI}),
    },

    [SPECIES_GRAFAIAI] =
    {
        .baseHP        = 63,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_POISON, TYPE_NORMAL),
        .catchRate = 90,
        .expYield = 170,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_UNBURDEN, ABILITY_POISON_TOUCH, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Grafaiai"),
        .cryId = CRY_GRAFAIAI,
        .natDexNum = NATIONAL_DEX_GRAFAIAI,
        .categoryName = _("Mono Veneno"),
        .height = 7,
        .weight = 272,
        .description = COMPOUND_STRING(
            "Cada Grafaiai pinta su propio patrón\n"
            "individual, y repetirá ese mismo\n"
            "patrón una y otra vez a\n"
            "lo largo de su vida."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grafaiai,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Grafaiai,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Grafaiai,
        .shinyPalette = gMonShinyPalette_Grafaiai,
        .iconSprite = gMonIcon_Grafaiai,
        .iconPalIndex = 0,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Grafaiai)
        OVERWORLD(
            sPicTable_Grafaiai,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grafaiai,
            gShinyOverworldPalette_Grafaiai
        )
        .levelUpLearnset = sGrafaiaiLevelUpLearnset,
        .teachableLearnset = sGrafaiaiTeachableLearnset,
    },
#endif //P_FAMILY_SHROODLE

#if P_FAMILY_BRAMBLIN
    [SPECIES_BRAMBLIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 30,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 190,
        .expYield = 55,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_WIND_RIDER, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bramblin"),
        .cryId = CRY_BRAMBLIN,
        .natDexNum = NATIONAL_DEX_BRAMBLIN,
        .categoryName = _("Estepicursor"),
        .height = 6,
        .weight = 6,
        .description = COMPOUND_STRING(
            "Un alma incapaz de pasar a la vida después\n"
            "de la muerte fue llevada por el viento\n"
            "hasta que se enredó con hierba seca\n"
            "y se convirtió en un Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bramblin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bramblin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bramblin,
        .shinyPalette = gMonShinyPalette_Bramblin,
        .iconSprite = gMonIcon_Bramblin,
        .iconPalIndex = 1,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Bramblin)
        OVERWORLD(
            sPicTable_Bramblin,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Bramblin,
            gShinyOverworldPalette_Bramblin
        )
        .levelUpLearnset = sBramblinLevelUpLearnset,
        .teachableLearnset = sBramblinTeachableLearnset,
        .eggMoveLearnset = sBramblinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_OVERWORLD_STEPS, 1000, SPECIES_BRAMBLEGHAST}),
    },

    [SPECIES_BRAMBLEGHAST] =
    {
        .baseHP        = 55,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_WIND_RIDER, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Brambleghast"),
        .cryId = CRY_BRAMBLEGHAST,
        .natDexNum = NATIONAL_DEX_BRAMBLEGHAST,
        .categoryName = _("Estepicursor"),
        .height = 12,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Abre las ramas de su cabeza para envolver\n"
            "a su presa. Una vez que absorbe toda\n"
            "la energía vital que necesita,\n"
            "expulsa la presa y la descarta."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Brambleghast,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Brambleghast,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Brambleghast,
        .shinyPalette = gMonShinyPalette_Brambleghast,
        .iconSprite = gMonIcon_Brambleghast,
        .iconPalIndex = 2,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Brambleghast)
        OVERWORLD(
            sPicTable_Brambleghast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Brambleghast,
            gShinyOverworldPalette_Brambleghast
        )
        .levelUpLearnset = sBrambleghastLevelUpLearnset,
        .teachableLearnset = sBrambleghastTeachableLearnset,
    },
#endif //P_FAMILY_BRAMBLIN

#if P_FAMILY_TOEDSCOOL
    [SPECIES_TOEDSCOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GROUND, TYPE_GRASS),
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_MYCELIUM_MIGHT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Toedscool"),
        .cryId = CRY_TOEDSCOOL,
        .natDexNum = NATIONAL_DEX_TOEDSCOOL,
        .categoryName = _("Auricularia"),
        .height = 9,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Aunque parece Tentacool, Toedscool\n"
            "es una especie completamente diferente.\n"
            "Sus patas pueden ser delgadas, pero puede\n"
            "correr a una velocidad de 30 kmh."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toedscool,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toedscool,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Toedscool,
        .shinyPalette = gMonShinyPalette_Toedscool,
        .iconSprite = gMonIcon_Toedscool,
        .iconPalIndex = 0,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Toedscool)
        OVERWORLD(
            sPicTable_Toedscool,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toedscool,
            gShinyOverworldPalette_Toedscool
        )
        .levelUpLearnset = sToedscoolLevelUpLearnset,
        .teachableLearnset = sToedscoolTeachableLearnset,
        .eggMoveLearnset = sToedscoolEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TOEDSCRUEL}),
    },

    [SPECIES_TOEDSCRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GROUND, TYPE_GRASS),
        .catchRate = 90,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_MYCELIUM_MIGHT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Toedscruel"),
        .cryId = CRY_TOEDSCRUEL,
        .natDexNum = NATIONAL_DEX_TOEDSCRUEL,
        .categoryName = _("Auricularia"),
        .height = 19,
        .weight = 580,
        .description = COMPOUND_STRING(
            "Estos Pokémon se reúnen en grupos y\n"
            "forman colonias en lo profundo de los\n"
            "bosques. Odian absolutamente cuando los\n"
            "extraños se acercan."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toedscruel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toedscruel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Toedscruel,
        .shinyPalette = gMonShinyPalette_Toedscruel,
        .iconSprite = gMonIcon_Toedscruel,
        .iconPalIndex = 0,
        SHADOW(2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Toedscruel)
        OVERWORLD(
            sPicTable_Toedscruel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toedscruel,
            gShinyOverworldPalette_Toedscruel
        )
        .levelUpLearnset = sToedscruelLevelUpLearnset,
        .teachableLearnset = sToedscruelTeachableLearnset,
    },
#endif //P_FAMILY_TOEDSCOOL

#if P_FAMILY_KLAWF
    [SPECIES_KLAWF] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 120,
        .expYield = 158,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_ANGER_SHELL, ABILITY_SHELL_ARMOR, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Klawf"),
        .cryId = CRY_KLAWF,
        .natDexNum = NATIONAL_DEX_KLAWF,
        .categoryName = _("Emboscada"),
        .height = 13,
        .weight = 790,
        .description = COMPOUND_STRING(
            "Klawf cuelga boca abajo en acantilados,\n"
            "esperando a su presa. Pero no puede\n"
            "estar en esta posición por mucho tiempo\n"
            "porque su sangre se apresura a su cabeza."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klawf,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Klawf,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 20,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Klawf,
        .shinyPalette = gMonShinyPalette_Klawf,
        .iconSprite = gMonIcon_Klawf,
        .iconPalIndex = 0,
        SHADOW(0, 0, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Klawf)
        OVERWORLD(
            sPicTable_Klawf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klawf,
            gShinyOverworldPalette_Klawf
        )
        .levelUpLearnset = sKlawfLevelUpLearnset,
        .teachableLearnset = sKlawfTeachableLearnset,
        .eggMoveLearnset = sKlawfEggMoveLearnset,
    },
#endif //P_FAMILY_KLAWF

#if P_FAMILY_CAPSAKID
    [SPECIES_CAPSAKID] =
    {
        .baseHP        = 50,
        .baseAttack    = 62,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 62,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_INSOMNIA, ABILITY_KLUTZ },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Capsakid"),
        .cryId = CRY_CAPSAKID,
        .natDexNum = NATIONAL_DEX_CAPSAKID,
        .categoryName = _("Habanero"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Cuanto más sol recibe este Pokémon, más\n"
            "productos químicos picantes produce su\n"
            "cuerpo, y por lo tanto, sus movimientos se\n"
            "vuelven más picantes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Capsakid,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Capsakid,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Capsakid,
        .shinyPalette = gMonShinyPalette_Capsakid,
        .iconSprite = gMonIcon_Capsakid,
        .iconPalIndex = 1,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Capsakid)
        OVERWORLD(
            sPicTable_Capsakid,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Capsakid,
            gShinyOverworldPalette_Capsakid
        )
        .levelUpLearnset = sCapsakidLevelUpLearnset,
        .teachableLearnset = sCapsakidTeachableLearnset,
        .eggMoveLearnset = sCapsakidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SCOVILLAIN}),
    },

    [SPECIES_SCOVILLAIN] =
    {
        .baseHP        = 65,
        .baseAttack    = 108,
        .baseDefense   = 65,
        .baseSpeed     = 75,
        .baseSpAttack  = 108,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIRE),
        .catchRate = 75,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_INSOMNIA, ABILITY_MOODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Scovillain"),
        .cryId = CRY_SCOVILLAIN,
        .natDexNum = NATIONAL_DEX_SCOVILLAIN,
        .categoryName = _("Habanero"),
        .height = 9,
        .weight = 150,
        .description = COMPOUND_STRING(
            "La cabeza verde se ha vuelto feroz debido\n"
            "a los productos químicos picantes que\n"
            "estimulan su cerebro. Una vez que se\n"
            "desata, no hay forma de detenerlo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Scovillain,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Scovillain,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Scovillain,
        .shinyPalette = gMonShinyPalette_Scovillain,
        .iconSprite = gMonIcon_Scovillain,
        .iconPalIndex = 1,
        SHADOW(6, 11, SHADOW_SIZE_M)
        FOOTPRINT(Scovillain)
        OVERWORLD(
            sPicTable_Scovillain,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Scovillain,
            gShinyOverworldPalette_Scovillain
        )
        .levelUpLearnset = sScovillainLevelUpLearnset,
        .teachableLearnset = sScovillainTeachableLearnset,
    },
#endif //P_FAMILY_CAPSAKID

#if P_FAMILY_RELLOR
    [SPECIES_RELLOR] =
    {
        .baseHP        = 41,
        .baseAttack    = 50,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 31,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 190,
        .expYield = 54,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_SHED_SKIN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rellor"),
        .cryId = CRY_RELLOR,
        .natDexNum = NATIONAL_DEX_RELLOR,
        .categoryName = _("Pelotero"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Crea una bola de barro mezclando arena\n"
            "y tierra con energía psíquica. Valora\n"
            "su bola de barro más que su propia vida."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rellor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rellor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rellor,
        .shinyPalette = gMonShinyPalette_Rellor,
        .iconSprite = gMonIcon_Rellor,
        .iconPalIndex = 0,
        SHADOW(4, -3, SHADOW_SIZE_L)
        FOOTPRINT(Rellor)
        OVERWORLD(
            sPicTable_Rellor,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Rellor,
            gShinyOverworldPalette_Rellor
        )
        .levelUpLearnset = sRellorLevelUpLearnset,
        .teachableLearnset = sRellorTeachableLearnset,
        .eggMoveLearnset = sRellorEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_OVERWORLD_STEPS, 1000, SPECIES_RABSCA}),
    },

    [SPECIES_RABSCA] =
    {
        .baseHP        = 75,
        .baseAttack    = 50,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_BUG, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 165,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rabsca"),
        .cryId = CRY_RABSCA,
        .natDexNum = NATIONAL_DEX_RABSCA,
        .categoryName = _("Pelotero"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "El cuerpo que sostiene la bola apenas\n"
            "se mueve. Por lo tanto, se cree que el\n"
            "verdadero cuerpo de este Pokémon está\n"
            "dentro de la bola."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rabsca,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rabsca,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rabsca,
        .shinyPalette = gMonShinyPalette_Rabsca,
        .iconSprite = gMonIcon_Rabsca,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Rabsca)
        OVERWORLD(
            sPicTable_Rabsca,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Rabsca,
            gShinyOverworldPalette_Rabsca
        )
        .levelUpLearnset = sRabscaLevelUpLearnset,
        .teachableLearnset = sRabscaTeachableLearnset,
    },
#endif //P_FAMILY_RELLOR

#if P_FAMILY_FLITTLE
    [SPECIES_FLITTLE] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 75,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 120,
        .expYield = 51,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_FRISK, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Flittle"),
        .cryId = CRY_FLITTLE,
        .natDexNum = NATIONAL_DEX_FLITTLE,
        .categoryName = _("Pelotero"),
        .height = 2,
        .weight = 15,
        .description = COMPOUND_STRING(
            "Los dedos de Flittle levitan\n"
            "aproximadamente medio metro por\n"
            "encima del suelo debido al poder psíquico\n"
            "emitido desde las volutas de su vientre."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Flittle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Flittle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Flittle,
        .shinyPalette = gMonShinyPalette_Flittle,
        .iconSprite = gMonIcon_Flittle,
        .iconPalIndex = 1,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Flittle)
        OVERWORLD(
            sPicTable_Flittle,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Flittle,
            gShinyOverworldPalette_Flittle
        )
        .levelUpLearnset = sFlittleLevelUpLearnset,
        .teachableLearnset = sFlittleTeachableLearnset,
        .eggMoveLearnset = sFlittleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ESPATHRA}),
    },

    [SPECIES_ESPATHRA] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 101,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 60,
        .expYield = 168,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OPPORTUNIST, ABILITY_FRISK, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Espathra"),
        .cryId = CRY_ESPATHRA,
        .natDexNum = NATIONAL_DEX_ESPATHRA,
        .categoryName = _("Avestruz"),
        .height = 19,
        .weight = 900,
        .description = COMPOUND_STRING(
            "Inmoviliza a los oponentes bañándolos\n"
            "en poder psíquico desde sus grandes ojos.\n"
            "A pesar de su apariencia,\n"
            "tiene un temperamento feroz."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Espathra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Espathra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Espathra,
        .shinyPalette = gMonShinyPalette_Espathra,
        .iconSprite = gMonIcon_Espathra,
        .iconPalIndex = 0,
        SHADOW(-5, 10, SHADOW_SIZE_M)
        FOOTPRINT(Espathra)
        OVERWORLD(
            sPicTable_Espathra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Espathra,
            gShinyOverworldPalette_Espathra
        )
        .levelUpLearnset = sEspathraLevelUpLearnset,
        .teachableLearnset = sEspathraTeachableLearnset,
    },
#endif //P_FAMILY_FLITTLE

#if P_FAMILY_TINKATINK
    [SPECIES_TINKATINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 58,
        .baseSpAttack  = 35,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_STEEL),
        .catchRate = 190,
        .expYield = 59,
        .evYield_SpDefense = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_OWN_TEMPO, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tinkatink"),
        .cryId = CRY_TINKATINK,
        .natDexNum = NATIONAL_DEX_TINKATINK,
        .categoryName = _("Forja"),
        .height = 4,
        .weight = 89,
        .description = COMPOUND_STRING(
            "Este Pokémon golpea restos de hierro\n"
            "juntos para hacer un martillo. Lo\n"
            "remodelará una y otra vez hasta que esté\n"
            "satisfecho con el resultado."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tinkatink,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tinkatink,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Tinkatink,
        .shinyPalette = gMonShinyPalette_Tinkatink,
        .iconSprite = gMonIcon_Tinkatink,
        .iconPalIndex = 1,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Tinkatink)
        OVERWORLD(
            sPicTable_Tinkatink,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Tinkatink,
            gShinyOverworldPalette_Tinkatink
        )
        .levelUpLearnset = sTinkatinkLevelUpLearnset,
        .teachableLearnset = sTinkatinkTeachableLearnset,
        .eggMoveLearnset = sTinkatinkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_TINKATUFF}),
    },

    [SPECIES_TINKATUFF] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 78,
        .baseSpAttack  = 45,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_STEEL),
        .catchRate = 90,
        .expYield = 133,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_OWN_TEMPO, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tinkatuff"),
        .cryId = CRY_TINKATUFF,
        .natDexNum = NATIONAL_DEX_TINKATUFF,
        .categoryName = _("Martillo"),
        .height = 7,
        .weight = 591,
        .description = COMPOUND_STRING(
            "Estos Pokémon hacen sus hogares en\n"
            "montones de chatarra. Prueban la fuerza\n"
            "de los martillos entre ellos\n"
            "golpeándolos juntos."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tinkatuff,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tinkatuff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Tinkatuff,
        .shinyPalette = gMonShinyPalette_Tinkatuff,
        .iconSprite = gMonIcon_Tinkatuff,
        .iconPalIndex = 1,
        SHADOW(-4, 5, SHADOW_SIZE_L)
        FOOTPRINT(Tinkatuff)
        OVERWORLD(
            sPicTable_Tinkatuff,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Tinkatuff,
            gShinyOverworldPalette_Tinkatuff
        )
        .levelUpLearnset = sTinkatuffLevelUpLearnset,
        .teachableLearnset = sTinkatuffTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_TINKATON}),
    },

    [SPECIES_TINKATON] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 77,
        .baseSpeed     = 94,
        .baseSpAttack  = 70,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 253,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_OWN_TEMPO, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tinkaton"),
        .cryId = CRY_TINKATON,
        .natDexNum = NATIONAL_DEX_TINKATON,
        .categoryName = _("Martillo"),
        .height = 7,
        .weight = 1128,
        .description = COMPOUND_STRING(
            "El martillo pesa más de 100 kilos,\n"
            "pero Tinkaton lo maneja fácilmente\n"
            "mientras roba lo que le place y lleva\n"
            "su botín de vuelta a casa."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tinkaton,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tinkaton,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Tinkaton,
        .shinyPalette = gMonShinyPalette_Tinkaton,
        .iconSprite = gMonIcon_Tinkaton,
        .iconPalIndex = 1,
        SHADOW(-5, 15, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tinkaton)
        OVERWORLD(
            sPicTable_Tinkaton,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Tinkaton,
            gShinyOverworldPalette_Tinkaton
        )
        .levelUpLearnset = sTinkatonLevelUpLearnset,
        .teachableLearnset = sTinkatonTeachableLearnset,
    },
#endif //P_FAMILY_TINKATINK

#if P_FAMILY_WIGLETT
    [SPECIES_WIGLETT] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GOOEY, ABILITY_RATTLED, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wiglett"),
        .cryId = CRY_WIGLETT,
        .natDexNum = NATIONAL_DEX_WIGLETT,
        .categoryName = _("Cóngrido"),
        .height = 12,
        .weight = 18,
        .description = COMPOUND_STRING(
            "Este Pokémon puede percibir el olor de\n"
            "una Veluza a poco más de 20 ms. de\n"
            "distancia y se esconderá en la arena."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wiglett,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wiglett,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wiglett,
        .shinyPalette = gMonShinyPalette_Wiglett,
        .iconSprite = gMonIcon_Wiglett,
        .iconPalIndex = 0,
        NO_SHADOW
        FOOTPRINT(Wiglett)
        OVERWORLD(
            sPicTable_Wiglett,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Wiglett,
            gShinyOverworldPalette_Wiglett
        )
        .levelUpLearnset = sWiglettLevelUpLearnset,
        .teachableLearnset = sWiglettTeachableLearnset,
        .eggMoveLearnset = sWiglettEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_WUGTRIO}),
    },

    [SPECIES_WUGTRIO] =
    {
        .baseHP        = 35,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 50,
        .expYield = 149,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GOOEY, ABILITY_RATTLED, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wugtrio"),
        .cryId = CRY_WUGTRIO,
        .natDexNum = NATIONAL_DEX_WUGTRIO,
        .categoryName = _("Cóngrido"),
        .height = 12,
        .weight = 54,
        .description = COMPOUND_STRING(
            "Una variedad de Pokémon de tipo agua,\n"
            "Wugtrio,fue considerado alguna vez\n"
            "como una forma regional de Dugtrio."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wugtrio,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wugtrio,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wugtrio,
        .shinyPalette = gMonShinyPalette_Wugtrio,
        .iconSprite = gMonIcon_Wugtrio,
        .iconPalIndex = 0,
        NO_SHADOW
        FOOTPRINT(Wugtrio)
        OVERWORLD(
            sPicTable_Wugtrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Wugtrio,
            gShinyOverworldPalette_Wugtrio
        )
        .levelUpLearnset = sWugtrioLevelUpLearnset,
        .teachableLearnset = sWugtrioTeachableLearnset,
    },
#endif //P_FAMILY_WIGLETT

#if P_FAMILY_BOMBIRDIER
    [SPECIES_BOMBIRDIER] =
    {
        .baseHP        = 70,
        .baseAttack    = 103,
        .baseDefense   = 85,
        .baseSpeed     = 82,
        .baseSpAttack  = 60,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DARK),
        .catchRate = 25,
        .expYield = 243,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_KEEN_EYE, ABILITY_ROCKY_PAYLOAD },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bombirdier"),
        .cryId = CRY_BOMBIRDIER,
        .natDexNum = NATIONAL_DEX_BOMBIRDIER,
        .categoryName = _("Arrojador"),
        .height = 15,
        .weight = 429,
        .description = COMPOUND_STRING(
            "Bombirdier utiliza el delantal en su pecho\n"
            "para envolver comida, que lleva de vuelta a\n"
            "su nido.Le gusta soltar cosas que\n"
            "hagan ruido fuerte."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bombirdier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bombirdier,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bombirdier,
        .shinyPalette = gMonShinyPalette_Bombirdier,
        .iconSprite = gMonIcon_Bombirdier,
        .iconPalIndex = 0,
        SHADOW(8, 12, SHADOW_SIZE_M)
        FOOTPRINT(Bombirdier)
        OVERWORLD(
            sPicTable_Bombirdier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Bombirdier,
            gShinyOverworldPalette_Bombirdier
        )
        .levelUpLearnset = sBombirdierLevelUpLearnset,
        .teachableLearnset = sBombirdierTeachableLearnset,
        .eggMoveLearnset = sBombirdierEggMoveLearnset,
    },
#endif //P_FAMILY_BOMBIRDIER

#if P_FAMILY_FINIZEN
    [SPECIES_FINIZEN] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 200,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_WATER_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Finizen"),
        .cryId = CRY_FINIZEN,
        .natDexNum = NATIONAL_DEX_FINIZEN,
        .categoryName = _("Delfín"),
        .height = 13,
        .weight = 602,
        .description = COMPOUND_STRING(
            "Su anillo está formado por agua\n"
            "marina mezclada con un fluido pegajoso\n"
            "que Finizen segrega por su espiráculo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Finizen,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Finizen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Finizen,
        .shinyPalette = gMonShinyPalette_Finizen,
        .iconSprite = gMonIcon_Finizen,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Finizen)
        OVERWORLD(
            sPicTable_Finizen,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Finizen,
            gShinyOverworldPalette_Finizen
        )
        .levelUpLearnset = sFinizenLevelUpLearnset,
        .teachableLearnset = sFinizenTeachableLearnset,
        .eggMoveLearnset = sFinizenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_PALAFIN_ZERO}),
    },

    [SPECIES_PALAFIN_ZERO] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 72,
        .baseSpeed     = 100,
        .baseSpAttack  = 53,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 160,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_ZERO_TO_HERO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Palafin"),
        .cryId = CRY_PALAFIN_ZERO,
        .natDexNum = NATIONAL_DEX_PALAFIN,
        .categoryName = _("Delfín"),
        .height = 13,
        .weight = 602,
        .description = COMPOUND_STRING(
            "Este Pokémon cambia su apariencia si\n"
            "escucha a sus aliados pidiendo ayuda.\n"
            "Palafin nunca mostrará a nadie su\n"
            "momento de transformación."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PalafinZero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_PalafinZero,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PalafinZero,
        .shinyPalette = gMonShinyPalette_PalafinZero,
        .iconSprite = gMonIcon_PalafinZero,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Palafin)
        OVERWORLD(
            sPicTable_PalafinZero,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_PalafinZero,
            gShinyOverworldPalette_PalafinZero
        )
        .levelUpLearnset = sPalafinLevelUpLearnset,
        .teachableLearnset = sPalafinTeachableLearnset,
        .formSpeciesIdTable = sPalafinFormSpeciesIdTable,
        .formChangeTable = sPalafinZeroFormChangeTable,
    },

    [SPECIES_PALAFIN_HERO] =
    {
        .baseHP        = 100,
        .baseAttack    = 160,
        .baseDefense   = 97,
        .baseSpeed     = 100,
        .baseSpAttack  = 106,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 228,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_ZERO_TO_HERO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Palafin"),
        .cryId = CRY_PALAFIN_HERO,
        .natDexNum = NATIONAL_DEX_PALAFIN,
        .categoryName = _("Heroico"),
        .height = 18,
        .weight = 974,
        .description = COMPOUND_STRING(
            "Los genes antiguos de este Pokémon han\n"
            "despertado. Ahora es tan extremadamente\n"
            "fuerte que puede levantar fácilmente\n"
            "un crucero con una aleta."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PalafinHero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_PalafinHero,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PalafinHero,
        .shinyPalette = gMonShinyPalette_PalafinHero,
        .iconSprite = gMonIcon_PalafinHero,
        .iconPalIndex = 0,
        SHADOW(1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Palafin)
        OVERWORLD(
            sPicTable_PalafinHero,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PalafinHero,
            gShinyOverworldPalette_PalafinHero
        )
        .levelUpLearnset = sPalafinLevelUpLearnset,
        .teachableLearnset = sPalafinTeachableLearnset,
        .formSpeciesIdTable = sPalafinFormSpeciesIdTable,
        .formChangeTable = sPalafinZeroFormChangeTable,
    },
#endif //P_FAMILY_FINIZEN

#if P_FAMILY_VAROOM
    [SPECIES_VAROOM] =
    {
        .baseHP        = 45,
        .baseAttack    = 70,
        .baseDefense   = 63,
        .baseSpeed     = 47,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_STEEL, TYPE_POISON),
        .catchRate = 190,
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_SLOW_START },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Varoom"),
        .cryId = CRY_VAROOM,
        .natDexNum = NATIONAL_DEX_VAROOM,
        .categoryName = _("Monocilindro"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING(
            "La sección de acero es el cuerpo real\n"
            "de Varoom. Se aferra a las rocas\n"
            "y convierte los minerales en su interior en\n"
            "energía para alimentar sus actividades."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Varoom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Varoom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Varoom,
        .shinyPalette = gMonShinyPalette_Varoom,
        .iconSprite = gMonIcon_Varoom,
        .iconPalIndex = 2,
        SHADOW(0, 0, SHADOW_SIZE_M)
        FOOTPRINT(Varoom)
        OVERWORLD(
            sPicTable_Varoom,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Varoom,
            gShinyOverworldPalette_Varoom
        )
        .levelUpLearnset = sVaroomLevelUpLearnset,
        .teachableLearnset = sVaroomTeachableLearnset,
        .eggMoveLearnset = sVaroomEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_REVAVROOM}),
    },

    [SPECIES_REVAVROOM] =
    {
        .baseHP        = 80,
        .baseAttack    = 119,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 54,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_STEEL, TYPE_POISON),
        .catchRate = 75,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_FILTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Revavroom"),
        .cryId = CRY_REVAVROOM,
        .natDexNum = NATIONAL_DEX_REVAVROOM,
        .categoryName = _("Policilindro"),
        .height = 18,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Crea un gas a partir de veneno y minerales\n"
            "de las rocas. Luego, detona el gas en sus\n"
            "cilindros, que ahora suman ocho, para\n"
            "generar energía."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Revavroom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Revavroom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Revavroom,
        .shinyPalette = gMonShinyPalette_Revavroom,
        .iconSprite = gMonIcon_Revavroom,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Revavroom)
        OVERWORLD(
            sPicTable_Revavroom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Revavroom,
            gShinyOverworldPalette_Revavroom
        )
        .levelUpLearnset = sRevavroomLevelUpLearnset,
        .teachableLearnset = sRevavroomTeachableLearnset,
    },
#endif //P_FAMILY_VAROOM

#if P_FAMILY_CYCLIZAR
    [SPECIES_CYCLIZAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 121,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_NORMAL),
        .catchRate = 190,
        .expYield = 175,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cyclizar"),
        .cryId = CRY_CYCLIZAR,
        .natDexNum = NATIONAL_DEX_CYCLIZAR,
        .categoryName = _("Montura"),
        .height = 16,
        .weight = 630,
        .description = COMPOUND_STRING(
            "Puede correr a más de 110 Km/h llevando\n"
            "a un humano. El calor del cuerpo del\n"
            "jinete calienta la espalda de Cyclizar\n"
            "y levanta el espíritu del Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cyclizar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cyclizar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cyclizar,
        .shinyPalette = gMonShinyPalette_Cyclizar,
        .iconSprite = gMonIcon_Cyclizar,
        .iconPalIndex = 1,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Cyclizar)
        OVERWORLD(
            sPicTable_Cyclizar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cyclizar,
            gShinyOverworldPalette_Cyclizar
        )
        .levelUpLearnset = sCyclizarLevelUpLearnset,
        .teachableLearnset = sCyclizarTeachableLearnset,
        .eggMoveLearnset = sCyclizarEggMoveLearnset,
    },
#endif //P_FAMILY_CYCLIZAR

#if P_FAMILY_ORTHWORM
    [SPECIES_ORTHWORM] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 145,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 25,
        .expYield = 240,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_EARTH_EATER, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Orthworm"),
        .cryId = CRY_ORTHWORM,
        .natDexNum = NATIONAL_DEX_ORTHWORM,
        .categoryName = _("Lombriz"),
        .height = 25,
        .weight = 3100,
        .description = COMPOUND_STRING(
            "Cuando es atacado, este Pokémon utilizará\n"
            "los tentáculos en su cuerpo como puños\n"
            "y lanzará al oponente una\n"
            "tormenta de golpes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Orthworm,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Orthworm,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Orthworm,
        .shinyPalette = gMonShinyPalette_Orthworm,
        .iconSprite = gMonIcon_Orthworm,
        .iconPalIndex = 0,
        SHADOW(6, 10, SHADOW_SIZE_L)
        FOOTPRINT(Orthworm)
        OVERWORLD(
            sPicTable_Orthworm,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Orthworm,
            gShinyOverworldPalette_Orthworm
        )
        .levelUpLearnset = sOrthwormLevelUpLearnset,
        .teachableLearnset = sOrthwormTeachableLearnset,
        .eggMoveLearnset = sOrthwormEggMoveLearnset,
    },
#endif //P_FAMILY_ORTHWORM

#if P_FAMILY_GLIMMET
    [SPECIES_GLIMMET] =
    {
        .baseHP        = 48,
        .baseAttack    = 35,
        .baseDefense   = 42,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ROCK, TYPE_POISON),
        .catchRate = 70,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TOXIC_DEBRIS, ABILITY_NONE, ABILITY_CORROSION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Glimmet"),
        .cryId = CRY_GLIMMET,
        .natDexNum = NATIONAL_DEX_GLIMMET,
        .categoryName = _("Mineral"),
        .height = 7,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Los cristales minerales tóxicos de Glimmet\n"
            "se parecen a pétalos de flores. Este\n"
            "Pokémon esparce polvo venenoso como\n"
            "polen para protegerse."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glimmet,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 11,
        .backPic = gMonBackPic_Glimmet,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Glimmet,
        .shinyPalette = gMonShinyPalette_Glimmet,
        .iconSprite = gMonIcon_Glimmet,
        .iconPalIndex = 0,
        SHADOW(-2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Glimmet)
        OVERWORLD(
            sPicTable_Glimmet,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Glimmet,
            gShinyOverworldPalette_Glimmet
        )
        .levelUpLearnset = sGlimmetLevelUpLearnset,
        .teachableLearnset = sGlimmetTeachableLearnset,
        .eggMoveLearnset = sGlimmetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_GLIMMORA}),
    },

    [SPECIES_GLIMMORA] =
    {
        .baseHP        = 83,
        .baseAttack    = 55,
        .baseDefense   = 90,
        .baseSpeed     = 86,
        .baseSpAttack  = 130,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_ROCK, TYPE_POISON),
        .catchRate = 25,
        .expYield = 184,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TOXIC_DEBRIS, ABILITY_NONE, ABILITY_CORROSION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Glimmora"),
        .cryId = CRY_GLIMMORA,
        .natDexNum = NATIONAL_DEX_GLIMMORA,
        .categoryName = _("Mineral"),
        .height = 15,
        .weight = 450,
        .description = COMPOUND_STRING(
            "Los pétalos de Glimmora están hechos de\n"
            "veneno cristalizado. Actualmente,\n"
            "se ha vuelto evidente que estos\n"
            "pétalos se asemejan a Joyas Tera."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glimmora,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Glimmora,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Glimmora,
        .shinyPalette = gMonShinyPalette_Glimmora,
        .iconSprite = gMonIcon_Glimmora,
        .iconPalIndex = 0,
        SHADOW(-3, 17, SHADOW_SIZE_M)
        FOOTPRINT(Glimmora)
        OVERWORLD(
            sPicTable_Glimmora,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Glimmora,
            gShinyOverworldPalette_Glimmora
        )
        .levelUpLearnset = sGlimmoraLevelUpLearnset,
        .teachableLearnset = sGlimmoraTeachableLearnset,
    },
#endif //P_FAMILY_GLIMMET

#if P_FAMILY_GREAVARD
    [SPECIES_GREAVARD] =
    {
        .baseHP        = 50,
        .baseAttack    = 61,
        .baseDefense   = 60,
        .baseSpeed     = 34,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 120,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_FLUFFY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Greavard"),
        .cryId = CRY_GREAVARD,
        .natDexNum = NATIONAL_DEX_GREAVARD,
        .categoryName = _("Can Fantasma"),
        .height = 6,
        .weight = 350,
        .description = COMPOUND_STRING(
            "Este Pokémon amigable no le gusta\n"
            "estar solo. Dale aunque sea un poco\n"
            "de atención, y te seguirá para siempre."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greavard,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Greavard,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Greavard,
        .shinyPalette = gMonShinyPalette_Greavard,
        .iconSprite = gMonIcon_Greavard,
        .iconPalIndex = 0,
        SHADOW(3, 2, SHADOW_SIZE_M)
        FOOTPRINT(Greavard)
        OVERWORLD(
            sPicTable_Greavard,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Greavard,
            gShinyOverworldPalette_Greavard
        )
        .levelUpLearnset = sGreavardLevelUpLearnset,
        .teachableLearnset = sGreavardTeachableLearnset,
        .eggMoveLearnset = sGreavardEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 30, SPECIES_HOUNDSTONE}),
    },

    [SPECIES_HOUNDSTONE] =
    {
        .baseHP        = 72,
        .baseAttack    = 101,
        .baseDefense   = 100,
        .baseSpeed     = 68,
        .baseSpAttack  = 50,
        .baseSpDefense = 97,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 60,
        .expYield = 171,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_RUSH, ABILITY_NONE, ABILITY_FLUFFY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Houndstone"),
        .cryId = CRY_HOUNDSTONE,
        .natDexNum = NATIONAL_DEX_HOUNDSTONE,
        .categoryName = _("Can Fantasma"),
        .height = 20,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Houndstone pasa la mayor parte de su\n"
            "tiempo durmiendo en cementerios. De todos\n"
            "los Pokémon tipo perro, este es el más leal\n"
            "a su entrenador."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Houndstone,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Houndstone,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Houndstone,
        .shinyPalette = gMonShinyPalette_Houndstone,
        .iconSprite = gMonIcon_Houndstone,
        .iconPalIndex = 2,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Houndstone)
        OVERWORLD(
            sPicTable_Houndstone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Houndstone,
            gShinyOverworldPalette_Houndstone
        )
        .levelUpLearnset = sHoundstoneLevelUpLearnset,
        .teachableLearnset = sHoundstoneTeachableLearnset,
    },
#endif //P_FAMILY_GREAVARD

#if P_FAMILY_FLAMIGO
    [SPECIES_FLAMIGO] =
    {
        .baseHP        = 82,
        .baseAttack    = 115,
        .baseDefense   = 74,
        .baseSpeed     = 90,
        .baseSpAttack  = 75,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_FLYING, TYPE_FIGHTING),
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SCRAPPY, ABILITY_TANGLED_FEET, ABILITY_COSTAR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Flamigo"),
        .cryId = CRY_FLAMIGO,
        .natDexNum = NATIONAL_DEX_FLAMIGO,
        .categoryName = _("Sincronizado"),
        .height = 16,
        .weight = 370,
        .description = COMPOUND_STRING(
            "Presenta conducta sincrónica\n"
            "que le permite a la colonia\n"
            "atacar simultáneamente como\n"
            "una única entidad."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Flamigo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Flamigo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Flamigo,
        .shinyPalette = gMonShinyPalette_Flamigo,
        .iconSprite = gMonIcon_Flamigo,
        .iconPalIndex = 1,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Flamigo)
        OVERWORLD(
            sPicTable_Flamigo,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Flamigo,
            gShinyOverworldPalette_Flamigo
        )
        .levelUpLearnset = sFlamigoLevelUpLearnset,
        .teachableLearnset = sFlamigoTeachableLearnset,
        .eggMoveLearnset = sFlamigoEggMoveLearnset,
    },
#endif //P_FAMILY_FLAMIGO

#if P_FAMILY_CETODDLE
    [SPECIES_CETODDLE] =
    {
        .baseHP        = 108,
        .baseAttack    = 68,
        .baseDefense   = 45,
        .baseSpeed     = 43,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 150,
        .expYield = 67,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_SNOW_CLOAK, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cetoddle"),
        .cryId = CRY_CETODDLE,
        .natDexNum = NATIONAL_DEX_CETODDLE,
        .categoryName = _("Geoballena"),
        .height = 12,
        .weight = 450,
        .description = COMPOUND_STRING(
            "Esta especie abandonó el océano y\n"
            "comenzó a vivir en tierra hace mucho\n"
            "tiempo. Parece estar estrechamente\n"
            "relacionada con Wailmer."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cetoddle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cetoddle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cetoddle,
        .shinyPalette = gMonShinyPalette_Cetoddle,
        .iconSprite = gMonIcon_Cetoddle,
        .iconPalIndex = 0,
        SHADOW(2, 0, SHADOW_SIZE_M)
        FOOTPRINT(Cetoddle)
        OVERWORLD(
            sPicTable_Cetoddle,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cetoddle,
            gShinyOverworldPalette_Cetoddle
        )
        .levelUpLearnset = sCetoddleLevelUpLearnset,
        .teachableLearnset = sCetoddleTeachableLearnset,
        .eggMoveLearnset = sCetoddleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_CETITAN}),
    },

    [SPECIES_CETITAN] =
    {
        .baseHP        = 170,
        .baseAttack    = 113,
        .baseDefense   = 65,
        .baseSpeed     = 73,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 50,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_SLUSH_RUSH, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cetitan"),
        .cryId = CRY_CETITAN,
        .natDexNum = NATIONAL_DEX_CETITAN,
        .categoryName = _("Geoballena"),
        .height = 45,
        .weight = 7000,
        .description = COMPOUND_STRING(
            "La energía gélida se acumula en el cuerno\n"
            "de su mandíbula superior, haciendo que el\n"
            "cuerno alcance temperaturas criogénicas\n"
            "que congelen su entorno."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cetitan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cetitan,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cetitan,
        .shinyPalette = gMonShinyPalette_Cetitan,
        .iconSprite = gMonIcon_Cetitan,
        .iconPalIndex = 0,
        SHADOW(-1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Cetitan)
        OVERWORLD(
            sPicTable_Cetitan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cetitan,
            gShinyOverworldPalette_Cetitan
        )
        .levelUpLearnset = sCetitanLevelUpLearnset,
        .teachableLearnset = sCetitanTeachableLearnset,
    },
#endif //P_FAMILY_CETODDLE

#if P_FAMILY_VELUZA
    [SPECIES_VELUZA] =
    {
        .baseHP        = 90,
        .baseAttack    = 102,
        .baseDefense   = 73,
        .baseSpeed     = 70,
        .baseSpAttack  = 78,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 100,
        .expYield = 167,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Veluza"),
        .cryId = CRY_VELUZA,
        .natDexNum = NATIONAL_DEX_VELUZA,
        .categoryName = _("Sueltalastre"),
        .height = 25,
        .weight = 900,
        .description = COMPOUND_STRING(
            "Veluza tiene excelentes capacidades\n"
            "regenerativas. Desprende carne adicional\n"
            "de su cuerpo para aumentar su agilidad y\n"
            "luego se lanza contra su presa."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Veluza,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Veluza,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Veluza,
        .shinyPalette = gMonShinyPalette_Veluza,
        .iconSprite = gMonIcon_Veluza,
        .iconPalIndex = 1,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Veluza)
        OVERWORLD(
            sPicTable_Veluza,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Veluza,
            gShinyOverworldPalette_Veluza
        )
        .levelUpLearnset = sVeluzaLevelUpLearnset,
        .teachableLearnset = sVeluzaTeachableLearnset,
        .eggMoveLearnset = sVeluzaEggMoveLearnset,
    },
#endif //P_FAMILY_VELUZA

#if P_FAMILY_DONDOZO
    [SPECIES_DONDOZO] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 25,
        .expYield = 265,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_UNAWARE, ABILITY_OBLIVIOUS, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dondozo"),
        .cryId = CRY_DONDOZO,
        .natDexNum = NATIONAL_DEX_DONDOZO,
        .categoryName = _("Gran Siluro"),
        .height = 120,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "Trata a Tatsugiri como su líder y lo sigue\n"
            "lealmente. Aunque poderoso, al parecer,\n"
            "Dondozo no es muy inteligente."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dondozo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_Dondozo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dondozo,
        .shinyPalette = gMonShinyPalette_Dondozo,
        .iconSprite = gMonIcon_Dondozo,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dondozo)
        OVERWORLD(
            sPicTable_Dondozo,
            SIZE_64x64,
            SHADOW_SIZE_L,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Dondozo,
            gShinyOverworldPalette_Dondozo
        )
        .levelUpLearnset = sDondozoLevelUpLearnset,
        .teachableLearnset = sDondozoTeachableLearnset,
        .eggMoveLearnset = sDondozoEggMoveLearnset,
    },
#endif //P_FAMILY_DONDOZO

#if P_FAMILY_TATSUGIRI
    [SPECIES_TATSUGIRI_CURLY] =
    {
        .baseHP        = 68,
        .baseAttack    = 50,
        .baseDefense   = 60,
        .baseSpeed     = 82,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_WATER),
        .catchRate = 100,
        .expYield = 166,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_COMMANDER, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tatsugiri"),
        .cryId = CRY_TATSUGIRI_CURLY,
        .natDexNum = NATIONAL_DEX_TATSUGIRI,
        .categoryName = _("Mimetismo"),
        .height = 3,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Este es un pequeño Pokémon dragón.\n"
            "Vive dentro de la boca de Dondozo\n"
            "para protegerse de los enemigos\n"
            "en el exterior."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TatsugiriCurly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriCurly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_TatsugiriCurly,
        .shinyPalette = gMonShinyPalette_TatsugiriCurly,
        .iconSprite = gMonIcon_TatsugiriCurly,
        .iconPalIndex = 0,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Tatsugiri)
        OVERWORLD(
            sPicTable_TatsugiriCurly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_TatsugiriCurly,
            gShinyOverworldPalette_TatsugiriCurly
        )
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
        .formSpeciesIdTable = sTatsugiriFormSpeciesIdTable,
    },

    [SPECIES_TATSUGIRI_DROOPY] =
    {
        .baseHP        = 68,
        .baseAttack    = 50,
        .baseDefense   = 60,
        .baseSpeed     = 82,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_WATER),
        .catchRate = 100,
        .expYield = 166,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_COMMANDER, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tatsugiri"),
        .cryId = CRY_TATSUGIRI_DROOPY,
        .natDexNum = NATIONAL_DEX_TATSUGIRI,
        .categoryName = _("Mimetismo"),
        .height = 3,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Este es un pequeño Pokémon dragón.\n"
            "Vive dentro de la boca de Dondozo\n"
            "para protegerse de los enemigos\n"
            "en el exterior."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TatsugiriDroopy,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriDroopy,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_TatsugiriDroopy,
        .shinyPalette = gMonShinyPalette_TatsugiriDroopy,
        .iconSprite = gMonIcon_TatsugiriDroopy,
        .iconPalIndex = 0,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Tatsugiri)
        OVERWORLD(
            sPicTable_TatsugiriDroopy,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_TatsugiriDroopy,
            gShinyOverworldPalette_TatsugiriDroopy
        )
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
        .formSpeciesIdTable = sTatsugiriFormSpeciesIdTable,
    },

    [SPECIES_TATSUGIRI_STRETCHY] =
    {
        .baseHP        = 68,
        .baseAttack    = 50,
        .baseDefense   = 60,
        .baseSpeed     = 82,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_WATER),
        .catchRate = 100,
        .expYield = 166,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_COMMANDER, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tatsugiri"),
        .cryId = CRY_TATSUGIRI_STRETCHY,
        .natDexNum = NATIONAL_DEX_TATSUGIRI,
        .categoryName = _("Mimetismo"),
        .height = 3,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Este es un pequeño Pokémon dragón.\n"
            "Vive dentro de la boca de Dondozo\n"
            "para protegerse de los enemigos\n"
            "en el exterior."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TatsugiriStretchy,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriStretchy,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_TatsugiriStretchy,
        .shinyPalette = gMonShinyPalette_TatsugiriStretchy,
        .iconSprite = gMonIcon_TatsugiriStretchy,
        .iconPalIndex = 0,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Tatsugiri)
        OVERWORLD(
            sPicTable_TatsugiriStretchy,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_TatsugiriStretchy,
            gShinyOverworldPalette_TatsugiriStretchy
        )
        .levelUpLearnset = sTatsugiriLevelUpLearnset,
        .teachableLearnset = sTatsugiriTeachableLearnset,
        .eggMoveLearnset = sTatsugiriEggMoveLearnset,
        .formSpeciesIdTable = sTatsugiriFormSpeciesIdTable,
    },
#endif //P_FAMILY_TATSUGIRI

#if P_FAMILY_GREAT_TUSK
    [SPECIES_GREAT_TUSK] =
    {
        .baseHP        = 115,
        .baseAttack    = 131,
        .baseDefense   = 131,
        .baseSpeed     = 87,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FIGHTING),
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Colmilargo"),
        .cryId = CRY_GREAT_TUSK,
        .natDexNum = NATIONAL_DEX_GREAT_TUSK,
        .categoryName = _("Paradoja"),
        .height = 22,
        .weight = 3200,
        .description = COMPOUND_STRING(
            "Avistamientos de este Pokémon han\n"
            "ocurrido en años recientes. El nombre\n"
            "Colmilargo fue tomado de una criatura\n"
            "mencionada en un cierto libro."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GreatTusk,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GreatTusk,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GreatTusk,
        .shinyPalette = gMonShinyPalette_GreatTusk,
        .iconSprite = gMonIcon_GreatTusk,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(GreatTusk)
        OVERWORLD(
            sPicTable_GreatTusk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GreatTusk,
            gShinyOverworldPalette_GreatTusk
        )
        .isParadox = TRUE,
        .levelUpLearnset = sGreatTuskLevelUpLearnset,
        .teachableLearnset = sGreatTuskTeachableLearnset,
    },
#endif //P_FAMILY_GREAT_TUSK

#if P_FAMILY_SCREAM_TAIL
    [SPECIES_SCREAM_TAIL] =
    {
        .baseHP        = 115,
        .baseAttack    = 65,
        .baseDefense   = 99,
        .baseSpeed     = 111,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_PSYCHIC),
        .catchRate = 50,
        .expYield = 285,
        .evYield_HP = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Colagrito"),
        .cryId = CRY_SCREAM_TAIL,
        .natDexNum = NATIONAL_DEX_SCREAM_TAIL,
        .categoryName = _("Paradoja"),
        .height = 12,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Hasta ahora, solo se ha registrado un\n"
            "avistamiento de este Pokémon. Se asemeja\n"
            "a una criatura misteriosa descrita en un\n"
            "antiguo diario de expedición."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ScreamTail,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ScreamTail,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ScreamTail,
        .shinyPalette = gMonShinyPalette_ScreamTail,
        .iconSprite = gMonIcon_ScreamTail,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(ScreamTail)
        OVERWORLD(
            sPicTable_ScreamTail,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ScreamTail,
            gShinyOverworldPalette_ScreamTail
        )
        .isParadox = TRUE,
        .levelUpLearnset = sScreamTailLevelUpLearnset,
        .teachableLearnset = sScreamTailTeachableLearnset,
    },
#endif //P_FAMILY_SCREAM_TAIL

#if P_FAMILY_BRUTE_BONNET
    [SPECIES_BRUTE_BONNET] =
    {
        .baseHP        = 111,
        .baseAttack    = 127,
        .baseDefense   = 99,
        .baseSpeed     = 55,
        .baseSpAttack  = 79,
        .baseSpDefense = 99,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DARK),
        .catchRate = 50,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Furioseta"),
        .cryId = CRY_BRUTE_BONNET,
        .natDexNum = NATIONAL_DEX_BRUTE_BONNET,
        .categoryName = _("Paradoja"),
        .height = 12,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Guarda un ligero parecido con un Pokémon\n"
            "descrito en una dudosa revista como\n"
            "una mezcla entre un dinosaurio y un hongo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BruteBonnet,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BruteBonnet,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BruteBonnet,
        .shinyPalette = gMonShinyPalette_BruteBonnet,
        .iconSprite = gMonIcon_BruteBonnet,
        .iconPalIndex = 1,
        SHADOW(2, 7, SHADOW_SIZE_L)
        FOOTPRINT(BruteBonnet)
        OVERWORLD(
            sPicTable_BruteBonnet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BruteBonnet,
            gShinyOverworldPalette_BruteBonnet
        )
        .isParadox = TRUE,
        .levelUpLearnset = sBruteBonnetLevelUpLearnset,
        .teachableLearnset = sBruteBonnetTeachableLearnset,
    },
#endif //P_FAMILY_BRUTE_BONNET

#if P_FAMILY_FLUTTER_MANE
    [SPECIES_FLUTTER_MANE] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FAIRY),
        .catchRate = 30,
        .expYield = 285,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Melenaleteo"),
        .cryId = CRY_FLUTTER_MANE,
        .natDexNum = NATIONAL_DEX_FLUTTER_MANE,
        .categoryName = _("Paradoja"),
        .height = 14,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Tiene características similares a un\n"
            "pterosaurio fantasmagórico que fue\n"
            "mencionado en una revista paranormal,\n"
            "pero los dos tienen poco más en común."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_FlutterMane,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 18,
        .backPic = gMonBackPic_FlutterMane,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_FlutterMane,
        .shinyPalette = gMonShinyPalette_FlutterMane,
        .iconSprite = gMonIcon_FlutterMane,
        .iconPalIndex = 2,
        SHADOW(-2, 20, SHADOW_SIZE_S)
        FOOTPRINT(FlutterMane)
        OVERWORLD(
            sPicTable_FlutterMane,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_FlutterMane,
            gShinyOverworldPalette_FlutterMane
        )
        .isParadox = TRUE,
        .levelUpLearnset = sFlutterManeLevelUpLearnset,
        .teachableLearnset = sFlutterManeTeachableLearnset,
    },
#endif //P_FAMILY_FLUTTER_MANE

#if P_FAMILY_SLITHER_WING
    [SPECIES_SLITHER_WING] =
    {
        .baseHP        = 85,
        .baseAttack    = 135,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Reptalada"),
        .cryId = CRY_SLITHER_WING,
        .natDexNum = NATIONAL_DEX_SLITHER_WING,
        .categoryName = _("Paradoja"),
        .height = 32,
        .weight = 920,
        .description = COMPOUND_STRING(
            "Este misterioso Pokémon tiene algunas\n"
            "similitudes con una criatura que\n"
            "un antiguo libro presentó\n"
            "como Reptalada."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SlitherWing,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlitherWing,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SlitherWing,
        .shinyPalette = gMonShinyPalette_SlitherWing,
        .iconSprite = gMonIcon_SlitherWing,
        .iconPalIndex = 1,
        SHADOW(-5, 13, SHADOW_SIZE_M)
        FOOTPRINT(SlitherWing)
        OVERWORLD(
            sPicTable_SlitherWing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_SlitherWing,
            gShinyOverworldPalette_SlitherWing
        )
        .isParadox = TRUE,
        .levelUpLearnset = sSlitherWingLevelUpLearnset,
        .teachableLearnset = sSlitherWingTeachableLearnset,
    },
#endif //P_FAMILY_SLITHER_WING

#if P_FAMILY_SANDY_SHOCKS
    [SPECIES_SANDY_SHOCKS] =
    {
        .baseHP        = 85,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 101,
        .baseSpAttack  = 121,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GROUND),
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pelarena"),
        .cryId = CRY_SANDY_SHOCKS,
        .natDexNum = NATIONAL_DEX_SANDY_SHOCKS,
        .categoryName = _("Paradoja"),
        .height = 23,
        .weight = 600,
        .description = COMPOUND_STRING(
            "Se asemeja ligeramente a un Magneton\n"
            "que vivió durante 10,000 años y fue\n"
            "presentado en un artículo\n"
            "de una revista paranormal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SandyShocks,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandyShocks,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SandyShocks,
        .shinyPalette = gMonShinyPalette_SandyShocks,
        .iconSprite = gMonIcon_SandyShocks,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(SandyShocks)
        OVERWORLD(
            sPicTable_SandyShocks,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SandyShocks,
            gShinyOverworldPalette_SandyShocks
        )
        .isParadox = TRUE,
        .levelUpLearnset = sSandyShocksLevelUpLearnset,
        .teachableLearnset = sSandyShocksTeachableLearnset,
    },
#endif //P_FAMILY_SANDY_SHOCKS

#if P_FAMILY_IRON_TREADS
    [SPECIES_IRON_TREADS] =
    {
        .baseHP        = 90,
        .baseAttack    = 112,
        .baseDefense   = 120,
        .baseSpeed     = 106,
        .baseSpAttack  = 72,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 30,
        .expYield = 285,
        .evYield_Defense = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ferrodada"),
        .cryId = CRY_IRON_TREADS,
        .natDexNum = NATIONAL_DEX_IRON_TREADS,
        .categoryName = _("Paradoja"),
        .height = 9,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "Se han producido avistamientos recientes\n"
            "de este Pokémon. Se asemeja a un objeto\n"
            "misterioso descrito en un antiguo\n"
            "diario de expedición."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronTreads,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronTreads,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronTreads,
        .shinyPalette = gMonShinyPalette_IronTreads,
        .iconSprite = gMonIcon_IronTreads,
        .iconPalIndex = 1,
        SHADOW(4, 3, SHADOW_SIZE_L)
        FOOTPRINT(IronTreads)
        OVERWORLD(
            sPicTable_IronTreads,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronTreads,
            gShinyOverworldPalette_IronTreads
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronTreadsLevelUpLearnset,
        .teachableLearnset = sIronTreadsTeachableLearnset,
    },
#endif //P_FAMILY_IRON_TREADS

#if P_FAMILY_IRON_BUNDLE
    [SPECIES_IRON_BUNDLE] =
    {
        .baseHP        = 56,
        .baseAttack    = 80,
        .baseDefense   = 114,
        .baseSpeed     = 136,
        .baseSpAttack  = 124,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .catchRate = 50,
        .expYield = 285,
        .evYield_Speed = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ferrosaco"),
        .cryId = CRY_IRON_BUNDLE,
        .natDexNum = NATIONAL_DEX_IRON_BUNDLE,
        .categoryName = _("Paradoja"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "Su forma es similar a la de un robot\n"
            "destacado en un artículo de una revista\n"
            "paranormal. Se dice que el robot fue\n"
            "creado por una antigua civilización."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronBundle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronBundle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronBundle,
        .shinyPalette = gMonShinyPalette_IronBundle,
        .iconSprite = gMonIcon_IronBundle,
        .iconPalIndex = 0,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(IronBundle)
        OVERWORLD(
            sPicTable_IronBundle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronBundle,
            gShinyOverworldPalette_IronBundle
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronBundleLevelUpLearnset,
        .teachableLearnset = sIronBundleTeachableLearnset,
    },
#endif //P_FAMILY_IRON_BUNDLE

#if P_FAMILY_IRON_HANDS
    [SPECIES_IRON_HANDS] =
    {
        .baseHP        = 154,
        .baseAttack    = 140,
        .baseDefense   = 108,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_ELECTRIC),
        .catchRate = 50,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ferropalmas"),
        .cryId = CRY_IRON_HANDS,
        .natDexNum = NATIONAL_DEX_IRON_HANDS,
        .categoryName = _("Paradoja"),
        .height = 18,
        .weight = 3807,
        .description = COMPOUND_STRING(
            "Es muy similar a un cíborg mencionado\n"
            "exclusivamente en una revista paranormal.\n"
            "Se dice que el cíborg era la forma\n"
            "modificada de cierto atleta."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronHands,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronHands,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronHands,
        .shinyPalette = gMonShinyPalette_IronHands,
        .iconSprite = gMonIcon_IronHands,
        .iconPalIndex = 0,
        SHADOW(-2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(IronHands)
        OVERWORLD(
            sPicTable_IronHands,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronHands,
            gShinyOverworldPalette_IronHands
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronHandsLevelUpLearnset,
        .teachableLearnset = sIronHandsTeachableLearnset,
    },
#endif //P_FAMILY_IRON_HANDS

#if P_FAMILY_IRON_JUGULIS
    [SPECIES_IRON_JUGULIS] =
    {
        .baseHP        = 94,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 108,
        .baseSpAttack  = 122,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ferrocuello"),
        .cryId = CRY_IRON_JUGULIS,
        .natDexNum = NATIONAL_DEX_IRON_JUGULIS,
        .categoryName = _("Paradoja"),
        .height = 13,
        .weight = 1110,
        .description = COMPOUND_STRING(
            "Se asemeja a cierto Pokémon presentado\n"
            "en una revista paranormal, descrito\n"
            "como el hijo de un Hydreigon\n"
            "que se enamoró de un robot."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronJugulis,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_IronJugulis,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronJugulis,
        .shinyPalette = gMonShinyPalette_IronJugulis,
        .iconSprite = gMonIcon_IronJugulis,
        .iconPalIndex = 0,
        SHADOW(0, 15, SHADOW_SIZE_M)
        FOOTPRINT(IronJugulis)
        OVERWORLD(
            sPicTable_IronJugulis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_IronJugulis,
            gShinyOverworldPalette_IronJugulis
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronJugulisLevelUpLearnset,
        .teachableLearnset = sIronJugulisTeachableLearnset,
    },
#endif //P_FAMILY_IRON_JUGULIS

#if P_FAMILY_IRON_MOTH
    [SPECIES_IRON_MOTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FIRE, TYPE_POISON),
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ferropolilla"),
        .cryId = CRY_IRON_MOTH,
        .natDexNum = NATIONAL_DEX_IRON_MOTH,
        .categoryName = _("Paradoja"),
        .height = 12,
        .weight = 360,
        .description = COMPOUND_STRING(
            "No existen registros de que haya sido\n"
            "capturado. La información es escasa,\n"
            "pero las características coinciden\n"
            "con un objeto descrito en un pergamino."),        
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronMoth,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_IronMoth,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronMoth,
        .shinyPalette = gMonShinyPalette_IronMoth,
        .iconSprite = gMonIcon_IronMoth,
        .iconPalIndex = 3,
        SHADOW(-4, 14, SHADOW_SIZE_M)
        FOOTPRINT(IronMoth)
        OVERWORLD(
            sPicTable_IronMoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronMoth,
            gShinyOverworldPalette_IronMoth
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronMothLevelUpLearnset,
        .teachableLearnset = sIronMothTeachableLearnset,
    },
#endif //P_FAMILY_IRON_MOTH

#if P_FAMILY_IRON_THORNS
    [SPECIES_IRON_THORNS] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 72,
        .baseSpAttack  = 70,
        .baseSpDefense = 84,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ferropúas"),
        .cryId = CRY_IRON_THORNS,
        .natDexNum = NATIONAL_DEX_IRON_THORNS,
        .categoryName = _("Paradoja"),
        .height = 16,
        .weight = 3030,
        .description = COMPOUND_STRING(
            "Tiene algunas similitudes con un Pokémon\n"
            "presentado en una revista dudosa como un\n"
            "Tyranitar proveniente de mil millones\n"
            "de años en el futuro."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronThorns,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronThorns,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronThorns,
        .shinyPalette = gMonShinyPalette_IronThorns,
        .iconSprite = gMonIcon_IronThorns,
        .iconPalIndex = 1,
        SHADOW(-9, 12, SHADOW_SIZE_L)
        FOOTPRINT(IronThorns)
        OVERWORLD(
            sPicTable_IronThorns,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronThorns,
            gShinyOverworldPalette_IronThorns
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronThornsLevelUpLearnset,
        .teachableLearnset = sIronThornsTeachableLearnset,
    },
#endif //P_FAMILY_IRON_THORNS

#if P_FAMILY_FRIGIBAX
    [SPECIES_FRIGIBAX] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_ICE),
        .catchRate = 45,
        .expYield = 64,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Frigibax"),
        .cryId = CRY_FRIGIBAX,
        .natDexNum = NATIONAL_DEX_FRIGIBAX,
        .categoryName = _("Aleta Hielo"),
        .height = 5,
        .weight = 170,
        .description = COMPOUND_STRING(
            "Este Pokémon vive en bosques y zonas\n"
            "rocosas. Utilizando el poder de su aleta\n"
            "dorsal, enfría el interior de\n"
            "su nido como un refrigerador."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frigibax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Frigibax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Frigibax,
        .shinyPalette = gMonShinyPalette_Frigibax,
        .iconSprite = gMonIcon_Frigibax,
        .iconPalIndex = 0,
        SHADOW(2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Frigibax)
        OVERWORLD(
            sPicTable_Frigibax,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frigibax,
            gShinyOverworldPalette_Frigibax
        )
        .levelUpLearnset = sFrigibaxLevelUpLearnset,
        .teachableLearnset = sFrigibaxTeachableLearnset,
        .eggMoveLearnset = sFrigibaxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ARCTIBAX}),
    },

    [SPECIES_ARCTIBAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = 66,
        .baseSpeed     = 62,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_ICE),
        .catchRate = 25,
        .expYield = 148,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arctibax"),
        .cryId = CRY_ARCTIBAX,
        .natDexNum = NATIONAL_DEX_ARCTIBAX,
        .categoryName = _("Aleta Hielo"),
        .height = 8,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Arctibax congela el aire a su alrededor,\n"
            "protegiendo su rostro con una máscara\n"
            "de hielo y convirtiendo su aleta dorsal\n"
            "en una hoja de hielo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arctibax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arctibax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arctibax,
        .shinyPalette = gMonShinyPalette_Arctibax,
        .iconSprite = gMonIcon_Arctibax,
        .iconPalIndex = 0,
        SHADOW(4, 8, SHADOW_SIZE_M)
        FOOTPRINT(Arctibax)
        OVERWORLD(
            sPicTable_Arctibax,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arctibax,
            gShinyOverworldPalette_Arctibax
        )
        .levelUpLearnset = sArctibaxLevelUpLearnset,
        .teachableLearnset = sArctibaxTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 54, SPECIES_BAXCALIBUR}),
    },

    [SPECIES_BAXCALIBUR] =
    {
        .baseHP        = 115,
        .baseAttack    = 145,
        .baseDefense   = 92,
        .baseSpeed     = 87,
        .baseSpAttack  = 75,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_ICE),
        .catchRate = 10,
        .expYield = 300,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Baxcalibur"),
        .cryId = CRY_BAXCALIBUR,
        .natDexNum = NATIONAL_DEX_BAXCALIBUR,
        .categoryName = _("Dragón Hielo"),
        .height = 21,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "Se lanza al combate volteándose boca\n"
            "abajo y expulsando aire gélido\n"
            "por la boca. Remata a los oponentes\n"
            "con su hoja dorsal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Baxcalibur,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Baxcalibur,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Baxcalibur,
        .shinyPalette = gMonShinyPalette_Baxcalibur,
        .iconSprite = gMonIcon_Baxcalibur,
        .iconPalIndex = 0,
        SHADOW(5, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Baxcalibur)
        OVERWORLD(
            sPicTable_Baxcalibur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Baxcalibur,
            gShinyOverworldPalette_Baxcalibur
        )
        .levelUpLearnset = sBaxcaliburLevelUpLearnset,
        .teachableLearnset = sBaxcaliburTeachableLearnset,
    },
#endif //P_FAMILY_FRIGIBAX

#if P_FAMILY_GIMMIGHOUL
    [SPECIES_GIMMIGHOUL_CHEST] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 70,
        .baseSpeed     = 10,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = 60,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RATTLED, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gimmighoul"),
        .cryId = CRY_GIMMIGHOUL,
        .natDexNum = NATIONAL_DEX_GIMMIGHOUL,
        .categoryName = _("Cofre"),
        .height = 3,
        .weight = 50,
        .description = COMPOUND_STRING(
            "Vive dentro de un antiguo cofre del\n"
            "tesoro. A veces, lo dejan en rincones de\n"
            "tiendas porque nadie se da cuenta de que\n"
            "en realidad es un Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GimmighoulChest,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GimmighoulChest,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GimmighoulChest,
        .shinyPalette = gMonShinyPalette_GimmighoulChest,
        .iconSprite = gMonIcon_GimmighoulChest,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(GimmighoulChest)
        OVERWORLD(
            sPicTable_GimmighoulChest,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_GimmighoulChest,
            gShinyOverworldPalette_GimmighoulChest
        )
        .levelUpLearnset = sGimmighoulLevelUpLearnset,
        .teachableLearnset = sGimmighoulTeachableLearnset,
        .formSpeciesIdTable = sGimmighoulFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM_COUNT_999, ITEM_GIMMIGHOUL_COIN, SPECIES_GHOLDENGO}),
    },

    [SPECIES_GIMMIGHOUL_ROAMING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 25,
        .baseSpeed     = 80,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = 60,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Gimmighoul"),
        .cryId = CRY_GIMMIGHOUL,
        .natDexNum = NATIONAL_DEX_GIMMIGHOUL,
        .categoryName = _("Cazatesoros"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Vaga por ahí llevando una antigua moneda\n"
            "en su espalda. Sobrevive drenando la\n"
            "fuerza vital de los humanos que intentan\n"
            "recoger su moneda."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GimmighoulRoaming,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GimmighoulRoaming,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GimmighoulRoaming,
        .shinyPalette = gMonShinyPalette_GimmighoulRoaming,
        .iconSprite = gMonIcon_GimmighoulRoaming,
        .iconPalIndex = 0,
        SHADOW(-1, -4, SHADOW_SIZE_S)
        FOOTPRINT(GimmighoulRoaming)
        .levelUpLearnset = sGimmighoulLevelUpLearnset,
        .teachableLearnset = sGimmighoulTeachableLearnset,
        .formSpeciesIdTable = sGimmighoulFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM_COUNT_999, ITEM_GIMMIGHOUL_COIN, SPECIES_GHOLDENGO}),
    },

    [SPECIES_GHOLDENGO] =
    {
        .baseHP        = 87,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 84,
        .baseSpAttack  = 133,
        .baseSpDefense = 91,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 275,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GOOD_AS_GOLD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Gholdengo"),
        .cryId = CRY_GHOLDENGO,
        .natDexNum = NATIONAL_DEX_GHOLDENGO,
        .categoryName = _("Tesoro"),
        .height = 12,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Tiene un cuerpo robusto compuesto por\n"
            "monedas apiladas. Gholdengo abruma a sus\n"
            "enemigos disparando moneda tras moneda\n"
            "en rápida sucesión."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gholdengo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gholdengo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gholdengo,
        .shinyPalette = gMonShinyPalette_Gholdengo,
        .iconSprite = gMonIcon_Gholdengo,
        .iconPalIndex = 0,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gholdengo)
        OVERWORLD(
            sPicTable_Gholdengo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Gholdengo,
            gShinyOverworldPalette_Gholdengo
        )
        .levelUpLearnset = sGholdengoLevelUpLearnset,
        .teachableLearnset = sGholdengoTeachableLearnset,
    },
#endif //P_FAMILY_GIMMIGHOUL

#if P_FAMILY_WO_CHIEN
    [SPECIES_WO_CHIEN] =
    {
        .baseHP        = 85,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_DARK, TYPE_GRASS),
        .catchRate = 6,
        .expYield = 285,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TABLETS_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Wo-Chien"),
        .cryId = CRY_WO_CHIEN,
        .natDexNum = NATIONAL_DEX_WO_CHIEN,
        .categoryName = _("Debacle"),
        .height = 15,
        .weight = 742,
        .description = COMPOUND_STRING(
            "El rencor de una persona castigada por\n"
            "escribir las malas acciones del rey en\n"
            "tablillas de madera se ha tapado con hojas\n"
            "muertas para convertirse en Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WoChien,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WoChien,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WoChien,
        .shinyPalette = gMonShinyPalette_WoChien,
        .iconSprite = gMonIcon_WoChien,
        .iconPalIndex = 1,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(WoChien)
        OVERWORLD(
            sPicTable_WoChien,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_WoChien,
            gShinyOverworldPalette_WoChien
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sWoChienLevelUpLearnset,
        .teachableLearnset = sWoChienTeachableLearnset,
    },
#endif //P_FAMILY_WO_CHIEN

#if P_FAMILY_CHIEN_PAO
    [SPECIES_CHIEN_PAO] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK, TYPE_ICE),
        .catchRate = 6,
        .expYield = 285,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWORD_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Chien-Pao"),
        .cryId = CRY_CHIEN_PAO,
        .natDexNum = NATIONAL_DEX_CHIEN_PAO,
        .categoryName = _("Debacle"),
        .height = 19,
        .weight = 1522,
        .description = COMPOUND_STRING(
            "Este Pokémon puede controlar 100 T.\n"
            "de nieve caída. Juega inocentemente\n"
            "saltando dentro y fuera de\n"
            "avalanchas que ha provocado."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChienPao,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChienPao,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ChienPao,
        .shinyPalette = gMonShinyPalette_ChienPao,
        .iconSprite = gMonIcon_ChienPao,
        .iconPalIndex = 0,
        SHADOW(-4, 8, SHADOW_SIZE_L)
        FOOTPRINT(ChienPao)
        OVERWORLD(
            sPicTable_ChienPao,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ChienPao,
            gShinyOverworldPalette_ChienPao
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sChienPaoLevelUpLearnset,
        .teachableLearnset = sChienPaoTeachableLearnset,
    },
#endif //P_FAMILY_CHIEN_PAO

#if P_FAMILY_TING_LU
    [SPECIES_TING_LU] =
    {
        .baseHP        = 155,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_GROUND),
        .catchRate = 6,
        .expYield = 285,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VESSEL_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ting-Lu"),
        .cryId = CRY_TING_LU,
        .natDexNum = NATIONAL_DEX_TING_LU,
        .categoryName = _("Debacle"),
        .height = 27,
        .weight = 6997,
        .description = COMPOUND_STRING(
            "Baja lentamente su cabeza enormemente\n"
            "pesada sobre el suelo, abriendo la tierra\n"
            "con enormes fisuras que llegan a tener\n"
            "más de 50 mts de profundidad."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TingLu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TingLu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TingLu,
        .shinyPalette = gMonShinyPalette_TingLu,
        .iconSprite = gMonIcon_TingLu,
        .iconPalIndex = 0,
        SHADOW(12, 13, SHADOW_SIZE_L)
        FOOTPRINT(TingLu)
        OVERWORLD(
            sPicTable_TingLu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TingLu,
            gShinyOverworldPalette_TingLu
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTingLuLevelUpLearnset,
        .teachableLearnset = sTingLuTeachableLearnset,
    },
#endif //P_FAMILY_TING_LU

#if P_FAMILY_CHI_YU
    [SPECIES_CHI_YU] =
    {
        .baseHP        = 55,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 6,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEADS_OF_RUIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Chi-Yu"),
        .cryId = CRY_CHI_YU,
        .natDexNum = NATIONAL_DEX_CHI_YU,
        .categoryName = _("Debacle"),
        .height = 4,
        .weight = 49,
        .description = COMPOUND_STRING(
            "Controla las llamas que arden a más de\n"
            "3000 ºC. Nada con tranquilidad a\n"
            "través del mar de lava que crea\n"
            "al derretir rocas y arena."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChiYu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_ChiYu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ChiYu,
        .shinyPalette = gMonShinyPalette_ChiYu,
        .iconSprite = gMonIcon_ChiYu,
        .iconPalIndex = 0,
        SHADOW(0, 16, SHADOW_SIZE_S)
        FOOTPRINT(ChiYu)
        OVERWORLD(
            sPicTable_ChiYu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_ChiYu,
            gShinyOverworldPalette_ChiYu
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sChiYuLevelUpLearnset,
        .teachableLearnset = sChiYuTeachableLearnset,
    },
#endif //P_FAMILY_CHI_YU

#if P_FAMILY_ROARING_MOON
    [SPECIES_ROARING_MOON] =
    {
        .baseHP        = 105,
        .baseAttack    = 139,
        .baseDefense   = 71,
        .baseSpeed     = 119,
        .baseSpAttack  = 55,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_DARK),
        .catchRate = 10,
        .expYield = 295,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bramaluna"),
        .cryId = CRY_ROARING_MOON,
        .natDexNum = NATIONAL_DEX_ROARING_MOON,
        .categoryName = _("Paradoja"),
        .height = 20,
        .weight = 3800,
        .description = COMPOUND_STRING(
            "Según un artículo de una revista dudosa,\n"
            "este Pokémon tiene alguna conexión con\n"
            "la Megaevolución que ocurre en Hoenn."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RoaringMoon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_RoaringMoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RoaringMoon,
        .shinyPalette = gMonShinyPalette_RoaringMoon,
        .iconSprite = gMonIcon_RoaringMoon,
        .iconPalIndex = 0,
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(RoaringMoon)
        OVERWORLD(
            sPicTable_RoaringMoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RoaringMoon,
            gShinyOverworldPalette_RoaringMoon
        )
        .isParadox = TRUE,
        .levelUpLearnset = sRoaringMoonLevelUpLearnset,
        .teachableLearnset = sRoaringMoonTeachableLearnset,
    },
#endif //P_FAMILY_ROARING_MOON

#if P_FAMILY_IRON_VALIANT
    [SPECIES_IRON_VALIANT] =
    {
        .baseHP        = 74,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 116,
        .baseSpAttack  = 120,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_FIGHTING),
        .catchRate = 10,
        .expYield = 295,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ferropaladín"),
        .cryId = CRY_IRON_VALIANT,
        .natDexNum = NATIONAL_DEX_IRON_VALIANT,
        .categoryName = _("Paradoja"),
        .height = 14,
        .weight = 350,
        .description = COMPOUND_STRING(
            "Tiene algunas similitudes con la invención\n"
            "de un científico loco cubierta\n"
            "en una revista paranormal."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronValiant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronValiant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronValiant,
        .shinyPalette = gMonShinyPalette_IronValiant,
        .iconSprite = gMonIcon_IronValiant,
        .iconPalIndex = 1,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(IronValiant)
        OVERWORLD(
            sPicTable_IronValiant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronValiant,
            gShinyOverworldPalette_IronValiant
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronValiantLevelUpLearnset,
        .teachableLearnset = sIronValiantTeachableLearnset,
    },
#endif //P_FAMILY_IRON_VALIANT

#if P_FAMILY_KORAIDON
    [SPECIES_KORAIDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 135,
        .baseDefense   = 115,
        .baseSpeed     = 135,
        .baseSpAttack  = 85,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = 335,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ORICHALCUM_PULSE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Koraidon"),
        .cryId = CRY_KORAIDON,
        .natDexNum = NATIONAL_DEX_KORAIDON,
        .categoryName = _("Paradoja"),
        .height = 25,
        .weight = 3030,
        .description = COMPOUND_STRING(
            "Este Pokémon se parece a Cyclizar,\n"
            "pero es mucho más robusto y feroz. No se\n"
            "sabe nada sobre su ecología\n"
            "u otras características."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Koraidon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Koraidon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Koraidon,
        .shinyPalette = gMonShinyPalette_Koraidon,
        .iconSprite = gMonIcon_Koraidon,
        .iconPalIndex = 0,
        SHADOW(-3, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Koraidon)
        OVERWORLD(
            sPicTable_Koraidon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Koraidon,
            gShinyOverworldPalette_Koraidon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKoraidonLevelUpLearnset,
        .teachableLearnset = sKoraidonTeachableLearnset,
    },
#endif //P_FAMILY_KORAIDON

#if P_FAMILY_MIRAIDON
    [SPECIES_MIRAIDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .catchRate = 3,
        .expYield = 335,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HADRON_ENGINE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Miraidon"),
        .cryId = CRY_MIRAIDON,
        .natDexNum = NATIONAL_DEX_MIRAIDON,
        .categoryName = _("Paradoja"),
        .height = 35,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "Esto parece ser la Serpiente de Hierro\n"
            "mencionada en un Libro Violeta. Se\n"
            "dice que convirtió la tierra en cenizas\n"
            "con sus rayos."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Miraidon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Miraidon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Miraidon,
        .shinyPalette = gMonShinyPalette_Miraidon,
        .iconSprite = gMonIcon_Miraidon,
        .iconPalIndex = 2,
        SHADOW(3, 22, SHADOW_SIZE_L)
        FOOTPRINT(Miraidon)
        OVERWORLD(
            sPicTable_Miraidon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Miraidon,
            gShinyOverworldPalette_Miraidon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMiraidonLevelUpLearnset,
        .teachableLearnset = sMiraidonTeachableLearnset,
    },
#endif //P_FAMILY_MIRAIDON

#if P_FAMILY_WALKING_WAKE
    [SPECIES_WALKING_WAKE] =
    {
        .baseHP        = 99,
        .baseAttack    = 83,
        .baseDefense   = 91,
        .baseSpeed     = 109,
        .baseSpAttack  = 125,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 5,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ondulagua"),
        .cryId = CRY_WALKING_WAKE,
        .natDexNum = NATIONAL_DEX_WALKING_WAKE,
        .categoryName = _("Paradoja"),
        .height = 35,
        .weight = 2800,
        .description = COMPOUND_STRING(
            "Esta criatura feroz está envuelta en\n"
            "misterio. Está nombrada en honor a un\n"
            "monstruo acuático mencionado en un\n"
            "antiguo diario."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WalkingWake,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WalkingWake,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WalkingWake,
        .shinyPalette = gMonShinyPalette_WalkingWake,
        .iconSprite = gMonIcon_WalkingWake,
        .iconPalIndex = 2,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(WalkingWake)
        OVERWORLD(
            sPicTable_WalkingWake,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WalkingWake,
            gShinyOverworldPalette_WalkingWake
        )
        .isParadox = TRUE,
        .levelUpLearnset = sWalkingWakeLevelUpLearnset,
        .teachableLearnset = sWalkingWakeTeachableLearnset,
    },
#endif //P_FAMILY_WALKING_WAKE

#if P_FAMILY_IRON_LEAVES
    [SPECIES_IRON_LEAVES] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 88,
        .baseSpeed     = 104,
        .baseSpAttack  = 70,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_GRASS, TYPE_PSYCHIC),
        .catchRate = 5,
        .expYield = 295,
        .evYield_Attack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ferroverdor"),
        .cryId = CRY_IRON_LEAVES,
        .natDexNum = NATIONAL_DEX_IRON_LEAVES,
        .categoryName = _("Paradoja"),
        .height = 15,
        .weight = 1250,
        .description = COMPOUND_STRING(
            "Según los pocos testimonios presenciales\n"
            "que hay, usaba sus cuchillas brillantes\n"
            "para cortar en juliana grandes árboles\n"
            "y montañas."),        
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IronLeaves,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronLeaves,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronLeaves,
        .shinyPalette = gMonShinyPalette_IronLeaves,
        .iconSprite = gMonIcon_IronLeaves,
        .iconPalIndex = 1,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(IronLeaves)
        OVERWORLD(
            sPicTable_IronLeaves,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronLeaves,
            gShinyOverworldPalette_IronLeaves
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronLeavesLevelUpLearnset,
        .teachableLearnset = sIronLeavesTeachableLearnset,
    },
#endif //P_FAMILY_IRON_LEAVES

#if P_FAMILY_POLTCHAGEIST
    [SPECIES_POLTCHAGEIST_COUNTERFEIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 74,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 120,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Poltchageist"),
        .cryId = CRY_POLTCHAGEIST,
        .natDexNum = NATIONAL_DEX_POLTCHAGEIST,
        .categoryName = _("Matcha"),
        .height = 1,
        .weight = 11,
        .description = COMPOUND_STRING(
            "Los remordimientos de un maestro de\n"
            "ceremonias del té que murió antes de\n"
            "perfeccionar su arte quedaron en algún\n"
            "matcha y se convirtieron en un Pokémon."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poltchageist,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Poltchageist,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Poltchageist,
        .shinyPalette = gMonShinyPalette_Poltchageist,
        .iconSprite = gMonIcon_Poltchageist,
        .iconPalIndex = 1,
        SHADOW(-1, 14, SHADOW_SIZE_S)
        FOOTPRINT(Poltchageist)
        OVERWORLD(
            sPicTable_Poltchageist,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Poltchageist,
            gShinyOverworldPalette_Poltchageist
        )
        .levelUpLearnset = sPoltchageistLevelUpLearnset,
        .teachableLearnset = sPoltchageistTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_UNREMARKABLE_TEACUP, SPECIES_SINISTCHA_UNREMARKABLE}),
        .formSpeciesIdTable = sPoltchageistFormSpeciesIdTable,
    },
    [SPECIES_POLTCHAGEIST_ARTISAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 74,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 120,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Poltchageist"),
        .cryId = CRY_POLTCHAGEIST,
        .natDexNum = NATIONAL_DEX_POLTCHAGEIST,
        .categoryName = _("Matcha"),
        .height = 1,
        .weight = 11,
        .description = COMPOUND_STRING(
            "Se ha establecido en una caja de té muy\n"
            "cara. Se necesita un experto para\n"
            "distinguir las cajas de té\n"
            "caras de las baratas."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poltchageist,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Poltchageist,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Poltchageist,
        .shinyPalette = gMonShinyPalette_Poltchageist,
        .iconSprite = gMonIcon_Poltchageist,
        .iconPalIndex = 1,
        SHADOW(-1, 14, SHADOW_SIZE_S)
        FOOTPRINT(Poltchageist)
        OVERWORLD(
            sPicTable_Poltchageist,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Poltchageist,
            gShinyOverworldPalette_Poltchageist
        )
        .levelUpLearnset = sPoltchageistLevelUpLearnset,
        .teachableLearnset = sPoltchageistTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MASTERPIECE_TEACUP, SPECIES_SINISTCHA_MASTERPIECE}),
        .formSpeciesIdTable = sPoltchageistFormSpeciesIdTable,
    },

    [SPECIES_SINISTCHA_UNREMARKABLE] =
    {
        .baseHP        = 71,
        .baseAttack    = 60,
        .baseDefense   = 106,
        .baseSpeed     = 70,
        .baseSpAttack  = 121,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 60,
        .expYield = 178,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sinistcha"),
        .cryId = CRY_SINISTCHA,
        .natDexNum = NATIONAL_DEX_SINISTCHA,
        .categoryName = _("Matcha"),
        .height = 2,
        .weight = 22,
        .description = COMPOUND_STRING(
            "Finge ser té, tratando de engañar a\n"
            "la gente para que lo beba y así pueda\n"
            "drenar su fuerza vital. Por lo general, su\n"
            "estratagema no tiene éxito."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sinistcha,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Sinistcha,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sinistcha,
        .shinyPalette = gMonShinyPalette_Sinistcha,
        .iconSprite = gMonIcon_Sinistcha,
        .iconPalIndex = 1,
        SHADOW(0, 11, SHADOW_SIZE_M)
        FOOTPRINT(Sinistcha)
        OVERWORLD(
            sPicTable_Sinistcha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Sinistcha,
            gShinyOverworldPalette_Sinistcha
        )
        .levelUpLearnset = sSinistchaLevelUpLearnset,
        .teachableLearnset = sSinistchaTeachableLearnset,
        .formSpeciesIdTable = sSinistchaFormSpeciesIdTable,
    },
    [SPECIES_SINISTCHA_MASTERPIECE] =
    {
        .baseHP        = 71,
        .baseAttack    = 60,
        .baseDefense   = 106,
        .baseSpeed     = 70,
        .baseSpAttack  = 121,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 60,
        .expYield = 178,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HOSPITALITY, ABILITY_NONE, ABILITY_HEATPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sinistcha"),
        .cryId = CRY_SINISTCHA,
        .natDexNum = NATIONAL_DEX_SINISTCHA,
        .categoryName = _("Matcha"),
        .height = 2,
        .weight = 22,
        .description = COMPOUND_STRING(
            "Cuanto más revuelve con el batidor\n"
            "de té en su cabeza, más energía acumula.\n"
            "Hace esto para prepararse para la batalla."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sinistcha,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Sinistcha,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sinistcha,
        .shinyPalette = gMonShinyPalette_Sinistcha,
        .iconSprite = gMonIcon_Sinistcha,
        .iconPalIndex = 1,
        SHADOW(0, 11, SHADOW_SIZE_M)
        FOOTPRINT(Sinistcha)
        OVERWORLD(
            sPicTable_Sinistcha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Sinistcha,
            gShinyOverworldPalette_Sinistcha
        )
        .levelUpLearnset = sSinistchaLevelUpLearnset,
        .teachableLearnset = sSinistchaTeachableLearnset,
        .formSpeciesIdTable = sSinistchaFormSpeciesIdTable,
    },
#endif //P_FAMILY_POLTCHAGEIST

#if P_FAMILY_OKIDOGI
    [SPECIES_OKIDOGI] =
    {
        .baseHP        = 88,
        .baseAttack    = 128,
        .baseDefense   = 115,
        .baseSpeed     = 80,
        .baseSpAttack  = 58,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_POISON, TYPE_FIGHTING),
        .catchRate = 3,
        .expYield = 278,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TOXIC_CHAIN, ABILITY_NONE, ABILITY_GUARD_DOG },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Okidogi"),
        .cryId = CRY_OKIDOGI,
        .natDexNum = NATIONAL_DEX_OKIDOGI,
        .categoryName = _("Esbirro"),
        .height = 18,
        .weight = 920,
        .description = COMPOUND_STRING(
            "Después de que todos sus músculos fueran\n"
            "estimulados por la cadena de su cuello,\n"
            "Okidogi se transformó y adquirió una\n"
            "complexión poderosa."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Okidogi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Okidogi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Okidogi,
        .shinyPalette = gMonShinyPalette_Okidogi,
        .iconSprite = gMonIcon_Okidogi,
        .iconPalIndex = 1,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Okidogi)
        OVERWORLD(
            sPicTable_Okidogi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Okidogi,
            gShinyOverworldPalette_Okidogi
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sOkidogiLevelUpLearnset,
        .teachableLearnset = sOkidogiTeachableLearnset,
    },
#endif //P_FAMILY_OKIDOGI

#if P_FAMILY_MUNKIDORI
    [SPECIES_MUNKIDORI] =
    {
        .baseHP        = 88,
        .baseAttack    = 75,
        .baseDefense   = 66,
        .baseSpeed     = 106,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_POISON, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = 278,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TOXIC_CHAIN, ABILITY_NONE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Munkidori"),
        .cryId = CRY_MUNKIDORI,
        .natDexNum = NATIONAL_DEX_MUNKIDORI,
        .categoryName = _("Esbirro"),
        .height = 10,
        .weight = 122,
        .description = COMPOUND_STRING(
            "La cadena está hecha de toxinas que\n"
            "mejoran las capacidades. Estimuló el\n"
            "cerebro de Munkidori y provocó el\n"
            "nacimiento de sus poderes psíquicos."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Munkidori,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Munkidori,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Munkidori,
        .shinyPalette = gMonShinyPalette_Munkidori,
        .iconSprite = gMonIcon_Munkidori,
        .iconPalIndex = 0,
        SHADOW(1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Munkidori)
        OVERWORLD(
            sPicTable_Munkidori,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Munkidori,
            gShinyOverworldPalette_Munkidori
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMunkidoriLevelUpLearnset,
        .teachableLearnset = sMunkidoriTeachableLearnset,
    },
#endif //P_FAMILY_MUNKIDORI

#if P_FAMILY_FEZANDIPITI
    [SPECIES_FEZANDIPITI] =
    {
        .baseHP        = 88,
        .baseAttack    = 91,
        .baseDefense   = 82,
        .baseSpeed     = 99,
        .baseSpAttack  = 70,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_POISON, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = 278,
        .evYield_SpDefense = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TOXIC_CHAIN, ABILITY_NONE, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Fezandipiti"),
        .cryId = CRY_FEZANDIPITI,
        .natDexNum = NATIONAL_DEX_FEZANDIPITI,
        .categoryName = _("Esbirro"),
        .height = 14,
        .weight = 301,
        .description = COMPOUND_STRING(
            "Fezandipiti debe su aspecto hermoso y\n"
            "su encantadora voz a los estimulantes\n"
            "tóxicos que emanan de la cadena enrollada\n"
            "alrededor de su cuerpo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fezandipiti,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fezandipiti,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Fezandipiti,
        .shinyPalette = gMonShinyPalette_Fezandipiti,
        .iconSprite = gMonIcon_Fezandipiti,
        .iconPalIndex = 0,
        SHADOW(-3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Fezandipiti)
        OVERWORLD(
            sPicTable_Fezandipiti,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fezandipiti,
            gShinyOverworldPalette_Fezandipiti
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sFezandipitiLevelUpLearnset,
        .teachableLearnset = sFezandipitiTeachableLearnset,
    },
#endif //P_FAMILY_FEZANDIPITI

#if P_FAMILY_OGERPON
#define OGERPON_SPECIES_INFO(Form1, Form2, type, ability, color, frontYOffset, backYOffset, iconpalette, isTeraform)    \
    {                                                                                                                   \
        .baseHP        = 80,                                                                                            \
        .baseAttack    = 120,                                                                                           \
        .baseDefense   = 84,                                                                                            \
        .baseSpeed     = 110,                                                                                           \
        .baseSpAttack  = 60,                                                                                            \
        .baseSpDefense = 96,                                                                                            \
        .types = MON_TYPES(TYPE_GRASS, type),                                                                           \
        .forceTeraType = type,                                                                                          \
        .catchRate = 5,                                                                                                 \
        .expYield = 275,                                                                                                \
        .evYield_Attack = 3,                                                                                            \
        .genderRatio = MON_FEMALE,                                                                                      \
        .eggCycles = 10,                                                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                                              \
        .growthRate = GROWTH_SLOW,                                                                                      \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                                                      \
        .abilities = { ability, ABILITY_NONE },                                                                         \
        .bodyColor = color,                                                                                             \
        .speciesName = _("Ogerpon"),                                                                                    \
        .cryId = CRY_OGERPON,                                                                                           \
        .natDexNum = NATIONAL_DEX_OGERPON,                                                                              \
        .categoryName = _("Mask"),                                                                                      \
        .height = 12,                                                                                                   \
        .weight = 398,                                                                                                  \
        .description = gOgerpon##Form1##MaskPokedexText,                                                                \
        .pokemonScale = 356,                                                                                            \
        .pokemonOffset = 17,                                                                                            \
        .trainerScale = 256,                                                                                            \
        .trainerOffset = 0,                                                                                             \
        .frontPic = gMonFrontPic_Ogerpon##Form2,                                                                        \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                                                        \
        .frontPicYOffset = frontYOffset,                                                                                \
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,                                                               \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                                                    \
        .backPic = gMonBackPic_Ogerpon##Form2,                                                                          \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                                                         \
        .backPicYOffset = backYOffset,                                                                                  \
        /*.backAnimId = BACK_ANIM_NONE,*/                                                                               \
        .palette = gMonPalette_Ogerpon##Form2,                                                                          \
        .shinyPalette = gMonShinyPalette_Ogerpon##Form2,                                                                \
        .iconSprite = gMonIcon_Ogerpon##Form1,                                                                          \
        .iconPalIndex = iconpalette,                                                                                    \
        SHADOW(7, 13, SHADOW_SIZE_L)                                                                                    \
        FOOTPRINT(Ogerpon)                                                                                              \
        OVERWORLD(                                                                                                      \
            sPicTable_Ogerpon##Form2,                                                                                   \
            SIZE_32x32,                                                                                                 \
            SHADOW_SIZE_M,                                                                                              \
            TRACKS_FOOT,                                                                                                \
            sAnimTable_Following,                                                                                       \
            gOverworldPalette_Ogerpon##Form2,                                                                           \
            gShinyOverworldPalette_Ogerpon##Form2                                                                       \
        )                                                                                                               \
        .levelUpLearnset = sOgerponLevelUpLearnset,                                                                     \
        .teachableLearnset = sOgerponTeachableLearnset,                                                                 \
        .formSpeciesIdTable = sOgerponFormSpeciesIdTable,                                                               \
        .formChangeTable = sOgerponFormChangeTable,                                                                     \
        .isLegendary = TRUE,                                                                                            \
        .isTeraForm = isTeraform,                                                                                       \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,                                                                   \
    }

    [SPECIES_OGERPON_TEAL]             = OGERPON_SPECIES_INFO(Teal,        Teal,            TYPE_GRASS, ABILITY_DEFIANT,                        BODY_COLOR_GREEN, 1, 6, 1, FALSE),
    [SPECIES_OGERPON_WELLSPRING]       = OGERPON_SPECIES_INFO(Wellspring,  Wellspring,      TYPE_WATER, ABILITY_WATER_ABSORB,                   BODY_COLOR_BLUE,  1, 6, 0, FALSE),
    [SPECIES_OGERPON_HEARTHFLAME]      = OGERPON_SPECIES_INFO(Hearthflame, Hearthflame,     TYPE_FIRE,  ABILITY_MOLD_BREAKER,                   BODY_COLOR_RED,   1, 6, 0, FALSE),
    [SPECIES_OGERPON_CORNERSTONE]      = OGERPON_SPECIES_INFO(Cornerstone, Cornerstone,     TYPE_ROCK,  ABILITY_STURDY,                         BODY_COLOR_GRAY,  1, 6, 0, FALSE),
#if P_TERA_FORMS
    [SPECIES_OGERPON_TEAL_TERA]        = OGERPON_SPECIES_INFO(Teal,        TealTera,        TYPE_GRASS, ABILITY_EMBODY_ASPECT_TEAL_MASK,        BODY_COLOR_GREEN, 0, 0, 1, TRUE),
    [SPECIES_OGERPON_WELLSPRING_TERA]  = OGERPON_SPECIES_INFO(Wellspring,  WellspringTera,  TYPE_WATER, ABILITY_EMBODY_ASPECT_WELLSPRING_MASK,  BODY_COLOR_BLUE,  0, 0, 0, TRUE),
    [SPECIES_OGERPON_HEARTHFLAME_TERA] = OGERPON_SPECIES_INFO(Hearthflame, HearthflameTera, TYPE_FIRE,  ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK, BODY_COLOR_RED,   0, 0, 0, TRUE),
    [SPECIES_OGERPON_CORNERSTONE_TERA] = OGERPON_SPECIES_INFO(Cornerstone, CornerstoneTera, TYPE_ROCK,  ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK, BODY_COLOR_GRAY,  0, 0, 0, TRUE),
#endif //P_TERA_FORMS

#endif //P_FAMILY_OGERPON

#if P_FAMILY_GOUGING_FIRE
    [SPECIES_GOUGING_FIRE] =
    {
        .baseHP        = 105,
        .baseAttack    = 115,
        .baseDefense   = 121,
        .baseSpeed     = 91,
        .baseSpAttack  = 65,
        .baseSpDefense = 93,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .catchRate = 10,
        .expYield = 295,
        .evYield_Defense = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Flamariete"),
        .cryId = CRY_GOUGING_FIRE,
        .natDexNum = NATIONAL_DEX_GOUGING_FIRE,
        .categoryName = _("Paradoja"),
        .height = 35,
        .weight = 5900,
        .description = COMPOUND_STRING(
            "Hay escasos informes de\n"
            "avistamientos de esta criatura.\n"
            "Un breve vídeo muestra cómo\n"
            "arrasa y emite columnas de llamas."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_GougingFire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GougingFire,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GougingFire,
        .shinyPalette = gMonShinyPalette_GougingFire,
        .iconSprite = gMonIcon_GougingFire,
        .iconPalIndex = 5,
        SHADOW(-1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(GougingFire)
        OVERWORLD(
            sPicTable_GougingFire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GougingFire,
            gShinyOverworldPalette_GougingFire
        )
        .isParadox = TRUE,
        .levelUpLearnset = sGougingFireLevelUpLearnset,
        .teachableLearnset = sGougingFireTeachableLearnset,
    },
#endif //P_FAMILY_GOUGING_FIRE

#if P_FAMILY_RAGING_BOLT
    [SPECIES_RAGING_BOLT] =
    {
        .baseHP        = 125,
        .baseAttack    = 73,
        .baseDefense   = 91,
        .baseSpeed     = 75,
        .baseSpAttack  = 137,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .catchRate = 10,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PROTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Electrofuria"),
        .cryId = CRY_RAGING_BOLT,
        .natDexNum = NATIONAL_DEX_RAGING_BOLT,
        .categoryName = _("Paradoja"),
        .height = 52,
        .weight = 4800,
        .description = COMPOUND_STRING(
            "Tiene un parecido con un Pokémon que se\n"
            "convirtió en tema candente durante un\n"
            "corto tiempo después de que una revista\n"
            "lo promoviera como ancestro de Raikou."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_RagingBolt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RagingBolt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RagingBolt,
        .shinyPalette = gMonShinyPalette_RagingBolt,
        .iconSprite = gMonIcon_RagingBolt,
        .iconPalIndex = 2,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(RagingBolt)
        OVERWORLD(
            sPicTable_RagingBolt,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RagingBolt,
            gShinyOverworldPalette_RagingBolt
        )
        .isParadox = TRUE,
        .levelUpLearnset = sRagingBoltLevelUpLearnset,
        .teachableLearnset = sRagingBoltTeachableLearnset,
    },
#endif //P_FAMILY_RAGING_BOLT

#if P_FAMILY_IRON_BOULDER
    [SPECIES_IRON_BOULDER] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 124,
        .baseSpAttack  = 68,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_ROCK, TYPE_PSYCHIC),
        .catchRate = 10,
        .expYield = 295,
        .evYield_Speed = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ferromole"),
        .cryId = CRY_IRON_BOULDER,
        .natDexNum = NATIONAL_DEX_IRON_BOULDER,
        .categoryName = _("Paradoja"),
        .height = 15,
        .weight = 1625,
        .description = COMPOUND_STRING(
            "Fue nombrado según un objeto misterioso\n"
            "registrado en un libro antiguo.\n"
            "Su cuerpo parece ser metálico."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 336,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_IronBoulder,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronBoulder,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronBoulder,
        .shinyPalette = gMonShinyPalette_IronBoulder,
        .iconSprite = gMonIcon_IronBoulder,
        .iconPalIndex = 5,
        SHADOW(4, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(IronBoulder)
        OVERWORLD(
            sPicTable_IronBoulder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronBoulder,
            gShinyOverworldPalette_IronBoulder
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronBoulderLevelUpLearnset,
        .teachableLearnset = sIronBoulderTeachableLearnset,
    },
#endif //P_FAMILY_IRON_BOULDER

#if P_FAMILY_IRON_CROWN
    [SPECIES_IRON_CROWN] =
    {
        .baseHP        = 90,
        .baseAttack    = 72,
        .baseDefense   = 100,
        .baseSpeed     = 98,
        .baseSpAttack  = 122,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 10,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_BOOSTER_ENERGY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_QUARK_DRIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ferrotesta"),
        .cryId = CRY_IRON_CROWN,
        .natDexNum = NATIONAL_DEX_IRON_CROWN,
        .categoryName = _("Paradoja"),
        .height = 16,
        .weight = 1560,
        .description = COMPOUND_STRING(
            "Se asemeja a un objeto misterioso\n"
            "presentado en una revista paranormal\n"
            "como un arma de última generación\n"
            "con forma de Cobalion."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_IronCrown,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronCrown,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IronCrown,
        .shinyPalette = gMonShinyPalette_IronCrown,
        .iconSprite = gMonIcon_IronCrown,
        .iconPalIndex = 3,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(IronCrown)
        OVERWORLD(
            sPicTable_IronCrown,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronCrown,
            gShinyOverworldPalette_IronCrown
        )
        .isParadox = TRUE,
        .levelUpLearnset = sIronCrownLevelUpLearnset,
        .teachableLearnset = sIronCrownTeachableLearnset,
    },
#endif //P_FAMILY_IRON_CROWN

#if P_FAMILY_TERAPAGOS
    [SPECIES_TERAPAGOS_NORMAL] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 60,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .forceTeraType = TYPE_STELLAR,
        .catchRate = 255,
        .expYield = 90,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERA_SHIFT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Terapagos"),
        .cryId = CRY_TERAPAGOS,
        .natDexNum = NATIONAL_DEX_TERAPAGOS,
        .categoryName = _("Teracristal"),
        .height = 2,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Terapagos se protege utilizando su poder\n"
            "para transformar energía en cristales\n"
            "duros. Es la fuente del fenómeno Terastal."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_TerapagosNormal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TerapagosNormal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TerapagosNormal,
        .shinyPalette = gMonShinyPalette_TerapagosNormal,
        .iconSprite = gMonIcon_TerapagosNormal,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(TerapagosNormal)
        OVERWORLD(
            sPicTable_TerapagosNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TerapagosNormal,
            gShinyOverworldPalette_TerapagosNormal
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTerapagosLevelUpLearnset,
        .teachableLearnset = sTerapagosTeachableLearnset,
        .formSpeciesIdTable = sTerapagosFormSpeciesIdTable,
        .formChangeTable = sTerapagosFormChangeTable,
    },

    [SPECIES_TERAPAGOS_TERASTAL] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 110,
        .baseSpeed     = 85,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .forceTeraType = TYPE_STELLAR,
        .catchRate = 255,
        .expYield = 120,
        .evYield_Defense = 2,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERA_SHELL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Terapagos"),
        .cryId = CRY_TERAPAGOS,
        .natDexNum = NATIONAL_DEX_TERAPAGOS,
        .categoryName = _("Teracristal"),
        .height = 3,
        .weight = 160,
        .description = COMPOUND_STRING(
            "La concha es energía cristalizada\n"
            "de Terastal. Cuando recibe un ataque,\n"
            "esta concha absorbe la energía del ataque\n"
            "y se la transfiere a Terapagos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_TerapagosTerastal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_TerapagosTerastal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TerapagosTerastal,
        .shinyPalette = gMonShinyPalette_TerapagosTerastal,
        .iconSprite = gMonIcon_TerapagosTerastal,
        .iconPalIndex = 0,
        SHADOW(-4, 8, SHADOW_SIZE_L)
        FOOTPRINT(TerapagosTerastal)
        OVERWORLD(
            sPicTable_TerapagosTerastal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TerapagosTerastal,
            gShinyOverworldPalette_TerapagosTerastal
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTerapagosLevelUpLearnset,
        .teachableLearnset = sTerapagosTeachableLearnset,
        .formSpeciesIdTable = sTerapagosFormSpeciesIdTable,
        .formChangeTable = sTerapagosFormChangeTable,
    },

    [SPECIES_TERAPAGOS_STELLAR] =
    {
        .baseHP        = 160,
        .baseAttack    = 105,
        .baseDefense   = 110,
        .baseSpeed     = 85,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .forceTeraType = TYPE_STELLAR,
        .catchRate = 255,
        .expYield = 140,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERAFORM_ZERO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Terapagos"),
        .cryId = CRY_TERAPAGOS,
        .natDexNum = NATIONAL_DEX_TERAPAGOS,
        .categoryName = _("Teracristal"),
        .height = 17,
        .weight = 770,
        .description = COMPOUND_STRING(
            "Un viejo diario de expedición describe la\n"
            "visión de este Pokémon enterrado en las\n"
            "profundidades de la tierra como un\n"
            "planeta flotando en el espacio."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_TerapagosStellar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TerapagosStellar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TerapagosStellar,
        .shinyPalette = gMonShinyPalette_TerapagosStellar,
        .iconSprite = gMonIcon_TerapagosStellar,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_L)
        FOOTPRINT(TerapagosStellar)
        .isLegendary = TRUE,
        .isTeraForm = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTerapagosLevelUpLearnset,
        .teachableLearnset = sTerapagosTeachableLearnset,
        .formSpeciesIdTable = sTerapagosFormSpeciesIdTable,
        .formChangeTable = sTerapagosFormChangeTable,
    },
#endif //P_FAMILY_TERAPAGOS

#if P_FAMILY_PECHARUNT
    [SPECIES_PECHARUNT] =
    {
        .baseHP        = 88,
        .baseAttack    = 88,
        .baseDefense   = 160,
        .baseSpeed     = 88,
        .baseSpAttack  = 88,
        .baseSpDefense = 88,
        .types = MON_TYPES(TYPE_POISON, TYPE_GHOST),
        .catchRate = 3,
        .expYield = 300,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POISON_PUPPETEER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Pecharunt"),
        .cryId = CRY_PECHARUNT,
        .natDexNum = NATIONAL_DEX_PECHARUNT,
        .categoryName = _("Controlador"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Hace comer a su objetivo un mochi\n"
            "tóxico que saca a relucir todo su\n"
            "potencial y ambición, para después\n"
            "controlarlo con sus cadenas."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Pecharunt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pecharunt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pecharunt,
        .shinyPalette = gMonShinyPalette_Pecharunt,
        .iconSprite = gMonIcon_Pecharunt,
        .iconPalIndex = 0,
        SHADOW(2, 1, SHADOW_SIZE_L)
        FOOTPRINT(Pecharunt)
        OVERWORLD(
            sPicTable_Pecharunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pecharunt,
            gShinyOverworldPalette_Pecharunt
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPecharuntLevelUpLearnset,
        .teachableLearnset = sPecharuntTeachableLearnset,
    },
#endif //P_FAMILY_PECHARUNT

#ifdef __INTELLISENSE__
};
#endif
