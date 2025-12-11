#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen3[] =
{
#endif

#if P_FAMILY_TREECKO
    [SPECIES_TREECKO] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Treecko"),
        .cryId = CRY_TREECKO,
        .natDexNum = NATIONAL_DEX_TREECKO,
        .categoryName = _("Geco Bosque"),
        .height = 5,
        .weight = 50,
		.description = COMPOUND_STRING(
			"Hace su nido en un árbol gigante y\n"
			"defiende ferozmente su territorio\n"
			"de cualquier peligro. Dicen que es el\n"
			"protector de los árboles del bosque."),
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Treecko,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Treecko,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Treecko,
        .shinyPalette = gMonShinyPalette_Treecko,
        .iconSprite = gMonIcon_Treecko,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Treecko)
        OVERWORLD(
            sPicTable_Treecko,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Treecko,
            gShinyOverworldPalette_Treecko
        )
        .levelUpLearnset = sTreeckoLevelUpLearnset,
        .teachableLearnset = sTreeckoTeachableLearnset,
        .eggMoveLearnset = sTreeckoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_GROVYLE}),
    },

    [SPECIES_GROVYLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grovyle"),
        .cryId = CRY_GROVYLE,
        .natDexNum = NATIONAL_DEX_GROVYLE,
        .categoryName = _("Geco Bosque"),
        .height = 9,
        .weight = 216,
		.description = COMPOUND_STRING(
			"A Grovyle le crecen hojas que le sirven\n"
			"de camuflaje e impiden que los enemigos\n"
			"lo detecten cuando se encuentra en un\n"
			"bosque cuya vegetación es frondosa."),
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grovyle,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Grovyle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Grovyle,
        .shinyPalette = gMonShinyPalette_Grovyle,
        .iconSprite = gMonIcon_Grovyle,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Grovyle)
        OVERWORLD(
            sPicTable_Grovyle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grovyle,
            gShinyOverworldPalette_Grovyle
        )
        .levelUpLearnset = sGrovyleLevelUpLearnset,
        .teachableLearnset = sGrovyleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SCEPTILE}),
    },

    [SPECIES_SCEPTILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 208,
    #endif
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sceptile"),
        .cryId = CRY_SCEPTILE,
        .natDexNum = NATIONAL_DEX_SCEPTILE,
        .categoryName = _("Monte"),
        .height = 17,
        .weight = 522,
		.description = COMPOUND_STRING(
			"Cuando está en la selva, posee una fuerza\n"
			"sin igual. Este Pokémon se ocupa de que los\n"
			"árboles y las plantas crezcan bien. Regula\n"
			"su temperatura corporal con la luz del sol."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Sceptile,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 26),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Sceptile,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Sceptile,
        .shinyPalette = gMonShinyPalette_Sceptile,
        .iconSprite = gMonIcon_Sceptile,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Sceptile)
        OVERWORLD(
            sPicTable_Sceptile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sceptile,
            gShinyOverworldPalette_Sceptile
        )
        .levelUpLearnset = sSceptileLevelUpLearnset,
        .teachableLearnset = sSceptileTeachableLearnset,
        .formSpeciesIdTable = sSceptileFormSpeciesIdTable,
        .formChangeTable = sSceptileFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCEPTILE_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 145,
        .baseSpAttack  = 145,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sceptile"),
        .cryId = CRY_SCEPTILE_MEGA,
        .natDexNum = NATIONAL_DEX_SCEPTILE,
        .categoryName = _("Monte"),
        .height = 19,
        .weight = 552,
        .description = COMPOUND_STRING(
            "Gracias al poder en sus patas rápidas,\n"
            "puede llegar a su rival en un abrir\n"
            "y cerrar de ojos. Puede cortar su cola\n"
            "para tirarla como un misil hacia el rival."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_SceptileMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SceptileMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_SceptileMega,
        .shinyPalette = gMonShinyPalette_SceptileMega,
        .iconSprite = gMonIcon_SceptileMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_L)
        FOOTPRINT(Sceptile)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SceptileMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SceptileMega,
            gShinyOverworldPalette_SceptileMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSceptileLevelUpLearnset,
        .teachableLearnset = sSceptileTeachableLearnset,
        .formSpeciesIdTable = sSceptileFormSpeciesIdTable,
        .formChangeTable = sSceptileFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
    [SPECIES_TORCHIC] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Torchic"),
        .cryId = CRY_TORCHIC,
        .natDexNum = NATIONAL_DEX_TORCHIC,
        .categoryName = _("Polluelo"),
        .height = 4,
        .weight = 25,
		.description = COMPOUND_STRING(
			"Si le atacan, se defiende escupiendo bolas\n"
			"de fuego que forma en el estómago. Los\n"
			"Torchic tienen aversión a la oscuridad\n"
			"porque les impide ver lo que les rodea."),
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Torchic,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Torchic,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Torchic,
        .shinyPalette = gMonShinyPalette_Torchic,
        .iconSprite = gMonIcon_Torchic,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .backPicFemale = gMonBackPic_TorchicF,
        .backPicSizeFemale = MON_COORDS_SIZE(40, 48),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Torchic)
        OVERWORLD(
            sPicTable_Torchic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Torchic,
            gShinyOverworldPalette_Torchic
        )
        OVERWORLD_FEMALE(
            sPicTable_TorchicF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sTorchicLevelUpLearnset,
        .teachableLearnset = sTorchicTeachableLearnset,
        .eggMoveLearnset = sTorchicEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_COMBUSKEN}),
    },

    [SPECIES_COMBUSKEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Combusken"),
        .cryId = CRY_COMBUSKEN,
        .natDexNum = NATIONAL_DEX_COMBUSKEN,
        .categoryName = _("Ave corral"),
        .height = 9,
        .weight = 195,
		.description = COMPOUND_STRING(
			"Propina hasta diez patadas por segundo.\n"
			"Tiene un instinto de lucha tan fuerte\n"
			"que no deja de pelear hasta que el\n"
			"rival se rinde."),
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Combusken,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 12),
        ),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Combusken,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Combusken,
        .shinyPalette = gMonShinyPalette_Combusken,
        .iconSprite = gMonIcon_Combusken,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_CombuskenF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 64),
        .backPicFemale = gMonBackPic_CombuskenF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Combusken)
        OVERWORLD(
            sPicTable_Combusken,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Combusken,
            gShinyOverworldPalette_Combusken
        )
        OVERWORLD_FEMALE(
            sPicTable_CombuskenF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sCombuskenLevelUpLearnset,
        .teachableLearnset = sCombuskenTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLAZIKEN}),
    },

    [SPECIES_BLAZIKEN] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 209,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Blaziken"),
        .cryId = CRY_BLAZIKEN,
        .natDexNum = NATIONAL_DEX_BLAZIKEN,
        .categoryName = _("Llameante"),
        .height = 19,
        .weight = 520,
		.description = COMPOUND_STRING(
			"Aprende artes marciales en las que se dan\n"
			"puñetazos y patadas. Al cabo de varios\n"
			"años, se le queman las plumas y le crecen\n"
			"otras nuevas, muy flexibles, en su lugar."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Blaziken,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Blaziken,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Blaziken,
        .shinyPalette = gMonShinyPalette_Blaziken,
        .iconSprite = gMonIcon_Blaziken,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_BlazikenF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_BlazikenF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_M)
        FOOTPRINT(Blaziken)
        OVERWORLD(
            sPicTable_Blaziken,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blaziken,
            gShinyOverworldPalette_Blaziken
        )
        OVERWORLD_FEMALE(
            sPicTable_BlazikenF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBlazikenLevelUpLearnset,
        .teachableLearnset = sBlazikenTeachableLearnset,
        .formSpeciesIdTable = sBlazikenFormSpeciesIdTable,
        .formChangeTable = sBlazikenFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLAZIKEN_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Blaziken"),
        .cryId = CRY_BLAZIKEN_MEGA,
        .natDexNum = NATIONAL_DEX_BLAZIKEN,
        .categoryName = _("Llameante"),
        .height = 19,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Al desatar una ráfaga de patadas,\n"
            "sus piernas pueden comenzar a arder\n"
            "debido a la fricción con el aire.\n"
            "Siempre son un orgullo para él."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_BlazikenMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlazikenMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_BlazikenMega,
        .shinyPalette = gMonShinyPalette_BlazikenMega,
        .iconSprite = gMonIcon_BlazikenMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Blaziken)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BlazikenMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BlazikenMega,
            gShinyOverworldPalette_BlazikenMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBlazikenLevelUpLearnset,
        .teachableLearnset = sBlazikenTeachableLearnset,
        .formSpeciesIdTable = sBlazikenFormSpeciesIdTable,
        .formChangeTable = sBlazikenFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
    [SPECIES_MUDKIP] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mudkip"),
        .cryId = CRY_MUDKIP,
        .natDexNum = NATIONAL_DEX_MUDKIP,
        .categoryName = _("Pez lodo"),
        .height = 4,
        .weight = 76,
		.description = COMPOUND_STRING(
			"En tierra firme puede levantar grandes\n"
			"cantos rodados haciendo palanca con\n"
			"sus cuatro patas. Duerme enterrado\n"
			"en el suelo, cerca del agua."),
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mudkip,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 13),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Mudkip,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Mudkip,
        .shinyPalette = gMonShinyPalette_Mudkip,
        .iconSprite = gMonIcon_Mudkip,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mudkip)
        OVERWORLD(
            sPicTable_Mudkip,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mudkip,
            gShinyOverworldPalette_Mudkip
        )
        .levelUpLearnset = sMudkipLevelUpLearnset,
        .teachableLearnset = sMudkipTeachableLearnset,
        .eggMoveLearnset = sMudkipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_MARSHTOMP}),
    },

    [SPECIES_MARSHTOMP] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 143,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Marshtomp"),
        .cryId = CRY_MARSHTOMP,
        .natDexNum = NATIONAL_DEX_MARSHTOMP,
        .categoryName = _("Pez lodo"),
        .height = 7,
        .weight = 280,
		.description = COMPOUND_STRING(
			"Tiene unas patas traseras fortísimas\n"
			"que le permiten mantenerse erguido.\n"
			"Como se debilita si se le seca la piel, juega\n"
			"en el lodo para mantenerse hidratado."),
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Marshtomp,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Marshtomp,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Marshtomp,
        .shinyPalette = gMonShinyPalette_Marshtomp,
        .iconSprite = gMonIcon_Marshtomp,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Marshtomp)
        OVERWORLD(
            sPicTable_Marshtomp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Marshtomp,
            gShinyOverworldPalette_Marshtomp
        )
        .levelUpLearnset = sMarshtompLevelUpLearnset,
        .teachableLearnset = sMarshtompTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SWAMPERT}),
    },

    [SPECIES_SWAMPERT] =
    {
        .baseHP        = 100,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swampert"),
        .cryId = CRY_SWAMPERT,
        .natDexNum = NATIONAL_DEX_SWAMPERT,
        .categoryName = _("Pez lodo"),
        .height = 15,
        .weight = 819,
		.description = COMPOUND_STRING(
			"Si detecta que se acerca una tormenta,\n"
			"protege su nido apilando cantos rodados\n"
			"para protegerlo del fuerte oleaje.\n"
			"Nada tan rápido como una moto acuática."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swampert,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_BIG : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Swampert,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Swampert,
        .shinyPalette = gMonShinyPalette_Swampert,
        .iconSprite = gMonIcon_Swampert,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Swampert)
        OVERWORLD(
            sPicTable_Swampert,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Swampert,
            gShinyOverworldPalette_Swampert
        )
        .levelUpLearnset = sSwampertLevelUpLearnset,
        .teachableLearnset = sSwampertTeachableLearnset,
        .formSpeciesIdTable = sSwampertFormSpeciesIdTable,
        .formChangeTable = sSwampertFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SWAMPERT_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 318 : 286,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swampert"),
        .cryId = CRY_SWAMPERT_MEGA,
        .natDexNum = NATIONAL_DEX_SWAMPERT,
        .categoryName = _("Pez lodo"),
        .height = 19,
        .weight = 1020,
        .description = COMPOUND_STRING(
            "Al Mega Evolucionar, la fuerza que\n"
            "emplea para moverse en el agua aumenta.\n"
            "Puede usar su poder tenaz tanto en\n"
            "tierra como en el agua."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SwampertMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SwampertMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_SwampertMega,
        .shinyPalette = gMonShinyPalette_SwampertMega,
        .iconSprite = gMonIcon_SwampertMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Swampert)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SwampertMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SwampertMega,
            gShinyOverworldPalette_SwampertMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSwampertLevelUpLearnset,
        .teachableLearnset = sSwampertTeachableLearnset,
        .formSpeciesIdTable = sSwampertFormSpeciesIdTable,
        .formChangeTable = sSwampertFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_POOCHYENA
    [SPECIES_POOCHYENA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 56,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 44,
    #else
        .expYield = 55,
    #endif
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_RUN_AWAY, ABILITY_QUICK_FEET, ABILITY_RATTLED },
    #else
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_RATTLED },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Poochyena"),
        .cryId = CRY_POOCHYENA,
        .natDexNum = NATIONAL_DEX_POOCHYENA,
        .categoryName = _("Mordisco"),
        .height = 5,
        .weight = 136,
		.description = COMPOUND_STRING(
			"Amenaza al enemigo enseñándole con\n"
			"violencia los colmillos. Persigue a su\n"
			"presa cuando huye, pero, si le atacan,\n"
			"sale huyendo a todo correr."),
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Poochyena,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Poochyena,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Poochyena,
        .shinyPalette = gMonShinyPalette_Poochyena,
        .iconSprite = gMonIcon_Poochyena,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Poochyena)
        OVERWORLD(
            sPicTable_Poochyena,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Poochyena,
            gShinyOverworldPalette_Poochyena
        )
        .levelUpLearnset = sPoochyenaLevelUpLearnset,
        .teachableLearnset = sPoochyenaTeachableLearnset,
        .eggMoveLearnset = sPoochyenaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_MIGHTYENA}),
    },

    [SPECIES_MIGHTYENA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 128,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_MOXIE },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Mightyena"),
        .cryId = CRY_MIGHTYENA,
        .natDexNum = NATIONAL_DEX_MIGHTYENA,
        .categoryName = _("Mordisco"),
        .height = 10,
        .weight = 370,
		.description = COMPOUND_STRING(
			"Mightyena vive con su jauría en estado\n"
			"salvaje. Siempre obedece a su Entrenador.\n"
			"Derrota al enemigo gracias a un trabajo\n"
			"en equipo perfectamente coordinado."),
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mightyena,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Mightyena,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Mightyena,
        .shinyPalette = gMonShinyPalette_Mightyena,
        .iconSprite = gMonIcon_Mightyena,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 6, SHADOW_SIZE_L)
        FOOTPRINT(Mightyena)
        OVERWORLD(
            sPicTable_Mightyena,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mightyena,
            gShinyOverworldPalette_Mightyena
        )
        .levelUpLearnset = sMightyenaLevelUpLearnset,
        .teachableLearnset = sMightyenaTeachableLearnset,
    },
#endif //P_FAMILY_POOCHYENA

#if P_FAMILY_ZIGZAGOON
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ZIGZAGOON_EXP_YIELD 56
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ZIGZAGOON_EXP_YIELD 48
#else
    #define ZIGZAGOON_EXP_YIELD 60
#endif

    [SPECIES_ZIGZAGOON] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 41,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = ZIGZAGOON_EXP_YIELD,
        .evYield_Speed = 1,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_REVIVE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
    #else
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Zigzagoon"),
        .cryId = CRY_ZIGZAGOON,
        .natDexNum = NATIONAL_DEX_ZIGZAGOON,
        .categoryName = _("Mapachito"),
        .height = 4,
        .weight = 175,
		.description = COMPOUND_STRING(
			"Siempre se mueve hacia adelante y hacia\n"
			"atrás frotando la nariz contra el suelo\n"
			"en busca de algo. Es fácil identificarlo\n"
			"por las huellas en zigzag que deja."),
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zigzagoon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Zigzagoon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Zigzagoon,
        .shinyPalette = gMonShinyPalette_Zigzagoon,
        .iconSprite = gMonIcon_Zigzagoon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-4, 0, SHADOW_SIZE_M)
        FOOTPRINT(Zigzagoon)
        OVERWORLD(
            sPicTable_Zigzagoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zigzagoon,
            gShinyOverworldPalette_Zigzagoon
        )
        .levelUpLearnset = sZigzagoonLevelUpLearnset,
        .teachableLearnset = sZigzagoonTeachableLearnset,
        .eggMoveLearnset = sZigzagoonEggMoveLearnset,
        .formSpeciesIdTable = sZigzagoonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LINOONE}),
    },

    [SPECIES_LINOONE] =
    {
        .baseHP        = 78,
        .baseAttack    = 70,
        .baseDefense   = 61,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 128,
        .evYield_Speed = 2,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_MAX_REVIVE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
    #else
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Linoone"),
        .cryId = CRY_LINOONE,
        .natDexNum = NATIONAL_DEX_LINOONE,
        .categoryName = _("Lanzado"),
        .height = 5,
        .weight = 325,
		.description = COMPOUND_STRING(
			"Es tremendamente rápido si corre en línea\n"
			"recta. Cuando detecta a su presa bajo\n"
			"el agua de una charca, da un veloz salto\n"
			"y la atrapa con sus afiladas garras."),
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Linoone,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Linoone,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Linoone,
        .shinyPalette = gMonShinyPalette_Linoone,
        .iconSprite = gMonIcon_Linoone,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-6, 0, SHADOW_SIZE_L)
        FOOTPRINT(Linoone)
        OVERWORLD(
            sPicTable_Linoone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Linoone,
            gShinyOverworldPalette_Linoone
        )
        .levelUpLearnset = sLinooneLevelUpLearnset,
        .teachableLearnset = sLinooneTeachableLearnset,
        .formSpeciesIdTable = sLinooneFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZIGZAGOON_GALAR] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 41,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 255,
        .expYield = ZIGZAGOON_EXP_YIELD,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Zigzagoon"),
        .cryId = CRY_ZIGZAGOON,
        .natDexNum = NATIONAL_DEX_ZIGZAGOON,
        .categoryName = _("Mapachito"),
        .height = 4,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Su inquietud lo mantiene\n"
            "moviendose en zigzag. Chocará\n"
            "adrede con otros para comenzar peleas.\n"
            "Se cree que es la forma más antigua."),
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ZigzagoonGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZigzagoonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZigzagoonGalar,
        .shinyPalette = gMonShinyPalette_ZigzagoonGalar,
        .iconSprite = gMonIcon_ZigzagoonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-5, 0, SHADOW_SIZE_M)
        FOOTPRINT(Zigzagoon)
        OVERWORLD(
            sPicTable_ZigzagoonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZigzagoonGalar,
            gShinyOverworldPalette_ZigzagoonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sZigzagoonGalarLevelUpLearnset,
        .teachableLearnset = sZigzagoonGalarTeachableLearnset,
        .eggMoveLearnset = sZigzagoonGalarEggMoveLearnset,
        .formSpeciesIdTable = sZigzagoonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LINOONE_GALAR}),
    },

    [SPECIES_LINOONE_GALAR] =
    {
        .baseHP        = 78,
        .baseAttack    = 70,
        .baseDefense   = 61,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 128,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Linoone"),
        .cryId = CRY_LINOONE,
        .natDexNum = NATIONAL_DEX_LINOONE,
        .categoryName = _("Lanzado"),
        .height = 5,
        .weight = 325,
        .description = COMPOUND_STRING(
            "Es muy agresivo y desafiará\n"
            "a oponentes más fuertes que él\n"
            "mismo. Usa su lengua larga para provocar\n"
            "a sus rivales y luego arremeter fuerza."),
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LinooneGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LinooneGalar,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_LinooneGalar,
        .shinyPalette = gMonShinyPalette_LinooneGalar,
        .iconSprite = gMonIcon_LinooneGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-4, 0, SHADOW_SIZE_L)
        FOOTPRINT(Linoone)
        OVERWORLD(
            sPicTable_LinooneGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LinooneGalar,
            gShinyOverworldPalette_LinooneGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sLinooneGalarLevelUpLearnset,
        .teachableLearnset = sLinooneGalarTeachableLearnset,
        .formSpeciesIdTable = sLinooneFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_OBSTAGOON, CONDITIONS({IF_TIME, TIME_NIGHT})}),
    },

    [SPECIES_OBSTAGOON] =
    {
        .baseHP        = 93,
        .baseAttack    = 90,
        .baseDefense   = 101,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 260,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RECKLESS, ABILITY_GUTS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Obstagoon"),
        .cryId = CRY_OBSTAGOON,
        .natDexNum = NATIONAL_DEX_OBSTAGOON,
        .categoryName = _("Bloqueador"),
        .height = 16,
        .weight = 460,
		.description = COMPOUND_STRING(
			"La potencia de su voz es realmente\n"
			"pasmosa. La técnica que usa para intimidar\n"
			"al rival mientras grita recibe el\n"
			"nombre de Obstrucción."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Obstagoon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Obstagoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Obstagoon,
        .shinyPalette = gMonShinyPalette_Obstagoon,
        .iconSprite = gMonIcon_Obstagoon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Obstagoon)
        OVERWORLD(
            sPicTable_Obstagoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Obstagoon,
            gShinyOverworldPalette_Obstagoon
        )
        .levelUpLearnset = sObstagoonLevelUpLearnset,
        .teachableLearnset = sObstagoonTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON

#if P_FAMILY_WURMPLE
    [SPECIES_WURMPLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 56,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 39,
    #else
        .expYield = 54,
    #endif
        .evYield_HP = 1,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wurmple"),
        .cryId = CRY_WURMPLE,
        .natDexNum = NATIONAL_DEX_WURMPLE,
        .categoryName = _("Oruga"),
        .height = 3,
        .weight = 36,
		.description = COMPOUND_STRING(
			"Se encarama a las ramas de los árboles\n"
			"y come hojas. El hilo que escupe por la\n"
			"boca se solidifica al contacto con el aire\n"
			"y ralentiza los movimientos del enemigo."),
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wurmple,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wurmple,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Wurmple,
        .shinyPalette = gMonShinyPalette_Wurmple,
        .iconSprite = gMonIcon_Wurmple,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Wurmple)
        OVERWORLD(
            sPicTable_Wurmple,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Wurmple,
            gShinyOverworldPalette_Wurmple
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWurmpleLevelUpLearnset,
        .teachableLearnset = sWurmpleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_SILCOON, CONDITIONS({IF_PID_UPPER_MODULO_10_GT, 4})},
                                {EVO_LEVEL, 7, SPECIES_CASCOON, CONDITIONS({IF_PID_UPPER_MODULO_10_LT, 5})}),
    },

    [SPECIES_SILCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_4) ? 72 : 71,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Silcoon"),
        .cryId = CRY_SILCOON,
        .natDexNum = NATIONAL_DEX_SILCOON,
        .categoryName = _("Crisálida"),
        .height = 6,
        .weight = 100,
		.description = COMPOUND_STRING(
			"Se prepara para la evolución usando la\n"
			"energía que almacenó mientras era un\n"
			"Wurmple. Los dos ojos que tiene le sirven\n"
			"para vigilar lo que ocurre en su territorio."),
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Silcoon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Silcoon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Silcoon,
        .shinyPalette = gMonShinyPalette_Silcoon,
        .iconSprite = gMonIcon_Silcoon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Silcoon)
        OVERWORLD(
            sPicTable_Silcoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Silcoon,
            gShinyOverworldPalette_Silcoon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sSilcoonLevelUpLearnset,
        .teachableLearnset = sSilcoonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEAUTIFLY}),
    },

    [SPECIES_BEAUTIFLY] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 100 : 90,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 198,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 178,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #else
        .expYield = 161,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_RIVALRY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Beautifly"),
        .cryId = CRY_BEAUTIFLY,
        .natDexNum = NATIONAL_DEX_BEAUTIFLY,
        .categoryName = _("Mariposa"),
        .height = 10,
        .weight = 284,
		.description = COMPOUND_STRING(
			"Su principal característica son los\n"
			"dibujos y colores de sus alas. Vuela por\n"
			"campos cubiertos de flores para recoger\n"
			"el polen. Si le molestan, ataca sin dudar."),
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Beautifly,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Beautifly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Beautifly,
        .shinyPalette = gMonShinyPalette_Beautifly,
        .iconSprite = gMonIcon_Beautifly,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_BeautiflyF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_BeautiflyF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Beautifly)
        OVERWORLD(
            sPicTable_Beautifly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Beautifly,
            gShinyOverworldPalette_Beautifly
        )
        OVERWORLD_FEMALE(
            sPicTable_BeautiflyF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sBeautiflyLevelUpLearnset,
        .teachableLearnset = sBeautiflyTeachableLearnset,
    },

    [SPECIES_CASCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 120,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 72,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 41,
    #else
        .expYield = 72,
    #endif
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Cascoon"),
        .cryId = CRY_CASCOON,
        .natDexNum = NATIONAL_DEX_CASCOON,
        .categoryName = _("Crisálida"),
        .height = 7,
        .weight = 115,
		.description = COMPOUND_STRING(
			"Para evitar que el enemigo lo descubra,\n"
			"se oculta inmóvil debajo de hojas grandes\n"
			"o entre ramas. También se recubre\n"
			"de hojas secas para camuflarse."),
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cascoon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Cascoon,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Cascoon,
        .shinyPalette = gMonShinyPalette_Cascoon,
        .iconSprite = gMonIcon_Cascoon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Cascoon)
        OVERWORLD(
            sPicTable_Cascoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Cascoon,
            gShinyOverworldPalette_Cascoon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCascoonLevelUpLearnset,
        .teachableLearnset = sCascoonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_DUSTOX}),
    },

    [SPECIES_DUSTOX] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 193,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 135,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 161,
    #else
        .expYield = 160,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_COMPOUND_EYES },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dustox"),
        .cryId = CRY_DUSTOX,
        .natDexNum = NATIONAL_DEX_DUSTOX,
        .categoryName = _("polilla ven."),
        .height = 12,
        .weight = 316,
		.description = COMPOUND_STRING(
			"Es un Pokémon nocturno que llega\n"
			"volando a la ciudad desde campos y\n"
			"montañas atraído por las luces. Al batir\n"
			"las alas, libera un polvillo muy tóxico."),
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dustox,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Dustox,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Dustox,
        .shinyPalette = gMonShinyPalette_Dustox,
        .iconSprite = gMonIcon_Dustox,
        .iconPalIndex = 5,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_DustoxF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicFemale = gMonBackPic_DustoxF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Dustox)
        OVERWORLD(
            sPicTable_Dustox,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Dustox,
            gShinyOverworldPalette_Dustox
        )
        OVERWORLD_FEMALE(
            sPicTable_DustoxF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sDustoxLevelUpLearnset,
        .teachableLearnset = sDustoxTeachableLearnset,
    },
#endif //P_FAMILY_WURMPLE

#if P_FAMILY_LOTAD
    [SPECIES_LOTAD] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER, TYPE_GRASS),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 74,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Lotad"),
        .cryId = CRY_LOTAD,
        .natDexNum = NATIONAL_DEX_LOTAD,
        .categoryName = _("Alga"),
        .height = 5,
        .weight = 26,
		.description = COMPOUND_STRING(
			"Vive en charcas de agua clara. Se le\n"
			"conoce por ayudar a Pokémon pequeños\n"
			"a cruzar las charcas transportándolos\n"
			"sobre la hoja que tiene en la cabeza."),
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lotad,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lotad,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Lotad,
        .shinyPalette = gMonShinyPalette_Lotad,
        .iconSprite = gMonIcon_Lotad,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Lotad)
        OVERWORLD(
            sPicTable_Lotad,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lotad,
            gShinyOverworldPalette_Lotad
        )
        .levelUpLearnset = sLotadLevelUpLearnset,
        .teachableLearnset = sLotadTeachableLearnset,
        .eggMoveLearnset = sLotadEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_LOMBRE}),
    },

    [SPECIES_LOMBRE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_GRASS),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 141,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Lombre"),
        .cryId = CRY_LOMBRE,
        .natDexNum = NATIONAL_DEX_LOMBRE,
        .categoryName = _("Alegre"),
        .height = 12,
        .weight = 325,
		.description = COMPOUND_STRING(
			"De noche, le encanta surgir de repente\n"
			"del río para asustar a la gente.\n"
			"Se alimenta del musgo que crece en\n"
			"las rocas de las cuencas de los ríos."),
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lombre,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lombre,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Lombre,
        .shinyPalette = gMonShinyPalette_Lombre,
        .iconSprite = gMonIcon_Lombre,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Lombre)
        OVERWORLD(
            sPicTable_Lombre,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lombre,
            gShinyOverworldPalette_Lombre
        )
        .levelUpLearnset = sLombreLevelUpLearnset,
        .teachableLearnset = sLombreTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}),
    },

    [SPECIES_LUDICOLO] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_WATER, TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 240,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 181,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ludicolo"),
        .cryId = CRY_LUDICOLO,
        .natDexNum = NATIONAL_DEX_LUDICOLO,
        .categoryName = _("Optimista"),
        .height = 15,
        .weight = 550,
		.description = COMPOUND_STRING(
			"Cuando oye música festiva, las células\n"
			"se le revolucionan y comienza a bailar\n"
			"con mucho ritmo. No se acobarda\n"
			"ni delante del enemigo más fuerte."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Ludicolo,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Ludicolo,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Ludicolo,
        .shinyPalette = gMonShinyPalette_Ludicolo,
        .iconSprite = gMonIcon_Ludicolo,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_LudicoloF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_LudicoloF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Ludicolo)
        OVERWORLD(
            sPicTable_Ludicolo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ludicolo,
            gShinyOverworldPalette_Ludicolo
        )
        OVERWORLD_FEMALE(
            sPicTable_LudicoloF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sLudicoloLevelUpLearnset,
        .teachableLearnset = sLudicoloTeachableLearnset,
    },
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
    [SPECIES_SEEDOT] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 44 : 74,
        .evYield_Defense = 1,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Seedot"),
        .cryId = CRY_SEEDOT,
        .natDexNum = NATIONAL_DEX_SEEDOT,
        .categoryName = _("Bellota"),
        .height = 5,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Se cuelga de las ramas y absorbe sus\n"
			"nutrientes. Cuando acaba de comer,\n"
			"se queda tan lleno que acaba cayéndose\n"
			"al suelo y dándose un tortazo."),
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seedot,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Seedot,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Seedot,
        .shinyPalette = gMonShinyPalette_Seedot,
        .iconSprite = gMonIcon_Seedot,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Seedot)
        OVERWORLD(
            sPicTable_Seedot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Seedot,
            gShinyOverworldPalette_Seedot
        )
        .levelUpLearnset = sSeedotLevelUpLearnset,
        .teachableLearnset = sSeedotTeachableLearnset,
        .eggMoveLearnset = sSeedotEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_NUZLEAF}),
    },

    [SPECIES_NUZLEAF] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DARK),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 141,
        .evYield_Attack = 2,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Nuzleaf"),
        .cryId = CRY_NUZLEAF,
        .natDexNum = NATIONAL_DEX_NUZLEAF,
        .categoryName = _("Astuto"),
        .height = 10,
        .weight = 280,
		.description = COMPOUND_STRING(
			"Vive en los bosques y se le da muy bien\n"
			"subirse a los árboles. La nariz que tiene,\n"
			"grande y puntiaguda, es su punto débil.\n"
			"Si se la pellizcan, pierde fuerza."),
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nuzleaf,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nuzleaf,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Nuzleaf,
        .shinyPalette = gMonShinyPalette_Nuzleaf,
        .iconSprite = gMonIcon_Nuzleaf,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_NuzleafF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 56),
        .backPicFemale = gMonBackPic_NuzleafF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Nuzleaf)
        OVERWORLD(
            sPicTable_Nuzleaf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nuzleaf,
            gShinyOverworldPalette_Nuzleaf
        )
        OVERWORLD_FEMALE(
            sPicTable_NuzleafF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sNuzleafLevelUpLearnset,
        .teachableLearnset = sNuzleafTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}),
    },

    [SPECIES_SHIFTRY] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DARK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 240,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 181,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_WIND_RIDER, ABILITY_PICKPOCKET },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shiftry"),
        .cryId = CRY_SHIFTRY,
        .natDexNum = NATIONAL_DEX_SHIFTRY,
        .categoryName = _("Malvado"),
        .height = 13,
        .weight = 596,
		.description = COMPOUND_STRING(
			"Dicen que llega con los fríos vientos de\n"
			"invierno. Se le considera guardián de los\n"
			"bosques y se le teme; nadie se atreve a\n"
			"adentrarse en su morada."),
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shiftry,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Shiftry,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Shiftry,
        .shinyPalette = gMonShinyPalette_Shiftry,
        .iconSprite = gMonIcon_Shiftry,
        .iconPalIndex = 5,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_ShiftryF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_ShiftryF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Shiftry)
        OVERWORLD(
            sPicTable_Shiftry,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shiftry,
            gShinyOverworldPalette_Shiftry
        )
        OVERWORLD_FEMALE(
            sPicTable_ShiftryF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sShiftryLevelUpLearnset,
        .teachableLearnset = sShiftryTeachableLearnset,
    },
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_TAILLOW
    [SPECIES_TAILLOW] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 54 : 59,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Taillow"),
        .cryId = CRY_TAILLOW,
        .natDexNum = NATIONAL_DEX_TAILLOW,
        .categoryName = _("Pequebuche"),
        .height = 3,
        .weight = 23,
		.description = COMPOUND_STRING(
			"Es pequeño, pero muy valiente. No tiene\n"
			"problema en enfrentarse a un Skarmory más\n"
			"grande en igualdad de condiciones. Pero,\n"
			"como tenga hambre, pierde determinación."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Taillow,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Taillow,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Taillow,
        .shinyPalette = gMonShinyPalette_Taillow,
        .iconSprite = gMonIcon_Taillow,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Taillow)
        OVERWORLD(
            sPicTable_Taillow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Taillow,
            gShinyOverworldPalette_Taillow
        )
        .levelUpLearnset = sTaillowLevelUpLearnset,
        .teachableLearnset = sTaillowTeachableLearnset,
        .eggMoveLearnset = sTaillowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SWELLOW}),
    },

    [SPECIES_SWELLOW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 75 : 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 159,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 151,
    #else
        .expYield = 162,
    #endif
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swellow"),
        .cryId = CRY_SWELLOW,
        .natDexNum = NATIONAL_DEX_SWELLOW,
        .categoryName = _("Buche"),
        .height = 7,
        .weight = 198,
		.description = COMPOUND_STRING(
			"Swellow se lanza al agua para atrapar\n"
			"a su presa y no se le escapa ni una.\n"
			"Suele ir volando en busca de tierras\n"
			"de clima cálido."),
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swellow,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Swellow,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Swellow,
        .shinyPalette = gMonShinyPalette_Swellow,
        .iconSprite = gMonIcon_Swellow,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 7, SHADOW_SIZE_M)
        FOOTPRINT(Swellow)
        OVERWORLD(
            sPicTable_Swellow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Swellow,
            gShinyOverworldPalette_Swellow
        )
        .levelUpLearnset = sSwellowLevelUpLearnset,
        .teachableLearnset = sSwellowTeachableLearnset,
    },
#endif //P_FAMILY_TAILLOW

#if P_FAMILY_WINGULL
    [SPECIES_WINGULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 54 : 64,
        .evYield_Speed = 1,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_KEEN_EYE, ABILITY_HYDRATION, ABILITY_RAIN_DISH },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RAIN_DISH },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wingull"),
        .cryId = CRY_WINGULL,
        .natDexNum = NATIONAL_DEX_WINGULL,
        .categoryName = _("Gaviota"),
        .height = 6,
        .weight = 95,
		.description = COMPOUND_STRING(
			"Hace su nido en acantilados escarpados, a\n"
			"la orilla del mar. Como le cuesta batir las\n"
			"alas durante mucho tiempo, se deja llevar\n"
			"por las corrientes de aire ascendentes."),
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wingull,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 24 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 23),
            ANIMCMD_FRAME(0, 13),
        ),
        .frontAnimId = ANIM_H_PIVOT,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Wingull,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Wingull,
        .shinyPalette = gMonShinyPalette_Wingull,
        .iconSprite = gMonIcon_Wingull,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 15, SHADOW_SIZE_S)
        FOOTPRINT(Wingull)
        OVERWORLD(
            sPicTable_Wingull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Wingull,
            gShinyOverworldPalette_Wingull
        )
        .levelUpLearnset = sWingullLevelUpLearnset,
        .teachableLearnset = sWingullTeachableLearnset,
        .eggMoveLearnset = sWingullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_PELIPPER}),
    },

    [SPECIES_PELIPPER] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 154,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 151,
    #else
        .expYield = 164,
    #endif
        .evYield_Defense = 2,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_KEEN_EYE, ABILITY_DRIZZLE, ABILITY_RAIN_DISH },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RAIN_DISH },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pelipper"),
        .cryId = CRY_PELIPPER,
        .natDexNum = NATIONAL_DEX_PELIPPER,
        .categoryName = _("Ave agua"),
        .height = 12,
        .weight = 280,
		.description = COMPOUND_STRING(
			"Va esquivando las crestas de las olas.\n"
			"Cuando localiza a su presa, usa el enorme\n"
			"pico que tiene para sacarla del agua.\n"
			"También protege sus huevos con él."),
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pelipper,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Pelipper,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Pelipper,
        .shinyPalette = gMonShinyPalette_Pelipper,
        .iconSprite = gMonIcon_Pelipper,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 17, SHADOW_SIZE_M)
        FOOTPRINT(Pelipper)
        OVERWORLD(
            sPicTable_Pelipper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Pelipper,
            gShinyOverworldPalette_Pelipper
        )
        .levelUpLearnset = sPelipperLevelUpLearnset,
        .teachableLearnset = sPelipperTeachableLearnset,
    },
#endif //P_FAMILY_WINGULL

#if P_FAMILY_RALTS
#define RALTS_FAMILY_TYPE2 (P_UPDATED_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_PSYCHIC)

#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define RALTS_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS)
#else
    #define RALTS_FAMILY_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS)
#endif

    [SPECIES_RALTS] =
    {
        .baseHP        = 28,
        .baseAttack    = 25,
        .baseDefense   = 25,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_PSYCHIC, RALTS_FAMILY_TYPE2),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 70,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ralts"),
        .cryId = CRY_RALTS,
        .natDexNum = NATIONAL_DEX_RALTS,
        .categoryName = _("Sensible"),
        .height = 4,
        .weight = 66,
		.description = COMPOUND_STRING(
			"Ralts tiene la capacidad de detectar las\n"
			"sensaciones de la gente y de los Pokémon\n"
			"gracias a los cuernos de la cabeza. Si\n"
			"percibe energía negativa, se protegerá."),
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ralts,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Ralts,
        .backPicSize = MON_COORDS_SIZE(32, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Ralts,
        .shinyPalette = gMonShinyPalette_Ralts,
        .iconSprite = gMonIcon_Ralts,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Ralts)
        OVERWORLD(
            sPicTable_Ralts,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ralts,
            gShinyOverworldPalette_Ralts
        )
        .levelUpLearnset = sRaltsLevelUpLearnset,
        .teachableLearnset = sRaltsTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_KIRLIA}),
    },

    [SPECIES_KIRLIA] =
    {
        .baseHP        = 38,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_PSYCHIC, RALTS_FAMILY_TYPE2),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 97 : 140,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kirlia"),
        .cryId = CRY_KIRLIA,
        .natDexNum = NATIONAL_DEX_KIRLIA,
        .categoryName = _("Sensorio"),
        .height = 8,
        .weight = 202,
		.description = COMPOUND_STRING(
			"Kirlia tiene poderes psicoquinéticos con\n"
			"los que crea un espacio dimensional para\n"
			"ver el futuro. Dicen que baila con energía\n"
			"en las mañanas soleadas."),
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kirlia,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 39),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kirlia,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kirlia,
        .shinyPalette = gMonShinyPalette_Kirlia,
        .iconSprite = gMonIcon_Kirlia,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Kirlia)
        OVERWORLD(
            sPicTable_Kirlia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kirlia,
            gShinyOverworldPalette_Kirlia
        )
        .levelUpLearnset = sKirliaLevelUpLearnset,
        .teachableLearnset = sKirliaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GARDEVOIR}
                            #if P_GEN_4_CROSS_EVOS
                                ,{EVO_ITEM, ITEM_DAWN_STONE, SPECIES_GALLADE, CONDITIONS({IF_GENDER, MON_MALE})}
                            #endif
                            ),
    },

    [SPECIES_GARDEVOIR] =
    {
        .baseHP        = 68,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 125,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, RALTS_FAMILY_TYPE2),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 259,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 233,
    #else
        .expYield = 208,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gardevoir"),
        .cryId = CRY_GARDEVOIR,
        .natDexNum = NATIONAL_DEX_GARDEVOIR,
        .categoryName = _("Envolvente"),
        .height = 16,
        .weight = 484,
		.description = COMPOUND_STRING(
			"Al parecer, no siente la fuerza de la\n"
			"gravedad porque se sostiene gracias a\n"
			"la energía psicoquinética. Por proteger\n"
			"a su Entrenador, sería capaz de todo."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gardevoir,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gardevoir,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gardevoir,
        .shinyPalette = gMonShinyPalette_Gardevoir,
        .iconSprite = gMonIcon_Gardevoir,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Gardevoir)
        OVERWORLD(
            sPicTable_Gardevoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gardevoir,
            gShinyOverworldPalette_Gardevoir
        )
        .levelUpLearnset = sGardevoirLevelUpLearnset,
        .teachableLearnset = sGardevoirTeachableLearnset,
        .formSpeciesIdTable = sGardevoirFormSpeciesIdTable,
        .formChangeTable = sGardevoirFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARDEVOIR_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 165,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_PSYCHIC, RALTS_FAMILY_TYPE2),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gardevoir"),
        .cryId = CRY_GARDEVOIR_MEGA,
        .natDexNum = NATIONAL_DEX_GARDEVOIR,
        .categoryName = _("Envolvente"),
        .height = 16,
        .weight = 484,
        .description = COMPOUND_STRING(
            "Al abrir su corazón, Mega Gardevoir se\n"
            "vuelve capaz de usar un poder enorme.\n"
            "Se dice que la placa roja en su pecho es\n"
            "una manifestación física de su corazón."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GardevoirMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GardevoirMega,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_GardevoirMega,
        .shinyPalette = gMonShinyPalette_GardevoirMega,
        .iconSprite = gMonIcon_GardevoirMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gardevoir)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GardevoirMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GardevoirMega,
            gShinyOverworldPalette_GardevoirMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGardevoirLevelUpLearnset,
        .teachableLearnset = sGardevoirTeachableLearnset,
        .formSpeciesIdTable = sGardevoirFormSpeciesIdTable,
        .formChangeTable = sGardevoirFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GALLADE] =
    {
        .baseHP        = 68,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 259,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 233,
    #else
        .expYield = 208,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
    #if P_UPDATED_ABILITIES >= GEN_9
        .abilities = { ABILITY_STEADFAST, ABILITY_SHARPNESS, ABILITY_JUSTIFIED },
    #else
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_JUSTIFIED },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
        .cryId = CRY_GALLADE,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Cuchilla"),
        .height = 16,
        .weight = 520,
		.description = COMPOUND_STRING(
			"Cuando quiere proteger a alguien,\n"
			"extiende los codos como si fueran\n"
			"espadas y lucha con fiereza."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gallade,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Gallade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gallade,
        .shinyPalette = gMonShinyPalette_Gallade,
        .iconSprite = gMonIcon_Gallade,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
        OVERWORLD(
            sPicTable_Gallade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gallade,
            gShinyOverworldPalette_Gallade
        )
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GALLADE_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 309 : 278,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = RALTS_FAMILY_EGG_GROUPS,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
        .cryId = CRY_GALLADE_MEGA,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Cuchilla"),
        .height = 16,
        .weight = 564,
        .description = COMPOUND_STRING(
            "Tiene una apariencia caballeresca.\n"
            "Puede usar su poder para transformar\n"
            "sus brazos en cuchillas y luchar\n"
            "usando un estilo de doble empuñadura."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_GalladeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GalladeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GalladeMega,
        .shinyPalette = gMonShinyPalette_GalladeMega,
        .iconSprite = gMonIcon_GalladeMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GalladeMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GalladeMega,
            gShinyOverworldPalette_GalladeMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS

#if P_FAMILY_SURSKIT
    [SPECIES_SURSKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 32,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_BUG, TYPE_WATER),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 54 : 63,
        .evYield_Speed = 1,
        .itemCommon = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Surskit"),
        .cryId = CRY_SURSKIT,
        .natDexNum = NATIONAL_DEX_SURSKIT,
        .categoryName = _("Zapatero"),
        .height = 5,
        .weight = 17,
		.description = COMPOUND_STRING(
			"Se agrupan en charcos después de la lluvia\n"
			"de la tarde, moviéndose por la superficie\n"
			"del agua como si se deslizaran. Segregan\n"
			"una miel de dulce aroma por la cabeza."),
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Surskit,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Surskit,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Surskit,
        .shinyPalette = gMonShinyPalette_Surskit,
        .iconSprite = gMonIcon_Surskit,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Surskit)
        OVERWORLD(
            sPicTable_Surskit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Surskit,
            gShinyOverworldPalette_Surskit
        )
        .levelUpLearnset = sSurskitLevelUpLearnset,
        .teachableLearnset = sSurskitTeachableLearnset,
        .eggMoveLearnset = sSurskitEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_MASQUERAIN}),
    },

    [SPECIES_MASQUERAIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 62,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 80 : 60,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 100 : 80,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 159,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 145,
    #else
        .expYield = 128,
    #endif
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_BUG),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Masquerain"),
        .cryId = CRY_MASQUERAIN,
        .natDexNum = NATIONAL_DEX_MASQUERAIN,
        .categoryName = _("Globocular"),
        .height = 8,
        .weight = 36,
		.description = COMPOUND_STRING(
			"Intimida al enemigo con los ojos que tiene\n"
			"dibujados en las antenas. Como no puede\n"
			"volar si se le mojan las alas, se protege\n"
			"de la lluvia bajo aleros y grandes árboles."),
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Masquerain,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Masquerain,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Masquerain,
        .shinyPalette = gMonShinyPalette_Masquerain,
        .iconSprite = gMonIcon_Masquerain,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 17, SHADOW_SIZE_M)
        FOOTPRINT(Masquerain)
        OVERWORLD(
            sPicTable_Masquerain,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Masquerain,
            gShinyOverworldPalette_Masquerain
        )
        .levelUpLearnset = sMasquerainLevelUpLearnset,
        .teachableLearnset = sMasquerainTeachableLearnset,
    },
#endif //P_FAMILY_SURSKIT

#if P_FAMILY_SHROOMISH
    [SPECIES_SHROOMISH] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 65,
        .evYield_HP = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_QUICK_FEET },
    #else
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shroomish"),
        .cryId = CRY_SHROOMISH,
        .natDexNum = NATIONAL_DEX_SHROOMISH,
        .categoryName = _("Hongo"),
        .height = 4,
        .weight = 45,
		.description = COMPOUND_STRING(
			"Le encanta alimentarse de la tierra\n"
			"abonada y húmeda de los bosques. Si vas a\n"
			"un bosque después de que haya llovido,\n"
			"verás a Shroomish engullendo tierra."),
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shroomish,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shroomish,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Shroomish,
        .shinyPalette = gMonShinyPalette_Shroomish,
        .iconSprite = gMonIcon_Shroomish,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Shroomish)
        OVERWORLD(
            sPicTable_Shroomish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shroomish,
            gShinyOverworldPalette_Shroomish
        )
        .levelUpLearnset = sShroomishLevelUpLearnset,
        .teachableLearnset = sShroomishTeachableLearnset,
        .eggMoveLearnset = sShroomishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_BRELOOM}),
    },

    [SPECIES_BRELOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 165,
        .evYield_Attack = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_TECHNICIAN },
    #else
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_TECHNICIAN },
    #endif
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Breloom"),
        .cryId = CRY_BRELOOM,
        .natDexNum = NATIONAL_DEX_BRELOOM,
        .categoryName = _("Hongo"),
        .height = 12,
        .weight = 392,
		.description = COMPOUND_STRING(
			"Libera esporas por los orificios de la\n"
			"cubierta de la cabeza. Le encanta el clima\n"
			"cálido y húmedo. Se nutre de árboles y\n"
			"plantas que hay en el campo y en el bosque."),
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Breloom,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Breloom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Breloom,
        .shinyPalette = gMonShinyPalette_Breloom,
        .iconSprite = gMonIcon_Breloom,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 9, SHADOW_SIZE_M)
        FOOTPRINT(Breloom)
        OVERWORLD(
            sPicTable_Breloom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Breloom,
            gShinyOverworldPalette_Breloom
        )
        .levelUpLearnset = sBreloomLevelUpLearnset,
        .teachableLearnset = sBreloomTeachableLearnset,
    },
#endif //P_FAMILY_SHROOMISH

#if P_FAMILY_SLAKOTH
    [SPECIES_SLAKOTH] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 83,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TRUANT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Slakoth"),
        .cryId = CRY_SLAKOTH,
        .natDexNum = NATIONAL_DEX_SLAKOTH,
        .categoryName = _("Gandul"),
        .height = 8,
        .weight = 240,
		.description = COMPOUND_STRING(
			"Duerme prácticamente día y noche.\n"
			"Nunca cambia de madriguera, aunque\n"
			"a veces suele recorrer grandes distancias\n"
			"nadando en las aguas de los ríos."),
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Slakoth,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Slakoth,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Slakoth,
        .shinyPalette = gMonShinyPalette_Slakoth,
        .iconSprite = gMonIcon_Slakoth,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -4, SHADOW_SIZE_M)
        FOOTPRINT(Slakoth)
        OVERWORLD(
            sPicTable_Slakoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Slakoth,
            gShinyOverworldPalette_Slakoth
        )
        .levelUpLearnset = sSlakothLevelUpLearnset,
        .teachableLearnset = sSlakothTeachableLearnset,
        .eggMoveLearnset = sSlakothEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_VIGOROTH}),
    },

    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 126,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vigoroth"),
        .cryId = CRY_VIGOROTH,
        .natDexNum = NATIONAL_DEX_VIGOROTH,
        .categoryName = _("Mono feroz"),
        .height = 14,
        .weight = 465,
		.description = COMPOUND_STRING(
			"No puede estarse quieto porque tiene\n"
			"la sangre en continua ebullición. Se pasa\n"
			"el día corriendo por campos y montañas\n"
			"para calmarse y poder dormir por la noche."),
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vigoroth,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Vigoroth,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Vigoroth,
        .shinyPalette = gMonShinyPalette_Vigoroth,
        .iconSprite = gMonIcon_Vigoroth,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_M)
        FOOTPRINT(Vigoroth)
        OVERWORLD(
            sPicTable_Vigoroth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vigoroth,
            gShinyOverworldPalette_Vigoroth
        )
        .levelUpLearnset = sVigorothLevelUpLearnset,
        .teachableLearnset = sVigorothTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SLAKING}),
    },

    [SPECIES_SLAKING] =
    {
        .baseHP        = 150,
        .baseAttack    = 160,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 285,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 252,
    #else
        .expYield = 210,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TRUANT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Slaking"),
        .cryId = CRY_SLAKING,
        .natDexNum = NATIONAL_DEX_SLAKING,
        .categoryName = _("Holgazán"),
        .height = 20,
        .weight = 1305,
		.description = COMPOUND_STRING(
			"Cuando es temporada, los Slaking\n"
			"se agrupan cerca de los árboles y esperan\n"
			"con paciencia a que la fruta madura caiga."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Slaking,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Slaking,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Slaking,
        .shinyPalette = gMonShinyPalette_Slaking,
        .iconSprite = gMonIcon_Slaking,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Slaking)
        OVERWORLD(
            sPicTable_Slaking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Slaking,
            gShinyOverworldPalette_Slaking
        )
        .levelUpLearnset = sSlakingLevelUpLearnset,
        .teachableLearnset = sSlakingTeachableLearnset,
    },
#endif //P_FAMILY_SLAKOTH

#if P_FAMILY_NINCADA
    [SPECIES_NINCADA] =
    {
        .baseHP        = 31,
        .baseAttack    = 45,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG, TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 65,
        .evYield_Defense = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Nincada"),
        .cryId = CRY_NINCADA,
        .natDexNum = NATIONAL_DEX_NINCADA,
        .categoryName = _("Aprendiz"),
        .height = 5,
        .weight = 55,
		.description = COMPOUND_STRING(
			"Hace su nido en las raíces de un árbol\n"
			"resistente. Tiene unas antenas con forma\n"
			"de bigotes que usa para examinar\n"
			"el oscuro terreno que le rodea."),
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nincada,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nincada,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Nincada,
        .shinyPalette = gMonShinyPalette_Nincada,
        .iconSprite = gMonIcon_Nincada,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, -3, SHADOW_SIZE_M)
        FOOTPRINT(Nincada)
        OVERWORLD(
            sPicTable_Nincada,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Nincada,
            gShinyOverworldPalette_Nincada
        )
        .levelUpLearnset = sNincadaLevelUpLearnset,
        .teachableLearnset = sNincadaTeachableLearnset,
        .eggMoveLearnset = sNincadaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_NINJASK},
                            #if P_SHEDINJA_BALL >= GEN_4
                                {EVO_SPLIT_FROM_EVO, SPECIES_NINJASK, SPECIES_SHEDINJA, CONDITIONS({IF_BAG_ITEM_COUNT, ITEM_POKE_BALL, 1})}),
                            #else
                                {EVO_SPLIT_FROM_EVO, SPECIES_NINJASK, SPECIES_SHEDINJA}),
                            #endif
    },

    [SPECIES_NINJASK] =
    {
        .baseHP        = 61,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 160,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 155,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ninjask"),
        .cryId = CRY_NINJASK,
        .natDexNum = NATIONAL_DEX_NINJASK,
        .categoryName = _("Ninja"),
        .height = 8,
        .weight = 120,
		.description = COMPOUND_STRING(
			"Como se mueve de un lado a otro a una\n"
			"velocidad de vértigo, es casi imposible\n"
			"verlo. Oír su zumbido durante mucho\n"
			"tiempo llega a dar dolor de cabeza."),
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ninjask,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Ninjask,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Ninjask,
        .shinyPalette = gMonShinyPalette_Ninjask,
        .iconSprite = gMonIcon_Ninjask,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Ninjask)
        OVERWORLD(
            sPicTable_Ninjask,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Ninjask,
            gShinyOverworldPalette_Ninjask
        )
        .levelUpLearnset = sNinjaskLevelUpLearnset,
        .teachableLearnset = sNinjaskTeachableLearnset,
    },

    [SPECIES_SHEDINJA] =
    {
        .baseHP        = 1,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 83 : 95,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_WONDER_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shedinja"),
        .cryId = CRY_SHEDINJA,
        .natDexNum = NATIONAL_DEX_SHEDINJA,
        .categoryName = _("Muda"),
        .height = 8,
        .weight = 12,
		.description = COMPOUND_STRING(
			"Curioso Pokémon que permanece\n"
			"en suspensión sin mover las alas.\n"
			"Su interior está hueco y\n"
			"totalmente oscuro."),
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shedinja,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Shedinja,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Shedinja,
        .shinyPalette = gMonShinyPalette_Shedinja,
        .iconSprite = gMonIcon_Shedinja,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 9, SHADOW_SIZE_S)
        FOOTPRINT(Shedinja)
        OVERWORLD(
            sPicTable_Shedinja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Shedinja,
            gShinyOverworldPalette_Shedinja
        )
        .levelUpLearnset = sShedinjaLevelUpLearnset,
        .teachableLearnset = sShedinjaTeachableLearnset,
    },
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
    [SPECIES_WHISMUR] =
    {
        .baseHP        = 64,
        .baseAttack    = 51,
        .baseDefense   = 23,
        .baseSpeed     = 28,
        .baseSpAttack  = 51,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 48 : 68,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Whismur"),
        .cryId = CRY_WHISMUR,
        .natDexNum = NATIONAL_DEX_WHISMUR,
        .categoryName = _("Susurro"),
        .height = 6,
        .weight = 163,
		.description = COMPOUND_STRING(
			"Suena con el mismo volumen que un reactor.\n"
			"Aspira a través de sus canales auditivos,\n"
			"por eso puede gritar continuamente\n"
			"sin parar para recuperar el aliento."),
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Whismur,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Whismur,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Whismur,
        .shinyPalette = gMonShinyPalette_Whismur,
        .iconSprite = gMonIcon_Whismur,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Whismur)
        OVERWORLD(
            sPicTable_Whismur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Whismur,
            gShinyOverworldPalette_Whismur
        )
        .levelUpLearnset = sWhismurLevelUpLearnset,
        .teachableLearnset = sWhismurTeachableLearnset,
        .eggMoveLearnset = sWhismurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LOUDRED}),
    },

    [SPECIES_LOUDRED] =
    {
        .baseHP        = 84,
        .baseAttack    = 71,
        .baseDefense   = 43,
        .baseSpeed     = 48,
        .baseSpAttack  = 71,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 120,
        .expYield = 126,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Loudred"),
        .cryId = CRY_LOUDRED,
        .natDexNum = NATIONAL_DEX_LOUDRED,
        .categoryName = _("Chillón"),
        .height = 10,
        .weight = 405,
		.description = COMPOUND_STRING(
			"Orienta los altavoces redondos que tiene\n"
			"en la cabeza para atacar a su rival con\n"
			"ondas ultrasónicas a gran volumen. Genera\n"
			"energía dando pisotones en el suelo."),
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Loudred,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 33),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Loudred,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Loudred,
        .shinyPalette = gMonShinyPalette_Loudred,
        .iconSprite = gMonIcon_Loudred,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Loudred)
        OVERWORLD(
            sPicTable_Loudred,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Loudred,
            gShinyOverworldPalette_Loudred
        )
        .levelUpLearnset = sLoudredLevelUpLearnset,
        .teachableLearnset = sLoudredTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_EXPLOUD}),
    },

    [SPECIES_EXPLOUD] =
    {
        .baseHP        = 104,
        .baseAttack    = 91,
        .baseDefense   = 63,
        .baseSpeed     = 68,
        .baseSpAttack  = 91,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 73 : 63,
        .types = MON_TYPES(TYPE_NORMAL),
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
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Exploud"),
        .cryId = CRY_EXPLOUD,
        .natDexNum = NATIONAL_DEX_EXPLOUD,
        .categoryName = _("Escandaloso"),
        .height = 15,
        .weight = 840,
		.description = COMPOUND_STRING(
			"Tiene órganos que generan sonido por\n"
			"todo el cuerpo. Se comunica con otros\n"
			"ajustando el tono y el volumen de los\n"
			"gritos que emite."),
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Exploud,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Exploud,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Exploud,
        .shinyPalette = gMonShinyPalette_Exploud,
        .iconSprite = gMonIcon_Exploud,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_L)
        FOOTPRINT(Exploud)
        OVERWORLD(
            sPicTable_Exploud,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Exploud,
            gShinyOverworldPalette_Exploud
        )
        .levelUpLearnset = sExploudLevelUpLearnset,
        .teachableLearnset = sExploudTeachableLearnset,
    },
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_MAKUHITA
    [SPECIES_MAKUHITA] =
    {
        .baseHP        = 72,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 25,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 180,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 47 : 87,
        .evYield_HP = 1,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_THICK_FAT, ABILITY_GUTS, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Makuhita"),
        .cryId = CRY_MAKUHITA,
        .natDexNum = NATIONAL_DEX_MAKUHITA,
        .categoryName = _("Valiente"),
        .height = 10,
        .weight = 864,
		.description = COMPOUND_STRING(
			"Lo que más le gusta es fortalecer su\n"
			"cuerpo. Si notas que el suelo de una\n"
			"cueva tiembla y el sonido retumba, es\n"
			"porque Makuhita está entrenándose."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Makuhita,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Makuhita,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Makuhita,
        .shinyPalette = gMonShinyPalette_Makuhita,
        .iconSprite = gMonIcon_Makuhita,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Makuhita)
        OVERWORLD(
            sPicTable_Makuhita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Makuhita,
            gShinyOverworldPalette_Makuhita
        )
        .levelUpLearnset = sMakuhitaLevelUpLearnset,
        .teachableLearnset = sMakuhitaTeachableLearnset,
        .eggMoveLearnset = sMakuhitaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_HARIYAMA}),
    },

    [SPECIES_HARIYAMA] =
    {
        .baseHP        = 144,
        .baseAttack    = 120,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 184,
        .evYield_HP = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_THICK_FAT, ABILITY_GUTS, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hariyama"),
        .cryId = CRY_HARIYAMA,
        .natDexNum = NATIONAL_DEX_HARIYAMA,
        .categoryName = _("Empuje"),
        .height = 23,
        .weight = 2538,
		.description = COMPOUND_STRING(
			"Tiene la costumbre de desafiar a otros sin\n"
			"medir la fuerza del adversario. Alguna vez\n"
			"se ha subido a las vías del tren\n"
			"y parado trenes a base de puñetazos."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Hariyama,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_ROTATE_UP_TO_SIDES,
        .backPic = gMonBackPic_Hariyama,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Hariyama,
        .shinyPalette = gMonShinyPalette_Hariyama,
        .iconSprite = gMonIcon_Hariyama,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 9, SHADOW_SIZE_L)
        FOOTPRINT(Hariyama)
        OVERWORLD(
            sPicTable_Hariyama,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hariyama,
            gShinyOverworldPalette_Hariyama
        )
        .levelUpLearnset = sHariyamaLevelUpLearnset,
        .teachableLearnset = sHariyamaTeachableLearnset,
    },
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_NOSEPASS
    [SPECIES_NOSEPASS] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 135,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 75 : 108,
        .evYield_Defense = 1,
        .itemRare = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Nosepass"),
        .cryId = CRY_NOSEPASS,
        .natDexNum = NATIONAL_DEX_NOSEPASS,
        .categoryName = _("Brújula"),
        .height = 10,
        .weight = 970,
		.description = COMPOUND_STRING(
			"Su cuerpo emite un magnetismo de gran\n"
			"alcance. Se alimenta de las presas que\n"
			"atrae. La fuerza que ejerce se intensifica\n"
			"en las estaciones frías."),
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Nosepass,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Nosepass,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Nosepass,
        .shinyPalette = gMonShinyPalette_Nosepass,
        .iconSprite = gMonIcon_Nosepass,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Nosepass)
        OVERWORLD(
            sPicTable_Nosepass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nosepass,
            gShinyOverworldPalette_Nosepass
        )
        .levelUpLearnset = sNosepassLevelUpLearnset,
        .teachableLearnset = sNosepassTeachableLearnset,
        .eggMoveLearnset = sNosepassEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_PROBOPASS, CONDITIONS({IF_IN_MAPSEC, MAPSEC_NEW_MAUVILLE})},
                                {EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_PROBOPASS}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PROBOPASS] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_STEEL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Probopass"),
        .cryId = CRY_PROBOPASS,
        .natDexNum = NATIONAL_DEX_PROBOPASS,
        .categoryName = _("Brújula"),
        .height = 14,
        .weight = 3400,
		.description = COMPOUND_STRING(
			"Controla magnéticamente sus tres\n"
			"Mini-Narices y ataca a sus enemigos\n"
			"desde tres direcciones diferentes."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Probopass,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Probopass,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Probopass,
        .shinyPalette = gMonShinyPalette_Probopass,
        .iconSprite = gMonIcon_Probopass,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Probopass)
        OVERWORLD(
            sPicTable_Probopass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Probopass,
            gShinyOverworldPalette_Probopass
        )
        .levelUpLearnset = sProbopassLevelUpLearnset,
        .teachableLearnset = sProbopassTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SKITTY
    [SPECIES_SKITTY] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_WONDER_SKIN },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Skitty"),
        .cryId = CRY_SKITTY,
        .natDexNum = NATIONAL_DEX_SKITTY,
        .categoryName = _("Gatito"),
        .height = 6,
        .weight = 110,
		.description = COMPOUND_STRING(
			"La forma de ser de Skitty, entrañable y\n"
			"adorable, lo hace tremendamente popular.\n"
			"En combate, hincha la cola y amenaza\n"
			"a su rival con un agudo gruñido."),
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skitty,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skitty,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Skitty,
        .shinyPalette = gMonShinyPalette_Skitty,
        .iconSprite = gMonIcon_Skitty,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Skitty)
        OVERWORLD(
            sPicTable_Skitty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skitty,
            gShinyOverworldPalette_Skitty
        )
        .levelUpLearnset = sSkittyLevelUpLearnset,
        .teachableLearnset = sSkittyTeachableLearnset,
        .eggMoveLearnset = sSkittyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}),
    },

    [SPECIES_DELCATTY] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 60,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 140,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 133,
    #else
        .expYield = 138,
    #endif
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_WONDER_SKIN },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Delcatty"),
        .cryId = CRY_DELCATTY,
        .natDexNum = NATIONAL_DEX_DELCATTY,
        .categoryName = _("Cursi"),
        .height = 11,
        .weight = 326,
		.description = COMPOUND_STRING(
			"Prefiere buscar cada vez sitios cómodos\n"
			"para dormir a tener una guarida\n"
			"permanente. Es nocturno y se vuelve\n"
			"activo al anochecer."),
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delcatty,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 46),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Delcatty,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Delcatty,
        .shinyPalette = gMonShinyPalette_Delcatty,
        .iconSprite = gMonIcon_Delcatty,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Delcatty)
        OVERWORLD(
            sPicTable_Delcatty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Delcatty,
            gShinyOverworldPalette_Delcatty
        )
        .levelUpLearnset = sDelcattyLevelUpLearnset,
        .teachableLearnset = sDelcattyTeachableLearnset,
    },
#endif //P_FAMILY_SKITTY

#if P_FAMILY_SABLEYE
    [SPECIES_SABLEYE] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 133 : 98,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STALL, ABILITY_PRANKSTER },
    #else
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_PRANKSTER },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sableye"),
        .cryId = CRY_SABLEYE,
        .natDexNum = NATIONAL_DEX_SABLEYE,
        .categoryName = _("Oscuridad"),
        .height = 5,
        .weight = 110,
		.description = COMPOUND_STRING(
			"Cava conductos en cuevas usando sus\n"
			"afiladas garras para buscar rocas con las\n"
			"que alimentarse. Sableye permanece al\n"
			"acecho en la oscuridad"),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sableye,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_BLACK,
        .backPic = gMonBackPic_Sableye,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Sableye,
        .shinyPalette = gMonShinyPalette_Sableye,
        .iconSprite = gMonIcon_Sableye,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Sableye)
        OVERWORLD(
            sPicTable_Sableye,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sableye,
            gShinyOverworldPalette_Sableye
        )
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,
        .formChangeTable = sSableyeFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SABLEYE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 125,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_DARK, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sableye"),
        .cryId = CRY_SABLEYE_MEGA,
        .natDexNum = NATIONAL_DEX_SABLEYE,
        .categoryName = _("Oscuridad"),
        .height = 5,
        .weight = 1610,
        .description = COMPOUND_STRING(
            "Baño en la energía de Mega Evolución,\n"
            "la gema en su pecho se expande, rasga\n"
            "su piel y cae fuera."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SableyeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SableyeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_SableyeMega,
        .shinyPalette = gMonShinyPalette_SableyeMega,
        .iconSprite = gMonIcon_SableyeMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(3, 7, SHADOW_SIZE_S)
        FOOTPRINT(Sableye)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SableyeMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SableyeMega,
            gShinyOverworldPalette_SableyeMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSableyeLevelUpLearnset,
        .teachableLearnset = sSableyeTeachableLearnset,
        .eggMoveLearnset = sSableyeEggMoveLearnset,
        .formSpeciesIdTable = sSableyeFormSpeciesIdTable,
        .formChangeTable = sSableyeFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
#if P_UPDATED_TYPES >= GEN_6
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_FAIRY }
#else
    #define MAWILE_TYPES { TYPE_STEEL, TYPE_STEEL }
#endif

    [SPECIES_MAWILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MAWILE_TYPES,
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 133 : 98,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_IRON_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_INTIMIDATE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mawile"),
        .cryId = CRY_MAWILE,
        .natDexNum = NATIONAL_DEX_MAWILE,
        .categoryName = _("Tramposo"),
        .height = 6,
        .weight = 115,
		.description = COMPOUND_STRING(
			"Las gigantescas fauces que tiene fueron\n"
			"cuernos de acero en su día. Engaña\n"
			"al enemigo con gestos dóciles y a\n"
			"continuación abre sus fauces."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mawile,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mawile,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Mawile,
        .shinyPalette = gMonShinyPalette_Mawile,
        .iconSprite = gMonIcon_Mawile,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 4, SHADOW_SIZE_L)
        FOOTPRINT(Mawile)
        OVERWORLD(
            sPicTable_Mawile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mawile,
            gShinyOverworldPalette_Mawile
        )
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MAWILE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = MAWILE_TYPES,
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_HUGE_POWER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mawile"),
        .cryId = CRY_MAWILE_MEGA,
        .natDexNum = NATIONAL_DEX_MAWILE,
        .categoryName = _("Tramposo"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Sus dos mandíbulas se agitan de forma\n"
            "violenta como si tuvieran voluntad\n"
            "propia. Un mordisco de ellas puede\n"
            "convertir una roca en polvo."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MawileMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MawileMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_MawileMega,
        .shinyPalette = gMonShinyPalette_MawileMega,
        .iconSprite = gMonIcon_MawileMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Mawile)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MawileMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MawileMega,
            gShinyOverworldPalette_MawileMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMawileLevelUpLearnset,
        .teachableLearnset = sMawileTeachableLearnset,
        .eggMoveLearnset = sMawileEggMoveLearnset,
        .formSpeciesIdTable = sMawileFormSpeciesIdTable,
        .formChangeTable = sMawileFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
    [SPECIES_ARON] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_STEEL, TYPE_ROCK),
        .catchRate = 180,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 96,
        .evYield_Defense = 1,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Aron"),
        .cryId = CRY_ARON,
        .natDexNum = NATIONAL_DEX_ARON,
        .categoryName = _("Cor. Férrea"),
        .height = 4,
        .weight = 600,
		.description = COMPOUND_STRING(
			"Está cubierto por una coraza de acero\n"
			"que se regenera cuando evoluciona.\n"
			"La coraza vieja, ya estropeada, se recicla\n"
			"para fabricar productos de hierro."),
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aron,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 33),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aron,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Aron,
        .shinyPalette = gMonShinyPalette_Aron,
        .iconSprite = gMonIcon_Aron,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Aron)
        OVERWORLD(
            sPicTable_Aron,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aron,
            gShinyOverworldPalette_Aron
        )
        .levelUpLearnset = sAronLevelUpLearnset,
        .teachableLearnset = sAronTeachableLearnset,
        .eggMoveLearnset = sAronEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_LAIRON}),
    },

    [SPECIES_LAIRON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL, TYPE_ROCK),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 151 : 152,
        .evYield_Defense = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Lairon"),
        .cryId = CRY_LAIRON,
        .natDexNum = NATIONAL_DEX_LAIRON,
        .categoryName = _("Cor. Férrea"),
        .height = 9,
        .weight = 1200,
		.description = COMPOUND_STRING(
			"Si dos Lairon se encuentran en su\n"
			"hábitat natural, luchan por su territorio\n"
			"golpeándose con sus cuerpos de acero. El\n"
			"estruendo que forman se oye a kilómetros."),
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lairon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 29),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 29),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lairon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Lairon,
        .shinyPalette = gMonShinyPalette_Lairon,
        .iconSprite = gMonIcon_Lairon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 2, SHADOW_SIZE_L)
        FOOTPRINT(Lairon)
        OVERWORLD(
            sPicTable_Lairon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lairon,
            gShinyOverworldPalette_Lairon
        )
        .levelUpLearnset = sLaironLevelUpLearnset,
        .teachableLearnset = sLaironTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_AGGRON}),
    },

    [SPECIES_AGGRON] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 180,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL, TYPE_ROCK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 205,
    #endif
        .evYield_Defense = 3,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Aggron"),
        .cryId = CRY_AGGRON,
        .natDexNum = NATIONAL_DEX_AGGRON,
        .categoryName = _("Cor. Férrea"),
        .height = 21,
        .weight = 3600,
		.description = COMPOUND_STRING(
			"Los cuernos de hierro que tiene le crecen\n"
			"poco a poco. Sirven para determinar la edad\n"
			"que tiene. Luce los desperfectos de su\n"
			"coraza en recuerdo de sus combates."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Aggron,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Aggron,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Aggron,
        .shinyPalette = gMonShinyPalette_Aggron,
        .iconSprite = gMonIcon_Aggron,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Aggron)
        OVERWORLD(
            sPicTable_Aggron,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aggron,
            gShinyOverworldPalette_Aggron
        )
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,
        .formChangeTable = sAggronFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AGGRON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 230,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_Defense = 3,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_FILTER, ABILITY_FILTER, ABILITY_FILTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Aggron"),
        .cryId = CRY_AGGRON_MEGA,
        .natDexNum = NATIONAL_DEX_AGGRON,
        .categoryName = _("Cor. Férrea"),
        .height = 22,
        .weight = 3950,
        .description = COMPOUND_STRING(
            "Cuando Aggron Mega Evoluciona,\n"
            "su capacidad destructiva\n"
            "puede convertir un tanque blindado\n"
            "en chatarra."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_AggronMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AggronMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_AggronMega,
        .shinyPalette = gMonShinyPalette_AggronMega,
        .iconSprite = gMonIcon_AggronMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Aggron)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AggronMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AggronMega,
            gShinyOverworldPalette_AggronMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAggronLevelUpLearnset,
        .teachableLearnset = sAggronTeachableLearnset,
        .formSpeciesIdTable = sAggronFormSpeciesIdTable,
        .formChangeTable = sAggronFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
    [SPECIES_MEDITITE] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_PSYCHIC),
        .catchRate = 180,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 91,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Meditite"),
        .cryId = CRY_MEDITITE,
        .natDexNum = NATIONAL_DEX_MEDITITE,
        .categoryName = _("Meditador"),
        .height = 6,
        .weight = 112,
		.description = COMPOUND_STRING(
			"Medita sin parar durante muchas horas\n"
			"al día. Su práctica del yoga es rigurosa;\n"
			"como resultado, logra canalizar su energía\n"
			"espiritual hasta llegar a volar."),
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Meditite,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Meditite,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Meditite,
        .shinyPalette = gMonShinyPalette_Meditite,
        .iconSprite = gMonIcon_Meditite,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_MedititeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_MedititeF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 48),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Meditite)
        OVERWORLD(
            sPicTable_Meditite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Meditite,
            gShinyOverworldPalette_Meditite
        )
        OVERWORLD_FEMALE(
            sPicTable_MedititeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sMedititeLevelUpLearnset,
        .teachableLearnset = sMedititeTeachableLearnset,
        .eggMoveLearnset = sMedititeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_MEDICHAM}),
    },

    [SPECIES_MEDICHAM] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_PSYCHIC),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 153,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Medicham"),
        .cryId = CRY_MEDICHAM,
        .natDexNum = NATIONAL_DEX_MEDICHAM,
        .categoryName = _("Meditador"),
        .height = 13,
        .weight = 315,
		.description = COMPOUND_STRING(
			"Gracias a agotadoras sesiones de yoga,\n"
			"ha adquirido la capacidad de prever las\n"
			"acciones del enemigo. Lucha realizando\n"
			"movimientos elegantes y rítmicos."),
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Medicham,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Medicham,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Medicham,
        .shinyPalette = gMonShinyPalette_Medicham,
        .iconSprite = gMonIcon_Medicham,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_MedichamF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 64),
        .backPicFemale = gMonBackPic_MedichamF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_S)
        FOOTPRINT(Medicham)
        OVERWORLD(
            sPicTable_Medicham,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Medicham,
            gShinyOverworldPalette_Medicham
        )
        OVERWORLD_FEMALE(
            sPicTable_MedichamF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sMedichamLevelUpLearnset,
        .teachableLearnset = sMedichamTeachableLearnset,
        .formSpeciesIdTable = sMedichamFormSpeciesIdTable,
        .formChangeTable = sMedichamFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEDICHAM_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_PSYCHIC),
        .catchRate = 90,
        .expYield = 179,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PURE_POWER, ABILITY_PURE_POWER, ABILITY_PURE_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Medicham"),
        .cryId = CRY_MEDICHAM_MEGA,
        .natDexNum = NATIONAL_DEX_MEDICHAM,
        .categoryName = _("Meditador"),
        .height = 13,
        .weight = 315,
        .description = COMPOUND_STRING(
            "Utiliza su voluntad para crear\n"
            "brazos adicionales. Cuanto más ha\n"
            "entrenado su espíritu, más realistas y\n"
            "dextrales se vuelven."),
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MedichamMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MedichamMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_MedichamMega,
        .shinyPalette = gMonShinyPalette_MedichamMega,
        .iconSprite = gMonIcon_MedichamMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_S)
        FOOTPRINT(Medicham)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MedichamMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MedichamMega,
            gShinyOverworldPalette_MedichamMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMedichamLevelUpLearnset,
        .teachableLearnset = sMedichamTeachableLearnset,
        .formSpeciesIdTable = sMedichamFormSpeciesIdTable,
        .formChangeTable = sMedichamFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
    [SPECIES_ELECTRIKE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 104,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Electrike"),
        .cryId = CRY_ELECTRIKE,
        .natDexNum = NATIONAL_DEX_ELECTRIKE,
        .categoryName = _("Rayo"),
        .height = 6,
        .weight = 152,
		.description = COMPOUND_STRING(
			"Genera electricidad usando la fricción\n"
			"de la atmósfera. En estaciones de vientos\n"
			"áridos, su cuerpo se inflama y lanza\n"
			"chispas de forma violenta."),
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Electrike,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Electrike,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Electrike,
        .shinyPalette = gMonShinyPalette_Electrike,
        .iconSprite = gMonIcon_Electrike,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, -1, SHADOW_SIZE_M)
        FOOTPRINT(Electrike)
        OVERWORLD(
            sPicTable_Electrike,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Electrike,
            gShinyOverworldPalette_Electrike
        )
        .levelUpLearnset = sElectrikeLevelUpLearnset,
        .teachableLearnset = sElectrikeTeachableLearnset,
        .eggMoveLearnset = sElectrikeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_MANECTRIC}),
    },

    [SPECIES_MANECTRIC] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 168,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Manectric"),
        .cryId = CRY_MANECTRIC,
        .natDexNum = NATIONAL_DEX_MANECTRIC,
        .categoryName = _("Descarga"),
        .height = 15,
        .weight = 402,
		.description = COMPOUND_STRING(
			"Como los rayos caen cerca de donde está,\n"
			"se pensó que Manectric nacía de ellos.\n"
			"En combate, crea nubes de tormenta."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Manectric,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Manectric,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Manectric,
        .shinyPalette = gMonShinyPalette_Manectric,
        .iconSprite = gMonIcon_Manectric,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Manectric)
        OVERWORLD(
            sPicTable_Manectric,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Manectric,
            gShinyOverworldPalette_Manectric
        )
        .levelUpLearnset = sManectricLevelUpLearnset,
        .teachableLearnset = sManectricTeachableLearnset,
        .formSpeciesIdTable = sManectricFormSpeciesIdTable,
        .formChangeTable = sManectricFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MANECTRIC_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = 201,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Manectric"),
        .cryId = CRY_MANECTRIC_MEGA,
        .natDexNum = NATIONAL_DEX_MANECTRIC,
        .categoryName = _("Descarga"),
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Ha acumulado demasiada electricidad\n"
            "en su cuerpo, irritandolo. Su velocidad\n"
            "explosiva es igual a la de un rayo."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ManectricMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ManectricMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_ManectricMega,
        .shinyPalette = gMonShinyPalette_ManectricMega,
        .iconSprite = gMonIcon_ManectricMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Manectric)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_ManectricMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ManectricMega,
            gShinyOverworldPalette_ManectricMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sManectricLevelUpLearnset,
        .teachableLearnset = sManectricTeachableLearnset,
        .formSpeciesIdTable = sManectricFormSpeciesIdTable,
        .formChangeTable = sManectricFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_PLUSLE
    [SPECIES_PLUSLE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 120,
        .evYield_Speed = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
    #else
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Plusle"),
        .cryId = CRY_PLUSLE,
        .natDexNum = NATIONAL_DEX_PLUSLE,
        .categoryName = _("Ánimo"),
        .height = 4,
        .weight = 42,
		.description = COMPOUND_STRING(
			"Siempre anima a sus compañeros Pokémon.\n"
			"Crea cortocircuitos con la electricidad\n"
			"que libera por las patas para hacer\n"
			"pompones de chispas y animar al resto."),
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Plusle,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Plusle,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Plusle,
        .shinyPalette = gMonShinyPalette_Plusle,
        .iconSprite = gMonIcon_Plusle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Plusle)
        OVERWORLD(
            sPicTable_Plusle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Plusle,
            gShinyOverworldPalette_Plusle
        )
        .levelUpLearnset = sPlusleLevelUpLearnset,
        .teachableLearnset = sPlusleTeachableLearnset,
        .eggMoveLearnset = sPlusleEggMoveLearnset,
    },
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
    [SPECIES_MINUN] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 120,
        .evYield_Speed = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_VOLT_ABSORB },
    #else
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Minun"),
        .cryId = CRY_MINUN,
        .natDexNum = NATIONAL_DEX_MINUN,
        .categoryName = _("Ánimo"),
        .height = 4,
        .weight = 42,
		.description = COMPOUND_STRING(
			"En una reunión de estudiosos de Pokémon,\n"
			"se anunció que la exposición simultánea a\n"
			"la electricidad de un Plusle y de un Minun\n"
			"mejora la circulación y da más vitalidad."),
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Minun,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCULAR_STRETCH_TWICE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Minun,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Minun,
        .shinyPalette = gMonShinyPalette_Minun,
        .iconSprite = gMonIcon_Minun,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Minun)
        OVERWORLD(
            sPicTable_Minun,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Minun,
            gShinyOverworldPalette_Minun
        )
        .levelUpLearnset = sMinunLevelUpLearnset,
        .teachableLearnset = sMinunTeachableLearnset,
        .eggMoveLearnset = sMinunEggMoveLearnset,
    },
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT_ILLUMISE
    [SPECIES_VOLBEAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 73,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 75 : 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 47,
        .baseSpDefense = P_UPDATED_STATS >= GEN_7 ? 85 : 75,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 150,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 140,
    #else
        .expYield = 146,
    #endif
        .evYield_Speed = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_SWARM, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Volbeat"),
        .cryId = CRY_VOLBEAT,
        .natDexNum = NATIONAL_DEX_VOLBEAT,
        .categoryName = _("Luciérnaga"),
        .height = 7,
        .weight = 177,
		.description = COMPOUND_STRING(
			"Los Volbeat vuelan en enjambres dibujando\n"
			"con la luz de la cola formas geométricas en\n"
			"el cielo nocturno. Si la charca en la que\n"
			"viven se ensucia, se mudan a otro sitio."),
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Volbeat,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Volbeat,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Volbeat,
        .shinyPalette = gMonShinyPalette_Volbeat,
        .iconSprite = gMonIcon_Volbeat,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Volbeat)
        OVERWORLD(
            sPicTable_Volbeat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Volbeat,
            gShinyOverworldPalette_Volbeat
        )
        .levelUpLearnset = sVolbeatLevelUpLearnset,
        .teachableLearnset = sVolbeatTeachableLearnset,
        .eggMoveLearnset = sVolbeatEggMoveLearnset,
    },

    [SPECIES_ILLUMISE] =
    {
        .baseHP        = 65,
        .baseAttack    = 47,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 75 : 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 73,
        .baseSpDefense = P_UPDATED_STATS >= GEN_7 ? 85 : 75,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 150,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 140,
    #else
        .expYield = 146,
    #endif
        .evYield_Speed = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_TINTED_LENS, ABILITY_PRANKSTER },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_PRANKSTER },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Illumise"),
        .cryId = CRY_ILLUMISE,
        .natDexNum = NATIONAL_DEX_ILLUMISE,
        .categoryName = _("Luciérnaga"),
        .height = 6,
        .weight = 177,
		.description = COMPOUND_STRING(
			"Este Pokémon nocturno solo está activo\n"
			"de noche. Guía a un enjambre de Volbeat\n"
			"para que hagan dibujos en el cielo de la\n"
			"noche y saben hacer hasta 200 distintos."),
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Illumise,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES : ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Illumise,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Illumise,
        .shinyPalette = gMonShinyPalette_Illumise,
        .iconSprite = gMonIcon_Illumise,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Illumise)
        OVERWORLD(
            sPicTable_Illumise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Illumise,
            gShinyOverworldPalette_Illumise
        )
        .levelUpLearnset = sIllumiseLevelUpLearnset,
        .teachableLearnset = sIllumiseTeachableLearnset,
        .eggMoveLearnset = sIllumiseEggMoveLearnset,
    },
#endif //P_FAMILY_VOLBEAT_ILLUMISE

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BUDEW] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 68,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Budew"),
        .cryId = CRY_BUDEW,
        .natDexNum = NATIONAL_DEX_BUDEW,
        .categoryName = _("Brote"),
        .height = 2,
        .weight = 12,
		.description = COMPOUND_STRING(
			"En invierno cierra su capullo para\n"
			"protegerse del frío. En primavera\n"
			"el capullo se abre y esparce polen."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Budew,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Budew,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Budew,
        .shinyPalette = gMonShinyPalette_Budew,
        .iconSprite = gMonIcon_Budew,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Budew)
        OVERWORLD(
            sPicTable_Budew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Budew,
            gShinyOverworldPalette_Budew
        )
        .levelUpLearnset = sBudewLevelUpLearnset,
        .teachableLearnset = sBudewTeachableLearnset,
        .eggMoveLearnset = sBudewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_ROSELIA, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD},{IF_NOT_TIME, TIME_NIGHT})}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_ROSELIA] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 140 : 152,
        .evYield_SpAttack = (P_UPDATED_EVS >= GEN_4) ? 2 : 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Roselia"),
        .cryId = CRY_ROSELIA,
        .natDexNum = NATIONAL_DEX_ROSELIA,
        .categoryName = _("Espina"),
        .height = 3,
        .weight = 20,
		.description = COMPOUND_STRING(
			"Si Roselia absorbe sus nutrientes\n"
			"de las ricas lluvias primaverales, florece\n"
			"con gran belleza. La fragancia de sus\n"
			"flores hace que sus enemigos se confíen."),
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Roselia,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Roselia,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Roselia,
        .shinyPalette = gMonShinyPalette_Roselia,
        .iconSprite = gMonIcon_Roselia,
        .iconPalIndex = 4,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_RoseliaF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_RoseliaF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Roselia)
        OVERWORLD(
            sPicTable_Roselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Roselia,
            gShinyOverworldPalette_Roselia
        )
        OVERWORLD_FEMALE(
            sPicTable_RoseliaF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRoseliaLevelUpLearnset,
        .teachableLearnset = sRoseliaTeachableLearnset,
        .eggMoveLearnset = sRoseliaEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ROSERADE] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 65 : 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 258,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 232,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 227,
    #else
        .expYield = 204,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Roserade"),
        .cryId = CRY_ROSERADE,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        .categoryName = _("Ramillete"),
        .height = 9,
        .weight = 145,
		.description = COMPOUND_STRING(
			"Atrae a las presas con un dulce aroma\n"
			"y las derrota con los látigos espinosos\n"
			"de sus brazos."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Roserade,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Roserade,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Roserade,
        .shinyPalette = gMonShinyPalette_Roserade,
        .iconSprite = gMonIcon_Roserade,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RoseradeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_RoseradeF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Roserade)
        OVERWORLD(
            sPicTable_Roserade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Roserade,
            gShinyOverworldPalette_Roserade
        )
        OVERWORLD_FEMALE(
            sPicTable_RoseradeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRoseradeLevelUpLearnset,
        .teachableLearnset = sRoseradeTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_GULPIN
    [SPECIES_GULPIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 43,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 43,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 75,
        .evYield_HP = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Gulpin"),
        .cryId = CRY_GULPIN,
        .natDexNum = NATIONAL_DEX_GULPIN,
        .categoryName = _("Estómago"),
        .height = 4,
        .weight = 103,
		.description = COMPOUND_STRING(
			"Con el líquido que tiene en el estómago,\n"
			"puede digerir hasta hierro de desecho.\n"
			"Es capaz de tragarse de una sentada\n"
			"cualquier cosa que lo iguale en tamaño."),
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gulpin,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gulpin,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gulpin,
        .shinyPalette = gMonShinyPalette_Gulpin,
        .iconSprite = gMonIcon_Gulpin,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_GulpinF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_GulpinF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Gulpin)
        OVERWORLD(
            sPicTable_Gulpin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Gulpin,
            gShinyOverworldPalette_Gulpin
        )
        OVERWORLD_FEMALE(
            sPicTable_GulpinF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sGulpinLevelUpLearnset,
        .teachableLearnset = sGulpinTeachableLearnset,
        .eggMoveLearnset = sGulpinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_SWALOT}),
    },

    [SPECIES_SWALOT] =
    {
        .baseHP        = 100,
        .baseAttack    = 73,
        .baseDefense   = 83,
        .baseSpeed     = 55,
        .baseSpAttack  = 73,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 168,
        .evYield_HP = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Swalot"),
        .cryId = CRY_SWALOT,
        .natDexNum = NATIONAL_DEX_SWALOT,
        .categoryName = _("Bolsa ven."),
        .height = 17,
        .weight = 800,
		.description = COMPOUND_STRING(
			"Tiene un ácido tan potente en el estómago\n"
			"que le permite digerir casi cualquier cosa.\n"
			"Lo único que Swalot no puede digerir\n"
			"es su propio estómago."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Swalot,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Swalot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Swalot,
        .shinyPalette = gMonShinyPalette_Swalot,
        .iconSprite = gMonIcon_Swalot,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_SwalotF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_SwalotF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 3, SHADOW_SIZE_L)
        FOOTPRINT(Swalot)
        OVERWORLD(
            sPicTable_Swalot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Swalot,
            gShinyOverworldPalette_Swalot
        )
        OVERWORLD_FEMALE(
            sPicTable_SwalotF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
        .levelUpLearnset = sSwalotLevelUpLearnset,
        .teachableLearnset = sSwalotTeachableLearnset,
    },
#endif //P_FAMILY_GULPIN

#if P_FAMILY_CARVANHA
    [SPECIES_CARVANHA] =
    {
        .baseHP        = 45,
        .baseAttack    = 90,
        .baseDefense   = 20,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 88,
        .evYield_Attack = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Carvanha"),
        .cryId = CRY_CARVANHA,
        .natDexNum = NATIONAL_DEX_CARVANHA,
        .categoryName = _("Feroz"),
        .height = 8,
        .weight = 208,
		.description = COMPOUND_STRING(
			"Los Carvanha van en grupo atacando\n"
			"barcos hasta que los hunden. Aunque dicen\n"
			"que es un Pokémon muy violento, huye presa\n"
			"de la timidez en cuanto se queda solo."),
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carvanha,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Carvanha,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        .palette = gMonPalette_Carvanha,
        .shinyPalette = gMonShinyPalette_Carvanha,
        .iconSprite = gMonIcon_Carvanha,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Carvanha)
        OVERWORLD(
            sPicTable_Carvanha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Carvanha,
            gShinyOverworldPalette_Carvanha
        )
        .levelUpLearnset = sCarvanhaLevelUpLearnset,
        .teachableLearnset = sCarvanhaTeachableLearnset,
        .eggMoveLearnset = sCarvanhaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHARPEDO}),
    },

    [SPECIES_SHARPEDO] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sharpedo"),
        .cryId = CRY_SHARPEDO,
        .natDexNum = NATIONAL_DEX_SHARPEDO,
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 888,
		.description = COMPOUND_STRING(
			"Este Pokémon, muy violento y astuto, es el\n"
			"terror de los mares. La textura de su piel\n"
			"reduce al mínimo la resistencia al agua.\n"
			"Llega a alcanzar los 120 km por hora."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Sharpedo,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        .backPic = gMonBackPic_Sharpedo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Sharpedo,
        .shinyPalette = gMonShinyPalette_Sharpedo,
        .iconSprite = gMonIcon_Sharpedo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Sharpedo)
        OVERWORLD(
            sPicTable_Sharpedo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Sharpedo,
            gShinyOverworldPalette_Sharpedo
        )
        .levelUpLearnset = sSharpedoLevelUpLearnset,
        .teachableLearnset = sSharpedoTeachableLearnset,
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,
        .formChangeTable = sSharpedoFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SHARPEDO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 60,
        .expYield = 196,
        .evYield_Attack = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_STRONG_JAW, ABILITY_STRONG_JAW },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sharpedo"),
        .cryId = CRY_SHARPEDO_MEGA,
        .natDexNum = NATIONAL_DEX_SHARPEDO,
        .categoryName = _("Brutal"),
        .height = 25,
        .weight = 1303,
        .description = COMPOUND_STRING(
            "Los patrones amarillos que lleva son\n"
            "viejas cicatrices. La energía de la\n"
            "Mega Evolución corre a través de ellas,\n"
            "causándole dolor agudo y sufrimiento."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_SharpedoMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_SharpedoMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_SharpedoMega,
        .shinyPalette = gMonShinyPalette_SharpedoMega,
        .iconSprite = gMonIcon_SharpedoMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Sharpedo)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SharpedoMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SharpedoMega,
            gShinyOverworldPalette_SharpedoMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSharpedoLevelUpLearnset,
        .teachableLearnset = sSharpedoTeachableLearnset,
        .formSpeciesIdTable = sSharpedoFormSpeciesIdTable,
        .formChangeTable = sSharpedoFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
    [SPECIES_WAILMER] =
    {
        .baseHP        = 130,
        .baseAttack    = 70,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 125,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 80 : 137,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wailmer"),
        .cryId = CRY_WAILMER,
        .natDexNum = NATIONAL_DEX_WAILMER,
        .categoryName = _("Ballena bola"),
        .height = 20,
        .weight = 1300,
		.description = COMPOUND_STRING(
			"Aunque este Pokémon vive generalmente\n"
			"en el mar, puede sobrevivir en tierra,\n"
			"pero durante poco tiempo.\n"
			"Si se le seca el cuerpo, pierde vitalidad."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wailmer,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Wailmer,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Wailmer,
        .shinyPalette = gMonShinyPalette_Wailmer,
        .iconSprite = gMonIcon_Wailmer,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Wailmer)
        OVERWORLD(
            sPicTable_Wailmer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Wailmer,
            gShinyOverworldPalette_Wailmer
        )
        .levelUpLearnset = sWailmerLevelUpLearnset,
        .teachableLearnset = sWailmerTeachableLearnset,
        .eggMoveLearnset = sWailmerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_WAILORD}),
    },

    [SPECIES_WAILORD] =
    {
        .baseHP        = 170,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 206,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wailord"),
        .cryId = CRY_WAILORD,
        .natDexNum = NATIONAL_DEX_WAILORD,
        .categoryName = _("Ballenaflot"),
        .height = 145,
        .weight = 3980,
		.description = COMPOUND_STRING(
			"Respira a través de los espiráculos que\n"
			"saca a la superficie. Si toma aire hasta el\n"
			"máximo de su capacidad, puede sumergirse\n"
			"a una profundidad de hasta 3.000 m."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
        .frontPic = gMonFrontPic_Wailord,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 48),
            ANIMCMD_FRAME(0, 33),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Wailord,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Wailord,
        .shinyPalette = gMonShinyPalette_Wailord,
        .iconSprite = gMonIcon_Wailord,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wailord)
        OVERWORLD(
            sPicTable_Wailord,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Wailord,
            gShinyOverworldPalette_Wailord
        )
        .levelUpLearnset = sWailordLevelUpLearnset,
        .teachableLearnset = sWailordTeachableLearnset,
    },
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
    [SPECIES_NUMEL] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 88,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SIMPLE, ABILITY_OWN_TEMPO },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_OWN_TEMPO },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Numel"),
        .cryId = CRY_NUMEL,
        .natDexNum = NATIONAL_DEX_NUMEL,
        .categoryName = _("Torpe"),
        .height = 7,
        .weight = 240,
		.description = COMPOUND_STRING(
			"Un Numel almacena magma en ebullición\n"
			"dentro de la joroba del lomo. Es robusto y\n"
			"puede cargar hasta con 100 kg. Ayuda a la\n"
			"gente en su trabajo desde hace mucho."),
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Numel,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Numel,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Numel,
        .shinyPalette = gMonShinyPalette_Numel,
        .iconSprite = gMonIcon_Numel,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_NumelF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_NumelF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Numel)
        OVERWORLD(
            sPicTable_Numel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Numel,
            gShinyOverworldPalette_Numel
        )
        OVERWORLD_FEMALE(
            sPicTable_NumelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sNumelLevelUpLearnset,
        .teachableLearnset = sNumelTeachableLearnset,
        .eggMoveLearnset = sNumelEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_CAMERUPT}),
    },

    [SPECIES_CAMERUPT] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GROUND),
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 175,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_SOLID_ROCK, ABILITY_ANGER_POINT },
    #else
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_NONE, ABILITY_ANGER_POINT },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Camerupt"),
        .cryId = CRY_CAMERUPT,
        .natDexNum = NATIONAL_DEX_CAMERUPT,
        .categoryName = _("Erupción"),
        .height = 19,
        .weight = 2200,
		.description = COMPOUND_STRING(
			"Vive en el cráter de un volcán. Cada 10\n"
			"años, los volcanes que tiene en el lomo\n"
			"entran en erupción de forma violenta. Se\n"
			"están investigando las posibles causas."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Camerupt,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Camerupt,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Camerupt,
        .shinyPalette = gMonShinyPalette_Camerupt,
        .iconSprite = gMonIcon_Camerupt,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_CameruptF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_CameruptF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_L)
        FOOTPRINT(Camerupt)
        OVERWORLD(
            sPicTable_Camerupt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Camerupt,
            gShinyOverworldPalette_Camerupt
        )
        OVERWORLD_FEMALE(
            sPicTable_CameruptF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sCameruptLevelUpLearnset,
        .teachableLearnset = sCameruptTeachableLearnset,
        .formSpeciesIdTable = sCameruptFormSpeciesIdTable,
        .formChangeTable = sCameruptFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CAMERUPT_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 145,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GROUND),
        .catchRate = 150,
        .expYield = 196,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Camerupt"),
        .cryId = CRY_CAMERUPT_MEGA,
        .natDexNum = NATIONAL_DEX_CAMERUPT,
        .categoryName = _("Erupción"),
        .height = 25,
        .weight = 3205,
        .description = COMPOUND_STRING(
            "Los jorobas de su espalda se han\n"
            "transformado en un volcán grande y\n"
            "activo. Odia el agua y la humedad,\n"
            "posee una personalidad muy explosiva."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_CameruptMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CameruptMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_CameruptMega,
        .shinyPalette = gMonShinyPalette_CameruptMega,
        .iconSprite = gMonIcon_CameruptMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Camerupt)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_CameruptMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CameruptMega,
            gShinyOverworldPalette_CameruptMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCameruptLevelUpLearnset,
        .teachableLearnset = sCameruptTeachableLearnset,
        .formSpeciesIdTable = sCameruptFormSpeciesIdTable,
        .formChangeTable = sCameruptFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
    [SPECIES_TORKOAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 140,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 165 : 161,
        .evYield_Defense = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_WHITE_SMOKE, ABILITY_DROUGHT, ABILITY_SHELL_ARMOR },
    #else
        .abilities = { ABILITY_WHITE_SMOKE, ABILITY_NONE, ABILITY_SHELL_ARMOR },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Torkoal"),
        .cryId = CRY_TORKOAL,
        .natDexNum = NATIONAL_DEX_TORKOAL,
        .categoryName = _("Carbón"),
        .height = 5,
        .weight = 804,
		.description = COMPOUND_STRING(
			"Lucha usando la energía que obtiene\n"
			"quemando carbón. Cuando suelta humo por\n"
			"los orificios nasales, emite un sonido que\n"
			"recuerda a la chimenea de una locomotora."),
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Torkoal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Torkoal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Torkoal,
        .shinyPalette = gMonShinyPalette_Torkoal,
        .iconSprite = gMonIcon_Torkoal,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 7, SHADOW_SIZE_L)
        FOOTPRINT(Torkoal)
        OVERWORLD(
            sPicTable_Torkoal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Torkoal,
            gShinyOverworldPalette_Torkoal
        )
        .levelUpLearnset = sTorkoalLevelUpLearnset,
        .teachableLearnset = sTorkoalTeachableLearnset,
        .eggMoveLearnset = sTorkoalEggMoveLearnset,
    },
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
    [SPECIES_SPOINK] =
    {
        .baseHP        = 60,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 89,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Spoink"),
        .cryId = CRY_SPOINK,
        .natDexNum = NATIONAL_DEX_SPOINK,
        .categoryName = _("Saltarín"),
        .height = 7,
        .weight = 306,
		.description = COMPOUND_STRING(
			"Manipula energía psicoquinética a su\n"
			"antojo. No deja de botar ni cuando está\n"
			"dormido. Le encanta comer setas que\n"
			"crecen bajo tierra."),
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spoink,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH_TWICE,
        .backPic = gMonBackPic_Spoink,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Spoink,
        .shinyPalette = gMonShinyPalette_Spoink,
        .iconSprite = gMonIcon_Spoink,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Spoink)
        OVERWORLD(
            sPicTable_Spoink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Spoink,
            gShinyOverworldPalette_Spoink
        )
        .levelUpLearnset = sSpoinkLevelUpLearnset,
        .teachableLearnset = sSpoinkTeachableLearnset,
        .eggMoveLearnset = sSpoinkEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GRUMPIG}),
    },

    [SPECIES_GRUMPIG] =
    {
        .baseHP        = 80,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 165 : 164,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grumpig"),
        .cryId = CRY_GRUMPIG,
        .natDexNum = NATIONAL_DEX_GRUMPIG,
        .categoryName = _("Manipulador"),
        .height = 9,
        .weight = 715,
		.description = COMPOUND_STRING(
			"Almacena energía en las perlas negras de\n"
			"la frente. Al usar poderes psíquicos, hace\n"
			"un curioso paso de baile. Su manera de\n"
			"bailar se ha hecho de lo más popular."),
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Grumpig,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Grumpig,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Grumpig,
        .shinyPalette = gMonShinyPalette_Grumpig,
        .iconSprite = gMonIcon_Grumpig,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Grumpig)
        OVERWORLD(
            sPicTable_Grumpig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grumpig,
            gShinyOverworldPalette_Grumpig
        )
        .levelUpLearnset = sGrumpigLevelUpLearnset,
        .teachableLearnset = sGrumpigTeachableLearnset,
    },
#endif //P_FAMILY_SPOINK

#if P_FAMILY_SPINDA
    [SPECIES_SPINDA] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 126 : 85,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_TANGLED_FEET, ABILITY_CONTRARY },
    #else
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_CONTRARY },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Spinda"),
        .cryId = CRY_SPINDA,
        .natDexNum = NATIONAL_DEX_SPINDA,
        .categoryName = _("Panda topos"),
        .height = 11,
        .weight = 50,
		.description = COMPOUND_STRING(
			"Se le diferencia por el dibujo del pelaje;\n"
			"no hay dos iguales. Su forma de andar\n"
			"inestable y torpe, logra confundir al\n"
			"enemigo y hacer que su puntería falle."),
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spinda,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 8,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 17),
                ANIMCMD_FRAME(1, 23),
                ANIMCMD_FRAME(0, 17),
                ANIMCMD_FRAME(1, 23),
                ANIMCMD_FRAME(0, 13),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Spinda,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Spinda,
        .shinyPalette = gMonShinyPalette_Spinda,
        .iconSprite = gMonIcon_Spinda,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Spinda)
        OVERWORLD(
            sPicTable_Spinda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spinda,
            gShinyOverworldPalette_Spinda
        )
        .levelUpLearnset = sSpindaLevelUpLearnset,
        .teachableLearnset = sSpindaTeachableLearnset,
        .eggMoveLearnset = sSpindaEggMoveLearnset,
    },
#endif //P_FAMILY_SPINDA

#if P_FAMILY_TRAPINCH
    [SPECIES_TRAPINCH] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 10,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 73,
        .evYield_Attack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #endif
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_ARENA_TRAP, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trapinch"),
        .cryId = CRY_TRAPINCH,
        .natDexNum = NATIONAL_DEX_TRAPINCH,
        .categoryName = _("Hormigaleón"),
        .height = 7,
        .weight = 150,
		.description = COMPOUND_STRING(
			"Tiene unas enormes fauces con las que\n"
			"destruye piedras. Como tiene una cabeza\n"
			"muy grande, le cuesta conseguir ponerse\n"
			"de pie si se cae de espaldas."),
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trapinch,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Trapinch,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Trapinch,
        .shinyPalette = gMonShinyPalette_Trapinch,
        .iconSprite = gMonIcon_Trapinch,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, -1, SHADOW_SIZE_S)
        FOOTPRINT(Trapinch)
        OVERWORLD(
            sPicTable_Trapinch,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trapinch,
            gShinyOverworldPalette_Trapinch
        )
        .levelUpLearnset = sTrapinchLevelUpLearnset,
        .teachableLearnset = sTrapinchTeachableLearnset,
        .eggMoveLearnset = sTrapinchEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_VIBRAVA}),
    },

    [SPECIES_VIBRAVA] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GROUND, TYPE_DRAGON),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 126,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Vibrava"),
        .cryId = CRY_VIBRAVA,
        .natDexNum = NATIONAL_DEX_VIBRAVA,
        .categoryName = _("Vibrante"),
        .height = 11,
        .weight = 153,
		.description = COMPOUND_STRING(
			"Cuando frota las alas, emite ondas\n"
			"ultrasónicas, pero, como aún no están\n"
			"completamente desarrolladas, solo\n"
			"puede volar distancias cortas."),
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vibrava,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Vibrava,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Vibrava,
        .shinyPalette = gMonShinyPalette_Vibrava,
        .iconSprite = gMonIcon_Vibrava,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 0, SHADOW_SIZE_L)
        FOOTPRINT(Vibrava)
        OVERWORLD(
            sPicTable_Vibrava,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vibrava,
            gShinyOverworldPalette_Vibrava
        )
        .levelUpLearnset = sVibravaLevelUpLearnset,
        .teachableLearnset = sVibravaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_FLYGON}),
    },

    [SPECIES_FLYGON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND, TYPE_DRAGON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 260,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 234,
    #else
        .expYield = 197,
    #endif
        .evYield_Attack = 1,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_DRAGON),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #endif
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flygon"),
        .cryId = CRY_FLYGON,
        .natDexNum = NATIONAL_DEX_FLYGON,
        .categoryName = _("Místico"),
        .height = 20,
        .weight = 820,
		.description = COMPOUND_STRING(
			"El aleteo de sus alas es muy melódico.\n"
			"Para evitar que el enemigo lo descubra,\n"
			"levanta con las alas una nube de arena\n"
			"del desierto, tras la cual se oculta."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Flygon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Flygon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Flygon,
        .shinyPalette = gMonShinyPalette_Flygon,
        .iconSprite = gMonIcon_Flygon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_M)
        FOOTPRINT(Flygon)
        OVERWORLD(
            sPicTable_Flygon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Flygon,
            gShinyOverworldPalette_Flygon
        )
        .levelUpLearnset = sFlygonLevelUpLearnset,
        .teachableLearnset = sFlygonTeachableLearnset,
    },
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
    [SPECIES_CACNEA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 67 : 97,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cacnea"),
        .cryId = CRY_CACNEA,
        .natDexNum = NATIONAL_DEX_CACNEA,
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
		.description = COMPOUND_STRING(
			"Cacnea vive en desiertos donde nunca\n"
			"llueve. Para luchar, balancea los brazos,\n"
			"muy gruesos y cubiertos de pinchos.\n"
			"Una vez al año, le brota una flor amarilla."),
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cacnea,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Cacnea,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Cacnea,
        .shinyPalette = gMonShinyPalette_Cacnea,
        .iconSprite = gMonIcon_Cacnea,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Cacnea)
        OVERWORLD(
            sPicTable_Cacnea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cacnea,
            gShinyOverworldPalette_Cacnea
        )
        .levelUpLearnset = sCacneaLevelUpLearnset,
        .teachableLearnset = sCacneaTeachableLearnset,
        .eggMoveLearnset = sCacneaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_CACTURNE}),
    },

    [SPECIES_CACTURNE] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DARK),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 177,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cacturne"),
        .cryId = CRY_CACTURNE,
        .natDexNum = NATIONAL_DEX_CACTURNE,
        .categoryName = _("Espantajo"),
        .height = 13,
        .weight = 774,
		.description = COMPOUND_STRING(
			"Como ha pasado miles de años en\n"
			"áridos desiertos, la sangre se le ha\n"
			"transformado en una especie de arena.\n"
			"Es nocturno, así que caza de noche."),
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cacturne,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Cacturne,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Cacturne,
        .shinyPalette = gMonShinyPalette_Cacturne,
        .iconSprite = gMonIcon_Cacturne,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CacturneF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cacturne)
        OVERWORLD(
            sPicTable_Cacturne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cacturne,
            gShinyOverworldPalette_Cacturne
        )
        OVERWORLD_FEMALE(
            sPicTable_CacturneF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sCacturneLevelUpLearnset,
        .teachableLearnset = sCacturneTeachableLearnset,
    },
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
    [SPECIES_SWABLU] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swablu"),
        .cryId = CRY_SWABLU,
        .natDexNum = NATIONAL_DEX_SWABLU,
        .categoryName = _("Ave algodón"),
        .height = 4,
        .weight = 12,
		.description = COMPOUND_STRING(
			"Tiene unas alas como nubes de algodón.\n"
			"Transcurrido el invierno, en el que la\n"
			"comida escasea, bandadas de Swablu\n"
			"migran a los pueblos en primavera."),
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swablu,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 0,
        .backPic = gMonBackPic_Swablu,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Swablu,
        .shinyPalette = gMonShinyPalette_Swablu,
        .iconSprite = gMonIcon_Swablu,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Swablu)
        OVERWORLD(
            sPicTable_Swablu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Swablu,
            gShinyOverworldPalette_Swablu
        )
        .levelUpLearnset = sSwabluLevelUpLearnset,
        .teachableLearnset = sSwabluTeachableLearnset,
        .eggMoveLearnset = sSwabluEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_ALTARIA}),
    },

    [SPECIES_ALTARIA] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 188,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Altaria"),
        .cryId = CRY_ALTARIA,
        .natDexNum = NATIONAL_DEX_ALTARIA,
        .categoryName = _("Cantor"),
        .height = 11,
        .weight = 206,
		.description = COMPOUND_STRING(
			"Canturrea con una bella voz de soprano.\n"
			"Vuela entre las nubes blancas del cielo\n"
			"azul. Lanza ardientes bolas de fuego\n"
			"por el pico."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Altaria,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Altaria,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Altaria,
        .shinyPalette = gMonShinyPalette_Altaria,
        .iconSprite = gMonIcon_Altaria,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
        OVERWORLD(
            sPicTable_Altaria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Altaria,
            gShinyOverworldPalette_Altaria
        )
        .levelUpLearnset = sAltariaLevelUpLearnset,
        .teachableLearnset = sAltariaTeachableLearnset,
        .formSpeciesIdTable = sAltariaFormSpeciesIdTable,
        .formChangeTable = sAltariaFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALTARIA_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 207,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Altaria"),
        .cryId = CRY_ALTARIA_MEGA,
        .natDexNum = NATIONAL_DEX_ALTARIA,
        .categoryName = _("Cantor"),
        .height = 15,
        .weight = 206,
        .description = COMPOUND_STRING(
            "Canta con una voz que es aún más\n"
            "hermosa que antes de Mega Evolucionar.\n"
            "Sus plumas se han agrandado para\n"
            "protegerse y brillan con resplandor."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AltariaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_AltariaMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_AltariaMega,
        .shinyPalette = gMonShinyPalette_AltariaMega,
        .iconSprite = gMonIcon_AltariaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_L)
        FOOTPRINT(Altaria)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AltariaMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_AltariaMega,
            gShinyOverworldPalette_AltariaMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAltariaLevelUpLearnset,
        .teachableLearnset = sAltariaTeachableLearnset,
        .formSpeciesIdTable = sAltariaFormSpeciesIdTable,
        .formChangeTable = sAltariaFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
    [SPECIES_ZANGOOSE] =
    {
        .baseHP        = 73,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 165,
        .evYield_Attack = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_TOXIC_BOOST },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Zangoose"),
        .cryId = CRY_ZANGOOSE,
        .natDexNum = NATIONAL_DEX_ZANGOOSE,
        .categoryName = _("Gato hurón"),
        .height = 13,
        .weight = 403,
		.description = COMPOUND_STRING(
			"Cuando lucha, se yergue sobre las patas\n"
			"traseras y ataca con sus afiladas zarpas.\n"
			"El pelaje se le eriza si se encuentra\n"
			"con un Seviper."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zangoose,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Zangoose,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Zangoose,
        .shinyPalette = gMonShinyPalette_Zangoose,
        .iconSprite = gMonIcon_Zangoose,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Zangoose)
        OVERWORLD(
            sPicTable_Zangoose,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zangoose,
            gShinyOverworldPalette_Zangoose
        )
        .levelUpLearnset = sZangooseLevelUpLearnset,
        .teachableLearnset = sZangooseTeachableLearnset,
        .eggMoveLearnset = sZangooseEggMoveLearnset,
    },
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
    [SPECIES_SEVIPER] =
    {
        .baseHP        = 73,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 165,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Seviper"),
        .cryId = CRY_SEVIPER,
        .natDexNum = NATIONAL_DEX_SEVIPER,
        .categoryName = _("Colmillos"),
        .height = 27,
        .weight = 525,
		.description = COMPOUND_STRING(
			"Seviper y Zangoose son rivales eternos.\n"
			"Contrarresta la gran agilidad de Zangoose\n"
			"con una cola en forma de espada que\n"
			"además rezuma un veneno terrible."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seviper,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Seviper,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Seviper,
        .shinyPalette = gMonShinyPalette_Seviper,
        .iconSprite = gMonIcon_Seviper,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 7, SHADOW_SIZE_L)
        FOOTPRINT(Seviper)
        OVERWORLD(
            sPicTable_Seviper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BIKE_TIRE,
            sAnimTable_Following,
            gOverworldPalette_Seviper,
            gShinyOverworldPalette_Seviper
        )
        .levelUpLearnset = sSeviperLevelUpLearnset,
        .teachableLearnset = sSeviperTeachableLearnset,
        .eggMoveLearnset = sSeviperEggMoveLearnset,
    },
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
    [SPECIES_LUNATONE] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ROCK, TYPE_PSYCHIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 161,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 154,
    #else
        .expYield = 150,
    #endif
        .evYield_SpAttack = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Lunatone"),
        .cryId = CRY_LUNATONE,
        .natDexNum = NATIONAL_DEX_LUNATONE,
        .categoryName = _("Meteorito"),
        .height = 10,
        .weight = 1680,
		.description = COMPOUND_STRING(
			"Llega a ser muy activo en las noches\n"
			"de luna llena. Este Pokémon fue\n"
			"descubierto hace 40 años en el lugar\n"
			"en el que había caído un meteorito."),
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lunatone,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_Lunatone,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Lunatone,
        .shinyPalette = gMonShinyPalette_Lunatone,
        .iconSprite = gMonIcon_Lunatone,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Lunatone)
        OVERWORLD(
            sPicTable_Lunatone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Lunatone,
            gShinyOverworldPalette_Lunatone
        )
        .levelUpLearnset = sLunatoneLevelUpLearnset,
        .teachableLearnset = sLunatoneTeachableLearnset,
    },
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
    [SPECIES_SOLROCK] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 90 : 70,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK, TYPE_PSYCHIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 161,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 154,
    #else
        .expYield = 150,
    #endif
        .evYield_Attack = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_SUN_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Solrock"),
        .cryId = CRY_SOLROCK,
        .natDexNum = NATIONAL_DEX_SOLROCK,
        .categoryName = _("Meteorito"),
        .height = 12,
        .weight = 1540,
		.description = COMPOUND_STRING(
			"El origen de la fuerza de este Pokémon\n"
			"está en la energía solar. En días soleados,\n"
			"grupos de Solrock se alinean de cara\n"
			"al sol para absorber su luz."),
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Solrock,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_ROTATE_TO_SIDES_TWICE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Solrock,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Solrock,
        .shinyPalette = gMonShinyPalette_Solrock,
        .iconSprite = gMonIcon_Solrock,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_M)
        FOOTPRINT(Solrock)
        OVERWORLD(
            sPicTable_Solrock,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Solrock,
            gShinyOverworldPalette_Solrock
        )
        .levelUpLearnset = sSolrockLevelUpLearnset,
        .teachableLearnset = sSolrockTeachableLearnset,
    },
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
    [SPECIES_BARBOACH] =
    {
        .baseHP        = 50,
        .baseAttack    = 48,
        .baseDefense   = 43,
        .baseSpeed     = 60,
        .baseSpAttack  = 46,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 92,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_HYDRATION },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Barboach"),
        .cryId = CRY_BARBOACH,
        .natDexNum = NATIONAL_DEX_BARBOACH,
        .categoryName = _("Bigotudo"),
        .height = 4,
        .weight = 19,
		.description = COMPOUND_STRING(
			"Tiene el cuerpo cubierto de una película\n"
			"viscosa. Esta capa actúa como barrera y\n"
			"evita que los gérmenes del agua fangosa\n"
			"penetren en el cuerpo de Barboach."),
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Barboach,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Barboach,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Barboach,
        .shinyPalette = gMonShinyPalette_Barboach,
        .iconSprite = gMonIcon_Barboach,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Barboach)
        OVERWORLD(
            sPicTable_Barboach,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Barboach,
            gShinyOverworldPalette_Barboach
        )
        .levelUpLearnset = sBarboachLevelUpLearnset,
        .teachableLearnset = sBarboachTeachableLearnset,
        .eggMoveLearnset = sBarboachEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_WHISCASH}),
    },

    [SPECIES_WHISCASH] =
    {
        .baseHP        = 110,
        .baseAttack    = 78,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = 76,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 164 : 158,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_HYDRATION },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Whiscash"),
        .cryId = CRY_WHISCASH,
        .natDexNum = NATIONAL_DEX_WHISCASH,
        .categoryName = _("Bigotudo"),
        .height = 9,
        .weight = 236,
		.description = COMPOUND_STRING(
			"Nadie sabe cómo, pero puede predecir\n"
			"terremotos. De día duerme en el fango del\n"
			"fondo de una charca. Ya despierto, se\n"
			"pasa toda la noche alimentándose."),
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Whiscash,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Whiscash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Whiscash,
        .shinyPalette = gMonShinyPalette_Whiscash,
        .iconSprite = gMonIcon_Whiscash,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Whiscash)
        OVERWORLD(
            sPicTable_Whiscash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Whiscash,
            gShinyOverworldPalette_Whiscash
        )
        .levelUpLearnset = sWhiscashLevelUpLearnset,
        .teachableLearnset = sWhiscashTeachableLearnset,
    },
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
    [SPECIES_CORPHISH] =
    {
        .baseHP        = 43,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 205,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 111,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Corphish"),
        .cryId = CRY_CORPHISH,
        .natDexNum = NATIONAL_DEX_CORPHISH,
        .categoryName = _("Rufián"),
        .height = 6,
        .weight = 115,
		.description = COMPOUND_STRING(
			"Una vez que agarra a su presa con sus\n"
			"grandes pinzas, no la suelta pase lo que\n"
			"pase. Es un Pokémon resistente que\n"
			"puede subsistir en cualquier medio."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Corphish,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Corphish,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Corphish,
        .shinyPalette = gMonShinyPalette_Corphish,
        .iconSprite = gMonIcon_Corphish,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Corphish)
        OVERWORLD(
            sPicTable_Corphish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Corphish,
            gShinyOverworldPalette_Corphish
        )
        .levelUpLearnset = sCorphishLevelUpLearnset,
        .teachableLearnset = sCorphishTeachableLearnset,
        .eggMoveLearnset = sCorphishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CRAWDAUNT}),
    },

    [SPECIES_CRAWDAUNT] =
    {
        .baseHP        = 63,
        .baseAttack    = 120,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 155,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 164 : 161,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Crawdaunt"),
        .cryId = CRY_CRAWDAUNT,
        .natDexNum = NATIONAL_DEX_CRAWDAUNT,
        .categoryName = _("Granuja"),
        .height = 11,
        .weight = 328,
		.description = COMPOUND_STRING(
			"Es un Pokémon brutal que disfruta\n"
			"luchando. Un Crawdaunt veterano que\n"
			"ha salido airoso de miles de combates tiene\n"
			"enormes pinzas llenas de cicatrices."),
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crawdaunt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Crawdaunt,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Crawdaunt,
        .shinyPalette = gMonShinyPalette_Crawdaunt,
        .iconSprite = gMonIcon_Crawdaunt,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Crawdaunt)
        OVERWORLD(
            sPicTable_Crawdaunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Crawdaunt,
            gShinyOverworldPalette_Crawdaunt
        )
        .levelUpLearnset = sCrawdauntLevelUpLearnset,
        .teachableLearnset = sCrawdauntTeachableLearnset,
    },
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
    [SPECIES_BALTOY] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND, TYPE_PSYCHIC),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 58,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Baltoy"),
        .cryId = CRY_BALTOY,
        .natDexNum = NATIONAL_DEX_BALTOY,
        .categoryName = _("Muñ. Barro"),
        .height = 5,
        .weight = 215,
		.description = COMPOUND_STRING(
			"Los Baltoy se mueven haciendo girar\n"
			"su única extremidad inferior. Aparecen\n"
			"representados en las pinturas murales\n"
			"de las ruinas de una antigua ciudad."),
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Baltoy,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Baltoy,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Baltoy,
        .shinyPalette = gMonShinyPalette_Baltoy,
        .iconSprite = gMonIcon_Baltoy,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Baltoy)
        OVERWORLD(
            sPicTable_Baltoy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Baltoy,
            gShinyOverworldPalette_Baltoy
        )
        .levelUpLearnset = sBaltoyLevelUpLearnset,
        .teachableLearnset = sBaltoyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CLAYDOL}),
    },

    [SPECIES_CLAYDOL] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 105,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GROUND, TYPE_PSYCHIC),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 189,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Claydol"),
        .cryId = CRY_CLAYDOL,
        .natDexNum = NATIONAL_DEX_CLAYDOL,
        .categoryName = _("Muñ. Barro"),
        .height = 15,
        .weight = 1080,
		.description = COMPOUND_STRING(
			"Claydol duerme mientras levita.\n"
			"Tiene los brazos separados del cuerpo\n"
			"y los mantiene flotando gracias a\n"
			"sus poderes psicoquinéticos."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Claydol,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Claydol,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Claydol,
        .shinyPalette = gMonShinyPalette_Claydol,
        .iconSprite = gMonIcon_Claydol,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 18, SHADOW_SIZE_M)
        FOOTPRINT(Claydol)
        OVERWORLD(
            sPicTable_Claydol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Claydol,
            gShinyOverworldPalette_Claydol
        )
        .levelUpLearnset = sClaydolLevelUpLearnset,
        .teachableLearnset = sClaydolTeachableLearnset,
    },
#endif //P_FAMILY_BALTOY

#if P_FAMILY_LILEEP
    [SPECIES_LILEEP] =
    {
        .baseHP        = 66,
        .baseAttack    = 41,
        .baseDefense   = 77,
        .baseSpeed     = 23,
        .baseSpAttack  = 61,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 121,
    #endif
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Lileep"),
        .cryId = CRY_LILEEP,
        .natDexNum = NATIONAL_DEX_LILEEP,
        .categoryName = _("Lila Mar"),
        .height = 10,
        .weight = 238,
		.description = COMPOUND_STRING(
			"Se disfraza de alga marina moviendo los\n"
			"tentáculos. Si una presa se le acerca\n"
			"despistada, será engullida de golpe.\n"
			"Se extinguió hace 100 millones de años."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lileep,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lileep,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Lileep,
        .shinyPalette = gMonShinyPalette_Lileep,
        .iconSprite = gMonIcon_Lileep,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Lileep)
        OVERWORLD(
            sPicTable_Lileep,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Lileep,
            gShinyOverworldPalette_Lileep
        )
        .levelUpLearnset = sLileepLevelUpLearnset,
        .teachableLearnset = sLileepTeachableLearnset,
        .eggMoveLearnset = sLileepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_CRADILY}),
    },

    [SPECIES_CRADILY] =
    {
        .baseHP        = 86,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 43,
        .baseSpAttack  = 81,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 199,
    #else
        .expYield = 201,
    #endif
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cradily"),
        .cryId = CRY_CRADILY,
        .natDexNum = NATIONAL_DEX_CRADILY,
        .categoryName = _("Percebe"),
        .height = 15,
        .weight = 604,
		.description = COMPOUND_STRING(
			"Arrastra su pesado cuerpo por el fondo\n"
			"marino. Anida cerca de la superficie, en\n"
			"aguas templadas. Cuando hay marea baja,\n"
			"es posible ver a Cradily en la playa."),
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cradily,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Cradily,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Cradily,
        .shinyPalette = gMonShinyPalette_Cradily,
        .iconSprite = gMonIcon_Cradily,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Cradily)
        OVERWORLD(
            sPicTable_Cradily,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Cradily,
            gShinyOverworldPalette_Cradily
        )
        .levelUpLearnset = sCradilyLevelUpLearnset,
        .teachableLearnset = sCradilyTeachableLearnset,
    },
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
    [SPECIES_ANORITH] =
    {
        .baseHP        = 45,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ROCK, TYPE_BUG),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 71,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 99,
    #else
        .expYield = 119,
    #endif
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Anorith"),
        .cryId = CRY_ANORITH,
        .natDexNum = NATIONAL_DEX_ANORITH,
        .categoryName = _("Camarón"),
        .height = 7,
        .weight = 125,
		.description = COMPOUND_STRING(
			"La ciencia logró regenerarlo a partir de\n"
			"un fósil. Nada batiendo las ocho alas\n"
			"que tiene a los lados y que fueron patas\n"
			"que se adaptaron a su nueva vida en el mar."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Anorith,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Anorith,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Anorith,
        .shinyPalette = gMonShinyPalette_Anorith,
        .iconSprite = gMonIcon_Anorith,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Anorith)
        OVERWORLD(
            sPicTable_Anorith,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Anorith,
            gShinyOverworldPalette_Anorith
        )
        .levelUpLearnset = sAnorithLevelUpLearnset,
        .teachableLearnset = sAnorithTeachableLearnset,
        .eggMoveLearnset = sAnorithEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_ARMALDO}),
    },

    [SPECIES_ARMALDO] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ROCK, TYPE_BUG),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 199,
    #else
        .expYield = 200,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Armaldo"),
        .cryId = CRY_ARMALDO,
        .natDexNum = NATIONAL_DEX_ARMALDO,
        .categoryName = _("Armadura"),
        .height = 15,
        .weight = 682,
		.description = COMPOUND_STRING(
			"Armaldo vive generalmente en tierra.\n"
			"Sin embargo, cuando caza, se zambulle\n"
			"en el océano y se pone a nadar usando\n"
			"las dos grandes alas que tiene."),
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Armaldo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Armaldo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Armaldo,
        .shinyPalette = gMonShinyPalette_Armaldo,
        .iconSprite = gMonIcon_Armaldo,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Armaldo)
        OVERWORLD(
            sPicTable_Armaldo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Armaldo,
            gShinyOverworldPalette_Armaldo
        )
        .levelUpLearnset = sArmaldoLevelUpLearnset,
        .teachableLearnset = sArmaldoTeachableLearnset,
    },
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
    [SPECIES_FEEBAS] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 20,
        .baseSpeed     = 80,
        .baseSpAttack  = 10,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 40 : 61,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_OBLIVIOUS, ABILITY_ADAPTABILITY },
    #else
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_ADAPTABILITY },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Feebas"),
        .cryId = CRY_FEEBAS,
        .natDexNum = NATIONAL_DEX_FEEBAS,
        .categoryName = _("Pez"),
        .height = 6,
        .weight = 74,
		.description = COMPOUND_STRING(
			"Feebas vive en charcas llenas de algas.\n"
			"Parece que el aspecto terriblemente\n"
			"descuidado que ofrece sea la causa de\n"
			"que pocos Entrenadores lo críen."),
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Feebas,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW,
        .backPic = gMonBackPic_Feebas,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Feebas,
        .shinyPalette = gMonShinyPalette_Feebas,
        .iconSprite = gMonIcon_Feebas,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Feebas)
        OVERWORLD(
            sPicTable_Feebas,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Feebas,
            gShinyOverworldPalette_Feebas
        )
        .levelUpLearnset = sFeebasLevelUpLearnset,
        .teachableLearnset = sFeebasTeachableLearnset,
        .eggMoveLearnset = sFeebasEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_MILOTIC, CONDITIONS({IF_MIN_BEAUTY, 170})},
                                {EVO_TRADE, 0, SPECIES_MILOTIC, CONDITIONS({IF_HOLD_ITEM, ITEM_PRISM_SCALE})},
                                {EVO_ITEM, ITEM_PRISM_SCALE, SPECIES_MILOTIC}),
    },

    [SPECIES_MILOTIC] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 213,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_COMPETITIVE, ABILITY_CUTE_CHARM },
    #else
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_NONE, ABILITY_CUTE_CHARM },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Milotic"),
        .cryId = CRY_MILOTIC,
        .natDexNum = NATIONAL_DEX_MILOTIC,
        .categoryName = _("Tierno"),
        .height = 62,
        .weight = 1620,
		.description = COMPOUND_STRING(
			"Dicen que vive en el fondo de los grandes\n"
			"lagos. Se le considera el Pokémon más\n"
			"bello que existe y se le ha representado\n"
			"en multitud de pinturas y estatuas."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Milotic,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_BLUE : ANIM_CIRCULAR_STRETCH_TWICE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Milotic,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Milotic,
        .shinyPalette = gMonShinyPalette_Milotic,
        .iconSprite = gMonIcon_Milotic,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_MiloticF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_MiloticF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Milotic)
        OVERWORLD(
            sPicTable_Milotic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Milotic,
            gShinyOverworldPalette_Milotic
        )
        OVERWORLD_FEMALE(
            sPicTable_MiloticF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
        .levelUpLearnset = sMiloticLevelUpLearnset,
        .teachableLearnset = sMiloticTeachableLearnset,
    },
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
    [SPECIES_CASTFORM_NORMAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Clima"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "Cambia su forma dependiendo del\n"
            "clima. Las variaciones en la temperatura\n"
            "y la humedad parecen afectar su\n"
            "estructura celular."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CastformNormal,
        .frontPicSize = MON_COORDS_SIZE(24, 32),
        .frontPicYOffset = 17,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 12),
                ANIMCMD_FRAME(1, 24),
                ANIMCMD_FRAME(0, 24),
                ANIMCMD_FRAME(1, 24),
                ANIMCMD_FRAME(0, 24),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_CastformNormal,
        .backPicSize = MON_COORDS_SIZE(32, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_CastformNormal,
        .shinyPalette = gMonShinyPalette_CastformNormal,
        .iconSprite = gMonIcon_CastformNormal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CastformNormal,
            gShinyOverworldPalette_CastformNormal
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },

    [SPECIES_CASTFORM_SUNNY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Clima"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "Castform toma esta forma en días soleados.\n"
            "En un experimento donde se le colocó\n"
            "frente a un calefactor, no cambió a esta\n"
            "forma. Su cuerpo está cálido y acogedor."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CastformSunny,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 12),
                ANIMCMD_FRAME(1, 12),
                ANIMCMD_FRAME(0, 12),
                ANIMCMD_FRAME(1, 12),
                ANIMCMD_FRAME(0, 12),
                ANIMCMD_FRAME(1, 12),
                ANIMCMD_FRAME(0, 12),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_CastformSunny,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = P_GBA_STYLE_SPECIES_GFX ? BACK_ANIM_CONVEX_DOUBLE_ARC : BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_CastformSunny,
        .shinyPalette = gMonShinyPalette_CastformSunny,
        .iconSprite = gMonIcon_CastformSunny,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CastformSunny,
            gShinyOverworldPalette_CastformSunny
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },

    [SPECIES_CASTFORM_RAINY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Clima"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "Esta es la forma de Castform mientras llueve.\n"
            "En un experimento donde se le colocó en\n"
            "una ducha, no cambió a esta forma. Su cuerpo\n"
            "es suave, ligeramente hinchado con agua."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CastformRainy,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 22),
                ANIMCMD_FRAME(1, 22),
                ANIMCMD_FRAME(0, 22),
                ANIMCMD_FRAME(1, 22),
                ANIMCMD_FRAME(0, 11),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_CastformRainy,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = P_GBA_STYLE_SPECIES_GFX ? BACK_ANIM_CONVEX_DOUBLE_ARC : BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_CastformRainy,
        .shinyPalette = gMonShinyPalette_CastformRainy,
        .iconSprite = gMonIcon_CastformRainy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformRainy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CastformRainy,
            gShinyOverworldPalette_CastformRainy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },

    [SPECIES_CASTFORM_SNOWY] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 145,
        .evYield_HP = 1,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FORECAST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Clima"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "Esta es la forma de una tormenta\n"
            "de granizo. En un experimento donde se le\n"
            "colocó en un congelador, no cambió a esta\n"
            "forma. Su piel fría es tan lisa como el hielo."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CastformSnowy,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 5),
                ANIMCMD_FRAME(1, 12),
                ANIMCMD_FRAME(0, 12),
                ANIMCMD_FRAME(1, 29),
                ANIMCMD_FRAME(0, 12),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_V_STRETCH,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_CastformSnowy,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = P_GBA_STYLE_SPECIES_GFX ? BACK_ANIM_CONVEX_DOUBLE_ARC : BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_CastformSnowy,
        .shinyPalette = gMonShinyPalette_CastformSnowy,
        .iconSprite = gMonIcon_CastformSnowy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Castform)
        OVERWORLD(
            sPicTable_CastformSnowy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_CastformSnowy,
            gShinyOverworldPalette_CastformSnowy
        )
        .levelUpLearnset = sCastformLevelUpLearnset,
        .teachableLearnset = sCastformTeachableLearnset,
        .eggMoveLearnset = sCastformEggMoveLearnset,
        .formSpeciesIdTable = sCastformFormSpeciesIdTable,
        .formChangeTable = sCastformFormChangeTable,
    },
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
    [SPECIES_KECLEON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 132,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_PROTEAN },
    #else
        .abilities = { ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Kecleon"),
        .cryId = CRY_KECLEON,
        .natDexNum = NATIONAL_DEX_KECLEON,
        .categoryName = _("Camaleónico"),
        .height = 10,
        .weight = 220,
		.description = COMPOUND_STRING(
			"Este Pokémon tiene la capacidad de alterar\n"
			"la coloración de su cuerpo para camuflarse\n"
			"en el medio en el que esté. Si se asusta,\n"
			"Kecleon recuperará sus colores originales."),
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kecleon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Kecleon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Kecleon,
        .shinyPalette = gMonShinyPalette_Kecleon,
        .iconSprite = gMonIcon_Kecleon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Kecleon)
        OVERWORLD(
            sPicTable_Kecleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kecleon,
            gShinyOverworldPalette_Kecleon
        )
        .levelUpLearnset = sKecleonLevelUpLearnset,
        .teachableLearnset = sKecleonTeachableLearnset,
        .eggMoveLearnset = sKecleonEggMoveLearnset,
    },
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
    [SPECIES_SHUPPET] =
    {
        .baseHP        = 44,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 33,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 97,
        .evYield_Attack = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_CURSED_BODY },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Shuppet"),
        .cryId = CRY_SHUPPET,
        .natDexNum = NATIONAL_DEX_SHUPPET,
        .categoryName = _("Títere"),
        .height = 6,
        .weight = 23,
		.description = COMPOUND_STRING(
			"Este Pokémon deambula en la oscuridad\n"
			"de la noche en busca de sentimientos\n"
			"negativos, como el rencor y la envidia.\n"
			"Antes del amanecer, se retira a su hogar."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shuppet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Shuppet,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Shuppet,
        .shinyPalette = gMonShinyPalette_Shuppet,
        .iconSprite = gMonIcon_Shuppet,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Shuppet)
        OVERWORLD(
            sPicTable_Shuppet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Shuppet,
            gShinyOverworldPalette_Shuppet
        )
        .levelUpLearnset = sShuppetLevelUpLearnset,
        .teachableLearnset = sShuppetTeachableLearnset,
        .eggMoveLearnset = sShuppetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BANETTE}),
    },

    [SPECIES_BANETTE] =
    {
        .baseHP        = 64,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 83,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 179,
        .evYield_Attack = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_CURSED_BODY },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Banette"),
        .cryId = CRY_BANETTE,
        .natDexNum = NATIONAL_DEX_BANETTE,
        .categoryName = _("Marioneta"),
        .height = 11,
        .weight = 125,
		.description = COMPOUND_STRING(
			"Solía ser un muñeco de felpa al que\n"
			"abandonaron. Dicen que vive en vertederos\n"
			"de basura y que va buscando al niño\n"
			"que lo tiró en su día."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Banette,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_Banette,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Banette,
        .shinyPalette = gMonShinyPalette_Banette,
        .iconSprite = gMonIcon_Banette,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Banette)
        OVERWORLD(
            sPicTable_Banette,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Banette,
            gShinyOverworldPalette_Banette
        )
        .levelUpLearnset = sBanetteLevelUpLearnset,
        .teachableLearnset = sBanetteTeachableLearnset,
        .formSpeciesIdTable = sBanetteFormSpeciesIdTable,
        .formChangeTable = sBanetteFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BANETTE_MEGA] =
    {
        .baseHP        = 64,
        .baseAttack    = 165,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = 194,
        .evYield_Attack = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PRANKSTER, ABILITY_PRANKSTER, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Banette"),
        .cryId = CRY_BANETTE_MEGA,
        .natDexNum = NATIONAL_DEX_BANETTE,
        .categoryName = _("Marioneta"),
        .height = 12,
        .weight = 130,
        .description = COMPOUND_STRING(
            "La energía extraordinaria amplifica su\n"
            "poder de maldición hasta el punto de que\n"
            "no puede evitar maldecir incluso a su\n"
            "propio Entrenador."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BanetteMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_BanetteMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_BanetteMega,
        .shinyPalette = gMonShinyPalette_BanetteMega,
        .iconSprite = gMonIcon_BanetteMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Banette)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_BanetteMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BanetteMega,
            gShinyOverworldPalette_BanetteMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBanetteLevelUpLearnset,
        .teachableLearnset = sBanetteTeachableLearnset,
        .formSpeciesIdTable = sBanetteFormSpeciesIdTable,
        .formChangeTable = sBanetteFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
    [SPECIES_DUSKULL] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 90,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 59 : 97,
        .evYield_Defense = (P_UPDATED_EVS >= GEN_4) ? 0 : 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Duskull"),
        .cryId = CRY_DUSKULL,
        .natDexNum = NATIONAL_DEX_DUSKULL,
        .categoryName = _("Réquiem"),
        .height = 8,
        .weight = 150,
		.description = COMPOUND_STRING(
			"Una única mirada lanzada por su ojo\n"
			"escarlata basta para dejar petrificado\n"
			"de miedo al rival más fuerte. Deambula\n"
			"sin rumbo al amparo de la noche."),
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Duskull,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_Duskull,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Duskull,
        .shinyPalette = gMonShinyPalette_Duskull,
        .iconSprite = gMonIcon_Duskull,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Duskull)
        OVERWORLD(
            sPicTable_Duskull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Duskull,
            gShinyOverworldPalette_Duskull
        )
        .levelUpLearnset = sDuskullLevelUpLearnset,
        .teachableLearnset = sDuskullTeachableLearnset,
        .eggMoveLearnset = sDuskullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_DUSCLOPS}),
    },

    [SPECIES_DUSCLOPS] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 179,
        .evYield_Defense = 1,
        .evYield_SpDefense = (P_UPDATED_EVS >= GEN_4) ? 1 : 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusclops"),
        .cryId = CRY_DUSCLOPS,
        .natDexNum = NATIONAL_DEX_DUSCLOPS,
        .categoryName = _("Atrayente"),
        .height = 16,
        .weight = 306,
		.description = COMPOUND_STRING(
			"Se piensa que su cuerpo es hueco y\n"
			"que solo contiene una fantasmagórica\n"
			"bola de fuego. Con todo, nadie ha\n"
			"podido confirmar esta teoría."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Dusclops,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Dusclops,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dusclops,
        .shinyPalette = gMonShinyPalette_Dusclops,
        .iconSprite = gMonIcon_Dusclops,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Dusclops)
        OVERWORLD(
            sPicTable_Dusclops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dusclops,
            gShinyOverworldPalette_Dusclops
        )
        .levelUpLearnset = sDusclopsLevelUpLearnset,
        .teachableLearnset = sDusclopsTeachableLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_DUSKNOIR, CONDITIONS({IF_HOLD_ITEM, ITEM_REAPER_CLOTH})},
                                {EVO_ITEM, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusknoir"),
        .cryId = CRY_DUSKNOIR,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        .categoryName = _("Grilletes"),
        .height = 22,
        .weight = 1066,
		.description = COMPOUND_STRING(
			"La antena de la cabeza captura ondas\n"
			"de radio lejanas que le permiten\n"
			"secuestrar a gente."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Dusknoir,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Dusknoir,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Dusknoir,
        .shinyPalette = gMonShinyPalette_Dusknoir,
        .iconSprite = gMonIcon_Dusknoir,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 13, SHADOW_SIZE_M)
        FOOTPRINT(Dusknoir)
        OVERWORLD(
            sPicTable_Dusknoir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dusknoir,
            gShinyOverworldPalette_Dusknoir
        )
        .levelUpLearnset = sDusknoirLevelUpLearnset,
        .teachableLearnset = sDusknoirTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
    [SPECIES_TROPIUS] =
    {
        .baseHP        = 99,
        .baseAttack    = 68,
        .baseDefense   = 83,
        .baseSpeed     = 51,
        .baseSpAttack  = 72,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 169,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_HARVEST },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
    #endif
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tropius"),
        .cryId = CRY_TROPIUS,
        .natDexNum = NATIONAL_DEX_TROPIUS,
        .categoryName = _("Fruto"),
        .height = 20,
        .weight = 1000,
		.description = COMPOUND_STRING(
			"Logra volar agitando sus amplias hojas.\n"
			"El racimo de fruta que le crece alrededor\n"
			"del cuello es de una dulzura exquisita.\n"
			"En primavera, libera polen por el cuello."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Tropius,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tropius,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Tropius,
        .shinyPalette = gMonShinyPalette_Tropius,
        .iconSprite = gMonIcon_Tropius,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 13, SHADOW_SIZE_L)
        FOOTPRINT(Tropius)
        OVERWORLD(
            sPicTable_Tropius,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tropius,
            gShinyOverworldPalette_Tropius
        )
        .levelUpLearnset = sTropiusLevelUpLearnset,
        .teachableLearnset = sTropiusTeachableLearnset,
        .eggMoveLearnset = sTropiusEggMoveLearnset,
    },
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_CHINGLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 57 : 74,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Chingling"),
        .cryId = CRY_CHINGLING,
        .natDexNum = NATIONAL_DEX_CHINGLING,
        .categoryName = _("Cascabel"),
        .height = 2,
        .weight = 6,
		.description = COMPOUND_STRING(
			"Emite chillidos en unas frecuencias\n"
			"imperceptibles para las personas.\n"
			"Cuando empieza no puede parar."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chingling,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Chingling,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Chingling,
        .shinyPalette = gMonShinyPalette_Chingling,
        .iconSprite = gMonIcon_Chingling,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Chingling)
        OVERWORLD(
            sPicTable_Chingling,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chingling,
            gShinyOverworldPalette_Chingling
        )
        .levelUpLearnset = sChinglingLevelUpLearnset,
        .teachableLearnset = sChinglingTeachableLearnset,
        .eggMoveLearnset = sChinglingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_CHIMECHO, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD},{IF_TIME, TIME_NIGHT})}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHIMECHO] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 75 : 65,
        .baseAttack    = 50,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 80 : 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = P_UPDATED_STATS >= GEN_7 ? 90 : 80,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 159,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 149,
    #else
        .expYield = 147,
    #endif
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chimecho"),
        .cryId = CRY_CHIMECHO,
        .natDexNum = NATIONAL_DEX_CHIMECHO,
        .categoryName = _("Campanilla"),
        .height = 6,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Se ponen a volar sin parar cuando llega\n"
			"la estación cálida. Se comunica con otros\n"
			"a través de siete tipos de grito distintos\n"
			"muy característicos."),
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chimecho,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_Chimecho,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Chimecho,
        .shinyPalette = gMonShinyPalette_Chimecho,
        .iconSprite = gMonIcon_Chimecho,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 16, SHADOW_SIZE_S)
        FOOTPRINT(Chimecho)
        OVERWORLD(
            sPicTable_Chimecho,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Chimecho,
            gShinyOverworldPalette_Chimecho
        )
        .levelUpLearnset = sChimechoLevelUpLearnset,
        .teachableLearnset = sChimechoTeachableLearnset,
        .eggMoveLearnset = sChimechoEggMoveLearnset,
    },
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
    [SPECIES_ABSOL] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 174,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PRESSURE, ABILITY_SUPER_LUCK, ABILITY_JUSTIFIED },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_JUSTIFIED },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Absol"),
        .cryId = CRY_ABSOL,
        .natDexNum = NATIONAL_DEX_ABSOL,
        .categoryName = _("Catástrofe"),
        .height = 12,
        .weight = 470,
		.description = COMPOUND_STRING(
			"Detecta con precisión cualquier cambio\n"
			"producido en la atmósfera o la tierra y\n"
			"predice catástrofes naturales. Es un\n"
			"Pokémon longevo que vive 100 años."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Absol,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Absol,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Absol,
        .shinyPalette = gMonShinyPalette_Absol,
        .iconSprite = gMonIcon_Absol,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Absol)
        OVERWORLD(
            sPicTable_Absol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Absol,
            gShinyOverworldPalette_Absol
        )
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,
        .formChangeTable = sAbsolFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABSOL_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 30,
        .expYield = 198,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Absol"),
        .cryId = CRY_ABSOL_MEGA,
        .natDexNum = NATIONAL_DEX_ABSOL,
        .categoryName = _("Catástrofe"),
        .height = 12,
        .weight = 490,
        .description = COMPOUND_STRING(
            "A medida que la energía de la Mega lo\n"
            "llena, su pelaje se eriza. Lo que se ve en\n"
            "su espalda no son alas reales, y\n"
            "no es capaz de volar."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AbsolMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AbsolMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_AbsolMega,
        .shinyPalette = gMonShinyPalette_AbsolMega,
        .iconSprite = gMonIcon_AbsolMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Absol)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AbsolMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AbsolMega,
            gShinyOverworldPalette_AbsolMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAbsolLevelUpLearnset,
        .teachableLearnset = sAbsolTeachableLearnset,
        .eggMoveLearnset = sAbsolEggMoveLearnset,
        .formSpeciesIdTable = sAbsolFormSpeciesIdTable,
        .formChangeTable = sAbsolFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
    [SPECIES_SNORUNT] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 74,
        .evYield_HP = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Snorunt"),
        .cryId = CRY_SNORUNT,
        .natDexNum = NATIONAL_DEX_SNORUNT,
        .categoryName = _("Gorro nieve"),
        .height = 7,
        .weight = 168,
		.description = COMPOUND_STRING(
			"Tienden a desplazarse en grupos de cinco\n"
			"Snorunt. En las zonas de nieve se dice\n"
			"que, cuando se les ve entrada la noche, es\n"
			"porque va a nevar a la mañana siguiente."),
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snorunt,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Snorunt,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Snorunt,
        .shinyPalette = gMonShinyPalette_Snorunt,
        .iconSprite = gMonIcon_Snorunt,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Snorunt)
        OVERWORLD(
            sPicTable_Snorunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snorunt,
            gShinyOverworldPalette_Snorunt
        )
        .levelUpLearnset = sSnoruntLevelUpLearnset,
        .teachableLearnset = sSnoruntTeachableLearnset,
        .eggMoveLearnset = sSnoruntEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_GLALIE}
                            #if P_GEN_4_CROSS_EVOS
                                ,{EVO_ITEM, ITEM_DAWN_STONE, SPECIES_FROSLASS, CONDITIONS({IF_GENDER, MON_FEMALE})}
                            #endif
                            ),
    },

    [SPECIES_GLALIE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Glalie"),
        .cryId = CRY_GLALIE,
        .natDexNum = NATIONAL_DEX_GLALIE,
        .categoryName = _("Cara"),
        .height = 15,
        .weight = 2565,
		.description = COMPOUND_STRING(
			"Un Glalie tiene el poder de congelar\n"
			"al instante la humedad de la atmósfera:\n"
			"así forma una nube de cristales de hielo\n"
			"con forma de diamantes a su alrededor."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glalie,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_ZIGZAG_FAST,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Glalie,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Glalie,
        .shinyPalette = gMonShinyPalette_Glalie,
        .iconSprite = gMonIcon_Glalie,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Glalie)
        OVERWORLD(
            sPicTable_Glalie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Glalie,
            gShinyOverworldPalette_Glalie
        )
        .levelUpLearnset = sGlalieLevelUpLearnset,
        .teachableLearnset = sGlalieTeachableLearnset,
        .formSpeciesIdTable = sGlalieFormSpeciesIdTable,
        .formChangeTable = sGlalieFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GLALIE_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 75,
        .expYield = 203,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_REFRIGERATE, ABILITY_REFRIGERATE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Glalie"),
        .cryId = CRY_GLALIE_MEGA,
        .natDexNum = NATIONAL_DEX_GLALIE,
        .categoryName = _("Cara"),
        .height = 21,
        .weight = 3502,
        .description = COMPOUND_STRING(
            "El poder de la Mega fue tan fuerte\n"
            "que rompió su mandíbula. Su incapacidad\n"
            "para comer bien le enfada."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GlalieMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_GlalieMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_GlalieMega,
        .shinyPalette = gMonShinyPalette_GlalieMega,
        .iconSprite = gMonIcon_GlalieMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 18, SHADOW_SIZE_L)
        FOOTPRINT(Glalie)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GlalieMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GlalieMega,
            gShinyOverworldPalette_GlalieMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGlalieLevelUpLearnset,
        .teachableLearnset = sGlalieTeachableLearnset,
        .formSpeciesIdTable = sGlalieFormSpeciesIdTable,
        .formChangeTable = sGlalieFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_FROSLASS] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Froslass"),
        .cryId = CRY_FROSLASS,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Tierra fría"),
        .height = 13,
        .weight = 266,
		.description = COMPOUND_STRING(
			"Congela a sus enemigos con un aliento\n"
			"gélido de 50 grados bajo cero.\n"
			"Está hueco por dentro."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Froslass,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Froslass,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Froslass,
        .shinyPalette = gMonShinyPalette_Froslass,
        .iconSprite = gMonIcon_Froslass,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Froslass)
        OVERWORLD(
            sPicTable_Froslass,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Froslass,
            gShinyOverworldPalette_Froslass
        )
        .levelUpLearnset = sFroslassLevelUpLearnset,
        .teachableLearnset = sFroslassTeachableLearnset,
        .formSpeciesIdTable = sFroslassFormSpeciesIdTable,
        .formChangeTable = sFroslassFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FROSLASS_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 120,
        .baseSpAttack  = 140,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 187,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Froslass"),
        .cryId = CRY_FROSLASS, // CRY_FROSLASS_MEGA,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Snow Land"),
        .height = 26,
        .weight = 296,
        .description = COMPOUND_STRING(
            "This Pokémon can use eerie cold\n"
            "air imbued with ghost energy to\n"
            "freeze even insubstantial things,\n"
            "such as flames or the wind."),
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_BATTLE_ONLY_FORMS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .size = 512,
            .width = 32,
            .height = 32,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sFroslassLevelUpLearnset,
        .teachableLearnset = sFroslassTeachableLearnset,
        .formSpeciesIdTable = sFroslassFormSpeciesIdTable,
        .formChangeTable = sFroslassFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
    [SPECIES_SPHEAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 75,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_OBLIVIOUS },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Spheal"),
        .cryId = CRY_SPHEAL,
        .natDexNum = NATIONAL_DEX_SPHEAL,
        .categoryName = _("Aplauso"),
        .height = 8,
        .weight = 395,
		.description = COMPOUND_STRING(
			"Está cubierto por completo con un grueso\n"
			"pelaje. Gracias a él, nunca siente frío:\n"
			"ni cuando rueda sobre placas de hielo\n"
			"ni cuando bucea en el mar."),
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spheal,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 43),
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SPIN : ANIM_SPIN_LONG,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Spheal,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Spheal,
        .shinyPalette = gMonShinyPalette_Spheal,
        .iconSprite = gMonIcon_Spheal,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Spheal)
        OVERWORLD(
            sPicTable_Spheal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spheal,
            gShinyOverworldPalette_Spheal
        )
        .levelUpLearnset = sSphealLevelUpLearnset,
        .teachableLearnset = sSphealTeachableLearnset,
        .eggMoveLearnset = sSphealEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_SEALEO}),
    },

    [SPECIES_SEALEO] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 128,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_OBLIVIOUS },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sealeo"),
        .cryId = CRY_SEALEO,
        .natDexNum = NATIONAL_DEX_SEALEO,
        .categoryName = _("Rodabola"),
        .height = 11,
        .weight = 876,
		.description = COMPOUND_STRING(
			"Sealeo vive en manadas sobre placas\n"
			"de hielo. Puede romper el hielo usando\n"
			"sus potentes aletas y se zambulle en \n"
			"el mar cinco veces al día para pescar."),
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sealeo,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Sealeo,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Sealeo,
        .shinyPalette = gMonShinyPalette_Sealeo,
        .iconSprite = gMonIcon_Sealeo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 2, SHADOW_SIZE_L)
        FOOTPRINT(Sealeo)
        OVERWORLD(
            sPicTable_Sealeo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sealeo,
            gShinyOverworldPalette_Sealeo
        )
        .levelUpLearnset = sSealeoLevelUpLearnset,
        .teachableLearnset = sSealeoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 44, SPECIES_WALREIN}),
    },

    [SPECIES_WALREIN] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 192,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_OBLIVIOUS },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Walrein"),
        .cryId = CRY_WALREIN,
        .natDexNum = NATIONAL_DEX_WALREIN,
        .categoryName = _("Rompehielo"),
        .height = 14,
        .weight = 1506,
		.description = COMPOUND_STRING(
			"Para proteger a su manada, el líder luchará\n"
			"hasta el final contra todo lo que invada su\n"
			"territorio. En el transcurso del combate,\n"
			"es posible que pierda los colmillos."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Walrein,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Walrein,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Walrein,
        .shinyPalette = gMonShinyPalette_Walrein,
        .iconSprite = gMonIcon_Walrein,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Walrein)
        OVERWORLD(
            sPicTable_Walrein,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Walrein,
            gShinyOverworldPalette_Walrein
        )
        .levelUpLearnset = sWalreinLevelUpLearnset,
        .teachableLearnset = sWalreinTeachableLearnset,
    },
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
    [SPECIES_CLAMPERL] =
    {
        .baseHP        = 35,
        .baseAttack    = 64,
        .baseDefense   = 85,
        .baseSpeed     = 32,
        .baseSpAttack  = 74,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 69 : 142,
        .evYield_Defense = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Clamperl"),
        .cryId = CRY_CLAMPERL,
        .natDexNum = NATIONAL_DEX_CLAMPERL,
        .categoryName = _("Bivalvo"),
        .height = 4,
        .weight = 525,
		.description = COMPOUND_STRING(
			"Un Clamperl cierra de golpe la concha\n"
			"para evitar que escape su presa.\n"
			"Dicen que la perla que crea al evolucionar\n"
			"está dotada de una misteriosa energía."),
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clamperl,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Clamperl,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Clamperl,
        .shinyPalette = gMonShinyPalette_Clamperl,
        .iconSprite = gMonIcon_Clamperl,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Clamperl)
        OVERWORLD(
            sPicTable_Clamperl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Clamperl,
            gShinyOverworldPalette_Clamperl
        )
        .levelUpLearnset = sClamperlLevelUpLearnset,
        .teachableLearnset = sClamperlTeachableLearnset,
        .eggMoveLearnset = sClamperlEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_HUNTAIL, CONDITIONS({IF_HOLD_ITEM, ITEM_DEEP_SEA_TOOTH})},
                                {EVO_TRADE, 0, SPECIES_GOREBYSS, CONDITIONS({IF_HOLD_ITEM, ITEM_DEEP_SEA_SCALE})},
                                {EVO_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                                {EVO_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}),
    },

    [SPECIES_HUNTAIL] =
    {
        .baseHP        = 55,
        .baseAttack    = 104,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 94,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 178,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Huntail"),
        .cryId = CRY_HUNTAIL,
        .natDexNum = NATIONAL_DEX_HUNTAIL,
        .categoryName = _("Abisal"),
        .height = 17,
        .weight = 270,
		.description = COMPOUND_STRING(
			"Para soportar la machacante presión\n"
			"del mar a gran profundidad, desarrolla una\n"
			"espina dorsal muy gruesa y fuerte. La cola,\n"
			"con forma de pez, tiene ojos que brillan."),
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Huntail,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Huntail,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Huntail,
        .shinyPalette = gMonShinyPalette_Huntail,
        .iconSprite = gMonIcon_Huntail,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 7, SHADOW_SIZE_L)
        FOOTPRINT(Huntail)
        OVERWORLD(
            sPicTable_Huntail,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Huntail,
            gShinyOverworldPalette_Huntail
        )
        .levelUpLearnset = sHuntailLevelUpLearnset,
        .teachableLearnset = sHuntailTeachableLearnset,
    },

    [SPECIES_GOREBYSS] =
    {
        .baseHP        = 55,
        .baseAttack    = 84,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 114,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 178,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Gorebyss"),
        .cryId = CRY_GOREBYSS,
        .natDexNum = NATIONAL_DEX_GOREBYSS,
        .categoryName = _("Mar del sur"),
        .height = 18,
        .weight = 226,
		.description = COMPOUND_STRING(
			"Gorebyss absorbe los fluidos corporales\n"
			"de su presa a través de la boca, que es\n"
			"fina y tubular. Cuando acaba de comer,\n"
			"se le acentúa el tono rosado."),
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gorebyss,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Gorebyss,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Gorebyss,
        .shinyPalette = gMonShinyPalette_Gorebyss,
        .iconSprite = gMonIcon_Gorebyss,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Gorebyss)
        OVERWORLD(
            sPicTable_Gorebyss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Gorebyss,
            gShinyOverworldPalette_Gorebyss
        )
        .levelUpLearnset = sGorebyssLevelUpLearnset,
        .teachableLearnset = sGorebyssTeachableLearnset,
    },
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
    [SPECIES_RELICANTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 198,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_ROCK_HEAD, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Relicanth"),
        .cryId = CRY_RELICANTH,
        .natDexNum = NATIONAL_DEX_RELICANTH,
        .categoryName = _("Longevo"),
        .height = 10,
        .weight = 234,
		.description = COMPOUND_STRING(
			"Se llegó a creer que se había extinguido.\n"
			"La especie no ha cambiado de forma desde\n"
			"hace 100 millones de años. Camina por el\n"
			"fondo marino usando las aletas frontales."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Relicanth,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Relicanth,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Relicanth,
        .shinyPalette = gMonShinyPalette_Relicanth,
        .iconSprite = gMonIcon_Relicanth,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_RelicanthF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_RelicanthF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Relicanth)
        OVERWORLD(
            sPicTable_Relicanth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Relicanth,
            gShinyOverworldPalette_Relicanth
        )
        OVERWORLD_FEMALE(
            sPicTable_RelicanthF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sRelicanthLevelUpLearnset,
        .teachableLearnset = sRelicanthTeachableLearnset,
        .eggMoveLearnset = sRelicanthEggMoveLearnset,
    },
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
    [SPECIES_LUVDISC] =
    {
        .baseHP        = 43,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 97,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 116 : 110,
        .evYield_Speed = 1,
        .itemCommon = ITEM_HEART_SCALE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Luvdisc"),
        .cryId = CRY_LUVDISC,
        .natDexNum = NATIONAL_DEX_LUVDISC,
        .categoryName = _("Cita"),
        .height = 6,
        .weight = 87,
		.description = COMPOUND_STRING(
			"Para Luvdisc, las ramas de Corsola\n"
			"son su nido. Existe una antigua costumbre\n"
			"que consiste en regalar un Luvdisc\n"
			"para expresar un sentimiento amoroso."),
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luvdisc,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 24 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Luvdisc,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        .palette = gMonPalette_Luvdisc,
        .shinyPalette = gMonShinyPalette_Luvdisc,
        .iconSprite = gMonIcon_Luvdisc,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Luvdisc)
        OVERWORLD(
            sPicTable_Luvdisc,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Luvdisc,
            gShinyOverworldPalette_Luvdisc
        )
        .levelUpLearnset = sLuvdiscLevelUpLearnset,
        .teachableLearnset = sLuvdiscTeachableLearnset,
        .eggMoveLearnset = sLuvdiscEggMoveLearnset,
    },
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
    [SPECIES_BAGON] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 89,
        .evYield_Attack = 1,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bagon"),
        .cryId = CRY_BAGON,
        .natDexNum = NATIONAL_DEX_BAGON,
        .categoryName = _("Cabeza roca"),
        .height = 6,
        .weight = 421,
		.description = COMPOUND_STRING(
			"Aunque pequeño, este Pokémon es muy\n"
			"fuerte porque su cuerpo es puro músculo.\n"
			"Propina cabezazos con el cráneo, que\n"
			"es tan duro como el hierro."),
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bagon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE_TWICE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Bagon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Bagon,
        .shinyPalette = gMonShinyPalette_Bagon,
        .iconSprite = gMonIcon_Bagon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Bagon)
        OVERWORLD(
            sPicTable_Bagon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bagon,
            gShinyOverworldPalette_Bagon
        )
        .levelUpLearnset = sBagonLevelUpLearnset,
        .teachableLearnset = sBagonTeachableLearnset,
        .eggMoveLearnset = sBagonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SHELGON}),
    },

    [SPECIES_SHELGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 144,
        .evYield_Defense = 2,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Shelgon"),
        .cryId = CRY_SHELGON,
        .natDexNum = NATIONAL_DEX_SHELGON,
        .categoryName = _("Resistencia"),
        .height = 11,
        .weight = 1105,
		.description = COMPOUND_STRING(
			"Apenas come cuando va a evolucionar.\n"
			"Soportar el hambre lo vuelve resistente.\n"
			"Cuando empieza a evolucionar, comienza\n"
			"a perder su coraza."),
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shelgon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Shelgon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Shelgon,
        .shinyPalette = gMonShinyPalette_Shelgon,
        .iconSprite = gMonIcon_Shelgon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Shelgon)
        OVERWORLD(
            sPicTable_Shelgon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shelgon,
            gShinyOverworldPalette_Shelgon
        )
        .levelUpLearnset = sShelgonLevelUpLearnset,
        .teachableLearnset = sShelgonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_SALAMENCE}),
    },

    [SPECIES_SALAMENCE] =
    {
        .baseHP        = 95,
        .baseAttack    = 135,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
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
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Salamence"),
        .cryId = CRY_SALAMENCE,
        .natDexNum = NATIONAL_DEX_SALAMENCE,
        .categoryName = _("Dragón"),
        .height = 15,
        .weight = 1026,
		.description = COMPOUND_STRING(
			"Después de muchos años, su estructura\n"
			"celular sufrió una mutación repentina y\n"
			"le crecieron alas. Cuando se enfada, no\n"
			"se atiene a razones y entra en cólera."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salamence,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 70,
        .backPic = gMonBackPic_Salamence,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Salamence,
        .shinyPalette = gMonShinyPalette_Salamence,
        .iconSprite = gMonIcon_Salamence,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Salamence)
        OVERWORLD(
            sPicTable_Salamence,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Salamence,
            gShinyOverworldPalette_Salamence
        )
        .levelUpLearnset = sSalamenceLevelUpLearnset,
        .teachableLearnset = sSalamenceTeachableLearnset,
        .formSpeciesIdTable = sSalamenceFormSpeciesIdTable,
        .formChangeTable = sSalamenceFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SALAMENCE_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Salamence"),
        .cryId = CRY_SALAMENCE_MEGA,
        .natDexNum = NATIONAL_DEX_SALAMENCE,
        .categoryName = _("Dragón"),
        .height = 18,
        .weight = 1126,
        .description = COMPOUND_STRING(
            "La Mega alimenta su brutalidad, y\n"
            "puede incluso volverse contra el amo\n"
            "que lo crió. Se apodó como “el creciente\n"
            "empapado en sangre.”"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SalamenceMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SalamenceMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_SalamenceMega,
        .shinyPalette = gMonShinyPalette_SalamenceMega,
        .iconSprite = gMonIcon_SalamenceMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Salamence)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SalamenceMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SalamenceMega,
            gShinyOverworldPalette_SalamenceMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSalamenceLevelUpLearnset,
        .teachableLearnset = sSalamenceTeachableLearnset,
        .formSpeciesIdTable = sSalamenceFormSpeciesIdTable,
        .formChangeTable = sSalamenceFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
    [SPECIES_BELDUM] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 103,
        .evYield_Defense = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Beldum"),
        .cryId = CRY_BELDUM,
        .natDexNum = NATIONAL_DEX_BELDUM,
        .categoryName = _("Bola hierro"),
        .height = 6,
        .weight = 952,
		.description = COMPOUND_STRING(
			"Cuando los Beldum van en enjambre, se\n"
			"mueven al unísono en perfecta armonía,\n"
			"como si fueran un solo Pokémon.\n"
			"Se comunican por ondas cerebrales."),
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Beldum,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Beldum,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Beldum,
        .shinyPalette = gMonShinyPalette_Beldum,
        .iconSprite = gMonIcon_Beldum,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Beldum)
        OVERWORLD(
            sPicTable_Beldum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Beldum,
            gShinyOverworldPalette_Beldum
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBeldumLevelUpLearnset,
        .teachableLearnset = sBeldumTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_METANG}),
    },

    [SPECIES_METANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 147 : 153,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Metang"),
        .cryId = CRY_METANG,
        .natDexNum = NATIONAL_DEX_METANG,
        .categoryName = _("Garrahierro"),
        .height = 12,
        .weight = 2025,
		.description = COMPOUND_STRING(
			"Sus brazos acaban en unas garras que\n"
			"acumulan energía destructiva con la que\n"
			"rasga planchas de hierro como si fueran\n"
			"de papel. Vuela a más de 100 km por hora."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metang,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Metang,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Metang,
        .shinyPalette = gMonShinyPalette_Metang,
        .iconSprite = gMonIcon_Metang,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Metang)
        OVERWORLD(
            sPicTable_Metang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Metang,
            gShinyOverworldPalette_Metang
        )
        .levelUpLearnset = sMetangLevelUpLearnset,
        .teachableLearnset = sMetangTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 45, SPECIES_METAGROSS}),
    },

    [SPECIES_METAGROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Metagross"),
        .cryId = CRY_METAGROSS,
        .natDexNum = NATIONAL_DEX_METAGROSS,
        .categoryName = _("Pata hierro"),
        .height = 16,
        .weight = 5500,
		.description = COMPOUND_STRING(
			"Metagross tiene cuatro cerebros unidos\n"
			"por una compleja red neuronal. Esta\n"
			"integración hace que sea más inteligente\n"
			"que un ordenador de última generación."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        .frontPic = gMonFrontPic_Metagross,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Metagross,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Metagross,
        .shinyPalette = gMonShinyPalette_Metagross,
        .iconSprite = gMonIcon_Metagross,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -2, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Metagross)
        OVERWORLD(
            sPicTable_Metagross,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Metagross,
            gShinyOverworldPalette_Metagross
        )
        .levelUpLearnset = sMetagrossLevelUpLearnset,
        .teachableLearnset = sMetagrossTeachableLearnset,
        .formSpeciesIdTable = sMetagrossFormSpeciesIdTable,
        .formChangeTable = sMetagrossFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_METAGROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 150,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Defense = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Metagross"),
        .cryId = CRY_METAGROSS_MEGA,
        .natDexNum = NATIONAL_DEX_METAGROSS,
        .categoryName = _("Pata hierro"),
        .height = 25,
        .weight = 9429,
        .description = COMPOUND_STRING(
            "Cuando sabe que no puede ganar, clava\n"
            "las garras de sus patas en su rival y\n"
            "comienza la cuenta regresiva para una\n"
            "gran explosión."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
        .frontPic = gMonFrontPic_MetagrossMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_MetagrossMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_MetagrossMega,
        .shinyPalette = gMonShinyPalette_MetagrossMega,
        .iconSprite = gMonIcon_MetagrossMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 15, SHADOW_SIZE_L)
        FOOTPRINT(Metagross)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MetagrossMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MetagrossMega,
            gShinyOverworldPalette_MetagrossMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMetagrossLevelUpLearnset,
        .teachableLearnset = sMetagrossTeachableLearnset,
        .formSpeciesIdTable = sMetagrossFormSpeciesIdTable,
        .formChangeTable = sMetagrossFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
    [SPECIES_REGIROCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 200,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 217,
    #endif
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Regirock"),
        .cryId = CRY_REGIROCK,
        .natDexNum = NATIONAL_DEX_REGIROCK,
        .categoryName = _("Pico roca"),
        .height = 17,
        .weight = 2300,
		.description = COMPOUND_STRING(
			"Está enteramente formado por rocas\n"
			"y cantos rodados. Si se le desprendieran\n"
			"partes del cuerpo en combate, Regirock\n"
			"se repararía agregando rocas nuevas."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Regirock,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Regirock,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Regirock,
        .shinyPalette = gMonShinyPalette_Regirock,
        .iconSprite = gMonIcon_Regirock,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Regirock)
        OVERWORLD(
            sPicTable_Regirock,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Regirock,
            gShinyOverworldPalette_Regirock
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegirockLevelUpLearnset,
        .teachableLearnset = sRegirockTeachableLearnset,
    },
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
    [SPECIES_REGICE] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 200,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 216,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Regice"),
        .cryId = CRY_REGICE,
        .natDexNum = NATIONAL_DEX_REGICE,
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
		.description = COMPOUND_STRING(
			"Está formado en su totalidad por hielo\n"
			"de la Antártica. Todas las investigaciones\n"
			"parecen indicar que dicho hielo procede\n"
			"de alguna glaciación."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Regice,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FOUR_PETAL : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Regice,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Regice,
        .shinyPalette = gMonShinyPalette_Regice,
        .iconSprite = gMonIcon_Regice,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Regice)
        OVERWORLD(
            sPicTable_Regice,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Regice,
            gShinyOverworldPalette_Regice
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegiceLevelUpLearnset,
        .teachableLearnset = sRegiceTeachableLearnset,
    },
#endif //P_FAMILY_REGICE

#if P_FAMILY_REGISTEEL
    [SPECIES_REGISTEEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 215,
    #endif
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Registeel"),
        .cryId = CRY_REGISTEEL,
        .natDexNum = NATIONAL_DEX_REGISTEEL,
        .categoryName = _("Hierro"),
        .height = 19,
        .weight = 2050,
		.description = COMPOUND_STRING(
			"Su cuerpo está compuesto del metal\n"
			"más duro que hay; una misteriosa\n"
			"sustancia que, además de ser muy sólida,\n"
			"se contrae y dilata con facilidad."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Registeel,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Registeel,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Registeel,
        .shinyPalette = gMonShinyPalette_Registeel,
        .iconSprite = gMonIcon_Registeel,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Registeel)
        OVERWORLD(
            sPicTable_Registeel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Registeel,
            gShinyOverworldPalette_Registeel
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRegisteelLevelUpLearnset,
        .teachableLearnset = sRegisteelTeachableLearnset,
    },
#endif //P_FAMILY_REGISTEEL

#if P_FAMILY_LATIAS
    [SPECIES_LATIAS] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 211,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Latias"),
        .cryId = CRY_LATIAS,
        .natDexNum = NATIONAL_DEX_LATIAS,
        .categoryName = _("Eon"),
        .height = 14,
        .weight = 400,
		.description = COMPOUND_STRING(
			"Es parte de una manada de pequeño\n"
			"tamaño. Rara vez entra en contacto con\n"
			"la gente o con otros Pokémon. Si siente\n"
			"la presencia del enemigo, desaparece."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Latias,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE_FAST_SHORT : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 12,
        .backPic = gMonBackPic_Latias,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Latias,
        .shinyPalette = gMonShinyPalette_Latias,
        .iconSprite = gMonIcon_Latias,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 15, SHADOW_SIZE_M)
        FOOTPRINT(Latias)
        OVERWORLD(
            sPicTable_Latias,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Latias,
            gShinyOverworldPalette_Latias
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,
        .formChangeTable = sLatiasFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIAS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Latias"),
        .cryId = CRY_LATIAS_MEGA,
        .natDexNum = NATIONAL_DEX_LATIAS,
        .categoryName = _("Eon"),
        .height = 18,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Es más pequeño que Mega Latios.\n"
            "Es más ágil y puede hacer giros\n"
            "muy bruscos. Cuando Mega Evoluciona, su\n"
            "fuerza defensiva crece mucho."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LatiasMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_LatiasMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_LatiasMega,
        .shinyPalette = gMonShinyPalette_LatiasMega,
        .iconSprite = gMonIcon_LatiasMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Latias)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_LatiasMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_LatiasMega,
            gShinyOverworldPalette_LatiasMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiasLevelUpLearnset,
        .teachableLearnset = sLatiasTeachableLearnset,
        .formSpeciesIdTable = sLatiasFormSpeciesIdTable,
        .formChangeTable = sLatiasFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
    [SPECIES_LATIOS] =
    {
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 211,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Latios"),
        .cryId = CRY_LATIOS,
        .natDexNum = NATIONAL_DEX_LATIOS,
        .categoryName = _("Eon"),
        .height = 20,
        .weight = 600,
		.description = COMPOUND_STRING(
			"Incluso oculto, detecta la ubicación de\n"
			"los demás y capta sus emociones\n"
			"telepáticamente. Es tan inteligente\n"
			"que entiende el lenguaje humano."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Latios,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Latios,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Latios,
        .shinyPalette = gMonShinyPalette_Latios,
        .iconSprite = gMonIcon_Latios,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 17, SHADOW_SIZE_M)
        FOOTPRINT(Latios)
        OVERWORLD(
            sPicTable_Latios,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Latios,
            gShinyOverworldPalette_Latios
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,
        .formChangeTable = sLatiosFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIOS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Latios"),
        .cryId = CRY_LATIOS_MEGA,
        .natDexNum = NATIONAL_DEX_LATIOS,
        .categoryName = _("Eon"),
        .height = 23,
        .weight = 700,
        .description = COMPOUND_STRING(
            "Es más grande que Mega Latias y puede\n"
            "alcanzar mayores velocidades en vuelo.\n"
            "Puede usar su velocidad en batalla\n"
            "para desatar una ráfaga de ataques."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_LatiosMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_LatiosMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_LatiosMega,
        .shinyPalette = gMonShinyPalette_LatiosMega,
        .iconSprite = gMonIcon_LatiosMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 19, SHADOW_SIZE_L)
        FOOTPRINT(Latios)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_LatiosMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_LatiosMega,
            gShinyOverworldPalette_LatiosMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLatiosLevelUpLearnset,
        .teachableLearnset = sLatiosTeachableLearnset,
        .formSpeciesIdTable = sLatiosFormSpeciesIdTable,
        .formChangeTable = sLatiosFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS

#if P_FAMILY_KYOGRE
    [SPECIES_KYOGRE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 140,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 335,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 302,
    #else
        .expYield = 218,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DRIZZLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Kyogre"),
        .cryId = CRY_KYOGRE,
        .natDexNum = NATIONAL_DEX_KYOGRE,
        .categoryName = _("Cuenca mar"),
        .height = 45,
        .weight = 3520,
		.description = COMPOUND_STRING(
			"En la mitología se considera a Kyogre\n"
			"como el creador del mar. Tras largos años\n"
			"de enfrentamiento con Groudon,\n"
			"se echó a dormir en el fondo del mar."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Kyogre,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .frontAnimDelay = 60,
        .backPic = gMonBackPic_Kyogre,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Kyogre,
        .shinyPalette = gMonShinyPalette_Kyogre,
        .iconSprite = gMonIcon_Kyogre,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kyogre)
        OVERWORLD(
            sPicTable_Kyogre,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kyogre,
            gShinyOverworldPalette_Kyogre
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,
        .formChangeTable = sKyogreFormChangeTable,
    },
#if P_PRIMAL_REVERSIONS
    [SPECIES_KYOGRE_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 180,
        .baseSpDefense = 160,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 385 : 347,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRIMORDIAL_SEA, ABILITY_PRIMORDIAL_SEA },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Kyogre"),
        .cryId = CRY_KYOGRE_PRIMAL,
        .natDexNum = NATIONAL_DEX_KYOGRE,
        .categoryName = _("Cuenca mar"),
        .height = 98,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "Cuando Kyogre rugió, el agua brotó\n"
            "y los mares se expandieron.\n"
            "Nubes oscuras cubrieron el mundo,\n"
            "y el diluvio cayó sobre todos…"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_KyogrePrimal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KyogrePrimal,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_KyogrePrimal,
        .shinyPalette = gMonShinyPalette_KyogrePrimal,
        .iconSprite = gMonIcon_KyogrePrimal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kyogre)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_KyogrePrimal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_KyogrePrimal,
            gShinyOverworldPalette_KyogrePrimal
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isPrimalReversion = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKyogreLevelUpLearnset,
        .teachableLearnset = sKyogreTeachableLearnset,
        .formSpeciesIdTable = sKyogreFormSpeciesIdTable,
        .formChangeTable = sKyogreFormChangeTable,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE

#if P_FAMILY_GROUDON
    [SPECIES_GROUDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 335,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 302,
    #else
        .expYield = 218,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DROUGHT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Groudon"),
        .cryId = CRY_GROUDON,
        .natDexNum = NATIONAL_DEX_GROUDON,
        .categoryName = _("Continente"),
        .height = 35,
        .weight = 9500,
		.description = COMPOUND_STRING(
			"En la mitología se considera a Groudon\n"
			"el creador de la tierra. Duerme enterrado\n"
			"en magma y dicen que, al despertar, hace\n"
			"que los volcanes entren en erupción."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_Groudon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Groudon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Groudon,
        .shinyPalette = gMonShinyPalette_Groudon,
        .iconSprite = gMonIcon_Groudon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Groudon)
        OVERWORLD(
            sPicTable_Groudon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Groudon,
            gShinyOverworldPalette_Groudon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,
        .formChangeTable = sGroudonFormChangeTable,
    },

#if P_PRIMAL_REVERSIONS
    [SPECIES_GROUDON_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 180,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FIRE),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 385 : 347,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DESOLATE_LAND, ABILITY_DESOLATE_LAND },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Groudon"),
        .cryId = CRY_GROUDON,
        .natDexNum = NATIONAL_DEX_GROUDON,
        .categoryName = _("Continente"),
        .height = 50,
        .weight = 9997,
        .description = COMPOUND_STRING(
            "Cuando Groudon aulló, la tierra se hinchó y\n"
            "el suelo se expandió. El sol brillaba en lo alto\n"
            "y todo el mundo alrededor de la criatura\n"
            "quedó envuelto en un calor incandescente."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_GroudonPrimal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GroudonPrimal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_GroudonPrimal,
        .shinyPalette = gMonShinyPalette_GroudonPrimal,
        .iconSprite = gMonIcon_GroudonPrimal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Groudon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GroudonPrimal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GroudonPrimal,
            gShinyOverworldPalette_GroudonPrimal
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isPrimalReversion = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sGroudonLevelUpLearnset,
        .teachableLearnset = sGroudonTeachableLearnset,
        .formSpeciesIdTable = sGroudonFormSpeciesIdTable,
        .formChangeTable = sGroudonFormChangeTable,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON

#if P_FAMILY_RAYQUAZA
    [SPECIES_RAYQUAZA] =
    {
        .baseHP        = 105,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AIR_LOCK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rayquaza"),
        .cryId = CRY_RAYQUAZA,
        .natDexNum = NATIONAL_DEX_RAYQUAZA,
        .categoryName = _("Cielo"),
        .height = 70,
        .weight = 2065,
		.description = COMPOUND_STRING(
			"Este Pokémon vuela sin parar por la\n"
			"capa de ozono. Dicen que, si Kyogre\n"
			"y Groudon fueran a luchar, bajaría\n"
			"a tierra firme."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        .frontPic = gMonFrontPic_Rayquaza,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 60,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Rayquaza,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Rayquaza,
        .shinyPalette = gMonShinyPalette_Rayquaza,
        .iconSprite = gMonIcon_Rayquaza,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_L)
        FOOTPRINT(Rayquaza)
        OVERWORLD(
            sPicTable_Rayquaza,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Rayquaza,
            gShinyOverworldPalette_Rayquaza
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,
        .formChangeTable = sRayquazaFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_RAYQUAZA_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 180,
        .baseDefense   = 100,
        .baseSpeed     = 115,
        .baseSpAttack  = 180,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rayquaza"),
        .cryId = CRY_RAYQUAZA,
        .natDexNum = NATIONAL_DEX_RAYQUAZA,
        .categoryName = _("Cielo"),
        .height = 108,
        .weight = 3920,
        .description = COMPOUND_STRING(
            "Las partículas fluyen desde los hilos\n"
            "que salen desde su mandíbula. Pueden\n"
            "controlar la densidad y humedad del\n"
            "aire, permitiendo que manipule el clima."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
        .frontPic = gMonFrontPic_RayquazaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_RayquazaMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_RayquazaMega,
        .shinyPalette = gMonShinyPalette_RayquazaMega,
        .iconSprite = gMonIcon_RayquazaMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_L)
        FOOTPRINT(Rayquaza)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_RayquazaMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_RayquazaMega,
            gShinyOverworldPalette_RayquazaMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRayquazaLevelUpLearnset,
        .teachableLearnset = sRayquazaTeachableLearnset,
        .formSpeciesIdTable = sRayquazaFormSpeciesIdTable,
        .formChangeTable = sRayquazaFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA

#if P_FAMILY_JIRACHI
    [SPECIES_JIRACHI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 215,
    #endif
        .evYield_HP = 3,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Jirachi"),
        .cryId = CRY_JIRACHI,
        .natDexNum = NATIONAL_DEX_JIRACHI,
        .categoryName = _("Deseo"),
        .height = 3,
        .weight = 11,
		.description = COMPOUND_STRING(
			"Dicen que Jirachi hace que se cumplan\n"
			"los deseos. Mientras duerme, una\n"
			"resistente capa cristalina lo envuelve\n"
			"para protegerlo de los enemigos."),
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jirachi,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_RISING_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .backPic = gMonBackPic_Jirachi,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Jirachi,
        .shinyPalette = gMonShinyPalette_Jirachi,
        .iconSprite = gMonIcon_Jirachi,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Jirachi)
        OVERWORLD(
            sPicTable_Jirachi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Jirachi,
            gShinyOverworldPalette_Jirachi
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sJirachiLevelUpLearnset,
        .teachableLearnset = sJirachiTeachableLearnset,
    },
#endif //P_FAMILY_JIRACHI

#if P_FAMILY_DEOXYS
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DEOXYS_EXP_YIELD 300
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DEOXYS_EXP_YIELD 270
#else
    #define DEOXYS_EXP_YIELD 215
#endif

    [SPECIES_DEOXYS_NORMAL] =
    {
        .baseHP        = 50,
        .baseAttack    = 150,
        .baseDefense   = 50,
        .baseSpeed     = 150,
        .baseSpAttack  = 150,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = DEOXYS_EXP_YIELD,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("ADN"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_DeoxysNormal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 16),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 26),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 16),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_PIVOT : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_DeoxysNormal,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_DeoxysNormal,
        .shinyPalette = gMonShinyPalette_DeoxysNormal,
        .iconSprite = gMonIcon_DeoxysNormal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeoxysNormal,
            gShinyOverworldPalette_DeoxysNormal
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysNormalLevelUpLearnset,
        .teachableLearnset = sDeoxysNormalTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysNormalFormChangeTable,
    },

    [SPECIES_DEOXYS_ATTACK] =
    {
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = DEOXYS_EXP_YIELD,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("ADN"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_DeoxysAttack,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 16),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 26),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 16),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_PIVOT : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_DeoxysAttack,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 1,
        .backAnimId = P_GBA_STYLE_SPECIES_GFX ? BACK_ANIM_SHRINK_GROW_VIBRATE : BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DeoxysAttack,
        .shinyPalette = gMonShinyPalette_DeoxysAttack,
        .iconSprite = gMonIcon_DeoxysAttack,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        OVERWORLD(
            sPicTable_DeoxysAttack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeoxysAttack,
            gShinyOverworldPalette_DeoxysAttack
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysAttackLevelUpLearnset,
        .teachableLearnset = sDeoxysAttackTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysAttackFormChangeTable,
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = DEOXYS_EXP_YIELD,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("ADN"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_DeoxysDefense,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 16),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 26),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 16),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_PIVOT : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_DeoxysDefense,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 8,
        .backAnimId = P_GBA_STYLE_SPECIES_GFX ? BACK_ANIM_SHRINK_GROW_VIBRATE : BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DeoxysDefense,
        .shinyPalette = gMonShinyPalette_DeoxysDefense,
        .iconSprite = gMonIcon_DeoxysDefense,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysDefense,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeoxysDefense,
            gShinyOverworldPalette_DeoxysDefense
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysDefenseLevelUpLearnset,
        .teachableLearnset = sDeoxysDefenseTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysDefenseFormChangeTable,
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = DEOXYS_EXP_YIELD,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("ADN"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysNormalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_DeoxysSpeed,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        #if !P_GBA_STYLE_SPECIES_GFX
            .frontAnimFrames = ANIM_FRAMES(
                ANIMCMD_FRAME(0, 16),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 26),
                ANIMCMD_FRAME(1, 16),
                ANIMCMD_FRAME(0, 16),
            ),
        #else
            .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        #endif
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_PIVOT : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backPic = gMonBackPic_DeoxysSpeed,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 0,
        .backAnimId = P_GBA_STYLE_SPECIES_GFX ? BACK_ANIM_SHRINK_GROW_VIBRATE : BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DeoxysSpeed,
        .shinyPalette = gMonShinyPalette_DeoxysSpeed,
        .iconSprite = gMonIcon_DeoxysSpeed,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Deoxys)
        OVERWORLD(
            sPicTable_DeoxysSpeed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeoxysSpeed,
            gShinyOverworldPalette_DeoxysSpeed
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDeoxysSpeedLevelUpLearnset,
        .teachableLearnset = sDeoxysSpeedTeachableLearnset,
        .formSpeciesIdTable = sDeoxysFormSpeciesIdTable,
        .formChangeTable = sDeoxysSpeedFormChangeTable,
    },
#endif //P_FAMILY_DEOXYS

#ifdef __INTELLISENSE__
};
#endif
