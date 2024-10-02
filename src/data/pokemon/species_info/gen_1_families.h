#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen1[] =
{
#endif

#if P_FAMILY_BULBASAUR
    [SPECIES_BULBASAUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 49,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bulbasaur"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_BULBASAUR,
        .categoryName = _("Semilla"),
        .height = 7,
        .weight = 69,
        .description = COMPOUND_STRING(
            "A Bulbasaur es fácil verle echándose\n"
            "una siesta al sol. La semilla que tiene\n"
            "en el lomo va creciendo cada vez más\n"
            "a medida que absorbe los rayos del sol."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bulbasaur,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Bulbasaur,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Bulbasaur,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Bulbasaur,
        .shinyPalette = gMonShinyPalette_Bulbasaur,
        .iconSprite = gMonIcon_Bulbasaur,
        .iconPalIndex = 4,
        FOOTPRINT(Bulbasaur)
        OVERWORLD(
            sPicTable_Bulbasaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bulbasaur,
            gShinyOverworldPalette_Bulbasaur
        )
        .levelUpLearnset = sBulbasaurLevelUpLearnset,
        .teachableLearnset = sBulbasaurTeachableLearnset,
        .eggMoveLearnset = sBulbasaurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_IVYSAUR}),
    },

    [SPECIES_IVYSAUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 63,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ivysaur"),
        .cryId = CRY_IVYSAUR,
        .natDexNum = NATIONAL_DEX_IVYSAUR,
        .categoryName = _("Semilla"),
        .height = 10,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Soporta el peso del bulbo gracias a sus\n"
            "fuertes patas y a su tronco. Si pasa\n"
            "mucho tiempo al sol, el bulbo se\n"
            "convierte en una enorme flor."),
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ivysaur,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Ivysaur,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Ivysaur,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Ivysaur,
        .shinyPalette = gMonShinyPalette_Ivysaur,
        .iconSprite = gMonIcon_Ivysaur,
        .iconPalIndex = 4,
        FOOTPRINT(Ivysaur)
        OVERWORLD(
            sPicTable_Ivysaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ivysaur,
            gShinyOverworldPalette_Ivysaur
        )
        .levelUpLearnset = sIvysaurLevelUpLearnset,
        .teachableLearnset = sIvysaurTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_VENUSAUR}),
    },

    [SPECIES_VENUSAUR] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 208,
    #endif
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Venusaur"),
        .cryId = CRY_VENUSAUR,
        .natDexNum = NATIONAL_DEX_VENUSAUR,
        .categoryName = _("Semilla"),
        .height = 20,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "Según parece, la flor de Venusaur\n"
            "adquiere unos colores muy vivos con una\n"
            "buena nutrición y mucho sol. El aroma\n"
            "delicado de esta flor calma los ánimos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Venusaur,
        .frontPicFemale = gMonFrontPic_VenusaurF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Venusaur,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Venusaur,
        .backPicFemale = gMonBackPic_VenusaurF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Venusaur,
        .shinyPalette = gMonShinyPalette_Venusaur,
        .iconSprite = gMonIcon_Venusaur,
        .iconPalIndex = 4,
        FOOTPRINT(Venusaur)
        OVERWORLD(
            sPicTable_Venusaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venusaur,
            gShinyOverworldPalette_Venusaur
        )
        .levelUpLearnset = sVenusaurLevelUpLearnset,
        .teachableLearnset = sVenusaurTeachableLearnset,
        .formSpeciesIdTable = sVenusaurFormSpeciesIdTable,
        .formChangeTable = sVenusaurFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_VENUSAUR_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 313 : 281,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_THICK_FAT, ABILITY_THICK_FAT, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Venusaur"),
        .cryId = CRY_VENUSAUR_MEGA,
        .natDexNum = NATIONAL_DEX_VENUSAUR,
        .categoryName = _("Semilla"),
        .height = 24,
        .weight = 1555,
        .description = COMPOUND_STRING(
            "Para apoyar su flor, la cual\n"
            "ha crecido más grande debido a\n"
            "la Megaevolución, su espalda\n" 
            "y patas se han fortalecido."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_VenusaurMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_VenusaurMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_VenusaurMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_VenusaurMega,
        .shinyPalette = gMonShinyPalette_VenusaurMega,
        .iconSprite = gMonIcon_VenusaurMega,
        .iconPalIndex = 4,
        FOOTPRINT(Venusaur)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sVenusaurLevelUpLearnset,
        .teachableLearnset = sVenusaurTeachableLearnset,
        .formSpeciesIdTable = sVenusaurFormSpeciesIdTable,
        .formChangeTable = sVenusaurFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_VENUSAUR_GIGANTAMAX] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
        .expYield = 236,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Venusaur"),
        .cryId = CRY_VENUSAUR,
        .natDexNum = NATIONAL_DEX_VENUSAUR,
        .categoryName = _("Semilla"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Escupe grandes cantidades de polen\n"
            "como un volcán que puede provocar\n"
            "desmayos. Posee 2 gruesas enredaderas\n"
            "que pueden derribar edificios de 10 pisos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_VenusaurGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_VenusaurGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_VenusaurGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_VenusaurGigantamax,
        .shinyPalette = gMonShinyPalette_VenusaurGigantamax,
        .iconSprite = gMonIcon_VenusaurGigantamax,
        .iconPalIndex = 0,
        FOOTPRINT(Venusaur)
        .isGigantamax = TRUE,
        .levelUpLearnset = sVenusaurLevelUpLearnset,
        .teachableLearnset = sVenusaurTeachableLearnset,
        .formSpeciesIdTable = sVenusaurFormSpeciesIdTable,
        .formChangeTable = sVenusaurFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
    [SPECIES_CHARMANDER] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charmander"),
        .cryId = CRY_CHARMANDER,
        .natDexNum = NATIONAL_DEX_CHARMANDER,
        .categoryName = _("Lagarto"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "La llama que tiene en la punta de la\n"
            "cola arde según sus sentimientos.\n"
            "Llamea levemente cuando está alegre y\n"
            "arde con fuerza cuando está enfadado."),
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Charmander,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Charmander,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Charmander,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Charmander,
        .shinyPalette = gMonShinyPalette_Charmander,
        .iconSprite = gMonIcon_Charmander,
        .iconPalIndex = 0,
        FOOTPRINT(Charmander)
        OVERWORLD(
            sPicTable_Charmander,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charmander,
            gShinyOverworldPalette_Charmander
        )
        .levelUpLearnset = sCharmanderLevelUpLearnset,
        .teachableLearnset = sCharmanderTeachableLearnset,
        .eggMoveLearnset = sCharmanderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CHARMELEON}),
    },

    [SPECIES_CHARMELEON] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charmeleon"),
        .cryId = CRY_CHARMELEON,
        .natDexNum = NATIONAL_DEX_CHARMELEON,
        .categoryName = _("Llama"),
        .height = 11,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Acaba sin piedad con su enemigo usando\n"
            "sus afiladas garras. Ante rivales\n"
            "fuertes se vuelve agresivo y su llama\n"
            "arde con un tono azulado."),
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Charmeleon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Charmeleon,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Charmeleon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Charmeleon,
        .shinyPalette = gMonShinyPalette_Charmeleon,
        .iconSprite = gMonIcon_Charmeleon,
        .iconPalIndex = 0,
        FOOTPRINT(Charmeleon)
        OVERWORLD(
            sPicTable_Charmeleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charmeleon,
            gShinyOverworldPalette_Charmeleon
        )
        .levelUpLearnset = sCharmeleonLevelUpLearnset,
        .teachableLearnset = sCharmeleonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CHARIZARD}),
    },

    [SPECIES_CHARIZARD] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 267,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 240,
    #else
        .expYield = 209,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charizard"),
        .cryId = CRY_CHARIZARD,
        .natDexNum = NATIONAL_DEX_CHARIZARD,
        .categoryName = _("Llama"),
        .height = 17,
        .weight = 905,
        .description = COMPOUND_STRING(
            "Charizard va volando en busca de\n"
            "rivales fuertes. Echa fuego por la boca\n"
            "y es capaz de derretirlo todo.\n"
            "Se contiene contra enemigos débiles."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Charizard,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Charizard,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Charizard,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Charizard,
        .shinyPalette = gMonShinyPalette_Charizard,
        .iconSprite = gMonIcon_Charizard,
        .iconPalIndex = 0,
        FOOTPRINT(Charizard)
        OVERWORLD(
            sPicTable_Charizard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charizard,
            gShinyOverworldPalette_Charizard
        )
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,
        .formChangeTable = sCharizardFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .baseHP        = 78,
        .baseAttack    = 130,
        .baseDefense   = 111,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 317 : 285,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Charizard"),
        .cryId = CRY_CHARIZARD_MEGA_X,
        .natDexNum = NATIONAL_DEX_CHARIZARD,
        .categoryName = _("Llama"),
        .height = 17,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "El poder abrumador que llena todo su\n"
            "cuerpo lo hace volverse negro\n"
            "y crea intensas llamas azules."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_CharizardMegaX,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CharizardMegaX,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_CharizardMegaX,
        .shinyPalette = gMonShinyPalette_CharizardMegaX,
        .iconSprite = gMonIcon_CharizardMegaX,
        .iconPalIndex = 0,
        FOOTPRINT(Charizard)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,
        .formChangeTable = sCharizardFormChangeTable,
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .baseHP        = 78,
        .baseAttack    = 104,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 317 : 285,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DROUGHT, ABILITY_DROUGHT, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charizard"),
        .cryId = CRY_CHARIZARD_MEGA_Y,
        .natDexNum = NATIONAL_DEX_CHARIZARD,
        .categoryName = _("Llama"),
        .height = 17,
        .weight = 1005,
        .description = COMPOUND_STRING(
            "Su vínculo con su Entrenador es la fuente\n"
            "de su poder. Posee una velocidad y\n"
            "maniobrabilidad mayores que las de un\n"
            "avión de combate."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_CharizardMegaY,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CharizardMegaY,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_CharizardMegaY,
        .shinyPalette = gMonShinyPalette_CharizardMegaY,
        .iconSprite = gMonIcon_CharizardMegaY,
        .iconPalIndex = 0,
        FOOTPRINT(Charizard)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,
        .formChangeTable = sCharizardFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CHARIZARD_GIGANTAMAX] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 240,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Charizard"),
        .cryId = CRY_CHARIZARD,
        .natDexNum = NATIONAL_DEX_CHARIZARD,
        .categoryName = _("Llama"),
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING(
            "La llama dentro de su cuerpo arde\n"
            "más caliente que 3.600 ºC.\n"
            "Cuando Charizard ruge, esa\n"
            "temperatura sube aún más alto."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_CharizardGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CharizardGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CharizardGigantamax,
        .shinyPalette = gMonShinyPalette_CharizardGigantamax,
        .iconSprite = gMonIcon_CharizardGigantamax,
        .iconPalIndex = 0,
        FOOTPRINT(Charizard)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,
        .formChangeTable = sCharizardFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
    [SPECIES_SQUIRTLE] =
    {
        .baseHP        = 44,
        .baseAttack    = 48,
        .baseDefense   = 65,
        .baseSpeed     = 43,
        .baseSpAttack  = 50,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 66,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Squirtle"),
        .cryId = CRY_SQUIRTLE,
        .natDexNum = NATIONAL_DEX_SQUIRTLE,
        .categoryName = _("Tortuguita"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "El caparazón de Squirtle no solo le\n"
            "protege; su forma redondeada y sus\n"
            "hendiduras reducen su resistencia al\n"
            "agua y le permiten nadar más rápido."),
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squirtle,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Squirtle,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Squirtle,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Squirtle,
        .shinyPalette = gMonShinyPalette_Squirtle,
        .iconSprite = gMonIcon_Squirtle,
        .iconPalIndex = 0,
        FOOTPRINT(Squirtle)
        OVERWORLD(
            sPicTable_Squirtle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Squirtle,
            gShinyOverworldPalette_Squirtle
        )
        .levelUpLearnset = sSquirtleLevelUpLearnset,
        .teachableLearnset = sSquirtleTeachableLearnset,
        .eggMoveLearnset = sSquirtleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_WARTORTLE}),
    },

    [SPECIES_WARTORTLE] =
    {
        .baseHP        = 59,
        .baseAttack    = 63,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 143,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wartortle"),
        .cryId = CRY_WARTORTLE,
        .natDexNum = NATIONAL_DEX_WARTORTLE,
        .categoryName = _("Tortuga"),
        .height = 10,
        .weight = 225,
        .description = COMPOUND_STRING(
            "Tiene una cola larga y cubierta de un\n"
            "pelo abundante y grueso que se torna\n"
            "oscuro con la edad. Al nadar mueve\n"
            "las orejas para nivelarse."),
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wartortle,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Wartortle,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Wartortle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Wartortle,
        .shinyPalette = gMonShinyPalette_Wartortle,
        .iconSprite = gMonIcon_Wartortle,
        .iconPalIndex = 2,
        FOOTPRINT(Wartortle)
        OVERWORLD(
            sPicTable_Wartortle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wartortle,
            gShinyOverworldPalette_Wartortle
        )
        .levelUpLearnset = sWartortleLevelUpLearnset,
        .teachableLearnset = sWartortleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLASTOISE}),
    },

    [SPECIES_BLASTOISE] =
    {
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 210,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Blastoise"),
        .cryId = CRY_BLASTOISE,
        .natDexNum = NATIONAL_DEX_BLASTOISE,
        .categoryName = _("Caparazón"),
        .height = 16,
        .weight = 855,
        .description = COMPOUND_STRING(
            "Lanza chorros de agua por los tubos\n"
            "del caparazón con gran precisión.\n"
            "Tiene tanta puntería que no fallaría\n"
            "al tirar contra una lata a 50 metros."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Blastoise,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Blastoise,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Blastoise,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Blastoise,
        .shinyPalette = gMonShinyPalette_Blastoise,
        .iconSprite = gMonIcon_Blastoise,
        .iconPalIndex = 2,
        FOOTPRINT(Blastoise)
        OVERWORLD(
            sPicTable_Blastoise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blastoise,
            gShinyOverworldPalette_Blastoise
        )
        .levelUpLearnset = sBlastoiseLevelUpLearnset,
        .teachableLearnset = sBlastoiseTeachableLearnset,
        .formSpeciesIdTable = sBlastoiseFormSpeciesIdTable,
        .formChangeTable = sBlastoiseFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLASTOISE_MEGA] =
    {
        .baseHP        = 79,
        .baseAttack    = 103,
        .baseDefense   = 120,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Blastoise"),
        .cryId = CRY_BLASTOISE_MEGA,
        .natDexNum = NATIONAL_DEX_BLASTOISE,
        .categoryName = _("Caparazón"),
        .height = 16,
        .weight = 1011,
        .description = COMPOUND_STRING(
            "El cañón en su espalda es tan poderoso\n"
            "como el de un tanque. Sus piernas fuertes\n"
            "y su espalda le permiten resistir el\n"
            "retroceso al disparar el cañón."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_BlastoiseMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlastoiseMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlastoiseMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_BlastoiseMega,
        .shinyPalette = gMonShinyPalette_BlastoiseMega,
        .iconSprite = gMonIcon_BlastoiseMega,
        .iconPalIndex = 2,
        FOOTPRINT(Blastoise)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlastoiseLevelUpLearnset,
        .teachableLearnset = sBlastoiseTeachableLearnset,
        .formSpeciesIdTable = sBlastoiseFormSpeciesIdTable,
        .formChangeTable = sBlastoiseFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BLASTOISE_GIGANTAMAX] =
    {
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Blastoise"),
        .cryId = CRY_BLASTOISE,
        .natDexNum = NATIONAL_DEX_BLASTOISE,
        .categoryName = _("Caparazón"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "No es muy bueno en el disparo de precisión.\n"
            "Cuando ataca, simplemente dispara\n"
            "sus 31 cañones una y otra vez\n"
            "sin parar."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_BlastoiseGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BlastoiseGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlastoiseGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BlastoiseGigantamax,
        .shinyPalette = gMonShinyPalette_BlastoiseGigantamax,
        .iconSprite = gMonIcon_BlastoiseGigantamax,
        .iconPalIndex = 0,
        FOOTPRINT(Blastoise)
        .isGigantamax = TRUE,
        .levelUpLearnset = sBlastoiseLevelUpLearnset,
        .teachableLearnset = sBlastoiseTeachableLearnset,
        .formSpeciesIdTable = sBlastoiseFormSpeciesIdTable,
        .formChangeTable = sBlastoiseFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
    [SPECIES_CATERPIE] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 39 : 53,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Caterpie"),
        .cryId = CRY_CATERPIE,
        .natDexNum = NATIONAL_DEX_CATERPIE,
        .categoryName = _("Oruga"),
        .height = 3,
        .weight = 29,
		.description = COMPOUND_STRING(
			"Tiene un apetito voraz. Es capaz de\n"
			"devorar hojas que superan su tamaño en\n"
			"un abrir y cerrar de ojos. Libera un\n"
			"hedor terrible por las antenas."),
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Caterpie,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Caterpie,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Caterpie,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Caterpie,
        .shinyPalette = gMonShinyPalette_Caterpie,
        .iconSprite = gMonIcon_Caterpie,
        .iconPalIndex = 1,
        FOOTPRINT(Caterpie)
        OVERWORLD(
            sPicTable_Caterpie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Caterpie,
            gShinyOverworldPalette_Caterpie
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCaterpieLevelUpLearnset,
        .teachableLearnset = sCaterpieTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_METAPOD}),
    },

    [SPECIES_METAPOD] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Metapod"),
        .cryId = CRY_METAPOD,
        .natDexNum = NATIONAL_DEX_METAPOD,
        .categoryName = _("Crisálida"),
        .height = 7,
        .weight = 99,
		.description = COMPOUND_STRING(
			"La capa que le recubre el cuerpo es dura\n"
			"como una plancha de hierro. Metapod\n"
			"apenas se mueve para que las vísceras\n"
			"evolucionen dentro de su coraza."),
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metapod,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Metapod,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Metapod,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Metapod,
        .shinyPalette = gMonShinyPalette_Metapod,
        .iconSprite = gMonIcon_Metapod,
        .iconPalIndex = 1,
        FOOTPRINT(Metapod)
        OVERWORLD(
            sPicTable_Metapod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Metapod,
            gShinyOverworldPalette_Metapod
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sMetapodLevelUpLearnset,
        .teachableLearnset = sMetapodTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BUTTERFREE}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define BUTTERFREE_EXP_YIELD 198
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define BUTTERFREE_EXP_YIELD 178
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define BUTTERFREE_EXP_YIELD 173
#else
    #define BUTTERFREE_EXP_YIELD 160
#endif

    [SPECIES_BUTTERFREE] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 90 : 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = BUTTERFREE_EXP_YIELD,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Butterfree"),
        .cryId = CRY_BUTTERFREE,
        .natDexNum = NATIONAL_DEX_BUTTERFREE,
        .categoryName = _("Mariposa"),
        .height = 11,
        .weight = 320,
		.description = COMPOUND_STRING(
			"Butterfree tiene una habilidad\n"
			"especial para encontrar rico néctar en\n"
			"las flores. Localiza, extrae y\n"
			"transporta el polen de flores."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Butterfree,
        .frontPicFemale = gMonFrontPic_ButterfreeF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Butterfree,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Butterfree,
        .backPicFemale = gMonBackPic_ButterfreeF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Butterfree,
        .shinyPalette = gMonShinyPalette_Butterfree,
        .iconSprite = gMonIcon_Butterfree,
        .iconPalIndex = 0,
        FOOTPRINT(Butterfree)
        OVERWORLD(
            sPicTable_Butterfree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Butterfree,
            gShinyOverworldPalette_Butterfree
        )
        .levelUpLearnset = sButterfreeLevelUpLearnset,
        .teachableLearnset = sButterfreeTeachableLearnset,
        .formSpeciesIdTable = sButterfreeFormSpeciesIdTable,
        .formChangeTable = sButterfreeFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_BUTTERFREE_GIGANTAMAX] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 90 : 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = BUTTERFREE_EXP_YIELD,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Butterfree"),
        .cryId = CRY_BUTTERFREE,
        .natDexNum = NATIONAL_DEX_BUTTERFREE,
        .categoryName = _("Mariposa"),
        .height = 170,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Cuando atrapa a sus rivales en un\n"
            "tornado que podría volar\n"
            "un camión, los remata con\n"
            "sus escamas venenosas."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ButterfreeGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_ButterfreeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_ButterfreeGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ButterfreeGigantamax,
        .shinyPalette = gMonShinyPalette_ButterfreeGigantamax,
        .iconSprite = gMonIcon_ButterfreeGigantamax,
        .iconPalIndex = 0,
        FOOTPRINT(Butterfree)
        .isGigantamax = TRUE,
        .levelUpLearnset = sButterfreeLevelUpLearnset,
        .teachableLearnset = sButterfreeTeachableLearnset,
        .formSpeciesIdTable = sButterfreeFormSpeciesIdTable,
        .formChangeTable = sButterfreeFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
    [SPECIES_WEEDLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 39 : 52,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Weedle"),
        .cryId = CRY_WEEDLE,
        .natDexNum = NATIONAL_DEX_WEEDLE,
        .categoryName = _("Oruga Peluda"),
        .height = 3,
        .weight = 32,
		.description = COMPOUND_STRING(
			"Weedle tiene un finísimo sentido del\n"
			"olfato. Puede distinguir las hojas que\n"
			"le gustan de las que no olisqueándolas\n"
			"con su gran nariz roja."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Weedle,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Weedle,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Weedle,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Weedle,
        .shinyPalette = gMonShinyPalette_Weedle,
        .iconSprite = gMonIcon_Weedle,
        .iconPalIndex = 2,
        FOOTPRINT(Weedle)
        OVERWORLD(
            sPicTable_Weedle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Weedle,
            gShinyOverworldPalette_Weedle
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWeedleLevelUpLearnset,
        .teachableLearnset = sWeedleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_KAKUNA}),
    },

    [SPECIES_KAKUNA] =
    {
        .baseHP        = 45,
        .baseAttack    = 25,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 72 : 71,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kakuna"),
        .cryId = CRY_KAKUNA,
        .natDexNum = NATIONAL_DEX_KAKUNA,
        .categoryName = _("Crisálida"),
        .height = 6,
        .weight = 100,
		.description = COMPOUND_STRING(
			"Permanece casi inmóvil encaramado a los\n"
			"árboles, pero mantiene una actividad\n"
			"interna frenética para poder\n"
			"evolucionar."),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kakuna,
        .frontPicSize = MON_COORDS_SIZE(24, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Kakuna,
        .frontAnimId = ANIM_GLOW_ORANGE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Kakuna,
        .backPicSize = MON_COORDS_SIZE(32, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Kakuna,
        .shinyPalette = gMonShinyPalette_Kakuna,
        .iconSprite = gMonIcon_Kakuna,
        .iconPalIndex = 2,
        FOOTPRINT(Kakuna)
        OVERWORLD(
            sPicTable_Kakuna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kakuna,
            gShinyOverworldPalette_Kakuna
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sKakunaLevelUpLearnset,
        .teachableLearnset = sKakunaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEEDRILL}),
    },

#define BEEDRILL_ATTACK (P_UPDATED_STATS >= GEN_6 ? 90 : 80)

    [SPECIES_BEEDRILL] =
    {
        .baseHP        = 65,
        .baseAttack    = BEEDRILL_ATTACK,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 198,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 178,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #else
        .expYield = 159,
    #endif
        .evYield_Attack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Beedrill"),
        .cryId = CRY_BEEDRILL,
        .natDexNum = NATIONAL_DEX_BEEDRILL,
        .categoryName = _("Abeja veneno"),
        .height = 10,
        .weight = 295,
		.description = COMPOUND_STRING(
			"Tiene tres aguijones venenosos, dos en\n"
			"las patas anteriores y uno en la parte\n"
			"baja del abdomen, con los que ataca a\n"
			"sus enemigos una y otra vez."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Beedrill,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Beedrill,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Beedrill,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Beedrill,
        .shinyPalette = gMonShinyPalette_Beedrill,
        .iconSprite = gMonIcon_Beedrill,
        .iconPalIndex = 2,
        FOOTPRINT(Beedrill)
        OVERWORLD(
            sPicTable_Beedrill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Beedrill,
            gShinyOverworldPalette_Beedrill
        )
        .levelUpLearnset = sBeedrillLevelUpLearnset,
        .teachableLearnset = sBeedrillTeachableLearnset,
        .formSpeciesIdTable = sBeedrillFormSpeciesIdTable,
        .formChangeTable = sBeedrillFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BEEDRILL_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = BEEDRILL_ATTACK + 60,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 248 : 223,
        .evYield_Attack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Beedrill"),
        .cryId = CRY_BEEDRILL_MEGA,
        .natDexNum = NATIONAL_DEX_BEEDRILL,
        .categoryName = _("Abeja veneno"),
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Sus patas son aguijones\n"
            "venenosos. Apuñala a su\n"
            "presa repetidamente, dando el\n"
            "golpe final con el aguijón trasero."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BeedrillMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_BeedrillMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_BeedrillMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_BeedrillMega,
        .shinyPalette = gMonShinyPalette_BeedrillMega,
        .iconSprite = gMonIcon_BeedrillMega,
        .iconPalIndex = 2,
        FOOTPRINT(Beedrill)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBeedrillLevelUpLearnset,
        .teachableLearnset = sBeedrillTeachableLearnset,
        .formSpeciesIdTable = sBeedrillFormSpeciesIdTable,
        .formChangeTable = sBeedrillFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
    [SPECIES_PIDGEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 56,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 55,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_BIG_PECKS },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pidgey"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,
        .categoryName = _("Pajarito"),
        .height = 3,
        .weight = 18,
		.description = COMPOUND_STRING(
			"Tiene un sentido de la orientación muy\n"
			"desarrollado. Aunque se encuentre muy\n"
			"lejos de  zonas familiares, es capaz de\n"
			"regresar a su nido."),
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pidgey,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pidgey,
        .shinyPalette = gMonShinyPalette_Pidgey,
        .iconSprite = gMonIcon_Pidgey,
        .iconPalIndex = 0,
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .levelUpLearnset = sPidgeyLevelUpLearnset,
        .teachableLearnset = sPidgeyTeachableLearnset,
        .eggMoveLearnset = sPidgeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_PIDGEOTTO}),
    },

    [SPECIES_PIDGEOTTO] =
    {
        .baseHP        = 63,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 71,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 122 : 113,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_BIG_PECKS },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pidgeotto"),
        .cryId = CRY_PIDGEOTTO,
        .natDexNum = NATIONAL_DEX_PIDGEOTTO,
        .categoryName = _("Pájaro"),
        .height = 11,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Su extraordinaria vitalidad y\n"
			"resistencia le permiten cubrir grandes\n"
			"distancias del territorio que habita\n"
			"en busca de presas."),
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgeotto,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Pidgeotto,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Pidgeotto,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Pidgeotto,
        .shinyPalette = gMonShinyPalette_Pidgeotto,
        .iconSprite = gMonIcon_Pidgeotto,
        .iconPalIndex = 0,
        FOOTPRINT(Pidgeotto)
        OVERWORLD(
            sPicTable_Pidgeotto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgeotto,
            gShinyOverworldPalette_Pidgeotto
        )
        .levelUpLearnset = sPidgeottoLevelUpLearnset,
        .teachableLearnset = sPidgeottoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_PIDGEOT}),
    },

#define PIDGEOT_SPEED (P_UPDATED_STATS >= GEN_6 ? 101 : 91)

    [SPECIES_PIDGEOT] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpeed     = PIDGEOT_SPEED,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 240,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 216,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 211,
    #else
        .expYield = 172,
    #endif
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_BIG_PECKS },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pidgeot"),
        .cryId = CRY_PIDGEOT,
        .natDexNum = NATIONAL_DEX_PIDGEOT,
        .categoryName = _("Pájaro"),
        .height = 15,
        .weight = 395,
		.description = COMPOUND_STRING(
			"Este Pokémon vuela a una velocidad\n"
			"de 2 Mach en busca de presas. Sus\n"
			"grandes garras son armas muy\n"
			"peligrosas."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgeot,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Pidgeot,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Pidgeot,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pidgeot,
        .shinyPalette = gMonShinyPalette_Pidgeot,
        .iconSprite = gMonIcon_Pidgeot,
        .iconPalIndex = 0,
        FOOTPRINT(Pidgeot)
        OVERWORLD(
            sPicTable_Pidgeot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgeot,
            gShinyOverworldPalette_Pidgeot
        )
        .levelUpLearnset = sPidgeotLevelUpLearnset,
        .teachableLearnset = sPidgeotTeachableLearnset,
        .formSpeciesIdTable = sPidgeotFormSpeciesIdTable,
        .formChangeTable = sPidgeotFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PIDGEOT_MEGA] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = PIDGEOT_SPEED + 20,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pidgeot"),
        .cryId = CRY_PIDGEOT_MEGA,
        .natDexNum = NATIONAL_DEX_PIDGEOT,
        .categoryName = _("Pájaro"),
        .height = 22,
        .weight = 505,
        .description = COMPOUND_STRING(
            "Con su fuerza muscular\n"
            "aumentada en exceso, puede volar\n"
            "csin parar durante 2\n"
            "semanas sin descansar."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PidgeotMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_PidgeotMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_PidgeotMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_PidgeotMega,
        .shinyPalette = gMonShinyPalette_PidgeotMega,
        .iconSprite = gMonIcon_PidgeotMega,
        .iconPalIndex = 0,
        FOOTPRINT(Pidgeot)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPidgeotLevelUpLearnset,
        .teachableLearnset = sPidgeotTeachableLearnset,
        .formSpeciesIdTable = sPidgeotFormSpeciesIdTable,
        .formChangeTable = sPidgeotFormChangeTable,
    },
#endif
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
    [SPECIES_RATTATA] =
    {
        .baseHP        = 30,
        .baseAttack    = 56,
        .baseDefense   = 35,
        .baseSpeed     = 72,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 51 : 57,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Rattata"),
        .cryId = CRY_RATTATA,
        .natDexNum = NATIONAL_DEX_RATTATA,
        .categoryName = _("Ratón"),
        .height = 3,
        .weight = 35,
		.description = COMPOUND_STRING(
			"Es propenso a hincar los incisivos en\n"
			"cualquier cosa que se le ponga por\n"
			"delante. Si se ve alguno, seguramente\n"
			"haya muchos más cerca."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rattata,
        .frontPicFemale = gMonFrontPic_RattataF,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Rattata,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Rattata,
        .backPicFemale = gMonBackPic_RattataF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Rattata,
        .shinyPalette = gMonShinyPalette_Rattata,
        .iconSprite = gMonIcon_Rattata,
        .iconPalIndex = 2,
        FOOTPRINT(Rattata)
        OVERWORLD(
            sPicTable_Rattata,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rattata,
            gShinyOverworldPalette_Rattata
        )
        .levelUpLearnset = sRattataLevelUpLearnset,
        .teachableLearnset = sRattataTeachableLearnset,
        .eggMoveLearnset = sRattataEggMoveLearnset,
        .formSpeciesIdTable = sRattataFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_RATICATE}),
    },

    [SPECIES_RATICATE] =
    {
        .baseHP        = 55,
        .baseAttack    = 81,
        .baseDefense   = 60,
        .baseSpeed     = 97,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Raticate"),
        .cryId = CRY_RATICATE,
        .natDexNum = NATIONAL_DEX_RATICATE,
        .categoryName = _("Ratón"),
        .height = 7,
        .weight = 185,
		.description = COMPOUND_STRING(
			"Gracias a las pequeñas membranas de\n"
			"sus patas traseras, puede nadar por\n"
			"los ríos para capturar a sus\n"
			"presas."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raticate,
        .frontPicFemale = gMonFrontPic_RaticateF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Raticate,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Raticate,
        .backPicFemale = gMonBackPic_RaticateF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Raticate,
        .shinyPalette = gMonShinyPalette_Raticate,
        .iconSprite = gMonIcon_Raticate,
        .iconPalIndex = 2,
        FOOTPRINT(Raticate)
        OVERWORLD(
            sPicTable_Raticate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Raticate,
            gShinyOverworldPalette_Raticate
        )
        .levelUpLearnset = sRaticateLevelUpLearnset,
        .teachableLearnset = sRaticateTeachableLearnset,
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_RATTATA_ALOLAN] =
    {
        .baseHP        = 30,
        .baseAttack    = 56,
        .baseDefense   = 35,
        .baseSpeed     = 72,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 51 : 57,
        .evYield_Speed = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Rattata"),
        .cryId = CRY_RATTATA,
        .natDexNum = NATIONAL_DEX_RATTATA,
        .categoryName = _("Ratón"),
        .height = 3,
        .weight = 38,
        .description = COMPOUND_STRING(
            "Con sus colmillos, roe puertas\n"
            "y se cuela en casas ajenas.\n"
            "Luego, roba la comida que se\n"
            "encuentra."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RattataAlolan,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_RattataAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RattataAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RattataAlolan,
        .shinyPalette = gMonShinyPalette_RattataAlolan,
        .iconSprite = gMonIcon_RattataAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Rattata)
        OVERWORLD(
            sPicTable_RattataAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RattataAlolan,
            gShinyOverworldPalette_RattataAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRattataAlolanLevelUpLearnset,
        .teachableLearnset = sRattataAlolanTeachableLearnset,
        .eggMoveLearnset = sRattataAlolanEggMoveLearnset,
        .formSpeciesIdTable = sRattataFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 20, SPECIES_RATICATE_ALOLAN},
                                {EVO_NONE, 0, SPECIES_RATICATE_ALOLAN_TOTEM}),
    },

    [SPECIES_RATICATE_ALOLAN] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Raticate"),
        .cryId = CRY_RATICATE,
        .natDexNum = NATIONAL_DEX_RATICATE,
        .categoryName = _("Ratón"),
        .height = 7,
        .weight = 255,
        .description = gRaticateAlolanPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RaticateAlolan,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RaticateAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RaticateAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RaticateAlolan,
        .shinyPalette = gMonShinyPalette_RaticateAlolan,
        .iconSprite = gMonIcon_RaticateAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Raticate)
        OVERWORLD(
            sPicTable_RaticateAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaticateAlolan,
            gShinyOverworldPalette_RaticateAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRaticateAlolanLevelUpLearnset,
        .teachableLearnset = sRaticateAlolanTeachableLearnset,
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable,
    },

    [SPECIES_RATICATE_ALOLAN_TOTEM] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Raticate"),
        .cryId = CRY_RATICATE,
        .natDexNum = NATIONAL_DEX_RATICATE,
        .categoryName = _("Ratón"),
        .height = 14,
        .weight = 1050,
        .description = gRaticateAlolanPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RaticateAlolan,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RaticateAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RaticateAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RaticateAlolan,
        .shinyPalette = gMonShinyPalette_RaticateAlolan,
        .iconSprite = gMonIcon_RaticateAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Raticate)
        OVERWORLD(
            sPicTable_RaticateAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaticateAlolan,
            gShinyOverworldPalette_RaticateAlolan
        )
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRaticateAlolanLevelUpLearnset,
        .teachableLearnset = sRaticateAlolanTeachableLearnset,
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
    [SPECIES_SPEAROW] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 70,
        .baseSpAttack  = 31,
        .baseSpDefense = 31,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 58,
        .evYield_Speed = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Spearow"),
        .cryId = CRY_SPEAROW,
        .natDexNum = NATIONAL_DEX_SPEAROW,
        .categoryName = _("Pajarito"),
        .height = 3,
        .weight = 20,
		.description = COMPOUND_STRING(
			"Cuando pía, se le puede oír a 1 km.\n"
			"Si a su agudo chillido le sigue una especie\n"
			"de eco, estaremos oyendo a otros Spearow\n"
			"responder el aviso de peligro."),
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spearow,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Spearow,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Spearow,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Spearow,
        .shinyPalette = gMonShinyPalette_Spearow,
        .iconSprite = gMonIcon_Spearow,
        .iconPalIndex = 0,
        FOOTPRINT(Spearow)
        OVERWORLD(
            sPicTable_Spearow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spearow,
            gShinyOverworldPalette_Spearow
        )
        .levelUpLearnset = sSpearowLevelUpLearnset,
        .teachableLearnset = sSpearowTeachableLearnset,
        .eggMoveLearnset = sSpearowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_FEAROW}),
    },

    [SPECIES_FEAROW] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 155 : 162,
        .evYield_Speed = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Fearow"),
        .cryId = CRY_FEAROW,
        .natDexNum = NATIONAL_DEX_FEAROW,
        .categoryName = _("Pico"),
        .height = 12,
        .weight = 380,
		.description = COMPOUND_STRING(
			"Se le reconoce por tener un pescuezo y un\n"
			"pico largos que le permiten cazar en agua\n"
			"y en tierra firme. Mueve el pico con\n"
			"habilidad para atrapar a sus presas."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fearow,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Fearow,
        .frontAnimId = ANIM_FIGURE_8,
        .frontAnimDelay = 2,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Fearow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Fearow,
        .shinyPalette = gMonShinyPalette_Fearow,
        .iconSprite = gMonIcon_Fearow,
        .iconPalIndex = 0,
        FOOTPRINT(Fearow)
        OVERWORLD(
            sPicTable_Fearow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Fearow,
            gShinyOverworldPalette_Fearow
        )
        .levelUpLearnset = sFearowLevelUpLearnset,
        .teachableLearnset = sFearowTeachableLearnset,
    },
#endif //P_FAMILY_SPEAROW

#if P_FAMILY_EKANS
    [SPECIES_EKANS] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 44,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ekans"),
        .cryId = CRY_EKANS,
        .natDexNum = NATIONAL_DEX_EKANS,
        .categoryName = _("Serpiente"),
        .height = 20,
        .weight = 69,
		.description = COMPOUND_STRING(
			"Se enrosca para descansar. Esta posición\n"
			"le permite responder rápidamente en\n"
			"caso de amenaza, pues le basta erguir\n"
			"la cabeza con ferocidad."),
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ekans,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Ekans,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Ekans,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Ekans,
        .shinyPalette = gMonShinyPalette_Ekans,
        .iconSprite = gMonIcon_Ekans,
        .iconPalIndex = 2,
        FOOTPRINT(Ekans)
        OVERWORLD(
            sPicTable_Ekans,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Ekans,
            gShinyOverworldPalette_Ekans
        )
        .levelUpLearnset = sEkansLevelUpLearnset,
        .teachableLearnset = sEkansTeachableLearnset,
        .eggMoveLearnset = sEkansEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARBOK}),
    },

    [SPECIES_ARBOK] =
    {
        .baseHP        = 60,
        .baseAttack    = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseDefense   = 69,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 157,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 153,
    #else
        .expYield = 147,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Arbok"),
        .cryId = CRY_ARBOK,
        .natDexNum = NATIONAL_DEX_ARBOK,
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 650,
		.description = COMPOUND_STRING(
			"Es tremendamente fuerte y puede oprimir\n"
			"cualquier cosa con su cuerpo, aplastando\n"
			"incluso barriles de acero. Una vez atrapa\n"
			"a su víctima, no hay forma de escapar."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Arbok,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Arbok,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Arbok,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Arbok,
        .shinyPalette = gMonShinyPalette_Arbok,
        .iconSprite = gMonIcon_Arbok,
        .iconPalIndex = 2,
        FOOTPRINT(Arbok)
        OVERWORLD(
            sPicTable_Arbok,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Arbok,
            gShinyOverworldPalette_Arbok
        )
        .levelUpLearnset = sArbokLevelUpLearnset,
        .teachableLearnset = sArbokTeachableLearnset,
    },
#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS

    [SPECIES_PICHU] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 15,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 41 : 42,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pichu"),
        .cryId = CRY_PICHU,
        .natDexNum = NATIONAL_DEX_PICHU,
        .categoryName = _("Ratoncito"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pichu,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Pichu,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Pichu,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Pichu,
        .shinyPalette = gMonShinyPalette_Pichu,
        .iconSprite = gMonIcon_Pichu,
        .iconPalIndex = 1,
        FOOTPRINT(Pichu)
        OVERWORLD(
            sPicTable_Pichu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pichu,
            gShinyOverworldPalette_Pichu
        )
        .levelUpLearnset = sPichuLevelUpLearnset,
        .teachableLearnset = sPichuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
        .formSpeciesIdTable = sPichuFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}),
    },

    [SPECIES_PICHU_SPIKY_EARED] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 15,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 41 : 42,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Pichu"),
        .cryId = CRY_PICHU,
        .natDexNum = NATIONAL_DEX_PICHU,
        .categoryName = _("Ratoncito"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PichuSpikyEared,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_PichuSpikyEared,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PichuSpikyEared,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PichuSpikyEared,
        .shinyPalette = gMonShinyPalette_PichuSpikyEared,
        .iconSprite = gMonIcon_PichuSpikyEared,
        .iconPalIndex = 1,
        FOOTPRINT(Pichu)
        OVERWORLD(
            sPicTable_PichuSpikyEared,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PichuSpikyEared,
            gShinyOverworldPalette_PichuSpikyEared
        )
        .levelUpLearnset = sPichuLevelUpLearnset,
        .teachableLearnset = sPichuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
        .formSpeciesIdTable = sPichuFormSpeciesIdTable,
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_UPDATED_EXP_YIELDS >= GEN_6
    #define PIKACHU_EXP_YIELD 112
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PIKACHU_EXP_YIELD 105
#else
    #define PIKACHU_EXP_YIELD 82
#endif

    [SPECIES_PIKACHU] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pikachu,
        .frontPicFemale = gMonFrontPic_PikachuF,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Pikachu,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Pikachu,
        .backPicFemale = gMonBackPic_PikachuF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Pikachu,
        .shinyPalette = gMonShinyPalette_Pikachu,
        .iconSprite = gMonIcon_Pikachu,
        .iconPalIndex = 2,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_PikachuF,
        .iconPalIndexFemale = 2,
    #endif
        OVERWORLD(
            sPicTable_Pikachu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pikachu,
            gShinyOverworldPalette_Pikachu
        )
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
        .formChangeTable = sPikachuFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU},
                                {EVO_NONE, 0, SPECIES_RAICHU_ALOLAN}),
    },

#if P_COSPLAY_PIKACHU_FORMS
    [SPECIES_PIKACHU_COSPLAY]   =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuCosplay,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuCosplay,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuCosplay,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuCosplay,
        .shinyPalette = gMonShinyPalette_PikachuCosplay,
        .iconSprite = gMonIcon_PikachuCosplay,
        .iconPalIndex = 2,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_ROCK_STAR] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuRockStar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuRockStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuRockStar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuRockStar,
        .shinyPalette = gMonShinyPalette_PikachuRockStar,
        .iconSprite = gMonIcon_PikachuRockStar,
        .iconPalIndex = 1,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_BELLE] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuBelle,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuBelle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuBelle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuBelle,
        .shinyPalette = gMonShinyPalette_PikachuBelle,
        .iconSprite = gMonIcon_PikachuBelle,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_POP_STAR] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuPopStar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPopStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuPopStar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuPopStar,
        .shinyPalette = gMonShinyPalette_PikachuPopStar,
        .iconSprite = gMonIcon_PikachuPopStar,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_PH_D] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuPhD,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPhD,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuPhD,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuPhD,
        .shinyPalette = gMonShinyPalette_PikachuPhD,
        .iconSprite = gMonIcon_PikachuPhD,
        .iconPalIndex = 1,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_LIBRE] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuLibre,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuLibre,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuLibre,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuLibre,
        .shinyPalette = gMonShinyPalette_PikachuLibre,
        .iconSprite = gMonIcon_PikachuLibre,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

#endif //P_COSPLAY_PIKACHU_FORMS

#if P_CAP_PIKACHU_FORMS
    [SPECIES_PIKACHU_ORIGINAL_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Este Pikachu lleva la gorra de su aliado, lo\n"
"cual es una prueba del fuerte vínculo que\n"
"tienen, formaron durante aventuras\n"
"a través de muchas regiones."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuOriginalCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuOriginalCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuOriginalCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuOriginalCap,
        .shinyPalette = gMonShinyPalette_PikachuOriginalCap,
        .iconSprite = gMonIcon_PikachuOriginalCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_HOENN_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Este Pikachu lleva la gorra de su compañero, lo\n"
"cual es una prueba del fuerte vínculo que Pikachu\n"
"y su compañero formaron durante aventuras\n"
"juntos en la región Hoenn."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuHoennCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuHoennCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuHoennCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuHoennCap,
        .shinyPalette = gMonShinyPalette_PikachuHoennCap,
        .iconSprite = gMonIcon_PikachuHoennCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_SINNOH_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Este Pikachu lleva la gorra de su compañero, lo\n"
"cual es una prueba del fuerte vínculo que Pikachu\n"
"y su compañero formaron durante aventuras\n"
"juntos en la región Sinnoh."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuSinnohCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuSinnohCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuSinnohCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuSinnohCap,
        .shinyPalette = gMonShinyPalette_PikachuSinnohCap,
        .iconSprite = gMonIcon_PikachuSinnohCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_UNOVA_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Este Pikachu lleva la gorra de su compañero, lo\n"
"cual es una prueba del fuerte vínculo que Pikachu\n"
"y su compañero formaron durante aventuras\n"
"juntos en la región Unova."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuUnovaCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuUnovaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuUnovaCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuUnovaCap,
        .shinyPalette = gMonShinyPalette_PikachuUnovaCap,
        .iconSprite = gMonIcon_PikachuUnovaCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_KALOS_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
           "Este Pikachu lleva la gorra de su compañero, lo\n"
"cual es una prueba del fuerte vínculo que Pikachu\n"
"y su compañero formaron durante aventuras\n"
"juntos en la región Kalos."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuKalosCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuKalosCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuKalosCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuKalosCap,
        .shinyPalette = gMonShinyPalette_PikachuKalosCap,
        .iconSprite = gMonIcon_PikachuKalosCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_ALOLA_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Este Pikachu lleva la gorra de su compañero, lo\n"
"cual es una prueba del fuerte vínculo que Pikachu\n"
"y su compañero formaron durante aventuras\n"
"juntos en la región Alola."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuAlolaCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuAlolaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuAlolaCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuAlolaCap,
        .shinyPalette = gMonShinyPalette_PikachuAlolaCap,
        .iconSprite = gMonIcon_PikachuAlolaCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_PARTNER_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Este Pikachu lleva la gorra de su compañero, lo\n"
"cual es una prueba del fuerte vínculo que Pikachu\n"
"y su compañero formaron al superar\n"
"muchas dificultades juntos."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuPartnerCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPartnerCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuPartnerCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuPartnerCap,
        .shinyPalette = gMonShinyPalette_PikachuPartnerCap,
        .iconSprite = gMonIcon_PikachuPartnerCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_WORLD_CAP] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_MALE,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Este Pikachu lleva la gorra de su compañero, lo\n"
"cual es una prueba del fuerte vínculo que Pikachu\n"
"y su compañero formaron durante aventuras\n"
"por todo el mundo juntos."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuWorldCap,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuWorldCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuWorldCap,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuWorldCap,
        .shinyPalette = gMonShinyPalette_PikachuWorldCap,
        .iconSprite = gMonIcon_PikachuWorldCap,
        .iconPalIndex = 0,
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

#endif //P_CAP_PIKACHU_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_PIKACHU_GIGANTAMAX] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 210,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Cuando aplasta a sus rivales con\n"
            "su cola, descarga una oleada\n"
            "de electricidad equivalente\n"
            "a un rayo."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_PikachuGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuGigantamax,
        .shinyPalette = gMonShinyPalette_PikachuGigantamax,
        .iconSprite = gMonIcon_PikachuGigantamax,
        .iconPalIndex = 2,
        FOOTPRINT(Pikachu)
        .isGigantamax = TRUE,
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
        .formChangeTable = sPikachuFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_PIKACHU_PARTNER] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PIKACHU_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pikachu"),
        .cryId = CRY_PIKACHU,
        .natDexNum = NATIONAL_DEX_PIKACHU,
        .categoryName = _("Ratón"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pikachu,
        .frontPicFemale = gMonFrontPic_PikachuF,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Pikachu,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Pikachu,
        .backPicFemale = gMonBackPic_PikachuF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Pikachu,
        .shinyPalette = gMonShinyPalette_Pikachu,
        .iconSprite = gMonIcon_PikachuPartner,
        .iconPalIndex = 2,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_PikachuPartnerF,
        .iconPalIndexFemale = 2,
    #endif
        FOOTPRINT(Pikachu)
        OVERWORLD(
            sPicTable_Pikachu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pikachu,
            gShinyOverworldPalette_Pikachu
        )
        .cannotBeTraded = TRUE,
        .allPerfectIVs = TRUE,
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

#define RAICHU_SPEED (P_UPDATED_STATS >= GEN_6 ? 110 : 100)

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define RAICHU_EXP_YIELD 243
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define RAICHU_EXP_YIELD 218
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define RAICHU_EXP_YIELD 214
#else
    #define RAICHU_EXP_YIELD 122
#endif

    [SPECIES_RAICHU] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpeed     = RAICHU_SPEED,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = RAICHU_EXP_YIELD,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Raichu"),
        .cryId = CRY_RAICHU,
        .natDexNum = NATIONAL_DEX_RAICHU,
        .categoryName = _("Ratón"),
        .height = 8,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Si acumula demasiada electricidad, se\n"
			"vuelve violento. Para evitarlo, suele\n"
			"descargar los excesos de energía, lo que\n"
			"lo mantiene calmado."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raichu,
        .frontPicFemale = gMonFrontPic_RaichuF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Raichu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Raichu,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Raichu,
        .shinyPalette = gMonShinyPalette_Raichu,
        .iconSprite = gMonIcon_Raichu,
        .iconPalIndex = 0,
        FOOTPRINT(Raichu)
        OVERWORLD(
            sPicTable_Raichu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Raichu,
            gShinyOverworldPalette_Raichu
        )
        .levelUpLearnset = sRaichuLevelUpLearnset,
        .teachableLearnset = sRaichuTeachableLearnset,
        .formSpeciesIdTable = sRaichuFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_RAICHU_ALOLAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = RAICHU_SPEED,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = RAICHU_EXP_YIELD,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SURGE_SURFER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Raichu"),
        .cryId = CRY_RAICHU,
        .natDexNum = NATIONAL_DEX_RAICHU,
        .categoryName = _("Ratón"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Utiliza la psicokinesis para usar\n"
            "la electricidad. Enfoca la energía\n"
            "en su cola y la monta como si\n"
            "surfeara. Támbien se le llama 'hodad'"),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RaichuAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RaichuAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_RaichuAlolan,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RaichuAlolan,
        .shinyPalette = gMonShinyPalette_RaichuAlolan,
        .iconSprite = gMonIcon_RaichuAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Raichu)
        OVERWORLD(
            sPicTable_RaichuAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaichuAlolan,
            gShinyOverworldPalette_RaichuAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRaichuAlolanLevelUpLearnset,
        .teachableLearnset = sRaichuAlolanTeachableLearnset,
        .formSpeciesIdTable = sRaichuFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
    [SPECIES_SANDSHREW] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 93,
        .evYield_Defense = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sandshrew"),
        .cryId = CRY_SANDSHREW,
        .natDexNum = NATIONAL_DEX_SANDSHREW,
        .categoryName = _("Ratón"),
        .height = 6,
        .weight = 120,
		.description = COMPOUND_STRING(
			"Cuando se hace una bola, repele cualquier\n"
			"ataque. Como vive en el desierto tiene una\n"
			"piel tosca y dura.\n"
			""),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandshrew,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sandshrew,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Sandshrew,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Sandshrew,
        .shinyPalette = gMonShinyPalette_Sandshrew,
        .iconSprite = gMonIcon_Sandshrew,
        .iconPalIndex = 2,
        FOOTPRINT(Sandshrew)
        OVERWORLD(
            sPicTable_Sandshrew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandshrew,
            gShinyOverworldPalette_Sandshrew
        )
        .levelUpLearnset = sSandshrewLevelUpLearnset,
        .teachableLearnset = sSandshrewTeachableLearnset,
        .eggMoveLearnset = sSandshrewEggMoveLearnset,
        .formSpeciesIdTable = sSandshrewFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SANDSLASH}),
    },

    [SPECIES_SANDSLASH] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 163,
        .evYield_Defense = 2,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sandslash"),
        .cryId = CRY_SANDSLASH,
        .natDexNum = NATIONAL_DEX_SANDSLASH,
        .categoryName = _("Ratón"),
        .height = 10,
        .weight = 295,
		.description = COMPOUND_STRING(
			"Se enrosca para protegerse del enemigo\n"
			"y de los golpes de calor que hay durante\n"
			"el día, cuando aumenta la temperatura.\n"
			""),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandslash,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Sandslash,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Sandslash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Sandslash,
        .shinyPalette = gMonShinyPalette_Sandslash,
        .iconSprite = gMonIcon_Sandslash,
        .iconPalIndex = 2,
        FOOTPRINT(Sandslash)
        OVERWORLD(
            sPicTable_Sandslash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandslash,
            gShinyOverworldPalette_Sandslash
        )
        .levelUpLearnset = sSandslashLevelUpLearnset,
        .teachableLearnset = sSandslashTeachableLearnset,
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_SANDSHREW_ALOLAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 10,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 93,
        .evYield_Defense = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sandshrew"),
        .cryId = CRY_SANDSHREW,
        .natDexNum = NATIONAL_DEX_SANDSHREW,
        .categoryName = _("Ratón"),
        .height = 7,
        .weight = 400,
        .description = COMPOUND_STRING(
            "La vida en las montañas nevadas\n"
            "le han otorgado un cuerpo\n"
            "de hielo tan duro como el acero. Los\n"
            "cazadores atacan su vientre blando."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SandshrewAlolan,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SandshrewAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandshrewAlolan,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SandshrewAlolan,
        .shinyPalette = gMonShinyPalette_SandshrewAlolan,
        .iconSprite = gMonIcon_SandshrewAlolan,
        .iconPalIndex = 0,
        FOOTPRINT(Sandshrew)
        OVERWORLD(
            sPicTable_SandshrewAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SandshrewAlolan,
            gShinyOverworldPalette_SandshrewAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSandshrewAlolanLevelUpLearnset,
        .teachableLearnset = sSandshrewAlolanTeachableLearnset,
        .eggMoveLearnset = sSandshrewAlolanEggMoveLearnset,
        .formSpeciesIdTable = sSandshrewFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_SANDSLASH_ALOLAN}),
    },

    [SPECIES_SANDSLASH_ALOLAN] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 163,
        .evYield_Defense = 2,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sandslash"),
        .cryId = CRY_SANDSLASH,
        .natDexNum = NATIONAL_DEX_SANDSLASH,
        .categoryName = _("Ratón"),
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Utiliza sus garras para crear un\n"
            "camino a través de la nieve mientras\n"
            "corre. En las montañas nevadas, es\n"
            "más rápido que cualquier otro ser."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SandslashAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandslashAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandslashAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SandslashAlolan,
        .shinyPalette = gMonShinyPalette_SandslashAlolan,
        .iconSprite = gMonIcon_SandslashAlolan,
        .iconPalIndex = 0,
        FOOTPRINT(Sandslash)
        OVERWORLD(
            sPicTable_SandslashAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SandslashAlolan,
            gShinyOverworldPalette_SandslashAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSandslashAlolanLevelUpLearnset,
        .teachableLearnset = sSandslashAlolanTeachableLearnset,
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
    [SPECIES_NIDORAN_F] =
    {
        .baseHP        = 55,
        .baseAttack    = 47,
        .baseDefense   = 52,
        .baseSpeed     = 41,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 55 : 59,
        .evYield_HP = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_HUSTLE },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Nidoran♀"),
        .cryId = CRY_NIDORAN_F,
        .natDexNum = NATIONAL_DEX_NIDORAN_F,
        .categoryName = _("Pin veneno"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Se cree que sus espinas tóxicas se\n"
"crearon como protección para esta\n"
"especie de cuerpo pequeño. Al enfadarse\n"
"libera una horrible toxina."),
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NidoranF,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_NidoranF,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 28,
        .backPic = gMonBackPic_NidoranF,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_NidoranF,
        .shinyPalette = gMonShinyPalette_NidoranF,
        .iconSprite = gMonIcon_NidoranF,
        .iconPalIndex = 0,
        FOOTPRINT(NidoranF)
        OVERWORLD(
            sPicTable_NidoranF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NidoranF,
            gShinyOverworldPalette_NidoranF
        )
        .levelUpLearnset = sNidoranFLevelUpLearnset,
        .teachableLearnset = sNidoranFTeachableLearnset,
        .eggMoveLearnset = sNidoranFEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINA}),
    },

    [SPECIES_NIDORINA] =
    {
        .baseHP        = 70,
        .baseAttack    = 62,
        .baseDefense   = 67,
        .baseSpeed     = 56,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 128 : 117,
        .evYield_HP = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_HUSTLE },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Nidorina"),
        .cryId = CRY_NIDORINA,
        .natDexNum = NATIONAL_DEX_NIDORINA,
        .categoryName = _("Pin veneno"),
        .height = 8,
        .weight = 200,
		.description = COMPOUND_STRING(
			"Cuando está en familia o con sus amigos,\n"
			"retrae las púas para no herir a nadie.\n"
			"Según parece, si se la separa de su grupo,\n"
			"se pone muy nerviosa."),
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidorina,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nidorina,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Nidorina,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Nidorina,
        .shinyPalette = gMonShinyPalette_Nidorina,
        .iconSprite = gMonIcon_Nidorina,
        .iconPalIndex = 0,
        FOOTPRINT(Nidorina)
        OVERWORLD(
            sPicTable_Nidorina,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidorina,
            gShinyOverworldPalette_Nidorina
        )
        .levelUpLearnset = sNidorinaLevelUpLearnset,
        .teachableLearnset = sNidorinaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}),
    },

    [SPECIES_NIDOQUEEN] =
    {
        .baseHP        = 90,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 92 : 82,
        .baseDefense   = 87,
        .baseSpeed     = 76,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 253,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 227,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 223,
    #else
        .expYield = 194,
    #endif
        .evYield_HP = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_SHEER_FORCE },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Nidoqueen"),
        .cryId = CRY_NIDOQUEEN,
        .natDexNum = NATIONAL_DEX_NIDOQUEEN,
        .categoryName = _("Taladro"),
        .height = 13,
        .weight = 600,
		.description = COMPOUND_STRING(
			"Está recubierta de escamas durísimas.\n"
			"Suele lanzar por los aires a sus rivales\n"
			"golpeándolos con violencia. Defiende\n"
			"a sus crías con gran ferocidad."),
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidoqueen,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Nidoqueen,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Nidoqueen,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Nidoqueen,
        .shinyPalette = gMonShinyPalette_Nidoqueen,
        .iconSprite = gMonIcon_Nidoqueen,
        .iconPalIndex = 2,
        FOOTPRINT(Nidoqueen)
        OVERWORLD(
            sPicTable_Nidoqueen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidoqueen,
            gShinyOverworldPalette_Nidoqueen
        )
        .levelUpLearnset = sNidoqueenLevelUpLearnset,
        .teachableLearnset = sNidoqueenTeachableLearnset,
    },

    [SPECIES_NIDORAN_M] =
    {
        .baseHP        = 46,
        .baseAttack    = 57,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 55 : 60,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_HUSTLE },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Nidoran♂"),
        .cryId = CRY_NIDORAN_M,
        .natDexNum = NATIONAL_DEX_NIDORAN_M,
        .categoryName = _("Pin veneno"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "Ha desarrollado músculos para mover\n"
            "sus orejas en todas direcciones. Incluso\n"
            "el sonido más mínimo no escapa a la\n"
            "atención de este Pokémon."),
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NidoranM,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_NidoranM,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_NidoranM,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_NidoranM,
        .shinyPalette = gMonShinyPalette_NidoranM,
        .iconSprite = gMonIcon_NidoranM,
        .iconPalIndex = 2,
        FOOTPRINT(NidoranM)
        OVERWORLD(
            sPicTable_NidoranM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NidoranM,
            gShinyOverworldPalette_NidoranM
        )
        .levelUpLearnset = sNidoranMLevelUpLearnset,
        .teachableLearnset = sNidoranMTeachableLearnset,
        .eggMoveLearnset = sNidoranMEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINO}),
    },

    [SPECIES_NIDORINO] =
    {
        .baseHP        = 61,
        .baseAttack    = 72,
        .baseDefense   = 57,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 128 : 118,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_HUSTLE },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Nidorino"),
        .cryId = CRY_NIDORINO,
        .natDexNum = NATIONAL_DEX_NIDORINO,
        .categoryName = _("Pin veneno"),
        .height = 9,
        .weight = 195,
		.description = COMPOUND_STRING(
			"Tiene un cuerno de dureza superior a la del\n"
			"diamante. Si siente una presencia hostil,\n"
			"se le erizan las púas del lomo y hace\n"
			"frente al enemigo con todas sus fuerzas."),
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidorino,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nidorino,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Nidorino,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Nidorino,
        .shinyPalette = gMonShinyPalette_Nidorino,
        .iconSprite = gMonIcon_Nidorino,
        .iconPalIndex = 2,
        FOOTPRINT(Nidorino)
        OVERWORLD(
            sPicTable_Nidorino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidorino,
            gShinyOverworldPalette_Nidorino
        )
        .levelUpLearnset = sNidorinoLevelUpLearnset,
        .teachableLearnset = sNidorinoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}),
    },

    [SPECIES_NIDOKING] =
    {
        .baseHP        = 81,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 102 : 92,
        .baseDefense   = 77,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 253,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 227,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 223,
    #else
        .expYield = 195,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_SHEER_FORCE },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Nidoking"),
        .cryId = CRY_NIDOKING,
        .natDexNum = NATIONAL_DEX_NIDOKING,
        .categoryName = _("Taladro"),
        .height = 14,
        .weight = 620,
		.description = COMPOUND_STRING(
			"La gruesa cola de Nidoking resulta\n"
			"destructora. Con agitarla una vez, puede\n"
			"tumbar hasta una torre de transmisión.\n"
			"Cuando se desboca, no hay quien lo pare."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidoking,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Nidoking,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Nidoking,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Nidoking,
        .shinyPalette = gMonShinyPalette_Nidoking,
        .iconSprite = gMonIcon_Nidoking,
        .iconPalIndex = 2,
        FOOTPRINT(Nidoking)
        OVERWORLD(
            sPicTable_Nidoking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidoking,
            gShinyOverworldPalette_Nidoking
        )
        .levelUpLearnset = sNidokingLevelUpLearnset,
        .teachableLearnset = sNidokingTeachableLearnset,
    },
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
#if P_UPDATED_TYPES >= GEN_6
    #define CLEFAIRY_FAMILY_TYPES { TYPE_FAIRY, TYPE_FAIRY }
#else
    #define CLEFAIRY_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL }
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_CLEFFA] =
    {
        .baseHP        = 50,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 15,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 37,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_FRIEND_GUARD },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Cleffa"),
        .cryId = CRY_CLEFFA,
        .natDexNum = NATIONAL_DEX_CLEFFA,
        .categoryName = _("Estrella"),
        .height = 3,
        .weight = 30,
		.description = COMPOUND_STRING(
			"Cuando hay lluvia de estrellas, se les ve\n"
			"danzando en círculos durante la noche.\n"
			"Solo paran de día; entonces, dejan de\n"
			"bailar y beben el rocío de la mañana."),
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cleffa,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Cleffa,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Cleffa,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Cleffa,
        .shinyPalette = gMonShinyPalette_Cleffa,
        .iconSprite = gMonIcon_Cleffa,
        .iconPalIndex = 0,
        FOOTPRINT(Cleffa)
        OVERWORLD(
            sPicTable_Cleffa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cleffa,
            gShinyOverworldPalette_Cleffa
        )
        .levelUpLearnset = sCleffaLevelUpLearnset,
        .teachableLearnset = sCleffaTeachableLearnset,
        .eggMoveLearnset = sCleffaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_CLEFAIRY] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 48,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 113 : 68,
        .evYield_HP = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_FRIEND_GUARD },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Clefairy"),
        .cryId = CRY_CLEFAIRY,
        .natDexNum = NATIONAL_DEX_CLEFAIRY,
        .categoryName = _("Hada"),
        .height = 6,
        .weight = 75,
		.description = COMPOUND_STRING(
			"Cuando hay luna llena, salen en grupo para\n"
			"jugar. Al amanecer, los Clefairy, agotados,\n"
			"regresan a sus refugios de montaña para\n"
			"dormir acurrucados unos contra otros."),
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clefairy,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Clefairy,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clefairy,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Clefairy,
        .shinyPalette = gMonShinyPalette_Clefairy,
        .iconSprite = gMonIcon_Clefairy,
        .iconPalIndex = 0,
        FOOTPRINT(Clefairy)
        OVERWORLD(
            sPicTable_Clefairy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clefairy,
            gShinyOverworldPalette_Clefairy
        )
        .levelUpLearnset = sClefairyLevelUpLearnset,
        .teachableLearnset = sClefairyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}),
    },

    [SPECIES_CLEFABLE] =
    {
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseSpDefense = 90,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 25,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 242,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 217,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 213,
    #else
        .expYield = 129,
    #endif
        .evYield_HP = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_UNAWARE },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_UNAWARE },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Clefable"),
        .cryId = CRY_CLEFABLE,
        .natDexNum = NATIONAL_DEX_CLEFABLE,
        .categoryName = _("Hada"),
        .height = 13,
        .weight = 400,
		.description = COMPOUND_STRING(
			"Usa las alas para dar saltitos y poder\n"
			"caminar por el agua, pero no llega a volar.\n"
			"Se sabe que le encanta pasear por los\n"
			"lagos en tranquilas noches de luna llena."),
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clefable,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Clefable,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clefable,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Clefable,
        .shinyPalette = gMonShinyPalette_Clefable,
        .iconSprite = gMonIcon_Clefable,
        .iconPalIndex = 0,
        FOOTPRINT(Clefable)
        OVERWORLD(
            sPicTable_Clefable,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clefable,
            gShinyOverworldPalette_Clefable
        )
        .levelUpLearnset = sClefableLevelUpLearnset,
        .teachableLearnset = sClefableTeachableLearnset,
    },
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
    [SPECIES_VULPIX] =
    {
        .baseHP        = 38,
        .baseAttack    = 41,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 63,
        .evYield_Speed = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Vulpix"),
        .cryId = CRY_VULPIX,
        .natDexNum = NATIONAL_DEX_VULPIX,
        .categoryName = _("Zorro"),
        .height = 6,
        .weight = 99,
		.description = COMPOUND_STRING(
			"Puede controlar el fuego a su antojo\n"
			"y libera llamas por la boca. Tiene seis\n"
			"colas cuya temperatura sube de forma\n"
			"radical justo antes de evolucionar."),
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vulpix,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Vulpix,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Vulpix,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Vulpix,
        .shinyPalette = gMonShinyPalette_Vulpix,
        .iconSprite = gMonIcon_Vulpix,
        .iconPalIndex = 5,
        FOOTPRINT(Vulpix)
        OVERWORLD(
            sPicTable_Vulpix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vulpix,
            gShinyOverworldPalette_Vulpix
        )
        .levelUpLearnset = sVulpixLevelUpLearnset,
        .teachableLearnset = sVulpixTeachableLearnset,
        .eggMoveLearnset = sVulpixEggMoveLearnset,
        .formSpeciesIdTable = sVulpixFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}),
    },

    [SPECIES_NINETALES] =
    {
        .baseHP        = 73,
        .baseAttack    = 76,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 178,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ninetales"),
        .cryId = CRY_NINETALES,
        .natDexNum = NATIONAL_DEX_NINETALES,
        .categoryName = _("Zorro"),
        .height = 11,
        .weight = 199,
		.description = COMPOUND_STRING(
			"Dicen que cada una de sus nueve colas\n"
			"tiene poderes mágicos. Con el paso del\n"
			"tiempo, el pelaje de Ninetales\n"
			"adquiere un tono dorado."),
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ninetales,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Ninetales,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Ninetales,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Ninetales,
        .shinyPalette = gMonShinyPalette_Ninetales,
        .iconSprite = gMonIcon_Ninetales,
        .iconPalIndex = 3,
        FOOTPRINT(Ninetales)
        OVERWORLD(
            sPicTable_Ninetales,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ninetales,
            gShinyOverworldPalette_Ninetales
        )
        .levelUpLearnset = sNinetalesLevelUpLearnset,
        .teachableLearnset = sNinetalesTeachableLearnset,
        .formSpeciesIdTable = sNinetalesFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_VULPIX_ALOLAN] =
    {
        .baseHP        = 38,
        .baseAttack    = 41,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 63,
        .evYield_Speed = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Vulpix"),
        .cryId = CRY_VULPIX,
        .natDexNum = NATIONAL_DEX_VULPIX,
        .categoryName = _("Zorro"),
        .height = 6,
        .weight = 99,
        .description = COMPOUND_STRING(
            "Viven juntos en una manada,\n"
            "cooperando. En clima caluroso,\n"
            "crea piezas de hielo con sus colas y\n"
            "los esparcen para refrescarse."),
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_VulpixAlolan,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_VulpixAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_VulpixAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_VulpixAlolan,
        .shinyPalette = gMonShinyPalette_VulpixAlolan,
        .iconSprite = gMonIcon_VulpixAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Vulpix)
        OVERWORLD(
            sPicTable_VulpixAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_VulpixAlolan,
            gShinyOverworldPalette_VulpixAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sVulpixAlolanLevelUpLearnset,
        .teachableLearnset = sVulpixAlolanTeachableLearnset,
        .eggMoveLearnset = sVulpixAlolanEggMoveLearnset,
        .formSpeciesIdTable = sVulpixFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_NINETALES_ALOLAN}),
    },

    [SPECIES_NINETALES_ALOLAN] =
    {
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 178,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ninetales"),
        .cryId = CRY_NINETALES,
        .natDexNum = NATIONAL_DEX_NINETALES,
        .categoryName = _("Zorro"),
        .height = 11,
        .weight = 199,
        .description = COMPOUND_STRING(
            "Aunque guía a los viajeros extraviados\n"
            "en la montaña hasta su base,\n"
            "no perdonará a quien dañe\n"
            "la naturaleza."),
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NinetalesAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_NinetalesAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NinetalesAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NinetalesAlolan,
        .shinyPalette = gMonShinyPalette_NinetalesAlolan,
        .iconSprite = gMonIcon_NinetalesAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Ninetales)
        OVERWORLD(
            sPicTable_NinetalesAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NinetalesAlolan,
            gShinyOverworldPalette_NinetalesAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sNinetalesAlolanLevelUpLearnset,
        .teachableLearnset = sNinetalesAlolanTeachableLearnset,
        .formSpeciesIdTable = sNinetalesFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
#if P_UPDATED_TYPES >= GEN_6
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_NORMAL, TYPE_FAIRY}
#else
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL}
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_IGGLYBUFF] =
    {
        .baseHP        = 90,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 20,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 170,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 39,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_FRIEND_GUARD },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Igglybuff"),
        .cryId = CRY_IGGLYBUFF,
        .natDexNum = NATIONAL_DEX_IGGLYBUFF,
        .categoryName = _("Globo"),
        .height = 3,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Es suave, flexible y capaz de botar.\n"
			"Cuando canta sin parar con todas sus\n"
			"fuerzas, se va poniendo de un color\n"
			"rosa cada vez más intenso."),
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Igglybuff,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Igglybuff,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Igglybuff,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Igglybuff,
        .shinyPalette = gMonShinyPalette_Igglybuff,
        .iconSprite = gMonIcon_Igglybuff,
        .iconPalIndex = 1,
        FOOTPRINT(Igglybuff)
        OVERWORLD(
            sPicTable_Igglybuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Igglybuff,
            gShinyOverworldPalette_Igglybuff
        )
        .levelUpLearnset = sIgglybuffLevelUpLearnset,
        .teachableLearnset = sIgglybuffTeachableLearnset,
        .eggMoveLearnset = sIgglybuffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_JIGGLYPUFF] =
    {
        .baseHP        = 115,
        .baseAttack    = 45,
        .baseDefense   = 20,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 170,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 95 : 76,
        .evYield_HP = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_FRIEND_GUARD },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Jigglypuff"),
        .cryId = CRY_JIGGLYPUFF,
        .natDexNum = NATIONAL_DEX_JIGGLYPUFF,
        .categoryName = _("Globo"),
        .height = 5,
        .weight = 55,
		.description = COMPOUND_STRING(
			"Aquel que oye su canción cae dormido. Las\n"
			"ondas acústicas de su voz cantarina se\n"
			"acoplan a las ondas cerebrales de quien lo\n"
			"oye y le hacen caer en un profundo sueño."),
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jigglypuff,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Jigglypuff,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Jigglypuff,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Jigglypuff,
        .shinyPalette = gMonShinyPalette_Jigglypuff,
        .iconSprite = gMonIcon_Jigglypuff,
        .iconPalIndex = 0,
        FOOTPRINT(Jigglypuff)
        OVERWORLD(
            sPicTable_Jigglypuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jigglypuff,
            gShinyOverworldPalette_Jigglypuff
        )
        .levelUpLearnset = sJigglypuffLevelUpLearnset,
        .teachableLearnset = sJigglypuffTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}),
    },

    [SPECIES_WIGGLYTUFF] =
    {
        .baseHP        = 140,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 85 : 75,
        .baseSpDefense = 50,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 50,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 218,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 196,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 191,
    #else
        .expYield = 109,
    #endif
        .evYield_HP = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_FRISK },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Wigglytuff"),
        .cryId = CRY_WIGGLYTUFF,
        .natDexNum = NATIONAL_DEX_WIGGLYTUFF,
        .categoryName = _("Globo"),
        .height = 10,
        .weight = 120,
		.description = COMPOUND_STRING(
			"Su piel tiene una calidad de lujo. Dormir\n"
			"junto a un Wigglytuff es una maravilla.\n"
			"Cuando aspira, su tamaño aumenta de\n"
			"forma desmesurada."),
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wigglytuff,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Wigglytuff,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Wigglytuff,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Wigglytuff,
        .shinyPalette = gMonShinyPalette_Wigglytuff,
        .iconSprite = gMonIcon_Wigglytuff,
        .iconPalIndex = 0,
        FOOTPRINT(Wigglytuff)
        OVERWORLD(
            sPicTable_Wigglytuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wigglytuff,
            gShinyOverworldPalette_Wigglytuff
        )
        .levelUpLearnset = sWigglytuffLevelUpLearnset,
        .teachableLearnset = sWigglytuffTeachableLearnset,
    },
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
    [SPECIES_ZUBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_POISON, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 49 : 54,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Zubat"),
        .cryId = CRY_ZUBAT,
        .natDexNum = NATIONAL_DEX_ZUBAT,
        .categoryName = _("Murciélago"),
        .height = 8,
        .weight = 75,
		.description = COMPOUND_STRING(
			"Debido al tiempo que pasaron en oscuras\n"
			"cavernas, sus ojos están atrofiados y\n"
			"desprovistos de visión. Utilizan ondas\n"
			"ultrasónicas para detectar obstáculos."),
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zubat,
        .frontPicFemale = gMonFrontPic_ZubatF,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Zubat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_Zubat,
        .backPicFemale = gMonBackPic_ZubatF,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Zubat,
        .shinyPalette = gMonShinyPalette_Zubat,
        .iconSprite = gMonIcon_Zubat,
        .iconPalIndex = 2,
        FOOTPRINT(Zubat)
        OVERWORLD(
            sPicTable_Zubat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zubat,
            gShinyOverworldPalette_Zubat
        )
        .levelUpLearnset = sZubatLevelUpLearnset,
        .teachableLearnset = sZubatTeachableLearnset,
        .eggMoveLearnset = sZubatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_GOLBAT}),
    },

    [SPECIES_GOLBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_POISON, TYPE_FLYING),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 171,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Golbat"),
        .cryId = CRY_GOLBAT,
        .natDexNum = NATIONAL_DEX_GOLBAT,
        .categoryName = _("Murciélago"),
        .height = 16,
        .weight = 550,
		.description = COMPOUND_STRING(
			"Tiene colmillos que atraviesan el pelaje\n"
			"más grueso. Se ceba chupando la sangre\n"
			"a la gente y a otros Pokémon. Revolotea\n"
			"en la oscuridad y ataca por la espalda."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Golbat,
        .frontPicFemale = gMonFrontPic_GolbatF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Golbat,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Golbat,
        .backPicFemale = gMonBackPic_GolbatF,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Golbat,
        .shinyPalette = gMonShinyPalette_Golbat,
        .iconSprite = gMonIcon_Golbat,
        .iconPalIndex = 2,
        FOOTPRINT(Golbat)
        OVERWORLD(
            sPicTable_Golbat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golbat,
            gShinyOverworldPalette_Golbat
        )
        .levelUpLearnset = sGolbatLevelUpLearnset,
        .teachableLearnset = sGolbatTeachableLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CROBAT}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_CROBAT] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_POISON, TYPE_FLYING),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 204,
    #endif
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Crobat"),
        .cryId = CRY_CROBAT,
        .natDexNum = NATIONAL_DEX_CROBAT,
        .categoryName = _("Murciélago"),
        .height = 18,
        .weight = 750,
		.description = COMPOUND_STRING(
			"Al evolucionar, las patas traseras se le\n"
			"convirtieron en alas. Si bate de forma\n"
			"alterna las alas delanteras y las traseras,\n"
			"puede volar todo el día sin parar."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Crobat,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Crobat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Crobat,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Crobat,
        .shinyPalette = gMonShinyPalette_Crobat,
        .iconSprite = gMonIcon_Crobat,
        .iconPalIndex = 2,
        FOOTPRINT(Crobat)
        OVERWORLD(
            sPicTable_Crobat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Crobat,
            gShinyOverworldPalette_Crobat
        )
        .levelUpLearnset = sCrobatLevelUpLearnset,
        .teachableLearnset = sCrobatTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
    [SPECIES_ODDISH] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 64 : 78,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Oddish"),
        .cryId = CRY_ODDISH,
        .natDexNum = NATIONAL_DEX_ODDISH,
        .categoryName = _("Hierbajo"),
        .height = 5,
        .weight = 54,
		.description = COMPOUND_STRING(
			"Este Pokémon crece absorbiendo luz de\n"
			"luna. Durante el día, se entierra en el\n"
			"suelo y solo deja las hojas fuera. Así\n"
			"evita que los enemigos lo detecten."),
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Oddish,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Oddish,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Oddish,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Oddish,
        .shinyPalette = gMonShinyPalette_Oddish,
        .iconSprite = gMonIcon_Oddish,
        .iconPalIndex = 4,
        FOOTPRINT(Oddish)
        OVERWORLD(
            sPicTable_Oddish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Oddish,
            gShinyOverworldPalette_Oddish
        )
        .levelUpLearnset = sOddishLevelUpLearnset,
        .teachableLearnset = sOddishTeachableLearnset,
        .eggMoveLearnset = sOddishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_GLOOM}),
    },

    [SPECIES_GLOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 138 : 132,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_STENCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gloom"),
        .cryId = CRY_GLOOM,
        .natDexNum = NATIONAL_DEX_GLOOM,
        .categoryName = _("Hierbajo"),
        .height = 8,
        .weight = 86,
		.description = COMPOUND_STRING(
			"De su boca cae una miel muy nociva que\n"
			"desprende un hedor que puede provocar\n"
			"la pérdida de memoria. Con todo, hay\n"
			"quien afirma deleitarse con su fetidez."),
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gloom,
        .frontPicFemale = gMonFrontPic_GloomF,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Gloom,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gloom,
        .backPicFemale = gMonBackPic_GloomF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Gloom,
        .shinyPalette = gMonShinyPalette_Gloom,
        .iconSprite = gMonIcon_Gloom,
        .iconPalIndex = 0,
        FOOTPRINT(Gloom)
        OVERWORLD(
            sPicTable_Gloom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gloom,
            gShinyOverworldPalette_Gloom
        )
        .levelUpLearnset = sGloomLevelUpLearnset,
        .teachableLearnset = sGloomTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                                {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}),
    },

    [SPECIES_VILEPLUME] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 110 : 100,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 245,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 221,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 184,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Vileplume"),
        .cryId = CRY_VILEPLUME,
        .natDexNum = NATIONAL_DEX_VILEPLUME,
        .categoryName = _("Flor"),
        .height = 12,
        .weight = 186,
		.description = COMPOUND_STRING(
			"En las estaciones en las que produce más\n"
			"polen, Vileplume tiñe de amarillo el aire\n"
			"al caminar. Su polen es altamente tóxico\n"
			"y provoca parálisis."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vileplume,
        .frontPicFemale = gMonFrontPic_VileplumeF,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Vileplume,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Vileplume,
        .backPicFemale = gMonBackPic_VileplumeF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Vileplume,
        .shinyPalette = gMonShinyPalette_Vileplume,
        .iconSprite = gMonIcon_Vileplume,
        .iconPalIndex = 0,
        FOOTPRINT(Vileplume)
        OVERWORLD(
            sPicTable_Vileplume,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vileplume,
            gShinyOverworldPalette_Vileplume
        )
        .levelUpLearnset = sVileplumeLevelUpLearnset,
        .teachableLearnset = sVileplumeTeachableLearnset,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_BELLOSSOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 245,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 221,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 184,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bellossom"),
        .cryId = CRY_BELLOSSOM,
        .natDexNum = NATIONAL_DEX_BELLOSSOM,
        .categoryName = _("Flor"),
        .height = 4,
        .weight = 58,
		.description = COMPOUND_STRING(
			"A los pétalos de las flores se les acentúa\n"
			"el color si están expuestos a la luz solar.\n"
			"Cuando persiste el tiempo nublado, dicen\n"
			"que invoca al sol mediante un baile ritual."),
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bellossom,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellossom,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Bellossom,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bellossom,
        .shinyPalette = gMonShinyPalette_Bellossom,
        .iconSprite = gMonIcon_Bellossom,
        .iconPalIndex = 1,
        FOOTPRINT(Bellossom)
        OVERWORLD(
            sPicTable_Bellossom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bellossom,
            gShinyOverworldPalette_Bellossom
        )
        .levelUpLearnset = sBellossomLevelUpLearnset,
        .teachableLearnset = sBellossomTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
    [SPECIES_PARAS] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_BUG, TYPE_GRASS),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 57 : 70,
        .evYield_Attack = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_DAMP },
    #else
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_DAMP },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Paras"),
        .cryId = CRY_PARAS,
        .natDexNum = NATIONAL_DEX_PARAS,
        .categoryName = _("Hongo"),
        .height = 3,
        .weight = 54,
		.description = COMPOUND_STRING(
			"Lleva dos setas parásitas, llamadas\n"
			"tochukaso, que se alimentan a partir\n"
			"de los nutrientes del propio Paras.\n"
			"Las setas se usan como elixir de vida."),
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Paras,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Paras,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Paras,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Paras,
        .shinyPalette = gMonShinyPalette_Paras,
        .iconSprite = gMonIcon_Paras,
        .iconPalIndex = 0,
        FOOTPRINT(Paras)
        OVERWORLD(
            sPicTable_Paras,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Paras,
            gShinyOverworldPalette_Paras
        )
        .levelUpLearnset = sParasLevelUpLearnset,
        .teachableLearnset = sParasTeachableLearnset,
        .eggMoveLearnset = sParasEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_PARASECT}),
    },

    [SPECIES_PARASECT] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_GRASS),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 128,
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_DAMP },
    #else
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_DAMP },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Parasect"),
        .cryId = CRY_PARASECT,
        .natDexNum = NATIONAL_DEX_PARASECT,
        .categoryName = _("Hongo"),
        .height = 10,
        .weight = 295,
		.description = COMPOUND_STRING(
			"Destruyen grandes árboles absorbiendo\n"
			"sus nutrientes. Cuando un árbol azotado\n"
			"por la plaga muere, los Parasect van\n"
			"a por el siguiente al instante."),
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Parasect,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Parasect,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Parasect,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Parasect,
        .shinyPalette = gMonShinyPalette_Parasect,
        .iconSprite = gMonIcon_Parasect,
        .iconPalIndex = 0,
        FOOTPRINT(Parasect)
        OVERWORLD(
            sPicTable_Parasect,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Parasect,
            gShinyOverworldPalette_Parasect
        )
        .levelUpLearnset = sParasectLevelUpLearnset,
        .teachableLearnset = sParasectTeachableLearnset,
    },
#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
    [SPECIES_VENONAT] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 75,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_TINTED_LENS, ABILITY_RUN_AWAY },
    #else
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_RUN_AWAY },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Venonat"),
        .cryId = CRY_VENONAT,
        .natDexNum = NATIONAL_DEX_VENONAT,
        .categoryName = _("Insecto"),
        .height = 10,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Dicen que evolucionó con una fina capa\n"
			"de pelo rígido a modo de protección.\n"
			"Tiene unos ojos tan grandes que no hay\n"
			"presa que le pase desapercibida."),
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Venonat,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Venonat,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Venonat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Venonat,
        .shinyPalette = gMonShinyPalette_Venonat,
        .iconSprite = gMonIcon_Venonat,
        .iconPalIndex = 2,
        FOOTPRINT(Venonat)
        OVERWORLD(
            sPicTable_Venonat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venonat,
            gShinyOverworldPalette_Venonat
        )
        .levelUpLearnset = sVenonatLevelUpLearnset,
        .teachableLearnset = sVenonatTeachableLearnset,
        .eggMoveLearnset = sVenonatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_VENOMOTH}),
    },

    [SPECIES_VENOMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 138,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_TINTED_LENS, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_WONDER_SKIN },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Venomoth"),
        .cryId = CRY_VENOMOTH,
        .natDexNum = NATIONAL_DEX_VENOMOTH,
        .categoryName = _("Polilla ven."),
        .height = 15,
        .weight = 125,
		.description = COMPOUND_STRING(
			"Es nocturno, solo actúa en la oscuridad.\n"
			"Su alimento preferido son los pequeños\n"
			"insectos que se concentran por\n"
			"la noche cerca de los focos de luz."),
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Venomoth,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Venomoth,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_Venomoth,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Venomoth,
        .shinyPalette = gMonShinyPalette_Venomoth,
        .iconSprite = gMonIcon_Venomoth,
        .iconPalIndex = 2,
        FOOTPRINT(Venomoth)
        OVERWORLD(
            sPicTable_Venomoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venomoth,
            gShinyOverworldPalette_Venomoth
        )
        .levelUpLearnset = sVenomothLevelUpLearnset,
        .teachableLearnset = sVenomothTeachableLearnset,
    },
#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define DUGTRIO_EXP_YIELD 149
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DUGTRIO_EXP_YIELD 142
#else
    #define DUGTRIO_EXP_YIELD 153
#endif

#define DUGTRIO_ATTACK (P_UPDATED_STATS >= GEN_7 ? 100 : 80)

    [SPECIES_DIGLETT] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 81,
        .evYield_Speed = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Diglett"),
        .cryId = CRY_DIGLETT,
        .natDexNum = NATIONAL_DEX_DIGLETT,
        .categoryName = _("Topo"),
        .height = 2,
        .weight = 8,
		.description = COMPOUND_STRING(
			"En muchas granjas suelen criarlos porque,\n"
			"caven donde caven, dejan la tierra bien\n"
			"labrada para sembrar. El terreno queda\n"
			"listo para plantar ricas verduras."),
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Diglett,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Diglett,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Diglett,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Diglett,
        .shinyPalette = gMonShinyPalette_Diglett,
        .iconSprite = gMonIcon_Diglett,
        .iconPalIndex = 2,
        FOOTPRINT(Diglett)
        OVERWORLD(
            sPicTable_Diglett,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Diglett,
            gShinyOverworldPalette_Diglett
        )
        .levelUpLearnset = sDiglettLevelUpLearnset,
        .teachableLearnset = sDiglettTeachableLearnset,
        .eggMoveLearnset = sDiglettEggMoveLearnset,
        .formSpeciesIdTable = sDiglettFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO}),
    },

    [SPECIES_DUGTRIO] =
    {
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 50,
        .expYield = DUGTRIO_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dugtrio"),
        .cryId = CRY_DUGTRIO,
        .natDexNum = NATIONAL_DEX_DUGTRIO,
        .categoryName = _("Topo"),
        .height = 7,
        .weight = 333,
		.description = COMPOUND_STRING(
			"Los Dugtrio son trillizos que salieron\n"
			"de un mismo cuerpo, por eso piensan de la\n"
			"misma forma. A la hora de cavar, trabajan\n"
			"en equipo y sin descanso."),
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dugtrio,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Dugtrio,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .frontAnimDelay = 35,
        .backPic = gMonBackPic_Dugtrio,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Dugtrio,
        .shinyPalette = gMonShinyPalette_Dugtrio,
        .iconSprite = gMonIcon_Dugtrio,
        .iconPalIndex = 2,
        FOOTPRINT(Dugtrio)
        OVERWORLD(
            sPicTable_Dugtrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dugtrio,
            gShinyOverworldPalette_Dugtrio
        )
        .levelUpLearnset = sDugtrioLevelUpLearnset,
        .teachableLearnset = sDugtrioTeachableLearnset,
        .formSpeciesIdTable = sDugtrioFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_DIGLETT_ALOLAN] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 81,
        .evYield_Speed = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Diglett"),
        .cryId = CRY_DIGLETT,
        .natDexNum = NATIONAL_DEX_DIGLETT,
        .categoryName = _("Topo"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "La geología rica en metal de su hábitat\n"
            "hizo que le crecieran pelos de acero en\n"
            "su cabeza que cambian de forma según\n"
            "su ánimo y cuando se comunica."),
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DiglettAlolan,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_DiglettAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DiglettAlolan,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DiglettAlolan,
        .shinyPalette = gMonShinyPalette_DiglettAlolan,
        .iconSprite = gMonIcon_DiglettAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Diglett)
        OVERWORLD(
            sPicTable_DiglettAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DiglettAlolan,
            gShinyOverworldPalette_DiglettAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sDiglettAlolanLevelUpLearnset,
        .teachableLearnset = sDiglettAlolanTeachableLearnset,
        .eggMoveLearnset = sDiglettAlolanEggMoveLearnset,
        .formSpeciesIdTable = sDiglettFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO_ALOLAN}),
    },

    [SPECIES_DUGTRIO_ALOLAN] =
    {
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 50,
        .expYield = DUGTRIO_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Dugtrio"),
        .cryId = CRY_DUGTRIO,
        .natDexNum = NATIONAL_DEX_DUGTRIO,
        .categoryName = _("Topo"),
        .height = 7,
        .weight = 666,
        .description = COMPOUND_STRING(
            "Sus hermosos pelos metálicos crean\n"
            "una especie de casco protector en\n"
            "sus cabezas, y también funcionan\n"
            "como sensores de alta precisión."),
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DugtrioAlolan,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_DugtrioAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DugtrioAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DugtrioAlolan,
        .shinyPalette = gMonShinyPalette_DugtrioAlolan,
        .iconSprite = gMonIcon_DugtrioAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Dugtrio)
        OVERWORLD(
            sPicTable_DugtrioAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DugtrioAlolan,
            gShinyOverworldPalette_DugtrioAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sDugtrioAlolanLevelUpLearnset,
        .teachableLearnset = sDugtrioAlolanTeachableLearnset,
        .formSpeciesIdTable = sDugtrioFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
    [SPECIES_MEOWTH] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
    #else
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_UNNERVE },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Meowth"),
        .cryId = CRY_MEOWTH,
        .natDexNum = NATIONAL_DEX_MEOWTH,
        .categoryName = _("Gato araña"),
        .height = 4,
        .weight = 42,
		.description = COMPOUND_STRING(
			"Retrae sus afiladas uñas en las zarpas y\n"
			"camina a hurtadillas. Así pasa inadvertido.\n"
			"No se sabe por qué, pero adora las monedas\n"
			"brillantes que resplandecen con la luz."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meowth,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Meowth,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Meowth,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Meowth,
        .shinyPalette = gMonShinyPalette_Meowth,
        .iconSprite = gMonIcon_Meowth,
        .iconPalIndex = 1,
        FOOTPRINT(Meowth)
        OVERWORLD(
            sPicTable_Meowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meowth,
            gShinyOverworldPalette_Meowth
        )
        .levelUpLearnset = sMeowthLevelUpLearnset,
        .teachableLearnset = sMeowthTeachableLearnset,
        .eggMoveLearnset = sMeowthEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
        .formChangeTable = sMeowthFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERSIAN}),
    },

    [SPECIES_PERSIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 148,
        .evYield_Speed = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_LIMBER, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
    #else
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_UNNERVE },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Persian"),
        .cryId = CRY_PERSIAN,
        .natDexNum = NATIONAL_DEX_PERSIAN,
        .categoryName = _("Gato fino"),
        .height = 10,
        .weight = 320,
		.description = COMPOUND_STRING(
			"Tiene seis llamativos bigotes que le dan un\n"
			"aspecto feroz y le sirven para detectar\n"
			"cualquier amenaza. Si se le agarra por los\n"
			"bigotes, se vuelve dócil."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Persian,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Persian,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Persian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Persian,
        .shinyPalette = gMonShinyPalette_Persian,
        .iconSprite = gMonIcon_Persian,
        .iconPalIndex = 1,
        FOOTPRINT(Persian)
        OVERWORLD(
            sPicTable_Persian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Persian,
            gShinyOverworldPalette_Persian
        )
        .levelUpLearnset = sPersianLevelUpLearnset,
        .teachableLearnset = sPersianTeachableLearnset,
        .formSpeciesIdTable = sPersianFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_MEOWTH_ALOLAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Meowth"),
        .cryId = CRY_MEOWTH,
        .natDexNum = NATIONAL_DEX_MEOWTH,
        .categoryName = _("Gato araña"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "Está acostumbrado al lujo porque solía\n"
            "vivir con la realeza de Alola. Muy listo\n"
            "y orgulloso, es bastante difícil de\n"
            "manejar, pero eso lo hace popular."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowthAlolan,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_MeowthAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MeowthAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowthAlolan,
        .shinyPalette = gMonShinyPalette_MeowthAlolan,
        .iconSprite = gMonIcon_MeowthAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Meowth)
        OVERWORLD(
            sPicTable_MeowthAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeowthAlolan,
            gShinyOverworldPalette_MeowthAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMeowthAlolanLevelUpLearnset,
        .teachableLearnset = sMeowthAlolanTeachableLearnset,
        .eggMoveLearnset = sMeowthAlolanEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PERSIAN_ALOLAN}),
    },

    [SPECIES_PERSIAN_ALOLAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 148,
        .evYield_Speed = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Persian"),
        .cryId = CRY_PERSIAN,
        .natDexNum = NATIONAL_DEX_PERSIAN,
        .categoryName = _("Gato fino"),
        .height = 11,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Mira con desdén a los demás, excepto a\n"
            "sí mismo. Opuesto a su rostro cordial,\n"
            "es tan brutal que tortura a sus presas\n"
            "debilitadas en lugar de rematarlas."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PersianAlolan,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_PersianAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PersianAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PersianAlolan,
        .shinyPalette = gMonShinyPalette_PersianAlolan,
        .iconSprite = gMonIcon_PersianAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Persian)
        OVERWORLD(
            sPicTable_PersianAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PersianAlolan,
            gShinyOverworldPalette_PersianAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sPersianAlolanLevelUpLearnset,
        .teachableLearnset = sPersianAlolanTeachableLearnset,
        .formSpeciesIdTable = sPersianFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
    [SPECIES_MEOWTH_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Meowth"),
        .cryId = CRY_MEOWTH,
        .natDexNum = NATIONAL_DEX_MEOWTH,
        .categoryName = _("Gato araña"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Vivir con un pueblo salvaje y marinero ha\n"
            "endurecido tanto su cuerpo que se ha\n"
            "transformado en acero. Las monedas\n"
            "oscuras son duras y ganan más respeto.\n"),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowthGalarian,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MeowthGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MeowthGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowthGalarian,
        .shinyPalette = gMonShinyPalette_MeowthGalarian,
        .iconSprite = gMonIcon_MeowthGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Meowth)
        OVERWORLD(
            sPicTable_MeowthGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeowthGalarian,
            gShinyOverworldPalette_MeowthGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sMeowthGalarianLevelUpLearnset,
        .teachableLearnset = sMeowthGalarianTeachableLearnset,
        .eggMoveLearnset = sMeowthGalarianEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERRSERKER}),
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Perrserker"),
        .cryId = CRY_PERRSERKER,
        .natDexNum = NATIONAL_DEX_PERRSERKER,
        .categoryName = _("Vikingo"),
        .height = 8,
        .weight = 280,
		.description = COMPOUND_STRING(
			"El pelo de la cabeza se le ha endurecido\n"
			"hasta le punto de parecer un yelmo de\n"
			"hierro. Posee un temperamento muy\n"
			"combativo."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Perrserker,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Perrserker,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Perrserker,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Perrserker,
        .shinyPalette = gMonShinyPalette_Perrserker,
        .iconSprite = gMonIcon_Perrserker,
        .iconPalIndex = 2,
        FOOTPRINT(Perrserker)
        OVERWORLD(
            sPicTable_Perrserker,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Perrserker,
            gShinyOverworldPalette_Perrserker
        )
        .levelUpLearnset = sPerrserkerLevelUpLearnset,
        .teachableLearnset = sPerrserkerTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_MEOWTH_GIGANTAMAX] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Meowth"),
        .cryId = CRY_MEOWTH,
        .natDexNum = NATIONAL_DEX_MEOWTH,
        .categoryName = _("Gato araña"),
        .height = 330,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Se cree que el patrón que surgió en\n"
            "su gigantesca moneda es clave\n"
            "para desbloquear los secretos\n"
            "del fenómeno Dynamax."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowthGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MeowthGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MeowthGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowthGigantamax,
        .shinyPalette = gMonShinyPalette_MeowthGigantamax,
        .iconSprite = gMonIcon_MeowthGigantamax,
        .iconPalIndex = 1,
        FOOTPRINT(Meowth)
        .isGigantamax = TRUE,
        .levelUpLearnset = sMeowthLevelUpLearnset,
        .teachableLearnset = sMeowthTeachableLearnset,
        .eggMoveLearnset = sMeowthEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
        .formChangeTable = sMeowthFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
    [SPECIES_PSYDUCK] =
    {
        .baseHP        = 50,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 64 : 80,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Psyduck"),
        .cryId = CRY_PSYDUCK,
        .natDexNum = NATIONAL_DEX_PSYDUCK,
        .categoryName = _("Pato"),
        .height = 8,
        .weight = 196,
		.description = COMPOUND_STRING(
			"Cuando le aumenta el dolor de cabeza,\n"
			"comienza a usar extraños poderes.\n"
			"Sin embargo, como nunca los recuerda,\n"
			"siempre se le ve aturdido y desconcertado."),
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Psyduck,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Psyduck,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Psyduck,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Psyduck,
        .shinyPalette = gMonShinyPalette_Psyduck,
        .iconSprite = gMonIcon_Psyduck,
        .iconPalIndex = 1,
        FOOTPRINT(Psyduck)
        OVERWORLD(
            sPicTable_Psyduck,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Psyduck,
            gShinyOverworldPalette_Psyduck
        )
        .levelUpLearnset = sPsyduckLevelUpLearnset,
        .teachableLearnset = sPsyduckTeachableLearnset,
        .eggMoveLearnset = sPsyduckEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_GOLDUCK}),
    },

    [SPECIES_GOLDUCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 78,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 174,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Golduck"),
        .cryId = CRY_GOLDUCK,
        .natDexNum = NATIONAL_DEX_GOLDUCK,
        .categoryName = _("Pato"),
        .height = 17,
        .weight = 766,
		.description = COMPOUND_STRING(
			"Es un experto nadador. A veces, se entrena\n"
			"con nadadores profesionales.\n"
			"Cuando le brilla la frente, utiliza poderes\n"
			"psíquicos."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Golduck,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Golduck,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Golduck,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Golduck,
        .shinyPalette = gMonShinyPalette_Golduck,
        .iconSprite = gMonIcon_Golduck,
        .iconPalIndex = 0,
        FOOTPRINT(Golduck)
        OVERWORLD(
            sPicTable_Golduck,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golduck,
            gShinyOverworldPalette_Golduck
        )
        .levelUpLearnset = sGolduckLevelUpLearnset,
        .teachableLearnset = sGolduckTeachableLearnset,
    },
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
    [SPECIES_MANKEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 74,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT },
    #else
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_DEFIANT },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mankey"),
        .cryId = CRY_MANKEY,
        .natDexNum = NATIONAL_DEX_MANKEY,
        .categoryName = _("Mono cerdo"),
        .height = 5,
        .weight = 280,
		.description = COMPOUND_STRING(
			"Si empieza a temblar y a respirar de\n"
			"forma agitada, es que va a enfadarse.\n"
			"Aunque prever su enfado es inútil, pues\n"
			"llega tan rápido que no da tiempo a huir."),
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mankey,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Mankey,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Mankey,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Mankey,
        .shinyPalette = gMonShinyPalette_Mankey,
        .iconSprite = gMonIcon_Mankey,
        .iconPalIndex = 1,
        FOOTPRINT(Mankey)
        OVERWORLD(
            sPicTable_Mankey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mankey,
            gShinyOverworldPalette_Mankey
        )
        .levelUpLearnset = sMankeyLevelUpLearnset,
        .teachableLearnset = sMankeyTeachableLearnset,
        .eggMoveLearnset = sMankeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PRIMEAPE}),
    },

    [SPECIES_PRIMEAPE] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 149,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT },
    #else
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_DEFIANT },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Primeape"),
        .cryId = CRY_PRIMEAPE,
        .natDexNum = NATIONAL_DEX_PRIMEAPE,
        .categoryName = _("Mono cerdo"),
        .height = 10,
        .weight = 320,
		.description = COMPOUND_STRING(
			"Cuando Primeape se enfada, se\n"
			"le acelera el ritmo cardíaco y se\n"
			"le fortalecen los músculos, pero\n"
			"también pierde en inteligencia."),
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Primeape,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Primeape,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Primeape,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Primeape,
        .shinyPalette = gMonShinyPalette_Primeape,
        .iconSprite = gMonIcon_Primeape,
        .iconPalIndex = 2,
        FOOTPRINT(Primeape)
        OVERWORLD(
            sPicTable_Primeape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Primeape,
            gShinyOverworldPalette_Primeape
        )
        .levelUpLearnset = sPrimeapeLevelUpLearnset,
        .teachableLearnset = sPrimeapeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_USE_MOVE_TWENTY_TIMES, MOVE_RAGE_FIST, SPECIES_ANNIHILAPE}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ANNIHILAPE] =
    {
        .baseHP        = 110,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 268,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Annihilape"),
        .cryId = CRY_ANNIHILAPE,
        .natDexNum = NATIONAL_DEX_ANNIHILAPE,
        .categoryName = _("Mono furia"),
        .height = 12,
        .weight = 560,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Annihilape,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Annihilape,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Annihilape,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Annihilape,
        .shinyPalette = gMonShinyPalette_Annihilape,
        .iconSprite = gMonIcon_Annihilape,
        .iconPalIndex = 0,
        FOOTPRINT(Annihilape)
        OVERWORLD(
            sPicTable_Annihilape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Annihilape,
            gShinyOverworldPalette_Annihilape
        )
        .levelUpLearnset = sAnnihilapeLevelUpLearnset,
        .teachableLearnset = sAnnihilapeTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
    [SPECIES_GROWLITHE] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 91,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Growlithe"),
        .cryId = CRY_GROWLITHE,
        .natDexNum = NATIONAL_DEX_GROWLITHE,
        .categoryName = _("Perrito"),
        .height = 7,
        .weight = 190,
		.description = COMPOUND_STRING(
			"Tiene un sentido del olfato excepcional\n"
			"y una gran memoria sensitiva: nunca olvida\n"
			"una esencia e incluso puede identificar\n"
			"las emociones de otros seres vivos."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Growlithe,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Growlithe,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Growlithe,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Growlithe,
        .shinyPalette = gMonShinyPalette_Growlithe,
        .iconSprite = gMonIcon_Growlithe,
        .iconPalIndex = 3,
        FOOTPRINT(Growlithe)
        OVERWORLD(
            sPicTable_Growlithe,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Growlithe,
            gShinyOverworldPalette_Growlithe
        )
        .levelUpLearnset = sGrowlitheLevelUpLearnset,
        .teachableLearnset = sGrowlitheTeachableLearnset,
        .eggMoveLearnset = sGrowlitheEggMoveLearnset,
        .formSpeciesIdTable = sGrowlitheFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}),
    },

    [SPECIES_ARCANINE] =
    {
        .baseHP        = 90,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 95,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 194 : 213,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Arcanine"),
        .cryId = CRY_ARCANINE,
        .natDexNum = NATIONAL_DEX_ARCANINE,
        .categoryName = _("Legendario"),
        .height = 19,
        .weight = 1550,
		.description = COMPOUND_STRING(
			"Es conocido por su velocidad. Dicen que\n"
			"es capaz de correr 10.000 km en 24 horas.\n"
			"El fuego que arde con vigor en su interior\n"
			"constituye su fuente de energía."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Arcanine,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Arcanine,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 8,
        .backPic = gMonBackPic_Arcanine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Arcanine,
        .shinyPalette = gMonShinyPalette_Arcanine,
        .iconSprite = gMonIcon_Arcanine,
        .iconPalIndex = 3,
        FOOTPRINT(Arcanine)
        OVERWORLD(
            sPicTable_Arcanine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arcanine,
            gShinyOverworldPalette_Arcanine
        )
        .levelUpLearnset = sArcanineLevelUpLearnset,
        .teachableLearnset = sArcanineTeachableLearnset,
        .formSpeciesIdTable = sArcanineFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_GROWLITHE_HISUIAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 91,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Growlithe"),
        .cryId = CRY_GROWLITHE,
        .natDexNum = NATIONAL_DEX_GROWLITHE,
        .categoryName = _("Explorador"),
        .height = 8,
        .weight = 227,
        .description = COMPOUND_STRING(
           "Patrullan su territorio en parejas. Se\n"
"cree que los restos de roca ígnea en el\n"
"pelaje de esta especie son el resultado\n"
"de la actividad volcánica en su hábitat."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GrowlitheHisuian,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrowlitheHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GrowlitheHisuian,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GrowlitheHisuian,
        .shinyPalette = gMonShinyPalette_GrowlitheHisuian,
        .iconSprite = gMonIcon_GrowlitheHisuian,
        .iconPalIndex = 0,
        FOOTPRINT(Growlithe)
        OVERWORLD(
            sPicTable_GrowlitheHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GrowlitheHisuian,
            gShinyOverworldPalette_GrowlitheHisuian
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sGrowlitheHisuianLevelUpLearnset,
        .teachableLearnset = sGrowlitheHisuianTeachableLearnset,
        .formSpeciesIdTable = sGrowlitheFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE_HISUIAN}),
    },

    [SPECIES_ARCANINE_HISUIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 194 : 213,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Arcanine"),
        .cryId = CRY_ARCANINE,
        .natDexNum = NATIONAL_DEX_ARCANINE,
        .categoryName = _("Legendario"),
        .height = 20,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "Ataca con sus colmillos ardientes.\n"
"A pesar de su cuerpo, se mueve ágilmente,\n"
"haciéndo creer a sus rivales que están\n"
"siguiendolo en una falsa y alegre caza."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_ArcanineHisuian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ArcanineHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ArcanineHisuian,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ArcanineHisuian,
        .shinyPalette = gMonShinyPalette_ArcanineHisuian,
        .iconSprite = gMonIcon_ArcanineHisuian,
        .iconPalIndex = 0,
        FOOTPRINT(Arcanine)
        OVERWORLD(
            sPicTable_ArcanineHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ArcanineHisuian,
            gShinyOverworldPalette_ArcanineHisuian
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sArcanineHisuianLevelUpLearnset,
        .teachableLearnset = sArcanineHisuianTeachableLearnset,
        .formSpeciesIdTable = sArcanineFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
    [SPECIES_POLIWAG] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 77,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Poliwag"),
        .cryId = CRY_POLIWAG,
        .natDexNum = NATIONAL_DEX_POLIWAG,
        .categoryName = _("Renacuajo"),
        .height = 6,
        .weight = 124,
		.description = COMPOUND_STRING(
			"Tiene una piel muy fina que deja ver las\n"
			"vísceras en espiral que posee. Ahora bien,\n"
			"esta piel tiene la ventaja de ser flexible,\n"
			"por lo que hace rebotar más de un zarpazo."),
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poliwag,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Poliwag,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Poliwag,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Poliwag,
        .shinyPalette = gMonShinyPalette_Poliwag,
        .iconSprite = gMonIcon_Poliwag,
        .iconPalIndex = 0,
        FOOTPRINT(Poliwag)
        OVERWORLD(
            sPicTable_Poliwag,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwag,
            gShinyOverworldPalette_Poliwag
        )
        .levelUpLearnset = sPoliwagLevelUpLearnset,
        .teachableLearnset = sPoliwagTeachableLearnset,
        .eggMoveLearnset = sPoliwagEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_POLIWHIRL}),
    },

    [SPECIES_POLIWHIRL] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 135 : 131,
        .evYield_Speed = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Poliwhirl"),
        .cryId = CRY_POLIWHIRL,
        .natDexNum = NATIONAL_DEX_POLIWHIRL,
        .categoryName = _("Renacuajo"),
        .height = 10,
        .weight = 200,
		.description = COMPOUND_STRING(
			"Tiene la piel húmeda y lubricada con un\n"
			"fluido aceitoso. Gracias a esta película\n"
			"grasa, puede escapar de las garras de\n"
			"cualquier rival en pleno combate."),
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poliwhirl,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Poliwhirl,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 5,
        .backPic = gMonBackPic_Poliwhirl,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Poliwhirl,
        .shinyPalette = gMonShinyPalette_Poliwhirl,
        .iconSprite = gMonIcon_Poliwhirl,
        .iconPalIndex = 0,
        FOOTPRINT(Poliwhirl)
        OVERWORLD(
            sPicTable_Poliwhirl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwhirl,
            gShinyOverworldPalette_Poliwhirl
        )
        .levelUpLearnset = sPoliwhirlLevelUpLearnset,
        .teachableLearnset = sPoliwhirlTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                                {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED},
                                {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}),
    },

    [SPECIES_POLIWRATH] =
    {
        .baseHP        = 90,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WATER, TYPE_FIGHTING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 255,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 230,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 225,
    #else
        .expYield = 185,
    #endif
        .evYield_Defense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Poliwrath"),
        .cryId = CRY_POLIWRATH,
        .natDexNum = NATIONAL_DEX_POLIWRATH,
        .categoryName = _("Renacuajo"),
        .height = 13,
        .weight = 540,
		.description = COMPOUND_STRING(
			"Tiene músculos fornidos y desarrollados,\n"
			"que nunca se cansan por más que los use.\n"
			"Cruzarse el océano Pacífico un par de\n"
			"veces no le supone ningún esfuerzo."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poliwrath,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Poliwrath,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Poliwrath,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Poliwrath,
        .shinyPalette = gMonShinyPalette_Poliwrath,
        .iconSprite = gMonIcon_Poliwrath,
        .iconPalIndex = 0,
        FOOTPRINT(Poliwrath)
        OVERWORLD(
            sPicTable_Poliwrath,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwrath,
            gShinyOverworldPalette_Poliwrath
        )
        .levelUpLearnset = sPoliwrathLevelUpLearnset,
        .teachableLearnset = sPoliwrathTeachableLearnset,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_POLITOED] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 225,
    #else
        .expYield = 185,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_DRIZZLE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Politoed"),
        .cryId = CRY_POLITOED,
        .natDexNum = NATIONAL_DEX_POLITOED,
        .categoryName = _("Rana"),
        .height = 11,
        .weight = 339,
		.description = COMPOUND_STRING(
			"El mechón rizado de Politoed confirma\n"
			"su condición de rey. Dicen que cuanto\n"
			"más le crece y más se le riza, mayor es el\n"
			"respeto que recibe de sus súbditos."),
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Politoed,
        .frontPicFemale = gMonFrontPic_PolitoedF,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Politoed,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Politoed,
        .backPicFemale = gMonBackPic_PolitoedF,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Politoed,
        .shinyPalette = gMonShinyPalette_Politoed,
        .iconSprite = gMonIcon_Politoed,
        .iconPalIndex = 1,
        FOOTPRINT(Politoed)
        OVERWORLD(
            sPicTable_Politoed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Politoed,
            gShinyOverworldPalette_Politoed
        )
        .levelUpLearnset = sPolitoedLevelUpLearnset,
        .teachableLearnset = sPolitoedTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
    [SPECIES_ABRA] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 200,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 62,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 75,
    #else
        .expYield = 73,
    #endif
        .evYield_SpAttack = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Abra"),
        .cryId = CRY_ABRA,
        .natDexNum = NATIONAL_DEX_ABRA,
        .categoryName = _("Psi"),
        .height = 9,
        .weight = 195,
		.description = COMPOUND_STRING(
			"Es un Pokémon que duerme 18 horas al día.\n"
			"Se ha demostrado que cada hora utiliza\n"
			"Teletransporte para cambiar de sitio."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Abra,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Abra,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Abra,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Abra,
        .shinyPalette = gMonShinyPalette_Abra,
        .iconSprite = gMonIcon_Abra,
        .iconPalIndex = 2,
        FOOTPRINT(Abra)
        OVERWORLD(
            sPicTable_Abra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Abra,
            gShinyOverworldPalette_Abra
        )
        .levelUpLearnset = sAbraLevelUpLearnset,
        .teachableLearnset = sAbraTeachableLearnset,
        .eggMoveLearnset = sAbraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_KADABRA}),
    },

    [SPECIES_KADABRA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 100,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 140 : 145,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Kadabra"),
        .cryId = CRY_KADABRA,
        .natDexNum = NATIONAL_DEX_KADABRA,
        .categoryName = _("Psi"),
        .height = 13,
        .weight = 565,
		.description = COMPOUND_STRING(
			"Dicen que un chico que tenía capacidades\n"
			"psíquicas se transformó de repente en\n"
			"Kadabra mientras ayudaba en un estudio\n"
			"sobre poderes extrasensoriales."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kadabra,
        .frontPicFemale = gMonFrontPic_KadabraF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kadabra,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kadabra,
        .backPicFemale = gMonBackPic_KadabraF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kadabra,
        .shinyPalette = gMonShinyPalette_Kadabra,
        .iconSprite = gMonIcon_Kadabra,
        .iconPalIndex = 2,
        FOOTPRINT(Kadabra)
        OVERWORLD(
            sPicTable_Kadabra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Kadabra,
            gShinyOverworldPalette_Kadabra
        )
        .levelUpLearnset = sKadabraLevelUpLearnset,
        .teachableLearnset = sKadabraTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_ALAKAZAM},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_ALAKAZAM}),
    },

#define ALAKAZAM_SP_DEF (P_UPDATED_STATS >= GEN_6 ? 95 : 85)

    [SPECIES_ALAKAZAM] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 120,
        .baseSpAttack  = 135,
        .baseSpDefense = ALAKAZAM_SP_DEF,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 50,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 225,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 221,
    #else
        .expYield = 186,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Alakazam"),
        .cryId = CRY_ALAKAZAM,
        .natDexNum = NATIONAL_DEX_ALAKAZAM,
        .categoryName = _("Psi"),
        .height = 15,
        .weight = 480,
		.description = COMPOUND_STRING(
			"Aunque tiene una gran capacidad psíquica\n"
			"y una inteligencia excepcional, la\n"
			"musculatura de Alakazam es muy débil.\n"
			"Para moverse, utiliza poderes psíquicos."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Alakazam,
        .frontPicFemale = gMonFrontPic_AlakazamF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Alakazam,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Alakazam,
        .backPicFemale = gMonBackPic_AlakazamF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Alakazam,
        .shinyPalette = gMonShinyPalette_Alakazam,
        .iconSprite = gMonIcon_Alakazam,
        .iconPalIndex = 2,
        FOOTPRINT(Alakazam)
        OVERWORLD(
            sPicTable_Alakazam,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Alakazam,
            gShinyOverworldPalette_Alakazam
        )
        .levelUpLearnset = sAlakazamLevelUpLearnset,
        .teachableLearnset = sAlakazamTeachableLearnset,
        .formSpeciesIdTable = sAlakazamFormSpeciesIdTable,
        .formChangeTable = sAlakazamFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALAKAZAM_MEGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        .baseSpDefense = ALAKAZAM_SP_DEF + 10,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 50,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Alakazam"),
        .cryId = CRY_ALAKAZAM_MEGA,
        .natDexNum = NATIONAL_DEX_ALAKAZAM,
        .categoryName = _("Psi"),
        .height = 12,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Reemplazando sus músculos,\n" 
            "liberó todo su poder. Con\n"
            "sus poderes mentales, puede\n"
            "prever todas las cosas."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AlakazamMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AlakazamMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_AlakazamMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_AlakazamMega,
        .shinyPalette = gMonShinyPalette_AlakazamMega,
        .iconSprite = gMonIcon_AlakazamMega,
        .iconPalIndex = 2,
        FOOTPRINT(Alakazam)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAlakazamLevelUpLearnset,
        .teachableLearnset = sAlakazamTeachableLearnset,
        .formSpeciesIdTable = sAlakazamFormSpeciesIdTable,
        .formChangeTable = sAlakazamFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
    [SPECIES_MACHOP] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 180,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 61,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 75,
    #else
        .expYield = 88,
    #endif
        .evYield_Attack = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Machop"),
        .cryId = CRY_MACHOP,
        .natDexNum = NATIONAL_DEX_MACHOP,
        .categoryName = _("Superpoder"),
        .height = 8,
        .weight = 195,
		.description = COMPOUND_STRING(
			"Se entrena hasta la extenuación para\n"
			"dominar todos los tipos de artes\n"
			"marciales. Es tan fuerte que puede llevar\n"
			"a un luchador de sumo sobre los hombros."),
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Machop,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Machop,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Machop,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Machop,
        .shinyPalette = gMonShinyPalette_Machop,
        .iconSprite = gMonIcon_Machop,
        .iconPalIndex = 0,
        FOOTPRINT(Machop)
        OVERWORLD(
            sPicTable_Machop,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machop,
            gShinyOverworldPalette_Machop
        )
        .levelUpLearnset = sMachopLevelUpLearnset,
        .teachableLearnset = sMachopTeachableLearnset,
        .eggMoveLearnset = sMachopEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MACHOKE}),
    },

    [SPECIES_MACHOKE] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 146,
        .evYield_Attack = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Machoke"),
        .cryId = CRY_MACHOKE,
        .natDexNum = NATIONAL_DEX_MACHOKE,
        .categoryName = _("Superpoder"),
        .height = 15,
        .weight = 705,
		.description = COMPOUND_STRING(
			"Machoke lleva un cinturón para controlar\n"
			"su abrumadora energía. Como es tan\n"
			"peligroso, nadie se lo ha quitado nunca."),
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Machoke,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Machoke,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Machoke,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Machoke,
        .shinyPalette = gMonShinyPalette_Machoke,
        .iconSprite = gMonIcon_Machoke,
        .iconPalIndex = 2,
        FOOTPRINT(Machoke)
        OVERWORLD(
            sPicTable_Machoke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machoke,
            gShinyOverworldPalette_Machoke
        )
        .levelUpLearnset = sMachokeLevelUpLearnset,
        .teachableLearnset = sMachokeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_MACHAMP},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_MACHAMP}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define MACHAMP_EXP_YIELD 253
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define MACHAMP_EXP_YIELD 227
#else
    #define MACHAMP_EXP_YIELD 193
#endif

    [SPECIES_MACHAMP] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = MACHAMP_EXP_YIELD,
        .evYield_Attack = 3,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Machamp"),
        .cryId = CRY_MACHAMP,
        .natDexNum = NATIONAL_DEX_MACHAMP,
        .categoryName = _("Superpoder"),
        .height = 16,
        .weight = 1300,
		.description = COMPOUND_STRING(
			"Es imposible defenderse de los puñetazos\n"
			"y golpes que reparte con los cuatro brazos\n"
			"que tiene. Si aparece un rival fuerte, le\n"
			"entran unas ganas enormes de luchar."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Machamp,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Machamp,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Machamp,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Machamp,
        .shinyPalette = gMonShinyPalette_Machamp,
        .iconSprite = gMonIcon_Machamp,
        .iconPalIndex = 0,
        FOOTPRINT(Machamp)
        OVERWORLD(
            sPicTable_Machamp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machamp,
            gShinyOverworldPalette_Machamp
        )
        .levelUpLearnset = sMachampLevelUpLearnset,
        .teachableLearnset = sMachampTeachableLearnset,
        .formSpeciesIdTable = sMachampFormSpeciesIdTable,
        .formChangeTable = sMachampFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MACHAMP_GIGANTAMAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = MACHAMP_EXP_YIELD,
        .evYield_Attack = 3,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Machamp"),
        .cryId = CRY_MACHAMP,
        .natDexNum = NATIONAL_DEX_MACHAMP,
        .categoryName = _("Superpoder"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Este Pokémon usó alguna vez\n"
            "su inmensa fuerza para levantar\n"
            "un barco que estaba en apuros.\n"
            "Luego lo llevó a buen puerto."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_MachampGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MachampGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MachampGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MachampGigantamax,
        .shinyPalette = gMonShinyPalette_MachampGigantamax,
        .iconSprite = gMonIcon_MachampGigantamax,
        .iconPalIndex = 0,
        FOOTPRINT(Machamp)
        .isGigantamax = TRUE,
        .levelUpLearnset = sMachampLevelUpLearnset,
        .teachableLearnset = sMachampTeachableLearnset,
        .formSpeciesIdTable = sMachampFormSpeciesIdTable,
        .formChangeTable = sMachampFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
    [SPECIES_BELLSPROUT] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 70,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 84,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bellsprout"),
        .cryId = CRY_BELLSPROUT,
        .natDexNum = NATIONAL_DEX_BELLSPROUT,
        .categoryName = _("Flor"),
        .height = 7,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Tiene un cuerpo delgado y flexible que\n"
			"le permite inclinarse y balancearse para\n"
			"esquivar ataques. Escupe un fluido\n"
			"corrosivo que derrite hasta el hierro."),
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bellsprout,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellsprout,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Bellsprout,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Bellsprout,
        .shinyPalette = gMonShinyPalette_Bellsprout,
        .iconSprite = gMonIcon_Bellsprout,
        .iconPalIndex = 1,
        FOOTPRINT(Bellsprout)
        OVERWORLD(
            sPicTable_Bellsprout,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bellsprout,
            gShinyOverworldPalette_Bellsprout
        )
        .levelUpLearnset = sBellsproutLevelUpLearnset,
        .teachableLearnset = sBellsproutTeachableLearnset,
        .eggMoveLearnset = sBellsproutEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_WEEPINBELL}),
    },

    [SPECIES_WEEPINBELL] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 151,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Weepinbell"),
        .cryId = CRY_WEEPINBELL,
        .natDexNum = NATIONAL_DEX_WEEPINBELL,
        .categoryName = _("Atrapamoscas"),
        .height = 10,
        .weight = 64,
		.description = COMPOUND_STRING(
			"Tiene un gancho a modo de extremidad\n"
			"superior trasera que usa por la noche para\n"
			"colgarse de una rama y dormir. Si se mueve\n"
			"mientras duerme, puede acabar en el suelo."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Weepinbell,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Weepinbell,
        .frontAnimId = ANIM_SWING_CONVEX,
        .frontAnimDelay = 3,
        .backPic = gMonBackPic_Weepinbell,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Weepinbell,
        .shinyPalette = gMonShinyPalette_Weepinbell,
        .iconSprite = gMonIcon_Weepinbell,
        .iconPalIndex = 1,
        FOOTPRINT(Weepinbell)
        OVERWORLD(
            sPicTable_Weepinbell,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Weepinbell,
            gShinyOverworldPalette_Weepinbell
        )
        .levelUpLearnset = sWeepinbellLevelUpLearnset,
        .teachableLearnset = sWeepinbellTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}),
    },

    [SPECIES_VICTREEBEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 70 : 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 245,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 221,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 191,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Victreebel"),
        .cryId = CRY_VICTREEBEL,
        .natDexNum = NATIONAL_DEX_VICTREEBEL,
        .categoryName = _("Atrapamoscas"),
        .height = 17,
        .weight = 155,
		.description = COMPOUND_STRING(
			"Tiene una enredadera que le sale de la\n"
			"cabeza. Cuando la agita y colea, recuerda\n"
			"a un animal y así consigue atraer a sus\n"
			"presas. Si se le acerca un rival, lo engulle."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Victreebel,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Victreebel,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Victreebel,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Victreebel,
        .shinyPalette = gMonShinyPalette_Victreebel,
        .iconSprite = gMonIcon_Victreebel,
        .iconPalIndex = 1,
        FOOTPRINT(Victreebel)
        OVERWORLD(
            sPicTable_Victreebel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Victreebel,
            gShinyOverworldPalette_Victreebel
        )
        .levelUpLearnset = sVictreebelLevelUpLearnset,
        .teachableLearnset = sVictreebelTeachableLearnset,
    },
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
    [SPECIES_TENTACOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 67 : 105,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tentacool"),
        .cryId = CRY_TENTACOOL,
        .natDexNum = NATIONAL_DEX_TENTACOOL,
        .categoryName = _("Medusa"),
        .height = 9,
        .weight = 455,
		.description = COMPOUND_STRING(
			"Se compone casi enteramente de agua.\n"
			"Atrapa a su enemigo con sus dos largos\n"
			"tentáculos y le clava los venenosos\n"
			"aguijones que tiene en los extremos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tentacool,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Tentacool,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tentacool,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Tentacool,
        .shinyPalette = gMonShinyPalette_Tentacool,
        .iconSprite = gMonIcon_Tentacool,
        .iconPalIndex = 0,
        FOOTPRINT(Tentacool)
        OVERWORLD(
            sPicTable_Tentacool,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Tentacool,
            gShinyOverworldPalette_Tentacool
        )
        .levelUpLearnset = sTentacoolLevelUpLearnset,
        .teachableLearnset = sTentacoolTeachableLearnset,
        .eggMoveLearnset = sTentacoolEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TENTACRUEL}),
    },

    [SPECIES_TENTACRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 205,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tentacruel"),
        .cryId = CRY_TENTACRUEL,
        .natDexNum = NATIONAL_DEX_TENTACRUEL,
        .categoryName = _("Medusa"),
        .height = 16,
        .weight = 550,
		.description = COMPOUND_STRING(
			"Vive en formaciones complejas de roca en\n"
			"el suelo marino y atrapa a su presa usando\n"
			"sus 80 tentáculos. Si se pone nervioso,\n"
			"le brillan las esferas rojas de la cabeza."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Tentacruel,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Tentacruel,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Tentacruel,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Tentacruel,
        .shinyPalette = gMonShinyPalette_Tentacruel,
        .iconSprite = gMonIcon_Tentacruel,
        .iconPalIndex = 0,
        FOOTPRINT(Tentacruel)
        OVERWORLD(
            sPicTable_Tentacruel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Tentacruel,
            gShinyOverworldPalette_Tentacruel
        )
        .levelUpLearnset = sTentacruelLevelUpLearnset,
        .teachableLearnset = sTentacruelTeachableLearnset,
    },
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE

#if P_UPDATED_EXP_YIELDS >= GEN_5
    #define GEODUDE_EXP_YIELD 60
#elif P_UPDATED_EXP_YIELDS >= GEN_4
    #define GEODUDE_EXP_YIELD 73
#else
    #define GEODUDE_EXP_YIELD 86
#endif

#define GOLEM_ATTACK (P_UPDATED_STATS >= GEN_6 ? 120 : 110)

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define GOLEM_EXP_YIELD 248
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define GOLEM_EXP_YIELD 223
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define GOLEM_EXP_YIELD 218
#else
    #define GOLEM_EXP_YIELD 177
#endif

    [SPECIES_GEODUDE] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 255,
        .expYield = GEODUDE_EXP_YIELD,
        .evYield_Defense = 1,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Geodude"),
        .cryId = CRY_GEODUDE,
        .natDexNum = NATIONAL_DEX_GEODUDE,
        .categoryName = _("Roca"),
        .height = 4,
        .weight = 200,
		.description = COMPOUND_STRING(
			"Sube caminos de montaña usando solo la\n"
			"fuerza de los brazos. Como parece un canto\n"
			"rodado que delimita el camino, algunos\n"
			"montañeros se llegan a tropezar con él."),
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Geodude,
        .frontPicSize = MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_Geodude,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Geodude,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Geodude,
        .shinyPalette = gMonShinyPalette_Geodude,
        .iconSprite = gMonIcon_Geodude,
        .iconPalIndex = 1,
        FOOTPRINT(Geodude)
        OVERWORLD(
            sPicTable_Geodude,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Geodude,
            gShinyOverworldPalette_Geodude
        )
        .levelUpLearnset = sGeodudeLevelUpLearnset,
        .teachableLearnset = sGeodudeTeachableLearnset,
        .eggMoveLearnset = sGeodudeEggMoveLearnset,
        .formSpeciesIdTable = sGeodudeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER}),
    },

    [SPECIES_GRAVELER] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 134,
        .evYield_Defense = 2,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Graveler"),
        .cryId = CRY_GRAVELER,
        .natDexNum = NATIONAL_DEX_GRAVELER,
        .categoryName = _("Roca"),
        .height = 10,
        .weight = 1050,
		.description = COMPOUND_STRING(
			"Baja las montañas rodando por cuestas\n"
			"escarpadas. Es tan robusto que\n"
			"destroza árboles y cantos rodados\n"
			"al impactar contra ellos."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Graveler,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Graveler,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Graveler,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Graveler,
        .shinyPalette = gMonShinyPalette_Graveler,
        .iconSprite = gMonIcon_Graveler,
        .iconPalIndex = 1,
        FOOTPRINT(Graveler)
        OVERWORLD(
            sPicTable_Graveler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Graveler,
            gShinyOverworldPalette_Graveler
        )
        .levelUpLearnset = sGravelerLevelUpLearnset,
        .teachableLearnset = sGravelerTeachableLearnset,
        .formSpeciesIdTable = sGravelerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM}),
    },

    [SPECIES_GOLEM] =
    {
        .baseHP        = 80,
        .baseAttack    = GOLEM_ATTACK,
        .baseDefense   = 130,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 45,
        .expYield = GOLEM_EXP_YIELD,
        .evYield_Defense = 3,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Golem"),
        .cryId = CRY_GOLEM,
        .natDexNum = NATIONAL_DEX_GOLEM,
        .categoryName = _("Megatón"),
        .height = 14,
        .weight = 3000,
		.description = COMPOUND_STRING(
			"Dicen que vive en cráteres volcánicos\n"
			"situados en altas cimas. Una vez\n"
			"al año, muda la piel y crece. La muda\n"
			"se deshace y es absorbida por la tierra."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Golem,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Golem,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Golem,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Golem,
        .shinyPalette = gMonShinyPalette_Golem,
        .iconSprite = gMonIcon_Golem,
        .iconPalIndex = 2,
        FOOTPRINT(Golem)
        OVERWORLD(
            sPicTable_Golem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golem,
            gShinyOverworldPalette_Golem
        )
        .levelUpLearnset = sGolemLevelUpLearnset,
        .teachableLearnset = sGolemTeachableLearnset,
        .formSpeciesIdTable = sGolemFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_GEODUDE_ALOLAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 255,
        .expYield = GEODUDE_EXP_YIELD,
        .evYield_Defense = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Geodude"),
        .cryId = CRY_GEODUDE,
        .natDexNum = NATIONAL_DEX_GEODUDE,
        .categoryName = _("Roca"),
        .height = 4,
        .weight = 203,
        .description = COMPOUND_STRING(
            "Su cuerpo es magnético. La arena\n"
            "férrica se adhiere a su cuerpo.\n"
            "Si pisas uno de estos sin querer, te\n"
            "dará una cabezazo y te electrocutara."),
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GeodudeAlolan,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_GeodudeAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_GeodudeAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GeodudeAlolan,
        .shinyPalette = gMonShinyPalette_GeodudeAlolan,
        .iconSprite = gMonIcon_GeodudeAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Geodude)
        OVERWORLD(
            sPicTable_GeodudeAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GeodudeAlolan,
            gShinyOverworldPalette_GeodudeAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGeodudeAlolanLevelUpLearnset,
        .teachableLearnset = sGeodudeAlolanTeachableLearnset,
        .eggMoveLearnset = sGeodudeAlolanEggMoveLearnset,
        .formSpeciesIdTable = sGeodudeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER_ALOLAN}),
    },

    [SPECIES_GRAVELER_ALOLAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 134,
        .evYield_Defense = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Graveler"),
        .cryId = CRY_GRAVELER,
        .natDexNum = NATIONAL_DEX_GRAVELER,
        .categoryName = _("Roca"),
        .height = 10,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "Cuando 2 Graveler se golpean entre sí\n"
            "crean destellos de luz y ruidos\n"
            "ensordecedores. La gente los llama\n"
            "“fuegos artificiales de la tierra.”"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GravelerAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_GravelerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GravelerAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GravelerAlolan,
        .shinyPalette = gMonShinyPalette_GravelerAlolan,
        .iconSprite = gMonIcon_GravelerAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Graveler)
        OVERWORLD(
            sPicTable_GravelerAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GravelerAlolan,
            gShinyOverworldPalette_GravelerAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGravelerAlolanLevelUpLearnset,
        .teachableLearnset = sGravelerAlolanTeachableLearnset,
        .formSpeciesIdTable = sGravelerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM_ALOLAN},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM_ALOLAN}),
    },

    [SPECIES_GOLEM_ALOLAN] =
    {
        .baseHP        = 80,
        .baseAttack    = GOLEM_ATTACK,
        .baseDefense   = 130,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = GOLEM_EXP_YIELD,
        .evYield_Defense = 3,
        .itemCommon = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Golem"),
        .cryId = CRY_GOLEM,
        .natDexNum = NATIONAL_DEX_GOLEM,
        .categoryName = _("Megatón"),
        .height = 17,
        .weight = 3160,
        .description = COMPOUND_STRING(
            "Lanza rocas cargadas con electricidad.\n"
            "Incluso si la roca se lanza mal,\n"
            "solo rozar al oponente causará\n"
            "entumecimiento y desmayo."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_GolemAlolan,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GolemAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GolemAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GolemAlolan,
        .shinyPalette = gMonShinyPalette_GolemAlolan,
        .iconSprite = gMonIcon_GolemAlolan,
        .iconPalIndex = 2,
        FOOTPRINT(Golem)
        OVERWORLD(
            sPicTable_GolemAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GolemAlolan,
            gShinyOverworldPalette_GolemAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGolemAlolanLevelUpLearnset,
        .teachableLearnset = sGolemAlolanTeachableLearnset,
        .formSpeciesIdTable = sGolemFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
    [SPECIES_PONYTA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 82 : 152,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ponyta"),
        .cryId = CRY_PONYTA,
        .natDexNum = NATIONAL_DEX_PONYTA,
        .categoryName = _("Caballo F."),
        .height = 10,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Al nacer, es muy débil y apenas puede\n"
			"ponerse en pie. Con todo, se va haciendo\n"
			"más fuerte al tropezarse y caerse en su\n"
			"intento por seguir a sus progenitores."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ponyta,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Ponyta,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Ponyta,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Ponyta,
        .shinyPalette = gMonShinyPalette_Ponyta,
        .iconSprite = gMonIcon_Ponyta,
        .iconPalIndex = 3,
        FOOTPRINT(Ponyta)
        OVERWORLD(
            sPicTable_Ponyta,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ponyta,
            gShinyOverworldPalette_Ponyta
        )
        .levelUpLearnset = sPonytaLevelUpLearnset,
        .teachableLearnset = sPonytaTeachableLearnset,
        .eggMoveLearnset = sPonytaEggMoveLearnset,
        .formSpeciesIdTable = sPonytaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH}),
    },

    [SPECIES_RAPIDASH] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 192,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Rapidash"),
        .cryId = CRY_RAPIDASH,
        .natDexNum = NATIONAL_DEX_RAPIDASH,
        .categoryName = _("Caballo F."),
        .height = 17,
        .weight = 950,
		.description = COMPOUND_STRING(
			"Suele trotar sin rumbo por campos y llanos.\n"
			"Pero, si debe ir a algún sitio, se le aviva el\n"
			"fuego de las melenas y emprende un galope\n"
			"llameante alcanzando 240 km por hora."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Rapidash,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rapidash,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Rapidash,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Rapidash,
        .shinyPalette = gMonShinyPalette_Rapidash,
        .iconSprite = gMonIcon_Rapidash,
        .iconPalIndex = 3,
        FOOTPRINT(Rapidash)
        OVERWORLD(
            sPicTable_Rapidash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rapidash,
            gShinyOverworldPalette_Rapidash
        )
        .levelUpLearnset = sRapidashLevelUpLearnset,
        .teachableLearnset = sRapidashTeachableLearnset,
        .formSpeciesIdTable = sRapidashFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_PONYTA_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 82 : 152,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ponyta"),
        .cryId = CRY_PONYTA,
        .natDexNum = NATIONAL_DEX_PONYTA,
        .categoryName = _("Unicorne"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Su pequeño cuerno oculta un poder\n"
            "curativo. Te mirará a los ojos y\n"
            "leerá el tu corazón. Si encuentra\n"
            "maldad, se esconderá de inmediato."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PonytaGalarian,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_PonytaGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PonytaGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PonytaGalarian,
        .shinyPalette = gMonShinyPalette_PonytaGalarian,
        .iconSprite = gMonIcon_PonytaGalarian,
        .iconPalIndex = 2,
        FOOTPRINT(Ponyta)
        OVERWORLD(
            sPicTable_PonytaGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PonytaGalarian,
            gShinyOverworldPalette_PonytaGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPonytaGalarianLevelUpLearnset,
        .teachableLearnset = sPonytaGalarianTeachableLearnset,
        .eggMoveLearnset = sPonytaGalarianEggMoveLearnset,
        .formSpeciesIdTable = sPonytaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH_GALARIAN}),
    },

    [SPECIES_RAPIDASH_GALARIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 192,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Rapidash"),
        .cryId = CRY_RAPIDASH,
        .natDexNum = NATIONAL_DEX_RAPIDASH,
        .categoryName = _("Unicorne"),
        .height = 17,
        .weight = 800,
        .description = COMPOUND_STRING(
            "Poco puede resistir su Corte Psíquico.\n"
            "Desatado desde su cuerno,\n"
            "el movimiento perforará una placa de\n"
            "metal grueso sin problemas."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_RapidashGalarian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RapidashGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RapidashGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RapidashGalarian,
        .shinyPalette = gMonShinyPalette_RapidashGalarian,
        .iconSprite = gMonIcon_RapidashGalarian,
        .iconPalIndex = 2,
        FOOTPRINT(Rapidash)
        OVERWORLD(
            sPicTable_RapidashGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RapidashGalarian,
            gShinyOverworldPalette_RapidashGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sRapidashGalarianLevelUpLearnset,
        .teachableLearnset = sRapidashGalarianTeachableLearnset,
        .formSpeciesIdTable = sRapidashFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
    [SPECIES_SLOWPOKE] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 99,
        .evYield_HP = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Slowpoke"),
        .cryId = CRY_SLOWPOKE,
        .natDexNum = NATIONAL_DEX_SLOWPOKE,
        .categoryName = _("Atontado"),
        .height = 12,
        .weight = 360,
		.description = COMPOUND_STRING(
			"Con la cola, atrapa a su rival metiéndolo\n"
			"bajo agua en las riberas de los ríos. Suele\n"
			"olvidar lo que estaba haciendo y pasarse\n"
			"días enteros holgazaneando en la orilla."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Slowpoke,
        .frontPicSize = MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Slowpoke,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Slowpoke,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Slowpoke,
        .shinyPalette = gMonShinyPalette_Slowpoke,
        .iconSprite = gMonIcon_Slowpoke,
        .iconPalIndex = 0,
        FOOTPRINT(Slowpoke)
        OVERWORLD(
            sPicTable_Slowpoke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowpoke,
            gShinyOverworldPalette_Slowpoke
        )
        .levelUpLearnset = sSlowpokeLevelUpLearnset,
        .teachableLearnset = sSlowpokeTeachableLearnset,
        .eggMoveLearnset = sSlowpokeEggMoveLearnset,
        .formSpeciesIdTable = sSlowpokeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_SLOWBRO},
                                {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING},
                                {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}),
    },

    [SPECIES_SLOWBRO] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 164,
        .evYield_Defense = (P_UPDATED_EVS >= GEN_8) ? 2 : 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Slowbro"),
        .cryId = CRY_SLOWBRO,
        .natDexNum = NATIONAL_DEX_SLOWBRO,
        .categoryName = _("Ermitaño"),
        .height = 16,
        .weight = 785,
		.description = COMPOUND_STRING(
			"Lleva en la cola un Shellder enganchado\n"
			"por los dientes. Como Slowbro no puede\n"
			"pescar con la cola, se mete en el agua\n"
			"de mala gana en busca de sus presas."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Slowbro,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Slowbro,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Slowbro,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Slowbro,
        .shinyPalette = gMonShinyPalette_Slowbro,
        .iconSprite = gMonIcon_Slowbro,
        .iconPalIndex = 0,
        FOOTPRINT(Slowbro)
        OVERWORLD(
            sPicTable_Slowbro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowbro,
            gShinyOverworldPalette_Slowbro
        )
        .levelUpLearnset = sSlowbroLevelUpLearnset,
        .teachableLearnset = sSlowbroTeachableLearnset,
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable,
        .formChangeTable = sSlowbroFormChangeTable,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 164,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Slowking"),
        .cryId = CRY_SLOWKING,
        .natDexNum = NATIONAL_DEX_SLOWKING,
        .categoryName = _("Regio"),
        .height = 20,
        .weight = 795,
		.description = COMPOUND_STRING(
			"Slowking investiga cada día los misterios\n"
			"del mundo que aún no se han resuelto, pero\n"
			"al parecer se le olvida lo aprendido cuando\n"
			"el Shellder que lleva encima se suelta."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Slowking,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Slowking,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Slowking,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Slowking,
        .shinyPalette = gMonShinyPalette_Slowking,
        .iconSprite = gMonIcon_Slowking,
        .iconPalIndex = 0,
        FOOTPRINT(Slowking)
        OVERWORLD(
            sPicTable_Slowking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowking,
            gShinyOverworldPalette_Slowking
        )
        .levelUpLearnset = sSlowkingLevelUpLearnset,
        .teachableLearnset = sSlowkingTeachableLearnset,
        .formSpeciesIdTable = sSlowkingFormSpeciesIdTable,
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
    [SPECIES_SLOWBRO_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 207,
        .evYield_Defense = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Slowbro"),
        .cryId = CRY_SLOWBRO,
        .natDexNum = NATIONAL_DEX_SLOWBRO,
        .categoryName = _("Ermitaño"),
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Cuando se baña en la energía\n"
            "Mega, Shellder se convierte\n"
            "en una armadura impenetrable.\n"
            "No hay cambios en Slowpoke."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_SlowbroMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowbroMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlowbroMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_SlowbroMega,
        .shinyPalette = gMonShinyPalette_SlowbroMega,
        .iconSprite = gMonIcon_SlowbroMega,
        .iconPalIndex = 0,
        FOOTPRINT(Slowbro)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSlowbroLevelUpLearnset,
        .teachableLearnset = sSlowbroTeachableLearnset,
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable,
        .formChangeTable = sSlowbroFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 99,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Slowpoke"),
        .cryId = CRY_SLOWPOKE_GALARIAN,
        .natDexNum = NATIONAL_DEX_SLOWPOKE,
        .categoryName = _("Atontado"),
        .height = 12,
        .weight = 360,
        .description = COMPOUND_STRING(
            "Aunque normalmente está distraído, su\n"
            "expresión se agudiza en ocasiones.\n"
            "La causa parece estar en su dieta, que\n"
            "también da a su cola un sabor picante."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SlowpokeGalarian,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_SlowpokeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlowpokeGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SlowpokeGalarian,
        .shinyPalette = gMonShinyPalette_SlowpokeGalarian,
        .iconSprite = gMonIcon_SlowpokeGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Slowpoke)
        OVERWORLD(
            sPicTable_SlowpokeGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SlowpokeGalarian,
            gShinyOverworldPalette_SlowpokeGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sSlowpokeGalarianLevelUpLearnset,
        .teachableLearnset = sSlowpokeGalarianTeachableLearnset,
        .eggMoveLearnset = sSlowpokeGalarianEggMoveLearnset,
        .formSpeciesIdTable = sSlowpokeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GALARICA_CUFF, SPECIES_SLOWBRO_GALARIAN},
                                {EVO_ITEM, ITEM_GALARICA_WREATH, SPECIES_SLOWKING_GALARIAN}),
    },

    [SPECIES_SLOWBRO_GALARIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_POISON, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 172,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Slowbro"),
        .cryId = CRY_SLOWBRO,
        .natDexNum = NATIONAL_DEX_SLOWBRO,
        .categoryName = _("Ermitaño"),
        .height = 16,
        .weight = 705,
        .description = COMPOUND_STRING(
            "Un mordisco de Shellder desencadenó una\n"
"reacción con las especias dentro de su\n"
"cuerpo, haciendo que se convirtiera en un\n"
"Pokémon de tipo Veneno.\n"),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_SlowbroGalarian,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SlowbroGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlowbroGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SlowbroGalarian,
        .shinyPalette = gMonShinyPalette_SlowbroGalarian,
        .iconSprite = gMonIcon_SlowbroGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Slowbro)
        OVERWORLD_SET_ANIM(
            sPicTable_SlowbroGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_SlowbroGalarian,
            gShinyOverworldPalette_SlowbroGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sSlowbroGalarianLevelUpLearnset,
        .teachableLearnset = sSlowbroGalarianTeachableLearnset,
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING_GALARIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_POISON, TYPE_PSYCHIC),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 164,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Slowking"),
        .cryId = CRY_SLOWKING,
        .natDexNum = NATIONAL_DEX_SLOWKING,
        .categoryName = _("Chamán"),
        .height = 18,
        .weight = 795,
        .description = COMPOUND_STRING(
            "Una combinación de toxinas y el impacto de\n"
"evolucionar ha incrementado la astucia\n"
"de Shellder hasta el punto de\n"
"controlar a Slowking."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_SlowkingGalarian,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowkingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlowkingGalarian,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SlowkingGalarian,
        .shinyPalette = gMonShinyPalette_SlowkingGalarian,
        .iconSprite = gMonIcon_SlowkingGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Slowking)
        OVERWORLD(
            sPicTable_SlowkingGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SlowkingGalarian,
            gShinyOverworldPalette_SlowkingGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sSlowkingGalarianLevelUpLearnset,
        .teachableLearnset = sSlowkingGalarianTeachableLearnset,
        .formSpeciesIdTable = sSlowkingFormSpeciesIdTable,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
    [SPECIES_MAGNEMITE] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 89,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magnemite"),
        .cryId = CRY_MAGNEMITE,
        .natDexNum = NATIONAL_DEX_MAGNEMITE,
        .categoryName = _("Imán"),
        .height = 3,
        .weight = 60,
		.description = COMPOUND_STRING(
			"Las unidades de las extremidades son\n"
			"imanes de gran alcance. Generan\n"
			"magnetismo suficiente para atraer objetos\n"
			"de hierro que estén a 100 m de distancia."),
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magnemite,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 20,
        .frontAnimFrames = sAnims_Magnemite,
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,
        .enemyMonElevation = 17,
        .backPic = gMonBackPic_Magnemite,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Magnemite,
        .shinyPalette = gMonShinyPalette_Magnemite,
        .iconSprite = gMonIcon_Magnemite,
        .iconPalIndex = 0,
        FOOTPRINT(Magnemite)
        OVERWORLD(
            sPicTable_Magnemite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Magnemite,
            gShinyOverworldPalette_Magnemite
        )
        .levelUpLearnset = sMagnemiteLevelUpLearnset,
        .teachableLearnset = sMagnemiteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGNETON}),
    },

    [SPECIES_MAGNETON] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 161,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magneton"),
        .cryId = CRY_MAGNETON,
        .natDexNum = NATIONAL_DEX_MAGNETON,
        .categoryName = _("Imán"),
        .height = 10,
        .weight = 600,
		.description = COMPOUND_STRING(
			"Son tres Magnemite que se atraen entre\n"
			"sí. Genera ondas de radio de gran alcance\n"
			"que provocan que la temperatura suba\n"
			"2 grados centígrados en un radio de 1 km."),
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magneton,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Magneton,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Magneton,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Magneton,
        .shinyPalette = gMonShinyPalette_Magneton,
        .iconSprite = gMonIcon_Magneton,
        .iconPalIndex = 0,
        FOOTPRINT(Magneton)
        OVERWORLD(
            sPicTable_Magneton,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Magneton,
            gShinyOverworldPalette_Magneton
        )
        .levelUpLearnset = sMagnetonLevelUpLearnset,
        .teachableLearnset = sMagnetonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_MAGNEZONE},
                                {EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_MAGNEZONE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 211,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magnezone"),
        .cryId = CRY_MAGNEZONE,
        .natDexNum = NATIONAL_DEX_MAGNEZONE,
        .categoryName = _("Mágnetico"),
        .height = 12,
        .weight = 1800,
		.description = COMPOUND_STRING(
			"Evolucionó por la exposición a un\n"
			"campo magnético especial. Tres unidades\n"
			"generan magnetismo."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magnezone,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magnezone,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Magnezone,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Magnezone,
        .shinyPalette = gMonShinyPalette_Magnezone,
        .iconSprite = gMonIcon_Magnezone,
        .iconPalIndex = 0,
        FOOTPRINT(Magnezone)
        OVERWORLD(
            sPicTable_Magnezone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magnezone,
            gShinyOverworldPalette_Magnezone
        )
        .levelUpLearnset = sMagnezoneLevelUpLearnset,
        .teachableLearnset = sMagnezoneTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_FARFETCHD
#define FARFETCHD_ATTACK (P_UPDATED_STATS >= GEN_7 ? 90 : 65)

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define FARFETCHD_EXP_YIELD 132
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define FARFETCHD_EXP_YIELD 123
#else
    #define FARFETCHD_EXP_YIELD 94
#endif

    [SPECIES_FARFETCHD] =
    {
        .baseHP        = 52,
        .baseAttack    = FARFETCHD_ATTACK,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = FARFETCHD_EXP_YIELD,
        .evYield_Attack = 1,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Farfetch'd"),
        .cryId = CRY_FARFETCHD,
        .natDexNum = NATIONAL_DEX_FARFETCHD,
        .categoryName = _("Pato salvaje"),
        .height = 8,
        .weight = 150,
		.description = COMPOUND_STRING(
			"Lleva siempre una especie de palo de\n"
			"algún tipo de planta. Según parece, los\n"
			"hay mejores y peores. Tiene fama de\n"
			"pelearse por algún palo."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Farfetchd,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Farfetchd,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Farfetchd,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Farfetchd,
        .shinyPalette = gMonShinyPalette_Farfetchd,
        .iconSprite = gMonIcon_Farfetchd,
        .iconPalIndex = 1,
        FOOTPRINT(Farfetchd)
        OVERWORLD_SET_ANIM(
            sPicTable_Farfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Farfetchd,
            gShinyOverworldPalette_Farfetchd
        )
        .levelUpLearnset = sFarfetchdLevelUpLearnset,
        .teachableLearnset = sFarfetchdTeachableLearnset,
        .eggMoveLearnset = sFarfetchdEggMoveLearnset,
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_FARFETCHD_GALARIAN] =
    {
        .baseHP        = 52,
        .baseAttack    = FARFETCHD_ATTACK + 5,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = FARFETCHD_EXP_YIELD,
        .evYield_Attack = 1,
        .itemCommon = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Farfetch'd"),
        .cryId = CRY_FARFETCHD,
        .natDexNum = NATIONAL_DEX_FARFETCHD,
        .categoryName = _("Pato salvaje"),
        .height = 8,
        .weight = 420,
        .description = COMPOUND_STRING(
            "Los tallos son más gruesos y largos\n"
            "en la región de Galar. Los Farfetch'd\n"
            "que se adaptaron a estos tallos\n"
            "adoptaron una forma única."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_FarfetchdGalarian,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_FarfetchdGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FarfetchdGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_FarfetchdGalarian,
        .shinyPalette = gMonShinyPalette_FarfetchdGalarian,
        .iconSprite = gMonIcon_FarfetchdGalarian,
        .iconPalIndex = 1,
        FOOTPRINT(Farfetchd)
        OVERWORLD(
            sPicTable_FarfetchdGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_FarfetchdGalarian,
            gShinyOverworldPalette_FarfetchdGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sFarfetchdGalarianLevelUpLearnset,
        .teachableLearnset = sFarfetchdGalarianTeachableLearnset,
        .eggMoveLearnset = sFarfetchdGalarianEggMoveLearnset,
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_CRITICAL_HITS, 3, SPECIES_SIRFETCHD}),
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Sirfetch'd"),
        .cryId = CRY_SIRFETCHD,
        .natDexNum = NATIONAL_DEX_SIRFETCHD,
        .categoryName = _("Pato salvaje"),
        .height = 8,
        .weight = 1170,
		.description = COMPOUND_STRING(
			"Repele ataques con las hojas de su duro\n"
			"puerro y contraataca con su tallo afilado.\n"
			"El puerro que le sirve de armamento sigue\n"
			"siendo comestible."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sirfetchd,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sirfetchd,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sirfetchd,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sirfetchd,
        .shinyPalette = gMonShinyPalette_Sirfetchd,
        .iconSprite = gMonIcon_Sirfetchd,
        .iconPalIndex = 1,
        FOOTPRINT(Sirfetchd)
        OVERWORLD(
            sPicTable_Sirfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sirfetchd,
            gShinyOverworldPalette_Sirfetchd
        )
        .levelUpLearnset = sSirfetchdLevelUpLearnset,
        .teachableLearnset = sSirfetchdTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
    [SPECIES_DODUO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 96,
        .evYield_Attack = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Doduo"),
        .cryId = CRY_DODUO,
        .natDexNum = NATIONAL_DEX_DODUO,
        .categoryName = _("Ave gemela"),
        .height = 14,
        .weight = 392,
		.description = COMPOUND_STRING(
			"Incluso mientras come o duerme, una de\n"
			"las cabezas sigue estando en guardia para\n"
			"detectar cualquier peligro. Si lo amenazan,\n"
			"sale huyendo a 100 km por hora."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Doduo,
        .frontPicFemale = gMonFrontPic_DoduoF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Doduo,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Doduo,
        .backPicFemale = gMonBackPic_DoduoF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Doduo,
        .shinyPalette = gMonShinyPalette_Doduo,
        .iconSprite = gMonIcon_Doduo,
        .iconPalIndex = 2,
        FOOTPRINT(Doduo)
        OVERWORLD(
            sPicTable_Doduo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Doduo,
            gShinyOverworldPalette_Doduo
        )
        .levelUpLearnset = sDoduoLevelUpLearnset,
        .teachableLearnset = sDoduoTeachableLearnset,
        .eggMoveLearnset = sDoduoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_DODRIO}),
    },

    [SPECIES_DODRIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 110 : 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 165,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 161,
    #else
        .expYield = 158,
    #endif
        .evYield_Attack = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dodrio"),
        .cryId = CRY_DODRIO,
        .natDexNum = NATIONAL_DEX_DODRIO,
        .categoryName = _("Ave triple"),
        .height = 18,
        .weight = 852,
        .description = COMPOUND_STRING(
            "Las tres cabezas expresan alegría,\n"
            "enfado y preocupación cuando planean\n"
            "estrategias. Al dormir, una cabeza\n" 
            "permanece despierta."),        
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dodrio,
        .frontPicFemale = gMonFrontPic_DodrioF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dodrio,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Dodrio,
        .backPicFemale = gMonBackPic_DodrioF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Dodrio,
        .shinyPalette = gMonShinyPalette_Dodrio,
        .iconSprite = gMonIcon_Dodrio,
        .iconPalIndex = 2,
        FOOTPRINT(Dodrio)
        OVERWORLD(
            sPicTable_Dodrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dodrio,
            gShinyOverworldPalette_Dodrio
        )
        .levelUpLearnset = sDodrioLevelUpLearnset,
        .teachableLearnset = sDodrioTeachableLearnset,
    },
#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
    [SPECIES_SEEL] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 100,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_ICE_BODY },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Seel"),
        .cryId = CRY_SEEL,
        .natDexNum = NATIONAL_DEX_SEEL,
        .categoryName = _("León marino"),
        .height = 11,
        .weight = 900,
		.description = COMPOUND_STRING(
			"Busca a sus presas en aguas heladas,\n"
			"bajo las capas de hielo. Cuando necesita\n"
			"respirar, abre un agujerito en el hielo con\n"
			"la protuberancia que tiene en la cabeza."),
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seel,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Seel,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Seel,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Seel,
        .shinyPalette = gMonShinyPalette_Seel,
        .iconSprite = gMonIcon_Seel,
        .iconPalIndex = 0,
        FOOTPRINT(Seel)
        OVERWORLD(
            sPicTable_Seel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Seel,
            gShinyOverworldPalette_Seel
        )
        .levelUpLearnset = sSeelLevelUpLearnset,
        .teachableLearnset = sSeelTeachableLearnset,
        .eggMoveLearnset = sSeelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DEWGONG}),
    },

    [SPECIES_DEWGONG] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 176,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_ICE_BODY },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dewgong"),
        .cryId = CRY_DEWGONG,
        .natDexNum = NATIONAL_DEX_DEWGONG,
        .categoryName = _("León marino"),
        .height = 17,
        .weight = 1200,
		.description = COMPOUND_STRING(
			"Le encanta dormitar sobre la frialdad\n"
			"del hielo. Una vez, un marinero que\n"
			"lo vio dormido sobre un glaciar\n"
			"lo confundió con una sirena."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dewgong,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dewgong,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Dewgong,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Dewgong,
        .shinyPalette = gMonShinyPalette_Dewgong,
        .iconSprite = gMonIcon_Dewgong,
        .iconPalIndex = 2,
        FOOTPRINT(Dewgong)
        OVERWORLD(
            sPicTable_Dewgong,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dewgong,
            gShinyOverworldPalette_Dewgong
        )
        .levelUpLearnset = sDewgongLevelUpLearnset,
        .teachableLearnset = sDewgongTeachableLearnset,
    },
#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
    [SPECIES_GRIMER] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grimer"),
        .cryId = CRY_GRIMER,
        .natDexNum = NATIONAL_DEX_GRIMER,
        .categoryName = _("Lodo"),
        .height = 9,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Nacido del lodo contaminado del mar,\n"
			"el alimento preferido de Grimer es la\n"
			"basura. Se alimenta de lo que encuentra\n"
			"en las aguas residuales de las fábricas."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grimer,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Grimer,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Grimer,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Grimer,
        .shinyPalette = gMonShinyPalette_Grimer,
        .iconSprite = gMonIcon_Grimer,
        .iconPalIndex = 2,
        FOOTPRINT(Grimer)
        OVERWORLD(
            sPicTable_Grimer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Grimer,
            gShinyOverworldPalette_Grimer
        )
        .levelUpLearnset = sGrimerLevelUpLearnset,
        .teachableLearnset = sGrimerTeachableLearnset,
        .eggMoveLearnset = sGrimerEggMoveLearnset,
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK}),
    },

    [SPECIES_MUK] =
    {
        .baseHP        = 105,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 157,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Muk"),
        .cryId = CRY_MUK,
        .natDexNum = NATIONAL_DEX_MUK,
        .categoryName = _("Lodo"),
        .height = 12,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Prefiere los hábitats cálidos y húmedos.\n"
			"En verano, las sustancias tóxicas\n"
			"que contiene se intensifican y hacen\n"
			"que apeste como la basura podrida."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Muk,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Muk,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Muk,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Muk,
        .shinyPalette = gMonShinyPalette_Muk,
        .iconSprite = gMonIcon_Muk,
        .iconPalIndex = 2,
        FOOTPRINT(Muk)
        OVERWORLD(
            sPicTable_Muk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Muk,
            gShinyOverworldPalette_Muk
        )
        .levelUpLearnset = sMukLevelUpLearnset,
        .teachableLearnset = sMukTeachableLearnset,
        .formSpeciesIdTable = sMukFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_GRIMER_ALOLAN] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grimer"),
        .cryId = CRY_GRIMER,
        .natDexNum = NATIONAL_DEX_GRIMER,
        .categoryName = _("Lodo"),
        .height = 7,
        .weight = 420,
        .description = COMPOUND_STRING(
            "Hay alrededor de un centenar de ellos\n"
            "viviendo en el vertedero de\n"
            "Alola. Todos son trabajadores\n"
            "duros que comen mucha basura."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GrimerAlolan,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrimerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GrimerAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GrimerAlolan,
        .shinyPalette = gMonShinyPalette_GrimerAlolan,
        .iconSprite = gMonIcon_GrimerAlolan,
        .iconPalIndex = 1,
        FOOTPRINT(Grimer)
        OVERWORLD(
            sPicTable_GrimerAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GrimerAlolan,
            gShinyOverworldPalette_GrimerAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGrimerAlolanLevelUpLearnset,
        .teachableLearnset = sGrimerAlolanTeachableLearnset,
        .eggMoveLearnset = sGrimerAlolanEggMoveLearnset,
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK_ALOLAN}),
    },

    [SPECIES_MUK_ALOLAN] =
    {
        .baseHP        = 105,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 157,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Muk"),
        .cryId = CRY_MUK,
        .natDexNum = NATIONAL_DEX_MUK,
        .categoryName = _("Lodo"),
        .height = 10,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Es sorprendentemente tranquilo y\n"
            "amigable, si no le alimentas con basura\n"
            "durante un tiempo, destruirá los\n"
            "muebles de su amo y se los comerá."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MukAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MukAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MukAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MukAlolan,
        .shinyPalette = gMonShinyPalette_MukAlolan,
        .iconSprite = gMonIcon_MukAlolan,
        .iconPalIndex = 0,
        FOOTPRINT(Muk)
        OVERWORLD(
            sPicTable_MukAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MukAlolan,
            gShinyOverworldPalette_MukAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMukAlolanLevelUpLearnset,
        .teachableLearnset = sMukAlolanTeachableLearnset,
        .formSpeciesIdTable = sMukFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
    [SPECIES_SHELLDER] =
    {
        .baseHP        = 30,
        .baseAttack    = 65,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 97,
        .evYield_Defense = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT },
    #else
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_OVERCOAT },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Shellder"),
        .cryId = CRY_SHELLDER,
        .natDexNum = NATIONAL_DEX_SHELLDER,
        .categoryName = _("Bivalvo"),
        .height = 3,
        .weight = 40,
		.description = COMPOUND_STRING(
			"De noche, usa su ancha lengua para hacer\n"
			"un agujero en el fondo del mar donde\n"
			"descansar. Cuando duerme, Shellder cierra\n"
			"la concha, pero deja la lengua fuera."),
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shellder,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellder,
        .frontAnimId = ANIM_TWIST,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Shellder,
        .backPicSize = MON_COORDS_SIZE(48, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Shellder,
        .shinyPalette = gMonShinyPalette_Shellder,
        .iconSprite = gMonIcon_Shellder,
        .iconPalIndex = 2,
        FOOTPRINT(Shellder)
        OVERWORLD(
            sPicTable_Shellder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Shellder,
            gShinyOverworldPalette_Shellder
        )
        .levelUpLearnset = sShellderLevelUpLearnset,
        .teachableLearnset = sShellderTeachableLearnset,
        .eggMoveLearnset = sShellderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}),
    },

    [SPECIES_CLOYSTER] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 180,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 203,
        .evYield_Defense = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT },
    #else
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_OVERCOAT },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Cloyster"),
        .cryId = CRY_CLOYSTER,
        .natDexNum = NATIONAL_DEX_CLOYSTER,
        .categoryName = _("Bivalvo"),
        .height = 15,
        .weight = 1325,
		.description = COMPOUND_STRING(
			"Puede nadar por el mar tragando agua y\n"
			"expulsándola por el conducto que tiene en\n"
			"la parte trasera. Del mismo modo lanza\n"
			"los pinchos que tiene sobre la concha."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Cloyster,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Cloyster,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Cloyster,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Cloyster,
        .shinyPalette = gMonShinyPalette_Cloyster,
        .iconSprite = gMonIcon_Cloyster,
        .iconPalIndex = 2,
        FOOTPRINT(Cloyster)
        OVERWORLD(
            sPicTable_Cloyster,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Cloyster,
            gShinyOverworldPalette_Cloyster
        )
        .levelUpLearnset = sCloysterLevelUpLearnset,
        .teachableLearnset = sCloysterTeachableLearnset,
    },
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
    [SPECIES_GASTLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 95,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gastly"),
        .cryId = CRY_GASTLY,
        .natDexNum = NATIONAL_DEX_GASTLY,
        .categoryName = _("Gas"),
        .height = 13,
        .weight = 1,
		.description = COMPOUND_STRING(
			"Tiene mucha materia gaseosa. Cuando\n"
			"es arrastrado por un vendaval mengua.\n"
			"Se agrupan bajo los aleros de las casas\n"
			"para resguardarse del viento."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gastly,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Gastly,
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_Gastly,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Gastly,
        .shinyPalette = gMonShinyPalette_Gastly,
        .iconSprite = gMonIcon_Gastly,
        .iconPalIndex = 2,
        FOOTPRINT(Gastly)
        OVERWORLD(
            sPicTable_Gastly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Gastly,
            gShinyOverworldPalette_Gastly
        )
        .levelUpLearnset = sGastlyLevelUpLearnset,
        .teachableLearnset = sGastlyTeachableLearnset,
        .eggMoveLearnset = sGastlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_HAUNTER}),
    },

    [SPECIES_HAUNTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 126,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Haunter"),
        .cryId = CRY_HAUNTER,
        .natDexNum = NATIONAL_DEX_HAUNTER,
        .categoryName = _("Gas"),
        .height = 16,
        .weight = 1,
		.description = COMPOUND_STRING(
			"Es un Pokémon peligroso. Si en la oscuridad\n"
			"ves a uno flotando y haciéndote señas,\n"
			"no te acerques. Este Pokémon intentará\n"
			"darte lametazos para robarte la energía."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Haunter,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Haunter,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 23,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Haunter,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Haunter,
        .shinyPalette = gMonShinyPalette_Haunter,
        .iconSprite = gMonIcon_Haunter,
        .iconPalIndex = 2,
        FOOTPRINT(Haunter)
        OVERWORLD(
            sPicTable_Haunter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Haunter,
            gShinyOverworldPalette_Haunter
        )
        .levelUpLearnset = sHaunterLevelUpLearnset,
        .teachableLearnset = sHaunterTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GENGAR},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GENGAR}),
    },

#if P_UPDATED_ABILITIES >= GEN_7
#define GENGAR_ABILITIES {ABILITY_CURSED_BODY, ABILITY_NONE, ABILITY_NONE}
#else
#define GENGAR_ABILITIES {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE}
#endif

    [SPECIES_GENGAR] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 225,
    #else
        .expYield = 190,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = GENGAR_ABILITIES,
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gengar"),
        .cryId = CRY_GENGAR,
        .natDexNum = NATIONAL_DEX_GENGAR,
        .categoryName = _("Sombra"),
        .height = 15,
        .weight = 405,
		.description = COMPOUND_STRING(
			"Si una noche oscura ves que tu sombra\n"
			"te adelanta de repente, en realidad\n"
			"estarás viendo a Gengar haciéndose\n"
			"pasar por la misma."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Gengar,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Gengar,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Gengar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gengar,
        .shinyPalette = gMonShinyPalette_Gengar,
        .iconSprite = gMonIcon_Gengar,
        .iconPalIndex = 2,
        FOOTPRINT(Gengar)
        OVERWORLD(
            sPicTable_Gengar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gengar,
            gShinyOverworldPalette_Gengar
        )
        .levelUpLearnset = sGengarLevelUpLearnset,
        .teachableLearnset = sGengarTeachableLearnset,
        .formSpeciesIdTable = sGengarFormSpeciesIdTable,
        .formChangeTable = sGengarFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GENGAR_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 170,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gengar"),
        .cryId = CRY_GENGAR_MEGA,
        .natDexNum = NATIONAL_DEX_GENGAR,
        .categoryName = _("Sombra"),
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Sus relaciones están alteradas.\n"
            "Intenta quitar la vida a todos.\n"
            "¡Incluso intentará maldecir a\n"
            "su entrenador!"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_GengarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GengarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GengarMega,
        .shinyPalette = gMonShinyPalette_GengarMega,
        .iconSprite = gMonIcon_GengarMega,
        .iconPalIndex = 2,
        FOOTPRINT(Gengar)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGengarLevelUpLearnset,
        .teachableLearnset = sGengarTeachableLearnset,
        .formSpeciesIdTable = sGengarFormSpeciesIdTable,
        .formChangeTable = sGengarFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_GENGAR_GIGANTAMAX] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = GENGAR_ABILITIES,
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gengar"),
        .cryId = CRY_GENGAR,
        .natDexNum = NATIONAL_DEX_GENGAR,
        .categoryName = _("Sombra"),
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Se dice que su gigantesca\n"
            "boca no lleva a su cuerpo, lleno\n"
            "de energía maldita, sino\n"
            "directamente al más allá."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_GengarGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GengarGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GengarGigantamax,
        .shinyPalette = gMonShinyPalette_GengarGigantamax,
        .iconSprite = gMonIcon_GengarGigantamax,
        .iconPalIndex = 2,
        FOOTPRINT(Gengar)
        .isGigantamax = TRUE,
        .levelUpLearnset = sGengarLevelUpLearnset,
        .teachableLearnset = sGengarTeachableLearnset,
        .formSpeciesIdTable = sGengarFormSpeciesIdTable,
        .formChangeTable = sGengarFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
    [SPECIES_ONIX] =
    {
        .baseHP        = 35,
        .baseAttack    = 45,
        .baseDefense   = 160,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 77 : 108,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Onix"),
        .cryId = CRY_ONIX,
        .natDexNum = NATIONAL_DEX_ONIX,
        .categoryName = _("Serp. Roca"),
        .height = 88,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "Tiene un imán en el cerebro que le sirve\n"
            "de brújula para no perder la orientación\n"
            "cuando está cavando túneles. A medida que\n"
            "crece, se le redondea y suaviza el cuerpo."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_Onix,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Onix,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Onix,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Onix,
        .shinyPalette = gMonShinyPalette_Onix,
        .iconSprite = gMonIcon_Onix,
        .iconPalIndex = 2,
        FOOTPRINT(Onix)
        OVERWORLD(
            sPicTable_Onix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Onix,
            gShinyOverworldPalette_Onix
        )
        .levelUpLearnset = sOnixLevelUpLearnset,
        .teachableLearnset = sOnixTeachableLearnset,
        .eggMoveLearnset = sOnixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX},
                                {EVO_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_STEELIX] =
    {
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 200,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GROUND),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 196,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Steelix"),
        .cryId = CRY_STEELIX,
        .natDexNum = NATIONAL_DEX_STEELIX,
        .categoryName = _("Serpférrea"),
        .height = 92,
        .weight = 4000,
        .description = COMPOUND_STRING(
            "Vive a aun mayor profundidad que Onix. Se\n"
            "le conoce por cavar hacia el centro de la\n"
            "tierra. Hay datos que demuestran que ha\n"
            "llegado a alcanzar 1 km de profundidad."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Steelix,
        .frontPicFemale = gMonFrontPic_SteelixF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Steelix,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Steelix,
        .backPicFemale = gMonBackPic_SteelixF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Steelix,
        .shinyPalette = gMonShinyPalette_Steelix,
        .iconSprite = gMonIcon_Steelix,
        .iconPalIndex = 0,
        FOOTPRINT(Steelix)
        OVERWORLD(
            sPicTable_Steelix,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Steelix,
            gShinyOverworldPalette_Steelix
        )
        .levelUpLearnset = sSteelixLevelUpLearnset,
        .teachableLearnset = sSteelixTeachableLearnset,
        .formSpeciesIdTable = sSteelixFormSpeciesIdTable,
        .formChangeTable = sSteelixFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_STEELIX_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GROUND),
        .catchRate = 25,
        .expYield = 214,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Steelix"),
        .cryId = CRY_STEELIX_MEGA,
        .natDexNum = NATIONAL_DEX_STEELIX,
        .categoryName = _("Serpférrea"),
        .height = 105,
        .weight = 7400,
        .description = COMPOUND_STRING(
            "Las células de su cuerpo, cristalizadas\n"
            "por la Mega Evolución, son más\n"
            "fuertes que cualquier mineral y\n"
            "soportan cualquier temperatura."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_SteelixMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SteelixMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SteelixMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_SteelixMega,
        .shinyPalette = gMonShinyPalette_SteelixMega,
        .iconSprite = gMonIcon_SteelixMega,
        .iconPalIndex = 0,
        FOOTPRINT(Steelix)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSteelixLevelUpLearnset,
        .teachableLearnset = sSteelixTeachableLearnset,
        .formSpeciesIdTable = sSteelixFormSpeciesIdTable,
        .formChangeTable = sSteelixFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
    [SPECIES_DROWZEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 43,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 102,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_INNER_FOCUS },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Drowzee"),
        .cryId = CRY_DROWZEE,
        .natDexNum = NATIONAL_DEX_DROWZEE,
        .categoryName = _("Hipnosis"),
        .height = 10,
        .weight = 324,
        .description = COMPOUND_STRING(
            "Si te pica la nariz mientras duermes,\n"
            "seguro que es porque tienes a uno de\n"
            "ellos en la almohada intentando sacarte\n"
            "los sueños por la nariz para comérselos."),
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drowzee,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drowzee,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 48,
        .backPic = gMonBackPic_Drowzee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Drowzee,
        .shinyPalette = gMonShinyPalette_Drowzee,
        .iconSprite = gMonIcon_Drowzee,
        .iconPalIndex = 2,
        FOOTPRINT(Drowzee)
        OVERWORLD(
            sPicTable_Drowzee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drowzee,
            gShinyOverworldPalette_Drowzee
        )
        .levelUpLearnset = sDrowzeeLevelUpLearnset,
        .teachableLearnset = sDrowzeeTeachableLearnset,
        .eggMoveLearnset = sDrowzeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_HYPNO}),
    },

    [SPECIES_HYPNO] =
    {
        .baseHP        = 85,
        .baseAttack    = 73,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 73,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 169 : 165,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_INNER_FOCUS },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Hypno"),
        .cryId = CRY_HYPNO,
        .natDexNum = NATIONAL_DEX_HYPNO,
        .categoryName = _("Hipnosis"),
        .height = 16,
        .weight = 756,
		.description = COMPOUND_STRING(
			"Lleva un péndulo en la mano cuyo balanceo\n"
			"y brillo sumen a su rival en un profundo\n"
			"estado de hipnosis. Mientras busca a\n"
			"su presa, saca brillo al péndulo."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hypno,
        .frontPicFemale = gMonFrontPic_HypnoF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Hypno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Hypno,
        .backPicFemale = gMonBackPic_HypnoF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Hypno,
        .shinyPalette = gMonShinyPalette_Hypno,
        .iconSprite = gMonIcon_Hypno,
        .iconPalIndex = 2,
        FOOTPRINT(Hypno)
        OVERWORLD(
            sPicTable_Hypno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hypno,
            gShinyOverworldPalette_Hypno
        )
        .levelUpLearnset = sHypnoLevelUpLearnset,
        .teachableLearnset = sHypnoTeachableLearnset,
    },
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
    [SPECIES_KRABBY] =
    {
        .baseHP        = 30,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 115,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Krabby"),
        .cryId = CRY_KRABBY,
        .natDexNum = NATIONAL_DEX_KRABBY,
        .categoryName = _("Cangrejo"),
        .height = 4,
        .weight = 65,
		.description = COMPOUND_STRING(
			"Viven en la playa, enterrados en la arena\n"
			"fina. Cuando escasea la comida, es común\n"
			"verlos enfrentados panza contra\n"
			"panza en defensa de su territorio."),
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Krabby,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Krabby,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Krabby,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Krabby,
        .shinyPalette = gMonShinyPalette_Krabby,
        .iconSprite = gMonIcon_Krabby,
        .iconPalIndex = 0,
        FOOTPRINT(Krabby)
        OVERWORLD(
            sPicTable_Krabby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Krabby,
            gShinyOverworldPalette_Krabby
        )
        .levelUpLearnset = sKrabbyLevelUpLearnset,
        .teachableLearnset = sKrabbyTeachableLearnset,
        .eggMoveLearnset = sKrabbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_KINGLER}),
    },

    [SPECIES_KINGLER] =
    {
        .baseHP        = 55,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 206,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Kingler"),
        .cryId = CRY_KINGLER,
        .natDexNum = NATIONAL_DEX_KINGLER,
        .categoryName = _("Tenaza"),
        .height = 13,
        .weight = 600,
		.description = COMPOUND_STRING(
			"Tiene una pinza enorme y descomunal\n"
			"que agita en el aire para comunicarse con\n"
			"los demás. Lo malo es que pesa tanto\n"
			"que se cansa enseguida."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kingler,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Kingler,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 4,
        .backPic = gMonBackPic_Kingler,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kingler,
        .shinyPalette = gMonShinyPalette_Kingler,
        .iconSprite = gMonIcon_Kingler,
        .iconPalIndex = 0,
        FOOTPRINT(Kingler)
        OVERWORLD(
            sPicTable_Kingler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kingler,
            gShinyOverworldPalette_Kingler
        )
        .levelUpLearnset = sKinglerLevelUpLearnset,
        .teachableLearnset = sKinglerTeachableLearnset,
        .formSpeciesIdTable = sKinglerFormSpeciesIdTable,
        .formChangeTable = sKinglerFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_KINGLER_GIGANTAMAX] =
    {
        .baseHP        = 55,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 206,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Kingler"),
        .cryId = CRY_KINGLER,
        .natDexNum = NATIONAL_DEX_KINGLER,
        .categoryName = _("Tenaza"),
        .height = 190,
        .weight = 0,
        .description = COMPOUND_STRING(
            "El flujo de energía ha causado\n"
            "que su pinza izquierda\n"
            "crezca a un tamaño enorme.\n"
            "Puede pulverizar cualquier cosa\n"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KinglerGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KinglerGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KinglerGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_KinglerGigantamax,
        .shinyPalette = gMonShinyPalette_KinglerGigantamax,
        .iconSprite = gMonIcon_KinglerGigantamax,
        .iconPalIndex = 0,
        FOOTPRINT(Kingler)
        .isGigantamax = TRUE,
        .levelUpLearnset = sKinglerLevelUpLearnset,
        .teachableLearnset = sKinglerTeachableLearnset,
        .formSpeciesIdTable = sKinglerFormSpeciesIdTable,
        .formChangeTable = sKinglerFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ELECTRODE_EXP_YIELD 172
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ELECTRODE_EXP_YIELD 168
#else
    #define ELECTRODE_EXP_YIELD 150
#endif

    [SPECIES_VOLTORB] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 103,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Voltorb"),
        .cryId = CRY_VOLTORB,
        .natDexNum = NATIONAL_DEX_VOLTORB,
        .categoryName = _("Bola"),
        .height = 5,
        .weight = 104,
		.description = COMPOUND_STRING(
			"Tiene un curioso e inexplicable parecido\n"
			"con una Poké Ball. Como estalla a\n"
			"la mínima, hasta los Entrenadores\n"
			"veteranos lo tratan con mucho cuidado."),
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Voltorb,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Voltorb,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Voltorb,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Voltorb,
        .shinyPalette = gMonShinyPalette_Voltorb,
        .iconSprite = gMonIcon_Voltorb,
        .iconPalIndex = 0,
        FOOTPRINT(Voltorb)
        OVERWORLD(
            sPicTable_Voltorb,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Voltorb,
            gShinyOverworldPalette_Voltorb
        )
        .levelUpLearnset = sVoltorbLevelUpLearnset,
        .teachableLearnset = sVoltorbTeachableLearnset,
        .formSpeciesIdTable = sVoltorbFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTRODE}),
    },

    [SPECIES_ELECTRODE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 150 : 140,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 60,
        .expYield = ELECTRODE_EXP_YIELD,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Electrode"),
        .cryId = CRY_ELECTRODE,
        .natDexNum = NATIONAL_DEX_ELECTRODE,
        .categoryName = _("Bola"),
        .height = 12,
        .weight = 666,
		.description = COMPOUND_STRING(
			"Se agrupa con muchos otros junto a las\n"
			"plantas de energía eléctrica. Como se\n"
			"alimenta de electricidad, causa grandes y\n"
			"caóticos apagones en ciudades próximas."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Electrode,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Electrode,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .backPic = gMonBackPic_Electrode,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Electrode,
        .shinyPalette = gMonShinyPalette_Electrode,
        .iconSprite = gMonIcon_Electrode,
        .iconPalIndex = 0,
        FOOTPRINT(Electrode)
        OVERWORLD(
            sPicTable_Electrode,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Electrode,
            gShinyOverworldPalette_Electrode
        )
        .levelUpLearnset = sElectrodeLevelUpLearnset,
        .teachableLearnset = sElectrodeTeachableLearnset,
        .formSpeciesIdTable = sElectrodeFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_VOLTORB_HISUIAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 103,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Voltorb"),
        .cryId = CRY_VOLTORB,
        .natDexNum = NATIONAL_DEX_VOLTORB,
        .categoryName = _("Esfera"),
        .height = 5,
        .weight = 130,
        .description = COMPOUND_STRING(
           "Recuerda el diseño de una Poké Ball\n"
"antigua. Al emocionarse, descarga la\n"
"corriente que almacena en su vientre, y\n"
"luego emite una gran risa estruendosa."),
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_VoltorbHisuian,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_VoltorbHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_VoltorbHisuian,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_VoltorbHisuian,
        .shinyPalette = gMonShinyPalette_VoltorbHisuian,
        .iconSprite = gMonIcon_VoltorbHisuian,
        .iconPalIndex = 0,
        FOOTPRINT(Voltorb)
        OVERWORLD(
            sPicTable_VoltorbHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_VoltorbHisuian,
            gShinyOverworldPalette_VoltorbHisuian
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sVoltorbHisuianLevelUpLearnset,
        .teachableLearnset = sVoltorbHisuianTeachableLearnset,
        .formSpeciesIdTable = sVoltorbFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ELECTRODE_HISUIAN}),
    },

    [SPECIES_ELECTRODE_HISUIAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 150 : 140,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 60,
        .expYield = ELECTRODE_EXP_YIELD,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Electrode"),
        .cryId = CRY_ELECTRODE,
        .natDexNum = NATIONAL_DEX_ELECTRODE,
        .categoryName = _("Esfera"),
        .height = 12,
        .weight = 710,
        .description = COMPOUND_STRING(
            "El tejido en la superficie de su cuerpo\n"
"es similar en composición a un Apricorn.\n"
"Cuando se irrita, libera una corriente\n"
"eléctrica equivalente a 20 rayos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ElectrodeHisuian,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_ElectrodeHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ElectrodeHisuian,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ElectrodeHisuian,
        .shinyPalette = gMonShinyPalette_ElectrodeHisuian,
        .iconSprite = gMonIcon_ElectrodeHisuian,
        .iconPalIndex = 1,
        FOOTPRINT(Electrode)
        OVERWORLD(
            sPicTable_ElectrodeHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ElectrodeHisuian,
            gShinyOverworldPalette_ElectrodeHisuian
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sElectrodeHisuianLevelUpLearnset,
        .teachableLearnset = sElectrodeHisuianTeachableLearnset,
        .formSpeciesIdTable = sElectrodeFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
    [SPECIES_EXEGGCUTE] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS, TYPE_PSYCHIC),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 98,
        .evYield_Defense = 1,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Exeggcute"),
        .cryId = CRY_EXEGGCUTE,
        .natDexNum = NATIONAL_DEX_EXEGGCUTE,
        .categoryName = _("Huevo"),
        .height = 4,
        .weight = 25,
		.description = COMPOUND_STRING(
			"Está compuesto de seis huevos que forman\n"
			"una tupida piña que va girando. Si empiezan\n"
			"a resquebrajarse las cáscaras, no hay duda\n"
			"de que está a punto de evolucionar."),
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Exeggcute,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Exeggcute,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Exeggcute,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Exeggcute,
        .shinyPalette = gMonShinyPalette_Exeggcute,
        .iconSprite = gMonIcon_Exeggcute,
        .iconPalIndex = 0,
        FOOTPRINT(Exeggcute)
        OVERWORLD(
            sPicTable_Exeggcute,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Exeggcute,
            gShinyOverworldPalette_Exeggcute
        )
        .levelUpLearnset = sExeggcuteLevelUpLearnset,
        .teachableLearnset = sExeggcuteTeachableLearnset,
        .eggMoveLearnset = sExeggcuteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR},
                                {EVO_NONE, 0, SPECIES_EXEGGUTOR_ALOLAN}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define EXEGGUTOR_EXP_YIELD 186
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define EXEGGUTOR_EXP_YIELD 182
#else
    #define EXEGGUTOR_EXP_YIELD 212
#endif

#define EXEGGUTOR_SP_DEF (P_UPDATED_STATS >= GEN_7 ? 75 : 65)

    [SPECIES_EXEGGUTOR] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .types = MON_TYPES(TYPE_GRASS, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = EXEGGUTOR_EXP_YIELD,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Exeggutor"),
        .cryId = CRY_EXEGGUTOR,
        .natDexNum = NATIONAL_DEX_EXEGGUTOR,
        .categoryName = _("Coco"),
        .height = 20,
        .weight = 1200,
		.description = COMPOUND_STRING(
			"Es originario del trópico. Cuando se expone\n"
			"a un sol intenso, le empiezan a crecer las\n"
			"cabezas. Dicen que, si caen al suelo, las\n"
			"cabezas se unen para formar un Exeggcute."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Exeggutor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Exeggutor,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Exeggutor,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Exeggutor,
        .shinyPalette = gMonShinyPalette_Exeggutor,
        .iconSprite = gMonIcon_Exeggutor,
        .iconPalIndex = 1,
        FOOTPRINT(Exeggutor)
        OVERWORLD(
            sPicTable_Exeggutor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Exeggutor,
            gShinyOverworldPalette_Exeggutor
        )
        .levelUpLearnset = sExeggutorLevelUpLearnset,
        .teachableLearnset = sExeggutorTeachableLearnset,
        .formSpeciesIdTable = sExeggutorFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = EXEGGUTOR_EXP_YIELD,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Exeggutor"),
        .cryId = CRY_EXEGGUTOR,
        .natDexNum = NATIONAL_DEX_EXEGGUTOR,
        .categoryName = _("Coco"),
        .height = 109,
        .weight = 4156,
        .description = COMPOUND_STRING(
            "Alola es el mejor entorno para\n"
            "este Pokémon. Se enorgullecen\n"
            "de su apariencia, diciendo que así es\n"
            "como debería lucir Exeggutor."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_ExeggutorAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ExeggutorAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ExeggutorAlolan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ExeggutorAlolan,
        .shinyPalette = gMonShinyPalette_ExeggutorAlolan,
        .iconSprite = gMonIcon_ExeggutorAlolan,
        .iconPalIndex = 1,
        FOOTPRINT(Exeggutor)
        OVERWORLD(
            sPicTable_ExeggutorAlolan,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ExeggutorAlolan,
            gShinyOverworldPalette_ExeggutorAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sExeggutorAlolanLevelUpLearnset,
        .teachableLearnset = sExeggutorAlolanTeachableLearnset,
        .formSpeciesIdTable = sExeggutorFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
    [SPECIES_CUBONE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 64 : 87,
        .evYield_Defense = 1,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Cubone"),
        .cryId = CRY_CUBONE,
        .natDexNum = NATIONAL_DEX_CUBONE,
        .categoryName = _("Solitario"),
        .height = 4,
        .weight = 65,
		.description = COMPOUND_STRING(
			"Le apena no volver a ver a su madre. La luna\n"
			"llena le recuerda a ella y se pone a chillar.\n"
			"Los churretes que tiene en el cráneo que\n"
			"lleva puesto son debidos a sus lágrimas."),
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cubone,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Cubone,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Cubone,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Cubone,
        .shinyPalette = gMonShinyPalette_Cubone,
        .iconSprite = gMonIcon_Cubone,
        .iconPalIndex = 2,
        FOOTPRINT(Cubone)
        OVERWORLD(
            sPicTable_Cubone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cubone,
            gShinyOverworldPalette_Cubone
        )
        .levelUpLearnset = sCuboneLevelUpLearnset,
        .teachableLearnset = sCuboneTeachableLearnset,
        .eggMoveLearnset = sCuboneEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MAROWAK},
                                {EVO_NONE, 0, SPECIES_MAROWAK_ALOLAN},
                                {EVO_NONE, 0, SPECIES_MAROWAK_ALOLAN_TOTEM}),
    },

    [SPECIES_MAROWAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 149 : 124,
        .evYield_Defense = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Marowak"),
        .cryId = CRY_MAROWAK,
        .natDexNum = NATIONAL_DEX_MAROWAK,
        .categoryName = _("Apilahueso"),
        .height = 10,
        .weight = 450,
		.description = COMPOUND_STRING(
			"Es la forma evolucionada de Cubone. Es más\n"
			"fuerte porque ha superado la pena por la\n"
			"pérdida de su madre. Tiene el ánimo curtido,\n"
			"por lo que no resulta fácil alterarlo."),
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Marowak,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Marowak,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Marowak,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Marowak,
        .shinyPalette = gMonShinyPalette_Marowak,
        .iconSprite = gMonIcon_Marowak,
        .iconPalIndex = 2,
        FOOTPRINT(Marowak)
        OVERWORLD(
            sPicTable_Marowak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Marowak,
            gShinyOverworldPalette_Marowak
        )
        .levelUpLearnset = sMarowakLevelUpLearnset,
        .teachableLearnset = sMarowakTeachableLearnset,
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_MAROWAK_ALOLAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 149 : 124,
        .evYield_Defense = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Marowak"),
        .cryId = CRY_MAROWAK,
        .natDexNum = NATIONAL_DEX_MAROWAK,
        .categoryName = _("Apilahueso"),
        .height = 10,
        .weight = 340,
        .description = gMarowakAlolanPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MarowakAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MarowakAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MarowakAlolan,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MarowakAlolan,
        .shinyPalette = gMonShinyPalette_MarowakAlolan,
        .iconSprite = gMonIcon_MarowakAlolan,
        .iconPalIndex = 1,
        FOOTPRINT(Marowak)
        OVERWORLD(
            sPicTable_MarowakAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MarowakAlolan,
            gShinyOverworldPalette_MarowakAlolan
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMarowakAlolanLevelUpLearnset,
        .teachableLearnset = sMarowakAlolanTeachableLearnset,
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable,
    },

    [SPECIES_MAROWAK_ALOLAN_TOTEM] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = 149,
        .evYield_Defense = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Marowak"),
        .cryId = CRY_MAROWAK,
        .natDexNum = NATIONAL_DEX_MAROWAK,
        .categoryName = _("Apilahueso"),
        .height = 17,
        .weight = 980,
        .description = gMarowakAlolanPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MarowakAlolan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MarowakAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MarowakAlolan,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MarowakAlolan,
        .shinyPalette = gMonShinyPalette_MarowakAlolan,
        .iconSprite = gMonIcon_MarowakAlolan,
        .iconPalIndex = 1,
        FOOTPRINT(Marowak)
        OVERWORLD(
            sPicTable_MarowakAlolan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MarowakAlolan,
            gShinyOverworldPalette_MarowakAlolan
        )
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMarowakAlolanLevelUpLearnset,
        .teachableLearnset = sMarowakAlolanTeachableLearnset,
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    [SPECIES_TYROGUE] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 91,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_STEADFAST, ABILITY_VITAL_SPIRIT },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tyrogue"),
        .cryId = CRY_TYROGUE,
        .natDexNum = NATIONAL_DEX_TYROGUE,
        .categoryName = _("Peleón"),
        .height = 7,
        .weight = 210,
		.description = COMPOUND_STRING(
			"Se pone demasiado nervioso si no lo sacan\n"
			"a entrenarse cada día. Por esta razón, su\n"
			"Entrenador debe mantener una rutina\n"
			"de entrenamiento regular durante la cría."),
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tyrogue,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Tyrogue,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Tyrogue,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Tyrogue,
        .shinyPalette = gMonShinyPalette_Tyrogue,
        .iconSprite = gMonIcon_Tyrogue,
        .iconPalIndex = 2,
        FOOTPRINT(Tyrogue)
        OVERWORLD(
            sPicTable_Tyrogue,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tyrogue,
            gShinyOverworldPalette_Tyrogue
        )
        .levelUpLearnset = sTyrogueLevelUpLearnset,
        .teachableLearnset = sTyrogueTeachableLearnset,
        .eggMoveLearnset = sTyrogueEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                                {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                                {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_HITMONLEE] =
    {
        .baseHP        = 50,
        .baseAttack    = 120,
        .baseDefense   = 53,
        .baseSpeed     = 87,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 139,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_LIMBER, ABILITY_RECKLESS, ABILITY_UNBURDEN },
    #else
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_UNBURDEN },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hitmonlee"),
        .cryId = CRY_HITMONLEE,
        .natDexNum = NATIONAL_DEX_HITMONLEE,
        .categoryName = _("Patada"),
        .height = 15,
        .weight = 498,
		.description = COMPOUND_STRING(
			"Da unas patadas demoledoras\n"
			"encogiendo y estirando las patas.\n"
			"Tras la lucha, se las masajea para\n"
			"relajar los músculos y descansar."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Hitmonlee,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Hitmonlee,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Hitmonlee,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Hitmonlee,
        .shinyPalette = gMonShinyPalette_Hitmonlee,
        .iconSprite = gMonIcon_Hitmonlee,
        .iconPalIndex = 2,
        FOOTPRINT(Hitmonlee)
        OVERWORLD(
            sPicTable_Hitmonlee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmonlee,
            gShinyOverworldPalette_Hitmonlee
        )
        .levelUpLearnset = sHitmonleeLevelUpLearnset,
        .teachableLearnset = sHitmonleeTeachableLearnset,
    },

    [SPECIES_HITMONCHAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 79,
        .baseSpeed     = 76,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 140,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_KEEN_EYE, ABILITY_IRON_FIST, ABILITY_INNER_FOCUS },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_INNER_FOCUS },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hitmonchan"),
        .cryId = CRY_HITMONCHAN,
        .natDexNum = NATIONAL_DEX_HITMONCHAN,
        .categoryName = _("Puñetazo"),
        .height = 14,
        .weight = 502,
		.description = COMPOUND_STRING(
			"Dicen que su alma es la de un boxeador que\n"
			"se entrenó para un campeonato mundial.\n"
			"Tiene un espíritu indomable que nunca\n"
			"se doblega ante la adversidad."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Hitmonchan,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Hitmonchan,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Hitmonchan,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Hitmonchan,
        .shinyPalette = gMonShinyPalette_Hitmonchan,
        .iconSprite = gMonIcon_Hitmonchan,
        .iconPalIndex = 2,
        FOOTPRINT(Hitmonchan)
        OVERWORLD(
            sPicTable_Hitmonchan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmonchan,
            gShinyOverworldPalette_Hitmonchan
        )
        .levelUpLearnset = sHitmonchanLevelUpLearnset,
        .teachableLearnset = sHitmonchanTeachableLearnset,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_HITMONTOP] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 138,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hitmontop"),
        .cryId = CRY_HITMONTOP,
        .natDexNum = NATIONAL_DEX_HITMONTOP,
        .categoryName = _("Boca abajo"),
        .height = 14,
        .weight = 480,
		.description = COMPOUND_STRING(
			"Su técnica de repartir patadas mientras\n"
			"gira rápidamente cabeza abajo es tanto\n"
			"ofensiva como defensiva. Se desplaza\n"
			"más rápido girando que andando."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hitmontop,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Hitmontop,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Hitmontop,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Hitmontop,
        .shinyPalette = gMonShinyPalette_Hitmontop,
        .iconSprite = gMonIcon_Hitmontop,
        .iconPalIndex = 2,
        FOOTPRINT(Hitmontop)
        OVERWORLD(
            sPicTable_Hitmontop,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmontop,
            gShinyOverworldPalette_Hitmontop
        )
        .levelUpLearnset = sHitmontopLevelUpLearnset,
        .teachableLearnset = sHitmontopTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
    [SPECIES_LICKITUNG] =
    {
        .baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 77 : 127,
        .evYield_HP = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lickitung"),
        .cryId = CRY_LICKITUNG,
        .natDexNum = NATIONAL_DEX_LICKITUNG,
        .categoryName = _("Chupón"),
        .height = 12,
        .weight = 655,
		.description = COMPOUND_STRING(
			"Cada vez que se encuentra con algo\n"
			"que no conoce, le da un lametazo.\n"
			"Así memoriza las cosas: por la textura\n"
			"y el sabor. No soporta los sabores ácidos."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lickitung,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lickitung,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lickitung,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Lickitung,
        .shinyPalette = gMonShinyPalette_Lickitung,
        .iconSprite = gMonIcon_Lickitung,
        .iconPalIndex = 0,
        FOOTPRINT(Lickitung)
        OVERWORLD(
            sPicTable_Lickitung,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lickitung,
            gShinyOverworldPalette_Lickitung
        )
        .levelUpLearnset = sLickitungLevelUpLearnset,
        .teachableLearnset = sLickitungTeachableLearnset,
        .eggMoveLearnset = sLickitungEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 193,
        .evYield_HP = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lickilicky"),
        .cryId = CRY_LICKILICKY,
        .natDexNum = NATIONAL_DEX_LICKILICKY,
        .categoryName = _("Chupón"),
        .height = 17,
        .weight = 1400,
		.description = COMPOUND_STRING(
			"Su larga lengua está siempre llena\n"
			"de babas. El contacto con su saliva\n"
			"causa entumecimiento."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Lickilicky,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lickilicky,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lickilicky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Lickilicky,
        .shinyPalette = gMonShinyPalette_Lickilicky,
        .iconSprite = gMonIcon_Lickilicky,
        .iconPalIndex = 1,
        FOOTPRINT(Lickilicky)
        OVERWORLD(
            sPicTable_Lickilicky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lickilicky,
            gShinyOverworldPalette_Lickilicky
        )
        .levelUpLearnset = sLickilickyLevelUpLearnset,
        .teachableLearnset = sLickilickyTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
    [SPECIES_KOFFING] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 68 : 114,
        .evYield_Defense = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_8
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH },
    #else
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Koffing"),
        .cryId = CRY_KOFFING,
        .natDexNum = NATIONAL_DEX_KOFFING,
        .categoryName = _("Gas veneno"),
        .height = 6,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Ver de cerca a un Koffing permite\n"
			"observar, a través de su fina piel,\n"
			"los gases tóxicos que se remolinan\n"
			"en su interior. A la mínima, explota."),
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Koffing,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Koffing,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Koffing,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Koffing,
        .shinyPalette = gMonShinyPalette_Koffing,
        .iconSprite = gMonIcon_Koffing,
        .iconPalIndex = 2,
        FOOTPRINT(Koffing)
        OVERWORLD(
            sPicTable_Koffing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Koffing,
            gShinyOverworldPalette_Koffing
        )
        .levelUpLearnset = sKoffingLevelUpLearnset,
        .teachableLearnset = sKoffingTeachableLearnset,
        .eggMoveLearnset = sKoffingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_WEEZING},
                                {EVO_NONE, 0, SPECIES_WEEZING_GALARIAN}),
    },

    [SPECIES_WEEZING] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 120,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 173,
        .evYield_Defense = 2,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_8
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH },
    #else
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
        .speciesName = _("Weezing"),
        .cryId = CRY_WEEZING,
        .natDexNum = NATIONAL_DEX_WEEZING,
        .categoryName = _("Gas veneno"),
        .height = 12,
        .weight = 95,
		.description = COMPOUND_STRING(
			"Al diluir sus gases tóxicos mediante un\n"
			"proceso especial, se extrae un perfume\n"
			"delicioso. Para Weezing, los gases que\n"
			"emana la basura son una exquisitez."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Weezing,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Weezing,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Weezing,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Weezing,
        .shinyPalette = gMonShinyPalette_Weezing,
        .iconSprite = gMonIcon_Weezing,
        .iconPalIndex = 2,
        FOOTPRINT(Weezing)
        OVERWORLD(
            sPicTable_Weezing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Weezing,
            gShinyOverworldPalette_Weezing
        )
        .levelUpLearnset = sWeezingLevelUpLearnset,
        .teachableLearnset = sWeezingTeachableLearnset,
        .formSpeciesIdTable = sWeezingFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_WEEZING_GALARIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 120,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_POISON, TYPE_FAIRY),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 173,
        .evYield_Defense = 2,
        .itemRare = ITEM_MISTY_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Weezing"),
        .cryId = CRY_WEEZING,
        .natDexNum = NATIONAL_DEX_WEEZING,
        .categoryName = _("Gas veneno"),
        .height = 30,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Hace mucho tiempo, cuando las fábricas\n"
            "contaminaba el aire, se transformó\n"
            "en esta forma por algun motivo.\n"
            "Come polución, expulsando aire limpio."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WeezingGalarian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WeezingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_WeezingGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WeezingGalarian,
        .shinyPalette = gMonShinyPalette_WeezingGalarian,
        .iconSprite = gMonIcon_WeezingGalarian,
        .iconPalIndex = 1,
        FOOTPRINT(Weezing)
        OVERWORLD(
            sPicTable_WeezingGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WeezingGalarian,
            gShinyOverworldPalette_WeezingGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sWeezingGalarianLevelUpLearnset,
        .teachableLearnset = sWeezingGalarianTeachableLearnset,
        .formSpeciesIdTable = sWeezingFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
    [SPECIES_RHYHORN] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_GROUND, TYPE_ROCK),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 69 : 135,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhyhorn"),
        .cryId = CRY_RHYHORN,
        .natDexNum = NATIONAL_DEX_RHYHORN,
        .categoryName = _("Punzante"),
        .height = 10,
        .weight = 1150,
		.description = COMPOUND_STRING(
			"Una vez que comienza a correr, no para:\n"
			"su minúsculo cerebro lo hace tan bobo\n"
			"que ni siquiera es capaz de acordarse\n"
			"de por qué empezó a hacerlo."),
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rhyhorn,
        .frontPicFemale = gMonFrontPic_RhyhornF,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Rhyhorn,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Rhyhorn,
        .backPicFemale = gMonBackPic_RhyhornF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Rhyhorn,
        .shinyPalette = gMonShinyPalette_Rhyhorn,
        .iconSprite = gMonIcon_Rhyhorn,
        .iconPalIndex = 1,
        FOOTPRINT(Rhyhorn)
        OVERWORLD(
            sPicTable_Rhyhorn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhyhorn,
            gShinyOverworldPalette_Rhyhorn
        )
        .levelUpLearnset = sRhyhornLevelUpLearnset,
        .teachableLearnset = sRhyhornTeachableLearnset,
        .eggMoveLearnset = sRhyhornEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_RHYDON}),
    },

    [SPECIES_RHYDON] =
    {
        .baseHP        = 105,
        .baseAttack    = 130,
        .baseDefense   = 120,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND, TYPE_ROCK),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 204,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhydon"),
        .cryId = CRY_RHYDON,
        .natDexNum = NATIONAL_DEX_RHYDON,
        .categoryName = _("Taladro"),
        .height = 19,
        .weight = 1200,
		.description = COMPOUND_STRING(
			"Su cuerno, que gira como un taladro,\n"
			"destroza altos edificios de una pasada.\n"
			"Puede erguirse sobre las patas traseras\n"
			"y tiene un cerebro muy bien desarrollado."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Rhydon,
        .frontPicFemale = gMonFrontPic_RhydonF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rhydon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rhydon,
        .backPicFemale = gMonBackPic_RhydonF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Rhydon,
        .shinyPalette = gMonShinyPalette_Rhydon,
        .iconSprite = gMonIcon_Rhydon,
        .iconPalIndex = 1,
        FOOTPRINT(Rhydon)
        OVERWORLD(
            sPicTable_Rhydon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhydon,
            gShinyOverworldPalette_Rhydon
        )
        .levelUpLearnset = sRhydonLevelUpLearnset,
        .teachableLearnset = sRhydonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR},
                                {EVO_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GROUND, TYPE_ROCK),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 217,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_SOLID_ROCK, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhyperior"),
        .cryId = CRY_RHYPERIOR,
        .natDexNum = NATIONAL_DEX_RHYPERIOR,
        .categoryName = _("Taladro"),
        .height = 24,
        .weight = 2828,
		.description = COMPOUND_STRING(
			"Si tensa y expande los músculos muy\n"
			"rápido, puede disparar las rocas que\n"
			"tenga en la mano como misiles."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Rhyperior,
        .frontPicFemale = gMonFrontPic_RhyperiorF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Rhyperior,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Rhyperior,
        .backPicFemale = gMonBackPic_RhyperiorF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Rhyperior,
        .shinyPalette = gMonShinyPalette_Rhyperior,
        .iconSprite = gMonIcon_Rhyperior,
        .iconPalIndex = 0,
        FOOTPRINT(Rhyperior)
        OVERWORLD(
            sPicTable_Rhyperior,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhyperior,
            gShinyOverworldPalette_Rhyperior
        )
        .levelUpLearnset = sRhyperiorLevelUpLearnset,
        .teachableLearnset = sRhyperiorTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 130,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 110 : 255,
        .evYield_HP = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Happiny"),
        .cryId = CRY_HAPPINY,
        .natDexNum = NATIONAL_DEX_HAPPINY,
        .categoryName = _("Casita"),
        .height = 6,
        .weight = 244,
		.description = COMPOUND_STRING(
			"Se pasea por ahí con una roquita.\n"
			"A veces se cuela entre los pies de los\n"
			"demás y hace que tropiecen."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Happiny,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Happiny,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Happiny,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Happiny,
        .shinyPalette = gMonShinyPalette_Happiny,
        .iconSprite = gMonIcon_Happiny,
        .iconPalIndex = 0,
        FOOTPRINT(Happiny)
        OVERWORLD(
            sPicTable_Happiny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Happiny,
            gShinyOverworldPalette_Happiny
        )
        .levelUpLearnset = sHappinyLevelUpLearnset,
        .teachableLearnset = sHappinyTeachableLearnset,
        .eggMoveLearnset = sHappinyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY},
                                {EVO_ITEM_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHANSEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 395 : 255,
        .evYield_HP = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Chansey"),
        .cryId = CRY_CHANSEY,
        .natDexNum = NATIONAL_DEX_CHANSEY,
        .categoryName = _("Huevo"),
        .height = 11,
        .weight = 346,
		.description = COMPOUND_STRING(
			"Pone a diario huevos con un enorme valor\n"
			"nutritivo. Están tan ricos que hasta quien\n"
			"no tenga hambre se los comerá en un abrir\n"
			"y cerrar de ojos."),
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chansey,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Chansey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Chansey,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Chansey,
        .shinyPalette = gMonShinyPalette_Chansey,
        .iconSprite = gMonIcon_Chansey,
        .iconPalIndex = 0,
        FOOTPRINT(Chansey)
        OVERWORLD(
            sPicTable_Chansey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chansey,
            gShinyOverworldPalette_Chansey
        )
        .levelUpLearnset = sChanseyLevelUpLearnset,
        .teachableLearnset = sChanseyTeachableLearnset,
        .eggMoveLearnset = sChanseyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_BLISSEY] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 608 : 255,
        .evYield_HP = (P_UPDATED_EVS >= GEN_4) ? 3 : 2,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Blissey"),
        .cryId = CRY_BLISSEY,
        .natDexNum = NATIONAL_DEX_BLISSEY,
        .categoryName = _("Felicidad"),
        .height = 15,
        .weight = 468,
		.description = COMPOUND_STRING(
			"Percibe la tristeza a través de su sedoso\n"
			"pelaje. Si ve que alguien está apenado,\n"
			"acudirá a su lado y compartirá un\n"
			"huevo de la felicidad para animarle."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Blissey,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Blissey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blissey,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Blissey,
        .shinyPalette = gMonShinyPalette_Blissey,
        .iconSprite = gMonIcon_Blissey,
        .iconPalIndex = 0,
        FOOTPRINT(Blissey)
        OVERWORLD(
            sPicTable_Blissey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blissey,
            gShinyOverworldPalette_Blissey
        )
        .levelUpLearnset = sBlisseyLevelUpLearnset,
        .teachableLearnset = sBlisseyTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
    [SPECIES_TANGELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 87 : 166,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_REGENERATOR },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tangela"),
        .cryId = CRY_TANGELA,
        .natDexNum = NATIONAL_DEX_TANGELA,
        .categoryName = _("Enredadera"),
        .height = 10,
        .weight = 350,
		.description = COMPOUND_STRING(
			"Se le desprenden los tentáculos en cuanto\n"
			"se los agarran. Y no solo no le duele,\n"
			"sino que le permite huir rápidamente.\n"
			"Además, al día siguiente le crecen otros."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tangela,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Tangela,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Tangela,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Tangela,
        .shinyPalette = gMonShinyPalette_Tangela,
        .iconSprite = gMonIcon_Tangela,
        .iconPalIndex = 0,
        FOOTPRINT(Tangela)
        OVERWORLD(
            sPicTable_Tangela,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tangela,
            gShinyOverworldPalette_Tangela
        )
        .levelUpLearnset = sTangelaLevelUpLearnset,
        .teachableLearnset = sTangelaTeachableLearnset,
        .eggMoveLearnset = sTangelaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 211,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tangrowth"),
        .cryId = CRY_TANGROWTH,
        .natDexNum = NATIONAL_DEX_TANGROWTH,
        .categoryName = _("Enredadera"),
        .height = 20,
        .weight = 1286,
		.description = COMPOUND_STRING(
			"Atrapa a su propia presa desplegando las\n"
			"ramas de sus brazos, que no le importa\n"
			"perder ante depredadores."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Tangrowth,
        .frontPicFemale = gMonFrontPic_TangrowthF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Tangrowth,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Tangrowth,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Tangrowth,
        .shinyPalette = gMonShinyPalette_Tangrowth,
        .iconSprite = gMonIcon_Tangrowth,
        .iconPalIndex = 0,
        FOOTPRINT(Tangrowth)
        OVERWORLD(
            sPicTable_Tangrowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tangrowth,
            gShinyOverworldPalette_Tangrowth
        )
        .levelUpLearnset = sTangrowthLevelUpLearnset,
        .teachableLearnset = sTangrowthTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
    [SPECIES_KANGASKHAN] =
    {
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 175,
        .evYield_HP = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_SCRAPPY, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kangaskhan"),
        .cryId = CRY_KANGASKHAN,
        .natDexNum = NATIONAL_DEX_KANGASKHAN,
        .categoryName = _("Maternal"),
        .height = 22,
        .weight = 800,
		.description = COMPOUND_STRING(
			"Si te cruzas con uno que esté jugando, no\n"
			"lo molestes ni intentes atraparlo. Seguro\n"
			"que uno de sus progenitores anda cerca\n"
			"y reaccionará con enfado y violencia."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Kangaskhan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kangaskhan,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Kangaskhan,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Kangaskhan,
        .shinyPalette = gMonShinyPalette_Kangaskhan,
        .iconSprite = gMonIcon_Kangaskhan,
        .iconPalIndex = 2,
        FOOTPRINT(Kangaskhan)
        OVERWORLD(
            sPicTable_Kangaskhan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kangaskhan,
            gShinyOverworldPalette_Kangaskhan
        )
        .levelUpLearnset = sKangaskhanLevelUpLearnset,
        .teachableLearnset = sKangaskhanTeachableLearnset,
        .eggMoveLearnset = sKangaskhanEggMoveLearnset,
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,
        .formChangeTable = sKangaskhanFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KANGASKHAN_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 207,
        .evYield_HP = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kangaskhan"),
        .cryId = CRY_KANGASKHAN_MEGA,
        .natDexNum = NATIONAL_DEX_KANGASKHAN,
        .categoryName = _("Maternal"),
        .height = 22,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "Cuando la madre ve la espalda de\n"
            "su hijo Mega, le recuerda el\n"
            "día en que inevitablemente\n"
            "la dejará."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_KangaskhanMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KangaskhanMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KangaskhanMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_KangaskhanMega,
        .shinyPalette = gMonShinyPalette_KangaskhanMega,
        .iconSprite = gMonIcon_KangaskhanMega,
        .iconPalIndex = 2,
        FOOTPRINT(Kangaskhan)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKangaskhanLevelUpLearnset,
        .teachableLearnset = sKangaskhanTeachableLearnset,
        .eggMoveLearnset = sKangaskhanEggMoveLearnset,
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,
        .formChangeTable = sKangaskhanFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
    [SPECIES_HORSEA] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 83,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
    #else
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_DAMP },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Horsea"),
        .cryId = CRY_HORSEA,
        .natDexNum = NATIONAL_DEX_HORSEA,
        .categoryName = _("Dragón"),
        .height = 4,
        .weight = 80,
		.description = COMPOUND_STRING(
			"Batiendo hábilmente las aletas que\n"
			"tiene en el lomo, se mueve en cualquier\n"
			"dirección al avanzar. Si detecta peligro,\n"
			"escupe tinta para escapar."),
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Horsea,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Horsea,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Horsea,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Horsea,
        .shinyPalette = gMonShinyPalette_Horsea,
        .iconSprite = gMonIcon_Horsea,
        .iconPalIndex = 0,
        FOOTPRINT(Horsea)
        OVERWORLD(
            sPicTable_Horsea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Horsea,
            gShinyOverworldPalette_Horsea
        )
        .levelUpLearnset = sHorseaLevelUpLearnset,
        .teachableLearnset = sHorseaTeachableLearnset,
        .eggMoveLearnset = sHorseaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_SEADRA}),
    },

    [SPECIES_SEADRA] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 155,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_POISON_POINT, ABILITY_SNIPER, ABILITY_DAMP },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_NONE, ABILITY_DAMP },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Seadra"),
        .cryId = CRY_SEADRA,
        .natDexNum = NATIONAL_DEX_SEADRA,
        .categoryName = _("Dragón"),
        .height = 12,
        .weight = 250,
		.description = COMPOUND_STRING(
			"Las púas venenosas que cubren su cuerpo\n"
			"tienen mucho valor a la hora de preparar\n"
			"remedios de hierbas tradicionales. Como\n"
			"algo amenace su nido, atacará sin piedad."),
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seadra,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Seadra,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Seadra,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Seadra,
        .shinyPalette = gMonShinyPalette_Seadra,
        .iconSprite = gMonIcon_Seadra,
        .iconPalIndex = 0,
        FOOTPRINT(Seadra)
        OVERWORLD(
            sPicTable_Seadra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Seadra,
            gShinyOverworldPalette_Seadra
        )
        .levelUpLearnset = sSeadraLevelUpLearnset,
        .teachableLearnset = sSeadraTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA},
                                {EVO_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KINGDRA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 207,
    #endif
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
    #else
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_DAMP },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Kingdra"),
        .cryId = CRY_KINGDRA,
        .natDexNum = NATIONAL_DEX_KINGDRA,
        .categoryName = _("Dragón"),
        .height = 18,
        .weight = 1520,
		.description = COMPOUND_STRING(
			"Duerme tranquilamente en el fondo\n"
			"del mar. Cuando sale a la superficie,\n"
			"crea un enorme torbellino que puede\n"
			"tragarse barcos enteros."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kingdra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kingdra,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Kingdra,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Kingdra,
        .shinyPalette = gMonShinyPalette_Kingdra,
        .iconSprite = gMonIcon_Kingdra,
        .iconPalIndex = 0,
        FOOTPRINT(Kingdra)
        OVERWORLD(
            sPicTable_Kingdra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kingdra,
            gShinyOverworldPalette_Kingdra
        )
        .levelUpLearnset = sKingdraLevelUpLearnset,
        .teachableLearnset = sKingdraTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
    [SPECIES_GOLDEEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 67,
        .baseDefense   = 60,
        .baseSpeed     = 63,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 64 : 111,
        .evYield_Attack = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Goldeen"),
        .cryId = CRY_GOLDEEN,
        .natDexNum = NATIONAL_DEX_GOLDEEN,
        .categoryName = _("Pez color"),
        .height = 6,
        .weight = 150,
		.description = COMPOUND_STRING(
			"En primavera, se pueden ver bancos de\n"
			"Goldeen remontando cascadas y ríos.\n"
			"Causa mucho daño cuando embiste\n"
			"con su único cuerno."),
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Goldeen,
        .frontPicFemale = gMonFrontPic_GoldeenF,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Goldeen,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Goldeen,
        .backPicFemale = gMonBackPic_GoldeenF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Goldeen,
        .shinyPalette = gMonShinyPalette_Goldeen,
        .iconSprite = gMonIcon_Goldeen,
        .iconPalIndex = 0,
        FOOTPRINT(Goldeen)
        OVERWORLD(
            sPicTable_Goldeen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Goldeen,
            gShinyOverworldPalette_Goldeen
        )
        .levelUpLearnset = sGoldeenLevelUpLearnset,
        .teachableLearnset = sGoldeenTeachableLearnset,
        .eggMoveLearnset = sGoldeenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_SEAKING}),
    },

    [SPECIES_SEAKING] =
    {
        .baseHP        = 80,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 68,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 170,
        .evYield_Attack = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Seaking"),
        .cryId = CRY_SEAKING,
        .natDexNum = NATIONAL_DEX_SEAKING,
        .categoryName = _("Pez color"),
        .height = 13,
        .weight = 390,
		.description = COMPOUND_STRING(
			"Perfora agujeros en los cantos rodados\n"
			"de las cuencas de los ríos. Así protege\n"
			"sus huevos de cualquier ataque y evita\n"
			"que los arrastre la corriente."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seaking,
        .frontPicFemale = gMonFrontPic_SeakingF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Seaking,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Seaking,
        .backPicFemale = gMonBackPic_SeakingF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Seaking,
        .shinyPalette = gMonShinyPalette_Seaking,
        .iconSprite = gMonIcon_Seaking,
        .iconPalIndex = 0,
        FOOTPRINT(Seaking)
        OVERWORLD(
            sPicTable_Seaking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Seaking,
            gShinyOverworldPalette_Seaking
        )
        .levelUpLearnset = sSeakingLevelUpLearnset,
        .teachableLearnset = sSeakingTeachableLearnset,
    },
#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_STARYU
    [SPECIES_STARYU] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 68 : 106,
        .evYield_Speed = 1,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Staryu"),
        .cryId = CRY_STARYU,
        .natDexNum = NATIONAL_DEX_STARYU,
        .categoryName = _("Estrella"),
        .height = 8,
        .weight = 345,
		.description = COMPOUND_STRING(
			"De noche, se agrupan y hacen brillar su\n"
			"núcleo rojo. Los destellos se intercalan\n"
			"con el centelleo estelar. Si les arrancan\n"
			"alguna parte del cuerpo, la regeneran."),
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Staryu,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Staryu,
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Staryu,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Staryu,
        .shinyPalette = gMonShinyPalette_Staryu,
        .iconSprite = gMonIcon_Staryu,
        .iconPalIndex = 2,
        FOOTPRINT(Staryu)
        OVERWORLD(
            sPicTable_Staryu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Staryu,
            gShinyOverworldPalette_Staryu
        )
        .levelUpLearnset = sStaryuLevelUpLearnset,
        .teachableLearnset = sStaryuTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}),
    },

    [SPECIES_STARMIE] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 115,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 182 : 207,
        .evYield_Speed = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Starmie"),
        .cryId = CRY_STARMIE,
        .natDexNum = NATIONAL_DEX_STARMIE,
        .categoryName = _("Misterioso"),
        .height = 11,
        .weight = 800,
		.description = COMPOUND_STRING(
			"En otro tiempo, se pensaba que Starmie\n"
			"era el resultado de los reflejos de las\n"
			"estrellas que centelleaban con suavidad\n"
			"en el cielo nocturno."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Starmie,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Starmie,
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Starmie,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Starmie,
        .shinyPalette = gMonShinyPalette_Starmie,
        .iconSprite = gMonIcon_Starmie,
        .iconPalIndex = 2,
        FOOTPRINT(Starmie)
        OVERWORLD(
            sPicTable_Starmie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Starmie,
            gShinyOverworldPalette_Starmie
        )
        .levelUpLearnset = sStarmieLevelUpLearnset,
        .teachableLearnset = sStarmieTeachableLearnset,
    },
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_PSYCHIC),
    #endif
        .catchRate = 145,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 78,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
    #else
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_TECHNICIAN },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mime Jr."),
        .cryId = CRY_MIME_JR,
        .natDexNum = NATIONAL_DEX_MIME_JR,
        .categoryName = _("Mimo"),
        .height = 6,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Para intentar confundir al rival,\n"
            "Mime Jr. le copia sus movimientos.\n"
            "Una vez que lo ha imitado, este no\n"
            "puede apartar su mirada de él."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MimeJr,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MimeJr,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_MimeJr,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MimeJr,
        .shinyPalette = gMonShinyPalette_MimeJr,
        .iconSprite = gMonIcon_MimeJr,
        .iconPalIndex = 0,
        FOOTPRINT(MimeJr)
        OVERWORLD(
            sPicTable_MimeJr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MimeJr,
            gShinyOverworldPalette_MimeJr
        )
        .levelUpLearnset = sMimeJrLevelUpLearnset,
        .teachableLearnset = sMimeJrTeachableLearnset,
        .eggMoveLearnset = sMimeJrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME},
                                {EVO_NONE, 0, SPECIES_MR_MIME_GALARIAN}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_MR_MIME] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_PSYCHIC),
    #endif
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 136,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mr. Mime"),
        .cryId = CRY_MR_MIME,
        .natDexNum = NATIONAL_DEX_MR_MIME,
        .categoryName = _("Barrera"),
        .height = 13,
        .weight = 545,
        .description = COMPOUND_STRING(
            "Es un maestro de la pantomima. Puede\n"
            "convencer a otros de que algo invisible\n"
            "existe realmente. Una vez convencidos,\n"
            "el objeto imaginario se vuelve real."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MrMime,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_MrMime,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_MrMime,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_MrMime,
        .shinyPalette = gMonShinyPalette_MrMime,
        .iconSprite = gMonIcon_MrMime,
        .iconPalIndex = 0,
        FOOTPRINT(MrMime)
        OVERWORLD(
            sPicTable_MrMime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrMime,
            gShinyOverworldPalette_MrMime
        )
        .levelUpLearnset = sMrMimeLevelUpLearnset,
        .teachableLearnset = sMrMimeTeachableLearnset,
        .eggMoveLearnset = sMrMimeEggMoveLearnset,
        .formSpeciesIdTable = sMrMimeFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_MR_MIME_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 136,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Mr. Mime"),
        .cryId = CRY_MR_MIME,
        .natDexNum = NATIONAL_DEX_MR_MIME,
        .categoryName = _("Danza"),
        .height = 14,
        .weight = 568,
        .description = COMPOUND_STRING(
            "Su talento es el claqué. Puede irradiar\n"
            "frialdad desde sus pies para\n"
            "crear un suelo de hielo, el cual este\n"
            "puede levantar y usar como barrera."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MrMimeGalarian,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_MrMimeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MrMimeGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MrMimeGalarian,
        .shinyPalette = gMonShinyPalette_MrMimeGalarian,
        .iconSprite = gMonIcon_MrMimeGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(MrMime)
        OVERWORLD(
            sPicTable_MrMimeGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrMimeGalarian,
            gShinyOverworldPalette_MrMimeGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sMrMimeGalarianLevelUpLearnset,
        .teachableLearnset = sMrMimeGalarianTeachableLearnset,
        .eggMoveLearnset = sMrMimeGalarianEggMoveLearnset,
        .formSpeciesIdTable = sMrMimeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_MR_RIME}),
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mr. Rime"),
        .cryId = CRY_MR_RIME,
        .natDexNum = NATIONAL_DEX_MR_RIME,
        .categoryName = _("Cómico"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING(
            "Es muy habilidoso en el claqué. Agita\n"
            "su bastón de hielo al ritmo\n"
            "de sus movimientos elegantes."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MrRime,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_MrRime,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MrRime,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MrRime,
        .shinyPalette = gMonShinyPalette_MrRime,
        .iconSprite = gMonIcon_MrRime,
        .iconPalIndex = 0,
        FOOTPRINT(MrRime)
        OVERWORLD(
            sPicTable_MrRime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrRime,
            gShinyOverworldPalette_MrRime
        )
        .levelUpLearnset = sMrRimeLevelUpLearnset,
        .teachableLearnset = sMrRimeTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
    [SPECIES_SCYTHER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 105,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 100 : 187,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Scyther"),
        .cryId = CRY_SCYTHER,
        .natDexNum = NATIONAL_DEX_SCYTHER,
        .categoryName = _("Mantis"),
        .height = 15,
        .weight = 560,
		.description = COMPOUND_STRING(
			"Es espectacular ver lo rápido que es. Su\n"
			"velocidad potencia las guadañas que tiene\n"
			"en los brazos, de por sí contundentes,\n"
			"pues rebanan gruesos troncos de un tajo."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Scyther,
        .frontPicFemale = gMonFrontPic_ScytherF,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Scyther,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Scyther,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Scyther,
        .shinyPalette = gMonShinyPalette_Scyther,
        .iconSprite = gMonIcon_Scyther,
        .iconPalIndex = 1,
        FOOTPRINT(Scyther)
        OVERWORLD(
            sPicTable_Scyther,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scyther,
            gShinyOverworldPalette_Scyther
        )
        .levelUpLearnset = sScytherLevelUpLearnset,
        .teachableLearnset = sScytherTeachableLearnset,
        .eggMoveLearnset = sScytherEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR},
                                {EVO_ITEM, ITEM_BLACK_AUGURITE, SPECIES_KLEAVOR},
                                {EVO_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SCIZOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 200,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_LIGHT_METAL },
    #else
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_LIGHT_METAL },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Scizor"),
        .cryId = CRY_SCIZOR,
        .natDexNum = NATIONAL_DEX_SCIZOR,
        .categoryName = _("Tenaza"),
        .height = 18,
        .weight = 1180,
		.description = COMPOUND_STRING(
			"Scizor tiene un cuerpo duro como el acero\n"
			"en el que los ataques comunes apenas\n"
			"hacen mella. Este Pokémon bate las alas\n"
			"para regular su temperatura corporal."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Scizor,
        .frontPicFemale = gMonFrontPic_ScizorF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Scizor,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 19,
        .backPic = gMonBackPic_Scizor,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Scizor,
        .shinyPalette = gMonShinyPalette_Scizor,
        .iconSprite = gMonIcon_Scizor,
        .iconPalIndex = 0,
        FOOTPRINT(Scizor)
        OVERWORLD(
            sPicTable_Scizor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scizor,
            gShinyOverworldPalette_Scizor
        )
        .levelUpLearnset = sScizorLevelUpLearnset,
        .teachableLearnset = sScizorTeachableLearnset,
        .formSpeciesIdTable = sScizorFormSpeciesIdTable,
        .formChangeTable = sScizorFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCIZOR_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 25,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Scizor"),
        .cryId = CRY_SCIZOR_MEGA,
        .natDexNum = NATIONAL_DEX_SCIZOR,
        .categoryName = _("Tenaza"),
        .height = 20,
        .weight = 1250,
        .description = COMPOUND_STRING(
            "La energía en exceso de este\n"
            "Pokémon lo mantiene en peligro\n"
            "de excederse. No puede estar en\n"
            "batalla durante largos períodos."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ScizorMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ScizorMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ScizorMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_ScizorMega,
        .shinyPalette = gMonShinyPalette_ScizorMega,
        .iconSprite = gMonIcon_ScizorMega,
        .iconPalIndex = 0,
        FOOTPRINT(Scizor)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sScizorLevelUpLearnset,
        .teachableLearnset = sScizorTeachableLearnset,
        .formSpeciesIdTable = sScizorFormSpeciesIdTable,
        .formChangeTable = sScizorFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_ROCK),
        .catchRate = 15,
        .expYield = 175,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_SHEER_FORCE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kleavor"),
        .cryId = CRY_KLEAVOR,
        .natDexNum = NATIONAL_DEX_KLEAVOR,
        .categoryName = _("Hacha"),
        .height = 18,
        .weight = 890,
        .description = COMPOUND_STRING(
            "Las dos toscas hachas le permiten\n"
            "talar árboles mientras su piel le\n"
            "protege. Es agresivo: se aconseja\n"
            "escapar en caso de toparse con uno."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Kleavor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kleavor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kleavor,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kleavor,
        .shinyPalette = gMonShinyPalette_Kleavor,
        .iconSprite = gMonIcon_Kleavor,
        .iconPalIndex = 2,
        FOOTPRINT(Kleavor)
        OVERWORLD(
            sPicTable_Kleavor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kleavor,
            gShinyOverworldPalette_Kleavor
        )
        .levelUpLearnset = sKleavorLevelUpLearnset,
        .teachableLearnset = sKleavorTeachableLearnset,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SMOOCHUM] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 87,
        .evYield_SpAttack = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_HYDRATION },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_HYDRATION },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Smoochum"),
        .cryId = CRY_SMOOCHUM,
        .natDexNum = NATIONAL_DEX_SMOOCHUM,
        .categoryName = _("Beso"),
        .height = 4,
        .weight = 60,
		.description = COMPOUND_STRING(
			"Smoochum va corriendo por todos lados,\n"
			"pero también se cae con frecuencia y, en\n"
			"cuanto tiene ocasión, se mira en algún\n"
			"lago para ver si se ha manchado la cara."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Smoochum,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Smoochum,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Smoochum,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Smoochum,
        .shinyPalette = gMonShinyPalette_Smoochum,
        .iconSprite = gMonIcon_Smoochum,
        .iconPalIndex = 1,
        FOOTPRINT(Smoochum)
        OVERWORLD(
            sPicTable_Smoochum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Smoochum,
            gShinyOverworldPalette_Smoochum
        )
        .levelUpLearnset = sSmoochumLevelUpLearnset,
        .teachableLearnset = sSmoochumTeachableLearnset,
        .eggMoveLearnset = sSmoochumEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_JYNX}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_JYNX] =
    {
        .baseHP        = 65,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 137,
        .evYield_SpAttack = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_DRY_SKIN },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_DRY_SKIN },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Jynx"),
        .cryId = CRY_JYNX,
        .natDexNum = NATIONAL_DEX_JYNX,
        .categoryName = _("Forma humana"),
        .height = 14,
        .weight = 406,
		.description = COMPOUND_STRING(
			"Camina con ritmo, cimbreándose y\n"
			"balanceando las caderas como si bailara.\n"
			"Hace movimientos tan atractivos que no\n"
			"hay quien se resista a mover las caderas."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Jynx,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Jynx,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Jynx,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Jynx,
        .shinyPalette = gMonShinyPalette_Jynx,
        .iconSprite = gMonIcon_Jynx,
        .iconPalIndex = 2,
        FOOTPRINT(Jynx)
        OVERWORLD(
            sPicTable_Jynx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jynx,
            gShinyOverworldPalette_Jynx
        )
        .levelUpLearnset = sJynxLevelUpLearnset,
        .teachableLearnset = sJynxTeachableLearnset,
    },
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
    [SPECIES_ELEKID] =
    {
        .baseHP        = 45,
        .baseAttack    = 63,
        .baseDefense   = 37,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 72 : 106,
        .evYield_Speed = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Elekid"),
        .cryId = CRY_ELEKID,
        .natDexNum = NATIONAL_DEX_ELEKID,
        .categoryName = _("Electricidad"),
        .height = 6,
        .weight = 235,
		.description = COMPOUND_STRING(
			"Acumula electricidad. Si entra en contacto\n"
			"con metal y descarga accidentalmente\n"
			"toda la electricidad almacenada, agita\n"
			"los brazos en círculo para recargarse."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Elekid,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Elekid,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Elekid,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Elekid,
        .shinyPalette = gMonShinyPalette_Elekid,
        .iconSprite = gMonIcon_Elekid,
        .iconPalIndex = 1,
        FOOTPRINT(Elekid)
        OVERWORLD(
            sPicTable_Elekid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Elekid,
            gShinyOverworldPalette_Elekid
        )
        .levelUpLearnset = sElekidLevelUpLearnset,
        .teachableLearnset = sElekidTeachableLearnset,
        .eggMoveLearnset = sElekidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTABUZZ}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_ELECTABUZZ] =
    {
        .baseHP        = 65,
        .baseAttack    = 83,
        .baseDefense   = 57,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 156,
        .evYield_Speed = 2,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Electabuzz"),
        .cryId = CRY_ELECTABUZZ,
        .natDexNum = NATIONAL_DEX_ELECTABUZZ,
        .categoryName = _("Electricidad"),
        .height = 11,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Al desatarse una tormenta, se enfrenta\n"
			"a otros para ver quién alcanza antes los\n"
			"sitios altos en los que pueden caer rayos.\n"
			"Hay ciudades que los usan como pararrayos."),
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Electabuzz,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Electabuzz,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .backPic = gMonBackPic_Electabuzz,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Electabuzz,
        .shinyPalette = gMonShinyPalette_Electabuzz,
        .iconSprite = gMonIcon_Electabuzz,
        .iconPalIndex = 1,
        FOOTPRINT(Electabuzz)
        OVERWORLD(
            sPicTable_Electabuzz,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electabuzz,
            gShinyOverworldPalette_Electabuzz
        )
        .levelUpLearnset = sElectabuzzLevelUpLearnset,
        .teachableLearnset = sElectabuzzTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE},
                                {EVO_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Electivire"),
        .cryId = CRY_ELECTIVIRE,
        .natDexNum = NATIONAL_DEX_ELECTIVIRE,
        .categoryName = _("Rayo"),
        .height = 18,
        .weight = 1386,
		.description = COMPOUND_STRING(
			"Toca a su enemigo con las puntas de sus\n"
			"dos colas y le suelta una descarga de\n"
			"20.000 voltios."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Electivire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Electivire,
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Electivire,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Electivire,
        .shinyPalette = gMonShinyPalette_Electivire,
        .iconSprite = gMonIcon_Electivire,
        .iconPalIndex = 1,
        FOOTPRINT(Electivire)
        OVERWORLD(
            sPicTable_Electivire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electivire,
            gShinyOverworldPalette_Electivire
        )
        .levelUpLearnset = sElectivireLevelUpLearnset,
        .teachableLearnset = sElectivireTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
    [SPECIES_MAGBY] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 37,
        .baseSpeed     = 83,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 73 : 117,
        .evYield_Speed = 1,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magby"),
        .cryId = CRY_MAGBY,
        .natDexNum = NATIONAL_DEX_MAGBY,
        .categoryName = _("Ascuas"),
        .height = 7,
        .weight = 214,
		.description = COMPOUND_STRING(
			"Observando la respiración de Magby, se\n"
			"sabe su estado de salud: si expulsa llamas\n"
			"amarillas, está bien. Pero si, además de las\n"
			"llamas, sale humo negro, está cansado."),
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magby,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Magby,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Magby,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magby,
        .shinyPalette = gMonShinyPalette_Magby,
        .iconSprite = gMonIcon_Magby,
        .iconPalIndex = 0,
        FOOTPRINT(Magby)
        OVERWORLD(
            sPicTable_Magby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magby,
            gShinyOverworldPalette_Magby
        )
        .levelUpLearnset = sMagbyLevelUpLearnset,
        .teachableLearnset = sMagbyTeachableLearnset,
        .eggMoveLearnset = sMagbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGMAR}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_MAGMAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 57,
        .baseSpeed     = 93,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 167,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magmar"),
        .cryId = CRY_MAGMAR,
        .natDexNum = NATIONAL_DEX_MAGMAR,
        .categoryName = _("Escupefuego"),
        .height = 13,
        .weight = 445,
		.description = COMPOUND_STRING(
			"Al luchar, expulsa violentas llamas para\n"
			"intimidar a su rival. Estos estallidos de\n"
			"fuego crean ondas de calor que abrasan\n"
			"la hierba y los árboles de la zona."),
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magmar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magmar,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Magmar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magmar,
        .shinyPalette = gMonShinyPalette_Magmar,
        .iconSprite = gMonIcon_Magmar,
        .iconPalIndex = 0,
        FOOTPRINT(Magmar)
        OVERWORLD(
            sPicTable_Magmar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magmar,
            gShinyOverworldPalette_Magmar
        )
        .levelUpLearnset = sMagmarLevelUpLearnset,
        .teachableLearnset = sMagmarTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR},
                                {EVO_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magmortar"),
        .cryId = CRY_MAGMORTAR,
        .natDexNum = NATIONAL_DEX_MAGMORTAR,
        .categoryName = _("Explosión"),
        .height = 16,
        .weight = 680,
		.description = COMPOUND_STRING(
			"Sus brazos disparan bolas de fuego\n"
			"a más de 2000 grados. Vive en\n"
			"cráteres volcánicos."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Magmortar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magmortar,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Magmortar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magmortar,
        .shinyPalette = gMonShinyPalette_Magmortar,
        .iconSprite = gMonIcon_Magmortar,
        .iconPalIndex = 0,
        FOOTPRINT(Magmortar)
        OVERWORLD(
            sPicTable_Magmortar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magmortar,
            gShinyOverworldPalette_Magmortar
        )
        .levelUpLearnset = sMagmortarLevelUpLearnset,
        .teachableLearnset = sMagmortarTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
    [SPECIES_PINSIR] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 200,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_MOLD_BREAKER, ABILITY_MOXIE },
    #else
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_MOXIE },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pinsir"),
        .cryId = CRY_PINSIR,
        .natDexNum = NATIONAL_DEX_PINSIR,
        .categoryName = _("Escarabajo"),
        .height = 15,
        .weight = 550,
		.description = COMPOUND_STRING(
			"Sus cuernos tienen fuerza para destrozar\n"
			"grandes troncos. Como tienen aversión al\n"
			"frío, cavan madrigueras bajo tierra donde\n"
			"duermen cuando bajan las temperaturas."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pinsir,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Pinsir,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pinsir,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Pinsir,
        .shinyPalette = gMonShinyPalette_Pinsir,
        .iconSprite = gMonIcon_Pinsir,
        .iconPalIndex = 2,
        FOOTPRINT(Pinsir)
        OVERWORLD(
            sPicTable_Pinsir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pinsir,
            gShinyOverworldPalette_Pinsir
        )
        .levelUpLearnset = sPinsirLevelUpLearnset,
        .teachableLearnset = sPinsirTeachableLearnset,
        .eggMoveLearnset = sPinsirEggMoveLearnset,
        .formSpeciesIdTable = sPinsirFormSpeciesIdTable,
        .formChangeTable = sPinsirFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PINSIR_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pinsir"),
        .cryId = CRY_PINSIR_MEGA,
        .natDexNum = NATIONAL_DEX_PINSIR,
        .categoryName = _("Escarabajo"),
        .height = 17,
        .weight = 590,
        .description = COMPOUND_STRING(
            "La Mega evolución lo deja\n"
            "en estado de nerviosismo.\n"
            "Atraviesa a los  rivales con sus 2\n"
            "grandes cuernos para desgarrarlos."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PinsirMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_PinsirMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_PinsirMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_PinsirMega,
        .shinyPalette = gMonShinyPalette_PinsirMega,
        .iconSprite = gMonIcon_PinsirMega,
        .iconPalIndex = 2,
        FOOTPRINT(Pinsir)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPinsirLevelUpLearnset,
        .teachableLearnset = sPinsirTeachableLearnset,
        .eggMoveLearnset = sPinsirEggMoveLearnset,
        .formSpeciesIdTable = sPinsirFormSpeciesIdTable,
        .formChangeTable = sPinsirFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
    [SPECIES_TAUROS] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_SHEER_FORCE },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_SHEER_FORCE },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tauros"),
        .cryId = CRY_TAUROS,
        .natDexNum = NATIONAL_DEX_TAUROS,
        .categoryName = _("Toro bravo"),
        .height = 14,
        .weight = 884,
		.description = COMPOUND_STRING(
			"Le resulta imposible estarse quieto. Si\n"
			"no hay ningún rival que luche con él, se\n"
			"estampa contra árboles para calmarse\n"
			"y los embiste para echarlos abajo."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tauros,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Tauros,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Tauros,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Tauros,
        .shinyPalette = gMonShinyPalette_Tauros,
        .iconSprite = gMonIcon_Tauros,
        .iconPalIndex = 2,
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_Tauros,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tauros,
            gShinyOverworldPalette_Tauros
        )
        .levelUpLearnset = sTaurosLevelUpLearnset,
        .teachableLearnset = sTaurosTeachableLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
    },

#if P_PALDEAN_FORMS
    [SPECIES_TAUROS_PALDEAN_COMBAT_BREED] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Tauros"),
        .cryId = CRY_TAUROS,
        .natDexNum = NATIONAL_DEX_TAUROS,
        .categoryName = _("Toro bravo"),
        .height = 14,
        .weight = 1150,
        .description = COMPOUND_STRING(
            "Este Pokémon tiene un cuerpo musculoso\n"
"y sobresale en el combate cuerpo a cuerpo.\n"
"Utiliza sus cuernos cortos para golpear\n"
"los puntos débiles del oponente."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TaurosPaldeanCombatBreed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_TaurosPaldean,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TaurosPaldeanCombatBreed,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TaurosPaldeanCombatBreed,
        .shinyPalette = gMonShinyPalette_TaurosPaldeanCombatBreed,
        .iconSprite = gMonIcon_TaurosPaldeanCombatBreed,
        .iconPalIndex = 0,
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_TaurosPaldeanCombatBreed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TaurosPaldeanCombatBreed,
            gShinyOverworldPalette_TaurosPaldeanCombatBreed
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sTaurosPaldeanCombatBreedLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeanCombatBreedTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeanCombatBreedEggMoveLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
    },

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Tauros"),
        .cryId = CRY_TAUROS,
        .natDexNum = NATIONAL_DEX_TAUROS,
        .categoryName = _("Toro bravo"),
        .height = 14,
        .weight = 850,
        .description = COMPOUND_STRING(
            "Cuando se calienta con energía de fuego, sus cuernos pueden\n"
"alcanzar temperaturas superiores a 1,800 ºC.\n"
"Quienes sean atravesados por ellos sufrirán\n"
"tanto heridas como quemaduras."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TaurosPaldeanBlazeBreed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_TaurosPaldean,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TaurosPaldeanBlazeBreed,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TaurosPaldeanBlazeBreed,
        .shinyPalette = gMonShinyPalette_TaurosPaldeanBlazeBreed,
        .iconSprite = gMonIcon_TaurosPaldeanBlazeBreed,
        .iconPalIndex = 0,
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_TaurosPaldeanBlazeBreed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TaurosPaldeanBlazeBreed,
            gShinyOverworldPalette_TaurosPaldeanBlazeBreed
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sTaurosPaldeanBlazeBreedLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeanBlazeBreedTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeanBlazeBreedEggMoveLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
    },

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Tauros"),
        .cryId = CRY_TAUROS,
        .natDexNum = NATIONAL_DEX_TAUROS,
        .categoryName = _("Toro bravo"),
        .height = 14,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "Este Pokémon lanza agua desde los agujeros en\n"
"las puntas de sus cuernos los chorros a alta presión\n"
"atraviesan a los enemigos de Tauros."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TaurosPaldeanAquaBreed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_TaurosPaldean,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TaurosPaldeanAquaBreed,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TaurosPaldeanAquaBreed,
        .shinyPalette = gMonShinyPalette_TaurosPaldeanAquaBreed,
        .iconSprite = gMonIcon_TaurosPaldeanAquaBreed,
        .iconPalIndex = 0,
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_TaurosPaldeanAquaBreed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TaurosPaldeanAquaBreed,
            gShinyOverworldPalette_TaurosPaldeanAquaBreed
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sTaurosPaldeanAquaBreedLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeanAquaBreedTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeanAquaBreedEggMoveLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
    [SPECIES_MAGIKARP] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 15,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 20,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magikarp"),
        .cryId = CRY_MAGIKARP,
        .natDexNum = NATIONAL_DEX_MAGIKARP,
        .categoryName = _("Pez"),
        .height = 9,
        .weight = 100,
		.description = COMPOUND_STRING(
			"Los músculos con los que nada son débiles,\n"
			"así que se lo lleva la corriente\n"
			"con facilidad. Muchos Magikarp\n"
			"van a parar a piscinas naturales."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magikarp,
        .frontPicFemale = gMonFrontPic_MagikarpF,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magikarp,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Magikarp,
        .backPicFemale = gMonBackPic_MagikarpF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Magikarp,
        .shinyPalette = gMonShinyPalette_Magikarp,
        .iconSprite = gMonIcon_Magikarp,
        .iconPalIndex = 0,
        FOOTPRINT(Magikarp)
        OVERWORLD(
            sPicTable_Magikarp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Magikarp,
            gShinyOverworldPalette_Magikarp
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sMagikarpLevelUpLearnset,
        .teachableLearnset = sMagikarpTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GYARADOS}),
    },

    [SPECIES_GYARADOS] =
    {
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 214,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gyarados"),
        .cryId = CRY_GYARADOS,
        .natDexNum = NATIONAL_DEX_GYARADOS,
        .categoryName = _("Atrocidad"),
        .height = 65,
        .weight = 2350,
		.description = COMPOUND_STRING(
			"Es extremadamente feroz y violento.\n"
			"Cuando las personas comienzan a luchar,\n"
			"aparece y reduce a cenizas todo lo que\n"
			"pilla con intensas llamaradas."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Gyarados,
        .frontPicFemale = gMonFrontPic_GyaradosF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gyarados,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Gyarados,
        .backPicFemale = gMonBackPic_GyaradosF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gyarados,
        .shinyPalette = gMonShinyPalette_Gyarados,
        .iconSprite = gMonIcon_Gyarados,
        .iconPalIndex = 0,
        FOOTPRINT(Gyarados)
        OVERWORLD(
            sPicTable_Gyarados,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Gyarados,
            gShinyOverworldPalette_Gyarados
        )
        .levelUpLearnset = sGyaradosLevelUpLearnset,
        .teachableLearnset = sGyaradosTeachableLearnset,
        .formSpeciesIdTable = sGyaradosFormSpeciesIdTable,
        .formChangeTable = sGyaradosFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GYARADOS_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = 224,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gyarados"),
        .cryId = CRY_GYARADOS_MEGA,
        .natDexNum = NATIONAL_DEX_GYARADOS,
        .categoryName = _("Atrocidad"),
        .height = 65,
        .weight = 3050,
        .description = COMPOUND_STRING(
            "Aunque obedece su impulso de\n"
            "destruir todo a su alcance,\n"
            "responderá a un Entrenador en\n"
            "en el que realmente confíe."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_GyaradosMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GyaradosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_GyaradosMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_GyaradosMega,
        .shinyPalette = gMonShinyPalette_GyaradosMega,
        .iconSprite = gMonIcon_GyaradosMega,
        .iconPalIndex = 0,
        FOOTPRINT(Gyarados)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGyaradosLevelUpLearnset,
        .teachableLearnset = sGyaradosTeachableLearnset,
        .formSpeciesIdTable = sGyaradosFormSpeciesIdTable,
        .formChangeTable = sGyaradosFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
    [SPECIES_LAPRAS] =
    {
        .baseHP        = 130,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 219,
        .evYield_HP = 2,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lapras"),
        .cryId = CRY_LAPRAS,
        .natDexNum = NATIONAL_DEX_LAPRAS,
        .categoryName = _("Transporte"),
        .height = 25,
        .weight = 2200,
		.description = COMPOUND_STRING(
			"Por culpa de la gente, está en peligro de\n"
			"extinción. Dicen que, al anochecer, se pone\n"
			"a cantar quejicoso mientras busca a los\n"
			"miembros de su especie que puedan quedar."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Lapras,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lapras,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lapras,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Lapras,
        .shinyPalette = gMonShinyPalette_Lapras,
        .iconSprite = gMonIcon_Lapras,
        .iconPalIndex = 2,
        FOOTPRINT(Lapras)
        OVERWORLD(
            sPicTable_Lapras,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Lapras,
            gShinyOverworldPalette_Lapras
        )
        .levelUpLearnset = sLaprasLevelUpLearnset,
        .teachableLearnset = sLaprasTeachableLearnset,
        .eggMoveLearnset = sLaprasEggMoveLearnset,
        .formSpeciesIdTable = sLaprasFormSpeciesIdTable,
        .formChangeTable = sLaprasFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_LAPRAS_GIGANTAMAX] =
    {
        .baseHP        = 130,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 219,
        .evYield_HP = 2,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lapras"),
        .cryId = CRY_LAPRAS,
        .natDexNum = NATIONAL_DEX_LAPRAS,
        .categoryName = _("Transporte"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Más de 5 mil personas pueden\n"
            "montarse en su caparazón. Y es\n"
            "un viaje muy cómodo, sin el\n"
            "más mínimo movimiento."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_LaprasGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LaprasGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LaprasGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_LaprasGigantamax,
        .shinyPalette = gMonShinyPalette_LaprasGigantamax,
        .iconSprite = gMonIcon_LaprasGigantamax,
        .iconPalIndex = 2,
        FOOTPRINT(Lapras)
        .isGigantamax = TRUE,
        .levelUpLearnset = sLaprasLevelUpLearnset,
        .teachableLearnset = sLaprasTeachableLearnset,
        .eggMoveLearnset = sLaprasEggMoveLearnset,
        .formSpeciesIdTable = sLaprasFormSpeciesIdTable,
        .formChangeTable = sLaprasFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
    [SPECIES_DITTO] =
    {
        .baseHP        = 48,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 48,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 35,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 101 : 61,
        .evYield_HP = 1,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DITTO),
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_IMPOSTER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ditto"),
        .cryId = CRY_DITTO,
        .natDexNum = NATIONAL_DEX_DITTO,
        .categoryName = _("Transform."),
        .height = 3,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Altera su estructura celular para cambiar\n"
			"de forma. Pero, si intenta transformarse\n"
			"en algo según los datos que tenga en la\n"
			"memoria, habrá detalles que se le escapen."),
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ditto,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Ditto,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Ditto,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Ditto,
        .shinyPalette = gMonShinyPalette_Ditto,
        .iconSprite = gMonIcon_Ditto,
        .iconPalIndex = 2,
        FOOTPRINT(Ditto)
        OVERWORLD(
            sPicTable_Ditto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Ditto,
            gShinyOverworldPalette_Ditto
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sDittoLevelUpLearnset,
        .teachableLearnset = sDittoTeachableLearnset,
    },
#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
    [SPECIES_EEVEE] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },
    #else
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_ANTICIPATION },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Eevee"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_EEVEE,
        .categoryName = _("Evolución"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Eevee,
        .frontPicFemale = gMonFrontPic_EeveeF,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Eevee,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Eevee,
        .backPicFemale = gMonBackPic_EeveeF,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Eevee,
        .shinyPalette = gMonShinyPalette_Eevee,
        .iconSprite = gMonIcon_Eevee,
        .iconPalIndex = 2,
        FOOTPRINT(Eevee)
        OVERWORLD(
            sPicTable_Eevee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eevee,
            gShinyOverworldPalette_Eevee
        )
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,
        .formChangeTable = sEeveeFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                                {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                                {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                                {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                                {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
                                {EVO_SPECIFIC_MAP, MAP_PETALBURG_WOODS, SPECIES_LEAFEON},
                                {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LEAFEON},
                                {EVO_SPECIFIC_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_GLACEON},
                                {EVO_ITEM, ITEM_ICE_STONE, SPECIES_GLACEON},
                                {EVO_FRIENDSHIP_MOVE_TYPE, TYPE_FAIRY, SPECIES_SYLVEON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_EEVEE_GIGANTAMAX] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Eevee"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_EEVEE,
        .categoryName = _("Evolución"),
        .height = 180,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Habiéndose vuelto más amigable e\n"
            "inocente, intenta jugar con\n"
            "cualquiera que esté cerca, solo para\n"
            "aplastarlos con su inmenso cuerpo."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_EeveeGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_EeveeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EeveeGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EeveeGigantamax,
        .shinyPalette = gMonShinyPalette_EeveeGigantamax,
        .iconSprite = gMonIcon_EeveeGigantamax,
        .iconPalIndex = 2,
        FOOTPRINT(Eevee)
        .isGigantamax = TRUE,
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,
        .formChangeTable = sEeveeFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_EEVEE_PARTNER] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Eevee"),
        .cryId = CRY_EEVEE,
        .natDexNum = NATIONAL_DEX_EEVEE,
        .categoryName = _("Evolución"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Eevee,
        .frontPicFemale = gMonFrontPic_EeveeF,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Eevee,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Eevee,
        .backPicFemale = gMonBackPic_EeveeF,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Eevee,
        .shinyPalette = gMonShinyPalette_Eevee,
        .iconSprite = gMonIcon_EeveePartner,
        .iconPalIndex = 2,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_EeveePartnerF,
        .iconPalIndexFemale = 2,
    #endif
        FOOTPRINT(Eevee)
        OVERWORLD(
            sPicTable_Eevee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eevee,
            gShinyOverworldPalette_Eevee
        )
        .cannotBeTraded = TRUE,
        .allPerfectIVs = TRUE,
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,
    },

    [SPECIES_VAPOREON] =
    {
        .baseHP        = 130,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_WATER_ABSORB, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Vaporeon"),
        .cryId = CRY_VAPOREON,
        .natDexNum = NATIONAL_DEX_VAPOREON,
        .categoryName = _("Burbuja"),
        .height = 10,
        .weight = 290,
		.description = COMPOUND_STRING(
			"Sufrió una mutación repentina y desarrolló\n"
			"aletas y branquias que le permiten vivir\n"
			"bajo el agua. Asimismo, este Pokémon\n"
			"tiene la habilidad de controlar las aguas."),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vaporeon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Vaporeon,
        .frontAnimId = ANIM_GLOW_BLUE,
        .backPic = gMonBackPic_Vaporeon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Vaporeon,
        .shinyPalette = gMonShinyPalette_Vaporeon,
        .iconSprite = gMonIcon_Vaporeon,
        .iconPalIndex = 0,
        FOOTPRINT(Vaporeon)
        OVERWORLD(
            sPicTable_Vaporeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vaporeon,
            gShinyOverworldPalette_Vaporeon
        )
        .levelUpLearnset = sVaporeonLevelUpLearnset,
        .teachableLearnset = sVaporeonTeachableLearnset,
    },

    [SPECIES_JOLTEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 197,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_VOLT_ABSORB, ABILITY_QUICK_FEET },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Jolteon"),
        .cryId = CRY_JOLTEON,
        .natDexNum = NATIONAL_DEX_JOLTEON,
        .categoryName = _("Rayo"),
        .height = 8,
        .weight = 245,
		.description = COMPOUND_STRING(
			"Crea algo de electricidad, cuya intensidad\n"
			"aumenta con la estática que acumula\n"
			"en un pelaje formado por agujas cargadas\n"
			"de energía. Así puede lanzar rayos."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jolteon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Jolteon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Jolteon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Jolteon,
        .shinyPalette = gMonShinyPalette_Jolteon,
        .iconSprite = gMonIcon_Jolteon,
        .iconPalIndex = 2,
        FOOTPRINT(Jolteon)
        OVERWORLD(
            sPicTable_Jolteon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jolteon,
            gShinyOverworldPalette_Jolteon
        )
        .levelUpLearnset = sJolteonLevelUpLearnset,
        .teachableLearnset = sJolteonTeachableLearnset,
    },

    [SPECIES_FLAREON] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLASH_FIRE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flareon"),
        .cryId = CRY_FLAREON,
        .natDexNum = NATIONAL_DEX_FLAREON,
        .categoryName = _("Llama"),
        .height = 9,
        .weight = 250,
		.description = COMPOUND_STRING(
			"La suavidad de su pelaje tiene una función\n"
			"clara: liberar calor para que no se asfixie.\n"
			"La temperatura corporal puede alcanzar\n"
			"los 900 grados centígrados."),
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Flareon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Flareon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Flareon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Flareon,
        .shinyPalette = gMonShinyPalette_Flareon,
        .iconSprite = gMonIcon_Flareon,
        .iconPalIndex = 3,
        FOOTPRINT(Flareon)
        OVERWORLD(
            sPicTable_Flareon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Flareon,
            gShinyOverworldPalette_Flareon
        )
        .levelUpLearnset = sFlareonLevelUpLearnset,
        .teachableLearnset = sFlareonTeachableLearnset,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_ESPEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 197,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Espeon"),
        .cryId = CRY_ESPEON,
        .natDexNum = NATIONAL_DEX_ESPEON,
        .categoryName = _("Sol"),
        .height = 9,
        .weight = 265,
		.description = COMPOUND_STRING(
			"Un Espeon es muy leal al Entrenador que\n"
			"considera digno. Dicen que desarrolló\n"
			"sus poderes adivinatorios para evitar que\n"
			"su Entrenador sufriera ningún daño."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Espeon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Espeon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Espeon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Espeon,
        .shinyPalette = gMonShinyPalette_Espeon,
        .iconSprite = gMonIcon_Espeon,
        .iconPalIndex = 2,
        FOOTPRINT(Espeon)
        OVERWORLD(
            sPicTable_Espeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Espeon,
            gShinyOverworldPalette_Espeon
        )
        .levelUpLearnset = sEspeonLevelUpLearnset,
        .teachableLearnset = sEspeonTeachableLearnset,
    },

    [SPECIES_UMBREON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 197,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Umbreon"),
        .cryId = CRY_UMBREON,
        .natDexNum = NATIONAL_DEX_UMBREON,
        .categoryName = _("Luna"),
        .height = 10,
        .weight = 270,
		.description = COMPOUND_STRING(
			"Evolucionó tras haber estado expuesto a\n"
			"ondas lunares. Se esconde en la oscuridad\n"
			"en silencio y espera a que su presa se\n"
			"mueva. Cuando ataca, le brillan los anillos."),
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Umbreon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Umbreon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Umbreon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Umbreon,
        .shinyPalette = gMonShinyPalette_Umbreon,
        .iconSprite = gMonIcon_Umbreon,
        .iconPalIndex = 0,
        FOOTPRINT(Umbreon)
        OVERWORLD(
            sPicTable_Umbreon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Umbreon,
            gShinyOverworldPalette_Umbreon
        )
        .levelUpLearnset = sUmbreonLevelUpLearnset,
        .teachableLearnset = sUmbreonTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Leafeon"),
        .cryId = CRY_LEAFEON,
        .natDexNum = NATIONAL_DEX_LEAFEON,
        .categoryName = _("Verdor"),
        .height = 10,
        .weight = 255,
		.description = COMPOUND_STRING(
			"Al igual que una planta, hace la\n"
			"fotosíntesis. Como consecuencia,\n"
			"siempre está rodeado de aire puro."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Leafeon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Leafeon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Leafeon,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Leafeon,
        .shinyPalette = gMonShinyPalette_Leafeon,
        .iconSprite = gMonIcon_Leafeon,
        .iconPalIndex = 1,
        FOOTPRINT(Leafeon)
        OVERWORLD(
            sPicTable_Leafeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Leafeon,
            gShinyOverworldPalette_Leafeon
        )
        .levelUpLearnset = sLeafeonLevelUpLearnset,
        .teachableLearnset = sLeafeonTeachableLearnset,
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Glaceon"),
        .cryId = CRY_GLACEON,
        .natDexNum = NATIONAL_DEX_GLACEON,
        .categoryName = _("Nieve fresca"),
        .height = 8,
        .weight = 259,
		.description = COMPOUND_STRING(
			"Para protegerse, puede congelar\n"
			"completamente su pelaje, de modo que\n"
			"los pelos parecen agujas."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glaceon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Glaceon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Glaceon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Glaceon,
        .shinyPalette = gMonShinyPalette_Glaceon,
        .iconSprite = gMonIcon_Glaceon,
        .iconPalIndex = 0,
        FOOTPRINT(Glaceon)
        OVERWORLD(
            sPicTable_Glaceon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Glaceon,
            gShinyOverworldPalette_Glaceon
        )
        .levelUpLearnset = sGlaceonLevelUpLearnset,
        .teachableLearnset = sGlaceonTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_CUTE_CHARM, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Sylveon"),
        .cryId = CRY_SYLVEON,
        .natDexNum = NATIONAL_DEX_SYLVEON,
        .categoryName = _("Vínculo"),
        .height = 10,
        .weight = 235,
		.description = COMPOUND_STRING(
			"Enrolla sus apéndices sensoriales con\n"
			"forma de cinta en los brazos de su\n"
			"querido entrenador cuando caminan juntos."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sylveon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Sylveon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Sylveon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Sylveon,
        .shinyPalette = gMonShinyPalette_Sylveon,
        .iconSprite = gMonIcon_Sylveon,
        .iconPalIndex = 0,
        FOOTPRINT(Sylveon)
        OVERWORLD(
            sPicTable_Sylveon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sylveon,
            gShinyOverworldPalette_Sylveon
        )
        .levelUpLearnset = sSylveonLevelUpLearnset,
        .teachableLearnset = sSylveonTeachableLearnset,
    },
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
    [SPECIES_PORYGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 79 : 130,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
    #else
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_ANALYTIC },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Porygon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PORYGON,
        .categoryName = _("Virtual"),
        .height = 8,
        .weight = 365,
		.description = COMPOUND_STRING(
			"Puede reconvertirse en datos informáticos\n"
			"y entrar en el ciberespacio.\n"
			"Tiene protección anti-copia, así que\n"
			"es imposible duplicarlo."),
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Porygon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Porygon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Porygon,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Porygon,
        .shinyPalette = gMonShinyPalette_Porygon,
        .iconSprite = gMonIcon_Porygon,
        .iconPalIndex = 0,
        FOOTPRINT(Porygon)
        OVERWORLD(
            sPicTable_Porygon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Porygon,
            gShinyOverworldPalette_Porygon
        )
        .levelUpLearnset = sPorygonLevelUpLearnset,
        .teachableLearnset = sPorygonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2},
                                {EVO_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_PORYGON2] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 180,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
    #else
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_ANALYTIC },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Porygon2"),
        .cryId = CRY_PORYGON2,
        .natDexNum = NATIONAL_DEX_PORYGON2,
        .categoryName = _("Virtual"),
        .height = 6,
        .weight = 325,
		.description = COMPOUND_STRING(
			"Porygon2 fue creado por el hombre gracias\n"
			"a los avances científicos. Su inteligencia\n"
			"artificial le permite aprender gestos y\n"
			"emociones totalmente nuevas."),
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Porygon2,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Porygon2,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Porygon2,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Porygon2,
        .shinyPalette = gMonShinyPalette_Porygon2,
        .iconSprite = gMonIcon_Porygon2,
        .iconPalIndex = 0,
        FOOTPRINT(Porygon2)
        OVERWORLD(
            sPicTable_Porygon2,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Porygon2,
            gShinyOverworldPalette_Porygon2
        )
        .levelUpLearnset = sPorygon2LevelUpLearnset,
        .teachableLearnset = sPorygon2TeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                                {EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 185,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Porygon-Z"),
        .cryId = CRY_PORYGON_Z,
        .natDexNum = NATIONAL_DEX_PORYGON_Z,
        .categoryName = _("Virtual"),
        .height = 9,
        .weight = 340,
        .description = COMPOUND_STRING(
            "Para crear un Pokémon más avanzado,\n"
            "le instalaron un programa adicional,\n"
            "pero este contenía un virus que hace\n"
            "que se mueva extrañamente."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PorygonZ,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Porygon_Z,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_PorygonZ,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_PorygonZ,
        .shinyPalette = gMonShinyPalette_PorygonZ,
        .iconSprite = gMonIcon_PorygonZ,
        .iconPalIndex = 0,
        FOOTPRINT(PorygonZ)
        OVERWORLD(
            sPicTable_PorygonZ,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PorygonZ,
            gShinyOverworldPalette_PorygonZ
        )
        .levelUpLearnset = sPorygonZLevelUpLearnset,
        .teachableLearnset = sPorygonZTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_OMANYTE
    [SPECIES_OMANYTE] =
    {
        .baseHP        = 35,
        .baseAttack    = 40,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 120,
    #endif
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Omanyte"),
        .cryId = CRY_OMANYTE,
        .natDexNum = NATIONAL_DEX_OMANYTE,
        .categoryName = _("Espiral"),
        .height = 4,
        .weight = 75,
		.description = COMPOUND_STRING(
			"Es un Pokémon ancestral que se extinguió\n"
			"hace mucho tiempo y se recuperó a partir\n"
			"de fósiles. Si le atacan, se esconderá\n"
			"dentro de su dura concha."),
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Omanyte,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Omanyte,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Omanyte,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Omanyte,
        .shinyPalette = gMonShinyPalette_Omanyte,
        .iconSprite = gMonIcon_Omanyte,
        .iconPalIndex = 0,
        FOOTPRINT(Omanyte)
        OVERWORLD(
            sPicTable_Omanyte,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Omanyte,
            gShinyOverworldPalette_Omanyte
        )
        .levelUpLearnset = sOmanyteLevelUpLearnset,
        .teachableLearnset = sOmanyteTeachableLearnset,
        .eggMoveLearnset = sOmanyteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_OMASTAR}),
    },

    [SPECIES_OMASTAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 125,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 199,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Omastar"),
        .cryId = CRY_OMASTAR,
        .natDexNum = NATIONAL_DEX_OMASTAR,
        .categoryName = _("Espiral"),
        .height = 10,
        .weight = 350,
		.description = COMPOUND_STRING(
			"Usa los tentáculos para cazar.\n"
			"Se cree que se ha extinguido debido\n"
			"al tamaño y al peso que alcanza su concha,\n"
			"que entorpece sus movimientos."),
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Omastar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Omastar,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Omastar,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Omastar,
        .shinyPalette = gMonShinyPalette_Omastar,
        .iconSprite = gMonIcon_Omastar,
        .iconPalIndex = 0,
        FOOTPRINT(Omastar)
        OVERWORLD(
            sPicTable_Omastar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Omastar,
            gShinyOverworldPalette_Omastar
        )
        .levelUpLearnset = sOmastarLevelUpLearnset,
        .teachableLearnset = sOmastarTeachableLearnset,
    },
#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
    [SPECIES_KABUTO] =
    {
        .baseHP        = 30,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 119,
    #endif
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kabuto"),
        .cryId = CRY_KABUTO,
        .natDexNum = NATIONAL_DEX_KABUTO,
        .categoryName = _("Caparazón"),
        .height = 5,
        .weight = 115,
		.description = COMPOUND_STRING(
			"Lo han regenerado a partir de un fósil,\n"
			"pero aún queda algún raro ejemplar vivo.\n"
			"Aunque existe desde hace 300 millones de\n"
			"años, este Pokémon no ha cambiado nada."),
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kabuto,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Kabuto,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Kabuto,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Kabuto,
        .shinyPalette = gMonShinyPalette_Kabuto,
        .iconSprite = gMonIcon_Kabuto,
        .iconPalIndex = 2,
        FOOTPRINT(Kabuto)
        OVERWORLD(
            sPicTable_Kabuto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Kabuto,
            gShinyOverworldPalette_Kabuto
        )
        .levelUpLearnset = sKabutoLevelUpLearnset,
        .teachableLearnset = sKabutoTeachableLearnset,
        .eggMoveLearnset = sKabutoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_KABUTOPS}),
    },

    [SPECIES_KABUTOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 115,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 199,
    #else
        .expYield = 201,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kabutops"),
        .cryId = CRY_KABUTOPS,
        .natDexNum = NATIONAL_DEX_KABUTOPS,
        .categoryName = _("Caparazón"),
        .height = 13,
        .weight = 405,
		.description = COMPOUND_STRING(
			"Antes buceaba para atrapar a su presa,\n"
			"pero evolucionó, cambió de hábitat y ahora\n"
			"vive en tierra firme. El cambio que se\n"
			"ve en patas y branquias así lo confirma."),
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kabutops,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Kabutops,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Kabutops,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Kabutops,
        .shinyPalette = gMonShinyPalette_Kabutops,
        .iconSprite = gMonIcon_Kabutops,
        .iconPalIndex = 2,
        FOOTPRINT(Kabutops)
        OVERWORLD(
            sPicTable_Kabutops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kabutops,
            gShinyOverworldPalette_Kabutops
        )
        .levelUpLearnset = sKabutopsLevelUpLearnset,
        .teachableLearnset = sKabutopsTeachableLearnset,
    },
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
    [SPECIES_AERODACTYL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 130,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 202,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_PRESSURE, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Aerodactyl"),
        .cryId = CRY_AERODACTYL,
        .natDexNum = NATIONAL_DEX_AERODACTYL,
        .categoryName = _("Fósil"),
        .height = 18,
        .weight = 590,
		.description = COMPOUND_STRING(
			"Surgió en la era de los dinosaurios. Se\n"
			"regeneró a partir de material genético\n"
			"contenido en ámbar. Se cree que fue el\n"
			"amo de los cielos en épocas pasadas."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Aerodactyl,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Aerodactyl,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Aerodactyl,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Aerodactyl,
        .shinyPalette = gMonShinyPalette_Aerodactyl,
        .iconSprite = gMonIcon_Aerodactyl,
        .iconPalIndex = 2,
        FOOTPRINT(Aerodactyl)
        OVERWORLD(
            sPicTable_Aerodactyl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Aerodactyl,
            gShinyOverworldPalette_Aerodactyl
        )
        .levelUpLearnset = sAerodactylLevelUpLearnset,
        .teachableLearnset = sAerodactylTeachableLearnset,
        .eggMoveLearnset = sAerodactylEggMoveLearnset,
        .formSpeciesIdTable = sAerodactylFormSpeciesIdTable,
        .formChangeTable = sAerodactylFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AERODACTYL_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 215,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Aerodactyl"),
        .cryId = CRY_AERODACTYL_MEGA,
        .natDexNum = NATIONAL_DEX_AERODACTYL,
        .categoryName = _("Fósil"),
        .height = 21,
        .weight = 790,
        .description = COMPOUND_STRING(
            "El poder de la Mega ha\n"
            "restaurado al completo sus\n"
            "genes. Las rocas en su cuerpo\n"
            "son más duras que el diamante."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_AerodactylMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AerodactylMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_AerodactylMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_AerodactylMega,
        .shinyPalette = gMonShinyPalette_AerodactylMega,
        .iconSprite = gMonIcon_AerodactylMega,
        .iconPalIndex = 2,
        FOOTPRINT(Aerodactyl)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAerodactylLevelUpLearnset,
        .teachableLearnset = sAerodactylTeachableLearnset,
        .eggMoveLearnset = sAerodactylEggMoveLearnset,
        .formSpeciesIdTable = sAerodactylFormSpeciesIdTable,
        .formChangeTable = sAerodactylFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 50,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 78 : 94,
        .evYield_HP = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PICKUP, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Munchlax"),
        .cryId = CRY_MUNCHLAX,
        .natDexNum = NATIONAL_DEX_MUNCHLAX,
        .categoryName = _("Comilón"),
        .height = 6,
        .weight = 1050,
		.description = COMPOUND_STRING(
			"En su desesperación por engullir comida,\n"
			"se suele olvidar de la que esconde debajo\n"
			"de su pelaje."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Munchlax,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Munchlax,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Munchlax,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Munchlax,
        .shinyPalette = gMonShinyPalette_Munchlax,
        .iconSprite = gMonIcon_Munchlax,
        .iconPalIndex = 3,
        FOOTPRINT(Munchlax)
        OVERWORLD(
            sPicTable_Munchlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Munchlax,
            gShinyOverworldPalette_Munchlax
        )
        .levelUpLearnset = sMunchlaxLevelUpLearnset,
        .teachableLearnset = sMunchlaxTeachableLearnset,
        .eggMoveLearnset = sMunchlaxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_SNORLAX] =
    {
        .baseHP        = 160,
        .baseAttack    = 110,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 154,
        .evYield_HP = 2,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_IMMUNITY, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Snorlax"),
        .cryId = CRY_SNORLAX,
        .natDexNum = NATIONAL_DEX_SNORLAX,
        .categoryName = _("Dormir"),
        .height = 21,
        .weight = 4600,
		.description = COMPOUND_STRING(
			"Se dedica a comer y dormir. Es tan dócil\n"
			"que es fácil ver a niños usando la gran\n"
			"panza que tiene como lugar de juegos."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        .frontPic = gMonFrontPic_Snorlax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Snorlax,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Snorlax,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Snorlax,
        .shinyPalette = gMonShinyPalette_Snorlax,
        .iconSprite = gMonIcon_Snorlax,
        .iconPalIndex = 3,
        FOOTPRINT(Snorlax)
        OVERWORLD(
            sPicTable_Snorlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snorlax,
            gShinyOverworldPalette_Snorlax
        )
        .levelUpLearnset = sSnorlaxLevelUpLearnset,
        .teachableLearnset = sSnorlaxTeachableLearnset,
        .eggMoveLearnset = sSnorlaxEggMoveLearnset,
        .formSpeciesIdTable = sSnorlaxFormSpeciesIdTable,
        .formChangeTable = sSnorlaxFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SNORLAX_GIGANTAMAX] =
    {
        .baseHP        = 160,
        .baseAttack    = 110,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 154,
        .evYield_HP = 2,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_IMMUNITY, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Snorlax"),
        .cryId = CRY_SNORLAX,
        .natDexNum = NATIONAL_DEX_SNORLAX,
        .categoryName = _("Dormir"),
        .height = 350,
        .weight = 0,
        .description = COMPOUND_STRING(
            "La energía han afectado\n"
            "a las semillas y hasta a las piedras\n"
            "que se quedaron pegadas,\n"
            "haciéndolas crecer enormes."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        .frontPic = gMonFrontPic_SnorlaxGigantamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SnorlaxGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SnorlaxGigantamax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SnorlaxGigantamax,
        .shinyPalette = gMonShinyPalette_SnorlaxGigantamax,
        .iconSprite = gMonIcon_SnorlaxGigantamax,
        .iconPalIndex = 3,
        FOOTPRINT(Snorlax)
        .isGigantamax = TRUE,
        .levelUpLearnset = sSnorlaxLevelUpLearnset,
        .teachableLearnset = sSnorlaxTeachableLearnset,
        .eggMoveLearnset = sSnorlaxEggMoveLearnset,
        .formSpeciesIdTable = sSnorlaxFormSpeciesIdTable,
        .formChangeTable = sSnorlaxFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
    [SPECIES_ARTICUNO] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_ICE, TYPE_FLYING),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 215,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_SNOW_CLOAK },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Articuno"),
        .cryId = CRY_ARTICUNO,
        .natDexNum = NATIONAL_DEX_ARTICUNO,
        .categoryName = _("Congelar"),
        .height = 17,
        .weight = 554,
		.description = COMPOUND_STRING(
			"Es un legendario pájaro Pokémon que\n"
			"puede controlar el hielo. El batir de sus\n"
			"alas congela el aire. Dicen que consigue\n"
			"hacer nevar cuando vuela."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Articuno,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Articuno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Articuno,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Articuno,
        .shinyPalette = gMonShinyPalette_Articuno,
        .iconSprite = gMonIcon_Articuno,
        .iconPalIndex = 2,
        FOOTPRINT(Articuno)
        OVERWORLD(
            sPicTable_Articuno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Articuno,
            gShinyOverworldPalette_Articuno
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sArticunoLevelUpLearnset,
        .teachableLearnset = sArticunoTeachableLearnset,
        .formSpeciesIdTable = sArticunoFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_COMPETITIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Articuno"),
        .cryId = CRY_ARTICUNO,
        .natDexNum = NATIONAL_DEX_ARTICUNO,
        .categoryName = _("Cruel"),
        .height = 17,
        .weight = 509,
        .description = COMPOUND_STRING(
            "Dispara rayos que paralizan a los rivales\n"
            "como si estuvieran congelados.\n"
            "Sus plumas de energía atraviesan\n"
            "placas de acero como si fueran papel."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_ArticunoGalarian,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ArticunoGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_ArticunoGalarian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ArticunoGalarian,
        .shinyPalette = gMonShinyPalette_ArticunoGalarian,
        .iconSprite = gMonIcon_ArticunoGalarian,
        .iconPalIndex = 2,
        FOOTPRINT(Articuno)
        OVERWORLD(
            sPicTable_ArticunoGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ArticunoGalarian,
            gShinyOverworldPalette_ArticunoGalarian
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .levelUpLearnset = sArticunoGalarianLevelUpLearnset,
        .teachableLearnset = sArticunoGalarianTeachableLearnset,
        .formSpeciesIdTable = sArticunoFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
    [SPECIES_ZAPDOS] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 216,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_STATIC },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zapdos"),
        .cryId = CRY_ZAPDOS,
        .natDexNum = NATIONAL_DEX_ZAPDOS,
        .categoryName = _("Electricidad"),
        .height = 16,
        .weight = 526,
		.description = COMPOUND_STRING(
			"Es un legendario pájaro Pokémon que tiene\n"
			"la habilidad de controlar la electricidad.\n"
			"Suele vivir en nubarrones. Gana mucha\n"
			"fuerza si le alcanzan los rayos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Zapdos,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Zapdos,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Zapdos,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Zapdos,
        .shinyPalette = gMonShinyPalette_Zapdos,
        .iconSprite = gMonIcon_Zapdos,
        .iconPalIndex = 0,
        FOOTPRINT(Zapdos)
        OVERWORLD(
            sPicTable_Zapdos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Zapdos,
            gShinyOverworldPalette_Zapdos
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sZapdosLevelUpLearnset,
        .teachableLearnset = sZapdosTeachableLearnset,
        .formSpeciesIdTable = sZapdosFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 3,
        .expYield = 290,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DEFIANT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zapdos"),
        .cryId = CRY_ZAPDOS,
        .natDexNum = NATIONAL_DEX_ZAPDOS,
        .categoryName = _("Patas recias"),
        .height = 16,
        .weight = 582,
        .description = COMPOUND_STRING(
            "Al rozar sus plumas, produce un sonido\n"
            "similar al zumbido de eléctrico.\n"
            "Al parecer, corre a por las montañas\n"
            "a más de 180 kmh."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_ZapdosGalarian,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ZapdosGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZapdosGalarian,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZapdosGalarian,
        .shinyPalette = gMonShinyPalette_ZapdosGalarian,
        .iconSprite = gMonIcon_ZapdosGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Zapdos)
        OVERWORLD(
            sPicTable_ZapdosGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZapdosGalarian,
            gShinyOverworldPalette_ZapdosGalarian
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .levelUpLearnset = sZapdosGalarianLevelUpLearnset,
        .teachableLearnset = sZapdosGalarianTeachableLearnset,
        .formSpeciesIdTable = sZapdosFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
    [SPECIES_MOLTRES] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 217,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Moltres"),
        .cryId = CRY_MOLTRES,
        .natDexNum = NATIONAL_DEX_MOLTRES,
        .categoryName = _("Llama"),
        .height = 20,
        .weight = 600,
		.description = COMPOUND_STRING(
			"Es un legendario pájaro Pokémon que tiene\n"
			"la habilidad de controlar el fuego. Dicen\n"
			"que, si resulta herido, se sumerge en el\n"
			"magma de un volcán para arder y curarse."),
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Moltres,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Moltres,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Moltres,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Moltres,
        .shinyPalette = gMonShinyPalette_Moltres,
        .iconSprite = gMonIcon_Moltres,
        .iconPalIndex = 0,
        FOOTPRINT(Moltres)
        OVERWORLD(
            sPicTable_Moltres,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Moltres,
            gShinyOverworldPalette_Moltres
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sMoltresLevelUpLearnset,
        .teachableLearnset = sMoltresTeachableLearnset,
        .formSpeciesIdTable = sMoltresFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_MOLTRES_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BERSERK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Moltres"),
        .cryId = CRY_MOLTRES,
        .natDexNum = NATIONAL_DEX_MOLTRES,
        .categoryName = _("Malevolencia"),
        .height = 20,
        .weight = 660,
        .description = COMPOUND_STRING(
            "Su aura siniestra, similar a una llama,\n"
            "consumirá el espíritu de cualquier\n"
            "criatura que toque. Las víctimas\n"
            "se convierten en sombras de sí mismas."),
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_MoltresGalarian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_MoltresGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MoltresGalarian,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MoltresGalarian,
        .shinyPalette = gMonShinyPalette_MoltresGalarian,
        .iconSprite = gMonIcon_MoltresGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Moltres)
        OVERWORLD(
            sPicTable_MoltresGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MoltresGalarian,
            gShinyOverworldPalette_MoltresGalarian
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .levelUpLearnset = sMoltresGalarianLevelUpLearnset,
        .teachableLearnset = sMoltresGalarianTeachableLearnset,
        .formSpeciesIdTable = sMoltresFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
    [SPECIES_DRATINI] =
    {
        .baseHP        = 41,
        .baseAttack    = 64,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 67,
        .evYield_Attack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dratini"),
        .cryId = CRY_DRATINI,
        .natDexNum = NATIONAL_DEX_DRATINI,
        .categoryName = _("Dragón"),
        .height = 18,
        .weight = 33,
		.description = COMPOUND_STRING(
			"Está mudando la piel continuamente.\n"
			"Es algo que necesita hacer porque la\n"
			"energía que tiene en su interior alcanza\n"
			"niveles que resultan incontrolables."),
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Dratini,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Dratini,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dratini,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Dratini,
        .shinyPalette = gMonShinyPalette_Dratini,
        .iconSprite = gMonIcon_Dratini,
        .iconPalIndex = 0,
        FOOTPRINT(Dratini)
        OVERWORLD(
            sPicTable_Dratini,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Dratini,
            gShinyOverworldPalette_Dratini
        )
        .levelUpLearnset = sDratiniLevelUpLearnset,
        .teachableLearnset = sDratiniTeachableLearnset,
        .eggMoveLearnset = sDratiniEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DRAGONAIR}),
    },

    [SPECIES_DRAGONAIR] =
    {
        .baseHP        = 61,
        .baseAttack    = 84,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 144,
        .evYield_Attack = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dragonair"),
        .cryId = CRY_DRAGONAIR,
        .natDexNum = NATIONAL_DEX_DRAGONAIR,
        .categoryName = _("Dragón"),
        .height = 40,
        .weight = 165,
		.description = COMPOUND_STRING(
			"Acumula gran cantidad de energía.\n"
			"Dicen que altera el clima descargando\n"
			"energía por las esferas de cristal\n"
			"que tiene en el cuello y en la cola."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Dragonair,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Dragonair,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Dragonair,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Dragonair,
        .shinyPalette = gMonShinyPalette_Dragonair,
        .iconSprite = gMonIcon_Dragonair,
        .iconPalIndex = 0,
        FOOTPRINT(Dragonair)
        OVERWORLD(
            sPicTable_Dragonair,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Dragonair,
            gShinyOverworldPalette_Dragonair
        )
        .levelUpLearnset = sDragonairLevelUpLearnset,
        .teachableLearnset = sDragonairTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_DRAGONITE}),
    },

    [SPECIES_DRAGONITE] =
    {
        .baseHP        = 91,
        .baseAttack    = 134,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 218,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dragonite"),
        .cryId = CRY_DRAGONITE,
        .natDexNum = NATIONAL_DEX_DRAGONITE,
        .categoryName = _("Dragón"),
        .height = 22,
        .weight = 2100,
		.description = COMPOUND_STRING(
			"Es capaz de dar la vuelta al mundo en solo\n"
			"16 horas. Tiene buen corazón: guía a tierra\n"
			"firme a los barcos que se han perdido en\n"
			"plena tormenta o van a zozobrar."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Dragonite,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dragonite,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Dragonite,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Dragonite,
        .shinyPalette = gMonShinyPalette_Dragonite,
        .iconSprite = gMonIcon_Dragonite,
        .iconPalIndex = 2,
        FOOTPRINT(Dragonite)
        OVERWORLD(
            sPicTable_Dragonite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dragonite,
            gShinyOverworldPalette_Dragonite
        )
        .levelUpLearnset = sDragoniteLevelUpLearnset,
        .teachableLearnset = sDragoniteTeachableLearnset,
    },
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
    [SPECIES_MEWTWO] =
    {
        .baseHP        = 106,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mewtwo"),
        .cryId = CRY_MEWTWO,
        .natDexNum = NATIONAL_DEX_MEWTWO,
        .categoryName = _("Genético"),
        .height = 20,
        .weight = 1220,
		.description = COMPOUND_STRING(
			"Fue creado por manipulación genética.\n"
			"Pero, a pesar de que los científicos\n"
			"dieron a Mewtwo un cuerpo, no lograron\n"
			"dotarle de un corazón compasivo."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Mewtwo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Mewtwo,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Mewtwo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Mewtwo,
        .shinyPalette = gMonShinyPalette_Mewtwo,
        .iconSprite = gMonIcon_Mewtwo,
        .iconPalIndex = 2,
        FOOTPRINT(Mewtwo)
        OVERWORLD(
            sPicTable_Mewtwo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mewtwo,
            gShinyOverworldPalette_Mewtwo
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sMewtwoLevelUpLearnset,
        .teachableLearnset = sMewtwoTeachableLearnset,
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,
        .formChangeTable = sMewtwoFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEWTWO_MEGA_X] =
    {
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STEADFAST, ABILITY_STEADFAST, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mewtwo"),
        .cryId = CRY_MEWTWO_MEGA_X,
        .natDexNum = NATIONAL_DEX_MEWTWO,
        .categoryName = _("Genético"),
        .height = 23,
        .weight = 1270,
        .description = COMPOUND_STRING(
            "Su poder incrementó sus músculos.\n"
            "Tiene una fuerza de agarre de 1 T\n"
            "y puede correr 100 mts en 2\n"
            "segundos ¡en línea recta!"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_MewtwoMegaX,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MewtwoMegaX,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_MewtwoMegaX,
        .shinyPalette = gMonShinyPalette_MewtwoMegaX,
        .iconSprite = gMonIcon_MewtwoMegaX,
        .iconPalIndex = 2,
        FOOTPRINT(Mewtwo)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sMewtwoLevelUpLearnset,
        .teachableLearnset = sMewtwoTeachableLearnset,
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,
        .formChangeTable = sMewtwoFormChangeTable,
    },

    [SPECIES_MEWTWO_MEGA_Y] =
    {
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INSOMNIA, ABILITY_INSOMNIA, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mewtwo"),
        .cryId = CRY_MEWTWO_MEGA_Y,
        .natDexNum = NATIONAL_DEX_MEWTWO,
        .categoryName = _("Genético"),
        .height = 15,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Pese a su tamaño reducido, su poder\n"
            "a aumentado en exceso. Con un simple\n"
            "pensamiento, puede destrozar un\n"
            "rascacielos en pedacitos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_MewtwoMegaY,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_MewtwoMegaY,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_MewtwoMegaY,
        .shinyPalette = gMonShinyPalette_MewtwoMegaY,
        .iconSprite = gMonIcon_MewtwoMegaY,
        .iconPalIndex = 2,
        FOOTPRINT(Mewtwo)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sMewtwoLevelUpLearnset,
        .teachableLearnset = sMewtwoTeachableLearnset,
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,
        .formChangeTable = sMewtwoFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
    [SPECIES_MEW] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 64,
    #endif
        .evYield_HP = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mew"),
        .cryId = CRY_MEW,
        .natDexNum = NATIONAL_DEX_MEW,
        .categoryName = _("N. Especie"),
        .height = 4,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Dicen que posee el mapa genético de todos\n"
			"los Pokémon. Puede hacerse invisible\n"
			"a voluntad, así que logra pasar\n"
			"inadvertido aunque haya gente cerca."),
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mew,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Mew,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 11,
        .backPic = gMonBackPic_Mew,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Mew,
        .shinyPalette = gMonShinyPalette_Mew,
        .iconSprite = gMonIcon_Mew,
        .iconPalIndex = 0,
        FOOTPRINT(Mew)
        OVERWORLD(
            sPicTable_Mew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Mew,
            gShinyOverworldPalette_Mew
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sMewLevelUpLearnset,
        .teachableLearnset = sMewTeachableLearnset,
    },
#endif //P_FAMILY_MEW

#ifdef __INTELLISENSE__
};
#endif
