#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen8[] =
{
#endif

#if P_FAMILY_GROOKEY
    [SPECIES_GROOKEY] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grookey"),
        .cryId = CRY_GROOKEY,
        .natDexNum = NATIONAL_DEX_GROOKEY,
        .categoryName = _("Chimpancé"),
        .height = 3,
        .weight = 50,
		.description = COMPOUND_STRING(
			"Ataca golpeando sin cesar con su baqueta,\n"
			"con un entusiasmo que crece a medida que\n"
			"acelera el ritmo."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grookey,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Grookey,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Grookey,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Grookey,
        .shinyPalette = gMonShinyPalette_Grookey,
        .iconSprite = gMonIcon_Grookey,
        .iconPalIndex = 1,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Grookey)
        OVERWORLD(
            sPicTable_Grookey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grookey,
            gShinyOverworldPalette_Grookey
        )
        .levelUpLearnset = sGrookeyLevelUpLearnset,
        .teachableLearnset = sGrookeyTeachableLearnset,
        .eggMoveLearnset = sGrookeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_THWACKEY}),
    },

    [SPECIES_THWACKEY] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Thwackey"),
        .cryId = CRY_THWACKEY,
        .natDexNum = NATIONAL_DEX_THWACKEY,
        .categoryName = _("Ritmo"),
        .height = 7,
        .weight = 140,
		.description = COMPOUND_STRING(
			"Se concentra tanto en marcar el ritmo\n"
			"que, cuando su rival se debilita en\n"
			"combate, no se da ni cuenta."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Thwackey,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Thwackey,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Thwackey,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Thwackey,
        .shinyPalette = gMonShinyPalette_Thwackey,
        .iconSprite = gMonIcon_Thwackey,
        .iconPalIndex = 1,
        SHADOW(5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Thwackey)
        OVERWORLD(
            sPicTable_Thwackey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Thwackey,
            gShinyOverworldPalette_Thwackey
        )
        .levelUpLearnset = sThwackeyLevelUpLearnset,
        .teachableLearnset = sThwackeyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_RILLABOOM}),
    },

    [SPECIES_RILLABOOM] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rillaboom"),
        .cryId = CRY_RILLABOOM,
        .natDexNum = NATIONAL_DEX_RILLABOOM,
        .categoryName = _("Percusión"),
        .height = 21,
        .weight = 900,
		.description = COMPOUND_STRING(
			"Controla los poderes y las raíces de\n"
			"su singular tocón en combate golpeándolo\n"
			"como si fuera un tambor."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Rillaboom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rillaboom,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rillaboom,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rillaboom,
        .shinyPalette = gMonShinyPalette_Rillaboom,
        .iconSprite = gMonIcon_Rillaboom,
        .iconPalIndex = 1,
        SHADOW(2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Rillaboom)
        OVERWORLD(
            sPicTable_Rillaboom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rillaboom,
            gShinyOverworldPalette_Rillaboom
        )
        .levelUpLearnset = sRillaboomLevelUpLearnset,
        .teachableLearnset = sRillaboomTeachableLearnset,
        .formSpeciesIdTable = sRillaboomFormSpeciesIdTable,
        .formChangeTable = sRillaboomFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_RILLABOOM_GMAX] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rillaboom"),
        .cryId = CRY_RILLABOOM,
        .natDexNum = NATIONAL_DEX_RILLABOOM,
        .categoryName = _("Percusión"),
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Rillaboom se ha convertido en uno con su\n"
            "bosque de tambores y continúa\n"
            "marcando ritmos que sacuden\n"
            "toda Galar."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_RillaboomGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RillaboomGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RillaboomGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RillaboomGmax,
        .shinyPalette = gMonShinyPalette_RillaboomGmax,
        .iconSprite = gMonIcon_RillaboomGmax,
        .iconPalIndex = 1,
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rillaboom)
        .isGigantamax = TRUE,
        .levelUpLearnset = sRillaboomLevelUpLearnset,
        .teachableLearnset = sRillaboomTeachableLearnset,
        .formSpeciesIdTable = sRillaboomFormSpeciesIdTable,
        .formChangeTable = sRillaboomFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SCORBUNNY
    [SPECIES_SCORBUNNY] =
    {
        .baseHP        = 50,
        .baseAttack    = 71,
        .baseDefense   = 40,
        .baseSpeed     = 69,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Scorbunny"),
        .cryId = CRY_SCORBUNNY,
        .natDexNum = NATIONAL_DEX_SCORBUNNY,
        .categoryName = _("Conejo"),
        .height = 3,
        .weight = 45,
		.description = COMPOUND_STRING(
			"Cuando se prepara para combatir,\n"
			"irradia calor por la punta de la nariz\n"
			"y pelo que le recubre las patas."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Scorbunny,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Scorbunny,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Scorbunny,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Scorbunny,
        .shinyPalette = gMonShinyPalette_Scorbunny,
        .iconSprite = gMonIcon_Scorbunny,
        .iconPalIndex = 0,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Scorbunny)
        OVERWORLD(
            sPicTable_Scorbunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scorbunny,
            gShinyOverworldPalette_Scorbunny
        )
        .levelUpLearnset = sScorbunnyLevelUpLearnset,
        .teachableLearnset = sScorbunnyTeachableLearnset,
        .eggMoveLearnset = sScorbunnyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_RABOOT}),
    },

    [SPECIES_RABOOT] =
    {
        .baseHP        = 65,
        .baseAttack    = 86,
        .baseDefense   = 60,
        .baseSpeed     = 94,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 147,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Raboot"),
        .cryId = CRY_RABOOT,
        .natDexNum = NATIONAL_DEX_RABOOT,
        .categoryName = _("Conejo"),
        .height = 6,
        .weight = 90,
		.description = COMPOUND_STRING(
			"Su suave pelaje lo protege del frío\n"
			"y le permite incrementar todavía más\n"
			"la temperatura de sus movimientos de\n"
			"tipo Fuego."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raboot,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Raboot,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Raboot,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Raboot,
        .shinyPalette = gMonShinyPalette_Raboot,
        .iconSprite = gMonIcon_Raboot,
        .iconPalIndex = 0,
        SHADOW(-4, 5, SHADOW_SIZE_S)
        FOOTPRINT(Raboot)
        OVERWORLD(
            sPicTable_Raboot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Raboot,
            gShinyOverworldPalette_Raboot
        )
        .levelUpLearnset = sRabootLevelUpLearnset,
        .teachableLearnset = sRabootTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_CINDERACE}),
    },

    [SPECIES_CINDERACE] =
    {
        .baseHP        = 80,
        .baseAttack    = 116,
        .baseDefense   = 75,
        .baseSpeed     = 119,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cinderace"),
        .cryId = CRY_CINDERACE,
        .natDexNum = NATIONAL_DEX_CINDERACE,
        .categoryName = _("Delantero"),
        .height = 14,
        .weight = 330,
		.description = COMPOUND_STRING(
			"Convierte piedras en balones de fuego\n"
			"dándoles toques y, luego, chuta con\n"
			"fuerza hacia el rival para chamuscarlo."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cinderace,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cinderace,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cinderace,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cinderace,
        .shinyPalette = gMonShinyPalette_Cinderace,
        .iconSprite = gMonIcon_Cinderace,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cinderace)
        OVERWORLD(
            sPicTable_Cinderace,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cinderace,
            gShinyOverworldPalette_Cinderace
        )
        .levelUpLearnset = sCinderaceLevelUpLearnset,
        .teachableLearnset = sCinderaceTeachableLearnset,
        .formSpeciesIdTable = sCinderaceFormSpeciesIdTable,
        .formChangeTable = sCinderaceFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CINDERACE_GMAX] =
    {
        .baseHP        = 80,
        .baseAttack    = 116,
        .baseDefense   = 75,
        .baseSpeed     = 119,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cinderace"),
        .cryId = CRY_CINDERACE,
        .natDexNum = NATIONAL_DEX_CINDERACE,
        .categoryName = _("Delantero"),
        .height = 270,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Infundido con el espíritu\n"
            "luchador de Cinderace, el enorme\n"
            "Pyro Ball nunca falla sus objetivos\n"
            "y asa completamente a los oponentes."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CinderaceGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CinderaceGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CinderaceGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CinderaceGmax,
        .shinyPalette = gMonShinyPalette_CinderaceGmax,
        .iconSprite = gMonIcon_CinderaceGmax,
        .iconPalIndex = 0,
        SHADOW(-3, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Cinderace)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCinderaceLevelUpLearnset,
        .teachableLearnset = sCinderaceTeachableLearnset,
        .formSpeciesIdTable = sCinderaceFormSpeciesIdTable,
        .formChangeTable = sCinderaceFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY

#if P_FAMILY_SOBBLE
    [SPECIES_SOBBLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sobble"),
        .cryId = CRY_SOBBLE,
        .natDexNum = NATIONAL_DEX_SOBBLE,
        .categoryName = _("Acuartija"),
        .height = 3,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Al mojarse, su piel cambia de color\n"
			"y pasa a ser invisible, como si se\n"
			"hubiese camuflado."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sobble,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sobble,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sobble,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sobble,
        .shinyPalette = gMonShinyPalette_Sobble,
        .iconSprite = gMonIcon_Sobble,
        .iconPalIndex = 2,
        SHADOW(-3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Sobble)
        OVERWORLD(
            sPicTable_Sobble,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sobble,
            gShinyOverworldPalette_Sobble
        )
        .levelUpLearnset = sSobbleLevelUpLearnset,
        .teachableLearnset = sSobbleTeachableLearnset,
        .eggMoveLearnset = sSobbleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_DRIZZILE}),
    },

    [SPECIES_DRIZZILE] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 147,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Drizzile"),
        .cryId = CRY_DRIZZILE,
        .natDexNum = NATIONAL_DEX_DRIZZILE,
        .categoryName = _("Acuartija"),
        .height = 7,
        .weight = 115,
		.description = COMPOUND_STRING(
			"Crea bolsas de agua con el líquido\n"
			"que segrega por las palmas de las\n"
			"manos, y las usa en combate de forma\n"
			"estratégica."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drizzile,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Drizzile,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Drizzile,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Drizzile,
        .shinyPalette = gMonShinyPalette_Drizzile,
        .iconSprite = gMonIcon_Drizzile,
        .iconPalIndex = 2,
        SHADOW(2, 5, SHADOW_SIZE_M)
        FOOTPRINT(Drizzile)
        OVERWORLD(
            sPicTable_Drizzile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drizzile,
            gShinyOverworldPalette_Drizzile
        )
        .levelUpLearnset = sDrizzileLevelUpLearnset,
        .teachableLearnset = sDrizzileTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_INTELEON}),
    },

    [SPECIES_INTELEON] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 125,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inteleon"),
        .cryId = CRY_INTELEON,
        .natDexNum = NATIONAL_DEX_INTELEON,
        .categoryName = _("Agente"),
        .height = 19,
        .weight = 452,
		.description = COMPOUND_STRING(
			"Esconde algunos trucos bajo la manga:\n"
			"puede disparar agua por los dedos o\n"
			"planear con las membranas de su espalda."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Inteleon,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Inteleon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Inteleon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Inteleon,
        .shinyPalette = gMonShinyPalette_Inteleon,
        .iconSprite = gMonIcon_Inteleon,
        .iconPalIndex = 0,
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Inteleon)
        OVERWORLD(
            sPicTable_Inteleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Inteleon,
            gShinyOverworldPalette_Inteleon
        )
        .levelUpLearnset = sInteleonLevelUpLearnset,
        .teachableLearnset = sInteleonTeachableLearnset,
        .formSpeciesIdTable = sInteleonFormSpeciesIdTable,
        .formChangeTable = sInteleonFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_INTELEON_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 125,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inteleon"),
        .cryId = CRY_INTELEON,
        .natDexNum = NATIONAL_DEX_INTELEON,
        .categoryName = _("Agente"),
        .height = 400,
        .weight = 0,
        .description = COMPOUND_STRING(
            "El movimiento Agua de Inteleon\n"
            "dispara a Mach 7. Mientras el Pokémon\n"
            "apunta, usa el crestón en su cabeza\n"
            "para medir el viento y la temperatura."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_InteleonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_InteleonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_InteleonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_InteleonGmax,
        .shinyPalette = gMonShinyPalette_InteleonGmax,
        .iconSprite = gMonIcon_InteleonGmax,
        .iconPalIndex = 0,
        SHADOW(-5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Inteleon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sInteleonLevelUpLearnset,
        .teachableLearnset = sInteleonTeachableLearnset,
        .formSpeciesIdTable = sInteleonFormSpeciesIdTable,
        .formChangeTable = sInteleonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_SKWOVET
    [SPECIES_SKWOVET] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 55,
        .evYield_HP = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skwovet"),
        .cryId = CRY_SKWOVET,
        .natDexNum = NATIONAL_DEX_SKWOVET,
        .categoryName = _("Abazón"),
        .height = 3,
        .weight = 25,
		.description = COMPOUND_STRING(
			"Siempre están comiendo bayas, por lo que\n"
			"son más robustos de lo que aparentan.\n"
			"Frecuentan los huertos en busca de su\n"
			"preciado manjar."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skwovet,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Skwovet,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skwovet,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Skwovet,
        .shinyPalette = gMonShinyPalette_Skwovet,
        .iconSprite = gMonIcon_Skwovet,
        .iconPalIndex = 2,
        SHADOW(-7, 5, SHADOW_SIZE_S)
        FOOTPRINT(Skwovet)
        OVERWORLD(
            sPicTable_Skwovet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Skwovet,
            gShinyOverworldPalette_Skwovet
        )
        .levelUpLearnset = sSkwovetLevelUpLearnset,
        .teachableLearnset = sSkwovetTeachableLearnset,
        .eggMoveLearnset = sSkwovetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_GREEDENT}),
    },

    [SPECIES_GREEDENT] =
    {
        .baseHP        = 120,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 20,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 90,
        .expYield = 161,
        .evYield_HP = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Greedent"),
        .cryId = CRY_GREEDENT,
        .natDexNum = NATIONAL_DEX_GREEDENT,
        .categoryName = _("Avaricia"),
        .height = 6,
        .weight = 60,
		.description = COMPOUND_STRING(
			"Se obceca tanto en acumular bayas\n"
			"en la cola que no se da ni cuenta de\n"
			"cuándo tiene demasiadas y se le acaban\n"
			"cayendo."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greedent,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Greedent,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Greedent,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Greedent,
        .shinyPalette = gMonShinyPalette_Greedent,
        .iconSprite = gMonIcon_Greedent,
        .iconPalIndex = 0,
        SHADOW(-11, 10, SHADOW_SIZE_M)
        FOOTPRINT(Greedent)
        OVERWORLD(
            sPicTable_Greedent,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Greedent,
            gShinyOverworldPalette_Greedent
        )
        .levelUpLearnset = sGreedentLevelUpLearnset,
        .teachableLearnset = sGreedentTeachableLearnset,
    },
#endif //P_FAMILY_SKWOVET

#if P_FAMILY_ROOKIDEE
    [SPECIES_ROOKIDEE] =
    {
        .baseHP        = 38,
        .baseAttack    = 47,
        .baseDefense   = 35,
        .baseSpeed     = 57,
        .baseSpAttack  = 33,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Rookidee"),
        .cryId = CRY_ROOKIDEE,
        .natDexNum = NATIONAL_DEX_ROOKIDEE,
        .categoryName = _("Pajarito"),
        .height = 2,
        .weight = 18,
		.description = COMPOUND_STRING(
			"Su pequeño cuerpo le permite volar\n"
			"a gran velocidad para golpear los puntos\n"
			"débiles de rivales mucho más grandes\n"
			"que él."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rookidee,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Rookidee,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Rookidee,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rookidee,
        .shinyPalette = gMonShinyPalette_Rookidee,
        .iconSprite = gMonIcon_Rookidee,
        .iconPalIndex = 0,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Rookidee)
        OVERWORLD(
            sPicTable_Rookidee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rookidee,
            gShinyOverworldPalette_Rookidee
        )
        .levelUpLearnset = sRookideeLevelUpLearnset,
        .teachableLearnset = sRookideeTeachableLearnset,
        .eggMoveLearnset = sRookideeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CORVISQUIRE}),
    },

    [SPECIES_CORVISQUIRE] =
    {
        .baseHP        = 68,
        .baseAttack    = 67,
        .baseDefense   = 55,
        .baseSpeed     = 77,
        .baseSpAttack  = 43,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 120,
        .expYield = 128,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Corvisquire"),
        .cryId = CRY_CORVISQUIRE,
        .natDexNum = NATIONAL_DEX_CORVISQUIRE,
        .categoryName = _("Cuervo"),
        .height = 8,
        .weight = 160,
		.description = COMPOUND_STRING(
			"Tras haber librado combates muy duros,\n"
			"ha desarrollado la habilidad de determinar\n"
			"con precisión la fuerza de su adversario."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Corvisquire,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Corvisquire,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Corvisquire,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Corvisquire,
        .shinyPalette = gMonShinyPalette_Corvisquire,
        .iconSprite = gMonIcon_Corvisquire,
        .iconPalIndex = 0,
        SHADOW(2, 16, SHADOW_SIZE_S)
        FOOTPRINT(Corvisquire)
        OVERWORLD(
            sPicTable_Corvisquire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Corvisquire,
            gShinyOverworldPalette_Corvisquire
        )
        .levelUpLearnset = sCorvisquireLevelUpLearnset,
        .teachableLearnset = sCorvisquireTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CORVIKNIGHT}),
    },

    [SPECIES_CORVIKNIGHT] =
    {
        .baseHP        = 98,
        .baseAttack    = 87,
        .baseDefense   = 105,
        .baseSpeed     = 67,
        .baseSpAttack  = 53,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FLYING, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 248,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_PRESSURE, ABILITY_UNNERVE, ABILITY_MIRROR_ARMOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Corviknight"),
        .cryId = CRY_CORVIKNIGHT,
        .natDexNum = NATIONAL_DEX_CORVIKNIGHT,
        .categoryName = _("Cuervo"),
        .height = 22,
        .weight = 750,
		.description = COMPOUND_STRING(
			"Debido a su excelente capacidad de vuelo\n"
			"y a su gran inteligencia, ejerce de taxi\n"
			"volador en su región."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Corviknight,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Corviknight,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Corviknight,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Corviknight,
        .shinyPalette = gMonShinyPalette_Corviknight,
        .iconSprite = gMonIcon_Corviknight,
        .iconPalIndex = 0,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Corviknight)
        OVERWORLD(
            sPicTable_Corviknight,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Corviknight,
            gShinyOverworldPalette_Corviknight
        )
        .levelUpLearnset = sCorviknightLevelUpLearnset,
        .teachableLearnset = sCorviknightTeachableLearnset,
        .formSpeciesIdTable = sCorviknightFormSpeciesIdTable,
        .formChangeTable = sCorviknightFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CORVIKNIGHT_GMAX] =
    {
        .baseHP        = 98,
        .baseAttack    = 87,
        .baseDefense   = 105,
        .baseSpeed     = 67,
        .baseSpAttack  = 53,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FLYING, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 248,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_PRESSURE, ABILITY_UNNERVE, ABILITY_MIRROR_ARMOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Corviknight"),
        .cryId = CRY_CORVIKNIGHT,
        .natDexNum = NATIONAL_DEX_CORVIKNIGHT,
        .categoryName = _("Cuervo"),
        .height = 140,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Empapada en la energía de Gigantamax,\n"
            "sus alas pueden generar vientos más\n"
            "fuertes que cualquier huracán. Las\n"
            "ráfagas se llevan todo a su paso."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_CorviknightGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CorviknightGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CorviknightGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CorviknightGmax,
        .shinyPalette = gMonShinyPalette_CorviknightGmax,
        .iconSprite = gMonIcon_CorviknightGmax,
        .iconPalIndex = 0,
        SHADOW(2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Corviknight)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCorviknightLevelUpLearnset,
        .teachableLearnset = sCorviknightTeachableLearnset,
        .formSpeciesIdTable = sCorviknightFormSpeciesIdTable,
        .formChangeTable = sCorviknightFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_BLIPBUG
    [SPECIES_BLIPBUG] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 45,
        .baseSpAttack  = 25,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = 36,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Blipbug"),
        .cryId = CRY_BLIPBUG,
        .natDexNum = NATIONAL_DEX_BLIPBUG,
        .categoryName = _("Larva"),
        .height = 4,
        .weight = 80,
		.description = COMPOUND_STRING(
			"Siempre está recopilando información,\n"
			"por lo que es muy inteligente, aunque\n"
			"su fuerza deja bastante que desear."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blipbug,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Blipbug,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blipbug,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Blipbug,
        .shinyPalette = gMonShinyPalette_Blipbug,
        .iconSprite = gMonIcon_Blipbug,
        .iconPalIndex = 0,
        SHADOW(2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Blipbug)
        OVERWORLD(
            sPicTable_Blipbug,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blipbug,
            gShinyOverworldPalette_Blipbug
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBlipbugLevelUpLearnset,
        .teachableLearnset = sBlipbugTeachableLearnset,
        .eggMoveLearnset = sBlipbugEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_DOTTLER}),
    },

    [SPECIES_DOTTLER] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_BUG, TYPE_PSYCHIC),
        .catchRate = 120,
        .expYield = 117,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dottler"),
        .cryId = CRY_DOTTLER,
        .natDexNum = NATIONAL_DEX_DOTTLER,
        .categoryName = _("Radomo"),
        .height = 4,
        .weight = 195,
		.description = COMPOUND_STRING(
			"Está en constante crecimiento dentro\n"
			"del caparazón. Mientras se prepara para\n"
			"evolucionar, examina el exterior\n"
			"con sus poderes psíquicos."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dottler,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Dottler,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dottler,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dottler,
        .shinyPalette = gMonShinyPalette_Dottler,
        .iconSprite = gMonIcon_Dottler,
        .iconPalIndex = 2,
        SHADOW(-1, 0, SHADOW_SIZE_M)
        FOOTPRINT(Dottler)
        OVERWORLD(
            sPicTable_Dottler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dottler,
            gShinyOverworldPalette_Dottler
        )
        .levelUpLearnset = sDottlerLevelUpLearnset,
        .teachableLearnset = sDottlerTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ORBEETLE}),
    },

    [SPECIES_ORBEETLE] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 110,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_BUG, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 253,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_FRISK, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Orbeetle"),
        .cryId = CRY_ORBEETLE,
        .natDexNum = NATIONAL_DEX_ORBEETLE,
        .categoryName = _("Siete puntos"),
        .height = 4,
        .weight = 408,
		.description = COMPOUND_STRING(
			"Se sirve de sus poderes psíquicos,\n"
			"con los que es capaz de percibir lo\n"
			"que ocurre en un radio de 10 km,\n"
			"para examinar sus alrededores."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Orbeetle,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Orbeetle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Orbeetle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Orbeetle,
        .shinyPalette = gMonShinyPalette_Orbeetle,
        .iconSprite = gMonIcon_Orbeetle,
        .iconPalIndex = 0,
        SHADOW(0, 15, SHADOW_SIZE_M)
        FOOTPRINT(Orbeetle)
        OVERWORLD(
            sPicTable_Orbeetle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Orbeetle,
            gShinyOverworldPalette_Orbeetle
        )
        .levelUpLearnset = sOrbeetleLevelUpLearnset,
        .teachableLearnset = sOrbeetleTeachableLearnset,
        .formSpeciesIdTable = sOrbeetleFormSpeciesIdTable,
        .formChangeTable = sOrbeetleFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_ORBEETLE_GMAX] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 110,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_BUG, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 253,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_FRISK, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Orbeetle"),
        .cryId = CRY_ORBEETLE,
        .natDexNum = NATIONAL_DEX_ORBEETLE,
        .categoryName = _("Siete puntos"),
        .height = 140,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Su cerebro ha crecido a un tamaño\n"
            "enorme, al igual que el resto de su\n"
            "cuerpo. Su inteligencia y\n"
            "habilidades son abrumadoras."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OrbeetleGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_OrbeetleGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OrbeetleGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OrbeetleGmax,
        .shinyPalette = gMonShinyPalette_OrbeetleGmax,
        .iconSprite = gMonIcon_OrbeetleGmax,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Orbeetle)
        .isGigantamax = TRUE,
        .levelUpLearnset = sOrbeetleLevelUpLearnset,
        .teachableLearnset = sOrbeetleTeachableLearnset,
        .formSpeciesIdTable = sOrbeetleFormSpeciesIdTable,
        .formChangeTable = sOrbeetleFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG

#if P_FAMILY_NICKIT
    [SPECIES_NICKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 28,
        .baseDefense   = 28,
        .baseSpeed     = 50,
        .baseSpAttack  = 47,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
        .expYield = 49,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Nickit"),
        .cryId = CRY_NICKIT,
        .natDexNum = NATIONAL_DEX_NICKIT,
        .categoryName = _("Zorro"),
        .height = 6,
        .weight = 89,
		.description = COMPOUND_STRING(
			"Prudente y astuto, borra con la cola\n"
			"las huellas que deja al huir tras robarle\n"
			"el alimento a otro Pokémon."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nickit,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Nickit,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nickit,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Nickit,
        .shinyPalette = gMonShinyPalette_Nickit,
        .iconSprite = gMonIcon_Nickit,
        .iconPalIndex = 2,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Nickit)
        OVERWORLD(
            sPicTable_Nickit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nickit,
            gShinyOverworldPalette_Nickit
        )
        .levelUpLearnset = sNickitLevelUpLearnset,
        .teachableLearnset = sNickitTeachableLearnset,
        .eggMoveLearnset = sNickitEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_THIEVUL}),
    },

    [SPECIES_THIEVUL] =
    {
        .baseHP        = 70,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 90,
        .baseSpAttack  = 87,
        .baseSpDefense = 92,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 127,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Thievul"),
        .cryId = CRY_THIEVUL,
        .natDexNum = NATIONAL_DEX_THIEVUL,
        .categoryName = _("Zorro"),
        .height = 12,
        .weight = 199,
		.description = COMPOUND_STRING(
			"Marca a su presa sin ser advertido.\n"
			"Sigue el olor y, cuando el otro Pokémon\n"
			"baja la guardia, aprovecha para robarle."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Thievul,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Thievul,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Thievul,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Thievul,
        .shinyPalette = gMonShinyPalette_Thievul,
        .iconSprite = gMonIcon_Thievul,
        .iconPalIndex = 2,
        SHADOW(-9, 7, SHADOW_SIZE_M)
        FOOTPRINT(Thievul)
        OVERWORLD(
            sPicTable_Thievul,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Thievul,
            gShinyOverworldPalette_Thievul
        )
        .levelUpLearnset = sThievulLevelUpLearnset,
        .teachableLearnset = sThievulTeachableLearnset,
    },
#endif //P_FAMILY_NICKIT

#if P_FAMILY_GOSSIFLEUR
    [SPECIES_GOSSIFLEUR] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 10,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 190,
        .expYield = 50,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Gossifleur"),
        .cryId = CRY_GOSSIFLEUR,
        .natDexNum = NATIONAL_DEX_GOSSIFLEUR,
        .categoryName = _("Adornofloral"),
        .height = 4,
        .weight = 22,
		.description = COMPOUND_STRING(
			"Si planta su única extremidad inferior\n"
			"en la tierra y se expone a abundante\n"
			"luz solar, sus pétalos cobran un color\n"
			"vivo."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gossifleur,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Gossifleur,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gossifleur,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gossifleur,
        .shinyPalette = gMonShinyPalette_Gossifleur,
        .iconSprite = gMonIcon_Gossifleur,
        .iconPalIndex = 1,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Gossifleur)
        OVERWORLD(
            sPicTable_Gossifleur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gossifleur,
            gShinyOverworldPalette_Gossifleur
        )
        .levelUpLearnset = sGossifleurLevelUpLearnset,
        .teachableLearnset = sGossifleurTeachableLearnset,
        .eggMoveLearnset = sGossifleurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_ELDEGOSS}),
    },

    [SPECIES_ELDEGOSS] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 75,
        .expYield = 161,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Eldegoss"),
        .cryId = CRY_ELDEGOSS,
        .natDexNum = NATIONAL_DEX_ELDEGOSS,
        .categoryName = _("Adornalgodón"),
        .height = 5,
        .weight = 25,
		.description = COMPOUND_STRING(
			"El hilo fabricado a partir de su algodón\n"
			"es muy bello y brillante; uno de los\n"
			"productos estrella de la región de Galar."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Eldegoss,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Eldegoss,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Eldegoss,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Eldegoss,
        .shinyPalette = gMonShinyPalette_Eldegoss,
        .iconSprite = gMonIcon_Eldegoss,
        .iconPalIndex = 1,
        SHADOW(-2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Eldegoss)
        OVERWORLD(
            sPicTable_Eldegoss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eldegoss,
            gShinyOverworldPalette_Eldegoss
        )
        .levelUpLearnset = sEldegossLevelUpLearnset,
        .teachableLearnset = sEldegossTeachableLearnset,
    },
#endif //P_FAMILY_GOSSIFLEUR

#if P_FAMILY_WOOLOO
    [SPECIES_WOOLOO] =
    {
        .baseHP        = 42,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 48,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 122,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLUFFY, ABILITY_RUN_AWAY, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wooloo"),
        .cryId = CRY_WOOLOO,
        .natDexNum = NATIONAL_DEX_WOOLOO,
        .categoryName = _("Oveja"),
        .height = 6,
        .weight = 60,
		.description = COMPOUND_STRING(
			"Su lana rizada es tan acolchada que no\n"
			"se hace daño ni aunque se caiga por un\n"
			"precipicio."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wooloo,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Wooloo,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wooloo,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wooloo,
        .shinyPalette = gMonShinyPalette_Wooloo,
        .iconSprite = gMonIcon_Wooloo,
        .iconPalIndex = 0,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Wooloo)
        OVERWORLD(
            sPicTable_Wooloo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wooloo,
            gShinyOverworldPalette_Wooloo
        )
        .levelUpLearnset = sWoolooLevelUpLearnset,
        .teachableLearnset = sWoolooTeachableLearnset,
        .eggMoveLearnset = sWoolooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_DUBWOOL}),
    },

    [SPECIES_DUBWOOL] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 88,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 127,
        .expYield = 172,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLUFFY, ABILITY_STEADFAST, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dubwool"),
        .cryId = CRY_DUBWOOL,
        .natDexNum = NATIONAL_DEX_DUBWOOL,
        .categoryName = _("Oveja"),
        .height = 13,
        .weight = 430,
		.description = COMPOUND_STRING(
			"Sus espléndidos cuernos sirven de\n"
			"reclamo para atraer al sexo opuesto.\n"
			"No los utiliza como arma."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dubwool,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Dubwool,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dubwool,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dubwool,
        .shinyPalette = gMonShinyPalette_Dubwool,
        .iconSprite = gMonIcon_Dubwool,
        .iconPalIndex = 2,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Dubwool)
        OVERWORLD(
            sPicTable_Dubwool,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dubwool,
            gShinyOverworldPalette_Dubwool
        )
        .levelUpLearnset = sDubwoolLevelUpLearnset,
        .teachableLearnset = sDubwoolTeachableLearnset,
    },
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_CHEWTLE
    [SPECIES_CHEWTLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 44,
        .baseSpAttack  = 38,
        .baseSpDefense = 38,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = 57,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chewtle"),
        .cryId = CRY_CHEWTLE,
        .natDexNum = NATIONAL_DEX_CHEWTLE,
        .categoryName = _("Mordedura"),
        .height = 3,
        .weight = 85,
		.description = COMPOUND_STRING(
			"Muerde todo lo que se le ponga por\n"
			"delante. Al parecer, lo hace para aliviar\n"
			"el dolor que siente cuando le crecen\n"
			"los incisivos."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chewtle,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Chewtle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Chewtle,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Chewtle,
        .shinyPalette = gMonShinyPalette_Chewtle,
        .iconSprite = gMonIcon_Chewtle,
        .iconPalIndex = 0,
        SHADOW(3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Chewtle)
        OVERWORLD(
            sPicTable_Chewtle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chewtle,
            gShinyOverworldPalette_Chewtle
        )
        .levelUpLearnset = sChewtleLevelUpLearnset,
        .teachableLearnset = sChewtleTeachableLearnset,
        .eggMoveLearnset = sChewtleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_DREDNAW}),
    },

    [SPECIES_DREDNAW] =
    {
        .baseHP        = 90,
        .baseAttack    = 115,
        .baseDefense   = 90,
        .baseSpeed     = 74,
        .baseSpAttack  = 48,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 75,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Drednaw"),
        .cryId = CRY_DREDNAW,
        .natDexNum = NATIONAL_DEX_DREDNAW,
        .categoryName = _("Mordisco"),
        .height = 10,
        .weight = 1155,
		.description = COMPOUND_STRING(
			"Su cuello extensible le permite\n"
			"alcanzar a los rivales a distancia.\n"
			"Hundiendo sus afilados dientes, les da\n"
			"el golpe de gracia."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drednaw,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drednaw,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Drednaw,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Drednaw,
        .shinyPalette = gMonShinyPalette_Drednaw,
        .iconSprite = gMonIcon_Drednaw,
        .iconPalIndex = 0,
        SHADOW(-2, 4, SHADOW_SIZE_L)
        FOOTPRINT(Drednaw)
        OVERWORLD(
            sPicTable_Drednaw,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drednaw,
            gShinyOverworldPalette_Drednaw
        )
        .levelUpLearnset = sDrednawLevelUpLearnset,
        .teachableLearnset = sDrednawTeachableLearnset,
        .formSpeciesIdTable = sDrednawFormSpeciesIdTable,
        .formChangeTable = sDrednawFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DREDNAW_GMAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 115,
        .baseDefense   = 90,
        .baseSpeed     = 74,
        .baseSpAttack  = 48,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 75,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Drednaw"),
        .cryId = CRY_DREDNAW,
        .natDexNum = NATIONAL_DEX_DREDNAW,
        .categoryName = _("Mordisco"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "En la región de Galar, hay una leyenda\n"
            "sobre este Pokémon que mastica una\n"
            "montaña y usa los escombros para\n"
            "detener una inundación."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DrednawGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DrednawGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DrednawGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DrednawGmax,
        .shinyPalette = gMonShinyPalette_DrednawGmax,
        .iconSprite = gMonIcon_DrednawGmax,
        .iconPalIndex = 0,
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Drednaw)
        .isGigantamax = TRUE,
        .levelUpLearnset = sDrednawLevelUpLearnset,
        .teachableLearnset = sDrednawTeachableLearnset,
        .formSpeciesIdTable = sDrednawFormSpeciesIdTable,
        .formChangeTable = sDrednawFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_YAMPER
    [SPECIES_YAMPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 26,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 255,
        .expYield = 54,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BALL_FETCH, ABILITY_NONE, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Yamper"),
        .cryId = CRY_YAMPER,
        .natDexNum = NATIONAL_DEX_YAMPER,
        .categoryName = _("Perrito"),
        .height = 3,
        .weight = 135,
		.description = COMPOUND_STRING(
			"Son muy glotones, por lo que ayudan\n"
			"a la gente a cambio de comida.\n"
			"Echan chispas al correr."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yamper,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Yamper,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Yamper,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Yamper,
        .shinyPalette = gMonShinyPalette_Yamper,
        .iconSprite = gMonIcon_Yamper,
        .iconPalIndex = 1,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Yamper)
        OVERWORLD(
            sPicTable_Yamper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Yamper,
            gShinyOverworldPalette_Yamper
        )
        .levelUpLearnset = sYamperLevelUpLearnset,
        .teachableLearnset = sYamperTeachableLearnset,
        .eggMoveLearnset = sYamperEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BOLTUND}),
    },

    [SPECIES_BOLTUND] =
    {
        .baseHP        = 69,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 121,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Boltund"),
        .cryId = CRY_BOLTUND,
        .natDexNum = NATIONAL_DEX_BOLTUND,
        .categoryName = _("Perro"),
        .height = 10,
        .weight = 340,
		.description = COMPOUND_STRING(
			"La electricidad le confiere una enorme\n"
			"fuerza en las patas. Su velocidad punta\n"
			"puede superar los 90 km/h sin problema."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Boltund,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Boltund,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Boltund,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Boltund,
        .shinyPalette = gMonShinyPalette_Boltund,
        .iconSprite = gMonIcon_Boltund,
        .iconPalIndex = 1,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Boltund)
        OVERWORLD(
            sPicTable_Boltund,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Boltund,
            gShinyOverworldPalette_Boltund
        )
        .levelUpLearnset = sBoltundLevelUpLearnset,
        .teachableLearnset = sBoltundTeachableLearnset,
    },
#endif //P_FAMILY_YAMPER

#if P_FAMILY_ROLYCOLY
    [SPECIES_ROLYCOLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 255,
        .expYield = 48,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STEAM_ENGINE, ABILITY_HEATPROOF, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Rolycoly"),
        .cryId = CRY_ROLYCOLY,
        .natDexNum = NATIONAL_DEX_ROLYCOLY,
        .categoryName = _("Carbón"),
        .height = 3,
        .weight = 120,
		.description = COMPOUND_STRING(
			"Fue descubierto hace aproximadamente\n"
			"400 años en una mina. Casi la totalidad\n"
			"de su cuerpo presenta una composición\n"
			"igual a la del carbón."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rolycoly,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Rolycoly,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Rolycoly,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rolycoly,
        .shinyPalette = gMonShinyPalette_Rolycoly,
        .iconSprite = gMonIcon_Rolycoly,
        .iconPalIndex = 0,
        SHADOW(0, -3, SHADOW_SIZE_S)
        FOOTPRINT(Rolycoly)
        OVERWORLD(
            sPicTable_Rolycoly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rolycoly,
            gShinyOverworldPalette_Rolycoly
        )
        .levelUpLearnset = sRolycolyLevelUpLearnset,
        .teachableLearnset = sRolycolyTeachableLearnset,
        .eggMoveLearnset = sRolycolyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CARKOL}),
    },

    [SPECIES_CARKOL] =
    {
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FIRE),
        .catchRate = 120,
        .expYield = 144,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Carkol"),
        .cryId = CRY_CARKOL,
        .natDexNum = NATIONAL_DEX_CARKOL,
        .categoryName = _("Carbón"),
        .height = 11,
        .weight = 780,
		.description = COMPOUND_STRING(
			"Forma carbón en el interior de su\n"
			"cuerpo. Los antiguos habitantes de Galar\n"
			"lo aprovechaban para sus labores diarias."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carkol,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Carkol,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Carkol,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Carkol,
        .shinyPalette = gMonShinyPalette_Carkol,
        .iconSprite = gMonIcon_Carkol,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Carkol)
        OVERWORLD(
            sPicTable_Carkol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Carkol,
            gShinyOverworldPalette_Carkol
        )
        .levelUpLearnset = sCarkolLevelUpLearnset,
        .teachableLearnset = sCarkolTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COALOSSAL}),
    },

    [SPECIES_COALOSSAL] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 120,
        .baseSpeed     = 30,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 255,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Coalossal"),
        .cryId = CRY_COALOSSAL,
        .natDexNum = NATIONAL_DEX_COALOSSAL,
        .categoryName = _("Carbón"),
        .height = 28,
        .weight = 3105,
		.description = COMPOUND_STRING(
			"Cuando se enzarza en un combate, la\n"
			"montaña de carbón arde al rojo vivo y\n"
			"esparce chispas que calcinan todo lo\n"
			"que le rodea."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Coalossal,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Coalossal,
        .frontAnimId = ANIM_GLOW_RED,
        .backPic = gMonBackPic_Coalossal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Coalossal,
        .shinyPalette = gMonShinyPalette_Coalossal,
        .iconSprite = gMonIcon_Coalossal,
        .iconPalIndex = 0,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Coalossal)
        OVERWORLD(
            sPicTable_Coalossal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Coalossal,
            gShinyOverworldPalette_Coalossal
        )
        .levelUpLearnset = sCoalossalLevelUpLearnset,
        .teachableLearnset = sCoalossalTeachableLearnset,
        .formSpeciesIdTable = sCoalossalFormSpeciesIdTable,
        .formChangeTable = sCoalossalFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COALOSSAL_GMAX] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 120,
        .baseSpeed     = 30,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 255,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Coalossal"),
        .cryId = CRY_COALOSSAL,
        .natDexNum = NATIONAL_DEX_COALOSSAL,
        .categoryName = _("Carbón"),
        .height = 420,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Su cuerpo es una estufa colosal. Con\n"
            "la energía de Gigantamax avivando el\n"
            "fuego, la llama de este Pokémon arde\n"
            "a una temperatura superior a 3.600 ºC."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CoalossalGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CoalossalGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CoalossalGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CoalossalGmax,
        .shinyPalette = gMonShinyPalette_CoalossalGmax,
        .iconSprite = gMonIcon_CoalossalGmax,
        .iconPalIndex = 0,
        SHADOW(1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Coalossal)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCoalossalLevelUpLearnset,
        .teachableLearnset = sCoalossalTeachableLearnset,
        .formSpeciesIdTable = sCoalossalFormSpeciesIdTable,
        .formChangeTable = sCoalossalFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_APPLIN
    [SPECIES_APPLIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Applin"),
        .cryId = CRY_APPLIN,
        .natDexNum = NATIONAL_DEX_APPLIN,
        .categoryName = _("Manzanido"),
        .height = 2,
        .weight = 5,
		.description = COMPOUND_STRING(
			"Nada más nacer se refugia en una manzana,\n"
			"cuyo interior va devorando a medida que\n"
			"crece. El sabor de la fruta determina\n"
			"la evolución."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Applin,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Applin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Applin,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Applin,
        .shinyPalette = gMonShinyPalette_Applin,
        .iconSprite = gMonIcon_Applin,
        .iconPalIndex = 1,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Applin)
        OVERWORLD(
            sPicTable_Applin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Applin,
            gShinyOverworldPalette_Applin
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sApplinLevelUpLearnset,
        .teachableLearnset = sApplinTeachableLearnset,
        .eggMoveLearnset = sApplinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_TART_APPLE, SPECIES_FLAPPLE},
                                {EVO_ITEM, ITEM_SWEET_APPLE, SPECIES_APPLETUN},
                                {EVO_ITEM, ITEM_SYRUPY_APPLE, SPECIES_DIPPLIN}),
    },

    [SPECIES_FLAPPLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flapple"),
        .cryId = CRY_FLAPPLE,
        .natDexNum = NATIONAL_DEX_FLAPPLE,
        .categoryName = _("Manzanala"),
        .height = 3,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Escupe una saliva sumamente ácida y\n"
			"vuela con sus alas compuestas por piel de\n"
			"manzana, cuyo aspecto puede adoptar."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Flapple,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Flapple,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Flapple,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Flapple,
        .shinyPalette = gMonShinyPalette_Flapple,
        .iconSprite = gMonIcon_Flapple,
        .iconPalIndex = 1,
        SHADOW(-6, 11, SHADOW_SIZE_S)
        FOOTPRINT(Flapple)
        OVERWORLD(
            sPicTable_Flapple,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Flapple,
            gShinyOverworldPalette_Flapple
        )
        .levelUpLearnset = sFlappleLevelUpLearnset,
        .teachableLearnset = sFlappleTeachableLearnset,
        .formSpeciesIdTable = sFlappleFormSpeciesIdTable,
        .formChangeTable = sFlappleFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_FLAPPLE_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flapple"),
        .cryId = CRY_FLAPPLE,
        .natDexNum = NATIONAL_DEX_FLAPPLE,
        .categoryName = _("Manzanala"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Bajo la influencia de la energía de\n"
            "Gigantamax, produce mucho más néctar\n"
            "dulce, y su forma ha cambiado para\n"
            "parecerse a una manzana gigante."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_FlappleGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_FlappleGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FlappleGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_FlappleGmax,
        .shinyPalette = gMonShinyPalette_FlappleGmax,
        .iconSprite = gMonIcon_FlappleGmax,
        .iconPalIndex = 1,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Flapple)
        .isGigantamax = TRUE,
        .levelUpLearnset = sFlappleLevelUpLearnset,
        .teachableLearnset = sFlappleTeachableLearnset,
        .formSpeciesIdTable = sFlappleFormSpeciesIdTable,
        .formChangeTable = sFlappleFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_APPLETUN] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 170,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Appletun"),
        .cryId = CRY_APPLETUN,
        .natDexNum = NATIONAL_DEX_APPLETUN,
        .categoryName = _("Manzanéctar"),
        .height = 4,
        .weight = 130,
		.description = COMPOUND_STRING(
			"Ha evolucionado tras ingerir una\n"
			"manzana dulce. De ahí que el olor que\n"
			"emana para atraer a sus presas, los\n"
			"Pokémon insecto, sea tan agradable."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Appletun,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Appletun,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Appletun,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Appletun,
        .shinyPalette = gMonShinyPalette_Appletun,
        .iconSprite = gMonIcon_Appletun,
        .iconPalIndex = 1,
        SHADOW(5, 6, SHADOW_SIZE_L)
        FOOTPRINT(Appletun)
        OVERWORLD(
            sPicTable_Appletun,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Appletun,
            gShinyOverworldPalette_Appletun
        )
        .levelUpLearnset = sAppletunLevelUpLearnset,
        .teachableLearnset = sAppletunTeachableLearnset,
        .formSpeciesIdTable = sAppletunFormSpeciesIdTable,
        .formChangeTable = sAppletunFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_APPLETUN_GMAX] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 170,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Appletun"),
        .cryId = CRY_APPLETUN,
        .natDexNum = NATIONAL_DEX_APPLETUN,
        .categoryName = _("Manzanéctar"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Debido a la energía de Gigantamax, el\n"
            "néctar de este Pokémon se ha espesado.\n"
            "La mayor viscosidad permite que el\n"
            "néctar absorba más daño que antes."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AppletunGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_AppletunGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AppletunGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AppletunGmax,
        .shinyPalette = gMonShinyPalette_AppletunGmax,
        .iconSprite = gMonIcon_AppletunGmax,
        .iconPalIndex = 1,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Appletun)
        .isGigantamax = TRUE,
        .levelUpLearnset = sAppletunLevelUpLearnset,
        .teachableLearnset = sAppletunTeachableLearnset,
        .formSpeciesIdTable = sAppletunFormSpeciesIdTable,
        .formChangeTable = sAppletunFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DIPPLIN] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 40,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 170,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SUPERSWEET_SYRUP, ABILITY_GLUTTONY, ABILITY_STICKY_HOLD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dipplin"),
        .cryId = CRY_DIPPLIN,
        .natDexNum = NATIONAL_DEX_DIPPLIN,
        .categoryName = _("Manzamelo"),
        .height = 4,
        .weight = 44,
        .description = COMPOUND_STRING(
            "Ha evolucionado gracias a una\n"
            "manzana especial que solo se\n"
            "cultiva en cierta zona. Está\n"
            "formado por dos individuos."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dipplin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Dipplin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dipplin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dipplin,
        .shinyPalette = gMonShinyPalette_Dipplin,
        .iconSprite = gMonIcon_Dipplin,
        .iconPalIndex = 1,
        SHADOW(-4, 8, SHADOW_SIZE_S)
        FOOTPRINT(Dipplin)
        OVERWORLD(
            sPicTable_Dipplin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dipplin,
            gShinyOverworldPalette_Dipplin
        )
        .levelUpLearnset = sDipplinLevelUpLearnset,
        .teachableLearnset = sDipplinTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_DRAGON_CHEER, SPECIES_HYDRAPPLE}),
    },

    [SPECIES_HYDRAPPLE] =
    {
        .baseHP        = 106,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 44,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 10,
        .expYield = 270,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SUPERSWEET_SYRUP, ABILITY_REGENERATOR, ABILITY_STICKY_HOLD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Hydrapple"),
        .cryId = CRY_HYDRAPPLE,
        .natDexNum = NATIONAL_DEX_HYDRAPPLE,
        .categoryName = _("Manzanhidra"),
        .height = 18,
        .weight = 930,
        .description = COMPOUND_STRING(
            "Se trata de siete víboras que\n"
            "viven juntas en una manzana de\n"
            "caramelo. El del centro es el\n"
            "líder del grupo."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hydrapple,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Hydrapple,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hydrapple,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Hydrapple,
        .shinyPalette = gMonShinyPalette_Hydrapple,
        .iconSprite = gMonIcon_Hydrapple,
        .iconPalIndex = 5,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Hydrapple)
        OVERWORLD(
            sPicTable_Hydrapple,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hydrapple,
            gShinyOverworldPalette_Hydrapple
        )
        .levelUpLearnset = sHydrappleLevelUpLearnset,
        .teachableLearnset = sHydrappleTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
    [SPECIES_SILICOBRA] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 75,
        .baseSpeed     = 46,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = 63,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Silicobra"),
        .cryId = CRY_SILICOBRA,
        .natDexNum = NATIONAL_DEX_SILICOBRA,
        .categoryName = _("Serp. Arena"),
        .height = 22,
        .weight = 76,
		.description = COMPOUND_STRING(
			"Expulsa arena por los orificios nasales.\n"
			"Una vez que aturde al enemigo, aprovecha\n"
			"la ocasión para ocultarse bajo tierra."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Silicobra,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Silicobra,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Silicobra,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Silicobra,
        .shinyPalette = gMonShinyPalette_Silicobra,
        .iconSprite = gMonIcon_Silicobra,
        .iconPalIndex = 1,
        SHADOW(3, 1, SHADOW_SIZE_M)
        FOOTPRINT(Silicobra)
        OVERWORLD(
            sPicTable_Silicobra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Silicobra,
            gShinyOverworldPalette_Silicobra
        )
        .levelUpLearnset = sSilicobraLevelUpLearnset,
        .teachableLearnset = sSilicobraTeachableLearnset,
        .eggMoveLearnset = sSilicobraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SANDACONDA}),
    },

    [SPECIES_SANDACONDA] =
    {
        .baseHP        = 72,
        .baseAttack    = 107,
        .baseDefense   = 125,
        .baseSpeed     = 71,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 120,
        .expYield = 179,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sandaconda"),
        .cryId = CRY_SANDACONDA,
        .natDexNum = NATIONAL_DEX_SANDACONDA,
        .categoryName = _("Serp. Arena"),
        .height = 38,
        .weight = 655,
		.description = COMPOUND_STRING(
			"La manera tan particular que tiene de\n"
			"enrollarse sobre sí mismo le permite\n"
			"expulsar con mayor eficacia la arena\n"
			"que almacena en la bolsa."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_Sandaconda,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Sandaconda,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sandaconda,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sandaconda,
        .shinyPalette = gMonShinyPalette_Sandaconda,
        .iconSprite = gMonIcon_Sandaconda,
        .iconPalIndex = 1,
        SHADOW(2, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sandaconda)
        OVERWORLD(
            sPicTable_Sandaconda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandaconda,
            gShinyOverworldPalette_Sandaconda
        )
        .levelUpLearnset = sSandacondaLevelUpLearnset,
        .teachableLearnset = sSandacondaTeachableLearnset,
        .formSpeciesIdTable = sSandacondaFormSpeciesIdTable,
        .formChangeTable = sSandacondaFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SANDACONDA_GMAX] =
    {
        .baseHP        = 72,
        .baseAttack    = 107,
        .baseDefense   = 125,
        .baseSpeed     = 71,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 120,
        .expYield = 179,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sandaconda"),
        .cryId = CRY_SANDACONDA,
        .natDexNum = NATIONAL_DEX_SANDACONDA,
        .categoryName = _("Serp. Arena"),
        .height = 220,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Su saco de arena ha crecido en exceso.\n"
            "Más de 1 M. T de arena ahora giran\n"
            "alrededor de su cuerpo con suficiente\n"
            "fuerza para pulverizar un rascacielos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_SandacondaGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandacondaGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandacondaGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SandacondaGmax,
        .shinyPalette = gMonShinyPalette_SandacondaGmax,
        .iconSprite = gMonIcon_SandacondaGmax,
        .iconPalIndex = 1,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Sandaconda)
        .isGigantamax = TRUE,
        .levelUpLearnset = sSandacondaLevelUpLearnset,
        .teachableLearnset = sSandacondaTeachableLearnset,
        .formSpeciesIdTable = sSandacondaFormSpeciesIdTable,
        .formChangeTable = sSandacondaFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_CRAMORANT
    [SPECIES_CRAMORANT] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FLYING, TYPE_WATER),
        .catchRate = 45,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_GULP_MISSILE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cramorant"),
        .cryId = CRY_CRAMORANT,
        .natDexNum = NATIONAL_DEX_CRAMORANT,
        .categoryName = _("Tragón"),
        .height = 8,
        .weight = 180,
		.description = COMPOUND_STRING(
			"Su colosal potencia le permite machacar\n"
			"al rival de un solo golpe, aunque su\n"
			"carácter despistado lo lleva a olvidarse\n"
			"de su presencia."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cramorant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cramorant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cramorant,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cramorant,
        .shinyPalette = gMonShinyPalette_Cramorant,
        .iconSprite = gMonIcon_Cramorant,
        .iconPalIndex = 0,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cramorant)
        OVERWORLD(
            sPicTable_Cramorant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cramorant,
            gShinyOverworldPalette_Cramorant
        )
        .levelUpLearnset = sCramorantLevelUpLearnset,
        .teachableLearnset = sCramorantTeachableLearnset,
        .eggMoveLearnset = sCramorantEggMoveLearnset,
        .formSpeciesIdTable = sCramorantFormSpeciesIdTable,
        .formChangeTable = sCramorantFormChangeTable,
    },

    [SPECIES_CRAMORANT_GULPING] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FLYING, TYPE_WATER),
        .catchRate = 45,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_GULP_MISSILE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cramorant"),
        .cryId = CRY_CRAMORANT,
        .natDexNum = NATIONAL_DEX_CRAMORANT,
        .categoryName = _("Tragón"),
        .height = 8,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Cramorant's gluttony led it to try\n"
            "to swallow an Arrokuda whole, which\n"
            "in turn led to Cramorant getting an\n"
            "Arrokuda stuck in its throat."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CramorantGulping,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cramorant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CramorantGulping,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CramorantGulping,
        .shinyPalette = gMonShinyPalette_CramorantGulping,
        .iconSprite = gMonIcon_CramorantGulping,
        .iconPalIndex = 0,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cramorant)
        .levelUpLearnset = sCramorantLevelUpLearnset,
        .teachableLearnset = sCramorantTeachableLearnset,
        .eggMoveLearnset = sCramorantEggMoveLearnset,
        .formSpeciesIdTable = sCramorantFormSpeciesIdTable,
        .formChangeTable = sCramorantFormChangeTable,
    },

    [SPECIES_CRAMORANT_GORGING] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FLYING, TYPE_WATER),
        .catchRate = 45,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_GULP_MISSILE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cramorant"),
        .cryId = CRY_CRAMORANT,
        .natDexNum = NATIONAL_DEX_CRAMORANT,
        .categoryName = _("Tragón"),
        .height = 8,
        .weight = 180,
        .description = COMPOUND_STRING(
            "This Cramorant has accidentally\n"
            "gotten a Pikachu lodged in its gullet.\n"
            "Cramorant is choking a little, but it\n"
            "isn't really bothered."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CramorantGorging,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cramorant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CramorantGorging,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CramorantGorging,
        .shinyPalette = gMonShinyPalette_CramorantGorging,
        .iconSprite = gMonIcon_CramorantGorging,
        .iconPalIndex = 0,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cramorant)
        .levelUpLearnset = sCramorantLevelUpLearnset,
        .teachableLearnset = sCramorantTeachableLearnset,
        .eggMoveLearnset = sCramorantEggMoveLearnset,
        .formSpeciesIdTable = sCramorantFormSpeciesIdTable,
        .formChangeTable = sCramorantFormChangeTable,
    },
#endif //P_FAMILY_CRAMORANT

#if P_FAMILY_ARROKUDA
    [SPECIES_ARROKUDA] =
    {
        .baseHP        = 41,
        .baseAttack    = 63,
        .baseDefense   = 40,
        .baseSpeed     = 66,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Arrokuda"),
        .cryId = CRY_ARROKUDA,
        .natDexNum = NATIONAL_DEX_ARROKUDA,
        .categoryName = _("Arremetida"),
        .height = 5,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Se siente muy orgulloso de su afilada\n"
			"mandíbula. En cuanto detecta el más\n"
			"mínimo movimiento, va directo al\n"
			"objetivo para cargar contra él."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arrokuda,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Arrokuda,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arrokuda,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arrokuda,
        .shinyPalette = gMonShinyPalette_Arrokuda,
        .iconSprite = gMonIcon_Arrokuda,
        .iconPalIndex = 2,
        SHADOW(-1, -5, SHADOW_SIZE_S)
        FOOTPRINT(Arrokuda)
        OVERWORLD(
            sPicTable_Arrokuda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arrokuda,
            gShinyOverworldPalette_Arrokuda
        )
        .levelUpLearnset = sArrokudaLevelUpLearnset,
        .teachableLearnset = sArrokudaTeachableLearnset,
        .eggMoveLearnset = sArrokudaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_BARRASKEWDA}),
    },

    [SPECIES_BARRASKEWDA] =
    {
        .baseHP        = 61,
        .baseAttack    = 123,
        .baseDefense   = 60,
        .baseSpeed     = 136,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = 172,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Barraskewda"),
        .cryId = CRY_BARRASKEWDA,
        .natDexNum = NATIONAL_DEX_BARRASKEWDA,
        .categoryName = _("Ensarta"),
        .height = 13,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Su mandíbula es tan puntiaguda\n"
			"como una lanza y tan dura como el\n"
			"acero. Al parecer, su carne es\n"
			"sorprendentemente deliciosa."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Barraskewda,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Barraskewda,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Barraskewda,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Barraskewda,
        .shinyPalette = gMonShinyPalette_Barraskewda,
        .iconSprite = gMonIcon_Barraskewda,
        .iconPalIndex = 2,
        SHADOW(4, 5, SHADOW_SIZE_M)
        FOOTPRINT(Barraskewda)
        OVERWORLD(
            sPicTable_Barraskewda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Barraskewda,
            gShinyOverworldPalette_Barraskewda
        )
        .levelUpLearnset = sBarraskewdaLevelUpLearnset,
        .teachableLearnset = sBarraskewdaTeachableLearnset,
    },
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_TOXEL
    [SPECIES_TOXEL] =
    {
        .baseHP        = 40,
        .baseAttack    = 38,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 54,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_POISON),
        .catchRate = 75,
        .expYield = 48,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RATTLED, ABILITY_STATIC, ABILITY_KLUTZ },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxel"),
        .cryId = CRY_TOXEL,
        .natDexNum = NATIONAL_DEX_TOXEL,
        .categoryName = _("Retoño"),
        .height = 4,
        .weight = 110,
		.description = COMPOUND_STRING(
			"Secreta toxinas por la piel y las\n"
			"almacena en una bolsa de veneno interna.\n"
			"Tocarlo da calambre."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toxel,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Toxel,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toxel,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Toxel,
        .shinyPalette = gMonShinyPalette_Toxel,
        .iconSprite = gMonIcon_Toxel,
        .iconPalIndex = 2,
        SHADOW(-2, 1, SHADOW_SIZE_M)
        FOOTPRINT(Toxel)
        OVERWORLD(
            sPicTable_Toxel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Toxel,
            gShinyOverworldPalette_Toxel
        )
        .levelUpLearnset = sToxelLevelUpLearnset,
        .teachableLearnset = sToxelTeachableLearnset,
        .eggMoveLearnset = sToxelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_NATURE_AMPED, 30, SPECIES_TOXTRICITY_AMPED},
                                {EVO_LEVEL_NATURE_LOW_KEY, 30, SPECIES_TOXTRICITY_LOW_KEY}),
    },

    [SPECIES_TOXTRICITY_AMPED] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 114,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_POISON),
        .catchRate = 45,
        .expYield = 176,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_PLUS, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_AMPED,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punki"),
        .height = 16,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Cuando suena como si estuviera\n"
            "tocando una guitarra, en realidad\n"
            "está arañando las protuberancias de\n"
            "su pecho para generar electricidad."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_ToxtricityAmped,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Toxtricity,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityAmped,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ToxtricityAmped,
        .shinyPalette = gMonShinyPalette_ToxtricityAmped,
        .iconSprite = gMonIcon_ToxtricityAmped,
        .iconPalIndex = 2,
        SHADOW(-6, 13, SHADOW_SIZE_M)
        FOOTPRINT(Toxtricity)
        OVERWORLD(
            sPicTable_ToxtricityAmped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ToxtricityAmped,
            gShinyOverworldPalette_ToxtricityAmped
        )
        .levelUpLearnset = sToxtricityAmpedLevelUpLearnset,
        .teachableLearnset = sToxtricityAmpedTeachableLearnset,
        .formSpeciesIdTable = sToxtricityFormSpeciesIdTable,
        .formChangeTable = sToxtricityAmpedFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_AMPED_GMAX] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 114,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_POISON),
        .catchRate = 45,
        .expYield = 176,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_PLUS, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_AMPED,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punki"),
        .height = 240,
        .weight = 0,
        .description = gToxtricityGigantamaxPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_ToxtricityGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ToxtricityGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ToxtricityGmax,
        .shinyPalette = gMonShinyPalette_ToxtricityGmax,
        .iconSprite = gMonIcon_ToxtricityGmax,
        .iconPalIndex = 0,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Toxtricity)
        .isGigantamax = TRUE,
        .levelUpLearnset = sToxtricityAmpedLevelUpLearnset,
        .teachableLearnset = sToxtricityAmpedTeachableLearnset,
        .formSpeciesIdTable = sToxtricityFormSpeciesIdTable,
        .formChangeTable = sToxtricityAmpedFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_TOXTRICITY_LOW_KEY] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 114,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_POISON),
        .catchRate = 45,
        .expYield = 176,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_MINUS, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_LOW_KEY,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punki"),
        .height = 16,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Es capaz de generar 15.000 voltios\n"
            "de electricidad. Este Pokémon\n"
            "menosprecia a todos los que se\n"
            "atrevan a desafiarlo."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_ToxtricityLowKey,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Toxtricity,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityLowKey,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ToxtricityLowKey,
        .shinyPalette = gMonShinyPalette_ToxtricityLowKey,
        .iconSprite = gMonIcon_ToxtricityLowKey,
        .iconPalIndex = 2,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Toxtricity)
        OVERWORLD(
            sPicTable_ToxtricityLowKey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ToxtricityLowKey,
            gShinyOverworldPalette_ToxtricityLowKey
        )
        .levelUpLearnset = sToxtricityLowKeyLevelUpLearnset,
        .teachableLearnset = sToxtricityLowKeyTeachableLearnset,
        .formSpeciesIdTable = sToxtricityFormSpeciesIdTable,
        .formChangeTable = sToxtricityAmpedFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_LOW_KEY_GMAX] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 114,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_POISON),
        .catchRate = 45,
        .expYield = 176,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_MINUS, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_LOW_KEY,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punki"),
        .height = 240,
        .weight = 0,
        .description = gToxtricityGigantamaxPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_ToxtricityGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ToxtricityGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ToxtricityGmax,
        .shinyPalette = gMonShinyPalette_ToxtricityGmax,
        .iconSprite = gMonIcon_ToxtricityGmax,
        .iconPalIndex = 0,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Toxtricity)
        .isGigantamax = TRUE,
        .levelUpLearnset = sToxtricityLowKeyLevelUpLearnset,
        .teachableLearnset = sToxtricityLowKeyTeachableLearnset,
        .formSpeciesIdTable = sToxtricityFormSpeciesIdTable,
        .formChangeTable = sToxtricityAmpedFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL

#if P_FAMILY_SIZZLIPEDE
    [SPECIES_SIZZLIPEDE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_BUG),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Sizzlipede"),
        .cryId = CRY_SIZZLIPEDE,
        .natDexNum = NATIONAL_DEX_SIZZLIPEDE,
        .categoryName = _("Radiador"),
        .height = 7,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Oprime a sus presas con su cuerpo\n"
			"candente. Una vez bien tostadas, las\n"
			"devora con fruición."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sizzlipede,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Sizzlipede,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Sizzlipede,
        .backPicSize = MON_COORDS_SIZE(40, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sizzlipede,
        .shinyPalette = gMonShinyPalette_Sizzlipede,
        .iconSprite = gMonIcon_Sizzlipede,
        .iconPalIndex = 0,
        SHADOW(6, -4, SHADOW_SIZE_S)
        FOOTPRINT(Sizzlipede)
        OVERWORLD(
            sPicTable_Sizzlipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sizzlipede,
            gShinyOverworldPalette_Sizzlipede
        )
        .levelUpLearnset = sSizzlipedeLevelUpLearnset,
        .teachableLearnset = sSizzlipedeTeachableLearnset,
        .eggMoveLearnset = sSizzlipedeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_CENTISKORCH}),
    },

    [SPECIES_CENTISKORCH] =
    {
        .baseHP        = 100,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIRE, TYPE_BUG),
        .catchRate = 75,
        .expYield = 184,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Centiskorch"),
        .cryId = CRY_CENTISKORCH,
        .natDexNum = NATIONAL_DEX_CENTISKORCH,
        .categoryName = _("Radiador"),
        .height = 30,
        .weight = 1200,
		.description = COMPOUND_STRING(
			"Posee una naturaleza agresiva. El peligro\n"
			"que entraña su cuerpo candente es\n"
			"considerable, aunque sus afilados\n"
			"colmillos no le van a la zaga."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Centiskorch,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Centiskorch,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Centiskorch,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Centiskorch,
        .shinyPalette = gMonShinyPalette_Centiskorch,
        .iconSprite = gMonIcon_Centiskorch,
        .iconPalIndex = 0,
        SHADOW(-3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Centiskorch)
        OVERWORLD(
            sPicTable_Centiskorch,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Centiskorch,
            gShinyOverworldPalette_Centiskorch
        )
        .levelUpLearnset = sCentiskorchLevelUpLearnset,
        .teachableLearnset = sCentiskorchTeachableLearnset,
        .formSpeciesIdTable = sCentiskorchFormSpeciesIdTable,
        .formChangeTable = sCentiskorchFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CENTISKORCH_GMAX] =
    {
        .baseHP        = 100,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIRE, TYPE_BUG),
        .catchRate = 75,
        .expYield = 184,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Centiskorch"),
        .cryId = CRY_CENTISKORCH,
        .natDexNum = NATIONAL_DEX_CENTISKORCH,
        .categoryName = _("Radiador"),
        .height = 750,
        .weight = 0,
        .description = COMPOUND_STRING(
            "El calor que emana de un Centiskorch\n"
            "Gigantamax puede desestabilizar las\n"
            "corrientesde aire. A veces, incluso\n"
            "puede causar tormentas."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CentiskorchGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_CentiskorchGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CentiskorchGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CentiskorchGmax,
        .shinyPalette = gMonShinyPalette_CentiskorchGmax,
        .iconSprite = gMonIcon_CentiskorchGmax,
        .iconPalIndex = 0,
        SHADOW(6, 9, SHADOW_SIZE_L)
        FOOTPRINT(Centiskorch)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCentiskorchLevelUpLearnset,
        .teachableLearnset = sCentiskorchTeachableLearnset,
        .formSpeciesIdTable = sCentiskorchFormSpeciesIdTable,
        .formChangeTable = sCentiskorchFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE

#if P_FAMILY_CLOBBOPUS
    [SPECIES_CLOBBOPUS] =
    {
        .baseHP        = 50,
        .baseAttack    = 68,
        .baseDefense   = 60,
        .baseSpeed     = 32,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 180,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Clobbopus"),
        .cryId = CRY_CLOBBOPUS,
        .natDexNum = NATIONAL_DEX_CLOBBOPUS,
        .categoryName = _("Malcriado"),
        .height = 6,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Emerge a tierra firme en busca de\n"
			"alimento. Su extrema curiosidad lo induce\n"
			"a golpear con los tentáculos todo lo que\n"
			"entra en su campo visual."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clobbopus,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Clobbopus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clobbopus,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Clobbopus,
        .shinyPalette = gMonShinyPalette_Clobbopus,
        .iconSprite = gMonIcon_Clobbopus,
        .iconPalIndex = 0,
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Clobbopus)
        OVERWORLD(
            sPicTable_Clobbopus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clobbopus,
            gShinyOverworldPalette_Clobbopus
        )
        .levelUpLearnset = sClobbopusLevelUpLearnset,
        .teachableLearnset = sClobbopusTeachableLearnset,
        .eggMoveLearnset = sClobbopusEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_TAUNT, SPECIES_GRAPPLOCT}),
    },

    [SPECIES_GRAPPLOCT] =
    {
        .baseHP        = 80,
        .baseAttack    = 118,
        .baseDefense   = 90,
        .baseSpeed     = 42,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Grapploct"),
        .cryId = CRY_GRAPPLOCT,
        .natDexNum = NATIONAL_DEX_GRAPPLOCT,
        .categoryName = _("Jiu-Jitsu"),
        .height = 16,
        .weight = 390,
		.description = COMPOUND_STRING(
			"Se aventura en tierra firme para buscar\n"
			"rivales contra los que luchar para medir\n"
			"su valía. Tras terminar el combate\n"
			"regresa al mar."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Grapploct,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Grapploct,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Grapploct,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Grapploct,
        .shinyPalette = gMonShinyPalette_Grapploct,
        .iconSprite = gMonIcon_Grapploct,
        .iconPalIndex = 2,
        SHADOW(4, 9, SHADOW_SIZE_M)
        FOOTPRINT(Grapploct)
        OVERWORLD(
            sPicTable_Grapploct,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grapploct,
            gShinyOverworldPalette_Grapploct
        )
        .levelUpLearnset = sGrapploctLevelUpLearnset,
        .teachableLearnset = sGrapploctTeachableLearnset,
    },
#endif //P_FAMILY_CLOBBOPUS

#if P_FAMILY_SINISTEA
    [SPECIES_SINISTEA_PHONY] =
{
    .baseHP        = 40,
    .baseAttack    = 45,
    .baseDefense   = 45,
    .baseSpeed     = 50,
    .baseSpAttack  = 74,
    .baseSpDefense = 54,
    .types = MON_TYPES(TYPE_GHOST),
    .catchRate = 120,
    .expYield = 62,
    .evYield_SpAttack = 1,
    .genderRatio = MON_GENDERLESS,
    .eggCycles = 20,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
    .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY },
    .bodyColor = BODY_COLOR_PURPLE,
    .speciesName = _("Sinistea"),
    .cryId = CRY_SINISTEA,
    .natDexNum = NATIONAL_DEX_SINISTEA,
    .categoryName = _("Té"),
    .height = 1,
    .weight = 2,
    .description = COMPOUND_STRING(
        "Se dice que este Pokémon nació\n"
        "cuando un espíritu solitario poseyó\n"
        "una taza de té fría y sobrante."),
    .pokemonScale = 682,
    .pokemonOffset = 24,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_Sinistea,
    .frontPicSize = MON_COORDS_SIZE(40, 32),
    .frontPicYOffset = 17,
    .frontAnimFrames = sAnims_Sinistea,
    //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
    .enemyMonElevation = 9,
    .backPic = gMonBackPic_Sinistea,
    .backPicSize = MON_COORDS_SIZE(48, 32),
    .backPicYOffset = 16,
    //.backAnimId = BACK_ANIM_NONE,
    .palette = gMonPalette_Sinistea,
    .shinyPalette = gMonShinyPalette_Sinistea,
    .iconSprite = gMonIcon_Sinistea,
    .iconPalIndex = 2,
        SHADOW(3, 3, SHADOW_SIZE_S)
    FOOTPRINT(Sinistea)
    OVERWORLD(
        sPicTable_Sinistea,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_Sinistea,
        gShinyOverworldPalette_Sinistea
    )
    .levelUpLearnset = sSinisteaLevelUpLearnset,
    .teachableLearnset = sSinisteaTeachableLearnset,
    .formSpeciesIdTable = sSinisteaFormSpeciesIdTable,
    .evolutions = EVOLUTION({EVO_ITEM, ITEM_CRACKED_POT, SPECIES_POLTEAGEIST_PHONY}),
},

[SPECIES_SINISTEA_ANTIQUE] =
{
    .baseHP        = 40,
    .baseAttack    = 45,
    .baseDefense   = 45,
    .baseSpeed     = 50,
    .baseSpAttack  = 74,
    .baseSpDefense = 54,
    .types = MON_TYPES(TYPE_GHOST),
    .catchRate = 120,
    .expYield = 62,
    .evYield_SpAttack = 1,
    .genderRatio = MON_GENDERLESS,
    .eggCycles = 20,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
    .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY },
    .bodyColor = BODY_COLOR_PURPLE,
    .speciesName = _("Sinistea"),
    .cryId = CRY_SINISTEA,
    .natDexNum = NATIONAL_DEX_SINISTEA,
    .categoryName = _("Té"),
    .height = 1,
    .weight = 2,
    .description = COMPOUND_STRING(
        "El patrón de remolino en el cuerpo de\n"
        "este Pokémon es su debilidad. Si se\n"
        "revuelve, el remolino pierde su forma y\n"
        "Sinistea se marea."),
    .pokemonScale = 682,
    .pokemonOffset = 24,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_Sinistea,
    .frontPicSize = MON_COORDS_SIZE(40, 32),
    .frontPicYOffset = 17,
    .frontAnimFrames = sAnims_Sinistea,
    //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
    .enemyMonElevation = 10,
    .backPic = gMonBackPic_Sinistea,
    .backPicSize = MON_COORDS_SIZE(48, 32),
    .backPicYOffset = 16,
    //.backAnimId = BACK_ANIM_NONE,
    .palette = gMonPalette_Sinistea,
    .shinyPalette = gMonShinyPalette_Sinistea,
    .iconSprite = gMonIcon_Sinistea,
    .iconPalIndex = 2,
        SHADOW(3, 4, SHADOW_SIZE_S)
    FOOTPRINT(Sinistea)
    OVERWORLD(
        sPicTable_Sinistea,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_Sinistea,
        gShinyOverworldPalette_Sinistea
    )
    .levelUpLearnset = sSinisteaLevelUpLearnset,
    .teachableLearnset = sSinisteaTeachableLearnset,
    .formSpeciesIdTable = sSinisteaFormSpeciesIdTable,
    .evolutions = EVOLUTION({EVO_ITEM, ITEM_CHIPPED_POT, SPECIES_POLTEAGEIST_ANTIQUE}),
},

    [SPECIES_POLTEAGEIST_PHONY] =
{
    .baseHP        = 60,
    .baseAttack    = 65,
    .baseDefense   = 65,
    .baseSpeed     = 70,
    .baseSpAttack  = 134,
    .baseSpDefense = 114,
    .types = MON_TYPES(TYPE_GHOST),
    .catchRate = 60,
    .expYield = 178,
    .evYield_SpAttack = 2,
    .genderRatio = MON_GENDERLESS,
    .eggCycles = 20,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
    .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY },
    .bodyColor = BODY_COLOR_PURPLE,
    .speciesName = _("Polteageist"),
    .cryId = CRY_POLTEAGEIST,
    .natDexNum = NATIONAL_DEX_POLTEAGEIST,
    .categoryName = _("Té Negro"),
    .height = 2,
    .weight = 4,
    .description = COMPOUND_STRING(
        "Vive en teteras antiguas. La\n"
        "mayoría de estas son falsificaciones,\n"
        "pero en raras ocasiones se encuentra"
        "una obra auténtica."),
    .pokemonScale = 682,
    .pokemonOffset = 24,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_Polteageist,
    .frontPicSize = MON_COORDS_SIZE(48, 48),
    .frontPicYOffset = 11,
    .frontAnimFrames = sAnims_Polteageist,
    //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
    .enemyMonElevation = 12,
    .backPic = gMonBackPic_Polteageist,
    .backPicSize = MON_COORDS_SIZE(64, 40),
    .backPicYOffset = 13,
    //.backAnimId = BACK_ANIM_NONE,
    .palette = gMonPalette_Polteageist,
    .shinyPalette = gMonShinyPalette_Polteageist,
    .iconSprite = gMonIcon_Polteageist,
    .iconPalIndex = 2,
        SHADOW(0, 12, SHADOW_SIZE_S)
    FOOTPRINT(Polteageist)
    OVERWORLD(
        sPicTable_Polteageist,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_Polteageist,
        gShinyOverworldPalette_Polteageist
    )
    .levelUpLearnset = sPolteageistLevelUpLearnset,
    .teachableLearnset = sPolteageistTeachableLearnset,
    .formSpeciesIdTable = sPolteageistFormSpeciesIdTable,
},

[SPECIES_POLTEAGEIST_ANTIQUE] =
{
    .baseHP        = 60,
    .baseAttack    = 65,
    .baseDefense   = 65,
    .baseSpeed     = 70,
    .baseSpAttack  = 134,
    .baseSpDefense = 114,
    .types = MON_TYPES(TYPE_GHOST),
    .catchRate = 60,
    .expYield = 178,
    .evYield_SpAttack = 2,
    .genderRatio = MON_GENDERLESS,
    .eggCycles = 20,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
    .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY },
    .bodyColor = BODY_COLOR_PURPLE,
    .speciesName = _("Polteageist"),
    .cryId = CRY_POLTEAGEIST,
    .natDexNum = NATIONAL_DEX_POLTEAGEIST,
    .categoryName = _("Té Negro"),
    .height = 2,
    .weight = 4,
    .description = COMPOUND_STRING(
        "Los entrenadores en los que confía Polteageist\n"
        "podrán experimentar su sabor y aroma\n"
        "distintivos de primera mano al probar solo un\n"
        "pequeño sorbo de su té."),
    .pokemonScale = 682,
    .pokemonOffset = 24,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_Polteageist,
    .frontPicSize = MON_COORDS_SIZE(48, 48),
    .frontPicYOffset = 11,
    .frontAnimFrames = sAnims_Polteageist,
    //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
    .enemyMonElevation = 11,
    .backPic = gMonBackPic_Polteageist,
    .backPicSize = MON_COORDS_SIZE(64, 40),
    .backPicYOffset = 13,
    //.backAnimId = BACK_ANIM_NONE,
    .palette = gMonPalette_Polteageist,
    .shinyPalette = gMonShinyPalette_Polteageist,
    .iconSprite = gMonIcon_Polteageist,
    .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_S)
    FOOTPRINT(Polteageist)
    OVERWORLD(
        sPicTable_Polteageist,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_Polteageist,
        gShinyOverworldPalette_Polteageist
    )
    .levelUpLearnset = sPolteageistLevelUpLearnset,
    .teachableLearnset = sPolteageistTeachableLearnset,
    .formSpeciesIdTable = sPolteageistFormSpeciesIdTable,
},
#endif //P_FAMILY_SINISTEA

#if P_FAMILY_HATENNA
    [SPECIES_HATENNA] =
    {
        .baseHP        = 42,
        .baseAttack    = 30,
        .baseDefense   = 45,
        .baseSpeed     = 39,
        .baseSpAttack  = 56,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 235,
        .expYield = 53,
        .evYield_SpAttack = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hatenna"),
        .cryId = CRY_HATENNA,
        .natDexNum = NATIONAL_DEX_HATENNA,
        .categoryName = _("Calma"),
        .height = 4,
        .weight = 34,
		.description = COMPOUND_STRING(
			"Siente predilección por los lugares\n"
			"despoblados. Si percibe una emoción\n"
			"intensa, emprende la huida a toda prisa."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hatenna,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Hatenna,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hatenna,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Hatenna,
        .shinyPalette = gMonShinyPalette_Hatenna,
        .iconSprite = gMonIcon_Hatenna,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_M)
        FOOTPRINT(Hatenna)
        OVERWORLD(
            sPicTable_Hatenna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hatenna,
            gShinyOverworldPalette_Hatenna
        )
        .levelUpLearnset = sHatennaLevelUpLearnset,
        .teachableLearnset = sHatennaTeachableLearnset,
        .eggMoveLearnset = sHatennaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_HATTREM}),
    },

    [SPECIES_HATTREM] =
    {
        .baseHP        = 57,
        .baseAttack    = 40,
        .baseDefense   = 65,
        .baseSpeed     = 49,
        .baseSpAttack  = 86,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hattrem"),
        .cryId = CRY_HATTREM,
        .natDexNum = NATIONAL_DEX_HATTREM,
        .categoryName = _("Serenidad"),
        .height = 6,
        .weight = 48,
		.description = COMPOUND_STRING(
			"Silencia al objetivo atizándole con los\n"
			"mechones. Despliega una potencia\n"
			"devastadora capaz de noquear a un\n"
			"boxeador profesional."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hattrem,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Hattrem,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hattrem,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Hattrem,
        .shinyPalette = gMonShinyPalette_Hattrem,
        .iconSprite = gMonIcon_Hattrem,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Hattrem)
        OVERWORLD(
            sPicTable_Hattrem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hattrem,
            gShinyOverworldPalette_Hattrem
        )
        .levelUpLearnset = sHattremLevelUpLearnset,
        .teachableLearnset = sHattremTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_HATTERENE}),
    },

    [SPECIES_HATTERENE] =
    {
        .baseHP        = 57,
        .baseAttack    = 90,
        .baseDefense   = 95,
        .baseSpeed     = 29,
        .baseSpAttack  = 136,
        .baseSpDefense = 103,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 255,
        .evYield_SpAttack = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hatterene"),
        .cryId = CRY_HATTERENE,
        .natDexNum = NATIONAL_DEX_HATTERENE,
        .categoryName = _("Silencio"),
        .height = 21,
        .weight = 51,
		.description = COMPOUND_STRING(
			"Para mantener alejados a los demás\n"
			"seres vivos, emana a su alrededor\n"
			"ondas psíquicas cuya potencia es\n"
			"capaz de provocar jaquecas."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Hatterene,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Hatterene,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hatterene,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Hatterene,
        .shinyPalette = gMonShinyPalette_Hatterene,
        .iconSprite = gMonIcon_Hatterene,
        .iconPalIndex = 0,
        SHADOW(6, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hatterene)
        OVERWORLD(
            sPicTable_Hatterene,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hatterene,
            gShinyOverworldPalette_Hatterene
        )
        .levelUpLearnset = sHattereneLevelUpLearnset,
        .teachableLearnset = sHattereneTeachableLearnset,
        .formSpeciesIdTable = sHattereneFormSpeciesIdTable,
        .formChangeTable = sHattereneFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_HATTERENE_GMAX] =
    {
        .baseHP        = 57,
        .baseAttack    = 90,
        .baseDefense   = 95,
        .baseSpeed     = 29,
        .baseSpAttack  = 136,
        .baseSpDefense = 103,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 255,
        .evYield_SpAttack = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hatterene"),
        .cryId = CRY_HATTERENE,
        .natDexNum = NATIONAL_DEX_HATTERENE,
        .categoryName = _("Silencio"),
        .height = 260,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Este Pokémon puede leer las emociones\n"
            "de criaturas a más de 48 km de\n"
            "distancia. En cuanto detecta\n"
            "hostilidad, pasa al ataque."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_HattereneGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HattereneGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HattereneGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_HattereneGmax,
        .shinyPalette = gMonShinyPalette_HattereneGmax,
        .iconSprite = gMonIcon_HattereneGmax,
        .iconPalIndex = 0,
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hatterene)
        .isGigantamax = TRUE,
        .levelUpLearnset = sHattereneLevelUpLearnset,
        .teachableLearnset = sHattereneTeachableLearnset,
        .formSpeciesIdTable = sHattereneFormSpeciesIdTable,
        .formChangeTable = sHattereneFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA

#if P_FAMILY_IMPIDIMP
    [SPECIES_IMPIDIMP] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DARK, TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 53,
        .evYield_SpAttack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Impidimp"),
        .cryId = CRY_IMPIDIMP,
        .natDexNum = NATIONAL_DEX_IMPIDIMP,
        .categoryName = _("Astuto"),
        .height = 4,
        .weight = 55,
		.description = COMPOUND_STRING(
			"Se infiltra en las casas para hurtar a sus\n"
			"anchas y, por si fuera poco, nutrirse de\n"
			"la energía negativa que liberan sus\n"
			"contrariados habitantes."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Impidimp,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Impidimp,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Impidimp,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Impidimp,
        .shinyPalette = gMonShinyPalette_Impidimp,
        .iconSprite = gMonIcon_Impidimp,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Impidimp)
        OVERWORLD(
            sPicTable_Impidimp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Impidimp,
            gShinyOverworldPalette_Impidimp
        )
        .levelUpLearnset = sImpidimpLevelUpLearnset,
        .teachableLearnset = sImpidimpTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_MORGREM}),
    },

    [SPECIES_MORGREM] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DARK, TYPE_FAIRY),
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Morgrem"),
        .cryId = CRY_MORGREM,
        .natDexNum = NATIONAL_DEX_MORGREM,
        .categoryName = _("Malicioso"),
        .height = 8,
        .weight = 125,
		.description = COMPOUND_STRING(
			"De noche, atrae con astucia a su objetivo\n"
			"hasta el bosque. Al parecer, tiene la\n"
			"capacidad de hacer crecer productos\n"
			"agrícolas."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Morgrem,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Morgrem,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Morgrem,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Morgrem,
        .shinyPalette = gMonShinyPalette_Morgrem,
        .iconSprite = gMonIcon_Morgrem,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Morgrem)
        OVERWORLD(
            sPicTable_Morgrem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Morgrem,
            gShinyOverworldPalette_Morgrem
        )
        .levelUpLearnset = sMorgremLevelUpLearnset,
        .teachableLearnset = sMorgremTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_GRIMMSNARL}),
    },


    [SPECIES_GRIMMSNARL] =
    {
        .baseHP        = 95,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 255,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grimmsnarl"),
        .cryId = CRY_GRIMMSNARL,
        .natDexNum = NATIONAL_DEX_GRIMMSNARL,
        .categoryName = _("Voluminoso"),
        .height = 15,
        .weight = 610,
		.description = COMPOUND_STRING(
			"Cuando enrolla sus cabellos por todo\n"
			"el cuerpo, aumenta su potencia muscular.\n"
			"Posee una fuerza capaz de someter a\n"
			"a Machamp."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grimmsnarl,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Grimmsnarl,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Grimmsnarl,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Grimmsnarl,
        .shinyPalette = gMonShinyPalette_Grimmsnarl,
        .iconSprite = gMonIcon_Grimmsnarl,
        .iconPalIndex = 0,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Grimmsnarl)
        OVERWORLD(
            sPicTable_Grimmsnarl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grimmsnarl,
            gShinyOverworldPalette_Grimmsnarl
        )
        .levelUpLearnset = sGrimmsnarlLevelUpLearnset,
        .teachableLearnset = sGrimmsnarlTeachableLearnset,
        .formSpeciesIdTable = sGrimmsnarlFormSpeciesIdTable,
        .formChangeTable = sGrimmsnarlFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_GRIMMSNARL_GMAX] =
    {
        .baseHP        = 95,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 255,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grimmsnarl"),
        .cryId = CRY_GRIMMSNARL,
        .natDexNum = NATIONAL_DEX_GRIMMSNARL,
        .categoryName = _("Voluminoso"),
        .height = 320,
        .weight = 0,
        .description = COMPOUND_STRING(
            "La energía Gigantamax ha hecho que\n"
            "brote más pelo en todo su cuerpo. Con\n"
            "esta fuerza extra, puede saltar por\n"
            "encima del edificio más alto del mundo."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GrimmsnarlGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GrimmsnarlGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GrimmsnarlGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GrimmsnarlGmax,
        .shinyPalette = gMonShinyPalette_GrimmsnarlGmax,
        .iconSprite = gMonIcon_GrimmsnarlGmax,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Grimmsnarl)
        .isGigantamax = TRUE,
        .levelUpLearnset = sGrimmsnarlLevelUpLearnset,
        .teachableLearnset = sGrimmsnarlTeachableLearnset,
        .formSpeciesIdTable = sGrimmsnarlFormSpeciesIdTable,
        .formChangeTable = sGrimmsnarlFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP

#if P_FAMILY_MILCERY
    [SPECIES_MILCERY] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 34,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 200,
        .expYield = 54,
        .evYield_SpDefense = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Milcery"),
        .cryId = CRY_MILCERY,
        .natDexNum = NATIONAL_DEX_MILCERY,
        .categoryName = _("Nata"),
        .height = 2,
        .weight = 3,
		.description = COMPOUND_STRING(
			"Su cremoso cuerpo surgió a partir de\n"
			"la unión de partículas odoríferas de\n"
			"dulces aromas presentes en el aire."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Milcery,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Milcery,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Milcery,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Milcery,
        .shinyPalette = gMonShinyPalette_Milcery,
        .iconSprite = gMonIcon_Milcery,
        .iconPalIndex = 1,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Milcery)
        OVERWORLD(
            sPicTable_Milcery,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Milcery,
            gShinyOverworldPalette_Milcery
        )
        .levelUpLearnset = sMilceryLevelUpLearnset,
        .teachableLearnset = sMilceryTeachableLearnset,
        .eggMoveLearnset = sMilceryEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL}),
    },

#define ALCREMIE_MISC_INFO(color)                                               \
        .baseHP        = 65,                                                    \
        .baseAttack    = 60,                                                    \
        .baseDefense   = 75,                                                    \
        .baseSpeed     = 64,                                                    \
        .baseSpAttack  = 110,                                                   \
        .baseSpDefense = 121,                                                   \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 100,                                                       \
        .expYield = 173,                                                        \
        .evYield_SpDefense = 2,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),      \
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL },  \
        .bodyColor = color

#define ALCREMIE_REGULAR_SPECIES_INFO(sweet, cream, color)                                      \
    {                                                                                           \
        ALCREMIE_MISC_INFO(color),                                                              \
        .speciesName = _("Alcremie"),                                                           \
        .cryId = CRY_ALCREMIE,                                                                  \
        .natDexNum = NATIONAL_DEX_ALCREMIE,                                                     \
        .categoryName = _("Nata"),                                                             \
        .height = 3,                                                                            \
        .weight = 5,                                                                            \
        .description = gAlcremie ##cream##PokedexText,                                          \
        .pokemonScale = 530,                                                                    \
        .pokemonOffset = 13,                                                                    \
        .trainerScale = 256,                                                                    \
        .trainerOffset = 0,                                                                     \
        .frontPic = gMonFrontPic_Alcremie ##sweet,                                              \
        .frontPicSize = MON_COORDS_SIZE(40, 56),                                                \
        .frontPicYOffset = 7,                                                                   \
        .frontAnimFrames = sAnims_Alcremie,                                                     \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                            \
        .backPic = gMonBackPic_Alcremie ##sweet,                                                \
        .backPicSize = MON_COORDS_SIZE(48, 56),                                                 \
        .backPicYOffset = 9,                                                                    \
        /*.backAnimId = BACK_ANIM_NONE,*/                                                       \
        .palette = gMonPalette_Alcremie ##sweet##cream,                                         \
        .shinyPalette = gMonShinyPalette_Alcremie ##sweet,                                      \
        .iconSprite = gMonIcon_AlcremieStrawberryVanillaCream, /*AlcremieStrawberry##cream##*/  \
        .iconPalIndex = 1,                                                                      \
        SHADOW(0, 5, SHADOW_SIZE_S)                                                                            \
        FOOTPRINT(Alcremie)                                                                     \
        OVERWORLD(                                                                              \
            sPicTable_AlcremieStrawberry, /*Alcremie ##sweet*/                                  \
            SIZE_32x32,                                                                         \
            SHADOW_SIZE_M,                                                                      \
            TRACKS_FOOT,                                                                        \
            gOverworldPalette_AlcremieStrawberryVanillaCream, /*Alcremie ##sweet##cream*/       \
            gShinyOverworldPalette_AlcremieStrawberryVanillaCream /*Alcremie ##sweet##cream*/   \
        )                                                                                       \
        .levelUpLearnset = sAlcremieLevelUpLearnset,                                            \
        .teachableLearnset = sAlcremieTeachableLearnset,                                        \
        .formSpeciesIdTable = sAlcremieFormSpeciesIdTable,                                      \
        .formChangeTable = sAlcremieFormChangeTable,                                            \
    }

    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM]   = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL]    = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_VANILLA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_BERRY_MATCHA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_BERRY_MINT_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_BERRY_LEMON_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_SALTED_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_SWIRL]         = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_CARAMEL_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_BERRY_RAINBOW_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Love,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Love,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_LOVE_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Love,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_LOVE_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Love,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_LOVE_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Love,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Love,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO(Love,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Love,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_LOVE_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Love,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Star,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Star,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STAR_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Star,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STAR_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Star,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STAR_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Star,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Star,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO(Star,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Star,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STAR_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Star,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_CLOVER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_CLOVER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_CLOVER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_CLOVER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_FLOWER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_FLOWER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_FLOWER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_FLOWER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_RIBBON_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_RIBBON_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_RIBBON_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     RainbowSwirl, BODY_COLOR_YELLOW),
#if P_GIGANTAMAX_FORMS
    [SPECIES_ALCREMIE_GMAX] =
    {
        ALCREMIE_MISC_INFO(BODY_COLOR_YELLOW),
        .speciesName = _("Alcremie"),
        .cryId = CRY_ALCREMIE,
        .natDexNum = NATIONAL_DEX_ALCREMIE,
        .categoryName = _("Nata"),
        .height = 3,
        .weight = 5,
        .description = COMPOUND_STRING(
            "Lanza enjambres de misiles,\n"
            "cada uno hecho de crema y cargado con\n"
            "100,000 kcal. Si te golpea uno\n"
            "de estos, tu cabeza dará vueltas."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AlcremieGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AlcremieGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AlcremieGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AlcremieGmax,
        .shinyPalette = gMonShinyPalette_AlcremieGmax,
        .iconSprite = gMonIcon_AlcremieGmax,
        .iconPalIndex = 1,
        SHADOW(0, 10, SHADOW_SIZE_L)
        FOOTPRINT(Alcremie)
        .isGigantamax = TRUE,
        .levelUpLearnset = sAlcremieLevelUpLearnset,
        .teachableLearnset = sAlcremieTeachableLearnset,
        .formSpeciesIdTable = sAlcremieFormSpeciesIdTable,
        .formChangeTable = sAlcremieFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY

#if P_FAMILY_FALINKS
    [SPECIES_FALINKS] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Falinks"),
        .cryId = CRY_FALINKS,
        .natDexNum = NATIONAL_DEX_FALINKS,
        .categoryName = _("Formación"),
        .height = 30,
        .weight = 620,
		.description = COMPOUND_STRING(
			"Este Pokémon consta de cinco subalternos\n"
			"y un líder, cuyas órdenes obedecen sin\n"
			"rechistar."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Falinks,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Falinks,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Falinks,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Falinks,
        .shinyPalette = gMonShinyPalette_Falinks,
        .iconSprite = gMonIcon_Falinks,
        .iconPalIndex = 0,
        SHADOW(-7, 5, SHADOW_SIZE_S)
        FOOTPRINT(Falinks)
        OVERWORLD(
            sPicTable_Falinks,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Falinks,
            gShinyOverworldPalette_Falinks
        )
        .levelUpLearnset = sFalinksLevelUpLearnset,
        .teachableLearnset = sFalinksTeachableLearnset,
    },
#endif //P_FAMILY_FALINKS

#if P_FAMILY_PINCURCHIN
    [SPECIES_PINCURCHIN] =
    {
        .baseHP        = 48,
        .baseAttack    = 101,
        .baseDefense   = 95,
        .baseSpeed     = 15,
        .baseSpAttack  = 91,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = 152,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_NONE, ABILITY_ELECTRIC_SURGE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Pincurchin"),
        .cryId = CRY_PINCURCHIN,
        .natDexNum = NATIONAL_DEX_PINCURCHIN,
        .categoryName = _("Erizo de Mar"),
        .height = 3,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Libera electricidad por la punta de\n"
			"las púas. Con sus afilados dientes raspa\n"
			"las algas pegadas a las rocas para\n"
			"ingerirlas."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pincurchin,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Pincurchin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pincurchin,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pincurchin,
        .shinyPalette = gMonShinyPalette_Pincurchin,
        .iconSprite = gMonIcon_Pincurchin,
        .iconPalIndex = 2,
        SHADOW(-1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Pincurchin)
        OVERWORLD(
            sPicTable_Pincurchin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pincurchin,
            gShinyOverworldPalette_Pincurchin
        )
        .levelUpLearnset = sPincurchinLevelUpLearnset,
        .teachableLearnset = sPincurchinTeachableLearnset,
        .eggMoveLearnset = sPincurchinEggMoveLearnset,
    },
#endif //P_FAMILY_PINCURCHIN

#if P_FAMILY_SNOM
    [SPECIES_SNOM] =
    {
        .baseHP        = 30,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ICE, TYPE_BUG),
        .catchRate = 190,
        .expYield = 37,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Snom"),
        .cryId = CRY_SNOM,
        .natDexNum = NATIONAL_DEX_SNOM,
        .categoryName = _("Oruga"),
        .height = 3,
        .weight = 38,
		.description = COMPOUND_STRING(
			"Teje un hilo gélido que le permite\n"
			"aferrarse a las ramas y simula ser un\n"
			"carámbano mientras duerme."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snom,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 20,
        .frontAnimFrames = sAnims_Snom,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Snom,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Snom,
        .shinyPalette = gMonShinyPalette_Snom,
        .iconSprite = gMonIcon_Snom,
        .iconPalIndex = 0,
        SHADOW(-2, -7, SHADOW_SIZE_S)
        FOOTPRINT(Snom)
        OVERWORLD(
            sPicTable_Snom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snom,
            gShinyOverworldPalette_Snom
        )
        .levelUpLearnset = sSnomLevelUpLearnset,
        .teachableLearnset = sSnomTeachableLearnset,
        .eggMoveLearnset = sSnomEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_NIGHT, 0, SPECIES_FROSMOTH}),
    },

    [SPECIES_FROSMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_BUG),
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Frosmoth"),
        .cryId = CRY_FROSMOTH,
        .natDexNum = NATIONAL_DEX_FROSMOTH,
        .categoryName = _("Polillahielo"),
        .height = 13,
        .weight = 420,
		.description = COMPOUND_STRING(
			"No muestra la menor compasión con\n"
			"quien asole el campo: lo escarmienta\n"
			"batiendo sus gélidas alas para provocar\n"
			"una ventisca."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frosmoth,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Frosmoth,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Frosmoth,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Frosmoth,
        .shinyPalette = gMonShinyPalette_Frosmoth,
        .iconSprite = gMonIcon_Frosmoth,
        .iconPalIndex = 0,
        SHADOW(-7, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Frosmoth)
        OVERWORLD(
            sPicTable_Frosmoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Frosmoth,
            gShinyOverworldPalette_Frosmoth
        )
        .levelUpLearnset = sFrosmothLevelUpLearnset,
        .teachableLearnset = sFrosmothTeachableLearnset,
    },
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
    [SPECIES_STONJOURNER] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 135,
        .baseSpeed     = 70,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_POWER_SPOT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Stonjourner"),
        .cryId = CRY_STONJOURNER,
        .natDexNum = NATIONAL_DEX_STONJOURNER,
        .categoryName = _("Megalito"),
        .height = 25,
        .weight = 5200,
		.description = COMPOUND_STRING(
			"Una vez al año y en una fecha concreta,\n"
			"tienen la costumbre de aparecer de la nada\n"
			"para reunirse y formar un círculo."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Stonjourner,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Stonjourner,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Stonjourner,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Stonjourner,
        .shinyPalette = gMonShinyPalette_Stonjourner,
        .iconSprite = gMonIcon_Stonjourner,
        .iconPalIndex = 2,
        SHADOW(0, 10, SHADOW_SIZE_L)
        FOOTPRINT(Stonjourner)
        OVERWORLD(
            sPicTable_Stonjourner,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Stonjourner,
            gShinyOverworldPalette_Stonjourner
        )
        .levelUpLearnset = sStonjournerLevelUpLearnset,
        .teachableLearnset = sStonjournerTeachableLearnset,
        .eggMoveLearnset = sStonjournerEggMoveLearnset,
    },
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
    [SPECIES_EISCUE_ICE] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_ICE_FACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eiscue"),
        .cryId = CRY_EISCUE_ICE,
        .natDexNum = NATIONAL_DEX_EISCUE,
        .categoryName = _("Pingüino"),
        .height = 14,
        .weight = 890,
        .description = COMPOUND_STRING(
            "Arribó a través de la corriente oceánica\n"
            "desde un lugar gélido. Mantiene su\n"
            "cabeza constantemente helada para\n"
            "asegurarse de que se mantenga fresca."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_EiscueIce,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Eiscue,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EiscueIce,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EiscueIce,
        .shinyPalette = gMonShinyPalette_EiscueIce,
        .iconSprite = gMonIcon_EiscueIce,
        .iconPalIndex = 0,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Eiscue)
        OVERWORLD(
            sPicTable_EiscueIce,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_EiscueIce,
            gShinyOverworldPalette_EiscueIce
        )
        .levelUpLearnset = sEiscueLevelUpLearnset,
        .teachableLearnset = sEiscueTeachableLearnset,
        .eggMoveLearnset = sEiscueEggMoveLearnset,
        .formSpeciesIdTable = sEiscueFormSpeciesIdTable,
        .formChangeTable = sEiscueFormChangeTable,
    },

    [SPECIES_EISCUE_NOICE] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 130,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_ICE_FACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eiscue"),
        .cryId = CRY_EISCUE_NOICE_FACE,
        .natDexNum = NATIONAL_DEX_EISCUE,
        .categoryName = _("Pingüino"),
        .height = 14,
        .weight = 890,
        .description = COMPOUND_STRING(
            "El pelo en su cabeza está conectado a\n"
            "la superficie de su cerebro. Cuando\n"
            "está pensando en algo, su cabello\n"
            "enfría el aire a su alrededor."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_EiscueNoice,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Eiscue,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EiscueNoice,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EiscueNoice,
        .shinyPalette = gMonShinyPalette_EiscueNoice,
        .iconSprite = gMonIcon_EiscueNoice,
        .iconPalIndex = 0,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Eiscue)
        .levelUpLearnset = sEiscueLevelUpLearnset,
        .teachableLearnset = sEiscueTeachableLearnset,
        .eggMoveLearnset = sEiscueEggMoveLearnset,
        .formSpeciesIdTable = sEiscueFormSpeciesIdTable,
        .formChangeTable = sEiscueFormChangeTable,
    },
#endif //P_FAMILY_EISCUE

#if P_FAMILY_INDEEDEE
    [SPECIES_INDEEDEE_M] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_NORMAL),
        .catchRate = 30,
        .expYield = 166,
        .evYield_SpAttack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_SYNCHRONIZE, ABILITY_PSYCHIC_SURGE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Indeedee"),
        .cryId = CRY_INDEEDEE_M,
        .natDexNum = NATIONAL_DEX_INDEEDEE,
        .categoryName = _("Sensorio"),
        .height = 9,
        .weight = 280,
        .description = COMPOUND_STRING(
            "Utiliza sus cuernos para sentir las\n"
            "emociones de los demás. Los machos\n"
            "actúan como sirvientes para sus amos,\n"
            "cuidando de todas sus necesidades."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IndeedeeM,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Indeedee,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IndeedeeM,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IndeedeeM,
        .shinyPalette = gMonShinyPalette_IndeedeeM,
        .iconSprite = gMonIcon_IndeedeeM,
        .iconPalIndex = 2,
        SHADOW(2, 4, SHADOW_SIZE_S)
        FOOTPRINT(Indeedee)
        OVERWORLD(
            sPicTable_IndeedeeM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_IndeedeeM,
            gShinyOverworldPalette_IndeedeeM
        )
        .levelUpLearnset = sIndeedeeMLevelUpLearnset,
        .teachableLearnset = sIndeedeeMTeachableLearnset,
        .formSpeciesIdTable = sIndeedeeFormSpeciesIdTable,
    },

    [SPECIES_INDEEDEE_F] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_NORMAL),
        .catchRate = 30,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_SYNCHRONIZE, ABILITY_PSYCHIC_SURGE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Indeedee"),
        .cryId = CRY_INDEEDEE_F,
        .natDexNum = NATIONAL_DEX_INDEEDEE,
        .categoryName = _("Sensorio"),
        .height = 9,
        .weight = 280,
        .description = COMPOUND_STRING(
            "Sirven diligentemente para poder\n"
            "recoger sentimientos de gratitud.\n"
            "Las hembras son particularmente\n"
            "buenas cuidando niños."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_IndeedeeF,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Indeedee,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IndeedeeF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_IndeedeeF,
        .shinyPalette = gMonShinyPalette_IndeedeeF,
        .iconSprite = gMonIcon_IndeedeeF,
        .iconPalIndex = 2,
        SHADOW(2, 4, SHADOW_SIZE_S)
        FOOTPRINT(Indeedee)
        OVERWORLD(
            sPicTable_IndeedeeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_IndeedeeF,
            gShinyOverworldPalette_IndeedeeF
        )
        .levelUpLearnset = sIndeedeeFLevelUpLearnset,
        .teachableLearnset = sIndeedeeFTeachableLearnset,
        .eggMoveLearnset = sIndeedeeFEggMoveLearnset,
        .formSpeciesIdTable = sIndeedeeFormSpeciesIdTable,
    },
#endif //P_FAMILY_INDEEDEE

#if P_FAMILY_MORPEKO
    [SPECIES_MORPEKO_FULL_BELLY] =
    {
        .baseHP        = 58,
        .baseAttack    = 95,
        .baseDefense   = 58,
        .baseSpeed     = 97,
        .baseSpAttack  = 70,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DARK),
        .catchRate = 180,
        .expYield = 153,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUNGER_SWITCH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Morpeko"),
        .cryId = CRY_MORPEKO_FULL_BELLY,
        .natDexNum = NATIONAL_DEX_MORPEKO,
        .categoryName = _("Dos caras"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Al comer las semillas guardadas en sus\n"
            "sacos, este Pokémon no sólo está\n"
            "satisfaciendo su hambre constante.\n"
            "También está generando electricidad."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MorpekoFullBelly,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Morpeko,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MorpekoFullBelly,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MorpekoFullBelly,
        .shinyPalette = gMonShinyPalette_MorpekoFullBelly,
        .iconSprite = gMonIcon_MorpekoFullBelly,
        .iconPalIndex = 2,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Morpeko)
        OVERWORLD(
            sPicTable_MorpekoFullBelly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MorpekoFullBelly,
            gShinyOverworldPalette_MorpekoFullBelly
        )
        .levelUpLearnset = sMorpekoLevelUpLearnset,
        .teachableLearnset = sMorpekoTeachableLearnset,
        .eggMoveLearnset = sMorpekoEggMoveLearnset,
        .formSpeciesIdTable = sMorpekoFormSpeciesIdTable,
        .formChangeTable = sMorpekoFormChangeTable,
    },

    [SPECIES_MORPEKO_HANGRY] =
    {
        .baseHP        = 58,
        .baseAttack    = 95,
        .baseDefense   = 58,
        .baseSpeed     = 97,
        .baseSpAttack  = 70,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DARK),
        .catchRate = 180,
        .expYield = 153,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUNGER_SWITCH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Morpeko"),
        .cryId = CRY_MORPEKO_HANGRY,
        .natDexNum = NATIONAL_DEX_MORPEKO,
        .categoryName = _("Dos caras"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "El hambre intensa lo lleva a extremos de\n"
            "violencia, y la electricidad en sus\n"
            "mejillas se ha convertido en\n"
            "energía de tipo Siniestro."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MorpekoHangry,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Morpeko,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MorpekoHangry,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MorpekoHangry,
        .shinyPalette = gMonShinyPalette_MorpekoHangry,
        .iconSprite = gMonIcon_MorpekoHangry,
        .iconPalIndex = 2,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Morpeko)
        .levelUpLearnset = sMorpekoLevelUpLearnset,
        .teachableLearnset = sMorpekoTeachableLearnset,
        .eggMoveLearnset = sMorpekoEggMoveLearnset,
        .formSpeciesIdTable = sMorpekoFormSpeciesIdTable,
        .formChangeTable = sMorpekoFormChangeTable,
    },
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_CUFANT
    [SPECIES_CUFANT] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 49,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 190,
        .expYield = 66,
        .evYield_Attack = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cufant"),
        .cryId = CRY_CUFANT,
        .natDexNum = NATIONAL_DEX_CUFANT,
        .categoryName = _("Broncefante"),
        .height = 12,
        .weight = 1000,
		.description = COMPOUND_STRING(
			"Su constitución fornida le permite\n"
			"transportar sin inmutarse cargas de 5\n"
			"toneladas. Utiliza la trompa para excavar\n"
			"la tierra."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cufant,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Cufant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cufant,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cufant,
        .shinyPalette = gMonShinyPalette_Cufant,
        .iconSprite = gMonIcon_Cufant,
        .iconPalIndex = 0,
        SHADOW(5, 2, SHADOW_SIZE_M)
        FOOTPRINT(Cufant)
        OVERWORLD(
            sPicTable_Cufant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cufant,
            gShinyOverworldPalette_Cufant
        )
        .levelUpLearnset = sCufantLevelUpLearnset,
        .teachableLearnset = sCufantTeachableLearnset,
        .eggMoveLearnset = sCufantEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COPPERAJAH}),
    },

    [SPECIES_COPPERAJAH] =
    {
        .baseHP        = 122,
        .baseAttack    = 130,
        .baseDefense   = 69,
        .baseSpeed     = 30,
        .baseSpAttack  = 80,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 90,
        .expYield = 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Copperajah"),
        .cryId = CRY_COPPERAJAH,
        .natDexNum = NATIONAL_DEX_COPPERAJAH,
        .categoryName = _("Broncefante"),
        .height = 30,
        .weight = 6500,
		.description = COMPOUND_STRING(
			"Su piel verdosa es resistente al agua.\n"
			"Proviene de tierras lejanas y presta ayuda\n"
			"a las personas en la realización de ciertos\n"
			"trabajos."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Copperajah,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Copperajah,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Copperajah,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Copperajah,
        .shinyPalette = gMonShinyPalette_Copperajah,
        .iconSprite = gMonIcon_Copperajah,
        .iconPalIndex = 0,
        SHADOW(6, 7, SHADOW_SIZE_L)
        FOOTPRINT(Copperajah)
        OVERWORLD(
            sPicTable_Copperajah,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Copperajah,
            gShinyOverworldPalette_Copperajah
        )
        .levelUpLearnset = sCopperajahLevelUpLearnset,
        .teachableLearnset = sCopperajahTeachableLearnset,
        .formSpeciesIdTable = sCopperajahFormSpeciesIdTable,
        .formChangeTable = sCopperajahFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COPPERAJAH_GMAX] =
    {
        .baseHP        = 122,
        .baseAttack    = 130,
        .baseDefense   = 69,
        .baseSpeed     = 30,
        .baseSpAttack  = 80,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 90,
        .expYield = 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Copperajah"),
        .cryId = CRY_COPPERAJAH,
        .natDexNum = NATIONAL_DEX_COPPERAJAH,
        .categoryName = _("Broncefante"),
        .height = 230,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Después de que este Pokémon ha\n"
            "Gigantamaxado, su enorme nariz puede\n"
            "demoler estructuras grandes con\n"
            "un solo golpe demoledor."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CopperajahGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CopperajahGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CopperajahGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CopperajahGmax,
        .shinyPalette = gMonShinyPalette_CopperajahGmax,
        .iconSprite = gMonIcon_CopperajahGmax,
        .iconPalIndex = 0,
        SHADOW(0, 11, SHADOW_SIZE_L)
        FOOTPRINT(Copperajah)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCopperajahLevelUpLearnset,
        .teachableLearnset = sCopperajahTeachableLearnset,
        .formSpeciesIdTable = sCopperajahFormSpeciesIdTable,
        .formChangeTable = sCopperajahFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DRACOZOLT
    [SPECIES_DRACOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_HUSTLE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dracozolt"),
        .cryId = CRY_DRACOZOLT,
        .natDexNum = NATIONAL_DEX_DRACOZOLT,
        .categoryName = _("Fósil"),
        .height = 18,
        .weight = 1900,
		.description = COMPOUND_STRING(
			"La robustez de su tren inferior lo hacía\n"
			"invencible en la antigüedad, pero se\n"
			"extinguió tras comerse todas las plantas\n"
			"de las que se nutría."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Dracozolt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dracozolt,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dracozolt,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dracozolt,
        .shinyPalette = gMonShinyPalette_Dracozolt,
        .iconSprite = gMonIcon_Dracozolt,
        .iconPalIndex = 1,
        SHADOW(-4, 10, SHADOW_SIZE_L)
        FOOTPRINT(Dracozolt)
        OVERWORLD(
            sPicTable_Dracozolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dracozolt,
            gShinyOverworldPalette_Dracozolt
        )
        .levelUpLearnset = sDracozoltLevelUpLearnset,
        .teachableLearnset = sDracozoltTeachableLearnset,
    },
#endif //P_FAMILY_DRACOZOLT

#if P_FAMILY_ARCTOZOLT
    [SPECIES_ARCTOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_ICE),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_STATIC, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arctozolt"),
        .cryId = CRY_ARCTOZOLT,
        .natDexNum = NATIONAL_DEX_ARCTOZOLT,
        .categoryName = _("Fósil"),
        .height = 23,
        .weight = 1500,
		.description = COMPOUND_STRING(
			"La parte superior del cuerpo está\n"
			"congelada y, al temblar, genera\n"
			"electricidad. Camina con suma\n"
			"dificultad."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Arctozolt,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Arctozolt,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arctozolt,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arctozolt,
        .shinyPalette = gMonShinyPalette_Arctozolt,
        .iconSprite = gMonIcon_Arctozolt,
        .iconPalIndex = 0,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Arctozolt)
        OVERWORLD(
            sPicTable_Arctozolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arctozolt,
            gShinyOverworldPalette_Arctozolt
        )
        .levelUpLearnset = sArctozoltLevelUpLearnset,
        .teachableLearnset = sArctozoltTeachableLearnset,
    },
#endif //P_FAMILY_ARCTOZOLT

#if P_FAMILY_DRACOVISH
    [SPECIES_DRACOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_STRONG_JAW, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dracovish"),
        .cryId = CRY_DRACOVISH,
        .natDexNum = NATIONAL_DEX_DRACOVISH,
        .categoryName = _("Fósil"),
        .height = 23,
        .weight = 2150,
		.description = COMPOUND_STRING(
			"Exhibe con orgullo su inmensa capacidad\n"
			"motriz, que le permite superar los\n"
			"60 km/h, pero solo puede respirar bajo\n"
			"el agua."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Dracovish,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dracovish,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dracovish,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dracovish,
        .shinyPalette = gMonShinyPalette_Dracovish,
        .iconSprite = gMonIcon_Dracovish,
        .iconPalIndex = 0,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Dracovish)
        OVERWORLD(
            sPicTable_Dracovish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dracovish,
            gShinyOverworldPalette_Dracovish
        )
        .levelUpLearnset = sDracovishLevelUpLearnset,
        .teachableLearnset = sDracovishTeachableLearnset,
    },
#endif //P_FAMILY_DRACOVISH

#if P_FAMILY_ARCTOVISH
    [SPECIES_ARCTOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 55,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_ICE_BODY, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arctovish"),
        .cryId = CRY_ARCTOVISH,
        .natDexNum = NATIONAL_DEX_ARCTOVISH,
        .categoryName = _("Fósil"),
        .height = 20,
        .weight = 1750,
		.description = COMPOUND_STRING(
			"Aunque la piel de su rostro era capaz de\n"
			"resistir cualquier ataque, su dificultad\n"
			"para respirar acabó provocando su\n"
			"extinción."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Arctovish,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Arctovish,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arctovish,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Arctovish,
        .shinyPalette = gMonShinyPalette_Arctovish,
        .iconSprite = gMonIcon_Arctovish,
        .iconPalIndex = 0,
        SHADOW(0, 11, SHADOW_SIZE_L)
        FOOTPRINT(Arctovish)
        OVERWORLD(
            sPicTable_Arctovish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arctovish,
            gShinyOverworldPalette_Arctovish
        )
        .levelUpLearnset = sArctovishLevelUpLearnset,
        .teachableLearnset = sArctovishTeachableLearnset,
    },
#endif //P_FAMILY_ARCTOVISH

#if P_FAMILY_DURALUDON
    [SPECIES_DURALUDON] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 120,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 187,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LIGHT_METAL, ABILITY_HEAVY_METAL, ABILITY_STALWART },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Duraludon"),
        .cryId = CRY_DURALUDON,
        .natDexNum = NATIONAL_DEX_DURALUDON,
        .categoryName = _("Aleación"),
        .height = 18,
        .weight = 400,
		.description = COMPOUND_STRING(
			"Su cuerpo, similar a un metal pulido,\n"
			"es tan ligero como robusto. Sin embargo,\n"
			"tiene el defecto de que se oxida con\n"
			"facilidad."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Duraludon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Duraludon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Duraludon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Duraludon,
        .shinyPalette = gMonShinyPalette_Duraludon,
        .iconSprite = gMonIcon_Duraludon,
        .iconPalIndex = 0,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Duraludon)
        OVERWORLD(
            sPicTable_Duraludon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Duraludon,
            gShinyOverworldPalette_Duraludon
        )
        .levelUpLearnset = sDuraludonLevelUpLearnset,
        .teachableLearnset = sDuraludonTeachableLearnset,
        .eggMoveLearnset = sDuraludonEggMoveLearnset,
        .formSpeciesIdTable = sDuraludonFormSpeciesIdTable,
        .formChangeTable = sDuraludonFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_METAL_ALLOY, SPECIES_ARCHALUDON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DURALUDON_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 120,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 187,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LIGHT_METAL, ABILITY_HEAVY_METAL, ABILITY_STALWART },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Duraludon"),
        .cryId = CRY_DURALUDON,
        .natDexNum = NATIONAL_DEX_DURALUDON,
        .categoryName = _("Aleación"),
        .height = 430,
        .weight = 0,
        .description = COMPOUND_STRING(
            "La dureza de sus células es\n"
            "excepcional. También tiene\n"
            "una estructura corporal\n"
            "resistente a terremotos."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_DuraludonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DuraludonGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DuraludonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DuraludonGmax,
        .shinyPalette = gMonShinyPalette_DuraludonGmax,
        .iconSprite = gMonIcon_DuraludonGmax,
        .iconPalIndex = 0,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Duraludon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sDuraludonLevelUpLearnset,
        .teachableLearnset = sDuraludonTeachableLearnset,
        .eggMoveLearnset = sDuraludonEggMoveLearnset,
        .formSpeciesIdTable = sDuraludonFormSpeciesIdTable,
        .formChangeTable = sDuraludonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ARCHALUDON] =
    {
        .baseHP        = 90,
        .baseAttack    = 105,
        .baseDefense   = 130,
        .baseSpeed     = 85,
        .baseSpAttack  = 125,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .catchRate = 10,
        .expYield = 300,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STAMINA, ABILITY_STURDY, ABILITY_STALWART },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Archaludon"),
        .cryId = CRY_ARCHALUDON,
        .natDexNum = NATIONAL_DEX_ARCHALUDON,
        .categoryName = _("Aleación"),
        .height = 20,
        .weight = 600,
        .description = COMPOUND_STRING(
            "Acumula electricidad estática de su\n"
            "entorno. El rayo que dispara cuando\n"
            "está a cuatro patas posee una\n"
            "potencia colosal."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Archaludon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Archaludon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Archaludon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Archaludon,
        .shinyPalette = gMonShinyPalette_Archaludon,
        .iconSprite = gMonIcon_Archaludon,
        .iconPalIndex = 0,
        SHADOW(4, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Archaludon)
        OVERWORLD(
            sPicTable_Archaludon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Archaludon,
            gShinyOverworldPalette_Archaludon
        )
        .levelUpLearnset = sArchaludonLevelUpLearnset,
        .teachableLearnset = sArchaludonTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
    [SPECIES_DREEPY] =
    {
        .baseHP        = 28,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 82,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 54,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dreepy"),
        .cryId = CRY_DREEPY,
        .natDexNum = NATIONAL_DEX_DREEPY,
        .categoryName = _("Resentido"),
        .height = 5,
        .weight = 20,
		.description = COMPOUND_STRING(
			"Habitaba los mares en tiempos\n"
			"inmemoriales. Ha revivido en forma de\n"
			"Pokémon de tipo Fantasma para vagar por\n"
			"su antigua morada."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dreepy,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Dreepy,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Dreepy,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dreepy,
        .shinyPalette = gMonShinyPalette_Dreepy,
        .iconSprite = gMonIcon_Dreepy,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Dreepy)
        OVERWORLD(
            sPicTable_Dreepy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dreepy,
            gShinyOverworldPalette_Dreepy
        )
        .levelUpLearnset = sDreepyLevelUpLearnset,
        .teachableLearnset = sDreepyTeachableLearnset,
        .eggMoveLearnset = sDreepyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_DRAKLOAK}),
    },

    [SPECIES_DRAKLOAK] =
    {
        .baseHP        = 68,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 102,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Drakloak"),
        .cryId = CRY_DRAKLOAK,
        .natDexNum = NATIONAL_DEX_DRAKLOAK,
        .categoryName = _("Cuidador"),
        .height = 14,
        .weight = 110,
		.description = COMPOUND_STRING(
			"Si no lleva un Dreepy del que cuidar\n"
			"encima de la cabeza, se intranquiliza y\n"
			"trata de sustituirlo con otro Pokémon."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drakloak,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drakloak,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Drakloak,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Drakloak,
        .shinyPalette = gMonShinyPalette_Drakloak,
        .iconSprite = gMonIcon_Drakloak,
        .iconPalIndex = 0,
        SHADOW(0, 9, SHADOW_SIZE_M)
        FOOTPRINT(Drakloak)
        OVERWORLD(
            sPicTable_Drakloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drakloak,
            gShinyOverworldPalette_Drakloak
        )
        .levelUpLearnset = sDrakloakLevelUpLearnset,
        .teachableLearnset = sDrakloakTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 60, SPECIES_DRAGAPULT}),
    },

    [SPECIES_DRAGAPULT] =
    {
        .baseHP        = 88,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 142,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 300,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dragapult"),
        .cryId = CRY_DRAGAPULT,
        .natDexNum = NATIONAL_DEX_DRAGAPULT,
        .categoryName = _("Furtivo"),
        .height = 30,
        .weight = 500,
		.description = COMPOUND_STRING(
			"Vive en compañía de Dreepy, a los que\n"
			"hospeda en el interior de sus cuernos.\n"
			"Los dispara a velocidad supersónica\n"
			"en combate."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dragapult,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dragapult,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Dragapult,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dragapult,
        .shinyPalette = gMonShinyPalette_Dragapult,
        .iconSprite = gMonIcon_Dragapult,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Dragapult)
        OVERWORLD(
            sPicTable_Dragapult,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dragapult,
            gShinyOverworldPalette_Dragapult
        )
        .levelUpLearnset = sDragapultLevelUpLearnset,
        .teachableLearnset = sDragapultTeachableLearnset,
    },
#endif //P_FAMILY_DREEPY

#if P_FAMILY_ZACIAN
    [SPECIES_ZACIAN_HERO] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 10,
        .expYield = 335,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INTREPID_SWORD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Zacian"),
        .cryId = CRY_ZACIAN_HERO,
        .natDexNum = NATIONAL_DEX_ZACIAN,
        .categoryName = _("Guerrero"),
        .height = 28,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "Con fama de héroe, este Pokémon\n"
            "absorbe partículas metálicas, y\n"
            "las convierte en un arma para"
            "combatir."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ZacianHero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Zacian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZacianHero,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZacianHero,
        .shinyPalette = gMonShinyPalette_ZacianHero,
        .iconSprite = gMonIcon_ZacianHero,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Zacian)
        OVERWORLD(
            sPicTable_ZacianHero,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZacianHero,
            gShinyOverworldPalette_ZacianHero
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZacianLevelUpLearnset,
        .teachableLearnset = sZacianTeachableLearnset,
        .formSpeciesIdTable = sZacianFormSpeciesIdTable,
        .formChangeTable = sZacianFormChangeTable,
    },

    [SPECIES_ZACIAN_CROWNED] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 150 : 170,
        .baseDefense   = 115,
        .baseSpeed     = 148,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_STEEL),
        .catchRate = 10,
        .expYield = 360,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INTREPID_SWORD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Zacian"),
        .cryId = CRY_ZACIAN_CROWNED,
        .natDexNum = NATIONAL_DEX_ZACIAN,
        .categoryName = _("Guerrero"),
        .height = 28,
        .weight = 3550,
        .description = COMPOUND_STRING(
            "Capaz de cortar cualquier cosa con un\n"
            "solo golpe, se hizo conocido como la\n"
            "Espada del Rey Hada, y inspiró\n"
            "asombro tanto en amigos como en enemigos."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ZacianCrowned,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zacian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZacianCrowned,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZacianCrowned,
        .shinyPalette = gMonShinyPalette_ZacianCrowned,
        .iconSprite = gMonIcon_ZacianCrowned,
        .iconPalIndex = 2,
        SHADOW(-3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Zacian)
        OVERWORLD(
            sPicTable_ZacianCrowned,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZacianCrowned,
            gShinyOverworldPalette_ZacianCrowned
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZacianLevelUpLearnset,
        .teachableLearnset = sZacianTeachableLearnset,
        .formSpeciesIdTable = sZacianFormSpeciesIdTable,
        .formChangeTable = sZacianFormChangeTable,
    },
#endif //P_FAMILY_ZACIAN

#if P_FAMILY_ZAMAZENTA
    [SPECIES_ZAMAZENTA_HERO] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 10,
        .expYield = 335,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DAUNTLESS_SHIELD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Zamazenta"),
        .cryId = CRY_ZAMAZENTA_HERO,
        .natDexNum = NATIONAL_DEX_ZAMAZENTA,
        .categoryName = _("Guerrero"),
        .height = 29,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "En tiempos pasados, trabajó junto a un\n"
            "rey del pueblo para salvar la región de\n"
            "Galar. Absorbe metal que luego utiliza\n"
            "en batalla."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ZamazentaHero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zamazenta,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZamazentaHero,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZamazentaHero,
        .shinyPalette = gMonShinyPalette_ZamazentaHero,
        .iconSprite = gMonIcon_ZamazentaHero,
        .iconPalIndex = 2,
        SHADOW(-1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Zamazenta)
        OVERWORLD(
            sPicTable_ZamazentaHero,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZamazentaHero,
            gShinyOverworldPalette_ZamazentaHero
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZamazentaLevelUpLearnset,
        .teachableLearnset = sZamazentaTeachableLearnset,
        .formSpeciesIdTable = sZamazentaFormSpeciesIdTable,
        .formChangeTable = sZamazentaFormChangeTable,
    },

    [SPECIES_ZAMAZENTA_CROWNED] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = P_UPDATED_STATS >= GEN_9 ? 140 : 145,
        .baseSpeed     = 128,
        .baseSpAttack  = 80,
        .baseSpDefense = P_UPDATED_STATS >= GEN_9 ? 140 : 145,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .catchRate = 10,
        .expYield = 360,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DAUNTLESS_SHIELD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Zamazenta"),
        .cryId = CRY_ZAMAZENTA_CROWNED,
        .natDexNum = NATIONAL_DEX_ZAMAZENTA,
        .categoryName = _("Guerrero"),
        .height = 29,
        .weight = 7850,
        .description = COMPOUND_STRING(
            "Su habilidad para desviar cualquier ataque\n"
            "le valió el título de Escudo del Maestro de\n"
            "Lucha. Era temido y respetado por todos."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ZamazentaCrowned,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zamazenta,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZamazentaCrowned,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZamazentaCrowned,
        .shinyPalette = gMonShinyPalette_ZamazentaCrowned,
        .iconSprite = gMonIcon_ZamazentaCrowned,
        .iconPalIndex = 2,
        SHADOW(0, 12, SHADOW_SIZE_L)
        FOOTPRINT(Zamazenta)
        OVERWORLD(
            sPicTable_ZamazentaCrowned,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZamazentaCrowned,
            gShinyOverworldPalette_ZamazentaCrowned
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZamazentaLevelUpLearnset,
        .teachableLearnset = sZamazentaTeachableLearnset,
        .formSpeciesIdTable = sZamazentaFormSpeciesIdTable,
        .formChangeTable = sZamazentaFormChangeTable,
    },
#endif //P_FAMILY_ZAMAZENTA

#if P_FAMILY_ETERNATUS
    [SPECIES_ETERNATUS] =
    {
        .baseHP        = 140,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 255,
        .expYield = 345,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Eternatus"),
        .cryId = CRY_ETERNATUS,
        .natDexNum = NATIONAL_DEX_ETERNATUS,
        .categoryName = _("Gigantesco"),
        .height = 200,
        .weight = 9500,
		.description = COMPOUND_STRING(
			"Se alimenta de la energía que brota\n"
			"de la tierra de Galar absorbiéndola\n"
			"por el núcleo del pecho."),
        .pokemonScale = 230,
        .pokemonOffset = 0,
        .trainerScale = 4852,
        .trainerOffset = 20,
        .frontPic = gMonFrontPic_Eternatus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Eternatus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Eternatus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Eternatus,
        .shinyPalette = gMonShinyPalette_Eternatus,
        .iconSprite = gMonIcon_Eternatus,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Eternatus)
        OVERWORLD(
            sPicTable_Eternatus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eternatus,
            gShinyOverworldPalette_Eternatus
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEternatusLevelUpLearnset,
        .teachableLearnset = sEternatusTeachableLearnset,
        .formSpeciesIdTable = sEternatusFormSpeciesIdTable,
    },

    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .baseHP        = 255,
        .baseAttack    = 115,
        .baseDefense   = 250,
        .baseSpeed     = 130,
        .baseSpAttack  = 125,
        .baseSpDefense = 250,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 255,
        .expYield = 563,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Eternatus"),
        .cryId = CRY_ETERNATUS_ETERNAMAX,
        .natDexNum = NATIONAL_DEX_ETERNATUS,
        .categoryName = _("Gigantesco"),
        .height = 1000,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Como resultado de la intromisión de Rose,\n"
            "Eternatus absorbió toda la energía en\n"
            "la región de Galar. Ahora está en un\n"
            "estado de sobrecarga de energía."),
        .pokemonScale = 230,
        .pokemonOffset = 0,
        .trainerScale = 4852,
        .trainerOffset = 20,
        .frontPic = gMonFrontPic_EternatusEternamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Eternatus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_EternatusEternamax,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EternatusEternamax,
        .shinyPalette = gMonShinyPalette_EternatusEternamax,
        .iconSprite = gMonIcon_EternatusEternamax,
        .iconPalIndex = 0,
        SHADOW(-3, 20, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Eternatus)
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEternatusLevelUpLearnset,
        .teachableLearnset = sEternatusTeachableLearnset,
        .formSpeciesIdTable = sEternatusFormSpeciesIdTable,
    },
#endif //P_FAMILY_ETERNATUS

#if P_FAMILY_KUBFU
    [SPECIES_KUBFU] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 72,
        .baseSpAttack  = 53,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 3,
        .expYield = 77,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kubfu"),
        .cryId = CRY_KUBFU,
        .natDexNum = NATIONAL_DEX_KUBFU,
        .categoryName = _("Kung-Fu"),
        .height = 6,
        .weight = 120,
		.description = COMPOUND_STRING(
			"Perfecciona su técnica mediante una\n"
			"estricta disciplina. Según la corriente\n"
			"que siga, adoptará una forma u otra al\n"
			"evolucionar."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kubfu,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Kubfu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kubfu,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kubfu,
        .shinyPalette = gMonShinyPalette_Kubfu,
        .iconSprite = gMonIcon_Kubfu,
        .iconPalIndex = 1,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Kubfu)
        OVERWORLD(
            sPicTable_Kubfu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kubfu,
            gShinyOverworldPalette_Kubfu
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKubfuLevelUpLearnset,
        .teachableLearnset = sKubfuTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DARK_SCROLL, 0, SPECIES_URSHIFU_SINGLE_STRIKE},
                                {EVO_ITEM, ITEM_SCROLL_OF_DARKNESS, SPECIES_URSHIFU_SINGLE_STRIKE},
                                {EVO_WATER_SCROLL, 0, SPECIES_URSHIFU_RAPID_STRIKE},
                                {EVO_ITEM, ITEM_SCROLL_OF_WATERS, SPECIES_URSHIFU_RAPID_STRIKE}),
    },

    [SPECIES_URSHIFU_SINGLE_STRIKE] =
    {
        .baseHP        = 100,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 97,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .catchRate = 3,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_UNSEEN_FIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_SINGLE_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Kung-Fu"),
        .height = 19,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "Es un firme creyente\n"
            "del KO de un golpe. Su estrategia es\n"
            "acercarse  y asestar un golpe\n"
            "devastador con su puño endurecido."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_UrshifuSingleStrike,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Urshifu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuSingleStrike,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_UrshifuSingleStrike,
        .shinyPalette = gMonShinyPalette_UrshifuSingleStrike,
        .iconSprite = gMonIcon_Urshifu,
        .iconPalIndex = 2,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Urshifu)
        OVERWORLD(
            sPicTable_Urshifu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Urshifu,
            gShinyOverworldPalette_Urshifu
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sUrshifuSingleStrikeLevelUpLearnset,
        .teachableLearnset = sUrshifuSingleStrikeTeachableLearnset,
        .formSpeciesIdTable = sUrshifuFormSpeciesIdTable,
        .formChangeTable = sUrshifuSingleStrikeFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_SINGLE_STRIKE_GMAX] =
    {
        .baseHP        = 100,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 97,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .catchRate = 3,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_UNSEEN_FIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_SINGLE_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Kung-Fu"),
        .height = 290,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Le llaman la encarnación de la\n"
            "ira. Se dice que la expresión y el grito\n"
            "aterradores de este Pokémon eliminarán\n"
            "la maldad del mundo."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_UrshifuSingleStrikeGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_UrshifuSingleStrikeGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuSingleStrikeGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_UrshifuSingleStrikeGmax,
        .shinyPalette = gMonShinyPalette_UrshifuSingleStrikeGmax,
        .iconSprite = gMonIcon_UrshifuSingleStrikeGmax,
        .iconPalIndex = 0,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Urshifu)
        .isLegendary = TRUE,
        .isGigantamax = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sUrshifuSingleStrikeLevelUpLearnset,
        .teachableLearnset = sUrshifuSingleStrikeTeachableLearnset,
        .formSpeciesIdTable = sUrshifuFormSpeciesIdTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_URSHIFU_RAPID_STRIKE] =
    {
        .baseHP        = 100,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 97,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_WATER),
        .catchRate = 3,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_UNSEEN_FIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_RAPID_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Kung-Fu"),
        .height = 19,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "Esta forma de Urshifu es una fuerte\n"
            "creyente en derrotar a sus enemigos\n"
            "con un aluvión de golpes. Sus ataques\n"
            "son ininterrumpidos, fluyendo el río."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_UrshifuRapidStrike,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Urshifu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuRapidStrike,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_UrshifuRapidStrike,
        .shinyPalette = gMonShinyPalette_UrshifuRapidStrike,
        .iconSprite = gMonIcon_Urshifu,
        .iconPalIndex = 2,
        SHADOW(4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Urshifu)
        OVERWORLD(
            sPicTable_Urshifu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Urshifu,
            gShinyOverworldPalette_Urshifu
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sUrshifuRapidStrikeLevelUpLearnset,
        .teachableLearnset = sUrshifuRapidStrikeTeachableLearnset,
        .formSpeciesIdTable = sUrshifuFormSpeciesIdTable,
        .formChangeTable = sUrshifuRapidStrikeFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_RAPID_STRIKE_GMAX] =
    {
        .baseHP        = 100,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 97,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_WATER),
        .catchRate = 3,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_UNSEEN_FIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_RAPID_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Kung-Fu"),
        .height = 260,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Mientras espera el momento para\n"
            "desatar su poder Gigamax, mantiene\n"
            "una postura perfecta sobre una\n"
            "pierna. No se mueve ni un ápice."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_UrshifuRapidStrikeGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_UrshifuRapidStrikeGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuRapidStrikeGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_UrshifuRapidStrikeGmax,
        .shinyPalette = gMonShinyPalette_UrshifuRapidStrikeGmax,
        .iconSprite = gMonIcon_UrshifuRapidStrikeGmax,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Urshifu)
        .isLegendary = TRUE,
        .isGigantamax = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sUrshifuRapidStrikeLevelUpLearnset,
        .teachableLearnset = sUrshifuRapidStrikeTeachableLearnset,
        .formSpeciesIdTable = sUrshifuFormSpeciesIdTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU


#if P_FAMILY_ZARUDE
    [SPECIES_ZARUDE] =
    {
        .baseHP        = 105,
        .baseAttack    = 120,
        .baseDefense   = 105,
        .baseSpeed     = 105,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DARK, TYPE_GRASS),
        .catchRate = 3,
        .expYield = 300,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Zarude"),
        .cryId = CRY_ZARUDE,
        .natDexNum = NATIONAL_DEX_ZARUDE,
        .categoryName = _("Simiestro"),
        .height = 18,
        .weight = 700,
        .description = COMPOUND_STRING(
            "Viven en manada en la selva.\n"
            "Debido a su agresividad, son muy\n"
            "temidos por otros Pokémon."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Zarude,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zarude,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Zarude,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Zarude,
        .shinyPalette = gMonShinyPalette_Zarude,
        .iconSprite = gMonIcon_Zarude,
        .iconPalIndex = 1,
        SHADOW(5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zarude)
        OVERWORLD(
            sPicTable_Zarude,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zarude,
            gShinyOverworldPalette_Zarude
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZarudeLevelUpLearnset,
        .teachableLearnset = sZarudeTeachableLearnset,
        .formSpeciesIdTable = sZarudeFormSpeciesIdTable,
    },
    [SPECIES_ZARUDE_DADA] =
    {
        .baseHP        = 105,
        .baseAttack    = 120,
        .baseDefense   = 105,
        .baseSpeed     = 105,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DARK, TYPE_GRASS),
        .catchRate = 3,
        .expYield = 300,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Zarude"),
        .cryId = CRY_ZARUDE,
        .natDexNum = NATIONAL_DEX_ZARUDE,
        .categoryName = _("Simiestro"),
        .height = 18,
        .weight = 700,
        .description = COMPOUND_STRING(
            "La fuerza especial de este Zarude\n"
            "proviene de su amor y cuidado por un\n"
            "niño humano huérfano que el Pokémon\n"
            "ha criado."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_ZarudeDada,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zarude,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZarudeDada,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZarudeDada,
        .shinyPalette = gMonShinyPalette_ZarudeDada,
        .iconSprite = gMonIcon_ZarudeDada,
        .iconPalIndex = 1,
        SHADOW(5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zarude)
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZarudeLevelUpLearnset,
        .teachableLearnset = sZarudeTeachableLearnset,
        .formSpeciesIdTable = sZarudeFormSpeciesIdTable,
    },
#endif //P_FAMILY_ZARUDE

#if P_FAMILY_REGIELEKI
    [SPECIES_REGIELEKI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 200,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 3,
        .expYield = 290,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TRANSISTOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Regieleki"),
        .cryId = CRY_REGIELEKI,
        .natDexNum = NATIONAL_DEX_REGIELEKI,
        .categoryName = _("Electrón"),
        .height = 12,
        .weight = 1450,
		.description = COMPOUND_STRING(
			"Su cuerpo entero es energía eléctrica.\n"
			"Por lo visto, quitarle los anillos que\n"
			"lleva libera su poder oculto."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Regieleki,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Regieleki,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Regieleki,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Regieleki,
        .shinyPalette = gMonShinyPalette_Regieleki,
        .iconSprite = gMonIcon_Regieleki,
        .iconPalIndex = 0,
        SHADOW(-3, 14, SHADOW_SIZE_S)
        FOOTPRINT(Regieleki)
        OVERWORLD(
            sPicTable_Regieleki,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Regieleki,
            gShinyOverworldPalette_Regieleki
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegielekiLevelUpLearnset,
        .teachableLearnset = sRegielekiTeachableLearnset,
    },
#endif //P_FAMILY_REGIELEKI

#if P_FAMILY_REGIDRAGO
    [SPECIES_REGIDRAGO] =
    {
        .baseHP        = 200,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 3,
        .expYield = 290,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DRAGONS_MAW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Regidrago"),
        .cryId = CRY_REGIDRAGO,
        .natDexNum = NATIONAL_DEX_REGIDRAGO,
        .categoryName = _("Dragosfera"),
        .height = 21,
        .weight = 2000,
		.description = COMPOUND_STRING(
			"Todo su cuerpo es una gema de energía\n"
			"dragón cristalizada. Se cree que posee\n"
			"los poderes de todos los Pokémon dragón."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Regidrago,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Regidrago,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Regidrago,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Regidrago,
        .shinyPalette = gMonShinyPalette_Regidrago,
        .iconSprite = gMonIcon_Regidrago,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Regidrago)
        OVERWORLD(
            sPicTable_Regidrago,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Regidrago,
            gShinyOverworldPalette_Regidrago
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegidragoLevelUpLearnset,
        .teachableLearnset = sRegidragoTeachableLearnset,
    },
#endif //P_FAMILY_REGIDRAGO

#if P_FAMILY_GLASTRIER
    [SPECIES_GLASTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 3,
        .expYield = 290,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CHILLING_NEIGH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Glastrier"),
        .cryId = CRY_GLASTRIER,
        .natDexNum = NATIONAL_DEX_GLASTRIER,
        .categoryName = _("Corcel feroz"),
        .height = 22,
        .weight = 8000,
		.description = COMPOUND_STRING(
			"Libera un potente vaho gélido por las\n"
			"pezuñas. Un ser violento que no duda en\n"
			"tomar a la fuerza todo cuanto desea."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Glastrier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Glastrier,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Glastrier,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Glastrier,
        .shinyPalette = gMonShinyPalette_Glastrier,
        .iconSprite = gMonIcon_Glastrier,
        .iconPalIndex = 0,
        SHADOW(-5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Glastrier)
        OVERWORLD(
            sPicTable_Glastrier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Glastrier,
            gShinyOverworldPalette_Glastrier
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGlastrierLevelUpLearnset,
        .teachableLearnset = sGlastrierTeachableLearnset,
    },
#endif //P_FAMILY_GLASTRIER

#if P_FAMILY_SPECTRIER
    [SPECIES_SPECTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GRIM_NEIGH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Spectrier"),
        .cryId = CRY_SPECTRIER,
        .natDexNum = NATIONAL_DEX_SPECTRIER,
        .categoryName = _("Corcel veloz"),
        .height = 20,
        .weight = 445,
		.description = COMPOUND_STRING(
			"Examina su entorno con todos los sentidos,\n"
			"salvo la vista. Se dice que sus coces son\n"
			"capaces de robarle el alma a quien\n"
			"las recibe."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Spectrier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Spectrier,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Spectrier,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Spectrier,
        .shinyPalette = gMonShinyPalette_Spectrier,
        .iconSprite = gMonIcon_Spectrier,
        .iconPalIndex = 0,
        SHADOW(-6, 12, SHADOW_SIZE_L)
        FOOTPRINT(Spectrier)
        OVERWORLD(
            sPicTable_Spectrier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spectrier,
            gShinyOverworldPalette_Spectrier
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sSpectrierLevelUpLearnset,
        .teachableLearnset = sSpectrierTeachableLearnset,
    },
#endif //P_FAMILY_SPECTRIER

#if P_FAMILY_CALYREX
    [SPECIES_CALYREX] =
    {
        .baseHP        = 100,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GRASS),
        .catchRate = 3,
        .expYield = 250,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_UNNERVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Calyrex"),
        .cryId = CRY_CALYREX,
        .natDexNum = NATIONAL_DEX_CALYREX,
        .categoryName = _("Rey"),
        .height = 11,
        .weight = 77,
		.description = COMPOUND_STRING(
			"Un Pokémon muy compasivo agraciado\n"
			"con el poder de la curación. Reinó\n"
			"en Galar en tiempos remotos."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Calyrex,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Calyrex,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Calyrex,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Calyrex,
        .shinyPalette = gMonShinyPalette_Calyrex,
        .iconSprite = gMonIcon_Calyrex,
        .iconPalIndex = 0,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Calyrex)
        OVERWORLD(
            sPicTable_Calyrex,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Calyrex,
            gShinyOverworldPalette_Calyrex
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCalyrexLevelUpLearnset,
        .teachableLearnset = sCalyrexTeachableLearnset,
        .formSpeciesIdTable = sCalyrexFormSpeciesIdTable,
    },

#if P_FUSION_FORMS
    [SPECIES_CALYREX_ICE] =
    {
        .baseHP        = 100,
        .baseAttack    = 165,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 85,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_ICE),
        .catchRate = 3,
        .expYield = 340,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AS_ONE_ICE_RIDER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Calyrex"),
        .cryId = CRY_CALYREX_ICE,
        .natDexNum = NATIONAL_DEX_CALYREX,
        .categoryName = _("Emperador"),
        .height = 24,
        .weight = 8091,
        .description = COMPOUND_STRING(
            "Según la leyenda, este Pokémon no\n"
            "mostraba piedad a los que se cruzaban\n"
            "ien su camino, pero curaba las\n"
            "heridas de sus rivales tras la batalla."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalyrexIce,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Calyrex,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalyrexIce,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalyrexIce,
        .shinyPalette = gMonShinyPalette_CalyrexIce,
        .iconSprite = gMonIcon_CalyrexIce,
        .iconPalIndex = 0,
        SHADOW(-5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Calyrex)
        OVERWORLD(
            sPicTable_CalyrexIce,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_CalyrexIce,
            gShinyOverworldPalette_CalyrexIce
        )
        .isLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCalyrexIceLevelUpLearnset,
        .teachableLearnset = sCalyrexIceTeachableLearnset,
        .formSpeciesIdTable = sCalyrexFormSpeciesIdTable,
    },

    [SPECIES_CALYREX_SHADOW] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 150,
        .baseSpAttack  = 165,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GHOST),
        .catchRate = 3,
        .expYield = 340,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AS_ONE_SHADOW_RIDER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Calyrex"),
        .cryId = CRY_CALYREX_SHADOW,
        .natDexNum = NATIONAL_DEX_CALYREX,
        .categoryName = _("Emperador"),
        .height = 24,
        .weight = 536,
        .description = COMPOUND_STRING(
            "Se dice que Calyrex y un\n"
            "Pokémon con el que se había vinculado\n"
            "corrieron por toda la región de Galar\n"
            "para llevar verdor a los páramos."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalyrexShadow,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Calyrex,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalyrexShadow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalyrexShadow,
        .shinyPalette = gMonShinyPalette_CalyrexShadow,
        .iconSprite = gMonIcon_CalyrexShadow,
        .iconPalIndex = 0,
        SHADOW(-5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Calyrex)
        OVERWORLD(
            sPicTable_CalyrexShadow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_CalyrexShadow,
            gShinyOverworldPalette_CalyrexShadow
        )
        .isLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCalyrexShadowLevelUpLearnset,
        .teachableLearnset = sCalyrexShadowTeachableLearnset,
        .formSpeciesIdTable = sCalyrexFormSpeciesIdTable,
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_CALYREX

#if P_FAMILY_ENAMORUS
    [SPECIES_ENAMORUS_INCARNATE] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 106,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_FLYING),
        .catchRate = 3,
        .expYield = 116,
        .evYield_SpAttack = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_CONTRARY },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Enamorus"),
        .cryId = CRY_ENAMORUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_ENAMORUS,
        .categoryName = _("Amorodio"),
        .height = 16,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Su llegada pone fin al invierno.\n"
            "Según la leyenda, el amor de este\n"
            "Pokémon da lugar a la aparición de nueva\n"
            "vida en toda la tierra."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_EnamorusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_EnamorusIncarnate,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_EnamorusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EnamorusIncarnate,
        .shinyPalette = gMonShinyPalette_EnamorusIncarnate,
        .iconSprite = gMonIcon_EnamorusIncarnate,
        .iconPalIndex = 1,
        SHADOW(0, 17, SHADOW_SIZE_M)
        FOOTPRINT(Enamorus)
        OVERWORLD(
            sPicTable_EnamorusIncarnate,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_EnamorusIncarnate,
            gShinyOverworldPalette_EnamorusIncarnate
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEnamorusLevelUpLearnset,
        .teachableLearnset = sEnamorusTeachableLearnset,
        .formSpeciesIdTable = sEnamorusFormSpeciesIdTable,
    },

    [SPECIES_ENAMORUS_THERIAN] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 110,
        .baseSpeed     = 46,
        .baseSpAttack  = 135,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_FLYING),
        .catchRate = 3,
        .expYield = 116,
        .evYield_SpAttack = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Enamorus"),
        .cryId = CRY_ENAMORUS_THERIAN,
        .natDexNum = NATIONAL_DEX_ENAMORUS,
        .categoryName = _("Amorodio"),
        .height = 16,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Desde las nubes, desciende sobre\n"
            "aquellos que tratan cualquier forma de\n"
            "vida con falta de respeto y aplica\n"
            "castigos llenos de ira y despiadados."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_EnamorusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_EnamorusTherian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EnamorusTherian,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EnamorusTherian,
        .shinyPalette = gMonShinyPalette_EnamorusTherian,
        .iconSprite = gMonIcon_EnamorusTherian,
        .iconPalIndex = 1,
        SHADOW(2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Enamorus)
        OVERWORLD(
            sPicTable_EnamorusTherian,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_EnamorusTherian,
            gShinyOverworldPalette_EnamorusTherian
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEnamorusLevelUpLearnset,
        .teachableLearnset = sEnamorusTeachableLearnset,
        .formSpeciesIdTable = sEnamorusFormSpeciesIdTable,
    },
#endif //P_FAMILY_ENAMORUS

#ifdef __INTELLISENSE__
};
#endif
