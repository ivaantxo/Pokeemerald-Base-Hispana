#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen7[] =
{
#endif

#if P_FAMILY_ROWLET
    [SPECIES_ROWLET] =
    {
        .baseHP        = 68,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 64,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rowlet"),
        .cryId = CRY_ROWLET,
        .natDexNum = NATIONAL_DEX_ROWLET,
        .categoryName = _("Pluma hoja"),
        .height = 3,
        .weight = 15,
		.description = COMPOUND_STRING(
			"Es cauteloso, desconfiado y de\n"
			"naturaleza nocturna. Durante el día\n"
			"acumula energía mediante la fotosíntesis."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rowlet,
        .frontPicSize = MON_COORDS_SIZE(31, 37),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Rowlet,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Rowlet,
        .backPicSize = MON_COORDS_SIZE(43, 36),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Rowlet,
        .shinyPalette = gMonShinyPalette_Rowlet,
        .iconSprite = gMonIcon_Rowlet,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Rowlet)
        OVERWORLD(
            sPicTable_Rowlet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rowlet,
            gShinyOverworldPalette_Rowlet
        )
        .levelUpLearnset = sRowletLevelUpLearnset,
        .teachableLearnset = sRowletTeachableLearnset,
        .eggMoveLearnset = sRowletEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_DARTRIX}),
    },

    [SPECIES_DARTRIX] =
    {
        .baseHP        = 78,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 52,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 147,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Dartrix"),
        .cryId = CRY_DARTRIX,
        .natDexNum = NATIONAL_DEX_DARTRIX,
        .categoryName = _("Pluma filo"),
        .height = 7,
        .weight = 160,
		.description = COMPOUND_STRING(
			"Ataca a sus presas y enemigos lanzándoles\n"
			"plumas sorprendentemente afiladas.\n"
			"Acierta prácticamente siempre."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dartrix,
        .frontPicSize = MON_COORDS_SIZE(34, 47),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Dartrix,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Dartrix,
        .backPicSize = MON_COORDS_SIZE(56, 54),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Dartrix,
        .shinyPalette = gMonShinyPalette_Dartrix,
        .iconSprite = gMonIcon_Dartrix,
        .iconPalIndex = 1,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Dartrix)
        OVERWORLD(
            sPicTable_Dartrix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dartrix,
            gShinyOverworldPalette_Dartrix
        )
        .levelUpLearnset = sDartrixLevelUpLearnset,
        .teachableLearnset = sDartrixTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DECIDUEYE},
                                {EVO_NONE, 0, SPECIES_DECIDUEYE_HISUI}),
    },

    [SPECIES_DECIDUEYE] =
    {
        .baseHP        = 78,
        .baseAttack    = 107,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Decidueye"),
        .cryId = CRY_DECIDUEYE,
        .natDexNum = NATIONAL_DEX_DECIDUEYE,
        .categoryName = _("Pluma flecha"),
        .height = 16,
        .weight = 366,
		.description = COMPOUND_STRING(
			"Aunque es extremadamente cauteloso y\n"
			"calmado por naturaleza, si lo pillan por\n"
			"sorpresa, el pánico se apodera de él."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Decidueye,
        .frontPicSize = MON_COORDS_SIZE(45, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Decidueye,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Decidueye,
        .backPicSize = MON_COORDS_SIZE(46, 62),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Decidueye,
        .shinyPalette = gMonShinyPalette_Decidueye,
        .iconSprite = gMonIcon_Decidueye,
        .iconPalIndex = 1,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Decidueye)
        OVERWORLD(
            sPicTable_Decidueye,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Decidueye,
            gShinyOverworldPalette_Decidueye
        )
        .levelUpLearnset = sDecidueyeLevelUpLearnset,
        .teachableLearnset = sDecidueyeTeachableLearnset,
        .formSpeciesIdTable = sDecidueyeFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_DECIDUEYE_HISUI] =
    {
        .baseHP        = 88,
        .baseAttack    = 112,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Decidueye"),
        .cryId = CRY_DECIDUEYE,
        .natDexNum = NATIONAL_DEX_DECIDUEYE,
        .categoryName = _("Pluma flecha"),
        .height = 16,
        .weight = 370,
        .description = COMPOUND_STRING(
            "El aire almacenado dentro de los raquis\n"
            "de las plumas de Decidueye aísla\n"
            "al Pokémon contra el frío\n"
            "extremo de Hisui."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_DecidueyeHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DecidueyeHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DecidueyeHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DecidueyeHisui,
        .shinyPalette = gMonShinyPalette_DecidueyeHisui,
        .iconSprite = gMonIcon_DecidueyeHisui,
        .iconPalIndex = 0,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Decidueye)
        OVERWORLD(
            sPicTable_DecidueyeHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DecidueyeHisui,
            gShinyOverworldPalette_DecidueyeHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sDecidueyeHisuiLevelUpLearnset,
        .teachableLearnset = sDecidueyeHisuiTeachableLearnset,
        .formSpeciesIdTable = sDecidueyeFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
    [SPECIES_LITTEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 64,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Litten"),
        .cryId = CRY_LITTEN,
        .natDexNum = NATIONAL_DEX_LITTEN,
        .categoryName = _("Gato fuego"),
        .height = 4,
        .weight = 43,
		.description = COMPOUND_STRING(
			"Prende las bolas de pelo que se forman\n"
			"en su estómago tras acicalarse.\n"
			"Las llamas que escupe tienen formas\n"
			"variopintas."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Litten,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Litten,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Litten,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Litten,
        .shinyPalette = gMonShinyPalette_Litten,
        .iconSprite = gMonIcon_Litten,
        .iconPalIndex = 0,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Litten)
        OVERWORLD(
            sPicTable_Litten,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Litten,
            gShinyOverworldPalette_Litten
        )
        .levelUpLearnset = sLittenLevelUpLearnset,
        .teachableLearnset = sLittenTeachableLearnset,
        .eggMoveLearnset = sLittenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_TORRACAT}),
    },

    [SPECIES_TORRACAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 147,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Torracat"),
        .cryId = CRY_TORRACAT,
        .natDexNum = NATIONAL_DEX_TORRACAT,
        .categoryName = _("Gato fuego"),
        .height = 7,
        .weight = 250,
		.description = COMPOUND_STRING(
			"Se enorgullece de la fuerza de sus\n"
			"patas delanteras, con las que es\n"
			"capaz de doblar barras de acero de un\n"
			"solo golpe."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Torracat,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Torracat,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Torracat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Torracat,
        .shinyPalette = gMonShinyPalette_Torracat,
        .iconSprite = gMonIcon_Torracat,
        .iconPalIndex = 0,
        SHADOW(5, 7, SHADOW_SIZE_M)
        FOOTPRINT(Torracat)
        OVERWORLD(
            sPicTable_Torracat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Torracat,
            gShinyOverworldPalette_Torracat
        )
        .levelUpLearnset = sTorracatLevelUpLearnset,
        .teachableLearnset = sTorracatTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_INCINEROAR}),
    },

    [SPECIES_INCINEROAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Incineroar"),
        .cryId = CRY_INCINEROAR,
        .natDexNum = NATIONAL_DEX_INCINEROAR,
        .categoryName = _("Rudo"),
        .height = 18,
        .weight = 830,
		.description = COMPOUND_STRING(
			"Posee un carácter rudo y egoísta. Si un\n"
			"Entrenador no le cae en gracia, ignora\n"
			"sus órdenes con total impasibilidad."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Incineroar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Incineroar,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Incineroar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Incineroar,
        .shinyPalette = gMonShinyPalette_Incineroar,
        .iconSprite = gMonIcon_Incineroar,
        .iconPalIndex = 0,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Incineroar)
        OVERWORLD(
            sPicTable_Incineroar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Incineroar,
            gShinyOverworldPalette_Incineroar
        )
        .levelUpLearnset = sIncineroarLevelUpLearnset,
        .teachableLearnset = sIncineroarTeachableLearnset,
    },
#endif //P_FAMILY_LITTEN

#if P_FAMILY_POPPLIO
    [SPECIES_POPPLIO] =
    {
        .baseHP        = 50,
        .baseAttack    = 54,
        .baseDefense   = 54,
        .baseSpeed     = 40,
        .baseSpAttack  = 66,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Popplio"),
        .cryId = CRY_POPPLIO,
        .natDexNum = NATIONAL_DEX_POPPLIO,
        .categoryName = _("León marino"),
        .height = 4,
        .weight = 75,
		.description = COMPOUND_STRING(
			"Monta sobre las burbujas de agua para\n"
			"realizar grandes saltos. Su estilo de\n"
			"combate es bastante acrobático."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Popplio,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Popplio,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Popplio,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Popplio,
        .shinyPalette = gMonShinyPalette_Popplio,
        .iconSprite = gMonIcon_Popplio,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Popplio)
        OVERWORLD(
            sPicTable_Popplio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Popplio,
            gShinyOverworldPalette_Popplio
        )
        .levelUpLearnset = sPopplioLevelUpLearnset,
        .teachableLearnset = sPopplioTeachableLearnset,
        .eggMoveLearnset = sPopplioEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_BRIONNE}),
    },

    [SPECIES_BRIONNE] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 69,
        .baseSpeed     = 50,
        .baseSpAttack  = 91,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 147,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Brionne"),
        .cryId = CRY_BRIONNE,
        .natDexNum = NATIONAL_DEX_BRIONNE,
        .categoryName = _("Fama"),
        .height = 6,
        .weight = 175,
		.description = COMPOUND_STRING(
			"Un bailarín consumado. Crea globos de\n"
			"agua con los que golpea a sus rivales una\n"
			"y otra vez sin dejar de bailar."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Brionne,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Brionne,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Brionne,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Brionne,
        .shinyPalette = gMonShinyPalette_Brionne,
        .iconSprite = gMonIcon_Brionne,
        .iconPalIndex = 0,
        SHADOW(-5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Brionne)
        OVERWORLD(
            sPicTable_Brionne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Brionne,
            gShinyOverworldPalette_Brionne
        )
        .levelUpLearnset = sBrionneLevelUpLearnset,
        .teachableLearnset = sBrionneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_PRIMARINA}),
    },

    [SPECIES_PRIMARINA] =
    {
        .baseHP        = 80,
        .baseAttack    = 74,
        .baseDefense   = 74,
        .baseSpeed     = 60,
        .baseSpAttack  = 126,
        .baseSpDefense = 116,
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Primarina"),
        .cryId = CRY_PRIMARINA,
        .natDexNum = NATIONAL_DEX_PRIMARINA,
        .categoryName = _("Solista"),
        .height = 18,
        .weight = 440,
		.description = COMPOUND_STRING(
			"Primarina considera los combates como\n"
			"un escenario ideal donde abatir a su\n"
			"presa con un canto y un baile que\n"
			"derrochan elegancia."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Primarina,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Primarina,
        .frontAnimId = ANIM_SHAKE_GLOW_BLUE_SLOW,
        .backPic = gMonBackPic_Primarina,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Primarina,
        .shinyPalette = gMonShinyPalette_Primarina,
        .iconSprite = gMonIcon_Primarina,
        .iconPalIndex = 0,
        SHADOW(-6, 11, SHADOW_SIZE_L)
        FOOTPRINT(Primarina)
        OVERWORLD(
            sPicTable_Primarina,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Primarina,
            gShinyOverworldPalette_Primarina
        )
        .levelUpLearnset = sPrimarinaLevelUpLearnset,
        .teachableLearnset = sPrimarinaTeachableLearnset,
    },
#endif //P_FAMILY_POPPLIO

#if P_FAMILY_PIKIPEK
    [SPECIES_PIKIPEK] =
    {
        .baseHP        = 35,
        .baseAttack    = 75,
        .baseDefense   = 30,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 53,
        .evYield_Attack = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_PICKUP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Pikipek"),
        .cryId = CRY_PIKIPEK,
        .natDexNum = NATIONAL_DEX_PIKIPEK,
        .categoryName = _("Carpintero"),
        .height = 3,
        .weight = 12,
		.description = COMPOUND_STRING(
			"Hace agujeros en los árboles a una\n"
			"velocidad de 16 picotazos por segundo\n"
			"y los utiliza como despensa o como\n"
			"su nido."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pikipek,
        .frontPicSize = MON_COORDS_SIZE(29, 40),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Pikipek,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pikipek,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Pikipek,
        .shinyPalette = gMonShinyPalette_Pikipek,
        .iconSprite = gMonIcon_Pikipek,
        .iconPalIndex = 2,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Pikipek)
        OVERWORLD(
            sPicTable_Pikipek,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pikipek,
            gShinyOverworldPalette_Pikipek
        )
        .levelUpLearnset = sPikipekLevelUpLearnset,
        .teachableLearnset = sPikipekTeachableLearnset,
        .eggMoveLearnset = sPikipekEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_TRUMBEAK}),
    },

    [SPECIES_TRUMBEAK] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 120,
        .expYield = 124,
        .evYield_Attack = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_PICKUP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Trumbeak"),
        .cryId = CRY_TRUMBEAK,
        .natDexNum = NATIONAL_DEX_TRUMBEAK,
        .categoryName = _("Trompeta"),
        .height = 6,
        .weight = 148,
		.description = COMPOUND_STRING(
			"Almacena en su pico las semillas de las\n"
			"bayas de las que se alimenta para usarlas\n"
			"como arma contra enemigos y posibles\n"
			"presas."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trumbeak,
        .frontPicSize = MON_COORDS_SIZE(44, 53),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Trumbeak,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Trumbeak,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Trumbeak,
        .shinyPalette = gMonShinyPalette_Trumbeak,
        .iconSprite = gMonIcon_Trumbeak,
        .iconPalIndex = 0,
        SHADOW(1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Trumbeak)
        OVERWORLD(
            sPicTable_Trumbeak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Trumbeak,
            gShinyOverworldPalette_Trumbeak
        )
        .levelUpLearnset = sTrumbeakLevelUpLearnset,
        .teachableLearnset = sTrumbeakTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_TOUCANNON}),
    },

    [SPECIES_TOUCANNON] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 243 : 218,
        .evYield_Attack = 3,
        .itemRare = ITEM_RAWST_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Toucannon"),
        .cryId = CRY_TOUCANNON,
        .natDexNum = NATIONAL_DEX_TOUCANNON,
        .categoryName = _("Cañón"),
        .height = 11,
        .weight = 260,
		.description = COMPOUND_STRING(
			"Hace estallar los gases de su interior\n"
			"para disparar semillas por el pico con\n"
			"una potencia capaz de pulverizar\n"
			"rocas enormes."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toucannon,
        .frontPicSize = MON_COORDS_SIZE(59, 59),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Toucannon,
        .frontAnimId = ANIM_SHAKE_GLOW_RED_SLOW,
        .backPic = gMonBackPic_Toucannon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Toucannon,
        .shinyPalette = gMonShinyPalette_Toucannon,
        .iconSprite = gMonIcon_Toucannon,
        .iconPalIndex = 0,
        SHADOW(9, 12, SHADOW_SIZE_M)
        FOOTPRINT(Toucannon)
        OVERWORLD(
            sPicTable_Toucannon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Toucannon,
            gShinyOverworldPalette_Toucannon
        )
        .levelUpLearnset = sToucannonLevelUpLearnset,
        .teachableLearnset = sToucannonTeachableLearnset,
    },
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_YUNGOOS
    [SPECIES_YUNGOOS] =
    {
        .baseHP        = 48,
        .baseAttack    = 70,
        .baseDefense   = 30,
        .baseSpeed     = 45,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 51,
        .evYield_Attack = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STAKEOUT, ABILITY_STRONG_JAW, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Yungoos"),
        .cryId = CRY_YUNGOOS,
        .natDexNum = NATIONAL_DEX_YUNGOOS,
        .categoryName = _("Patrulla"),
        .height = 4,
        .weight = 60,
		.description = COMPOUND_STRING(
			"Sus afilados colmillos lo atraviesan todo.\n"
			"No es autóctono de Alola, sino que\n"
			"proviene de otra región."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yungoos,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Yungoos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Yungoos,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Yungoos,
        .shinyPalette = gMonShinyPalette_Yungoos,
        .iconSprite = gMonIcon_Yungoos,
        .iconPalIndex = 2,
        SHADOW(-9, 1, SHADOW_SIZE_M)
        FOOTPRINT(Yungoos)
        OVERWORLD(
            sPicTable_Yungoos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Yungoos,
            gShinyOverworldPalette_Yungoos
        )
        .levelUpLearnset = sYungoosLevelUpLearnset,
        .teachableLearnset = sYungoosTeachableLearnset,
        .eggMoveLearnset = sYungoosEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 20, SPECIES_GUMSHOOS}),
    },

    [SPECIES_GUMSHOOS] =
    {
        .baseHP        = 88,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 127,
        .expYield = 146,
        .evYield_Attack = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STAKEOUT, ABILITY_STRONG_JAW, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gumshoos"),
        .cryId = CRY_GUMSHOOS,
        .natDexNum = NATIONAL_DEX_GUMSHOOS,
        .categoryName = _("Vigilante"),
        .height = 7,
        .weight = 142,
        .description = gGumshoosPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gumshoos,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gumshoos,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Gumshoos,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gumshoos,
        .shinyPalette = gMonShinyPalette_Gumshoos,
        .iconSprite = gMonIcon_Gumshoos,
        .iconPalIndex = 2,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gumshoos)
        OVERWORLD(
            sPicTable_Gumshoos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gumshoos,
            gShinyOverworldPalette_Gumshoos
        )
        .levelUpLearnset = sGumshoosLevelUpLearnset,
        .teachableLearnset = sGumshoosTeachableLearnset,
        .formSpeciesIdTable = sGumshoosFormSpeciesIdTable,
    },

    [SPECIES_GUMSHOOS_TOTEM] =
    {
        .baseHP        = 88,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 127,
        .expYield = 146,
        .evYield_Attack = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gumshoos"),
        .cryId = CRY_GUMSHOOS,
        .natDexNum = NATIONAL_DEX_GUMSHOOS,
        .categoryName = _("Vigilante"),
        .height = 14,
        .weight = 600,
        .description = gGumshoosPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gumshoos,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gumshoos,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Gumshoos,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gumshoos,
        .shinyPalette = gMonShinyPalette_Gumshoos,
        .iconSprite = gMonIcon_Gumshoos,
        .iconPalIndex = 2,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gumshoos)
        OVERWORLD(
            sPicTable_Gumshoos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gumshoos,
            gShinyOverworldPalette_Gumshoos
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGumshoosLevelUpLearnset,
        .teachableLearnset = sGumshoosTeachableLearnset,
        .formSpeciesIdTable = sGumshoosFormSpeciesIdTable,
    },
#endif //P_FAMILY_YUNGOOS

#if P_FAMILY_GRUBBIN
    [SPECIES_GRUBBIN] =
    {
        .baseHP        = 47,
        .baseAttack    = 62,
        .baseDefense   = 45,
        .baseSpeed     = 46,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Grubbin"),
        .cryId = CRY_GRUBBIN,
        .natDexNum = NATIONAL_DEX_GRUBBIN,
        .categoryName = _("Larva"),
        .height = 4,
        .weight = 44,
		.description = COMPOUND_STRING(
			"Con sus duras mandíbulas arranca la\n"
			"corteza de los árboles y sorbe la savia.\n"
			"Suele habitar bajo tierra."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grubbin,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Grubbin,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Grubbin,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Grubbin,
        .shinyPalette = gMonShinyPalette_Grubbin,
        .iconSprite = gMonIcon_Grubbin,
        .iconPalIndex = 0,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Grubbin)
        OVERWORLD(
            sPicTable_Grubbin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Grubbin,
            gShinyOverworldPalette_Grubbin
        )
        .levelUpLearnset = sGrubbinLevelUpLearnset,
        .teachableLearnset = sGrubbinTeachableLearnset,
        .eggMoveLearnset = sGrubbinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_CHARJABUG}),
    },

    [SPECIES_CHARJABUG] =
    {
        .baseHP        = 57,
        .baseAttack    = 82,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = 140,
        .evYield_Defense = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_BATTERY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Charjabug"),
        .cryId = CRY_CHARJABUG,
        .natDexNum = NATIONAL_DEX_CHARJABUG,
        .categoryName = _("Batería"),
        .height = 5,
        .weight = 105,
		.description = COMPOUND_STRING(
			"Al hacer la digestión genera energía\n"
			"eléctrica que almacena en la bolsa que\n"
			"posee para tal efecto."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Charjabug,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Charjabug,
        .frontAnimId = ANIM_SHAKE_FLASH_YELLOW_SLOW,
        .backPic = gMonBackPic_Charjabug,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Charjabug,
        .shinyPalette = gMonShinyPalette_Charjabug,
        .iconSprite = gMonIcon_Charjabug,
        .iconPalIndex = 1,
        NO_SHADOW
        FOOTPRINT(Charjabug)
        OVERWORLD(
            sPicTable_Charjabug,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charjabug,
            gShinyOverworldPalette_Charjabug
        )
        .levelUpLearnset = sCharjabugLevelUpLearnset,
        .teachableLearnset = sCharjabugTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_VIKAVOLT},
                                {EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_VIKAVOLT},
                                {EVO_NONE, 0, SPECIES_VIKAVOLT_TOTEM}),
    },

    [SPECIES_VIKAVOLT] =
    {
        .baseHP        = 77,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 43,
        .baseSpAttack  = 145,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 225,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Vikavolt"),
        .cryId = CRY_VIKAVOLT,
        .natDexNum = NATIONAL_DEX_VIKAVOLT,
        .categoryName = _("Escarabajo"),
        .height = 15,
        .weight = 450,
        .description = gVikavoltPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vikavolt,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Vikavolt,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Vikavolt,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Vikavolt,
        .shinyPalette = gMonShinyPalette_Vikavolt,
        .iconSprite = gMonIcon_Vikavolt,
        .iconPalIndex = 0,
        SHADOW(-1, 16, SHADOW_SIZE_S)
        FOOTPRINT(Vikavolt)
        OVERWORLD(
            sPicTable_Vikavolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vikavolt,
            gShinyOverworldPalette_Vikavolt
        )
        .levelUpLearnset = sVikavoltLevelUpLearnset,
        .teachableLearnset = sVikavoltTeachableLearnset,
        .formSpeciesIdTable = sVikavoltFormSpeciesIdTable,
    },

    [SPECIES_VIKAVOLT_TOTEM] =
    {
        .baseHP        = 77,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 43,
        .baseSpAttack  = 145,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 225,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Vikavolt"),
        .cryId = CRY_VIKAVOLT,
        .natDexNum = NATIONAL_DEX_VIKAVOLT,
        .categoryName = _("Escarabajo"),
        .height = 26,
        .weight = 1475,
        .description = gVikavoltPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vikavolt,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Vikavolt,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Vikavolt,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Vikavolt,
        .shinyPalette = gMonShinyPalette_Vikavolt,
        .iconSprite = gMonIcon_Vikavolt,
        .iconPalIndex = 0,
        SHADOW(-1, 16, SHADOW_SIZE_S)
        FOOTPRINT(Vikavolt)
        OVERWORLD(
            sPicTable_Vikavolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vikavolt,
            gShinyOverworldPalette_Vikavolt
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sVikavoltLevelUpLearnset,
        .teachableLearnset = sVikavoltTeachableLearnset,
        .formSpeciesIdTable = sVikavoltFormSpeciesIdTable,
    },
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CRABRAWLER
    [SPECIES_CRABRAWLER] =
    {
        .baseHP        = 47,
        .baseAttack    = 82,
        .baseDefense   = 57,
        .baseSpeed     = 63,
        .baseSpAttack  = 42,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 225,
        .expYield = 68,
        .evYield_Attack = 1,
        .itemRare = ITEM_ASPEAR_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_IRON_FIST, ABILITY_ANGER_POINT },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Crabrawler"),
        .cryId = CRY_CRABRAWLER,
        .natDexNum = NATIONAL_DEX_CRABRAWLER,
        .categoryName = _("Púgil"),
        .height = 6,
        .weight = 70,
		.description = COMPOUND_STRING(
			"Suele perder las pinzas por usarlas\n"
			"demasiado, pero enseguida le vuelven a\n"
			"crecer. Estas tienen poca carne, pero\n"
			"es muy apreciada."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabrawler,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Crabrawler,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Crabrawler,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Crabrawler,
        .shinyPalette = gMonShinyPalette_Crabrawler,
        .iconSprite = gMonIcon_Crabrawler,
        .iconPalIndex = 2,
        SHADOW(7, 6, SHADOW_SIZE_M)
        FOOTPRINT(Crabrawler)
        OVERWORLD(
            sPicTable_Crabrawler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Crabrawler,
            gShinyOverworldPalette_Crabrawler
        )
        .levelUpLearnset = sCrabrawlerLevelUpLearnset,
        .teachableLearnset = sCrabrawlerTeachableLearnset,
        .eggMoveLearnset = sCrabrawlerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPECIFIC_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_CRABOMINABLE},
                                {EVO_ITEM, ITEM_ICE_STONE, SPECIES_CRABOMINABLE}),
    },

    [SPECIES_CRABOMINABLE] =
    {
        .baseHP        = 97,
        .baseAttack    = 132,
        .baseDefense   = 77,
        .baseSpeed     = 43,
        .baseSpAttack  = 62,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_ICE),
        .catchRate = 60,
        .expYield = 167,
        .evYield_Attack = 2,
        .itemRare = ITEM_CHERI_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_IRON_FIST, ABILITY_ANGER_POINT },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Crabominable"),
        .cryId = CRY_CRABOMINABLE,
        .natDexNum = NATIONAL_DEX_CRABOMINABLE,
        .categoryName = _("Cangrejopelo"),
        .height = 17,
        .weight = 1800,
		.description = COMPOUND_STRING(
			"Tras perderse intentando coronar una\n"
			"alta montaña, desarrolló una capa\n"
			"de pelo para protegerse del frío."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Crabominable,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Crabominable,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Crabominable,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Crabominable,
        .shinyPalette = gMonShinyPalette_Crabominable,
        .iconSprite = gMonIcon_Crabominable,
        .iconPalIndex = 2,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Crabominable)
        OVERWORLD(
            sPicTable_Crabominable,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Crabominable,
            gShinyOverworldPalette_Crabominable
        )
        .levelUpLearnset = sCrabominableLevelUpLearnset,
        .teachableLearnset = sCrabominableTeachableLearnset,
    },
#endif //P_FAMILY_CRABRAWLER

#if P_FAMILY_ORICORIO
    [SPECIES_ORICORIO_BAILE] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 93,
        .baseSpAttack  = 98,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_RED_NECTAR,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_DANCER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_BAILE,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Danza"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "Gana los corazones de sus enemigos\n"
            "con su apasionada danza y luego\n"
            "utiliza la apertura que crea para\n"
            "quemarlos con llamas ardientes."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OricorioBaile,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Oricorio,
        .frontAnimId = ANIM_CONCAVE_ARC_SMALL,
        .backPic = gMonBackPic_OricorioBaile,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OricorioBaile,
        .shinyPalette = gMonShinyPalette_OricorioBaile,
        .iconSprite = gMonIcon_OricorioBaile,
        .iconPalIndex = 0,
        SHADOW(-4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioBaile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_OricorioBaile,
            gShinyOverworldPalette_OricorioBaile
        )
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
        .formSpeciesIdTable = sOricorioFormSpeciesIdTable,
        .formChangeTable = sOricorioFormChangeTable,
    },

    [SPECIES_ORICORIO_POM_POM] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 93,
        .baseSpAttack  = 98,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_YELLOW_NECTAR,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_DANCER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_POM_POM,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Danza"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "Esta forma de Oricorio ha bebido\n"
            "nectar amarillo. Usa pasos ágiles para\n"
            "acercarse a los oponentes, y luego\n"
            "los noquea con golpes eléctricos."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OricorioPomPom,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Oricorio,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OricorioPomPom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OricorioPomPom,
        .shinyPalette = gMonShinyPalette_OricorioPomPom,
        .iconSprite = gMonIcon_OricorioPomPom,
        .iconPalIndex = 1,
        SHADOW(5, 8, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioPomPom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_OricorioPomPom,
            gShinyOverworldPalette_OricorioPomPom
        )
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
        .formSpeciesIdTable = sOricorioFormSpeciesIdTable,
        .formChangeTable = sOricorioFormChangeTable,
    },

    [SPECIES_ORICORIO_PAU] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 93,
        .baseSpAttack  = 98,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_PINK_NECTAR,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_DANCER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_PAU,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Danza"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "Esta forma de Oricorio ha bebido\n"
            "nectar rosa. Eleva su mente con\n"
            "los suaves pasos de su danza y luego\n"
            "desata su energía psíquica."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OricorioPau,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Oricorio,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OricorioPau,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OricorioPau,
        .shinyPalette = gMonShinyPalette_OricorioPau,
        .iconSprite = gMonIcon_OricorioPau,
        .iconPalIndex = 1,
        SHADOW(-3, 11, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioPau,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_OricorioPau,
            gShinyOverworldPalette_OricorioPau
        )
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
        .formSpeciesIdTable = sOricorioFormSpeciesIdTable,
        .formChangeTable = sOricorioFormChangeTable,
    },

    [SPECIES_ORICORIO_SENSU] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 93,
        .baseSpAttack  = 98,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_PURPLE_NECTAR,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_DANCER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_SENSU,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Danza"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "Encanta a sus oponentes con su\n"
            "danza refinada. Cuando bajan la\n"
            "guardia, les lanza una maldición\n"
            "que traerá su perdición."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_OricorioSensu,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Oricorio,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OricorioSensu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_OricorioSensu,
        .shinyPalette = gMonShinyPalette_OricorioSensu,
        .iconSprite = gMonIcon_OricorioSensu,
        .iconPalIndex = 0,
        SHADOW(7, 10, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioSensu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_OricorioSensu,
            gShinyOverworldPalette_OricorioSensu
        )
        .levelUpLearnset = sOricorioLevelUpLearnset,
        .teachableLearnset = sOricorioTeachableLearnset,
        .eggMoveLearnset = sOricorioEggMoveLearnset,
        .formSpeciesIdTable = sOricorioFormSpeciesIdTable,
        .formChangeTable = sOricorioFormChangeTable,
    },
#endif //P_FAMILY_ORICORIO

#if P_FAMILY_CUTIEFLY
    [SPECIES_CUTIEFLY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 84,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_BUG, TYPE_FAIRY),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Speed = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HONEY_GATHER, ABILITY_SHIELD_DUST, ABILITY_SWEET_VEIL },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cutiefly"),
        .cryId = CRY_CUTIEFLY,
        .natDexNum = NATIONAL_DEX_CUTIEFLY,
        .categoryName = _("Mosca abeja"),
        .height = 1,
        .weight = 2,
		.description = COMPOUND_STRING(
			"Se alimenta de néctar y polen. Es capaz\n"
			"de detectar los capullos que están a\n"
			"punto de abrirse."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cutiefly,
        .frontPicSize = MON_COORDS_SIZE(33, 35),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Cutiefly,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Cutiefly,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Cutiefly,
        .shinyPalette = gMonShinyPalette_Cutiefly,
        .iconSprite = gMonIcon_Cutiefly,
        .iconPalIndex = 2,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Cutiefly)
        OVERWORLD(
            sPicTable_Cutiefly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cutiefly,
            gShinyOverworldPalette_Cutiefly
        )
        .levelUpLearnset = sCutieflyLevelUpLearnset,
        .teachableLearnset = sCutieflyTeachableLearnset,
        .eggMoveLearnset = sCutieflyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_RIBOMBEE},
                                {EVO_NONE, 0, SPECIES_RIBOMBEE_TOTEM}),
    },

    [SPECIES_RIBOMBEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 60,
        .baseSpeed     = 124,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = 162,
        .evYield_Speed = 2,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HONEY_GATHER, ABILITY_SHIELD_DUST, ABILITY_SWEET_VEIL },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ribombee"),
        .cryId = CRY_RIBOMBEE,
        .natDexNum = NATIONAL_DEX_RIBOMBEE,
        .categoryName = _("Mosca abeja"),
        .height = 2,
        .weight = 5,
        .description = gRibombeePokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ribombee,
        .frontPicSize = MON_COORDS_SIZE(32, 47),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Ribombee,
        .frontAnimId = ANIM_CONVEX_DOUBLE_ARC_TWICE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Ribombee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Ribombee,
        .shinyPalette = gMonShinyPalette_Ribombee,
        .iconSprite = gMonIcon_Ribombee,
        .iconPalIndex = 2,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Ribombee)
        OVERWORLD(
            sPicTable_Ribombee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ribombee,
            gShinyOverworldPalette_Ribombee
        )
        .levelUpLearnset = sRibombeeLevelUpLearnset,
        .teachableLearnset = sRibombeeTeachableLearnset,
        .formSpeciesIdTable = sRibombeeFormSpeciesIdTable,
    },

    [SPECIES_RIBOMBEE_TOTEM] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 60,
        .baseSpeed     = 124,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = 162,
        .evYield_Speed = 2,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ribombee"),
        .cryId = CRY_RIBOMBEE,
        .natDexNum = NATIONAL_DEX_RIBOMBEE,
        .categoryName = _("Mosca abeja"),
        .height = 4,
        .weight = 20,
        .description = gRibombeePokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ribombee,
        .frontPicSize = MON_COORDS_SIZE(32, 47),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Ribombee,
        .frontAnimId = ANIM_CONVEX_DOUBLE_ARC_TWICE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Ribombee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Ribombee,
        .shinyPalette = gMonShinyPalette_Ribombee,
        .iconSprite = gMonIcon_Ribombee,
        .iconPalIndex = 2,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Ribombee)
        OVERWORLD(
            sPicTable_Ribombee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ribombee,
            gShinyOverworldPalette_Ribombee
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRibombeeLevelUpLearnset,
        .teachableLearnset = sRibombeeTeachableLearnset,
        .formSpeciesIdTable = sRibombeeFormSpeciesIdTable,
    },
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_ROCKRUFF
    [SPECIES_ROCKRUFF] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 190,
        .expYield = 56,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_VITAL_SPIRIT, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rockruff"),
        .cryId = CRY_ROCKRUFF,
        .natDexNum = NATIONAL_DEX_ROCKRUFF,
        .categoryName = _("Perrito"),
        .height = 5,
        .weight = 92,
        .description = gRockruffPokedexText,
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rockruff,
        .frontPicSize = MON_COORDS_SIZE(37, 39),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Rockruff,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rockruff,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Rockruff,
        .shinyPalette = gMonShinyPalette_Rockruff,
        .iconSprite = gMonIcon_Rockruff,
        .iconPalIndex = 2,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Rockruff)
        OVERWORLD(
            sPicTable_Rockruff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rockruff,
            gShinyOverworldPalette_Rockruff
        )
        .levelUpLearnset = sRockruffLevelUpLearnset,
        .teachableLearnset = sRockruffTeachableLearnset,
        .eggMoveLearnset = sRockruffEggMoveLearnset,
        .formSpeciesIdTable = sRockruffFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 25, SPECIES_LYCANROC_MIDDAY},
                                {EVO_LEVEL_NIGHT, 25, SPECIES_LYCANROC_MIDNIGHT}),
    },

    [SPECIES_ROCKRUFF_OWN_TEMPO] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 190,
        .expYield = 56,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rockruff"),
        .cryId = CRY_ROCKRUFF,
        .natDexNum = NATIONAL_DEX_ROCKRUFF,
        .categoryName = _("Perrito"),
        .height = 5,
        .weight = 92,
        .description = gRockruffPokedexText,
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rockruff,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Rockruff,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rockruff,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Rockruff,
        .shinyPalette = gMonShinyPalette_Rockruff,
        .iconSprite = gMonIcon_Rockruff,
        .iconPalIndex = 2,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Rockruff)
        OVERWORLD(
            sPicTable_Rockruff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rockruff,
            gShinyOverworldPalette_Rockruff
        )
        .levelUpLearnset = sRockruffLevelUpLearnset,
        .teachableLearnset = sRockruffTeachableLearnset,
        .eggMoveLearnset = sRockruffEggMoveLearnset,
        .formSpeciesIdTable = sRockruffFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL_DUSK, 25, SPECIES_LYCANROC_DUSK}),
    },

    [SPECIES_LYCANROC_MIDDAY] =
{
    .baseHP        = 75,
    .baseAttack    = 115,
    .baseDefense   = 65,
    .baseSpeed     = 112,
    .baseSpAttack  = 55,
    .baseSpDefense = 65,
    .types = MON_TYPES(TYPE_ROCK),
    .catchRate = 90,
    .expYield = 170,
    .evYield_Attack = 2,
    .genderRatio = PERCENT_FEMALE(50),
    .eggCycles = 15,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    .abilities = { ABILITY_KEEN_EYE, ABILITY_SAND_RUSH, ABILITY_STEADFAST },
    .bodyColor = BODY_COLOR_BROWN,
    .speciesName = _("Lycanroc"),
    .cryId = CRY_LYCANROC_MIDDAY,
    .natDexNum = NATIONAL_DEX_LYCANROC,
    .categoryName = _("Lobo"),
    .height = 8,
    .weight = 250,
    .description = COMPOUND_STRING(
        "Tiene un comportamiento tranquilo y\n"
        "sereno. Se acerca rápidamente a su presa,\n"
        "y luego la corta con las rocas de su\n"
        "manga."),
    .pokemonScale = 366,
    .pokemonOffset = 7,
    .trainerScale = 257,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_LycanrocMidday,
    .frontPicSize = MON_COORDS_SIZE(57, 53),
    .frontPicYOffset = 5,
    .frontAnimFrames = sAnims_LycanrocMidday,
    .frontAnimId = ANIM_V_SHAKE,
    .backPic = gMonBackPic_LycanrocMidday,
    .backPicSize = MON_COORDS_SIZE(64, 56),
    .backPicYOffset = 7,
    .backAnimId = BACK_ANIM_V_SHAKE,
    .palette = gMonPalette_LycanrocMidday,
    .shinyPalette = gMonShinyPalette_LycanrocMidday,
    .iconSprite = gMonIcon_LycanrocMidday,
    .iconPalIndex = 2,
        SHADOW(5, 7, SHADOW_SIZE_L)
    FOOTPRINT(Lycanroc)
    OVERWORLD(
        sPicTable_LycanrocMidday,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_LycanrocMidday,
        gShinyOverworldPalette_LycanrocMidday
    )
    .levelUpLearnset = sLycanrocMiddayLevelUpLearnset,
    .teachableLearnset = sLycanrocMiddayTeachableLearnset,
    .formSpeciesIdTable = sLycanrocFormSpeciesIdTable,
},

[SPECIES_LYCANROC_MIDNIGHT] =
{
    .baseHP        = 85,
    .baseAttack    = 115,
    .baseDefense   = 75,
    .baseSpeed     = 82,
    .baseSpAttack  = 55,
    .baseSpDefense = 75,
    .types = MON_TYPES(TYPE_ROCK),
    .catchRate = 90,
    .expYield = 170,
    .evYield_Attack = 2,
    .genderRatio = PERCENT_FEMALE(50),
    .eggCycles = 15,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    .abilities = { ABILITY_KEEN_EYE, ABILITY_VITAL_SPIRIT, ABILITY_NO_GUARD },
    .bodyColor = BODY_COLOR_RED,
    .speciesName = _("Lycanroc"),
    .cryId = CRY_LYCANROC_MIDNIGHT,
    .natDexNum = NATIONAL_DEX_LYCANROC,
    .categoryName = _("Lobo"),
    .height = 11,
    .weight = 250,
    .description = COMPOUND_STRING(
        "Este Pokémon usa su melena rocosa\n"
        "para cortar a cualquiera que se acerque.\n"
        "Incluso desobedecerá a su Entrenador si no\n"
        "le gustan las órdenes que recibe."),
    .pokemonScale = 366,
    .pokemonOffset = 7,
    .trainerScale = 257,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_LycanrocMidnight,
    .frontPicSize = MON_COORDS_SIZE(56, 61),
    .frontPicYOffset = 0,
    .frontAnimFrames = sAnims_LycanrocMidnight,
    .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
    .backPic = gMonBackPic_LycanrocMidnight,
    .backPicSize = MON_COORDS_SIZE(64, 56),
    .backPicYOffset = 7,
    .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    .palette = gMonPalette_LycanrocMidnight,
    .shinyPalette = gMonShinyPalette_LycanrocMidnight,
    .iconSprite = gMonIcon_LycanrocMidnight,
    .iconPalIndex = 0,
        SHADOW(5, 13, SHADOW_SIZE_L)
    FOOTPRINT(Lycanroc)
    OVERWORLD(
        sPicTable_LycanrocMidnight,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_LycanrocMidnight,
        gShinyOverworldPalette_LycanrocMidnight
    )
    .levelUpLearnset = sLycanrocMidnightLevelUpLearnset,
    .teachableLearnset = sLycanrocMidnightTeachableLearnset,
    .formSpeciesIdTable = sLycanrocFormSpeciesIdTable,
},

[SPECIES_LYCANROC_DUSK] =
{
    .baseHP        = 75,
    .baseAttack    = 117,
    .baseDefense   = 65,
    .baseSpeed     = 110,
    .baseSpAttack  = 55,
    .baseSpDefense = 65,
    .types = MON_TYPES(TYPE_ROCK),
    .catchRate = 90,
    .expYield = 170,
    .evYield_Attack = 2,
    .genderRatio = PERCENT_FEMALE(50),
    .eggCycles = 15,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_NONE, ABILITY_NONE },
    .bodyColor = BODY_COLOR_BROWN,
    .speciesName = _("Lycanroc"),
    .cryId = CRY_LYCANROC_DUSK,
    .natDexNum = NATIONAL_DEX_LYCANROC,
    .categoryName = _("Lobo"),
    .height = 8,
    .weight = 250,
    .description = COMPOUND_STRING(
        "Estos Pokémon tienen cualidades tanto\n"
        "tranquilas como feroces. Se dice que\n"
        "esta forma de Lycanroc es la más\n"
        "problemática de criar."),
    .pokemonScale = 366,
    .pokemonOffset = 7,
    .trainerScale = 257,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_LycanrocDusk,
    .frontPicSize = MON_COORDS_SIZE(57, 58),
    .frontPicYOffset = 6,
    .frontAnimFrames = sAnims_LycanrocDusk,
    .frontAnimId = ANIM_V_SHAKE,
    .backPic = gMonBackPic_LycanrocDusk,
    .backPicSize = MON_COORDS_SIZE(64, 56),
    .backPicYOffset = 6,
    .backAnimId = BACK_ANIM_V_SHAKE,
    .palette = gMonPalette_LycanrocDusk,
    .shinyPalette = gMonShinyPalette_LycanrocDusk,
    .iconSprite = gMonIcon_LycanrocDusk,
    .iconPalIndex = 0,
        SHADOW(5, 7, SHADOW_SIZE_L)
    FOOTPRINT(Lycanroc)
    OVERWORLD(
        sPicTable_LycanrocDusk,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_LycanrocDusk,
        gShinyOverworldPalette_LycanrocDusk
    )
    .levelUpLearnset = sLycanrocDuskLevelUpLearnset,
    .teachableLearnset = sLycanrocDuskTeachableLearnset,
    .formSpeciesIdTable = sLycanrocFormSpeciesIdTable,
},
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_WISHIWASHI
    [SPECIES_WISHIWASHI_SOLO] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 40,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = 61,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SCHOOLING, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wishiwashi"),
        .cryId = CRY_WISHIWASHI_SOLO,
        .natDexNum = NATIONAL_DEX_WISHIWASHI,
        .categoryName = _("Pececillo"),
        .height = 2,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Individualmente, son increíblemente\n"
"débiles. Es al reunirse en\n"
"cardúmenes que pueden enfrentarse\n"
"a sus oponentes."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WishiwashiSolo,
        .frontPicSize = MON_COORDS_SIZE(40, 24),
        .frontPicYOffset = 20,
        .frontAnimFrames = sAnims_WishiwashiSolo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_WishiwashiSolo,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WishiwashiSolo,
        .shinyPalette = gMonShinyPalette_WishiwashiSolo,
        .iconSprite = gMonIcon_WishiwashiSolo,
        .iconPalIndex = 2,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Wishiwashi)
        OVERWORLD(
            sPicTable_WishiwashiSolo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WishiwashiSolo,
            gShinyOverworldPalette_WishiwashiSolo
        )
        .levelUpLearnset = sWishiwashiLevelUpLearnset,
        .teachableLearnset = sWishiwashiTeachableLearnset,
        .eggMoveLearnset = sWishiwashiEggMoveLearnset,
        .formSpeciesIdTable = sWishiwashiFormSpeciesIdTable,
        .formChangeTable = sWishiwashiFormChangeTable,
    },

    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .baseHP        = 45,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 30,
        .baseSpAttack  = 140,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = 217,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SCHOOLING, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wishiwashi"),
        .cryId = CRY_WISHIWASHI_SCHOOL,
        .natDexNum = NATIONAL_DEX_WISHIWASHI,
        .categoryName = _("Pececillo"),
        .height = 82,
        .weight = 786,
        .description = COMPOUND_STRING(
            "Cuando se enfrentan a oponentes difíciles, se\n"
            "colocan en formación. Pero si resultan\n"
            "heridos en combate, se dispersan\n"
            "y vuelven a volverse solitarios."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WishiwashiSchool,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_WishiwashiSchool,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE, //Todo
        .backPic = gMonBackPic_WishiwashiSchool,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WishiwashiSchool,
        .shinyPalette = gMonShinyPalette_WishiwashiSchool,
        .iconSprite = gMonIcon_WishiwashiSchool,
        .iconPalIndex = 0,
        SHADOW(-4, 7, SHADOW_SIZE_L)
        FOOTPRINT(Wishiwashi)
        .levelUpLearnset = sWishiwashiLevelUpLearnset,
        .teachableLearnset = sWishiwashiTeachableLearnset,
        .eggMoveLearnset = sWishiwashiEggMoveLearnset,
        .formSpeciesIdTable = sWishiwashiFormSpeciesIdTable,
        .formChangeTable = sWishiwashiFormChangeTable,
    },
#endif //P_FAMILY_WISHIWASHI

#if P_FAMILY_MAREANIE
    [SPECIES_MAREANIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 45,
        .baseSpAttack  = 43,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_POISON, TYPE_WATER),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MERCILESS, ABILITY_LIMBER, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mareanie"),
        .cryId = CRY_MAREANIE,
        .natDexNum = NATIONAL_DEX_MAREANIE,
        .categoryName = _("Estrellatroz"),
        .height = 4,
        .weight = 80,
		.description = COMPOUND_STRING(
			"Salvo la cabeza, cualquier parte del\n"
			"cuerpo que le arranquen es capaz de\n"
			"regenerarse en tan solo una noche de\n"
			"descanso."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mareanie,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Mareanie,
        .frontAnimId = ANIM_GLOW_PURPLE,
        .backPic = gMonBackPic_Mareanie,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Mareanie,
        .shinyPalette = gMonShinyPalette_Mareanie,
        .iconSprite = gMonIcon_Mareanie,
        .iconPalIndex = 2,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Mareanie)
        OVERWORLD(
            sPicTable_Mareanie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mareanie,
            gShinyOverworldPalette_Mareanie
        )
        .levelUpLearnset = sMareanieLevelUpLearnset,
        .teachableLearnset = sMareanieTeachableLearnset,
        .eggMoveLearnset = sMareanieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_TOXAPEX}),
    },

    [SPECIES_TOXAPEX] =
    {
        .baseHP        = 50,
        .baseAttack    = 63,
        .baseDefense   = 152,
        .baseSpeed     = 35,
        .baseSpAttack  = 53,
        .baseSpDefense = 142,
        .types = MON_TYPES(TYPE_POISON, TYPE_WATER),
        .catchRate = 75,
        .expYield = 173,
        .evYield_Defense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MERCILESS, ABILITY_LIMBER, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Toxapex"),
        .cryId = CRY_TOXAPEX,
        .natDexNum = NATIONAL_DEX_TOXAPEX,
        .categoryName = _("Estrellatroz"),
        .height = 7,
        .weight = 145,
		.description = COMPOUND_STRING(
			"Se arrastra por el lecho marino con\n"
			"sus doce extremidades. Deja siempre\n"
			"una estela de restos de Corsola por\n"
			"donde pasa."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toxapex,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Toxapex,
        .frontAnimId = ANIM_SHAKE_GLOW_PURPLE_SLOW,
        .backPic = gMonBackPic_Toxapex,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Toxapex,
        .shinyPalette = gMonShinyPalette_Toxapex,
        .iconSprite = gMonIcon_Toxapex,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Toxapex)
        OVERWORLD(
            sPicTable_Toxapex,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Toxapex,
            gShinyOverworldPalette_Toxapex
        )
        .levelUpLearnset = sToxapexLevelUpLearnset,
        .teachableLearnset = sToxapexTeachableLearnset,
    },
#endif //P_FAMILY_MAREANIE

#if P_FAMILY_MUDBRAY
    [SPECIES_MUDBRAY] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 190,
        .expYield = 77,
        .evYield_Attack = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_STAMINA, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mudbray"),
        .cryId = CRY_MUDBRAY,
        .natDexNum = NATIONAL_DEX_MUDBRAY,
        .categoryName = _("Asno"),
        .height = 10,
        .weight = 1100,
		.description = COMPOUND_STRING(
			"El lodo que impregna sus patas le otorga\n"
			"una fuerte tracción, lo que le permite\n"
			"alcanzar altas velocidades al correr."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mudbray,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Mudbray,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Mudbray,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Mudbray,
        .shinyPalette = gMonShinyPalette_Mudbray,
        .iconSprite = gMonIcon_Mudbray,
        .iconPalIndex = 2,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Mudbray)
        OVERWORLD(
            sPicTable_Mudbray,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mudbray,
            gShinyOverworldPalette_Mudbray
        )
        .levelUpLearnset = sMudbrayLevelUpLearnset,
        .teachableLearnset = sMudbrayTeachableLearnset,
        .eggMoveLearnset = sMudbrayEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MUDSDALE}),
    },

    [SPECIES_MUDSDALE] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 55,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_STAMINA, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mudsdale"),
        .cryId = CRY_MUDSDALE,
        .natDexNum = NATIONAL_DEX_MUDSDALE,
        .categoryName = _("Caballo tiro"),
        .height = 25,
        .weight = 9200,
		.description = COMPOUND_STRING(
			"Su especialidad son los ataques a\n"
			"base de patadas con lodo endurecido,\n"
			"con las que puede reducir a chatarra un\n"
			"camión de gran tamaño."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Mudsdale,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Mudsdale,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Mudsdale,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Mudsdale,
        .shinyPalette = gMonShinyPalette_Mudsdale,
        .iconSprite = gMonIcon_Mudsdale,
        .iconPalIndex = 0,
        SHADOW(4, 13, SHADOW_SIZE_L)
        FOOTPRINT(Mudsdale)
        OVERWORLD(
            sPicTable_Mudsdale,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mudsdale,
            gShinyOverworldPalette_Mudsdale
        )
        .levelUpLearnset = sMudsdaleLevelUpLearnset,
        .teachableLearnset = sMudsdaleTeachableLearnset,
    },
#endif //P_FAMILY_MUDBRAY

#if P_FAMILY_DEWPIDER
    [SPECIES_DEWPIDER] =
    {
        .baseHP        = 38,
        .baseAttack    = 40,
        .baseDefense   = 52,
        .baseSpeed     = 27,
        .baseSpAttack  = 40,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_WATER, TYPE_BUG),
        .catchRate = 200,
        .expYield = 54,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dewpider"),
        .cryId = CRY_DEWPIDER,
        .natDexNum = NATIONAL_DEX_DEWPIDER,
        .categoryName = _("Pompa"),
        .height = 3,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Solo puede respirar el oxígeno presente\n"
			"en el agua, por lo que utiliza una\n"
			"burbuja para respirar en tierra firme."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dewpider,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Dewpider,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Dewpider,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dewpider,
        .shinyPalette = gMonShinyPalette_Dewpider,
        .iconSprite = gMonIcon_Dewpider,
        .iconPalIndex = 0,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Dewpider)
        OVERWORLD(
            sPicTable_Dewpider,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dewpider,
            gShinyOverworldPalette_Dewpider
        )
        .levelUpLearnset = sDewpiderLevelUpLearnset,
        .teachableLearnset = sDewpiderTeachableLearnset,
        .eggMoveLearnset = sDewpiderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARAQUANID},
                                {EVO_NONE, 0, SPECIES_ARAQUANID_TOTEM}),
    },

    [SPECIES_ARAQUANID] =
    {
        .baseHP        = 68,
        .baseAttack    = 70,
        .baseDefense   = 92,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 132,
        .types = MON_TYPES(TYPE_WATER, TYPE_BUG),
        .catchRate = 100,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Araquanid"),
        .cryId = CRY_ARAQUANID,
        .natDexNum = NATIONAL_DEX_ARAQUANID,
        .categoryName = _("Pompa"),
        .height = 18,
        .weight = 820,
        .description = gAraquanidPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Araquanid,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Araquanid,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Araquanid,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Araquanid,
        .shinyPalette = gMonShinyPalette_Araquanid,
        .iconSprite = gMonIcon_Araquanid,
        .iconPalIndex = 2,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Araquanid)
        OVERWORLD(
            sPicTable_Araquanid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Araquanid,
            gShinyOverworldPalette_Araquanid
        )
        .levelUpLearnset = sAraquanidLevelUpLearnset,
        .teachableLearnset = sAraquanidTeachableLearnset,
        .formSpeciesIdTable = sAraquanidFormSpeciesIdTable,
    },

    [SPECIES_ARAQUANID_TOTEM] =
    {
        .baseHP        = 68,
        .baseAttack    = 70,
        .baseDefense   = 92,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 132,
        .types = MON_TYPES(TYPE_WATER, TYPE_BUG),
        .catchRate = 100,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Araquanid"),
        .cryId = CRY_ARAQUANID,
        .natDexNum = NATIONAL_DEX_ARAQUANID,
        .categoryName = _("Pompa"),
        .height = 31,
        .weight = 2175,
        .description = gAraquanidPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Araquanid,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Araquanid,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Araquanid,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Araquanid,
        .shinyPalette = gMonShinyPalette_Araquanid,
        .iconSprite = gMonIcon_Araquanid,
        .iconPalIndex = 2,
        SHADOW(-6, 9, SHADOW_SIZE_S)
        FOOTPRINT(Araquanid)
        OVERWORLD(
            sPicTable_Araquanid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Araquanid,
            gShinyOverworldPalette_Araquanid
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAraquanidLevelUpLearnset,
        .teachableLearnset = sAraquanidTeachableLearnset,
        .formSpeciesIdTable = sAraquanidFormSpeciesIdTable,
    },
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
    [SPECIES_FOMANTIS] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 190,
        .expYield = 50,
        .evYield_Attack = 1,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_CONTRARY },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Fomantis"),
        .cryId = CRY_FOMANTIS,
        .natDexNum = NATIONAL_DEX_FOMANTIS,
        .categoryName = _("Filo hoja"),
        .height = 3,
        .weight = 15,
		.description = COMPOUND_STRING(
			"Mientras que de día duerme\n"
			"tranquilamente a la luz del sol, al\n"
			"caer la noche busca un sitio más seguro\n"
			"para dormir."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fomantis,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Fomantis,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Fomantis,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Fomantis,
        .shinyPalette = gMonShinyPalette_Fomantis,
        .iconSprite = gMonIcon_Fomantis,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Fomantis)
        OVERWORLD(
            sPicTable_Fomantis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Fomantis,
            gShinyOverworldPalette_Fomantis
        )
        .levelUpLearnset = sFomantisLevelUpLearnset,
        .teachableLearnset = sFomantisTeachableLearnset,
        .eggMoveLearnset = sFomantisEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 34, SPECIES_LURANTIS},
                                {EVO_NONE, 0, SPECIES_LURANTIS_TOTEM}),
    },

    [SPECIES_LURANTIS] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_CONTRARY },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lurantis"),
        .cryId = CRY_LURANTIS,
        .natDexNum = NATIONAL_DEX_LURANTIS,
        .categoryName = _("Filo flor"),
        .height = 9,
        .weight = 185,
        .description = gLurantisPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lurantis,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lurantis,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Lurantis,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Lurantis,
        .shinyPalette = gMonShinyPalette_Lurantis,
        .iconSprite = gMonIcon_Lurantis,
        .iconPalIndex = 1,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Lurantis)
        OVERWORLD(
            sPicTable_Lurantis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lurantis,
            gShinyOverworldPalette_Lurantis
        )
        .levelUpLearnset = sLurantisLevelUpLearnset,
        .teachableLearnset = sLurantisTeachableLearnset,
        .formSpeciesIdTable = sLurantisFormSpeciesIdTable,
    },

    [SPECIES_LURANTIS_TOTEM] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lurantis"),
        .cryId = CRY_LURANTIS,
        .natDexNum = NATIONAL_DEX_LURANTIS,
        .categoryName = _("Filo flor"),
        .height = 15,
        .weight = 580,
        .description = gLurantisPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lurantis,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lurantis,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Lurantis,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Lurantis,
        .shinyPalette = gMonShinyPalette_Lurantis,
        .iconSprite = gMonIcon_Lurantis,
        .iconPalIndex = 1,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Lurantis)
        OVERWORLD(
            sPicTable_Lurantis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lurantis,
            gShinyOverworldPalette_Lurantis
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLurantisLevelUpLearnset,
        .teachableLearnset = sLurantisTeachableLearnset,
        .formSpeciesIdTable = sLurantisFormSpeciesIdTable,
    },
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_MORELULL
    [SPECIES_MORELULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .catchRate = 190,
        .expYield = 57,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_EFFECT_SPORE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Morelull"),
        .cryId = CRY_MORELULL,
        .natDexNum = NATIONAL_DEX_MORELULL,
        .categoryName = _("Luminiscente"),
        .height = 2,
        .weight = 15,
		.description = COMPOUND_STRING(
			"Cuando titila, esparce esporas luminosas\n"
			"a su alrededor. Todo aquel que ve esta\n"
			"luz cae en un profundo sueño."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Morelull,
        .frontPicSize = MON_COORDS_SIZE(24, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Morelull,
        .frontAnimId = ANIM_SHAKE_FLASH_YELLOW,
        .backPic = gMonBackPic_Morelull,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Morelull,
        .shinyPalette = gMonShinyPalette_Morelull,
        .iconSprite = gMonIcon_Morelull,
        .iconPalIndex = 0,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Morelull)
        OVERWORLD(
            sPicTable_Morelull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Morelull,
            gShinyOverworldPalette_Morelull
        )
        .levelUpLearnset = sMorelullLevelUpLearnset,
        .teachableLearnset = sMorelullTeachableLearnset,
        .eggMoveLearnset = sMorelullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_SHIINOTIC}),
    },

    [SPECIES_SHIINOTIC] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = 142,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_EFFECT_SPORE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Shiinotic"),
        .cryId = CRY_SHIINOTIC,
        .natDexNum = NATIONAL_DEX_SHIINOTIC,
        .categoryName = _("Luminiscente"),
        .height = 10,
        .weight = 115,
		.description = COMPOUND_STRING(
			"Duerme a su presa y le arrebata la\n"
			"vitalidad con sus brazos. Si otro\n"
			"Shiinotic se encuentra en apuros, le\n"
			"transmite sus fuerzas."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shiinotic,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Shiinotic,
        .frontAnimId = ANIM_SHAKE_GLOW_WHITE_SLOW,
        .backPic = gMonBackPic_Shiinotic,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Shiinotic,
        .shinyPalette = gMonShinyPalette_Shiinotic,
        .iconSprite = gMonIcon_Shiinotic,
        .iconPalIndex = 1,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Shiinotic)
        OVERWORLD(
            sPicTable_Shiinotic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shiinotic,
            gShinyOverworldPalette_Shiinotic
        )
        .levelUpLearnset = sShiinoticLevelUpLearnset,
        .teachableLearnset = sShiinoticTeachableLearnset,
    },
#endif //P_FAMILY_MORELULL

#if P_FAMILY_SALANDIT
    [SPECIES_SALANDIT] =
    {
        .baseHP        = 48,
        .baseAttack    = 44,
        .baseDefense   = 40,
        .baseSpeed     = 77,
        .baseSpAttack  = 71,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_POISON, TYPE_FIRE),
        .catchRate = 120,
        .expYield = 64,
        .evYield_Speed = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CORROSION, ABILITY_NONE, ABILITY_OBLIVIOUS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Salandit"),
        .cryId = CRY_SALANDIT,
        .natDexNum = NATIONAL_DEX_SALANDIT,
        .categoryName = _("Lagartoxina"),
        .height = 6,
        .weight = 48,
		.description = COMPOUND_STRING(
			"Aturde a sus oponentes con un gas\n"
			"venenoso que produce al quemar sus\n"
			"fluidos corporales y luego se abalanza\n"
			"sobre ellos."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salandit,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Salandit,
        .frontAnimId = ANIM_GLOW_RED,
        .backPic = gMonBackPic_Salandit,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Salandit,
        .shinyPalette = gMonShinyPalette_Salandit,
        .iconSprite = gMonIcon_Salandit,
        .iconPalIndex = 2,
        SHADOW(3, 1, SHADOW_SIZE_M)
        FOOTPRINT(Salandit)
        OVERWORLD(
            sPicTable_Salandit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Salandit,
            gShinyOverworldPalette_Salandit
        )
        .levelUpLearnset = sSalanditLevelUpLearnset,
        .teachableLearnset = sSalanditTeachableLearnset,
        .eggMoveLearnset = sSalanditEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 33, SPECIES_SALAZZLE},
                                {EVO_NONE, 0, SPECIES_SALAZZLE_TOTEM}),
    },

    [SPECIES_SALAZZLE] =
    {
        .baseHP        = 68,
        .baseAttack    = 64,
        .baseDefense   = 60,
        .baseSpeed     = 117,
        .baseSpAttack  = 111,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_POISON, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Speed = 2,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CORROSION, ABILITY_NONE, ABILITY_OBLIVIOUS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Salazzle"),
        .cryId = CRY_SALAZZLE,
        .natDexNum = NATIONAL_DEX_SALAZZLE,
        .categoryName = _("Lagartoxina"),
        .height = 12,
        .weight = 222,
        .description = gSalazzlePokedexText,
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salazzle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Salazzle,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Salazzle,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Salazzle,
        .shinyPalette = gMonShinyPalette_Salazzle,
        .iconSprite = gMonIcon_Salazzle,
        .iconPalIndex = 0,
        SHADOW(-4, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Salazzle)
        OVERWORLD(
            sPicTable_Salazzle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Salazzle,
            gShinyOverworldPalette_Salazzle
        )
        .levelUpLearnset = sSalazzleLevelUpLearnset,
        .teachableLearnset = sSalazzleTeachableLearnset,
        .formSpeciesIdTable = sSalanditFormSpeciesIdTable,
    },

    [SPECIES_SALAZZLE_TOTEM] =
    {
        .baseHP        = 68,
        .baseAttack    = 64,
        .baseDefense   = 60,
        .baseSpeed     = 117,
        .baseSpAttack  = 111,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_POISON, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Speed = 2,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CORROSION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Salazzle"),
        .cryId = CRY_SALAZZLE,
        .natDexNum = NATIONAL_DEX_SALAZZLE,
        .categoryName = _("Lagartoxina"),
        .height = 21,
        .weight = 810,
        .description = gSalazzlePokedexText,
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salazzle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Salazzle,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Salazzle,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Salazzle,
        .shinyPalette = gMonShinyPalette_Salazzle,
        .iconSprite = gMonIcon_Salazzle,
        .iconPalIndex = 0,
        SHADOW(-4, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Salazzle)
        OVERWORLD(
            sPicTable_Salazzle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Salazzle,
            gShinyOverworldPalette_Salazzle
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sSalazzleLevelUpLearnset,
        .teachableLearnset = sSalazzleTeachableLearnset,
        .formSpeciesIdTable = sSalanditFormSpeciesIdTable,
    },
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_STUFFUL
    [SPECIES_STUFFUL] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .catchRate = 140,
        .expYield = 68,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLUFFY, ABILITY_KLUTZ, ABILITY_CUTE_CHARM },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Stufful"),
        .cryId = CRY_STUFFUL,
        .natDexNum = NATIONAL_DEX_STUFFUL,
        .categoryName = _("Rabieta"),
        .height = 5,
        .weight = 68,
		.description = COMPOUND_STRING(
			"Pese a su aspecto encantador, cuando\n"
			"se enoja, sus pataletas son tan feroces\n"
			"que pueden derribar hasta a un\n"
			"luchador profesional."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Stufful,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Stufful,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Stufful,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Stufful,
        .shinyPalette = gMonShinyPalette_Stufful,
        .iconSprite = gMonIcon_Stufful,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Stufful)
        OVERWORLD(
            sPicTable_Stufful,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Stufful,
            gShinyOverworldPalette_Stufful
        )
        .levelUpLearnset = sStuffulLevelUpLearnset,
        .teachableLearnset = sStuffulTeachableLearnset,
        .eggMoveLearnset = sStuffulEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_BEWEAR}),
    },

    [SPECIES_BEWEAR] =
    {
        .baseHP        = 120,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .catchRate = 70,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLUFFY, ABILITY_KLUTZ, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Bewear"),
        .cryId = CRY_BEWEAR,
        .natDexNum = NATIONAL_DEX_BEWEAR,
        .categoryName = _("Brazo Fuerte"),
        .height = 21,
        .weight = 1350,
		.description = COMPOUND_STRING(
			"Es un Pokémon muy peligroso por su\n"
			"fuerza descomunal. Normalmente se\n"
			"desaconseja penetrar en su hábitat."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Bewear,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Bewear,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Bewear,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bewear,
        .shinyPalette = gMonShinyPalette_Bewear,
        .iconSprite = gMonIcon_Bewear,
        .iconPalIndex = 0,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Bewear)
        OVERWORLD(
            sPicTable_Bewear,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bewear,
            gShinyOverworldPalette_Bewear
        )
        .levelUpLearnset = sBewearLevelUpLearnset,
        .teachableLearnset = sBewearTeachableLearnset,
    },
#endif //P_FAMILY_STUFFUL

#if P_FAMILY_BOUNSWEET
    [SPECIES_BOUNSWEET] =
    {
        .baseHP        = 42,
        .baseAttack    = 30,
        .baseDefense   = 38,
        .baseSpeed     = 32,
        .baseSpAttack  = 30,
        .baseSpDefense = 38,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 235,
        .expYield = 42,
        .evYield_HP = 1,
        .itemRare = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_OBLIVIOUS, ABILITY_SWEET_VEIL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Bounsweet"),
        .cryId = CRY_BOUNSWEET,
        .natDexNum = NATIONAL_DEX_BOUNSWEET,
        .categoryName = _("Fruto"),
        .height = 3,
        .weight = 32,
		.description = COMPOUND_STRING(
			"Atraídos por el apetitoso aroma que\n"
			"desprende su cuerpo, los Toucannon\n"
			"los engullen con avidez sin ni\n"
			"siquiera masticar."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bounsweet,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Bounsweet,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bounsweet,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bounsweet,
        .shinyPalette = gMonShinyPalette_Bounsweet,
        .iconSprite = gMonIcon_Bounsweet,
        .iconPalIndex = 1,
        SHADOW(-2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Bounsweet)
        OVERWORLD(
            sPicTable_Bounsweet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bounsweet,
            gShinyOverworldPalette_Bounsweet
        )
        .levelUpLearnset = sBounsweetLevelUpLearnset,
        .teachableLearnset = sBounsweetTeachableLearnset,
        .eggMoveLearnset = sBounsweetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_STEENEE}),
    },

    [SPECIES_STEENEE] =
    {
        .baseHP        = 52,
        .baseAttack    = 40,
        .baseDefense   = 48,
        .baseSpeed     = 62,
        .baseSpAttack  = 40,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 120,
        .expYield = 102,
        .evYield_Speed = 2,
        .itemRare = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_OBLIVIOUS, ABILITY_SWEET_VEIL },
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
        .speciesName = _("Steenee"),
        .cryId = CRY_STEENEE,
        .natDexNum = NATIONAL_DEX_STEENEE,
        .categoryName = _("Fruto"),
        .height = 7,
        .weight = 82,
		.description = COMPOUND_STRING(
			"Se desplaza dando saltos que hacen\n"
			"botar el cáliz de su cabeza. Recibir\n"
			"un golpe de sus sépalos duele bastante."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Steenee,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Steenee,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Steenee,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Steenee,
        .shinyPalette = gMonShinyPalette_Steenee,
        .iconSprite = gMonIcon_Steenee,
        .iconPalIndex = 1,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Steenee)
        OVERWORLD(
            sPicTable_Steenee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Steenee,
            gShinyOverworldPalette_Steenee
        )
        .levelUpLearnset = sSteeneeLevelUpLearnset,
        .teachableLearnset = sSteeneeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_STOMP, SPECIES_TSAREENA}),
    },

    [SPECIES_TSAREENA] =
    {
        .baseHP        = 72,
        .baseAttack    = 120,
        .baseDefense   = 98,
        .baseSpeed     = 72,
        .baseSpAttack  = 50,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 255 : 230,
        .evYield_Attack = 3,
        .itemCommon = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_QUEENLY_MAJESTY, ABILITY_SWEET_VEIL },
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
        .speciesName = _("Tsareena"),
        .cryId = CRY_TSAREENA,
        .natDexNum = NATIONAL_DEX_TSAREENA,
        .categoryName = _("Fruto"),
        .height = 12,
        .weight = 214,
		.description = COMPOUND_STRING(
			"Propina bellas patadas con elegancia.\n"
			"Una sola bastaría para dejar fuera de\n"
			"combate a un campeón de kickboxing."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tsareena,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Tsareena,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Tsareena,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Tsareena,
        .shinyPalette = gMonShinyPalette_Tsareena,
        .iconSprite = gMonIcon_Tsareena,
        .iconPalIndex = 1,
        SHADOW(1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Tsareena)
        OVERWORLD(
            sPicTable_Tsareena,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tsareena,
            gShinyOverworldPalette_Tsareena
        )
        .levelUpLearnset = sTsareenaLevelUpLearnset,
        .teachableLearnset = sTsareenaTeachableLearnset,
    },
#endif //P_FAMILY_BOUNSWEET

#if P_FAMILY_COMFEY
    [SPECIES_COMFEY] =
    {
        .baseHP        = 51,
        .baseAttack    = 52,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 82,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 60,
        .expYield = 170,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MISTY_SEED,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_TRIAGE, ABILITY_NATURAL_CURE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Comfey"),
        .cryId = CRY_COMFEY,
        .natDexNum = NATIONAL_DEX_COMFEY,
        .categoryName = _("Recogeflores"),
        .height = 1,
        .weight = 3,
		.description = COMPOUND_STRING(
			"Prende flores en su tallo, que es muy\n"
			"muy rico en nutrientes. Las flores se\n"
			"revitalizan y desprenden una agradable\n"
			"fragancia."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Comfey,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Comfey,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Comfey,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Comfey,
        .shinyPalette = gMonShinyPalette_Comfey,
        .iconSprite = gMonIcon_Comfey,
        .iconPalIndex = 1,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Comfey)
        OVERWORLD(
            sPicTable_Comfey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Comfey,
            gShinyOverworldPalette_Comfey
        )
        .levelUpLearnset = sComfeyLevelUpLearnset,
        .teachableLearnset = sComfeyTeachableLearnset,
        .eggMoveLearnset = sComfeyEggMoveLearnset,
    },
#endif //P_FAMILY_COMFEY

#if P_FAMILY_ORANGURU
    [SPECIES_ORANGURU] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_TELEPATHY, ABILITY_SYMBIOSIS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Oranguru"),
        .cryId = CRY_ORANGURU,
        .natDexNum = NATIONAL_DEX_ORANGURU,
        .categoryName = _("Sabio"),
        .height = 15,
        .weight = 760,
		.description = COMPOUND_STRING(
			"Es un Pokémon famoso por su astucia\n"
			"e ingenio. Desprecia a los Entrenadores\n"
			"novatos y prefiere a los más veteranos."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Oranguru,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Oranguru,
        .frontAnimId = ANIM_SHRINK_GROW_SLOW,
        .backPic = gMonBackPic_Oranguru,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Oranguru,
        .shinyPalette = gMonShinyPalette_Oranguru,
        .iconSprite = gMonIcon_Oranguru,
        .iconPalIndex = 0,
        SHADOW(-2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Oranguru)
        OVERWORLD(
            sPicTable_Oranguru,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Oranguru,
            gShinyOverworldPalette_Oranguru
        )
        .levelUpLearnset = sOranguruLevelUpLearnset,
        .teachableLearnset = sOranguruTeachableLearnset,
        .eggMoveLearnset = sOranguruEggMoveLearnset,
    },
#endif //P_FAMILY_ORANGURU

#if P_FAMILY_PASSIMIAN
    [SPECIES_PASSIMIAN] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RECEIVER, ABILITY_NONE, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Passimian"),
        .cryId = CRY_PASSIMIAN,
        .natDexNum = NATIONAL_DEX_PASSIMIAN,
        .categoryName = _("Cooperación"),
        .height = 20,
        .weight = 828,
		.description = COMPOUND_STRING(
			"Suele ir en grupos de unos veinte\n"
			"ejemplares. Sus miembros permanecen\n"
			"siempre unidos y nunca se abandonan\n"
			"unos a otros."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Passimian,
        .frontPicSize = MON_COORDS_SIZE(57, 60),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Passimian,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Passimian,
        .backPicSize = MON_COORDS_SIZE(51, 52),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Passimian,
        .shinyPalette = gMonShinyPalette_Passimian,
        .iconSprite = gMonIcon_Passimian,
        .iconPalIndex = 1,
        SHADOW(-4, 12, SHADOW_SIZE_L)
        FOOTPRINT(Passimian)
        OVERWORLD(
            sPicTable_Passimian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Passimian,
            gShinyOverworldPalette_Passimian
        )
        .levelUpLearnset = sPassimianLevelUpLearnset,
        .teachableLearnset = sPassimianTeachableLearnset,
        .eggMoveLearnset = sPassimianEggMoveLearnset,
    },
#endif //P_FAMILY_PASSIMIAN

#if P_FAMILY_WIMPOD
    [SPECIES_WIMPOD] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 80,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG, TYPE_WATER),
        .catchRate = 90,
        .expYield = 46,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_WIMP_OUT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Wimpod"),
        .cryId = CRY_WIMPOD,
        .natDexNum = NATIONAL_DEX_WIMPOD,
        .categoryName = _("Huidizo"),
        .height = 5,
        .weight = 120,
		.description = COMPOUND_STRING(
			"Cuando se asusta, huye despavorido\n"
			"moviendo rápidamente sus múltiples patas.\n"
			"Deja el suelo limpio y pulido allí\n"
			"por donde pasa."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wimpod,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Wimpod,
        .frontAnimId = ANIM_V_SHAKE_H_SLIDE_FAST,
        .backPic = gMonBackPic_Wimpod,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wimpod,
        .shinyPalette = gMonShinyPalette_Wimpod,
        .iconSprite = gMonIcon_Wimpod,
        .iconPalIndex = 2,
        SHADOW(-4, -3, SHADOW_SIZE_S)
        FOOTPRINT(Wimpod)
        OVERWORLD(
            sPicTable_Wimpod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wimpod,
            gShinyOverworldPalette_Wimpod
        )
        .levelUpLearnset = sWimpodLevelUpLearnset,
        .teachableLearnset = sWimpodTeachableLearnset,
        .eggMoveLearnset = sWimpodEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GOLISOPOD}),
    },

    [SPECIES_GOLISOPOD] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_BUG, TYPE_WATER),
        .catchRate = 45,
        .expYield = 186,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_EMERGENCY_EXIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Golisopod"),
        .cryId = CRY_GOLISOPOD,
        .natDexNum = NATIONAL_DEX_GOLISOPOD,
        .categoryName = _("Blindaje"),
        .height = 20,
        .weight = 1080,
		.description = COMPOUND_STRING(
			"Gracias a su destreza y sus enormes\n"
			"y afiladas garras, puede cortar hasta el\n"
			"aire y el agua de un solo tajo."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Golisopod,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Golisopod,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Golisopod,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Golisopod,
        .shinyPalette = gMonShinyPalette_Golisopod,
        .iconSprite = gMonIcon_Golisopod,
        .iconPalIndex = 2,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Golisopod)
        OVERWORLD(
            sPicTable_Golisopod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golisopod,
            gShinyOverworldPalette_Golisopod
        )
        .levelUpLearnset = sGolisopodLevelUpLearnset,
        .teachableLearnset = sGolisopodTeachableLearnset,
    },
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
    [SPECIES_SANDYGAST] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 15,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GROUND),
        .catchRate = 140,
        .expYield = 64,
        .evYield_Defense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_WATER_COMPACTION, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sandygast"),
        .cryId = CRY_SANDYGAST,
        .natDexNum = NATIONAL_DEX_SANDYGAST,
        .categoryName = _("Montearena"),
        .height = 5,
        .weight = 700,
		.description = COMPOUND_STRING(
			"Siente mucho apego por la pala de\n"
			"su cabeza. Si un niño intenta quitarsela,\n"
			"se enfurece y pelea por ella."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandygast,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sandygast,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Sandygast,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sandygast,
        .shinyPalette = gMonShinyPalette_Sandygast,
        .iconSprite = gMonIcon_Sandygast,
        .iconPalIndex = 1,
        NO_SHADOW
        FOOTPRINT(Sandygast)
        OVERWORLD(
            sPicTable_Sandygast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandygast,
            gShinyOverworldPalette_Sandygast
        )
        .levelUpLearnset = sSandygastLevelUpLearnset,
        .teachableLearnset = sSandygastTeachableLearnset,
        .eggMoveLearnset = sSandygastEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_PALOSSAND}),
    },

    [SPECIES_PALOSSAND] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 35,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GROUND),
        .catchRate = 60,
        .expYield = 168,
        .evYield_Defense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_WATER_COMPACTION, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Palossand"),
        .cryId = CRY_PALOSSAND,
        .natDexNum = NATIONAL_DEX_PALOSSAND,
        .categoryName = _("Castiarena"),
        .height = 13,
        .weight = 2500,
		.description = COMPOUND_STRING(
			"Manipulando a la gente ha conseguido\n"
			"transformarse en todo un castillo de\n"
			"arena, lo que ha aumentado su poder\n"
			"maligno."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Palossand,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Palossand,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Palossand,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Palossand,
        .shinyPalette = gMonShinyPalette_Palossand,
        .iconSprite = gMonIcon_Palossand,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Palossand)
        OVERWORLD(
            sPicTable_Palossand,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Palossand,
            gShinyOverworldPalette_Palossand
        )
        .levelUpLearnset = sPalossandLevelUpLearnset,
        .teachableLearnset = sPalossandTeachableLearnset,
    },
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_PYUKUMUKU
    [SPECIES_PYUKUMUKU] =
    {
        .baseHP        = 55,
        .baseAttack    = 60,
        .baseDefense   = 130,
        .baseSpeed     = 5,
        .baseSpAttack  = 30,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = 144,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_INNARDS_OUT, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Pyukumuku"),
        .cryId = CRY_PYUKUMUKU,
        .natDexNum = NATIONAL_DEX_PYUKUMUKU,
        .categoryName = _("Pepino mar"),
        .height = 3,
        .weight = 12,
		.description = COMPOUND_STRING(
			"Su cuerpo está recubierto de fluidos\n"
			"viscosos. Si alguien lo pisa, resbalará\n"
			"y Pyukumuku lo golpeará furioso."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pyukumuku,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Pyukumuku,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pyukumuku,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pyukumuku,
        .shinyPalette = gMonShinyPalette_Pyukumuku,
        .iconSprite = gMonIcon_Pyukumuku,
        .iconPalIndex = 0,
        SHADOW(-3, -3, SHADOW_SIZE_S)
        FOOTPRINT(Pyukumuku)
        OVERWORLD(
            sPicTable_Pyukumuku,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pyukumuku,
            gShinyOverworldPalette_Pyukumuku
        )
        .levelUpLearnset = sPyukumukuLevelUpLearnset,
        .teachableLearnset = sPyukumukuTeachableLearnset,
        .eggMoveLearnset = sPyukumukuEggMoveLearnset,
    },
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_TYPE_NULL
    [SPECIES_TYPE_NULL] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 59,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 3,
        .expYield = 107,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Código 0"),
        .cryId = CRY_TYPE_NULL,
        .natDexNum = NATIONAL_DEX_TYPE_NULL,
        .categoryName = _("Multigénico"),
        .height = 19,
        .weight = 1205,
        .description = COMPOUND_STRING(
            "Fue creado a imagen de un Pokémon\n"
            "mitológico. Lleva una máscara de\n"
            "contención para evitar que su poder\n"
            "se descontrole."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_TypeNull,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_TypeNull,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_TypeNull,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TypeNull,
        .shinyPalette = gMonShinyPalette_TypeNull,
        .iconSprite = gMonIcon_TypeNull,
        .iconPalIndex = 0,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Type_Null)
        OVERWORLD(
            sPicTable_TypeNull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TypeNull,
            gShinyOverworldPalette_TypeNull
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTypeNullLevelUpLearnset,
        .teachableLearnset = sTypeNullTeachableLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SILVALLY_NORMAL}),
    },

#define SILVALLY_SPECIES_INFO(type, _palette)                                       \
    {                                                                               \
        .baseHP        = 95,                                                        \
        .baseAttack    = 95,                                                        \
        .baseDefense   = 95,                                                        \
        .baseSpeed     = 95,                                                        \
        .baseSpAttack  = 95,                                                        \
        .baseSpDefense = 95,                                                        \
        .types = MON_TYPES(type),                                                   \
        .catchRate = 3,                                                             \
        .expYield = 257,                                                            \
        .evYield_HP = 3,                                                            \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .abilities = { ABILITY_RKS_SYSTEM, ABILITY_NONE, ABILITY_NONE },            \
        .bodyColor = BODY_COLOR_GRAY,                                               \
        .speciesName = _("Silvally"),                                               \
        .cryId = CRY_SILVALLY,                                                      \
        .natDexNum = NATIONAL_DEX_SILVALLY,                                         \
        .categoryName = _("Multigénico"),                                     \
        .height = 23,                                                               \
        .weight = 1005,                                                             \
        .description = (type == TYPE_NORMAL                                         \
            ? gSilvallyNormalPokedexText                                            \
            : gSilvallyMemoryPokedexText),                                          \
        .pokemonScale = 256,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 342,                                                        \
        .trainerOffset = 7,                                                         \
        .frontPic = gMonFrontPic_Silvally,                                          \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                    \
        .frontPicYOffset = 0,                                                       \
        .frontAnimFrames = sAnims_Silvally,                                         \
        .frontAnimId = ANIM_V_SHAKE,                                                \
        .backPic = gMonBackPic_Silvally,                                            \
        .backPicSize = MON_COORDS_SIZE(56, 64),                                     \
        .backPicYOffset = 0,                                                        \
        /*.backAnimId = BACK_ANIM_NONE,*/                                           \
        .palette = gMonPalette_Silvally##_palette,                                  \
        .shinyPalette = gMonShinyPalette_Silvally##_palette,                        \
        .iconSprite = gMonIcon_Silvally,                                            \
        .iconPalIndex = 0,                                                          \
        SHADOW(1, 13, SHADOW_SIZE_L)                                                \
        FOOTPRINT(Silvally)                                                         \
        OVERWORLD(                                                                  \
            sPicTable_Silvally,                                                     \
            SIZE_32x32,                                                             \
            SHADOW_SIZE_M,                                                          \
            TRACKS_FOOT,                                                            \
            gOverworldPalette_Silvally,                                             \
            gShinyOverworldPalette_Silvally                                         \
        )                                                                           \
        .isLegendary = TRUE,                                                        \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT, \
        .levelUpLearnset = sSilvallyLevelUpLearnset,                                \
        .teachableLearnset = sSilvallyTeachableLearnset,                            \
        .formSpeciesIdTable = sSilvallyFormSpeciesIdTable,                          \
        .formChangeTable = sSilvallyFormChangeTable,                                \
    }

    [SPECIES_SILVALLY_NORMAL]   = SILVALLY_SPECIES_INFO(TYPE_NORMAL,   Normal),
    [SPECIES_SILVALLY_FIGHTING] = SILVALLY_SPECIES_INFO(TYPE_FIGHTING, Fighting),
    [SPECIES_SILVALLY_FLYING]   = SILVALLY_SPECIES_INFO(TYPE_FLYING,   Flying),
    [SPECIES_SILVALLY_POISON]   = SILVALLY_SPECIES_INFO(TYPE_POISON,   Poison),
    [SPECIES_SILVALLY_GROUND]   = SILVALLY_SPECIES_INFO(TYPE_GROUND,   Ground),
    [SPECIES_SILVALLY_ROCK]     = SILVALLY_SPECIES_INFO(TYPE_ROCK,     Rock),
    [SPECIES_SILVALLY_BUG]      = SILVALLY_SPECIES_INFO(TYPE_BUG,      Bug),
    [SPECIES_SILVALLY_GHOST]    = SILVALLY_SPECIES_INFO(TYPE_GHOST,    Ghost),
    [SPECIES_SILVALLY_STEEL]    = SILVALLY_SPECIES_INFO(TYPE_STEEL,    Steel),
    [SPECIES_SILVALLY_FIRE]     = SILVALLY_SPECIES_INFO(TYPE_FIRE,     Fire),
    [SPECIES_SILVALLY_WATER]    = SILVALLY_SPECIES_INFO(TYPE_WATER,    Water),
    [SPECIES_SILVALLY_GRASS]    = SILVALLY_SPECIES_INFO(TYPE_GRASS,    Grass),
    [SPECIES_SILVALLY_ELECTRIC] = SILVALLY_SPECIES_INFO(TYPE_ELECTRIC, Electric),
    [SPECIES_SILVALLY_PSYCHIC]  = SILVALLY_SPECIES_INFO(TYPE_PSYCHIC,  Psychic),
    [SPECIES_SILVALLY_ICE]      = SILVALLY_SPECIES_INFO(TYPE_ICE,      Ice),
    [SPECIES_SILVALLY_DRAGON]   = SILVALLY_SPECIES_INFO(TYPE_DRAGON,   Dragon),
    [SPECIES_SILVALLY_DARK]     = SILVALLY_SPECIES_INFO(TYPE_DARK,     Dark),
    [SPECIES_SILVALLY_FAIRY]    = SILVALLY_SPECIES_INFO(TYPE_FAIRY,    Fairy),
#endif //P_FAMILY_TYPE_NULL

#if P_FAMILY_MINIOR
#define MINIOR_MISC_INFO(color)                                             \
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),                         \
        .catchRate = 30,                                                    \
        .expYield = 154,                                                    \
        .evYield_Defense = 1,                                               \
        .evYield_SpDefense = 1,                                             \
        .itemRare = ITEM_STAR_PIECE,                                        \
        .genderRatio = MON_GENDERLESS,                                      \
        .eggCycles = 25,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),                     \
        .abilities = { ABILITY_SHIELDS_DOWN, ABILITY_NONE, ABILITY_NONE },  \
        .bodyColor = color,                                                 \
        .noFlip = TRUE,                                                     \
        .speciesName = _("Minior"),                                         \
        .cryId = CRY_MINIOR,                                                \
        .natDexNum = NATIONAL_DEX_MINIOR,                                   \
        .categoryName = _("Meteoro"),                                        \
        .height = 3,                                                        \
        .pokemonScale = 530,                                                \
        .pokemonOffset = 13,                                                \
        .trainerScale = 256,                                                \
        .trainerOffset = 0,                                                 \
        FOOTPRINT(Minior)                                                   \
        .levelUpLearnset = sMiniorLevelUpLearnset,                          \
        .teachableLearnset = sMiniorTeachableLearnset,                      \
        .formSpeciesIdTable = sMiniorFormSpeciesIdTable

#define MINIOR_METEOR_SPECIES_INFO(Form)                    \
    {                                                       \
        .baseHP        = 60,                                \
        .baseAttack    = 60,                                \
        .baseDefense   = 100,                               \
        .baseSpeed     = 60,                                \
        .baseSpAttack  = 60,                                \
        .baseSpDefense = 100,                               \
        .weight = 400,                                      \
        .description = gMiniorMeteorPokedexText,            \
        .frontPic = gMonFrontPic_MiniorMeteor,              \
        .frontPicSize = MON_COORDS_SIZE(48, 40),            \
        .frontPicYOffset = 14,                              \
        .frontAnimFrames = sAnims_MiniorMeteor,             \
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,      \
        .enemyMonElevation = 17,                            \
        .backPic = gMonBackPic_MiniorMeteor,                \
        .backPicSize = MON_COORDS_SIZE(56, 40),             \
        .backPicYOffset = 14,                               \
        /*.backAnimId = BACK_ANIM_NONE,*/                   \
        .palette = gMonPalette_MiniorMeteor,                \
        .shinyPalette = gMonShinyPalette_MiniorMeteor,      \
        .iconSprite = gMonIcon_MiniorMeteor,                \
        .iconPalIndex = 0,                                  \
        SHADOW(0, 14, SHADOW_SIZE_S)                    \
        OVERWORLD(                                          \
            sPicTable_MiniorMeteor,                         \
            SIZE_32x32,                                     \
            SHADOW_SIZE_M,                                  \
            TRACKS_FOOT,                                    \
            gOverworldPalette_MiniorMeteor,                 \
            gShinyOverworldPalette_MiniorMeteor             \
        )                                                   \
        .formChangeTable = sMinior ##Form##FormChangeTable, \
        MINIOR_MISC_INFO(BODY_COLOR_BROWN),                 \
    }

#define MINIOR_CORE_SPECIES_INFO(Form, color, iconPal)          \
    {                                                           \
        .baseHP        = 60,                                    \
        .baseAttack    = 100,                                   \
        .baseDefense   = 60,                                    \
        .baseSpeed     = 120,                                   \
        .baseSpAttack  = 100,                                   \
        .baseSpDefense = 60,                                    \
        .weight = 3,                                            \
        .description = gMiniorCorePokedexText,                  \
        .frontPic = gMonFrontPic_MiniorCore,                    \
        .frontPicSize = MON_COORDS_SIZE(48, 40),                \
        .frontPicYOffset = 16,                                  \
        .frontAnimFrames = sAnims_MiniorMeteor,                 \
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,          \
        .enemyMonElevation = 17,                                \
        .backPic = gMonBackPic_MiniorCore,                      \
        .backPicSize = MON_COORDS_SIZE(56, 40),                 \
        .backPicYOffset = 15,                                   \
        /*.backAnimId = BACK_ANIM_NONE,*/                       \
        .palette = gMonPalette_MiniorCore##Form,                \
        .shinyPalette = gMonShinyPalette_MiniorCore,            \
        .iconSprite = gMonIcon_MiniorCore##Form,                \
        .iconPalIndex = iconPal,                                \
        SHADOW(-2, 12, SHADOW_SIZE_S)                       \
        .formChangeTable = sMinior ##Form##FormChangeTable,     \
        MINIOR_MISC_INFO(color),                                \
    }

    [SPECIES_MINIOR_METEOR_RED]    = MINIOR_METEOR_SPECIES_INFO(Red),
    [SPECIES_MINIOR_METEOR_ORANGE] = MINIOR_METEOR_SPECIES_INFO(Orange),
    [SPECIES_MINIOR_METEOR_YELLOW] = MINIOR_METEOR_SPECIES_INFO(Yellow),
    [SPECIES_MINIOR_METEOR_GREEN]  = MINIOR_METEOR_SPECIES_INFO(Green),
    [SPECIES_MINIOR_METEOR_BLUE]   = MINIOR_METEOR_SPECIES_INFO(Blue),
    [SPECIES_MINIOR_METEOR_INDIGO] = MINIOR_METEOR_SPECIES_INFO(Indigo),
    [SPECIES_MINIOR_METEOR_VIOLET] = MINIOR_METEOR_SPECIES_INFO(Violet),
    [SPECIES_MINIOR_CORE_RED]      = MINIOR_CORE_SPECIES_INFO(Red,    BODY_COLOR_RED,    0),
    [SPECIES_MINIOR_CORE_ORANGE]   = MINIOR_CORE_SPECIES_INFO(Orange, BODY_COLOR_RED,    0),
    [SPECIES_MINIOR_CORE_YELLOW]   = MINIOR_CORE_SPECIES_INFO(Yellow, BODY_COLOR_YELLOW, 0),
    [SPECIES_MINIOR_CORE_GREEN]    = MINIOR_CORE_SPECIES_INFO(Green,  BODY_COLOR_GREEN,  1),
    [SPECIES_MINIOR_CORE_BLUE]     = MINIOR_CORE_SPECIES_INFO(Blue,   BODY_COLOR_BLUE,   0),
    [SPECIES_MINIOR_CORE_INDIGO]   = MINIOR_CORE_SPECIES_INFO(Indigo, BODY_COLOR_BLUE,   0),
    [SPECIES_MINIOR_CORE_VIOLET]   = MINIOR_CORE_SPECIES_INFO(Violet, BODY_COLOR_PURPLE, 2),
#endif //P_FAMILY_MINIOR

#if P_FAMILY_KOMALA
    [SPECIES_KOMALA] =
    {
        .baseHP        = 65,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_COMATOSE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Komala"),
        .cryId = CRY_KOMALA,
        .natDexNum = NATIONAL_DEX_KOMALA,
        .categoryName = _("Duermevela"),
        .height = 4,
        .weight = 199,
		.description = COMPOUND_STRING(
			"Pasa la vida entera sumido en un\n"
			"profundo sueño. Toda su actividad parece\n"
			"reflejar los sueños que tiene en\n"
			"ese momento."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Komala,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Komala,
        .frontAnimId = ANIM_H_DIP,
        .backPic = gMonBackPic_Komala,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Komala,
        .shinyPalette = gMonShinyPalette_Komala,
        .iconSprite = gMonIcon_Komala,
        .iconPalIndex = 2,
        SHADOW(-4, 0, SHADOW_SIZE_S)
        FOOTPRINT(Komala)
        OVERWORLD(
            sPicTable_Komala,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Komala,
            gShinyOverworldPalette_Komala
        )
        .levelUpLearnset = sKomalaLevelUpLearnset,
        .teachableLearnset = sKomalaTeachableLearnset,
        .eggMoveLearnset = sKomalaEggMoveLearnset,
    },
#endif //P_FAMILY_KOMALA

#if P_FAMILY_TURTONATOR
    [SPECIES_TURTONATOR] =
    {
        .baseHP        = 60,
        .baseAttack    = 78,
        .baseDefense   = 135,
        .baseSpeed     = 36,
        .baseSpAttack  = 91,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .catchRate = 70,
        .expYield = 170,
        .evYield_Defense = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Turtonator"),
        .cryId = CRY_TURTONATOR,
        .natDexNum = NATIONAL_DEX_TURTONATOR,
        .categoryName = _("Tortugabomba"),
        .height = 20,
        .weight = 2120,
		.description = COMPOUND_STRING(
			"Posee un caparazón que estalla al\n"
			"contacto. El orificio que se aprecia en\n"
			"su vientre es su punto débil."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Turtonator,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Turtonator,
        .frontAnimId = ANIM_SHAKE_GLOW_RED,
        .backPic = gMonBackPic_Turtonator,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Turtonator,
        .shinyPalette = gMonShinyPalette_Turtonator,
        .iconSprite = gMonIcon_Turtonator,
        .iconPalIndex = 0,
        SHADOW(-3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Turtonator)
        OVERWORLD(
            sPicTable_Turtonator,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Turtonator,
            gShinyOverworldPalette_Turtonator
        )
        .levelUpLearnset = sTurtonatorLevelUpLearnset,
        .teachableLearnset = sTurtonatorTeachableLearnset,
        .eggMoveLearnset = sTurtonatorEggMoveLearnset,
    },
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
    [SPECIES_TOGEDEMARU] =
    {
        .baseHP        = 65,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 96,
        .baseSpAttack  = 40,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .catchRate = 180,
        .expYield = 152,
        .evYield_Attack = 2,
        .itemRare = ITEM_ELECTRIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_IRON_BARBS, ABILITY_LIGHTNING_ROD, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Togedemaru"),
        .cryId = CRY_TOGEDEMARU,
        .natDexNum = NATIONAL_DEX_TOGEDEMARU,
        .categoryName = _("Bolita"),
        .height = 3,
        .weight = 33,
        .description = gTogedemaruPokedexText,
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Togedemaru,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Togedemaru,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Togedemaru,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Togedemaru,
        .shinyPalette = gMonShinyPalette_Togedemaru,
        .iconSprite = gMonIcon_Togedemaru,
        .iconPalIndex = 2,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Togedemaru)
        OVERWORLD(
            sPicTable_Togedemaru,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Togedemaru,
            gShinyOverworldPalette_Togedemaru
        )
        .levelUpLearnset = sTogedemaruLevelUpLearnset,
        .teachableLearnset = sTogedemaruTeachableLearnset,
        .eggMoveLearnset = sTogedemaruEggMoveLearnset,
        .formSpeciesIdTable = sTogedemaruFormSpeciesIdTable,
    },

    [SPECIES_TOGEDEMARU_TOTEM] =
    {
        .baseHP        = 65,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 96,
        .baseSpAttack  = 40,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .catchRate = 180,
        .expYield = 152,
        .evYield_Attack = 2,
        .itemRare = ITEM_ELECTRIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Togedemaru"),
        .cryId = CRY_TOGEDEMARU,
        .natDexNum = NATIONAL_DEX_TOGEDEMARU,
        .categoryName = _("Bolita"),
        .height = 6,
        .weight = 130,
        .description = gTogedemaruPokedexText,
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Togedemaru,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Togedemaru,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Togedemaru,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Togedemaru,
        .shinyPalette = gMonShinyPalette_Togedemaru,
        .iconSprite = gMonIcon_Togedemaru,
        .iconPalIndex = 2,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Togedemaru)
        OVERWORLD(
            sPicTable_Togedemaru,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Togedemaru,
            gShinyOverworldPalette_Togedemaru
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTogedemaruLevelUpLearnset,
        .teachableLearnset = sTogedemaruTeachableLearnset,
        .eggMoveLearnset = sTogedemaruEggMoveLearnset,
        .formSpeciesIdTable = sTogedemaruFormSpeciesIdTable,
    },
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
    [SPECIES_MIMIKYU_DISGUISED] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 96,
        .baseSpAttack  = 50,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_CHESTO_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DISGUISE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disfraz"),
        .height = 2,
        .weight = 7,
        .description = gMimikyuDisguisedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MimikyuDisguised,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_MimikyuDisguised,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MimikyuDisguised,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MimikyuDisguised,
        .shinyPalette = gMonShinyPalette_MimikyuDisguised,
        .iconSprite = gMonIcon_MimikyuDisguised,
        .iconPalIndex = 1,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
        OVERWORLD(
            sPicTable_MimikyuDisguised,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MimikyuDisguised,
            gShinyOverworldPalette_MimikyuDisguised
        )
        .levelUpLearnset = sMimikyuLevelUpLearnset,
        .teachableLearnset = sMimikyuTeachableLearnset,
        .eggMoveLearnset = sMimikyuEggMoveLearnset,
        .formSpeciesIdTable = sMimikyuFormSpeciesIdTable,
        .formChangeTable = sMimikyuFormChangeTable,
    },

    [SPECIES_MIMIKYU_BUSTED] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 96,
        .baseSpAttack  = 50,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_CHESTO_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DISGUISE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disfraz"),
        .height = 2,
        .weight = 7,
        .description = gMimikyuBustedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MimikyuBusted,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_MimikyuBusted,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MimikyuBusted,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MimikyuBusted,
        .shinyPalette = gMonShinyPalette_MimikyuBusted,
        .iconSprite = gMonIcon_MimikyuBusted,
        .iconPalIndex = 1,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
        .levelUpLearnset = sMimikyuLevelUpLearnset,
        .teachableLearnset = sMimikyuTeachableLearnset,
        .eggMoveLearnset = sMimikyuEggMoveLearnset,
        .formSpeciesIdTable = sMimikyuFormSpeciesIdTable,
        .formChangeTable = sMimikyuFormChangeTable,
    },

    [SPECIES_MIMIKYU_TOTEM_DISGUISED] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 96,
        .baseSpAttack  = 50,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_CHESTO_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DISGUISE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disfraz"),
        .height = 24,
        .weight = 28,
        .description = gMimikyuDisguisedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MimikyuDisguised,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_MimikyuDisguised,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MimikyuDisguised,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MimikyuDisguised,
        .shinyPalette = gMonShinyPalette_MimikyuDisguised,
        .iconSprite = gMonIcon_MimikyuDisguised,
        .iconPalIndex = 1,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
        OVERWORLD(
            sPicTable_MimikyuDisguised,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MimikyuDisguised,
            gShinyOverworldPalette_MimikyuDisguised
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMimikyuLevelUpLearnset,
        .teachableLearnset = sMimikyuTeachableLearnset,
        .eggMoveLearnset = sMimikyuEggMoveLearnset,
        .formSpeciesIdTable = sMimikyuFormSpeciesIdTable,
        .formChangeTable = sMimikyuTotemFormChangeTable,
    },

    [SPECIES_MIMIKYU_BUSTED_TOTEM] =
    {
        .baseHP        = 55,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 96,
        .baseSpAttack  = 50,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 167,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_CHESTO_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DISGUISE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disfraz"),
        .height = 24,
        .weight = 28,
        .description = gMimikyuBustedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MimikyuBusted,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_MimikyuBusted,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MimikyuBusted,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MimikyuBusted,
        .shinyPalette = gMonShinyPalette_MimikyuBusted,
        .iconSprite = gMonIcon_MimikyuBusted,
        .iconPalIndex = 1,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMimikyuLevelUpLearnset,
        .teachableLearnset = sMimikyuTeachableLearnset,
        .eggMoveLearnset = sMimikyuEggMoveLearnset,
        .formSpeciesIdTable = sMimikyuFormSpeciesIdTable,
        .formChangeTable = sMimikyuTotemFormChangeTable,
    },
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_BRUXISH
    [SPECIES_BRUXISH] =
    {
        .baseHP        = 68,
        .baseAttack    = 105,
        .baseDefense   = 70,
        .baseSpeed     = 92,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 80,
        .expYield = 166,
        .evYield_Attack = 2,
        .itemRare = ITEM_RAZOR_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_DAZZLING, ABILITY_STRONG_JAW, ABILITY_WONDER_SKIN },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Bruxish"),
        .cryId = CRY_BRUXISH,
        .natDexNum = NATIONAL_DEX_BRUXISH,
        .categoryName = _("Rechinante"),
        .height = 9,
        .weight = 190,
		.description = COMPOUND_STRING(
			"Cuando la protuberancia que tiene en\n"
			"la cabeza emite poderes psíquicos, se\n"
			"escucha como un ruido de dientes\n"
			"rechinando muy molesto."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bruxish,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Bruxish,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Bruxish,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Bruxish,
        .shinyPalette = gMonShinyPalette_Bruxish,
        .iconSprite = gMonIcon_Bruxish,
        .iconPalIndex = 0,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Bruxish)
        OVERWORLD(
            sPicTable_Bruxish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bruxish,
            gShinyOverworldPalette_Bruxish
        )
        .levelUpLearnset = sBruxishLevelUpLearnset,
        .teachableLearnset = sBruxishTeachableLearnset,
        .eggMoveLearnset = sBruxishEggMoveLearnset,
    },
#endif //P_FAMILY_BRUXISH

#if P_FAMILY_DRAMPA
    [SPECIES_DRAMPA] =
    {
        .baseHP        = 78,
        .baseAttack    = 60,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 135,
        .baseSpDefense = 91,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .catchRate = 70,
        .expYield = 170,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_PERSIM_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BERSERK, ABILITY_SAP_SIPPER, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Drampa"),
        .cryId = CRY_DRAMPA,
        .natDexNum = NATIONAL_DEX_DRAMPA,
        .categoryName = _("Sosiego"),
        .height = 30,
        .weight = 1850,
		.description = COMPOUND_STRING(
			"Si un niño con el que ha trabado amistad\n"
			"sufre las burlas de otro niño, busca\n"
			"la casa del abusón y le prende fuego."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drampa,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Drampa,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Drampa,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Drampa,
        .shinyPalette = gMonShinyPalette_Drampa,
        .iconSprite = gMonIcon_Drampa,
        .iconPalIndex = 0,
        SHADOW(5, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Drampa)
        OVERWORLD(
            sPicTable_Drampa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drampa,
            gShinyOverworldPalette_Drampa
        )
        .levelUpLearnset = sDrampaLevelUpLearnset,
        .teachableLearnset = sDrampaTeachableLearnset,
        .eggMoveLearnset = sDrampaEggMoveLearnset,
    },
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_DHELMISE
    [SPECIES_DHELMISE] =
    {
        .baseHP        = 70,
        .baseAttack    = 131,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 86,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 25,
        .expYield = 181,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STEELWORKER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Dhelmise"),
        .cryId = CRY_DHELMISE,
        .natDexNum = NATIONAL_DEX_DHELMISE,
        .categoryName = _("Alga Ancla"),
        .height = 39,
        .weight = 2100,
		.description = COMPOUND_STRING(
			"Los giros de su enorme ancla son\n"
			"capaces de noquear al mismísimo Wailord\n"
			"de un solo golpe. El alga verde es\n"
			"su verdadero cuerpo."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 510,
        .trainerOffset = 11,
        .frontPic = gMonFrontPic_Dhelmise,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Dhelmise,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 2,
        .backPic = gMonBackPic_Dhelmise,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dhelmise,
        .shinyPalette = gMonShinyPalette_Dhelmise,
        .iconSprite = gMonIcon_Dhelmise,
        .iconPalIndex = 1,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Dhelmise)
        OVERWORLD(
            sPicTable_Dhelmise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dhelmise,
            gShinyOverworldPalette_Dhelmise
        )
        .levelUpLearnset = sDhelmiseLevelUpLearnset,
        .teachableLearnset = sDhelmiseTeachableLearnset,
    },
#endif //P_FAMILY_DHELMISE

#if P_FAMILY_JANGMO_O
    [SPECIES_JANGMO_O] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 60,
        .evYield_Defense = 1,
        .itemRare = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Jangmo-o"),
        .cryId = CRY_JANGMO_O,
        .natDexNum = NATIONAL_DEX_JANGMO_O,
        .categoryName = _("Escamas"),
        .height = 6,
        .weight = 297,
        .description = COMPOUND_STRING(
            "Se expresa golpeando sus escamas\n"
            "Sonidos metálicos resuenan a través\n"
            "de las altas montañas donde viven.\n"
            "Crecen paulatinamente entre luchas."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_JangmoO,
        .frontPicSize = MON_COORDS_SIZE(36, 43),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Jangmo_O,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_JangmoO,
        .backPicSize = MON_COORDS_SIZE(42, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_JangmoO,
        .shinyPalette = gMonShinyPalette_JangmoO,
        .iconSprite = gMonIcon_JangmoO,
        .iconPalIndex = 2,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(JangmoO)
        OVERWORLD(
            sPicTable_JangmoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_JangmoO,
            gShinyOverworldPalette_JangmoO
        )
        .levelUpLearnset = sJangmoOLevelUpLearnset,
        .teachableLearnset = sJangmoOTeachableLearnset,
        .eggMoveLearnset = sJangmoOEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_HAKAMO_O}),
    },

    [SPECIES_HAKAMO_O] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 147,
        .evYield_Defense = 2,
        .itemRare = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Hakamo-o"),
        .cryId = CRY_HAKAMO_O,
        .natDexNum = NATIONAL_DEX_HAKAMO_O,
        .categoryName = _("Escamas"),
        .height = 12,
        .weight = 470,
        .description = COMPOUND_STRING(
            "Desprende y regenera sus escamas\n"
            "continuamente, y estas se vuelven\n"
            "más duras cada vez. Con sus golpes\n"
            "desgarran a sus enemigos en pedazos."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HakamoO,
        .frontPicSize = MON_COORDS_SIZE(53, 61),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Hakamo_O,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_HakamoO,
        .backPicSize = MON_COORDS_SIZE(49, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_HakamoO,
        .shinyPalette = gMonShinyPalette_HakamoO,
        .iconSprite = gMonIcon_HakamoO,
        .iconPalIndex = 2,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(HakamoO)
        OVERWORLD(
            sPicTable_HakamoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_HakamoO,
            gShinyOverworldPalette_HakamoO
        )
        .levelUpLearnset = sHakamoOLevelUpLearnset,
        .teachableLearnset = sHakamoOTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_KOMMO_O},
                                {EVO_NONE, 0, SPECIES_KOMMO_O_TOTEM}),
    },

    [SPECIES_KOMMO_O] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Defense = 3,
        .itemCommon = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kommo-o"),
        .cryId = CRY_KOMMO_O,
        .natDexNum = NATIONAL_DEX_KOMMO_O,
        .categoryName = _("Escamas"),
        .height = 16,
        .weight = 782,
        .description = gKommoOPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_KommoO,
        .frontPicSize = MON_COORDS_SIZE(63, 63),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kommo_O,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_KommoO,
        .backPicSize = MON_COORDS_SIZE(60, 60),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_KommoO,
        .shinyPalette = gMonShinyPalette_KommoO,
        .iconSprite = gMonIcon_KommoO,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(KommoO)
        OVERWORLD(
            sPicTable_KommoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_KommoO,
            gShinyOverworldPalette_KommoO
        )
        .levelUpLearnset = sKommoOLevelUpLearnset,
        .teachableLearnset = sKommoOTeachableLearnset,
        .formSpeciesIdTable = sKommoOFormSpeciesIdTable,
    },

    [SPECIES_KOMMO_O_TOTEM] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Defense = 3,
        .itemCommon = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kommo-o"),
        .cryId = CRY_KOMMO_O,
        .natDexNum = NATIONAL_DEX_KOMMO_O,
        .categoryName = _("Escamas"),
        .height = 24,
        .weight = 2075,
        .description = gKommoOPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_KommoO,
        .frontPicSize = MON_COORDS_SIZE(63, 63),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kommo_O,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_KommoO,
        .backPicSize = MON_COORDS_SIZE(60, 60),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_KommoO,
        .shinyPalette = gMonShinyPalette_KommoO,
        .iconSprite = gMonIcon_KommoO,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(KommoO)
        OVERWORLD(
            sPicTable_KommoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_KommoO,
            gShinyOverworldPalette_KommoO
        )
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKommoOLevelUpLearnset,
        .teachableLearnset = sKommoOTeachableLearnset,
        .formSpeciesIdTable = sKommoOFormSpeciesIdTable,
    },
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
    [SPECIES_TAPU_KOKO] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 130,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ELECTRIC_SURGE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tapu Koko"),
        .cryId = CRY_TAPU_KOKO,
        .natDexNum = NATIONAL_DEX_TAPU_KOKO,
        .categoryName = _("Dios nativo"),
        .height = 18,
        .weight = 205,
        .description = COMPOUND_STRING(
            "Confunde a sus enemigos volando más\n"
            "rápido de lo que el ojo puede seguirlo.\n"
            "Tiene un temperamento explosivo, pero\n"
            "olvida lo que le enfadó instantáneamente."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_TapuKoko,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_TapuKoko,
        .frontAnimId = ANIM_TRIANGLE_DOWN_TWICE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_TapuKoko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TapuKoko,
        .shinyPalette = gMonShinyPalette_TapuKoko,
        .iconSprite = gMonIcon_TapuKoko,
        .iconPalIndex = 0,
        SHADOW(-1, 19, SHADOW_SIZE_M)
        FOOTPRINT(TapuKoko)
        OVERWORLD(
            sPicTable_TapuKoko,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TapuKoko,
            gShinyOverworldPalette_TapuKoko
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTapuKokoLevelUpLearnset,
        .teachableLearnset = sTapuKokoTeachableLearnset,
    },
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_TAPU_LELE
    [SPECIES_TAPU_LELE] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PSYCHIC_SURGE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tapu Lele"),
        .cryId = CRY_TAPU_LELE,
        .natDexNum = NATIONAL_DEX_TAPU_LELE,
        .categoryName = _("Dios nativo"),
        .height = 12,
        .weight = 186,
        .description = COMPOUND_STRING(
            "Un fragante aroma de flores lo sigue.\n"
            "Mientras revolotea, dispersa sus\n"
            "extrañas escamas brillantes. Se dice que\n"
            "tocarlas restaura la buena salud."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TapuLele,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_TapuLele,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_TapuLele,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TapuLele,
        .shinyPalette = gMonShinyPalette_TapuLele,
        .iconSprite = gMonIcon_TapuLele,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(TapuLele)
        OVERWORLD(
            sPicTable_TapuLele,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TapuLele,
            gShinyOverworldPalette_TapuLele
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTapuLeleLevelUpLearnset,
        .teachableLearnset = sTapuLeleTeachableLearnset,
    },
#endif //P_FAMILY_TAPU_LELE

#if P_FAMILY_TAPU_BULU
    [SPECIES_TAPU_BULU] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_GRASSY_SURGE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tapu Bulu"),
        .cryId = CRY_TAPU_BULU,
        .natDexNum = NATIONAL_DEX_TAPU_BULU,
        .categoryName = _("Dios nativo"),
        .height = 19,
        .weight = 455,
        .description = COMPOUND_STRING(
            "Hace que la vegetación crezca, y luego\n"
            "absorbe energía del crecimiento.\n"
            "Arranca grandes árboles de raíz y\n"
            "los agita contra sus enemigos."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_TapuBulu,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TapuBulu,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_TapuBulu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TapuBulu,
        .shinyPalette = gMonShinyPalette_TapuBulu,
        .iconSprite = gMonIcon_TapuBulu,
        .iconPalIndex = 2,
        SHADOW(4, 16, SHADOW_SIZE_M)
        FOOTPRINT(TapuBulu)
        OVERWORLD(
            sPicTable_TapuBulu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TapuBulu,
            gShinyOverworldPalette_TapuBulu
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTapuBuluLevelUpLearnset,
        .teachableLearnset = sTapuBuluTeachableLearnset,
    },
#endif //P_FAMILY_TAPU_BULU

#if P_FAMILY_TAPU_FINI
    [SPECIES_TAPU_FINI] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MISTY_SURGE, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tapu Fini"),
        .cryId = CRY_TAPU_FINI,
        .natDexNum = NATIONAL_DEX_TAPU_FINI,
        .categoryName = _("Dios nativo"),
        .height = 13,
        .weight = 212,
        .description = COMPOUND_STRING(
            "Dicen que puede crear agua pura que\n"
            "lavará cualquier corrupción. La densa\n"
            "niebla que crea provoca la caída y\n"
            "destrucción de sus enemigos confundidos."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TapuFini,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_TapuFini,
        .frontAnimId = ANIM_SHAKE_GLOW_BLUE_SLOW,
        .frontAnimDelay = 5,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_TapuFini,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TapuFini,
        .shinyPalette = gMonShinyPalette_TapuFini,
        .iconSprite = gMonIcon_TapuFini,
        .iconPalIndex = 2,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(TapuFini)
        OVERWORLD(
            sPicTable_TapuFini,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TapuFini,
            gShinyOverworldPalette_TapuFini
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTapuFiniLevelUpLearnset,
        .teachableLearnset = sTapuFiniTeachableLearnset,
    },
#endif //P_FAMILY_TAPU_FINI

#if P_FAMILY_COSMOG
    [SPECIES_COSMOG] =
    {
        .baseHP        = 43,
        .baseAttack    = 29,
        .baseDefense   = 31,
        .baseSpeed     = 37,
        .baseSpAttack  = 29,
        .baseSpDefense = 31,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 40,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_UNAWARE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cosmog"),
        .cryId = CRY_COSMOG,
        .natDexNum = NATIONAL_DEX_COSMOG,
        .categoryName = _("Nebula"),
        .height = 2,
        .weight = 1,
		.description = COMPOUND_STRING(
			"Su cuerpo se compone de una materia\n"
			"gaseosa inestable. Crece poco a poco\n"
			"al acumular las motas de polvo que\n"
			"flotan en el aire."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cosmog,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Cosmog,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Cosmog,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cosmog,
        .shinyPalette = gMonShinyPalette_Cosmog,
        .iconSprite = gMonIcon_Cosmog,
        .iconPalIndex = 2,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Cosmog)
        OVERWORLD(
            sPicTable_Cosmog,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cosmog,
            gShinyOverworldPalette_Cosmog
        )
        .isLegendary = TRUE,
        .tmIlliterate = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCosmogLevelUpLearnset,
        .teachableLearnset = sCosmogTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 43, SPECIES_COSMOEM}),
    },

    [SPECIES_COSMOEM] =
    {
        .baseHP        = 43,
        .baseAttack    = 29,
        .baseDefense   = 131,
        .baseSpeed     = 37,
        .baseSpAttack  = 29,
        .baseSpDefense = 131,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 140,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cosmoem"),
        .cryId = CRY_COSMOEM,
        .natDexNum = NATIONAL_DEX_COSMOEM,
        .categoryName = _("Protostrella"),
        .height = 1,
        .weight = 9999,
		.description = COMPOUND_STRING(
			"Se dice que es un Pokémon procedente\n"
			"de otro mundo. Alrededor del núcleo\n"
			"negro que alberga su duro caparazón\n"
			"parece acumularse algo."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cosmoem,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Cosmoem,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Cosmoem,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cosmoem,
        .shinyPalette = gMonShinyPalette_Cosmoem,
        .iconSprite = gMonIcon_Cosmoem,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Cosmoem)
        OVERWORLD(
            sPicTable_Cosmoem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cosmoem,
            gShinyOverworldPalette_Cosmoem
        )
        .isLegendary = TRUE,
        .tmIlliterate = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCosmoemLevelUpLearnset,
        .teachableLearnset = sCosmoemTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_DAY, 53, SPECIES_SOLGALEO},
                                {EVO_LEVEL_NIGHT, 53, SPECIES_LUNALA}),
    },

    [SPECIES_SOLGALEO] =
    {
        .baseHP        = 137,
        .baseAttack    = 137,
        .baseDefense   = 107,
        .baseSpeed     = 97,
        .baseSpAttack  = 113,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FULL_METAL_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Solgaleo"),
        .cryId = CRY_SOLGALEO,
        .natDexNum = NATIONAL_DEX_SOLGALEO,
        .categoryName = _("Corona solar"),
        .height = 34,
        .weight = 2300,
		.description = COMPOUND_STRING(
			"Aparece en obras de la literatura\n"
			"antigua en las que se refieren a él\n"
			"como “la criatura que se nutre\n"
			"del Sol”."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 405,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Solgaleo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Solgaleo,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Solgaleo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Solgaleo,
        .shinyPalette = gMonShinyPalette_Solgaleo,
        .iconSprite = gMonIcon_Solgaleo,
        .iconPalIndex = 2,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Solgaleo)
        OVERWORLD(
            sPicTable_Solgaleo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Solgaleo,
            gShinyOverworldPalette_Solgaleo
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sSolgaleoLevelUpLearnset,
        .teachableLearnset = sSolgaleoTeachableLearnset,
    },

    [SPECIES_LUNALA] =
    {
        .baseHP        = 137,
        .baseAttack    = 113,
        .baseDefense   = 89,
        .baseSpeed     = 97,
        .baseSpAttack  = 137,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SHADOW_SHIELD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Lunala"),
        .cryId = CRY_LUNALA,
        .natDexNum = NATIONAL_DEX_LUNALA,
        .categoryName = _("Corona lunar"),
        .height = 40,
        .weight = 1200,
		.description = COMPOUND_STRING(
			"Aparece en obras de la literatura\n"
			"antigua en las que se refieren a él\n"
			"como “la criatura que evoca a\n"
			"la Luna”."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Lunala,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Lunala,
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Lunala,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Lunala,
        .shinyPalette = gMonShinyPalette_Lunala,
        .iconSprite = gMonIcon_Lunala,
        .iconPalIndex = 2,
        SHADOW(4, 17, SHADOW_SIZE_L)
        FOOTPRINT(Lunala)
        OVERWORLD(
            sPicTable_Lunala,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lunala,
            gShinyOverworldPalette_Lunala
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLunalaLevelUpLearnset,
        .teachableLearnset = sLunalaTeachableLearnset,
    },
#endif //P_FAMILY_COSMOG

#if P_FAMILY_NIHILEGO
    [SPECIES_NIHILEGO] =
    {
        .baseHP        = 109,
        .baseAttack    = 53,
        .baseDefense   = 47,
        .baseSpeed     = 103,
        .baseSpAttack  = 127,
        .baseSpDefense = 131,
        .types = MON_TYPES(TYPE_ROCK, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Nihilego"),
        .cryId = CRY_NIHILEGO,
        .natDexNum = NATIONAL_DEX_NIHILEGO,
        .categoryName = _("Parásito"),
        .height = 12,
        .weight = 555,
		.description = COMPOUND_STRING(
			"Un Ultraente envuelto en misterio.\n"
			"Se dice que las víctimas a las que\n"
			"posee se vuelven agresivas."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nihilego,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Nihilego,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Nihilego,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Nihilego,
        .shinyPalette = gMonShinyPalette_Nihilego,
        .iconSprite = gMonIcon_Nihilego,
        .iconPalIndex = 2,
        SHADOW(-2, 14, SHADOW_SIZE_S)
        FOOTPRINT(Nihilego)
        OVERWORLD(
            sPicTable_Nihilego,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nihilego,
            gShinyOverworldPalette_Nihilego
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sNihilegoLevelUpLearnset,
        .teachableLearnset = sNihilegoTeachableLearnset,
    },
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
    [SPECIES_BUZZWOLE] =
    {
        .baseHP        = 107,
        .baseAttack    = 139,
        .baseDefense   = 139,
        .baseSpeed     = 79,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Attack = 1,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Buzzwole"),
        .cryId = CRY_BUZZWOLE,
        .natDexNum = NATIONAL_DEX_BUZZWOLE,
        .categoryName = _("Hinchado"),
        .height = 24,
        .weight = 3336,
		.description = COMPOUND_STRING(
			"Un Ultraente procedente de otro mundo.\n"
			"Se desconoce si exhibe su robusto\n"
			"cuerpo a modo de amenaza o para que\n"
			"lo admiren."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Buzzwole,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Buzzwole,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Buzzwole,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Buzzwole,
        .shinyPalette = gMonShinyPalette_Buzzwole,
        .iconSprite = gMonIcon_Buzzwole,
        .iconPalIndex = 0,
        SHADOW(-2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Buzzwole)
        OVERWORLD(
            sPicTable_Buzzwole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Buzzwole,
            gShinyOverworldPalette_Buzzwole
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sBuzzwoleLevelUpLearnset,
        .teachableLearnset = sBuzzwoleTeachableLearnset,
    },
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_PHEROMOSA
    [SPECIES_PHEROMOSA] =
    {
        .baseHP        = 71,
        .baseAttack    = 137,
        .baseDefense   = 37,
        .baseSpeed     = 151,
        .baseSpAttack  = 137,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pheromosa"),
        .cryId = CRY_PHEROMOSA,
        .natDexNum = NATIONAL_DEX_PHEROMOSA,
        .categoryName = _("Elegancia"),
        .height = 18,
        .weight = 250,
		.description = COMPOUND_STRING(
			"Este Ultraente se muestra reacio al\n"
			"contacto, probablemente porque percibe\n"
			"inmundicia en todo cuanto le rodea."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Pheromosa,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Pheromosa,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Pheromosa,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pheromosa,
        .shinyPalette = gMonShinyPalette_Pheromosa,
        .iconSprite = gMonIcon_Pheromosa,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Pheromosa)
        OVERWORLD(
            sPicTable_Pheromosa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pheromosa,
            gShinyOverworldPalette_Pheromosa
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPheromosaLevelUpLearnset,
        .teachableLearnset = sPheromosaTeachableLearnset,
    },
#endif //P_FAMILY_PHEROMOSA

#if P_FAMILY_XURKITREE
    [SPECIES_XURKITREE] =
    {
        .baseHP        = 83,
        .baseAttack    = 89,
        .baseDefense   = 71,
        .baseSpeed     = 83,
        .baseSpAttack  = 173,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Xurkitree"),
        .cryId = CRY_XURKITREE,
        .natDexNum = NATIONAL_DEX_XURKITREE,
        .categoryName = _("Luminaria"),
        .height = 38,
        .weight = 1000,
		.description = COMPOUND_STRING(
			"Este Ultraente surgió de un Ultraumbral.\n"
			"Se cree que la electricidad es su fuente\n"
			"de energía, ya que una vez asaltó una\n"
			"central eléctrica."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_Xurkitree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xurkitree,
        .frontAnimId = ANIM_SHAKE_FLASH_YELLOW_FAST,
        .backPic = gMonBackPic_Xurkitree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Xurkitree,
        .shinyPalette = gMonShinyPalette_Xurkitree,
        .iconSprite = gMonIcon_Xurkitree,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Xurkitree)
        OVERWORLD(
            sPicTable_Xurkitree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Xurkitree,
            gShinyOverworldPalette_Xurkitree
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sXurkitreeLevelUpLearnset,
        .teachableLearnset = sXurkitreeTeachableLearnset,
    },
#endif //P_FAMILY_XURKITREE

#if P_FAMILY_CELESTEELA
    [SPECIES_CELESTEELA] =
    {
        .baseHP        = 97,
        .baseAttack    = 101,
        .baseDefense   = 103,
        .baseSpeed     = 61,
        .baseSpAttack  = 107,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Celesteela"),
        .cryId = CRY_CELESTEELA,
        .natDexNum = NATIONAL_DEX_CELESTEELA,
        .categoryName = _("Lanzamiento"),
        .height = 92,
        .weight = 9999,
		.description = COMPOUND_STRING(
			"Varios testigos afirman haber visto\n"
			"como este Ultraente carbonizaba un\n"
			"bosque entero con el gas expelido por\n"
			"sus extremidades."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Celesteela,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Celesteela,
        .frontAnimId = ANIM_GROW_STUTTER_SLOW,
        .backPic = gMonBackPic_Celesteela,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Celesteela,
        .shinyPalette = gMonShinyPalette_Celesteela,
        .iconSprite = gMonIcon_Celesteela,
        .iconPalIndex = 0,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Celesteela)
        OVERWORLD(
            sPicTable_Celesteela,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Celesteela,
            gShinyOverworldPalette_Celesteela
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCelesteelaLevelUpLearnset,
        .teachableLearnset = sCelesteelaTeachableLearnset,
    },
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_KARTANA
    [SPECIES_KARTANA] =
    {
        .baseHP        = 59,
        .baseAttack    = 181,
        .baseDefense   = 131,
        .baseSpeed     = 109,
        .baseSpAttack  = 59,
        .baseSpDefense = 31,
        .types = MON_TYPES(TYPE_GRASS, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kartana"),
        .cryId = CRY_KARTANA,
        .natDexNum = NATIONAL_DEX_KARTANA,
        .categoryName = _("Desenvaine"),
        .height = 3,
        .weight = 1,
		.description = COMPOUND_STRING(
			"Varios testigos han observado como\n"
			"este Ultraente cortaba en dos una\n"
			"enorme torre de acero como si fuera\n"
			"mantequilla."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kartana,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Kartana,
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Kartana,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kartana,
        .shinyPalette = gMonShinyPalette_Kartana,
        .iconSprite = gMonIcon_Kartana,
        .iconPalIndex = 0,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Kartana)
        OVERWORLD(
            sPicTable_Kartana,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kartana,
            gShinyOverworldPalette_Kartana
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKartanaLevelUpLearnset,
        .teachableLearnset = sKartanaTeachableLearnset,
    },
#endif //P_FAMILY_KARTANA

#if P_FAMILY_GUZZLORD
    [SPECIES_GUZZLORD] =
    {
        .baseHP        = 223,
        .baseAttack    = 101,
        .baseDefense   = 53,
        .baseSpeed     = 43,
        .baseSpAttack  = 97,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Guzzlord"),
        .cryId = CRY_GUZZLORD,
        .natDexNum = NATIONAL_DEX_GUZZLORD,
        .categoryName = _("Tragaldabas"),
        .height = 55,
        .weight = 8880,
		.description = COMPOUND_STRING(
			"Se dice que este Ultraente ha sido\n"
			"avistado devorando montañas enteras y\n"
			"tragándose prominentes edificios."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Guzzlord,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Guzzlord,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Guzzlord,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Guzzlord,
        .shinyPalette = gMonShinyPalette_Guzzlord,
        .iconSprite = gMonIcon_Guzzlord,
        .iconPalIndex = 2,
        SHADOW(4, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Guzzlord)
        OVERWORLD(
            sPicTable_Guzzlord,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Guzzlord,
            gShinyOverworldPalette_Guzzlord
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGuzzlordLevelUpLearnset,
        .teachableLearnset = sGuzzlordTeachableLearnset,
    },
#endif //P_FAMILY_GUZZLORD

#if P_FAMILY_NECROZMA
    [SPECIES_NECROZMA] =
    {
        .baseHP        = 97,
        .baseAttack    = 107,
        .baseDefense   = 101,
        .baseSpeed     = 79,
        .baseSpAttack  = 127,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Attack = 1,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRISM_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prisma"),
        .height = 24,
        .weight = 2300,
		.description = COMPOUND_STRING(
			"Se dice que yacía en el interior de la\n"
			"tierra. Se cree que esta criatura,\n"
			"parecida a un Ultraente, vino de otro\n"
			"mundo hace muchísimo tiempo."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Necrozma,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Necrozma,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Necrozma,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Necrozma,
        .shinyPalette = gMonShinyPalette_Necrozma,
        .iconSprite = gMonIcon_Necrozma,
        .iconPalIndex = 1,
        SHADOW(-1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Necrozma)
        OVERWORLD(
            sPicTable_Necrozma,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Necrozma,
            gShinyOverworldPalette_Necrozma
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sNecrozmaLevelUpLearnset,
        .teachableLearnset = sNecrozmaTeachableLearnset,
        .formSpeciesIdTable = sNecrozmaFormSpeciesIdTable,
    },

#if P_FUSION_FORMS
    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .baseHP        = 97,
        .baseAttack    = 157,
        .baseDefense   = 127,
        .baseSpeed     = 77,
        .baseSpAttack  = 113,
        .baseSpDefense = 109,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRISM_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA_DUSK_MANE,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prisma"),
        .height = 38,
        .weight = 4600,
        .description = COMPOUND_STRING(
            "Esta es su forma mientras devora la\n"
            "luz de Solgaleo. Ataca a sus enemigos\n"
            "y luego los desgarran con las garras en\n"
            "sus cuatro extremidades y su espalda."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_NecrozmaDuskMane,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Necrozma,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NecrozmaDuskMane,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NecrozmaDuskMane,
        .shinyPalette = gMonShinyPalette_NecrozmaDuskMane,
        .iconSprite = gMonIcon_NecrozmaDuskMane,
        .iconPalIndex = 0,
        SHADOW(-3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Necrozma)
        OVERWORLD(
            sPicTable_NecrozmaDuskMane,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NecrozmaDuskMane,
            gShinyOverworldPalette_NecrozmaDuskMane
        )
        .isLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sNecrozmaLevelUpLearnset,
        .teachableLearnset = sNecrozmaTeachableLearnset,
        .formSpeciesIdTable = sNecrozmaFormSpeciesIdTable,
        .formChangeTable = sNecrozmaDuskManeFormChangeTable,
    },

    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .baseHP        = 97,
        .baseAttack    = 113,
        .baseDefense   = 109,
        .baseSpeed     = 77,
        .baseSpAttack  = 157,
        .baseSpDefense = 127,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GHOST),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRISM_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA_DAWN_WINGS,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prisma"),
        .height = 42,
        .weight = 3500,
        .description = COMPOUND_STRING(
            "Esta es su forma mientras devora la\n"
            "luz de Lunala. Agarra a sus enemigos\n"
            "con sus enormes garras y los destruye\n"
            "con fuerza bruta."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_NecrozmaDawnWings,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Necrozma,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_NecrozmaDawnWings,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NecrozmaDawnWings,
        .shinyPalette = gMonShinyPalette_NecrozmaDawnWings,
        .iconSprite = gMonIcon_NecrozmaDawnWings,
        .iconPalIndex = 0,
        SHADOW(3, 17, SHADOW_SIZE_L)
        FOOTPRINT(Necrozma)
        OVERWORLD(
            sPicTable_NecrozmaDawnWings,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NecrozmaDawnWings,
            gShinyOverworldPalette_NecrozmaDawnWings
        )
        .isLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sNecrozmaLevelUpLearnset,
        .teachableLearnset = sNecrozmaTeachableLearnset,
        .formSpeciesIdTable = sNecrozmaFormSpeciesIdTable,
        .formChangeTable = sNecrozmaDawnWingsFormChangeTable,
    },

#if P_ULTRA_BURST_FORMS
    [SPECIES_NECROZMA_ULTRA] =
    {
        .baseHP        = 97,
        .baseAttack    = 167,
        .baseDefense   = 97,
        .baseSpeed     = 129,
        .baseSpAttack  = 167,
        .baseSpDefense = 97,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DRAGON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 377 : 339,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NEUROFORCE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA_ULTRA,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prisma"),
        .height = 75,
        .weight = 2300,
        .description = COMPOUND_STRING(
            "La luz que emana de todo su cuerpo\n"
            "afecta a los seres vivos y a la\n"
            "naturaleza, impactándolos de diversas\n"
            "maneras."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_NecrozmaUltra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Necrozma,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_NecrozmaUltra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NecrozmaUltra,
        .shinyPalette = gMonShinyPalette_NecrozmaUltra,
        .iconSprite = gMonIcon_NecrozmaUltra,
        .iconPalIndex = 2,
        SHADOW(-1, 16, SHADOW_SIZE_L)
        FOOTPRINT(Necrozma)
        .isLegendary = TRUE,
        .isUltraBurst = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sNecrozmaLevelUpLearnset,
        .teachableLearnset = sNecrozmaTeachableLearnset,
        .formSpeciesIdTable = sNecrozmaFormSpeciesIdTable,
    },
#endif //P_ULTRA_BURST_FORMS
#endif //P_FUSION_FORMS
#endif //P_FAMILY_NECROZMA

#if P_FAMILY_MAGEARNA
    [SPECIES_MAGEARNA] =
    {
        .baseHP        = 80,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SOUL_HEART, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magearna"),
        .cryId = CRY_MAGEARNA,
        .natDexNum = NATIONAL_DEX_MAGEARNA,
        .categoryName = _("Artificial"),
        .height = 10,
        .weight = 805,
		.description = COMPOUND_STRING(
			"Pokémon artificial creado hace más de\n"
			"500 años. Es capaz de entender el\n"
			"lenguaje humano pero carece de\n"
			"la facultad del habla."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magearna,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magearna,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Magearna,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_Magearna,
        .shinyPalette = gMonShinyPalette_Magearna,
        .iconSprite = gMonIcon_Magearna,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Magearna)
        OVERWORLD(
            sPicTable_Magearna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magearna,
            gShinyOverworldPalette_Magearna
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMagearnaLevelUpLearnset,
        .teachableLearnset = sMagearnaTeachableLearnset,
        .formSpeciesIdTable = sMagearnaFormSpeciesIdTable,
    },
    [SPECIES_MAGEARNA_ORIGINAL] =
    {
        .baseHP        = 80,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SOUL_HEART, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magearna"),
        .cryId = CRY_MAGEARNA,
        .natDexNum = NATIONAL_DEX_MAGEARNA,
        .categoryName = _("Artificial"),
        .height = 10,
        .weight = 805,
        .description = COMPOUND_STRING(
            "Esta es su forma de hace casi 500\n"
            "años. Su cuerpo no es más que un\n"
            "contenedor; su corazón artificial\n"
            "es el verdadero organismo."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MagearnaOriginal,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magearna,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_MagearnaOriginal,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
        .palette = gMonPalette_MagearnaOriginal,
        .shinyPalette = gMonShinyPalette_MagearnaOriginal,
        .iconSprite = gMonIcon_MagearnaOriginal,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Magearna)
        OVERWORLD(
            sPicTable_MagearnaOriginal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MagearnaOriginal,
            gShinyOverworldPalette_MagearnaOriginal
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMagearnaLevelUpLearnset,
        .teachableLearnset = sMagearnaTeachableLearnset,
        .formSpeciesIdTable = sMagearnaFormSpeciesIdTable,
    },
#endif //P_FAMILY_MAGEARNA

#if P_FAMILY_MARSHADOW
    [SPECIES_MARSHADOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 125,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_GHOST),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Attack = 2,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Marshadow"),
        .cryId = CRY_MARSHADOW,
        .natDexNum = NATIONAL_DEX_MARSHADOW,
        .categoryName = _("Morasombra"),
        .height = 7,
        .weight = 222,
		.description = COMPOUND_STRING(
			"Debido a que siempre se ha ocultado\n"
			"en las sombras y no le gusta dejarse ver,\n"
			"su misma existencia es todo un misterio."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Marshadow,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Marshadow,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Marshadow,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Marshadow,
        .shinyPalette = gMonShinyPalette_Marshadow,
        .iconSprite = gMonIcon_Marshadow,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Marshadow)
        OVERWORLD(
            sPicTable_Marshadow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Marshadow,
            gShinyOverworldPalette_Marshadow
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMarshadowLevelUpLearnset,
        .teachableLearnset = sMarshadowTeachableLearnset,
    },
#endif //P_FAMILY_MARSHADOW

#if P_FAMILY_POIPOLE
    [SPECIES_POIPOLE] =
    {
        .baseHP        = 67,
        .baseAttack    = 73,
        .baseDefense   = 67,
        .baseSpeed     = 73,
        .baseSpAttack  = 73,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 210 : 189,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Poipole"),
        .cryId = CRY_POIPOLE,
        .natDexNum = NATIONAL_DEX_POIPOLE,
        .categoryName = _("Pin veneno"),
        .height = 6,
        .weight = 18,
		.description = COMPOUND_STRING(
			"En su mundo, este Ultraente se considera\n"
			"tan entrañable como para ser elegido\n"
			"compañero de viaje."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poipole,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Poipole,
        .frontAnimId = ANIM_SHAKE_GLOW_PURPLE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Poipole,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Poipole,
        .shinyPalette = gMonShinyPalette_Poipole,
        .iconSprite = gMonIcon_Poipole,
        .iconPalIndex = 0,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Poipole)
        OVERWORLD(
            sPicTable_Poipole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poipole,
            gShinyOverworldPalette_Poipole
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sPoipoleLevelUpLearnset,
        .teachableLearnset = sPoipoleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_DRAGON_PULSE, SPECIES_NAGANADEL}),
    },

    [SPECIES_NAGANADEL] =
    {
        .baseHP        = 73,
        .baseAttack    = 73,
        .baseDefense   = 73,
        .baseSpeed     = 121,
        .baseSpAttack  = 127,
        .baseSpDefense = 73,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 270 : 243,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Naganadel"),
        .cryId = CRY_NAGANADEL,
        .natDexNum = NATIONAL_DEX_NAGANADEL,
        .categoryName = _("Pin veneno"),
        .height = 36,
        .weight = 1500,
		.description = COMPOUND_STRING(
			"Una de las temibles criaturas conocidas\n"
			"como Ultraentes. En su cuerpo almacena\n"
			"cientos de litros de veneno."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 405,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Naganadel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Naganadel,
        .frontAnimId = ANIM_TRIANGLE_DOWN_TWICE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Naganadel,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Naganadel,
        .shinyPalette = gMonShinyPalette_Naganadel,
        .iconSprite = gMonIcon_Naganadel,
        .iconPalIndex = 0,
        SHADOW(7, 17, SHADOW_SIZE_M)
        FOOTPRINT(Naganadel)
        OVERWORLD(
            sPicTable_Naganadel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Naganadel,
            gShinyOverworldPalette_Naganadel
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sNaganadelLevelUpLearnset,
        .teachableLearnset = sNaganadelTeachableLearnset,
    },
#endif //P_FAMILY_POIPOLE

#if P_FAMILY_STAKATAKA
    [SPECIES_STAKATAKA] =
    {
        .baseHP        = 61,
        .baseAttack    = 131,
        .baseDefense   = 211,
        .baseSpeed     = 13,
        .baseSpAttack  = 53,
        .baseSpDefense = 101,
        .types = MON_TYPES(TYPE_ROCK, TYPE_STEEL),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Stakataka"),
        .cryId = CRY_STAKATAKA,
        .natDexNum = NATIONAL_DEX_STAKATAKA,
        .categoryName = _("Muro"),
        .height = 55,
        .weight = 8200,
		.description = COMPOUND_STRING(
			"Extraña criatura que podría ser un\n"
			"Ultraente. Parece un muro rocoso\n"
			"hasta que se mueve de repente y ataca."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Stakataka,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Stakataka,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Stakataka,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Stakataka,
        .shinyPalette = gMonShinyPalette_Stakataka,
        .iconSprite = gMonIcon_Stakataka,
        .iconPalIndex = 0,
        SHADOW(2, 15, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Stakataka)
        OVERWORLD(
            sPicTable_Stakataka,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Stakataka,
            gShinyOverworldPalette_Stakataka
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sStakatakaLevelUpLearnset,
        .teachableLearnset = sStakatakaTeachableLearnset,
    },
#endif //P_FAMILY_STAKATAKA

#if P_FAMILY_BLACEPHALON
    [SPECIES_BLACEPHALON] =
    {
        .baseHP        = 53,
        .baseAttack    = 127,
        .baseDefense   = 53,
        .baseSpeed     = 107,
        .baseSpAttack  = 151,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 285 : 257,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Blacephalon"),
        .cryId = CRY_BLACEPHALON,
        .natDexNum = NATIONAL_DEX_BLACEPHALON,
        .categoryName = _("Pirotecnia"),
        .height = 18,
        .weight = 130,
		.description = COMPOUND_STRING(
			"Un Ultraente surgido de un Ultraumbral.\n"
			"Crea una explosión para sorprender al\n"
			"oponente y aprovecha para absorber\n"
			"su energía vital."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Blacephalon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Blacephalon,
        .frontAnimId = ANIM_SHAKE_GLOW_RED,
        .backPic = gMonBackPic_Blacephalon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Blacephalon,
        .shinyPalette = gMonShinyPalette_Blacephalon,
        .iconSprite = gMonIcon_Blacephalon,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Blacephalon)
        OVERWORLD(
            sPicTable_Blacephalon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blacephalon,
            gShinyOverworldPalette_Blacephalon
        )
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sBlacephalonLevelUpLearnset,
        .teachableLearnset = sBlacephalonTeachableLearnset,
    },
#endif //P_FAMILY_BLACEPHALON

#if P_FAMILY_ZERAORA
    [SPECIES_ZERAORA] =
    {
        .baseHP        = 88,
        .baseAttack    = 112,
        .baseDefense   = 75,
        .baseSpeed     = 143,
        .baseSpAttack  = 102,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zeraora"),
        .cryId = CRY_ZERAORA,
        .natDexNum = NATIONAL_DEX_ZERAORA,
        .categoryName = _("Fulgor"),
        .height = 15,
        .weight = 445,
        .description = COMPOUND_STRING(
            "Hace jirones al rival con sus\n"
            "garras electrificadas. Aunque\n"
            "lo esquive, acaba electrocutado\n"
            "por las descargas."),   
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zeraora,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Zeraora,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Zeraora,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Zeraora,
        .shinyPalette = gMonShinyPalette_Zeraora,
        .iconSprite = gMonIcon_Zeraora,
        .iconPalIndex = 0,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Zeraora)
        OVERWORLD(
            sPicTable_Zeraora,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zeraora,
            gShinyOverworldPalette_Zeraora
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZeraoraLevelUpLearnset,
        .teachableLearnset = sZeraoraTeachableLearnset,
    },
#endif //P_FAMILY_ZERAORA

#if P_FAMILY_MELTAN
    [SPECIES_MELTAN] =
    {
        .baseHP        = 46,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 34,
        .baseSpAttack  = 55,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 150 : 135,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Meltan"),
        .cryId = CRY_MELTAN,
        .natDexNum = NATIONAL_DEX_MELTAN,
        .categoryName = _("Tuerca"),
        .height = 2,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Está compuesto de acero líquido.\n"
            "Funde las partículas de metales\n"
            "del subsuelo para luego nutrirse\n"
            "de ellas."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meltan,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Meltan,
        .frontAnimId = ANIM_GROW_STUTTER_SLOW,
        .backPic = gMonBackPic_Meltan,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Meltan,
        .shinyPalette = gMonShinyPalette_Meltan,
        .iconSprite = gMonIcon_Meltan,
        .iconPalIndex = 2,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Meltan)
        OVERWORLD(
            sPicTable_Meltan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meltan,
            gShinyOverworldPalette_Meltan
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMeltanLevelUpLearnset,
        .teachableLearnset = sMeltanTeachableLearnset,
    },

    [SPECIES_MELMETAL] =
    {
        .baseHP        = 135,
        .baseAttack    = 143,
        .baseDefense   = 143,
        .baseSpeed     = 34,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_IRON_FIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Melmetal"),
        .cryId = CRY_MELMETAL,
        .natDexNum = NATIONAL_DEX_MELMETAL,
        .categoryName = _("Tuerca"),
        .height = 25,
        .weight = 800,
		.description = COMPOUND_STRING(
			"En la antigüedad se le veneraba por\n"
			"su poder de crear hierro. Después\n"
			"de tres milenios, ha regresado."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Melmetal,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Melmetal,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Melmetal,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Melmetal,
        .shinyPalette = gMonShinyPalette_Melmetal,
        .iconSprite = gMonIcon_Melmetal,
        .iconPalIndex = 2,
        SHADOW(3, 10, SHADOW_SIZE_L)
        FOOTPRINT(Melmetal)
        OVERWORLD(
            sPicTable_Melmetal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Melmetal,
            gShinyOverworldPalette_Melmetal
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMelmetalLevelUpLearnset,
        .teachableLearnset = sMelmetalTeachableLearnset,
        .formSpeciesIdTable = sMelmetalFormSpeciesIdTable,
        .formChangeTable = sMelmetalFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MELMETAL_GMAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 143,
        .baseDefense   = 143,
        .baseSpeed     = 34,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_IRON_FIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Melmetal"),
        .cryId = CRY_MELMETAL,
        .natDexNum = NATIONAL_DEX_MELMETAL,
        .categoryName = _("Tuerca"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "En una tierra lejana, existen leyendas\n"
            "sobre un gigante ciclópeo. En realidad,\n"
            "el gigante era un Melmetal que fue\n"
            "inundado con energía Gigantamax."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_MelmetalGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_MelmetalGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MelmetalGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MelmetalGmax,
        .shinyPalette = gMonShinyPalette_MelmetalGmax,
        .iconSprite = gMonIcon_MelmetalGmax,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Melmetal)
        .isMythical = TRUE,
        .isGigantamax = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMelmetalLevelUpLearnset,
        .teachableLearnset = sMelmetalTeachableLearnset,
        .formSpeciesIdTable = sMelmetalFormSpeciesIdTable,
        .formChangeTable = sMelmetalFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN

#ifdef __INTELLISENSE__
};
#endif
