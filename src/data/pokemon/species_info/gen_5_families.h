#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen5[] =
{
#endif

#if P_FAMILY_VICTINI
    [SPECIES_VICTINI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIRE),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VICTORY_STAR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Victini"),
        .cryId = CRY_VICTINI,
        .natDexNum = NATIONAL_DEX_VICTINI,
        .categoryName = _("Victoria"),
        .height = 4,
        .weight = 40,
		.description = COMPOUND_STRING(
			"Pokémon que atrae la victoria. Dicen\n"
			"que el Entrenador que lo lleve saldrá\n"
			"vencedor de cualquier batalla."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Victini,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Victini,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Victini,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Victini,
        .shinyPalette = gMonShinyPalette_Victini,
        .iconSprite = gMonIcon_Victini,
        .iconPalIndex = 0,
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Victini)
        OVERWORLD(
            sPicTable_Victini,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Victini,
            gShinyOverworldPalette_Victini
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sVictiniLevelUpLearnset,
        .teachableLearnset = sVictiniTeachableLearnset,
    },
#endif //P_FAMILY_VICTINI

#if P_FAMILY_SNIVY
    [SPECIES_SNIVY] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 63,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Snivy"),
        .cryId = CRY_SNIVY,
        .natDexNum = NATIONAL_DEX_SNIVY,
        .categoryName = _("Serp. Hierba"),
        .height = 6,
        .weight = 81,
		.description = COMPOUND_STRING(
			"Sintetiza la luz del sol que recoge\n"
			"con su cola. Esta se le queda abatida\n"
			"cuando le faltan las energías."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snivy,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Snivy,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Snivy,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Snivy,
        .shinyPalette = gMonShinyPalette_Snivy,
        .iconSprite = gMonIcon_Snivy,
        .iconPalIndex = 1,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Snivy)
        OVERWORLD(
            sPicTable_Snivy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snivy,
            gShinyOverworldPalette_Snivy
        )
        .levelUpLearnset = sSnivyLevelUpLearnset,
        .teachableLearnset = sSnivyTeachableLearnset,
        .eggMoveLearnset = sSnivyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_SERVINE}),
    },

    [SPECIES_SERVINE] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 83,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 145,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Servine"),
        .cryId = CRY_SERVINE,
        .natDexNum = NATIONAL_DEX_SERVINE,
        .categoryName = _("Serp. Hierba"),
        .height = 8,
        .weight = 160,
		.description = COMPOUND_STRING(
			"Se oculta a la sombra de la vegetación\n"
			"para evitar enfrentamientos. Usa con\n"
			"destreza el látigo para contraatacar."),
        .pokemonScale = 366,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Servine,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Servine,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Servine,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Servine,
        .shinyPalette = gMonShinyPalette_Servine,
        .iconSprite = gMonIcon_Servine,
        .iconPalIndex = 1,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Servine)
        OVERWORLD(
            sPicTable_Servine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Servine,
            gShinyOverworldPalette_Servine
        )
        .levelUpLearnset = sServineLevelUpLearnset,
        .teachableLearnset = sServineTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SERPERIOR}),
    },

    [SPECIES_SERPERIOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 95,
        .baseSpeed     = 113,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 264 : 238,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Serperior"),
        .cryId = CRY_SERPERIOR,
        .natDexNum = NATIONAL_DEX_SERPERIOR,
        .categoryName = _("Realeza"),
        .height = 33,
        .weight = 630,
		.description = COMPOUND_STRING(
			"Detiene los movimientos del rival con una\n"
			"sola mirada. Expande la energía solar\n"
			"dentro de su cuerpo."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 405,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Serperior,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Serperior,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Serperior,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Serperior,
        .shinyPalette = gMonShinyPalette_Serperior,
        .iconSprite = gMonIcon_Serperior,
        .iconPalIndex = 1,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Serperior)
        OVERWORLD(
            sPicTable_Serperior,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Serperior,
            gShinyOverworldPalette_Serperior
        )
        .levelUpLearnset = sSerperiorLevelUpLearnset,
        .teachableLearnset = sSerperiorTeachableLearnset,
    },
#endif //P_FAMILY_SNIVY

#if P_FAMILY_TEPIG
    [SPECIES_TEPIG] =
    {
        .baseHP        = 65,
        .baseAttack    = 63,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 62,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tepig"),
        .cryId = CRY_TEPIG,
        .natDexNum = NATIONAL_DEX_TEPIG,
        .categoryName = _("Cerdo fuego"),
        .height = 5,
        .weight = 99,
		.description = COMPOUND_STRING(
			"Evita con agilidad los ataques enemigos.\n"
			"Lanza bolas de fuego por su hocico y\n"
			"tuesta bayas del bosque para comer."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tepig,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Tepig,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Tepig,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Tepig,
        .shinyPalette = gMonShinyPalette_Tepig,
        .iconSprite = gMonIcon_Tepig,
        .iconPalIndex = 0,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Tepig)
        OVERWORLD(
            sPicTable_Tepig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tepig,
            gShinyOverworldPalette_Tepig
        )
        .levelUpLearnset = sTepigLevelUpLearnset,
        .teachableLearnset = sTepigTeachableLearnset,
        .eggMoveLearnset = sTepigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_PIGNITE}),
    },

    [SPECIES_PIGNITE] =
    {
        .baseHP        = 90,
        .baseAttack    = 93,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 146,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pignite"),
        .cryId = CRY_PIGNITE,
        .natDexNum = NATIONAL_DEX_PIGNITE,
        .categoryName = _("Cerdo fuego"),
        .height = 10,
        .weight = 555,
		.description = COMPOUND_STRING(
			"Cuando las llamas de su interior se\n"
			"avivan, aumenta su velocidad y agilidad.\n"
			"Emite humo si está en peligro."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pignite,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Pignite,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pignite,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Pignite,
        .shinyPalette = gMonShinyPalette_Pignite,
        .iconSprite = gMonIcon_Pignite,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Pignite)
        OVERWORLD(
            sPicTable_Pignite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pignite,
            gShinyOverworldPalette_Pignite
        )
        .levelUpLearnset = sPigniteLevelUpLearnset,
        .teachableLearnset = sPigniteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_EMBOAR}),
    },

    [SPECIES_EMBOAR] =
    {
        .baseHP        = 110,
        .baseAttack    = 123,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 264 : 238,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Emboar"),
        .cryId = CRY_EMBOAR,
        .natDexNum = NATIONAL_DEX_EMBOAR,
        .categoryName = _("Cerdo fuego"),
        .height = 16,
        .weight = 1500,
		.description = COMPOUND_STRING(
			"El hecho de que su barba prenda en llamas\n"
			"es indicio de que tiene ganas de luchar.\n"
			"Domina numerosos movimientos."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Emboar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Emboar,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Emboar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Emboar,
        .shinyPalette = gMonShinyPalette_Emboar,
        .iconSprite = gMonIcon_Emboar,
        .iconPalIndex = 0,
        SHADOW(-1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Emboar)
        OVERWORLD(
            sPicTable_Emboar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Emboar,
            gShinyOverworldPalette_Emboar
        )
        .levelUpLearnset = sEmboarLevelUpLearnset,
        .teachableLearnset = sEmboarTeachableLearnset,
    },
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
    [SPECIES_OSHAWOTT] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Oshawott"),
        .cryId = CRY_OSHAWOTT,
        .natDexNum = NATIONAL_DEX_OSHAWOTT,
        .categoryName = _("Nutria"),
        .height = 5,
        .weight = 59,
		.description = COMPOUND_STRING(
			"Ataca con la vieira de su ombligo.\n"
			"En cuanto para un ataque, pasa al\n"
			"contraataque sin dilación."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Oshawott,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Oshawott,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Oshawott,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Oshawott,
        .shinyPalette = gMonShinyPalette_Oshawott,
        .iconSprite = gMonIcon_Oshawott,
        .iconPalIndex = 0,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Oshawott)
        OVERWORLD(
            sPicTable_Oshawott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Oshawott,
            gShinyOverworldPalette_Oshawott
        )
        .levelUpLearnset = sOshawottLevelUpLearnset,
        .teachableLearnset = sOshawottTeachableLearnset,
        .eggMoveLearnset = sOshawottEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_DEWOTT}),
    },

    [SPECIES_DEWOTT] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 145,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dewott"),
        .cryId = CRY_DEWOTT,
        .natDexNum = NATIONAL_DEX_DEWOTT,
        .categoryName = _("Formidable"),
        .height = 8,
        .weight = 245,
		.description = COMPOUND_STRING(
			"Cada Dewott utiliza diferentes\n"
			"técnicas de espadachín con sus dos\n"
			"vieiras, cuyo mantenimiento no descuida."),
        .pokemonScale = 366,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dewott,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Dewott,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Dewott,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Dewott,
        .shinyPalette = gMonShinyPalette_Dewott,
        .iconSprite = gMonIcon_Dewott,
        .iconPalIndex = 0,
        SHADOW(-2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Dewott)
        OVERWORLD(
            sPicTable_Dewott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dewott,
            gShinyOverworldPalette_Dewott
        )
        .levelUpLearnset = sDewottLevelUpLearnset,
        .teachableLearnset = sDewottTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SAMUROTT},
                                {EVO_NONE, 0, SPECIES_SAMUROTT_HISUI}),
    },

    [SPECIES_SAMUROTT] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 108,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 264 : 238,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Samurott"),
        .cryId = CRY_SAMUROTT,
        .natDexNum = NATIONAL_DEX_SAMUROTT,
        .categoryName = _("Majestuoso"),
        .height = 15,
        .weight = 946,
		.description = COMPOUND_STRING(
			"Utiliza una parte de la coraza de sus\n"
			"patas delanteras como un gran sable.\n"
			"Intimida a sus rivales con solo gruñir."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Samurott,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Samurott,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Samurott,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Samurott,
        .shinyPalette = gMonShinyPalette_Samurott,
        .iconSprite = gMonIcon_Samurott,
        .iconPalIndex = 2,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Samurott)
        OVERWORLD(
            sPicTable_Samurott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Samurott,
            gShinyOverworldPalette_Samurott
        )
        .levelUpLearnset = sSamurottLevelUpLearnset,
        .teachableLearnset = sSamurottTeachableLearnset,
        .formSpeciesIdTable = sSamurottFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_SAMUROTT_HISUI] =
    {
        .baseHP        = 90,
        .baseAttack    = 108,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 264 : 238,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Samurott"),
        .cryId = CRY_SAMUROTT,
        .natDexNum = NATIONAL_DEX_SAMUROTT,
        .categoryName = _("Majestuoso"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING(
            "De corazón duro y hábil con la espada,\n"
            "esta rara forma de Samurott es un\n"
            "producto de la evolución del Pokémon\n"
            "en la región de Hisui."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SamurottHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SamurottHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SamurottHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SamurottHisui,
        .shinyPalette = gMonShinyPalette_SamurottHisui,
        .iconSprite = gMonIcon_SamurottHisui,
        .iconPalIndex = 0,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Samurott)
        OVERWORLD(
            sPicTable_SamurottHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SamurottHisui,
            gShinyOverworldPalette_SamurottHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sSamurottHisuiLevelUpLearnset,
        .teachableLearnset = sSamurottHisuiTeachableLearnset,
        .formSpeciesIdTable = sSamurottFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PATRAT
    [SPECIES_PATRAT] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 39,
        .baseSpeed     = 42,
        .baseSpAttack  = 35,
        .baseSpDefense = 39,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 51,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Patrat"),
        .cryId = CRY_PATRAT,
        .natDexNum = NATIONAL_DEX_PATRAT,
        .categoryName = _("Explorador"),
        .height = 5,
        .weight = 116,
		.description = COMPOUND_STRING(
			"Siempre está alerta y no quita la mirada\n"
			"de su madriguera. Cuando no está\n"
			"vigilando, le invade la inquietud."),
        .pokemonScale = 432,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Patrat,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Patrat,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Patrat,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Patrat,
        .shinyPalette = gMonShinyPalette_Patrat,
        .iconSprite = gMonIcon_Patrat,
        .iconPalIndex = 2,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Patrat)
        OVERWORLD(
            sPicTable_Patrat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Patrat,
            gShinyOverworldPalette_Patrat
        )
        .levelUpLearnset = sPatratLevelUpLearnset,
        .teachableLearnset = sPatratTeachableLearnset,
        .eggMoveLearnset = sPatratEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_WATCHOG}),
    },

    [SPECIES_WATCHOG] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 69,
        .baseSpeed     = 77,
        .baseSpAttack  = 60,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 147,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_KEEN_EYE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Watchog"),
        .cryId = CRY_WATCHOG,
        .natDexNum = NATIONAL_DEX_WATCHOG,
        .categoryName = _("Alerta"),
        .height = 11,
        .weight = 270,
		.description = COMPOUND_STRING(
			"Hace brillar las rayas de su cuerpo para\n"
			"intimidar al enemigo. Sus ojos lo ven\n"
			"todo, hasta en la oscuridad."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Watchog,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Watchog,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Watchog,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Watchog,
        .shinyPalette = gMonShinyPalette_Watchog,
        .iconSprite = gMonIcon_Watchog,
        .iconPalIndex = 2,
        SHADOW(-4, 11, SHADOW_SIZE_S)
        FOOTPRINT(Watchog)
        OVERWORLD(
            sPicTable_Watchog,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Watchog,
            gShinyOverworldPalette_Watchog
        )
        .levelUpLearnset = sWatchogLevelUpLearnset,
        .teachableLearnset = sWatchogTeachableLearnset,
    },
#endif //P_FAMILY_PATRAT

#if P_FAMILY_LILLIPUP
    [SPECIES_LILLIPUP] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 25,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 55,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_PICKUP, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lillipup"),
        .cryId = CRY_LILLIPUP,
        .natDexNum = NATIONAL_DEX_LILLIPUP,
        .categoryName = _("Perrito"),
        .height = 4,
        .weight = 41,
		.description = COMPOUND_STRING(
			"Los mechones que cubren su cara\n"
			"actúan como un magnífico radar para\n"
			"detectar con precisión lo que hay\n"
			"a su alrededor."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lillipup,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Lillipup,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Lillipup,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Lillipup,
        .shinyPalette = gMonShinyPalette_Lillipup,
        .iconSprite = gMonIcon_Lillipup,
        .iconPalIndex = 2,
        SHADOW(2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Lillipup)
        OVERWORLD(
            sPicTable_Lillipup,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lillipup,
            gShinyOverworldPalette_Lillipup
        )
        .levelUpLearnset = sLillipupLevelUpLearnset,
        .teachableLearnset = sLillipupTeachableLearnset,
        .eggMoveLearnset = sLillipupEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_HERDIER}),
    },

    [SPECIES_HERDIER] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 120,
        .expYield = 130,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SAND_RUSH, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Herdier"),
        .cryId = CRY_HERDIER,
        .natDexNum = NATIONAL_DEX_HERDIER,
        .categoryName = _("Leal"),
        .height = 9,
        .weight = 147,
		.description = COMPOUND_STRING(
			"Un robusto pelaje cubre su cuerpo a\n"
			"modo de capa y disminuye el daño que\n"
			"recibe en los ataques."),
        .pokemonScale = 338,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Herdier,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Herdier,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Herdier,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Herdier,
        .shinyPalette = gMonShinyPalette_Herdier,
        .iconSprite = gMonIcon_Herdier,
        .iconPalIndex = 2,
        SHADOW(3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Herdier)
        OVERWORLD(
            sPicTable_Herdier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Herdier,
            gShinyOverworldPalette_Herdier
        )
        .levelUpLearnset = sHerdierLevelUpLearnset,
        .teachableLearnset = sHerdierTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_STOUTLAND}),
    },

    [SPECIES_STOUTLAND] =
    {
        .baseHP        = 85,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 110 : 100,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 225,
    #else
        .expYield = 221,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SAND_RUSH, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Stoutland"),
        .cryId = CRY_STOUTLAND,
        .natDexNum = NATIONAL_DEX_STOUTLAND,
        .categoryName = _("Magnánimo"),
        .height = 12,
        .weight = 610,
		.description = COMPOUND_STRING(
			"Socorre a humanos perdidos en montañas\n"
			"azotadas por ventiscas. Su largo\n"
			"pelaje le protege del frío."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Stoutland,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Stoutland,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Stoutland,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Stoutland,
        .shinyPalette = gMonShinyPalette_Stoutland,
        .iconSprite = gMonIcon_Stoutland,
        .iconPalIndex = 2,
        SHADOW(-4, 9, SHADOW_SIZE_L)
        FOOTPRINT(Stoutland)
        OVERWORLD(
            sPicTable_Stoutland,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Stoutland,
            gShinyOverworldPalette_Stoutland
        )
        .levelUpLearnset = sStoutlandLevelUpLearnset,
        .teachableLearnset = sStoutlandTeachableLearnset,
    },
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
    [SPECIES_PURRLOIN] =
    {
        .baseHP        = 41,
        .baseAttack    = 50,
        .baseDefense   = 37,
        .baseSpeed     = 66,
        .baseSpAttack  = 50,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Purrloin"),
        .cryId = CRY_PURRLOIN,
        .natDexNum = NATIONAL_DEX_PURRLOIN,
        .categoryName = _("Malicioso"),
        .height = 4,
        .weight = 101,
		.description = COMPOUND_STRING(
			"Distrae a su oponente con movimientos\n"
			"gráciles y sustrae sus pertenencias.\n"
			"Cuando se enfada, ataca con las garras."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Purrloin,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Purrloin,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Purrloin,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Purrloin,
        .shinyPalette = gMonShinyPalette_Purrloin,
        .iconSprite = gMonIcon_Purrloin,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Purrloin)
        OVERWORLD(
            sPicTable_Purrloin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Purrloin,
            gShinyOverworldPalette_Purrloin
        )
        .levelUpLearnset = sPurrloinLevelUpLearnset,
        .teachableLearnset = sPurrloinTeachableLearnset,
        .eggMoveLearnset = sPurrloinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_LIEPARD}),
    },

    [SPECIES_LIEPARD] =
    {
        .baseHP        = 64,
        .baseAttack    = 88,
        .baseDefense   = 50,
        .baseSpeed     = 106,
        .baseSpAttack  = 88,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 90,
        .expYield = 156,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Liepard"),
        .cryId = CRY_LIEPARD,
        .natDexNum = NATIONAL_DEX_LIEPARD,
        .categoryName = _("Cruel"),
        .height = 11,
        .weight = 375,
		.description = COMPOUND_STRING(
			"Se aproxima evitando que lo detecten.\n"
			"Con sigilo, se acerca a su rival por la\n"
			"espalda y lo ataca."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Liepard,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Liepard,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Liepard,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Liepard,
        .shinyPalette = gMonShinyPalette_Liepard,
        .iconSprite = gMonIcon_Liepard,
        .iconPalIndex = 0,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Liepard)
        OVERWORLD(
            sPicTable_Liepard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Liepard,
            gShinyOverworldPalette_Liepard
        )
        .levelUpLearnset = sLiepardLevelUpLearnset,
        .teachableLearnset = sLiepardTeachableLearnset,
    },
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
    [SPECIES_PANSAGE] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_OVERGROW },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Pansage"),
        .cryId = CRY_PANSAGE,
        .natDexNum = NATIONAL_DEX_PANSAGE,
        .categoryName = _("Mono hierba"),
        .height = 6,
        .weight = 105,
		.description = COMPOUND_STRING(
			"Vive en lo más profundo del bosque.\n"
			"El agotamiento se desvanece con solo\n"
			"comer hojas de su cabeza."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pansage,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Pansage,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Pansage,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Pansage,
        .shinyPalette = gMonShinyPalette_Pansage,
        .iconSprite = gMonIcon_Pansage,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Pansage)
        OVERWORLD(
            sPicTable_Pansage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pansage,
            gShinyOverworldPalette_Pansage
        )
        .levelUpLearnset = sPansageLevelUpLearnset,
        .teachableLearnset = sPansageTeachableLearnset,
        .eggMoveLearnset = sPansageEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SIMISAGE}),
    },

    [SPECIES_SIMISAGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_OVERGROW },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Simisage"),
        .cryId = CRY_SIMISAGE,
        .natDexNum = NATIONAL_DEX_SIMISAGE,
        .categoryName = _("Mono pincho"),
        .height = 11,
        .weight = 305,
		.description = COMPOUND_STRING(
			"Agita su cola revestida de espinas para\n"
			"atacar a su enemigo. La hoja que crece\n"
			"sobre su cabeza es muy amarga."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Simisage,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Simisage,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Simisage,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Simisage,
        .shinyPalette = gMonShinyPalette_Simisage,
        .iconSprite = gMonIcon_Simisage,
        .iconPalIndex = 1,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Simisage)
        OVERWORLD(
            sPicTable_Simisage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Simisage,
            gShinyOverworldPalette_Simisage
        )
        .levelUpLearnset = sSimisageLevelUpLearnset,
        .teachableLearnset = sSimisageTeachableLearnset,
    },
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
    [SPECIES_PANSEAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_BLAZE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Pansear"),
        .cryId = CRY_PANSEAR,
        .natDexNum = NATIONAL_DEX_PANSEAR,
        .categoryName = _("Ardiente"),
        .height = 6,
        .weight = 110,
		.description = COMPOUND_STRING(
			"Vive en cuevas volcánicas. El interior de\n"
			"su mata de pelo arde, llegando a alcanzar\n"
			"hasta 300 ºC."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pansear,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Pansear,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pansear,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Pansear,
        .shinyPalette = gMonShinyPalette_Pansear,
        .iconSprite = gMonIcon_Pansear,
        .iconPalIndex = 2,
        SHADOW(1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Pansear)
        OVERWORLD(
            sPicTable_Pansear,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pansear,
            gShinyOverworldPalette_Pansear
        )
        .levelUpLearnset = sPansearLevelUpLearnset,
        .teachableLearnset = sPansearTeachableLearnset,
        .eggMoveLearnset = sPansearEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_SIMISEAR}),
    },

    [SPECIES_SIMISEAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_BLAZE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Simisear"),
        .cryId = CRY_SIMISEAR,
        .natDexNum = NATIONAL_DEX_SIMISEAR,
        .categoryName = _("Lumbre"),
        .height = 10,
        .weight = 280,
		.description = COMPOUND_STRING(
			"Le pirran los dulces, pues le aportan la\n"
			"energía que necesita para avivar las\n"
			"llamas de su interior."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Simisear,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Simisear,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Simisear,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Simisear,
        .shinyPalette = gMonShinyPalette_Simisear,
        .iconSprite = gMonIcon_Simisear,
        .iconPalIndex = 2,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Simisear)
        OVERWORLD(
            sPicTable_Simisear,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Simisear,
            gShinyOverworldPalette_Simisear
        )
        .levelUpLearnset = sSimisearLevelUpLearnset,
        .teachableLearnset = sSimisearTeachableLearnset,
    },
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
    [SPECIES_PANPOUR] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_TORRENT },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Panpour"),
        .cryId = CRY_PANPOUR,
        .natDexNum = NATIONAL_DEX_PANPOUR,
        .categoryName = _("Salpicadura"),
        .height = 6,
        .weight = 135,
		.description = COMPOUND_STRING(
			"La acuosidad que acumula en su mata\n"
			"de pelo es rica en nutrientes, ideal\n"
			"para regar plantas y que crezcan mucho."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Panpour,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Panpour,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Panpour,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Panpour,
        .shinyPalette = gMonShinyPalette_Panpour,
        .iconSprite = gMonIcon_Panpour,
        .iconPalIndex = 2,
        SHADOW(-3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Panpour)
        OVERWORLD(
            sPicTable_Panpour,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Panpour,
            gShinyOverworldPalette_Panpour
        )
        .levelUpLearnset = sPanpourLevelUpLearnset,
        .teachableLearnset = sPanpourTeachableLearnset,
        .eggMoveLearnset = sPanpourEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_SIMIPOUR}),
    },

    [SPECIES_SIMIPOUR] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_TORRENT },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Simipour"),
        .cryId = CRY_SIMIPOUR,
        .natDexNum = NATIONAL_DEX_SIMIPOUR,
        .categoryName = _("Drenaje"),
        .height = 10,
        .weight = 290,
		.description = COMPOUND_STRING(
			"Le encantan los lugares con agua limpia.\n"
			"Cuando desciende el nivel de agua de su\n"
			"pelo, se abastece a través de su cola."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Simipour,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Simipour,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Simipour,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Simipour,
        .shinyPalette = gMonShinyPalette_Simipour,
        .iconSprite = gMonIcon_Simipour,
        .iconPalIndex = 2,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Simipour)
        OVERWORLD(
            sPicTable_Simipour,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Simipour,
            gShinyOverworldPalette_Simipour
        )
        .levelUpLearnset = sSimipourLevelUpLearnset,
        .teachableLearnset = sSimipourTeachableLearnset,
    },
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
    [SPECIES_MUNNA] =
    {
        .baseHP        = 76,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 24,
        .baseSpAttack  = 67,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = 58,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FOREWARN, ABILITY_SYNCHRONIZE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Munna"),
        .cryId = CRY_MUNNA,
        .natDexNum = NATIONAL_DEX_MUNNA,
        .categoryName = _("Comesueños"),
        .height = 6,
        .weight = 233,
		.description = COMPOUND_STRING(
			"Se alimenta de los sueños de humanos y\n"
			"Pokémon. Si los sueños son felices,\n"
			"despide humo rosa."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Munna,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Munna,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Munna,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Munna,
        .shinyPalette = gMonShinyPalette_Munna,
        .iconSprite = gMonIcon_Munna,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Munna)
        OVERWORLD(
            sPicTable_Munna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Munna,
            gShinyOverworldPalette_Munna
        )
        .levelUpLearnset = sMunnaLevelUpLearnset,
        .teachableLearnset = sMunnaTeachableLearnset,
        .eggMoveLearnset = sMunnaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_MUSHARNA}),
    },

    [SPECIES_MUSHARNA] =
    {
        .baseHP        = 116,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 29,
        .baseSpAttack  = 107,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 170,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FOREWARN, ABILITY_SYNCHRONIZE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Musharna"),
        .cryId = CRY_MUSHARNA,
        .natDexNum = NATIONAL_DEX_MUSHARNA,
        .categoryName = _("Duermevela"),
        .height = 11,
        .weight = 605,
		.description = COMPOUND_STRING(
			"Con el humo que despide por la frente,\n"
			"forma las cosas que ha visto en los\n"
			"sueños que engulle."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Musharna,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Musharna,
        .frontAnimId = ANIM_ROTATE_TO_SIDES_TWICE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Musharna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Musharna,
        .shinyPalette = gMonShinyPalette_Musharna,
        .iconSprite = gMonIcon_Musharna,
        .iconPalIndex = 0,
        SHADOW(6, 10, SHADOW_SIZE_M)
        FOOTPRINT(Musharna)
        OVERWORLD(
            sPicTable_Musharna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Musharna,
            gShinyOverworldPalette_Musharna
        )
        .levelUpLearnset = sMusharnaLevelUpLearnset,
        .teachableLearnset = sMusharnaTeachableLearnset,
    },
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
    [SPECIES_PIDOVE] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 43,
        .baseSpAttack  = 36,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 53,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pidove"),
        .cryId = CRY_PIDOVE,
        .natDexNum = NATIONAL_DEX_PIDOVE,
        .categoryName = _("Pichón"),
        .height = 3,
        .weight = 21,
		.description = COMPOUND_STRING(
			"Vive en la ciudad, pues se lleva muy\n"
			"bien con la gente. Le encantan los\n"
			"parques y las plazas, donde se reúne\n"
			"con otros."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidove,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pidove,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Pidove,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Pidove,
        .shinyPalette = gMonShinyPalette_Pidove,
        .iconSprite = gMonIcon_Pidove,
        .iconPalIndex = 0,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pidove)
        OVERWORLD(
            sPicTable_Pidove,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidove,
            gShinyOverworldPalette_Pidove
        )
        .levelUpLearnset = sPidoveLevelUpLearnset,
        .teachableLearnset = sPidoveTeachableLearnset,
        .eggMoveLearnset = sPidoveEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_TRANQUILL}),
    },

    [SPECIES_TRANQUILL] =
    {
        .baseHP        = 62,
        .baseAttack    = 77,
        .baseDefense   = 62,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 120,
        .expYield = 125,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Tranquill"),
        .cryId = CRY_TRANQUILL,
        .natDexNum = NATIONAL_DEX_TRANQUILL,
        .categoryName = _("Torcaz"),
        .height = 6,
        .weight = 150,
		.description = COMPOUND_STRING(
			"Puede regresar sin problema alguno a su\n"
			"nido desde cualquier lugar del globo y\n"
			"jamás se separa de quien lo entrena."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tranquill,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Tranquill,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Tranquill,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Tranquill,
        .shinyPalette = gMonShinyPalette_Tranquill,
        .iconSprite = gMonIcon_Tranquill,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Tranquill)
        OVERWORLD(
            sPicTable_Tranquill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tranquill,
            gShinyOverworldPalette_Tranquill
        )
        .levelUpLearnset = sTranquillLevelUpLearnset,
        .teachableLearnset = sTranquillTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_UNFEZANT}),
    },

    [SPECIES_UNFEZANT] =
    {
        .baseHP        = 80,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 115 : 105,
        .baseDefense   = 80,
        .baseSpeed     = 93,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 244,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 220,
    #else
        .expYield = 215,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Unfezant"),
        .cryId = CRY_UNFEZANT,
        .natDexNum = NATIONAL_DEX_UNFEZANT,
        .categoryName = _("Altanero"),
        .height = 12,
        .weight = 290,
		.description = COMPOUND_STRING(
			"El macho amenaza al enemigo meciendo\n"
			"el adorno de su cabeza. Al volar, la\n"
			"hembra es mucho más diestra que el macho."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Unfezant,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Unfezant,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Unfezant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Unfezant,
        .shinyPalette = gMonShinyPalette_Unfezant,
        .iconSprite = gMonIcon_Unfezant,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_UnfezantF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_UnfezantF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_UnfezantF,
        .shinyPaletteFemale = gMonShinyPalette_UnfezantF,
        .iconSpriteFemale = gMonIcon_UnfezantF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Unfezant)
        OVERWORLD(
            sPicTable_Unfezant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Unfezant,
            gShinyOverworldPalette_Unfezant
        )
        OVERWORLD_FEMALE(
            sPicTable_UnfezantF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_UnfezantF,
            gShinyOverworldPalette_UnfezantF
        )
        .levelUpLearnset = sUnfezantLevelUpLearnset,
        .teachableLearnset = sUnfezantTeachableLearnset,
    },
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_BLITZLE
    [SPECIES_BLITZLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 32,
        .baseSpeed     = 76,
        .baseSpAttack  = 50,
        .baseSpDefense = 32,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = 59,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_MOTOR_DRIVE, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blitzle"),
        .cryId = CRY_BLITZLE,
        .natDexNum = NATIONAL_DEX_BLITZLE,
        .categoryName = _("Electrizado"),
        .height = 8,
        .weight = 298,
		.description = COMPOUND_STRING(
			"Aparece cuando nubes envueltas en rayos\n"
			"encapotan el cielo. Atrapa rayos con su\n"
			"crin y almacena electricidad."),
        .pokemonScale = 366,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blitzle,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Blitzle,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Blitzle,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Blitzle,
        .shinyPalette = gMonShinyPalette_Blitzle,
        .iconSprite = gMonIcon_Blitzle,
        .iconPalIndex = 2,
        SHADOW(3, 9, SHADOW_SIZE_M)
        FOOTPRINT(Blitzle)
        OVERWORLD(
            sPicTable_Blitzle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blitzle,
            gShinyOverworldPalette_Blitzle
        )
        .levelUpLearnset = sBlitzleLevelUpLearnset,
        .teachableLearnset = sBlitzleTeachableLearnset,
        .eggMoveLearnset = sBlitzleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_ZEBSTRIKA}),
    },

    [SPECIES_ZEBSTRIKA] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 63,
        .baseSpeed     = 116,
        .baseSpAttack  = 80,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_MOTOR_DRIVE, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zebstrika"),
        .cryId = CRY_ZEBSTRIKA,
        .natDexNum = NATIONAL_DEX_ZEBSTRIKA,
        .categoryName = _("Rayo"),
        .height = 16,
        .weight = 795,
		.description = COMPOUND_STRING(
			"Su velocidad se asemeja a la de un rayo.\n"
			"Si corre al máximo, se dejan oír truenos\n"
			"por doquier."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Zebstrika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zebstrika,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Zebstrika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Zebstrika,
        .shinyPalette = gMonShinyPalette_Zebstrika,
        .iconSprite = gMonIcon_Zebstrika,
        .iconPalIndex = 2,
        SHADOW(-2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Zebstrika)
        OVERWORLD(
            sPicTable_Zebstrika,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zebstrika,
            gShinyOverworldPalette_Zebstrika
        )
        .levelUpLearnset = sZebstrikaLevelUpLearnset,
        .teachableLearnset = sZebstrikaTeachableLearnset,
    },
#endif //P_FAMILY_BLITZLE

#if P_FAMILY_ROGGENROLA
    [SPECIES_ROGGENROLA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Defense = 1,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_STURDY, ABILITY_WEAK_ARMOR, ABILITY_SAND_FORCE },
    #else
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_FORCE },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Roggenrola"),
        .cryId = CRY_ROGGENROLA,
        .natDexNum = NATIONAL_DEX_ROGGENROLA,
        .categoryName = _("Manto"),
        .height = 4,
        .weight = 180,
		.description = COMPOUND_STRING(
			"El agujero hexagonal es su oído, y tiene\n"
			"el hábito de caminar en la dirección\n"
			"de donde provienen los sonidos."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Roggenrola,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Roggenrola,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Roggenrola,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Roggenrola,
        .shinyPalette = gMonShinyPalette_Roggenrola,
        .iconSprite = gMonIcon_Roggenrola,
        .iconPalIndex = 2,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Roggenrola)
        OVERWORLD(
            sPicTable_Roggenrola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Roggenrola,
            gShinyOverworldPalette_Roggenrola
        )
        .levelUpLearnset = sRoggenrolaLevelUpLearnset,
        .teachableLearnset = sRoggenrolaTeachableLearnset,
        .eggMoveLearnset = sRoggenrolaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BOLDORE}),
    },

    [SPECIES_BOLDORE] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 20,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_STURDY, ABILITY_WEAK_ARMOR, ABILITY_SAND_FORCE },
    #else
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_FORCE },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Boldore"),
        .cryId = CRY_BOLDORE,
        .natDexNum = NATIONAL_DEX_BOLDORE,
        .categoryName = _("Mineral"),
        .height = 9,
        .weight = 1020,
		.description = COMPOUND_STRING(
			"La energía que no puede contener en el\n"
			"interior de su cuerpo se escapa formando\n"
			"cristales naranjas."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Boldore,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Boldore,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Boldore,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Boldore,
        .shinyPalette = gMonShinyPalette_Boldore,
        .iconSprite = gMonIcon_Boldore,
        .iconPalIndex = 0,
        SHADOW(1, 3, SHADOW_SIZE_L)
        FOOTPRINT(Boldore)
        OVERWORLD(
            sPicTable_Boldore,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Boldore,
            gShinyOverworldPalette_Boldore
        )
        .levelUpLearnset = sBoldoreLevelUpLearnset,
        .teachableLearnset = sBoldoreTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GIGALITH},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GIGALITH}),
    },

    [SPECIES_GIGALITH] =
    {
        .baseHP        = 85,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 80 : 70,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 258,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 232,
    #else
        .expYield = 227,
    #endif
        .evYield_Attack = 3,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_STURDY, ABILITY_SAND_STREAM, ABILITY_SAND_FORCE },
    #else
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_FORCE },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gigalith"),
        .cryId = CRY_GIGALITH,
        .natDexNum = NATIONAL_DEX_GIGALITH,
        .categoryName = _("Presurizado"),
        .height = 17,
        .weight = 2600,
		.description = COMPOUND_STRING(
			"El núcleo de su cuerpo comprime la\n"
			"energía para lanzar ataques capaces\n"
			"de destruir una montaña."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gigalith,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Gigalith,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Gigalith,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Gigalith,
        .shinyPalette = gMonShinyPalette_Gigalith,
        .iconSprite = gMonIcon_Gigalith,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gigalith)
        OVERWORLD(
            sPicTable_Gigalith,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gigalith,
            gShinyOverworldPalette_Gigalith
        )
        .levelUpLearnset = sGigalithLevelUpLearnset,
        .teachableLearnset = sGigalithTeachableLearnset,
    },
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_WOOBAT
    [SPECIES_WOOBAT] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 65 : 55,
        .baseAttack    = 45,
        .baseDefense   = 43,
        .baseSpeed     = 72,
        .baseSpAttack  = 55,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_7) ? 65 : 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FLYING),
        .abilities = { ABILITY_UNAWARE, ABILITY_KLUTZ, ABILITY_SIMPLE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Woobat"),
        .cryId = CRY_WOOBAT,
        .natDexNum = NATIONAL_DEX_WOOBAT,
        .categoryName = _("Murciélago"),
        .height = 4,
        .weight = 21,
		.description = COMPOUND_STRING(
			"Este peculiar Pókemon pega sus fosas\n"
			"nasales a la pared para dormir y, cuando\n"
			"las retira, deja un corazón marcado."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Woobat,
        .frontPicSize = MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Woobat,
        .frontAnimId = ANIM_FOUR_PETAL,
        .enemyMonElevation = 19,
        .backPic = gMonBackPic_Woobat,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Woobat,
        .shinyPalette = gMonShinyPalette_Woobat,
        .iconSprite = gMonIcon_Woobat,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_S)
        FOOTPRINT(Woobat)
        OVERWORLD(
            sPicTable_Woobat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Woobat,
            gShinyOverworldPalette_Woobat
        )
        .levelUpLearnset = sWoobatLevelUpLearnset,
        .teachableLearnset = sWoobatTeachableLearnset,
        .eggMoveLearnset = sWoobatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SWOOBAT}),
    },

    [SPECIES_SWOOBAT] =
    {
        .baseHP        = 67,
        .baseAttack    = 57,
        .baseDefense   = 55,
        .baseSpeed     = 114,
        .baseSpAttack  = 77,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 149,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FLYING),
        .abilities = { ABILITY_UNAWARE, ABILITY_KLUTZ, ABILITY_SIMPLE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swoobat"),
        .cryId = CRY_SWOOBAT,
        .natDexNum = NATIONAL_DEX_SWOOBAT,
        .categoryName = _("Galante"),
        .height = 9,
        .weight = 105,
		.description = COMPOUND_STRING(
			"Todos rebosan de alborozo cuando perciben\n"
			"las ondas ultrasónicas emitidas por el\n"
			"macho para cortejar a la hembra."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swoobat,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Swoobat,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Swoobat,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Swoobat,
        .shinyPalette = gMonShinyPalette_Swoobat,
        .iconSprite = gMonIcon_Swoobat,
        .iconPalIndex = 0,
        SHADOW(-1, 17, SHADOW_SIZE_M)
        FOOTPRINT(Swoobat)
        OVERWORLD(
            sPicTable_Swoobat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Swoobat,
            gShinyOverworldPalette_Swoobat
        )
        .levelUpLearnset = sSwoobatLevelUpLearnset,
        .teachableLearnset = sSwoobatTeachableLearnset,
    },
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
    [SPECIES_DRILBUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 68,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 120,
        .expYield = 66,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_RUSH, ABILITY_SAND_FORCE, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Drilbur"),
        .cryId = CRY_DRILBUR,
        .natDexNum = NATIONAL_DEX_DRILBUR,
        .categoryName = _("Topo"),
        .height = 3,
        .weight = 85,
		.description = COMPOUND_STRING(
			"Cuando junta las garras y comienza\n"
			"a dar vueltas frenéticas, avanza bajo\n"
			"tierra a gran velocidad."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drilbur,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Drilbur,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Drilbur,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Drilbur,
        .shinyPalette = gMonShinyPalette_Drilbur,
        .iconSprite = gMonIcon_Drilbur,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Drilbur)
        OVERWORLD(
            sPicTable_Drilbur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drilbur,
            gShinyOverworldPalette_Drilbur
        )
        .levelUpLearnset = sDrilburLevelUpLearnset,
        .teachableLearnset = sDrilburTeachableLearnset,
        .eggMoveLearnset = sDrilburEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_EXCADRILL}),
    },

    [SPECIES_EXCADRILL] =
    {
        .baseHP        = 110,
        .baseAttack    = 135,
        .baseDefense   = 60,
        .baseSpeed     = 88,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 60,
        .expYield = 178,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_RUSH, ABILITY_SAND_FORCE, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Excadrill"),
        .cryId = CRY_EXCADRILL,
        .natDexNum = NATIONAL_DEX_EXCADRILL,
        .categoryName = _("Subterráne"),
        .height = 7,
        .weight = 404,
		.description = COMPOUND_STRING(
			"Su taladro ha evolucionado y es capaz\n"
			"de atravesar una lámina de hierro.\n"
			"Es muy útil para construir túneles."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Excadrill,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Excadrill,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Excadrill,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Excadrill,
        .shinyPalette = gMonShinyPalette_Excadrill,
        .iconSprite = gMonIcon_Excadrill,
        .iconPalIndex = 0,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Excadrill)
        OVERWORLD(
            sPicTable_Excadrill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Excadrill,
            gShinyOverworldPalette_Excadrill
        )
        .levelUpLearnset = sExcadrillLevelUpLearnset,
        .teachableLearnset = sExcadrillTeachableLearnset,
    },
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
    [SPECIES_AUDINO] =
    {
        .baseHP        = 103,
        .baseAttack    = 60,
        .baseDefense   = 86,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 390,
        .evYield_HP = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_REGENERATOR, ABILITY_KLUTZ },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Audino"),
        .cryId = CRY_AUDINO,
        .natDexNum = NATIONAL_DEX_AUDINO,
        .categoryName = _("Escucha"),
        .height = 11,
        .weight = 310,
		.description = COMPOUND_STRING(
			"Al tocar a alguien con las antenas de\n"
			"sus orejas, conoce su estado de ánimo y\n"
			"de salud por los latidos del corazón."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Audino,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Audino,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Audino,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Audino,
        .shinyPalette = gMonShinyPalette_Audino,
        .iconSprite = gMonIcon_Audino,
        .iconPalIndex = 1,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Audino)
        OVERWORLD(
            sPicTable_Audino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Audino,
            gShinyOverworldPalette_Audino
        )
        .levelUpLearnset = sAudinoLevelUpLearnset,
        .teachableLearnset = sAudinoTeachableLearnset,
        .eggMoveLearnset = sAudinoEggMoveLearnset,
        .formSpeciesIdTable = sAudinoFormSpeciesIdTable,
        .formChangeTable = sAudinoFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AUDINO_MEGA] =
    {
        .baseHP        = 103,
        .baseAttack    = 60,
        .baseDefense   = 126,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 126,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
        .catchRate = 255,
        .expYield = 425,
        .evYield_HP = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_HEALER, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Audino"),
        .cryId = CRY_AUDINO_MEGA,
        .natDexNum = NATIONAL_DEX_AUDINO,
        .categoryName = _("Escucha"),
        .height = 15,
        .weight = 320,
        .description = COMPOUND_STRING(
            "Emite un pulso reconfortante desde su\n"
            "cuerpo que reduce la hostilidad rival.\n"
            "Cualquier cosa que toque sus segundas\n"
            "antenas caerá en un sueño profundo.\n"),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AudinoMega,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_AudinoMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AudinoMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AudinoMega,
        .shinyPalette = gMonShinyPalette_AudinoMega,
        .iconSprite = gMonIcon_AudinoMega,
        .iconPalIndex = 1,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Audino)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAudinoLevelUpLearnset,
        .teachableLearnset = sAudinoTeachableLearnset,
        .eggMoveLearnset = sAudinoEggMoveLearnset,
        .formSpeciesIdTable = sAudinoFormSpeciesIdTable,
        .formChangeTable = sAudinoFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO

#if P_FAMILY_TIMBURR
    [SPECIES_TIMBURR] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 55,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Timburr"),
        .cryId = CRY_TIMBURR,
        .natDexNum = NATIONAL_DEX_TIMBURR,
        .categoryName = _("Músculoso"),
        .height = 6,
        .weight = 125,
		.description = COMPOUND_STRING(
			"Siempre lleva una viga de madera y\n"
			"ayuda en las construcciones. Se\n"
			"busca una viga más grande cuando\n"
			"se hace más fuerte."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Timburr,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Timburr,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Timburr,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Timburr,
        .shinyPalette = gMonShinyPalette_Timburr,
        .iconSprite = gMonIcon_Timburr,
        .iconPalIndex = 1,
        SHADOW(-4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Timburr)
        OVERWORLD(
            sPicTable_Timburr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Timburr,
            gShinyOverworldPalette_Timburr
        )
        .levelUpLearnset = sTimburrLevelUpLearnset,
        .teachableLearnset = sTimburrTeachableLearnset,
        .eggMoveLearnset = sTimburrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GURDURR}),
    },

    [SPECIES_GURDURR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Gurdurr"),
        .cryId = CRY_GURDURR,
        .natDexNum = NATIONAL_DEX_GURDURR,
        .categoryName = _("Músculoso"),
        .height = 12,
        .weight = 400,
		.description = COMPOUND_STRING(
			"Ejercita sus músculos cargando vigas\n"
			"de acero. Le encanta lucir sus músculos\n"
			"entre sus amigos."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gurdurr,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gurdurr,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Gurdurr,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gurdurr,
        .shinyPalette = gMonShinyPalette_Gurdurr,
        .iconSprite = gMonIcon_Gurdurr,
        .iconPalIndex = 1,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gurdurr)
        OVERWORLD(
            sPicTable_Gurdurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gurdurr,
            gShinyOverworldPalette_Gurdurr
        )
        .levelUpLearnset = sGurdurrLevelUpLearnset,
        .teachableLearnset = sGurdurrTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_CONKELDURR},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_CONKELDURR}),
    },

    [SPECIES_CONKELDURR] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 95,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 253 : 227,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Conkeldurr"),
        .cryId = CRY_CONKELDURR,
        .natDexNum = NATIONAL_DEX_CONKELDURR,
        .categoryName = _("Músculoso"),
        .height = 14,
        .weight = 870,
		.description = COMPOUND_STRING(
			"En vez de hacer uso de la fuerza\n"
			"bruta, blande columnas de hormigón con\n"
			"la energía centrífuga de sus movimientos."),
        .pokemonScale = 265,
        .pokemonOffset = 3,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Conkeldurr,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Conkeldurr,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Conkeldurr,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Conkeldurr,
        .shinyPalette = gMonShinyPalette_Conkeldurr,
        .iconSprite = gMonIcon_Conkeldurr,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Conkeldurr)
        OVERWORLD(
            sPicTable_Conkeldurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Conkeldurr,
            gShinyOverworldPalette_Conkeldurr
        )
        .levelUpLearnset = sConkeldurrLevelUpLearnset,
        .teachableLearnset = sConkeldurrTeachableLearnset,
    },
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
    [SPECIES_TYMPOLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 64,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 255,
        .expYield = 59,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_HYDRATION, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tympole"),
        .cryId = CRY_TYMPOLE,
        .natDexNum = NATIONAL_DEX_TYMPOLE,
        .categoryName = _("Renacuajo"),
        .height = 5,
        .weight = 45,
		.description = COMPOUND_STRING(
			"Emite un agudo chirrido haciendo vibrar\n"
			"su mejillas para avisar a sus compañeros\n"
			"en momentos de peligro."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tympole,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Tympole,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Tympole,
        .backPicSize = MON_COORDS_SIZE(40, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Tympole,
        .shinyPalette = gMonShinyPalette_Tympole,
        .iconSprite = gMonIcon_Tympole,
        .iconPalIndex = 2,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Tympole)
        OVERWORLD(
            sPicTable_Tympole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tympole,
            gShinyOverworldPalette_Tympole
        )
        .levelUpLearnset = sTympoleLevelUpLearnset,
        .teachableLearnset = sTympoleTeachableLearnset,
        .eggMoveLearnset = sTympoleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_PALPITOAD}),
    },

    [SPECIES_PALPITOAD] =
    {
        .baseHP        = 75,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 69,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 120,
        .expYield = 134,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_HYDRATION, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Palpitoad"),
        .cryId = CRY_PALPITOAD,
        .natDexNum = NATIONAL_DEX_PALPITOAD,
        .categoryName = _("Vibrante"),
        .height = 8,
        .weight = 170,
		.description = COMPOUND_STRING(
			"Pasa su vida en el agua y en tierra.\n"
			"Caza a sus presas empleando su viscosa\n"
			"lengua. Acompaña a los fontaneros."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Palpitoad,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Palpitoad,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Palpitoad,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Palpitoad,
        .shinyPalette = gMonShinyPalette_Palpitoad,
        .iconSprite = gMonIcon_Palpitoad,
        .iconPalIndex = 2,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Palpitoad)
        OVERWORLD(
            sPicTable_Palpitoad,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Palpitoad,
            gShinyOverworldPalette_Palpitoad
        )
        .levelUpLearnset = sPalpitoadLevelUpLearnset,
        .teachableLearnset = sPalpitoadTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SEISMITOAD}),
    },

    [SPECIES_SEISMITOAD] =
    {
        .baseHP        = 105,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseDefense   = 75,
        .baseSpeed     = 74,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 255,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 229,
    #else
        .expYield = 225,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_POISON_TOUCH, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Seismitoad"),
        .cryId = CRY_SEISMITOAD,
        .natDexNum = NATIONAL_DEX_SEISMITOAD,
        .categoryName = _("Vibrante"),
        .height = 15,
        .weight = 620,
		.description = COMPOUND_STRING(
			"Despide un líquido paralizador por los\n"
			"bultos de su cabeza. Atormenta a sus\n"
			"oponentes con enormes vibraciones."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Seismitoad,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Seismitoad,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Seismitoad,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Seismitoad,
        .shinyPalette = gMonShinyPalette_Seismitoad,
        .iconSprite = gMonIcon_Seismitoad,
        .iconPalIndex = 0,
        SHADOW(4, 10, SHADOW_SIZE_L)
        FOOTPRINT(Seismitoad)
        OVERWORLD(
            sPicTable_Seismitoad,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Seismitoad,
            gShinyOverworldPalette_Seismitoad
        )
        .levelUpLearnset = sSeismitoadLevelUpLearnset,
        .teachableLearnset = sSeismitoadTeachableLearnset,
    },
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_THROH
    [SPECIES_THROH] =
    {
        .baseHP        = 120,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 30,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 163,
        .evYield_HP = 2,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_GUTS, ABILITY_INNER_FOCUS, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Throh"),
        .cryId = CRY_THROH,
        .natDexNum = NATIONAL_DEX_THROH,
        .categoryName = _("Judo"),
        .height = 13,
        .weight = 555,
		.description = COMPOUND_STRING(
			"Su carácter le empuja a sentir ansias\n"
			"de lanzar por los aires a rivales mayores\n"
			"que él. Forman manadas de cinco."),
        .pokemonScale = 272,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Throh,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Throh,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Throh,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Throh,
        .shinyPalette = gMonShinyPalette_Throh,
        .iconSprite = gMonIcon_Throh,
        .iconPalIndex = 0,
        SHADOW(3, 4, SHADOW_SIZE_M)
        FOOTPRINT(Throh)
        OVERWORLD(
            sPicTable_Throh,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Throh,
            gShinyOverworldPalette_Throh
        )
        .levelUpLearnset = sThrohLevelUpLearnset,
        .teachableLearnset = sThrohTeachableLearnset,
    },
#endif //P_FAMILY_THROH

#if P_FAMILY_SAWK
    [SPECIES_SAWK] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 163,
        .evYield_Attack = 2,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STURDY, ABILITY_INNER_FOCUS, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Sawk"),
        .cryId = CRY_SAWK,
        .natDexNum = NATIONAL_DEX_SAWK,
        .categoryName = _("Karate"),
        .height = 14,
        .weight = 510,
		.description = COMPOUND_STRING(
			"La potencia de sus puñetazos aumenta\n"
			"si se aprieta el cinturón. Si le molestan\n"
			"cuando se entrena, se enfada."),
        .pokemonScale = 265,
        .pokemonOffset = 4,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sawk,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Sawk,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Sawk,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Sawk,
        .shinyPalette = gMonShinyPalette_Sawk,
        .iconSprite = gMonIcon_Sawk,
        .iconPalIndex = 0,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Sawk)
        OVERWORLD(
            sPicTable_Sawk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sawk,
            gShinyOverworldPalette_Sawk
        )
        .levelUpLearnset = sSawkLevelUpLearnset,
        .teachableLearnset = sSawkTeachableLearnset,
    },
#endif //P_FAMILY_SAWK

#if P_FAMILY_SEWADDLE
    [SPECIES_SEWADDLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 53,
        .baseDefense   = 70,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_BUG, TYPE_GRASS),
        .catchRate = 255,
        .expYield = 62,
        .evYield_Defense = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sewaddle"),
        .cryId = CRY_SEWADDLE,
        .natDexNum = NATIONAL_DEX_SEWADDLE,
        .categoryName = _("Sastre"),
        .height = 3,
        .weight = 25,
		.description = COMPOUND_STRING(
			"Recorta hojas y las teje con el líquido\n"
			"viscoso que segrega por la boca para\n"
			"hacerse su propia ropa."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sewaddle,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Sewaddle,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Sewaddle,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Sewaddle,
        .shinyPalette = gMonShinyPalette_Sewaddle,
        .iconSprite = gMonIcon_Sewaddle,
        .iconPalIndex = 1,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Sewaddle)
        OVERWORLD(
            sPicTable_Sewaddle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sewaddle,
            gShinyOverworldPalette_Sewaddle
        )
        .levelUpLearnset = sSewaddleLevelUpLearnset,
        .teachableLearnset = sSewaddleTeachableLearnset,
        .eggMoveLearnset = sSewaddleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_SWADLOON}),
    },

    [SPECIES_SWADLOON] =
    {
        .baseHP        = 55,
        .baseAttack    = 63,
        .baseDefense   = 90,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 133,
        .evYield_Defense = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Swadloon"),
        .cryId = CRY_SWADLOON,
        .natDexNum = NATIONAL_DEX_SWADLOON,
        .categoryName = _("Arropado"),
        .height = 5,
        .weight = 73,
		.description = COMPOUND_STRING(
			"Le gustan los lugares lóbregos y húmedos.\n"
			"Se pasa todo el día comiendo hojas\n"
			"esparcidas por el suelo."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swadloon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Swadloon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Swadloon,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Swadloon,
        .shinyPalette = gMonShinyPalette_Swadloon,
        .iconSprite = gMonIcon_Swadloon,
        .iconPalIndex = 1,
        SHADOW(0, 1, SHADOW_SIZE_L)
        FOOTPRINT(Swadloon)
        OVERWORLD(
            sPicTable_Swadloon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Swadloon,
            gShinyOverworldPalette_Swadloon
        )
        .levelUpLearnset = sSwadloonLevelUpLearnset,
        .teachableLearnset = sSwadloonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_LEAVANNY}),
    },

    [SPECIES_LEAVANNY] =
    {
        .baseHP        = 75,
        .baseAttack    = 103,
        .baseDefense   = 80,
        .baseSpeed     = 92,
        .baseSpAttack  = 70,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 80 : 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 250,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 225,
    #else
        .expYield = 221,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Leavanny"),
        .cryId = CRY_LEAVANNY,
        .natDexNum = NATIONAL_DEX_LEAVANNY,
        .categoryName = _("Cuidador"),
        .height = 12,
        .weight = 205,
		.description = COMPOUND_STRING(
			"Si se encuentra con un Pokémon joven,\n"
			"segrega por la boca hilos pegajosos con\n"
			"los que teje una prenda de ropa."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Leavanny,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Leavanny,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Leavanny,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Leavanny,
        .shinyPalette = gMonShinyPalette_Leavanny,
        .iconSprite = gMonIcon_Leavanny,
        .iconPalIndex = 1,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Leavanny)
        OVERWORLD(
            sPicTable_Leavanny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Leavanny,
            gShinyOverworldPalette_Leavanny
        )
        .levelUpLearnset = sLeavannyLevelUpLearnset,
        .teachableLearnset = sLeavannyTeachableLearnset,
    },
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
    [SPECIES_VENIPEDE] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 59,
        .baseSpeed     = 57,
        .baseSpAttack  = 30,
        .baseSpDefense = 39,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Venipede"),
        .cryId = CRY_VENIPEDE,
        .natDexNum = NATIONAL_DEX_VENIPEDE,
        .categoryName = _("Ciempiés"),
        .height = 4,
        .weight = 53,
		.description = COMPOUND_STRING(
			"Inocula un poderoso veneno al morder.\n"
			"Hasta sus enemigos acérrimos, los Pokémon\n"
			"pájaro, se quedan inmóviles."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Venipede,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Venipede,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Venipede,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Venipede,
        .shinyPalette = gMonShinyPalette_Venipede,
        .iconSprite = gMonIcon_Venipede,
        .iconPalIndex = 1,
        SHADOW(-2, -3, SHADOW_SIZE_M)
        FOOTPRINT(Venipede)
        OVERWORLD(
            sPicTable_Venipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venipede,
            gShinyOverworldPalette_Venipede
        )
        .levelUpLearnset = sVenipedeLevelUpLearnset,
        .teachableLearnset = sVenipedeTeachableLearnset,
        .eggMoveLearnset = sVenipedeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_WHIRLIPEDE}),
    },

    [SPECIES_WHIRLIPEDE] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 99,
        .baseSpeed     = 47,
        .baseSpAttack  = 40,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 120,
        .expYield = 126,
        .evYield_Defense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Whirlipede"),
        .cryId = CRY_WHIRLIPEDE,
        .natDexNum = NATIONAL_DEX_WHIRLIPEDE,
        .categoryName = _("Pupaciempiés"),
        .height = 12,
        .weight = 585,
		.description = COMPOUND_STRING(
			"Normalmente no se mueve, pero se pone\n"
			"a rodar frenéticamente y contraataca\n"
			"con placajes si le agobian."),
        .pokemonScale = 282,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Whirlipede,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Whirlipede,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Whirlipede,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Whirlipede,
        .shinyPalette = gMonShinyPalette_Whirlipede,
        .iconSprite = gMonIcon_Whirlipede,
        .iconPalIndex = 2,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Whirlipede)
        OVERWORLD(
            sPicTable_Whirlipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Whirlipede,
            gShinyOverworldPalette_Whirlipede
        )
        .levelUpLearnset = sWhirlipedeLevelUpLearnset,
        .teachableLearnset = sWhirlipedeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SCOLIPEDE}),
    },

    [SPECIES_SCOLIPEDE] =
    {
        .baseHP        = 60,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 100 : 90,
        .baseDefense   = 89,
        .baseSpeed     = 112,
        .baseSpAttack  = 55,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 243,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 218,
    #else
        .expYield = 214,
    #endif
        .evYield_Speed = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST },
    #else
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Scolipede"),
        .cryId = CRY_SCOLIPEDE,
        .natDexNum = NATIONAL_DEX_SCOLIPEDE,
        .categoryName = _("Megaciempiés"),
        .height = 25,
        .weight = 2005,
		.description = COMPOUND_STRING(
			"Las garras del cuello contienen un potente\n"
			"veneno capaz de acabar con sus rivales.\n"
			"Es muy agresivo."),
        .pokemonScale = 257,
        .pokemonOffset = 2,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Scolipede,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Scolipede,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Scolipede,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Scolipede,
        .shinyPalette = gMonShinyPalette_Scolipede,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Scolipede)
        OVERWORLD(
            sPicTable_Scolipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scolipede,
            gShinyOverworldPalette_Scolipede
        )
        .levelUpLearnset = sScolipedeLevelUpLearnset,
        .teachableLearnset = sScolipedeTeachableLearnset,
    },
#endif //P_FAMILY_VENIPEDE

#if P_FAMILY_COTTONEE
#if P_UPDATED_TYPES >= GEN_6
    #define COTTONEE_FAMILY_TYPES { TYPE_GRASS, TYPE_FAIRY }
#else
    #define COTTONEE_FAMILY_TYPES { TYPE_GRASS, TYPE_GRASS }
#endif

    [SPECIES_COTTONEE] =
    {
        .baseHP        = 40,
        .baseAttack    = 27,
        .baseDefense   = 60,
        .baseSpeed     = 66,
        .baseSpAttack  = 37,
        .baseSpDefense = 50,
        .types = COTTONEE_FAMILY_TYPES,
        .catchRate = 190,
        .expYield = 56,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_PRANKSTER, ABILITY_INFILTRATOR, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cottonee"),
        .cryId = CRY_COTTONEE,
        .natDexNum = NATIONAL_DEX_COTTONEE,
        .categoryName = _("Bolalgodón"),
        .height = 3,
        .weight = 6,
		.description = COMPOUND_STRING(
			"Se deja llevar por las ráfagas de viento.\n"
			"Cuando llueve, su cuerpo pesa mucho,\n"
			"así que se guarece bajo árboles grandes."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cottonee,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Cottonee,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cottonee,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Cottonee,
        .shinyPalette = gMonShinyPalette_Cottonee,
        .iconSprite = gMonIcon_Cottonee,
        .iconPalIndex = 1,
        SHADOW(-1, -5, SHADOW_SIZE_M)
        FOOTPRINT(Cottonee)
        OVERWORLD(
            sPicTable_Cottonee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cottonee,
            gShinyOverworldPalette_Cottonee
        )
        .levelUpLearnset = sCottoneeLevelUpLearnset,
        .teachableLearnset = sCottoneeTeachableLearnset,
        .eggMoveLearnset = sCottoneeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_WHIMSICOTT}),
    },

    [SPECIES_WHIMSICOTT] =
    {
        .baseHP        = 60,
        .baseAttack    = 67,
        .baseDefense   = 85,
        .baseSpeed     = 116,
        .baseSpAttack  = 77,
        .baseSpDefense = 75,
        .types = COTTONEE_FAMILY_TYPES,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_PRANKSTER, ABILITY_INFILTRATOR, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Whimsicott"),
        .cryId = CRY_WHIMSICOTT,
        .natDexNum = NATIONAL_DEX_WHIMSICOTT,
        .categoryName = _("Vuelalviento"),
        .height = 7,
        .weight = 66,
		.description = COMPOUND_STRING(
			"Aparecen en medio de un torbellino y\n"
			"entran en las casas para descolocar los\n"
			"muebles o esparcir algodón por doquier."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Whimsicott,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Whimsicott,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Whimsicott,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Whimsicott,
        .shinyPalette = gMonShinyPalette_Whimsicott,
        .iconSprite = gMonIcon_Whimsicott,
        .iconPalIndex = 1,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Whimsicott)
        OVERWORLD(
            sPicTable_Whimsicott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Whimsicott,
            gShinyOverworldPalette_Whimsicott
        )
        .levelUpLearnset = sWhimsicottLevelUpLearnset,
        .teachableLearnset = sWhimsicottTeachableLearnset,
    },
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
    [SPECIES_PETILIL] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 190,
        .expYield = 56,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_OWN_TEMPO, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Petilil"),
        .cryId = CRY_PETILIL,
        .natDexNum = NATIONAL_DEX_PETILIL,
        .categoryName = _("Bulbo"),
        .height = 5,
        .weight = 66,
		.description = COMPOUND_STRING(
			"Mordisquear las hojas de su cabeza\n"
			"permite recuperar toda la vitalidad,\n"
			"a pesar de que están muy amargas."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Petilil,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Petilil,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Petilil,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Petilil,
        .shinyPalette = gMonShinyPalette_Petilil,
        .iconSprite = gMonIcon_Petilil,
        .iconPalIndex = 1,
        SHADOW(-2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Petilil)
        OVERWORLD(
            sPicTable_Petilil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Petilil,
            gShinyOverworldPalette_Petilil
        )
        .levelUpLearnset = sPetililLevelUpLearnset,
        .teachableLearnset = sPetililTeachableLearnset,
        .eggMoveLearnset = sPetililEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_LILLIGANT},
                                {EVO_NONE, 0, SPECIES_LILLIGANT_HISUI}),
    },

    [SPECIES_LILLIGANT] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 75,
        .expYield = 168,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_OWN_TEMPO, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Lilligant"),
        .cryId = CRY_LILLIGANT,
        .natDexNum = NATIONAL_DEX_LILLIGANT,
        .categoryName = _("Adornofloral"),
        .height = 11,
        .weight = 163,
		.description = COMPOUND_STRING(
			"El aroma de la flor de su tocado relaja\n"
			"a cualquiera a su alrededor. Hay que\n"
			"cuidarlo para que no se marchite."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lilligant,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Lilligant,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lilligant,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Lilligant,
        .shinyPalette = gMonShinyPalette_Lilligant,
        .iconSprite = gMonIcon_Lilligant,
        .iconPalIndex = 1,
        SHADOW(-2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Lilligant)
        OVERWORLD(
            sPicTable_Lilligant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lilligant,
            gShinyOverworldPalette_Lilligant
        )
        .levelUpLearnset = sLilligantLevelUpLearnset,
        .teachableLearnset = sLilligantTeachableLearnset,
        .formSpeciesIdTable = sLilligantFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_LILLIGANT_HISUI] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 50,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_HUSTLE, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Lilligant"),
        .cryId = CRY_LILLIGANT,
        .natDexNum = NATIONAL_DEX_LILLIGANT,
        .categoryName = _("Pirueta"),
        .height = 12,
        .weight = 192,
        .description = COMPOUND_STRING(
            "Sus piernas fortalecidas son el resultado\n"
            "de una vida pasada en montañas cubiertas\n"
            "de nieve profunda. El aroma que exuda de\n"
            "su corona alegra a quienes están cerca."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LilligantHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LilligantHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LilligantHisui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_LilligantHisui,
        .shinyPalette = gMonShinyPalette_LilligantHisui,
        .iconSprite = gMonIcon_LilligantHisui,
        .iconPalIndex = 1,
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Lilligant)
        OVERWORLD(
            sPicTable_LilligantHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_LilligantHisui,
            gShinyOverworldPalette_LilligantHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sLilligantHisuiLevelUpLearnset,
        .teachableLearnset = sLilligantHisuiTeachableLearnset,
        .formSpeciesIdTable = sLilligantFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL

#if P_FAMILY_BASCULIN
    [SPECIES_BASCULIN_RED_STRIPED] =
    {
        .baseHP        = 70,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 98,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = 161,
        .evYield_Speed = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_RECKLESS, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculin"),
        .cryId = CRY_BASCULIN,
        .natDexNum = NATIONAL_DEX_BASCULIN,
        .categoryName = _("Violento"),
        .height = 10,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Solía ser fuente de alimento común. La\n"
            "carne del Basculin rojo es algo grasosa\n"
            "y es más popular entre los jóvenes.\n"
            "Su temperamento es vicioso y agresivo."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BasculinRedStriped,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Basculin,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_BasculinRedStriped,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_BasculinRedStriped,
        .shinyPalette = gMonShinyPalette_BasculinRedStriped,
        .iconSprite = gMonIcon_BasculinRedStriped,
        .iconPalIndex = 1,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Basculin)
        OVERWORLD(
            sPicTable_BasculinRedStriped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BasculinRedStriped,
            gShinyOverworldPalette_BasculinRedStriped
        )
        .levelUpLearnset = sBasculinLevelUpLearnset,
        .teachableLearnset = sBasculinTeachableLearnset,
        .eggMoveLearnset = sBasculinEggMoveLearnset,
        .formSpeciesIdTable = sBasculinFormSpeciesIdTable,
    },

    [SPECIES_BASCULIN_BLUE_STRIPED] =
    {
        .baseHP        = 70,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 98,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = 161,
        .evYield_Speed = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculin"),
        .cryId = CRY_BASCULIN,
        .natDexNum = NATIONAL_DEX_BASCULIN,
        .categoryName = _("Violento"),
        .height = 10,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Forman escuelas con otros de su mismo\n"
            "color. El mayor enemigo de una escuela de\n"
            "Basculin azul es una escuela de Basculin\n"
            "rojo. Su sabor es ligero e inofensivo."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BasculinBlueStriped,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Basculin,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_BasculinBlueStriped,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_BasculinBlueStriped,
        .shinyPalette = gMonShinyPalette_BasculinBlueStriped,
        .iconSprite = gMonIcon_BasculinBlueStriped,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Basculin)
        OVERWORLD(
            sPicTable_BasculinBlueStriped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BasculinBlueStriped,
            gShinyOverworldPalette_BasculinBlueStriped
        )
        .levelUpLearnset = sBasculinLevelUpLearnset,
        .teachableLearnset = sBasculinTeachableLearnset,
        .eggMoveLearnset = sBasculinEggMoveLearnset,
        .formSpeciesIdTable = sBasculinFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_BASCULIN_WHITE_STRIPED] =
    {
        .baseHP        = 70,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 98,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = 161,
        .evYield_Speed = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_RATTLED, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculin"),
        .cryId = CRY_BASCULIN,
        .natDexNum = NATIONAL_DEX_BASCULIN,
        .categoryName = _("Manso"),
        .height = 10,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Aunque esta forma es antigua, comparte\n"
            "una gran variedad de cualidades, se\n"
            "diferencia en varios aspectos, por\n"
            "ejemplo su actitud, siendo más gentil."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BasculinWhiteStriped,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Basculin,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_BasculinWhiteStriped,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_BasculinWhiteStriped,
        .shinyPalette = gMonShinyPalette_BasculinWhiteStriped,
        .iconSprite = gMonIcon_BasculinWhiteStriped,
        .iconPalIndex = 0,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Basculin)
        OVERWORLD(
            sPicTable_BasculinWhiteStriped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BasculinWhiteStriped,
            gShinyOverworldPalette_BasculinWhiteStriped
        )
        .levelUpLearnset = sBasculinWhiteStripedLevelUpLearnset,
        .teachableLearnset = sBasculinWhiteStripedTeachableLearnset,
        .formSpeciesIdTable = sBasculinFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_RECOIL_DAMAGE_MALE, 294, SPECIES_BASCULEGION_M},
                                {EVO_RECOIL_DAMAGE_FEMALE, 294, SPECIES_BASCULEGION_F}),
    },

    [SPECIES_BASCULEGION_M] =
    {
        .baseHP        = 120,
        .baseAttack    = 112,
        .baseDefense   = 65,
        .baseSpeed     = 78,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 265,
        .evYield_HP = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculegion"),
        .cryId = CRY_BASCULEGION,
        .natDexNum = NATIONAL_DEX_BASCULEGION,
        .categoryName = _("Gran Pez"),
        .height = 30,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "Se cubre con las almas de aliados que\n"
            "cayeron antes de cumplir su objetivo de\n"
            "asubir corriente arriba. Ninguna especie\n"
            "en los ríos de Hisui es igual a esta."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BasculegionM,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Basculegion,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_BasculegionM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BasculegionM,
        .shinyPalette = gMonShinyPalette_BasculegionM,
        .iconSprite = gMonIcon_BasculegionM,
        .iconPalIndex = 1,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Basculegion)
        OVERWORLD(
            sPicTable_BasculegionM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BasculegionM,
            gShinyOverworldPalette_BasculegionM
        )
        .levelUpLearnset = sBasculegionLevelUpLearnset,
        .teachableLearnset = sBasculegionTeachableLearnset,
        .formSpeciesIdTable = sBasculegionFormSpeciesIdTable,
    },

    [SPECIES_BASCULEGION_F] =
    {
        .baseHP        = 120,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 78,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 265,
        .evYield_HP = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculegion"),
        .cryId = CRY_BASCULEGION,
        .natDexNum = NATIONAL_DEX_BASCULEGION,
        .categoryName = _("Gran Pez"),
        .height = 30,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "Las almas de sus aliados envuelven su\n"
            "cuerpo y lo impulsan sin esfuerzo a\n"
            "través de incluso las corrientes\n"
            "más furiosas."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BasculegionF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Basculegion,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_BasculegionF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BasculegionF,
        .shinyPalette = gMonShinyPalette_BasculegionF,
        .iconSprite = gMonIcon_BasculegionF,
        .iconPalIndex = 0,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Basculegion)
        OVERWORLD(
            sPicTable_BasculegionF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BasculegionF,
            gShinyOverworldPalette_BasculegionF
        )
        .levelUpLearnset = sBasculegionLevelUpLearnset,
        .teachableLearnset = sBasculegionTeachableLearnset,
        .formSpeciesIdTable = sBasculegionFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN

#if P_FAMILY_SANDILE
    [SPECIES_SANDILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 72,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_GROUND, TYPE_DARK),
        .catchRate = 180,
        .expYield = 58,
        .evYield_Attack = 1,
        .itemRare = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sandile"),
        .cryId = CRY_SANDILE,
        .natDexNum = NATIONAL_DEX_SANDILE,
        .categoryName = _("Desierdrilo"),
        .height = 7,
        .weight = 152,
		.description = COMPOUND_STRING(
			"Se desplaza hundido en la arena,\n"
			"dejando al descubierto solo los ojos y\n"
			"la nariz. Una membrana negra le protege\n"
			"los ojos."),
        .pokemonScale = 365,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandile,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Sandile,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sandile,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Sandile,
        .shinyPalette = gMonShinyPalette_Sandile,
        .iconSprite = gMonIcon_Sandile,
        .iconPalIndex = 1,
        SHADOW(4, -5, SHADOW_SIZE_M)
        FOOTPRINT(Sandile)
        OVERWORLD(
            sPicTable_Sandile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandile,
            gShinyOverworldPalette_Sandile
        )
        .levelUpLearnset = sSandileLevelUpLearnset,
        .teachableLearnset = sSandileTeachableLearnset,
        .eggMoveLearnset = sSandileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 29, SPECIES_KROKOROK}),
    },

    [SPECIES_KROKOROK] =
    {
        .baseHP        = 60,
        .baseAttack    = 82,
        .baseDefense   = 45,
        .baseSpeed     = 74,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND, TYPE_DARK),
        .catchRate = 90,
        .expYield = 123,
        .evYield_Attack = 2,
        .itemRare = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Krokorok"),
        .cryId = CRY_KROKOROK,
        .natDexNum = NATIONAL_DEX_KROKOROK,
        .categoryName = _("Desierdrilo"),
        .height = 10,
        .weight = 334,
		.description = COMPOUND_STRING(
			"Gracias a la película que recubre sus\n"
			"ojos, pueden ver incluso de noche.\n"
			"Viven en pequeñas manadas."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Krokorok,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Krokorok,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Krokorok,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Krokorok,
        .shinyPalette = gMonShinyPalette_Krokorok,
        .iconSprite = gMonIcon_Krokorok,
        .iconPalIndex = 1,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Krokorok)
        OVERWORLD(
            sPicTable_Krokorok,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Krokorok,
            gShinyOverworldPalette_Krokorok
        )
        .levelUpLearnset = sKrokorokLevelUpLearnset,
        .teachableLearnset = sKrokorokTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_KROOKODILE}),
    },

    [SPECIES_KROOKODILE] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 80 : 70,
        .baseSpeed     = 92,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND, TYPE_DARK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 260,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 234,
    #else
        .expYield = 229,
    #endif
        .evYield_Attack = 3,
        .itemCommon = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Krookodile"),
        .cryId = CRY_KROOKODILE,
        .natDexNum = NATIONAL_DEX_KROOKODILE,
        .categoryName = _("Amenazador"),
        .height = 15,
        .weight = 963,
		.description = COMPOUND_STRING(
			"Jamás deja escapar a su presa.\n"
			"Sus mandíbulas son capaces de destrozar\n"
			"la carrocería de un coche."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Krookodile,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Krookodile,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Krookodile,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Krookodile,
        .shinyPalette = gMonShinyPalette_Krookodile,
        .iconSprite = gMonIcon_Krookodile,
        .iconPalIndex = 0,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Krookodile)
        OVERWORLD(
            sPicTable_Krookodile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Krookodile,
            gShinyOverworldPalette_Krookodile
        )
        .levelUpLearnset = sKrookodileLevelUpLearnset,
        .teachableLearnset = sKrookodileTeachableLearnset,
    },
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
    [SPECIES_DARUMAKA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 15,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 120,
        .expYield = 63,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Darumaka"),
        .cryId = CRY_DARUMAKA,
        .natDexNum = NATIONAL_DEX_DARUMAKA,
        .categoryName = _("Daruma"),
        .height = 6,
        .weight = 375,
		.description = COMPOUND_STRING(
			"No para quieto si arden las llamas de\n"
			"su estómago, pero se duerme\n"
			"plácidamente si se apaciguan."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Darumaka,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Darumaka,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Darumaka,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Darumaka,
        .shinyPalette = gMonShinyPalette_Darumaka,
        .iconSprite = gMonIcon_Darumaka,
        .iconPalIndex = 0,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Darumaka)
        OVERWORLD(
            sPicTable_Darumaka,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Darumaka,
            gShinyOverworldPalette_Darumaka
        )
        .levelUpLearnset = sDarumakaLevelUpLearnset,
        .teachableLearnset = sDarumakaTeachableLearnset,
        .eggMoveLearnset = sDarumakaEggMoveLearnset,
        .formSpeciesIdTable = sDarumakaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_DARMANITAN_STANDARD}),
    },

    [SPECIES_DARMANITAN_STANDARD] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 60,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_ZEN_MODE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Candente"),
        .height = 13,
        .weight = 929,
        .description = COMPOUND_STRING(
            "Cuando resulta herido en batalla,\n"
"se transforma en una estatua de piedra.\n"
"Entonces medita y agudiza su mente,\n"
"y continúa luchando mentalmente."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DarmanitanStandard,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_DarmanitanStandard,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_DarmanitanStandard,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_DarmanitanStandard,
        .shinyPalette = gMonShinyPalette_DarmanitanStandard,
        .iconSprite = gMonIcon_DarmanitanStandard,
        .iconPalIndex = 0,
        SHADOW(3, 5, SHADOW_SIZE_L)
        FOOTPRINT(Darmanitan)
        OVERWORLD(
            sPicTable_DarmanitanStandard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DarmanitanStandard,
            gShinyOverworldPalette_DarmanitanStandard
        )
        .levelUpLearnset = sDarmanitanLevelUpLearnset,
        .teachableLearnset = sDarmanitanTeachableLearnset,
        .formSpeciesIdTable = sDarmanitanFormSpeciesIdTable,
        .formChangeTable = sDarmanitanFormChangeTable,
    },

    [SPECIES_DARMANITAN_ZEN] =
    {
        .baseHP        = 105,
        .baseAttack    = 30,
        .baseDefense   = 105,
        .baseSpeed     = 55,
        .baseSpAttack  = 140,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_7) ? 189 : 168,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_ZEN_MODE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Candente"),
        .height = 13,
        .weight = 929,
        .description = COMPOUND_STRING(
            "Cuando está herido, deja de moverse.\n"
            "Se queda tan inmóvil como una piedra\n"
            "para meditar, agudizando su\n"
            "mente y espíritu."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DarmanitanZen,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_DarmanitanZen,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_DarmanitanZen,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_DarmanitanZen,
        .shinyPalette = gMonShinyPalette_DarmanitanZen,
        .iconSprite = gMonIcon_DarmanitanZen,
        .iconPalIndex = 0,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Darmanitan)
        .levelUpLearnset = sDarmanitanLevelUpLearnset,
        .teachableLearnset = sDarmanitanTeachableLearnset,
        .formSpeciesIdTable = sDarmanitanFormSpeciesIdTable,
        .formChangeTable = sDarmanitanFormChangeTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_DARUMAKA_GALAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 15,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 120,
        .expYield = 63,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Darumaka"),
        .cryId = CRY_DARUMAKA,
        .natDexNum = NATIONAL_DEX_DARUMAKA,
        .categoryName = _("Daruma"),
        .height = 7,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Cuanto más frías son, más enérgicas\n"
            "se vuelven. Congelan su aliento para\n"
            "crear bolas de nieve, usándolas como\n"
            "munición para juegos juguetones."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DarumakaGalar,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_DarumakaGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DarumakaGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DarumakaGalar,
        .shinyPalette = gMonShinyPalette_DarumakaGalar,
        .iconSprite = gMonIcon_DarumakaGalar,
        .iconPalIndex = 0,
        SHADOW(-3, -1, SHADOW_SIZE_S)
        FOOTPRINT(Darumaka)
        OVERWORLD(
            sPicTable_DarumakaGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DarumakaGalar,
            gShinyOverworldPalette_DarumakaGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sDarumakaGalarLevelUpLearnset,
        .teachableLearnset = sDarumakaGalarTeachableLearnset,
        .eggMoveLearnset = sDarumakaGalarEggMoveLearnset,
        .formSpeciesIdTable = sDarumakaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_DARMANITAN_GALAR_STANDARD}),
    },

    [SPECIES_DARMANITAN_GALAR_STANDARD] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 60,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GORILLA_TACTICS, ABILITY_NONE, ABILITY_ZEN_MODE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Daruma"),
        .height = 17,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "En los días en que soplan ventiscas,\n"
            "baja a donde viven las personas. Guarda\n"
            "comida en la bola de nieve de su cabeza,\n"
            " llevándola a casa para más tarde."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DarmanitanGalarStandard,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DarmanitanGalarStandard,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DarmanitanGalarStandard,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DarmanitanGalarStandard,
        .shinyPalette = gMonShinyPalette_DarmanitanGalarStandard,
        .iconSprite = gMonIcon_DarmanitanGalarStandard,
        .iconPalIndex = 0,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Darmanitan)
        OVERWORLD(
            sPicTable_DarmanitanGalarStandard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DarmanitanGalarStandard,
            gShinyOverworldPalette_DarmanitanGalarStandard
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sDarmanitanGalarLevelUpLearnset,
        .teachableLearnset = sDarmanitanGalarTeachableLearnset,
        .formSpeciesIdTable = sDarmanitanFormSpeciesIdTable,
        .formChangeTable = sDarmanitanGalarFormChangeTable,
    },

    [SPECIES_DARMANITAN_GALAR_ZEN] =
    {
        .baseHP        = 105,
        .baseAttack    = 160,
        .baseDefense   = 55,
        .baseSpeed     = 135,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ICE, TYPE_FIRE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_7) ? 189 : 168,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GORILLA_TACTICS, ABILITY_NONE, ABILITY_ZEN_MODE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Candente"),
        .height = 17,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Darmanitan toma esta forma cuando está\n"
            "enfadado. No dejará de lanzar llamas\n"
            "hasta que su ira se haya calmado, incluso\n"
            "si su cuerpo comienza a derretirse."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DarmanitanGalarZen,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_DarmanitanGalarZen,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DarmanitanGalarZen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DarmanitanGalarZen,
        .shinyPalette = gMonShinyPalette_DarmanitanGalarZen,
        .iconSprite = gMonIcon_DarmanitanGalarZen,
        .iconPalIndex = 0,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Darmanitan)
        .isGalarianForm = TRUE,
        .levelUpLearnset = sDarmanitanGalarLevelUpLearnset,
        .teachableLearnset = sDarmanitanGalarTeachableLearnset,
        .formSpeciesIdTable = sDarmanitanFormSpeciesIdTable,
        .formChangeTable = sDarmanitanGalarFormChangeTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_MARACTUS
    [SPECIES_MARACTUS] =
    {
        .baseHP        = 75,
        .baseAttack    = 86,
        .baseDefense   = 67,
        .baseSpeed     = 60,
        .baseSpAttack  = 106,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 255,
        .expYield = 161,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_CHLOROPHYLL, ABILITY_STORM_DRAIN },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Maractus"),
        .cryId = CRY_MARACTUS,
        .natDexNum = NATIONAL_DEX_MARACTUS,
        .categoryName = _("Cactus"),
        .height = 10,
        .weight = 280,
		.description = COMPOUND_STRING(
			"Espanta a los Pokémon pájaro con un\n"
			"baile rápido y haciendo ruido para\n"
			"evitar que picoteen las semillas de\n"
			"sus flores."),
        .pokemonScale = 305,
        .pokemonOffset = 6,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Maractus,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Maractus,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Maractus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Maractus,
        .shinyPalette = gMonShinyPalette_Maractus,
        .iconSprite = gMonIcon_Maractus,
        .iconPalIndex = 1,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Maractus)
        OVERWORLD(
            sPicTable_Maractus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Maractus,
            gShinyOverworldPalette_Maractus
        )
        .levelUpLearnset = sMaractusLevelUpLearnset,
        .teachableLearnset = sMaractusTeachableLearnset,
        .eggMoveLearnset = sMaractusEggMoveLearnset,
    },
#endif //P_FAMILY_MARACTUS

#if P_FAMILY_DWEBBLE
    [SPECIES_DWEBBLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_BUG, TYPE_ROCK),
        .catchRate = 190,
        .expYield = 65,
        .evYield_Defense = 1,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Dwebble"),
        .cryId = CRY_DWEBBLE,
        .natDexNum = NATIONAL_DEX_DWEBBLE,
        .categoryName = _("Casapiedra"),
        .height = 3,
        .weight = 145,
		.description = COMPOUND_STRING(
			"Abre un agujero en la roca y vive en él.\n"
			"Si la roca se resquebraja, no se queda\n"
			"tranquilo hasta que no encuentra otra."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dwebble,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Dwebble,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dwebble,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Dwebble,
        .shinyPalette = gMonShinyPalette_Dwebble,
        .iconSprite = gMonIcon_Dwebble,
        .iconPalIndex = 0,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Dwebble)
        OVERWORLD(
            sPicTable_Dwebble,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dwebble,
            gShinyOverworldPalette_Dwebble
        )
        .levelUpLearnset = sDwebbleLevelUpLearnset,
        .teachableLearnset = sDwebbleTeachableLearnset,
        .eggMoveLearnset = sDwebbleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_CRUSTLE}),
    },

    [SPECIES_CRUSTLE] =
    {
        .baseHP        = 70,
        .baseAttack    = P_UPDATED_STATS >= GEN_7 ? 105 : 95,
        .baseDefense   = 125,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_BUG, TYPE_ROCK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_7) ? 170 : 166,
        .evYield_Defense = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Crustle"),
        .cryId = CRY_CRUSTLE,
        .natDexNum = NATIONAL_DEX_CRUSTLE,
        .categoryName = _("Casapiedra"),
        .height = 14,
        .weight = 2000,
		.description = COMPOUND_STRING(
			"Su inmensa capacidad motriz le permite\n"
			"desplazarse cargando a sus espaldas rocas\n"
			"enormes durante días."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crustle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Crustle,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Crustle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Crustle,
        .shinyPalette = gMonShinyPalette_Crustle,
        .iconSprite = gMonIcon_Crustle,
        .iconPalIndex = 2,
        SHADOW(1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Crustle)
        OVERWORLD(
            sPicTable_Crustle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Crustle,
            gShinyOverworldPalette_Crustle
        )
        .levelUpLearnset = sCrustleLevelUpLearnset,
        .teachableLearnset = sCrustleTeachableLearnset,
    },
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
    [SPECIES_SCRAGGY] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 48,
        .baseSpAttack  = 35,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIGHTING),
        .catchRate = 180,
        .expYield = 70,
        .evYield_Attack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_MOXIE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Scraggy"),
        .cryId = CRY_SCRAGGY,
        .natDexNum = NATIONAL_DEX_SCRAGGY,
        .categoryName = _("Mudapiel"),
        .height = 6,
        .weight = 118,
		.description = COMPOUND_STRING(
			"Está orgulloso de su sólido cráneo.\n"
			"Reparte cabezazos a diestro y siniestro\n"
			"con tal vehemencia que él mismo se marea."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Scraggy,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Scraggy,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Scraggy,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Scraggy,
        .shinyPalette = gMonShinyPalette_Scraggy,
        .iconSprite = gMonIcon_Scraggy,
        .iconPalIndex = 2,
        SHADOW(-4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Scraggy)
        OVERWORLD(
            sPicTable_Scraggy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scraggy,
            gShinyOverworldPalette_Scraggy
        )
        .levelUpLearnset = sScraggyLevelUpLearnset,
        .teachableLearnset = sScraggyTeachableLearnset,
        .eggMoveLearnset = sScraggyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_SCRAFTY}),
    },

    [SPECIES_SCRAFTY] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 115,
        .baseSpeed     = 58,
        .baseSpAttack  = 45,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIGHTING),
        .catchRate = 90,
        .expYield = 171,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_MOXIE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Scrafty"),
        .cryId = CRY_SCRAFTY,
        .natDexNum = NATIONAL_DEX_SCRAFTY,
        .categoryName = _("Gamberro"),
        .height = 11,
        .weight = 300,
		.description = COMPOUND_STRING(
			"Ataca en grupo con violencia a todo\n"
			"aquel que se interne en su territorio.\n"
			"Lanza ácido por la boca."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Scrafty,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Scrafty,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Scrafty,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Scrafty,
        .shinyPalette = gMonShinyPalette_Scrafty,
        .iconSprite = gMonIcon_Scrafty,
        .iconPalIndex = 0,
        SHADOW(-2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Scrafty)
        OVERWORLD(
            sPicTable_Scrafty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scrafty,
            gShinyOverworldPalette_Scrafty
        )
        .levelUpLearnset = sScraftyLevelUpLearnset,
        .teachableLearnset = sScraftyTeachableLearnset,
    },
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_SIGILYPH
    [SPECIES_SIGILYPH] =
    {
        .baseHP        = 72,
        .baseAttack    = 58,
        .baseDefense   = 80,
        .baseSpeed     = 97,
        .baseSpAttack  = 103,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_WONDER_SKIN, ABILITY_MAGIC_GUARD, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Sigilyph"),
        .cryId = CRY_SIGILYPH,
        .natDexNum = NATIONAL_DEX_SIGILYPH,
        .categoryName = _("Pseudopájaro"),
        .height = 14,
        .weight = 140,
		.description = COMPOUND_STRING(
			"Conserva recuerdos de cuando defendía\n"
			"cierta ciudad milenaria, por eso vuela\n"
			"siempre trazando la misma ruta."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sigilyph,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sigilyph,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Sigilyph,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Sigilyph,
        .shinyPalette = gMonShinyPalette_Sigilyph,
        .iconSprite = gMonIcon_Sigilyph,
        .iconPalIndex = 0,
        SHADOW(3, 18, SHADOW_SIZE_S)
        FOOTPRINT(Sigilyph)
        OVERWORLD(
            sPicTable_Sigilyph,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sigilyph,
            gShinyOverworldPalette_Sigilyph
        )
        .levelUpLearnset = sSigilyphLevelUpLearnset,
        .teachableLearnset = sSigilyphTeachableLearnset,
        .eggMoveLearnset = sSigilyphEggMoveLearnset,
    },
#endif //P_FAMILY_SIGILYPH

#if P_FAMILY_YAMASK
    [SPECIES_YAMASK] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MUMMY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Yamask"),
        .cryId = CRY_YAMASK,
        .natDexNum = NATIONAL_DEX_YAMASK,
        .categoryName = _("Espíritu"),
        .height = 5,
        .weight = 15,
		.description = COMPOUND_STRING(
			"Su máscara representa la cara que\n"
			"poseía cuando era humano. A veces le\n"
			"saltan lágrimas al contemplarla."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yamask,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Yamask,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Yamask,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Yamask,
        .shinyPalette = gMonShinyPalette_Yamask,
        .iconSprite = gMonIcon_Yamask,
        .iconPalIndex = 0,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Yamask)
        OVERWORLD(
            sPicTable_Yamask,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Yamask,
            gShinyOverworldPalette_Yamask
        )
        .levelUpLearnset = sYamaskLevelUpLearnset,
        .teachableLearnset = sYamaskTeachableLearnset,
        .eggMoveLearnset = sYamaskEggMoveLearnset,
        .formSpeciesIdTable = sYamaskFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COFAGRIGUS}),
    },

    [SPECIES_COFAGRIGUS] =
    {
        .baseHP        = 58,
        .baseAttack    = 50,
        .baseDefense   = 145,
        .baseSpeed     = 30,
        .baseSpAttack  = 95,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MUMMY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cofagrigus"),
        .cryId = CRY_COFAGRIGUS,
        .natDexNum = NATIONAL_DEX_COFAGRIGUS,
        .categoryName = _("Sepultura"),
        .height = 17,
        .weight = 765,
		.description = COMPOUND_STRING(
			"Se hace pasar por un ataúd y castiga\n"
			"a los ladrones de tumbas. Tiene el\n"
			"cuerpo bañado en oro puro."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Cofagrigus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cofagrigus,
        .frontAnimId = ANIM_GLOW_BLACK,
        .backPic = gMonBackPic_Cofagrigus,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Cofagrigus,
        .shinyPalette = gMonShinyPalette_Cofagrigus,
        .iconSprite = gMonIcon_Cofagrigus,
        .iconPalIndex = 0,
        SHADOW(6, 12, SHADOW_SIZE_M)
        FOOTPRINT(Cofagrigus)
        OVERWORLD(
            sPicTable_Cofagrigus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cofagrigus,
            gShinyOverworldPalette_Cofagrigus
        )
        .levelUpLearnset = sCofagrigusLevelUpLearnset,
        .teachableLearnset = sCofagrigusTeachableLearnset,
    },

#if P_GALARIAN_FORMS
    [SPECIES_YAMASK_GALAR] =
    {
        .baseHP        = 38,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_GHOST),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_WANDERING_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Yamask"),
        .cryId = CRY_YAMASK,
        .natDexNum = NATIONAL_DEX_YAMASK,
        .categoryName = _("Espíritu"),
        .height = 5,
        .weight = 15,
        .description = COMPOUND_STRING(
            "Una losa de arcilla con grabados\n"
            "malditos tomó posesión de un Yamask. Se\n"
            "dice que la losa está absorbiendo\n"
            "el poder oscuro de Yamask."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_YamaskGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_YamaskGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_YamaskGalar,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_YamaskGalar,
        .shinyPalette = gMonShinyPalette_YamaskGalar,
        .iconSprite = gMonIcon_YamaskGalar,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Yamask)
        OVERWORLD(
            sPicTable_YamaskGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_YamaskGalar,
            gShinyOverworldPalette_YamaskGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sYamaskGalarLevelUpLearnset,
        .teachableLearnset = sYamaskGalarTeachableLearnset,
        .eggMoveLearnset = sYamaskGalarEggMoveLearnset,
        .formSpeciesIdTable = sYamaskFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SCRIPT_TRIGGER_DMG, 49, SPECIES_RUNERIGUS}),
    },

    [SPECIES_RUNERIGUS] =
    {
        .baseHP        = 58,
        .baseAttack    = 95,
        .baseDefense   = 145,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GROUND, TYPE_GHOST),
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_WANDERING_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Runerigus"),
        .cryId = CRY_RUNERIGUS,
        .natDexNum = NATIONAL_DEX_RUNERIGUS,
        .categoryName = _("Resquemor"),
        .height = 16,
        .weight = 666,
		.description = COMPOUND_STRING(
			"Una poderosa maldición pesa sobre\n"
			"esta antigua imagen grabada, que ha\n"
			"cobrado vida tras adueñarse del alma de\n"
			"Yamask."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Runerigus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Runerigus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Runerigus,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Runerigus,
        .shinyPalette = gMonShinyPalette_Runerigus,
        .iconSprite = gMonIcon_Runerigus,
        .iconPalIndex = 2,
        SHADOW(14, 14, SHADOW_SIZE_M)
        FOOTPRINT(Runerigus)
        OVERWORLD(
            sPicTable_Runerigus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Runerigus,
            gShinyOverworldPalette_Runerigus
        )
        .levelUpLearnset = sRunerigusLevelUpLearnset,
        .teachableLearnset = sRunerigusTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
    [SPECIES_TIRTOUGA] =
    {
        .baseHP        = 54,
        .baseAttack    = 78,
        .baseDefense   = 103,
        .baseSpeed     = 22,
        .baseSpAttack  = 53,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SOLID_ROCK, ABILITY_STURDY, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tirtouga"),
        .cryId = CRY_TIRTOUGA,
        .natDexNum = NATIONAL_DEX_TIRTOUGA,
        .categoryName = _("Pretortuga"),
        .height = 7,
        .weight = 165,
		.description = COMPOUND_STRING(
			"Ya pululaba por las aguas hace\n"
			"100 millones de años. También va a tierra\n"
			"a veces en busca de alimento."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tirtouga,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Tirtouga,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Tirtouga,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Tirtouga,
        .shinyPalette = gMonShinyPalette_Tirtouga,
        .iconSprite = gMonIcon_Tirtouga,
        .iconPalIndex = 2,
        SHADOW(0, -3, SHADOW_SIZE_M)
        FOOTPRINT(Tirtouga)
        OVERWORLD(
            sPicTable_Tirtouga,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tirtouga,
            gShinyOverworldPalette_Tirtouga
        )
        .levelUpLearnset = sTirtougaLevelUpLearnset,
        .teachableLearnset = sTirtougaTeachableLearnset,
        .eggMoveLearnset = sTirtougaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_CARRACOSTA}),
    },

    [SPECIES_CARRACOSTA] =
    {
        .baseHP        = 74,
        .baseAttack    = 108,
        .baseDefense   = 133,
        .baseSpeed     = 32,
        .baseSpAttack  = 83,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SOLID_ROCK, ABILITY_STURDY, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Carracosta"),
        .cryId = CRY_CARRACOSTA,
        .natDexNum = NATIONAL_DEX_CARRACOSTA,
        .categoryName = _("Pretortuga"),
        .height = 12,
        .weight = 810,
		.description = COMPOUND_STRING(
			"La fuerza de sus mandíbulas es enorme.\n"
			"Tritura presas, huesos y rocas a la\n"
			"vez y los engulle."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carracosta,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Carracosta,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Carracosta,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Carracosta,
        .shinyPalette = gMonShinyPalette_Carracosta,
        .iconSprite = gMonIcon_Carracosta,
        .iconPalIndex = 2,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Carracosta)
        OVERWORLD(
            sPicTable_Carracosta,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Carracosta,
            gShinyOverworldPalette_Carracosta
        )
        .levelUpLearnset = sCarracostaLevelUpLearnset,
        .teachableLearnset = sCarracostaTeachableLearnset,
    },
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
    [SPECIES_ARCHEN] =
    {
        .baseHP        = 55,
        .baseAttack    = 112,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 74,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 71,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_DEFEATIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Archen"),
        .cryId = CRY_ARCHEN,
        .natDexNum = NATIONAL_DEX_ARCHEN,
        .categoryName = _("Protopájaro"),
        .height = 5,
        .weight = 95,
		.description = COMPOUND_STRING(
			"Pokémon que renació de un fósil.\n"
			"Dicen que es el antepasado de todos\n"
			"los Pokémon pájaro."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Archen,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Archen,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Archen,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Archen,
        .shinyPalette = gMonShinyPalette_Archen,
        .iconSprite = gMonIcon_Archen,
        .iconPalIndex = 0,
        SHADOW(-3, -2, SHADOW_SIZE_S)
        FOOTPRINT(Archen)
        OVERWORLD(
            sPicTable_Archen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Archen,
            gShinyOverworldPalette_Archen
        )
        .levelUpLearnset = sArchenLevelUpLearnset,
        .teachableLearnset = sArchenTeachableLearnset,
        .eggMoveLearnset = sArchenEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_ARCHEOPS}),
    },

    [SPECIES_ARCHEOPS] =
    {
        .baseHP        = 75,
        .baseAttack    = 140,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 112,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_DEFEATIST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Archeops"),
        .cryId = CRY_ARCHEOPS,
        .natDexNum = NATIONAL_DEX_ARCHEOPS,
        .categoryName = _("Protopájaro"),
        .height = 14,
        .weight = 320,
		.description = COMPOUND_STRING(
			"Levanta el vuelo tras coger carrerilla.\n"
			"Coopera con sus compañeros de bandada\n"
			"para atrapar a sus presas."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Archeops,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Archeops,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 11,
        .backPic = gMonBackPic_Archeops,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Archeops,
        .shinyPalette = gMonShinyPalette_Archeops,
        .iconSprite = gMonIcon_Archeops,
        .iconPalIndex = 0,
        SHADOW(0, 18, SHADOW_SIZE_M)
        FOOTPRINT(Archeops)
        OVERWORLD(
            sPicTable_Archeops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Archeops,
            gShinyOverworldPalette_Archeops
        )
        .levelUpLearnset = sArcheopsLevelUpLearnset,
        .teachableLearnset = sArcheopsTeachableLearnset,
    },
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
    [SPECIES_TRUBBISH] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 62,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed = 1,
        .itemRare = ITEM_SILK_SCARF,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Trubbish"),
        .cryId = CRY_TRUBBISH,
        .natDexNum = NATIONAL_DEX_TRUBBISH,
        .categoryName = _("Bolsabasura"),
        .height = 6,
        .weight = 310,
		.description = COMPOUND_STRING(
			"Le gustan los lugares con suciedad.\n"
			"Quien inhala los gases que eructa duerme\n"
			"durante una semana."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trubbish,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Trubbish,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Trubbish,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Trubbish,
        .shinyPalette = gMonShinyPalette_Trubbish,
        .iconSprite = gMonIcon_Trubbish,
        .iconPalIndex = 1,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Trubbish)
        OVERWORLD(
            sPicTable_Trubbish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Trubbish,
            gShinyOverworldPalette_Trubbish
        )
        .levelUpLearnset = sTrubbishLevelUpLearnset,
        .teachableLearnset = sTrubbishTeachableLearnset,
        .eggMoveLearnset = sTrubbishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GARBODOR}),
    },

    [SPECIES_GARBODOR] =
    {
        .baseHP        = 80,
        .baseAttack    = 95,
        .baseDefense   = 82,
        .baseSpeed     = 75,
        .baseSpAttack  = 60,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack = 2,
        .itemCommon = ITEM_SILK_SCARF,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STENCH, ABILITY_WEAK_ARMOR, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Garbodor"),
        .cryId = CRY_GARBODOR,
        .natDexNum = NATIONAL_DEX_GARBODOR,
        .categoryName = _("Vertedero"),
        .height = 19,
        .weight = 1073,
		.description = COMPOUND_STRING(
			"Traga basura y la integra en su cuerpo.\n"
			"Despide veneno líquido por la punta de\n"
			"los dedos de su mano derecha."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Garbodor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Garbodor,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Garbodor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Garbodor,
        .shinyPalette = gMonShinyPalette_Garbodor,
        .iconSprite = gMonIcon_Garbodor,
        .iconPalIndex = 1,
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Garbodor)
        OVERWORLD(
            sPicTable_Garbodor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Garbodor,
            gShinyOverworldPalette_Garbodor
        )
        .levelUpLearnset = sGarbodorLevelUpLearnset,
        .teachableLearnset = sGarbodorTeachableLearnset,
        .formSpeciesIdTable = sGarbodorFormSpeciesIdTable,
        .formChangeTable = sGarbodorFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_GARBODOR_GMAX] =
    {
        .baseHP        = 80,
        .baseAttack    = 95,
        .baseDefense   = 82,
        .baseSpeed     = 75,
        .baseSpAttack  = 60,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_POISON),
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack = 2,
        .itemCommon = ITEM_SILK_SCARF,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STENCH, ABILITY_WEAK_ARMOR, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Garbodor"),
        .cryId = CRY_GARBODOR,
        .natDexNum = NATIONAL_DEX_GARBODOR,
        .categoryName = _("Vertedero"),
        .height = 210,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Rocía gas tóxico desde su boca\n"
            "y sus dedos. Si el gas te envuelve,\n"
            "las toxinas se filtrarán\n"
            "hasta tus huesos."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GarbodorGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_GarbodorGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GarbodorGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GarbodorGmax,
        .shinyPalette = gMonShinyPalette_GarbodorGmax,
        .iconSprite = gMonIcon_GarbodorGmax,
        .iconPalIndex = 0,
        NO_SHADOW
        FOOTPRINT(Garbodor)
        .isGigantamax = TRUE,
        .levelUpLearnset = sGarbodorLevelUpLearnset,
        .teachableLearnset = sGarbodorTeachableLearnset,
        .formSpeciesIdTable = sGarbodorFormSpeciesIdTable,
        .formChangeTable = sGarbodorFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
    [SPECIES_ZORUA] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 75,
        .expYield = 66,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ILLUSION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zorua"),
        .cryId = CRY_ZORUA,
        .natDexNum = NATIONAL_DEX_ZORUA,
        .categoryName = _("Zorropillo"),
        .height = 7,
        .weight = 125,
		.description = COMPOUND_STRING(
			"Se transforma en otros para crear\n"
			"desconciertos. A menudo, adopta la\n"
			"forma de un niño parco en palabras."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zorua,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Zorua,
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .backPic = gMonBackPic_Zorua,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Zorua,
        .shinyPalette = gMonShinyPalette_Zorua,
        .iconSprite = gMonIcon_Zorua,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Zorua)
        OVERWORLD(
            sPicTable_Zorua,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zorua,
            gShinyOverworldPalette_Zorua
        )
        .levelUpLearnset = sZoruaLevelUpLearnset,
        .teachableLearnset = sZoruaTeachableLearnset,
        .eggMoveLearnset = sZoruaEggMoveLearnset,
        .formSpeciesIdTable = sZoruaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ZOROARK}),
    },

    [SPECIES_ZOROARK] =
    {
        .baseHP        = 60,
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 45,
        .expYield = 179,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ILLUSION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zoroark"),
        .cryId = CRY_ZOROARK,
        .natDexNum = NATIONAL_DEX_ZOROARK,
        .categoryName = _("Disfrazorro"),
        .height = 16,
        .weight = 811,
		.description = COMPOUND_STRING(
			"Tiene la facultad de confundir a muchos\n"
			"humanos a la vez. Protege su guarida\n"
			"creando un paisaje ilusorio."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Zoroark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zoroark,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .backPic = gMonBackPic_Zoroark,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Zoroark,
        .shinyPalette = gMonShinyPalette_Zoroark,
        .iconSprite = gMonIcon_Zoroark,
        .iconPalIndex = 0,
        SHADOW(1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Zoroark)
        OVERWORLD(
            sPicTable_Zoroark,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zoroark,
            gShinyOverworldPalette_Zoroark
        )
        .levelUpLearnset = sZoroarkLevelUpLearnset,
        .teachableLearnset = sZoroarkTeachableLearnset,
        .formSpeciesIdTable = sZoroarkFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_ZORUA_HISUI] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GHOST),
        .catchRate = 75,
        .expYield = 66,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ILLUSION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zorua"),
        .cryId = CRY_ZORUA,
        .natDexNum = NATIONAL_DEX_ZORUA,
        .categoryName = _("Zorro rencor"),
        .height = 7,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Deriva poder del resentimiento,\n"
            "que surge como energía en su cabeza y\n"
            "asume las formas de sus rivales. De esta\n"
            "forma, libera la mala voluntad que queda."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ZoruaHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ZoruaHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZoruaHisui,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZoruaHisui,
        .shinyPalette = gMonShinyPalette_ZoruaHisui,
        .iconSprite = gMonIcon_ZoruaHisui,
        .iconPalIndex = 0,
        SHADOW(2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Zorua)
        OVERWORLD(
            sPicTable_ZoruaHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZoruaHisui,
            gShinyOverworldPalette_ZoruaHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sZoruaHisuiLevelUpLearnset,
        .teachableLearnset = sZoruaHisuiTeachableLearnset,
        .formSpeciesIdTable = sZoruaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ZOROARK_HISUI}),
    },

    [SPECIES_ZOROARK_HISUI] =
    {
        .baseHP        = 55,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 125,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 179,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ILLUSION, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zoroark"),
        .cryId = CRY_ZOROARK,
        .natDexNum = NATIONAL_DEX_ZOROARK,
        .categoryName = _("Maldizorro"),
        .height = 16,
        .weight = 730,
        .description = COMPOUND_STRING(
            "Sin preocuparse por su propia seguridad,\n"
            "ataca a sus rivales con una energía\n"
            "tan amarga que llega a lacerar el\n"
            "propio cuerpo de Zoroark."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_ZoroarkHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ZoroarkHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZoroarkHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZoroarkHisui,
        .shinyPalette = gMonShinyPalette_ZoroarkHisui,
        .iconSprite = gMonIcon_ZoroarkHisui,
        .iconPalIndex = 0,
        SHADOW(11, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zoroark)
        OVERWORLD(
            sPicTable_ZoroarkHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZoroarkHisui,
            gShinyOverworldPalette_ZoroarkHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sZoroarkHisuiLevelUpLearnset,
        .teachableLearnset = sZoroarkHisuiTeachableLearnset,
        .formSpeciesIdTable = sZoroarkFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
    [SPECIES_MINCCINO] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_TECHNICIAN, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Minccino"),
        .cryId = CRY_MINCCINO,
        .natDexNum = NATIONAL_DEX_MINCCINO,
        .categoryName = _("Chinchilla"),
        .height = 4,
        .weight = 58,
		.description = COMPOUND_STRING(
			"Se saludan haciéndose mimos con la\n"
			"cola. Por eso, se acicalan con esmero\n"
			"para que su cola esté siempre limpia\n"
			"y arreglada."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Minccino,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Minccino,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Minccino,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Minccino,
        .shinyPalette = gMonShinyPalette_Minccino,
        .iconSprite = gMonIcon_Minccino,
        .iconPalIndex = 0,
        SHADOW(-3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Minccino)
        OVERWORLD(
            sPicTable_Minccino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Minccino,
            gShinyOverworldPalette_Minccino
        )
        .levelUpLearnset = sMinccinoLevelUpLearnset,
        .teachableLearnset = sMinccinoTeachableLearnset,
        .eggMoveLearnset = sMinccinoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_CINCCINO}),
    },

    [SPECIES_CINCCINO] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 60,
        .expYield = 165,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_TECHNICIAN, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Cinccino"),
        .cryId = CRY_CINCCINO,
        .natDexNum = NATIONAL_DEX_CINCCINO,
        .categoryName = _("Estola"),
        .height = 5,
        .weight = 75,
		.description = COMPOUND_STRING(
			"Su pelaje blanco está recubierto por una\n"
			"grasa especial que hace resbalar los\n"
			"ataques enemigos."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cinccino,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Cinccino,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Cinccino,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Cinccino,
        .shinyPalette = gMonShinyPalette_Cinccino,
        .iconSprite = gMonIcon_Cinccino,
        .iconPalIndex = 0,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Cinccino)
        OVERWORLD(
            sPicTable_Cinccino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cinccino,
            gShinyOverworldPalette_Cinccino
        )
        .levelUpLearnset = sCinccinoLevelUpLearnset,
        .teachableLearnset = sCinccinoTeachableLearnset,
    },
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
    [SPECIES_GOTHITA] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 200,
        .expYield = 58,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG },
    #else
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_SHADOW_TAG },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gothita"),
        .cryId = CRY_GOTHITA,
        .natDexNum = NATIONAL_DEX_GOTHITA,
        .categoryName = _("Inquisitivo"),
        .height = 4,
        .weight = 58,
		.description = COMPOUND_STRING(
			"Amplifica su poder psíquico con sus\n"
			"antenitas en forma de lazos. Siempre\n"
			"esta mirando algo fijamente."),
        .pokemonScale = 491,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gothita,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Gothita,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Gothita,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Gothita,
        .shinyPalette = gMonShinyPalette_Gothita,
        .iconSprite = gMonIcon_Gothita,
        .iconPalIndex = 2,
        SHADOW(-3, 2, SHADOW_SIZE_S)
        FOOTPRINT(Gothita)
        OVERWORLD(
            sPicTable_Gothita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gothita,
            gShinyOverworldPalette_Gothita
        )
        .levelUpLearnset = sGothitaLevelUpLearnset,
        .teachableLearnset = sGothitaTeachableLearnset,
        .eggMoveLearnset = sGothitaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GOTHORITA}),
    },

    [SPECIES_GOTHORITA] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 70,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 100,
        .expYield = 137,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG },
    #else
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_SHADOW_TAG },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gothorita"),
        .cryId = CRY_GOTHORITA,
        .natDexNum = NATIONAL_DEX_GOTHORITA,
        .categoryName = _("Manipulador"),
        .height = 7,
        .weight = 180,
		.description = COMPOUND_STRING(
			"La luz de las estrellas origina su poder.\n"
			"De noche, marca su posición haciendo\n"
			"levitar piedras con su poder psíquico."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gothorita,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Gothorita,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gothorita,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gothorita,
        .shinyPalette = gMonShinyPalette_Gothorita,
        .iconSprite = gMonIcon_Gothorita,
        .iconPalIndex = 2,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Gothorita)
        OVERWORLD(
            sPicTable_Gothorita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gothorita,
            gShinyOverworldPalette_Gothorita
        )
        .levelUpLearnset = sGothoritaLevelUpLearnset,
        .teachableLearnset = sGothoritaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 41, SPECIES_GOTHITELLE}),
    },

    [SPECIES_GOTHITELLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 50,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 245 : 221,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG },
    #else
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_SHADOW_TAG },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gothitelle"),
        .cryId = CRY_GOTHITELLE,
        .natDexNum = NATIONAL_DEX_GOTHITELLE,
        .categoryName = _("Astro"),
        .height = 15,
        .weight = 440,
		.description = COMPOUND_STRING(
			"Su inmenso poder psíquico distorsiona\n"
			"el espacio y le permite reflejar incluso\n"
			"estrellas a años luz de distancia."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gothitelle,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gothitelle,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Gothitelle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Gothitelle,
        .shinyPalette = gMonShinyPalette_Gothitelle,
        .iconSprite = gMonIcon_Gothitelle,
        .iconPalIndex = 2,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gothitelle)
        OVERWORLD(
            sPicTable_Gothitelle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gothitelle,
            gShinyOverworldPalette_Gothitelle
        )
        .levelUpLearnset = sGothitelleLevelUpLearnset,
        .teachableLearnset = sGothitelleTeachableLearnset,
    },
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_SOLOSIS
    [SPECIES_SOLOSIS] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 105,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 200,
        .expYield = 58,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Solosis"),
        .cryId = CRY_SOLOSIS,
        .natDexNum = NATIONAL_DEX_SOLOSIS,
        .categoryName = _("Célula"),
        .height = 3,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Desata su poder psíquico para ahuyentar\n"
			"enemigos. Se comunica con sus compañeros\n"
			"por telepatía."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Solosis,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Solosis,
        .frontAnimId = ANIM_TWIST,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Solosis,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Solosis,
        .shinyPalette = gMonShinyPalette_Solosis,
        .iconSprite = gMonIcon_Solosis,
        .iconPalIndex = 1,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Solosis)
        OVERWORLD(
            sPicTable_Solosis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Solosis,
            gShinyOverworldPalette_Solosis
        )
        .levelUpLearnset = sSolosisLevelUpLearnset,
        .teachableLearnset = sSolosisTeachableLearnset,
        .eggMoveLearnset = sSolosisEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DUOSION}),
    },

    [SPECIES_DUOSION] =
    {
        .baseHP        = 65,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 125,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 100,
        .expYield = 130,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Duosion"),
        .cryId = CRY_DUOSION,
        .natDexNum = NATIONAL_DEX_DUOSION,
        .categoryName = _("Mitosis"),
        .height = 6,
        .weight = 80,
		.description = COMPOUND_STRING(
			"Dado que su cerebro está dividido en dos,\n"
			"a veces tiene conflictos a la hora de\n"
			"decidir qué hacer."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Duosion,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Duosion,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Duosion,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Duosion,
        .shinyPalette = gMonShinyPalette_Duosion,
        .iconSprite = gMonIcon_Duosion,
        .iconPalIndex = 1,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Duosion)
        OVERWORLD(
            sPicTable_Duosion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Duosion,
            gShinyOverworldPalette_Duosion
        )
        .levelUpLearnset = sDuosionLevelUpLearnset,
        .teachableLearnset = sDuosionTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 41, SPECIES_REUNICLUS}),
    },

    [SPECIES_REUNICLUS] =
    {
        .baseHP        = 110,
        .baseAttack    = 65,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 50,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 245 : 221,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Reuniclus"),
        .cryId = CRY_REUNICLUS,
        .natDexNum = NATIONAL_DEX_REUNICLUS,
        .categoryName = _("Ampliación"),
        .height = 10,
        .weight = 201,
		.description = COMPOUND_STRING(
			"La fortaleza de sus brazos le permite\n"
			"hacer añicos hasta rocas. Está dotado\n"
			"de una inteligencia superior."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Reuniclus,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Reuniclus,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Reuniclus,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Reuniclus,
        .shinyPalette = gMonShinyPalette_Reuniclus,
        .iconSprite = gMonIcon_Reuniclus,
        .iconPalIndex = 1,
        SHADOW(0, 8, SHADOW_SIZE_M)
        FOOTPRINT(Reuniclus)
        OVERWORLD(
            sPicTable_Reuniclus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Reuniclus,
            gShinyOverworldPalette_Reuniclus
        )
        .levelUpLearnset = sReuniclusLevelUpLearnset,
        .teachableLearnset = sReuniclusTeachableLearnset,
    },
#endif //P_FAMILY_SOLOSIS

#if P_FAMILY_DUCKLETT
    [SPECIES_DUCKLETT] =
    {
        .baseHP        = 62,
        .baseAttack    = 44,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 44,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 190,
        .expYield = 61,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_BIG_PECKS, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ducklett"),
        .cryId = CRY_DUCKLETT,
        .natDexNum = NATIONAL_DEX_DUCKLETT,
        .categoryName = _("Ave agua"),
        .height = 5,
        .weight = 55,
		.description = COMPOUND_STRING(
			"Cuando se ve atacado, las plumas que\n"
			"lo recubren despiden ráfagas de agua que\n"
			"lo ayudan a escapar."),
        .pokemonScale = 432,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ducklett,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Ducklett,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Ducklett,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Ducklett,
        .shinyPalette = gMonShinyPalette_Ducklett,
        .iconSprite = gMonIcon_Ducklett,
        .iconPalIndex = 0,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Ducklett)
        OVERWORLD(
            sPicTable_Ducklett,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ducklett,
            gShinyOverworldPalette_Ducklett
        )
        .levelUpLearnset = sDucklettLevelUpLearnset,
        .teachableLearnset = sDucklettTeachableLearnset,
        .eggMoveLearnset = sDucklettEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_SWANNA}),
    },

    [SPECIES_SWANNA] =
    {
        .baseHP        = 75,
        .baseAttack    = 87,
        .baseDefense   = 63,
        .baseSpeed     = 98,
        .baseSpAttack  = 87,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 166,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_BIG_PECKS, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Swanna"),
        .cryId = CRY_SWANNA,
        .natDexNum = NATIONAL_DEX_SWANNA,
        .categoryName = _("Cisne"),
        .height = 13,
        .weight = 242,
		.description = COMPOUND_STRING(
			"La potencia de su pico es brutal.\n"
			"Arquea su largo cuello y picotea\n"
			"repetidamente al enemigo."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swanna,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Swanna,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Swanna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Swanna,
        .shinyPalette = gMonShinyPalette_Swanna,
        .iconSprite = gMonIcon_Swanna,
        .iconPalIndex = 2,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Swanna)
        OVERWORLD(
            sPicTable_Swanna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Swanna,
            gShinyOverworldPalette_Swanna
        )
        .levelUpLearnset = sSwannaLevelUpLearnset,
        .teachableLearnset = sSwannaTeachableLearnset,
    },
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
    [SPECIES_VANILLITE] =
    {
        .baseHP        = 36,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 44,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 255,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_ICE_BODY, ABILITY_SNOW_CLOAK, ABILITY_WEAK_ARMOR },
    #else
        .abilities = { ABILITY_ICE_BODY, ABILITY_NONE, ABILITY_WEAK_ARMOR },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vanillite"),
        .cryId = CRY_VANILLITE,
        .natDexNum = NATIONAL_DEX_VANILLITE,
        .categoryName = _("Nieve fresca"),
        .height = 4,
        .weight = 57,
		.description = COMPOUND_STRING(
			"Nació de un carámbano que absorbió la\n"
			"energía del sol al alba. Duerme arropado\n"
			"por la nieve."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vanillite,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Vanillite,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Vanillite,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Vanillite,
        .shinyPalette = gMonShinyPalette_Vanillite,
        .iconSprite = gMonIcon_Vanillite,
        .iconPalIndex = 0,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Vanillite)
        OVERWORLD(
            sPicTable_Vanillite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vanillite,
            gShinyOverworldPalette_Vanillite
        )
        .levelUpLearnset = sVanilliteLevelUpLearnset,
        .teachableLearnset = sVanilliteTeachableLearnset,
        .eggMoveLearnset = sVanilliteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_VANILLISH}),
    },

    [SPECIES_VANILLISH] =
    {
        .baseHP        = 51,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 59,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_ICE_BODY, ABILITY_SNOW_CLOAK, ABILITY_WEAK_ARMOR },
    #else
        .abilities = { ABILITY_ICE_BODY, ABILITY_NONE, ABILITY_WEAK_ARMOR },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vanillish"),
        .cryId = CRY_VANILLISH,
        .natDexNum = NATIONAL_DEX_VANILLISH,
        .categoryName = _("Nievehelada"),
        .height = 11,
        .weight = 410,
		.description = COMPOUND_STRING(
			"Enfrían el aire a su alrededor y crean\n"
			"partículas de hielo mediante las cuales\n"
			"congelan a sus oponentes."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vanillish,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Vanillish,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Vanillish,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Vanillish,
        .shinyPalette = gMonShinyPalette_Vanillish,
        .iconSprite = gMonIcon_Vanillish,
        .iconPalIndex = 2,
        SHADOW(-3, 9, SHADOW_SIZE_S)
        FOOTPRINT(Vanillish)
        OVERWORLD(
            sPicTable_Vanillish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vanillish,
            gShinyOverworldPalette_Vanillish
        )
        .levelUpLearnset = sVanillishLevelUpLearnset,
        .teachableLearnset = sVanillishTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 47, SPECIES_VANILLUXE}),
    },

    [SPECIES_VANILLUXE] =
    {
        .baseHP        = 71,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 79,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 268 : 241,
        .evYield_SpAttack = 3,
        .itemCommon = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_ICE_BODY, ABILITY_SNOW_WARNING, ABILITY_WEAK_ARMOR },
    #else
        .abilities = { ABILITY_ICE_BODY, ABILITY_NONE, ABILITY_WEAK_ARMOR },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vanilluxe"),
        .cryId = CRY_VANILLUXE,
        .natDexNum = NATIONAL_DEX_VANILLUXE,
        .categoryName = _("Nievegélida"),
        .height = 13,
        .weight = 575,
		.description = COMPOUND_STRING(
			"Bebe cantidades ingentes de agua y\n"
			"crea nubes cargadas de nieve para lanzar\n"
			"ventiscas a sus oponentes."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vanilluxe,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Vanilluxe,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Vanilluxe,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Vanilluxe,
        .shinyPalette = gMonShinyPalette_Vanilluxe,
        .iconSprite = gMonIcon_Vanilluxe,
        .iconPalIndex = 2,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Vanilluxe)
        OVERWORLD(
            sPicTable_Vanilluxe,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vanilluxe,
            gShinyOverworldPalette_Vanilluxe
        )
        .levelUpLearnset = sVanilluxeLevelUpLearnset,
        .teachableLearnset = sVanilluxeTeachableLearnset,
    },
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_DEERLING
    [SPECIES_DEERLING_SPRING] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 190,
        .expYield = 67,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Estacional"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Los Deerling tienen diferentes aromas\n"
            "en base a la estación. En la\n"
            "primavera temprana, emiten un\n"
            "aroma delicado, dulce y calmante."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_DeerlingSpring,
        .shinyPalette = gMonShinyPalette_DeerlingSpring,
        .iconSprite = gMonIcon_DeerlingSpring,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingSpring,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeerlingSpring,
            gShinyOverworldPalette_DeerlingSpring
        )
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .formSpeciesIdTable = sDeerlingFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SAWSBUCK_SPRING}),
    },

    [SPECIES_DEERLING_SUMMER] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 190,
        .expYield = 67,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Estacional"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Para evitar que Deerling entre,\n"
            "muchos granjeros colocan varios\n"
            "Lycanroc para que estén de guardia,\n"
            "ya que son sus enemigos naturales."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_DeerlingSummer,
        .shinyPalette = gMonShinyPalette_DeerlingSummer,
        .iconSprite = gMonIcon_DeerlingSummer,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingSummer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeerlingSummer,
            gShinyOverworldPalette_DeerlingSummer
        )
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .formSpeciesIdTable = sDeerlingFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SAWSBUCK_SUMMER}),
    },

    [SPECIES_DEERLING_AUTUMN] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 190,
        .expYield = 67,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Estacional"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Deerling tiene diferentes olores\n"
            "dependiendo de la estación. En esta forma,\n"
            "Deerling tiene un aroma suavemente dulce\n"
            "que persiste en la nariz."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_DeerlingAutumn,
        .shinyPalette = gMonShinyPalette_DeerlingAutumn,
        .iconSprite = gMonIcon_DeerlingAutumn,
        .iconPalIndex = 0,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingAutumn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeerlingAutumn,
            gShinyOverworldPalette_DeerlingAutumn
        )
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .formSpeciesIdTable = sDeerlingFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SAWSBUCK_AUTUMN}),
    },

    [SPECIES_DEERLING_WINTER] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 190,
        .expYield = 67,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Estacional"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "El aroma de Deerling cambia con las\n"
            "estaciones, pero cuando el Pokémon está\n"
            "en su Forma de Invierno, casi no tiene\n"
            "aroma en absoluto."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_DeerlingWinter,
        .shinyPalette = gMonShinyPalette_DeerlingWinter,
        .iconSprite = gMonIcon_DeerlingWinter,
        .iconPalIndex = 2,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingWinter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DeerlingWinter,
            gShinyOverworldPalette_DeerlingWinter
        )
        .levelUpLearnset = sDeerlingLevelUpLearnset,
        .teachableLearnset = sDeerlingTeachableLearnset,
        .eggMoveLearnset = sDeerlingEggMoveLearnset,
        .formSpeciesIdTable = sDeerlingFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_SAWSBUCK_WINTER}),
    },

    [SPECIES_SAWSBUCK_SPRING] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 75,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Estacional"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "Lo llaman el presagio de primavera\n"
            "porque las plantas de sus cuernos\n"
            "cambian según la estación. El líder\n"
            "posee los cuernos más grandes."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_SawsbuckSpring,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckSpring,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_SawsbuckSpring,
        .shinyPalette = gMonShinyPalette_SawsbuckSpring,
        .iconSprite = gMonIcon_SawsbuckSpring,
        .iconPalIndex = 1,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckSpring,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SawsbuckSpring,
            gShinyOverworldPalette_SawsbuckSpring
        )
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .formSpeciesIdTable = sSawsbuckFormSpeciesIdTable,
    },

    [SPECIES_SAWSBUCK_SUMMER] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 75,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Estacional"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "Cuanto más gruesas y grandes son las\n"
            "ramas y hojas en sus cuernos, más majestuoso\n"
            "se considera que es Sawsbuck."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_SawsbuckSummer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckSummer,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_SawsbuckSummer,
        .shinyPalette = gMonShinyPalette_SawsbuckSummer,
        .iconSprite = gMonIcon_SawsbuckSummer,
        .iconPalIndex = 1,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckSummer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SawsbuckSummer,
            gShinyOverworldPalette_SawsbuckSummer
        )
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .formSpeciesIdTable = sSawsbuckFormSpeciesIdTable,
    },

    [SPECIES_SAWSBUCK_AUTUMN] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 75,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Estacional"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "Sawsbuck en su Forma Otoñal son\n"
            "conocidos por tener un temperamento\n"
            "muy corto. Los machos se pelean\n"
            "incesantemente."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_SawsbuckAutumn,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckAutumn,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_SawsbuckAutumn,
        .shinyPalette = gMonShinyPalette_SawsbuckAutumn,
        .iconSprite = gMonIcon_SawsbuckAutumn,
        .iconPalIndex = 1,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckAutumn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SawsbuckAutumn,
            gShinyOverworldPalette_SawsbuckAutumn
        )
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .formSpeciesIdTable = sSawsbuckFormSpeciesIdTable,
    },

    [SPECIES_SAWSBUCK_WINTER] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 75,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Estacional"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "Aunque hay muchos entusiastas de\n"
            "Sawsbuck como especie, esta forma\n"
            "estacional en particular no es\n"
            "muy popular."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_SawsbuckWinter,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckWinter,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_SawsbuckWinter,
        .shinyPalette = gMonShinyPalette_SawsbuckWinter,
        .iconSprite = gMonIcon_SawsbuckWinter,
        .iconPalIndex = 1,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckWinter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SawsbuckWinter,
            gShinyOverworldPalette_SawsbuckWinter
        )
        .levelUpLearnset = sSawsbuckLevelUpLearnset,
        .teachableLearnset = sSawsbuckTeachableLearnset,
        .formSpeciesIdTable = sSawsbuckFormSpeciesIdTable,
    },

#endif //P_FAMILY_DEERLING

#if P_FAMILY_EMOLGA
    [SPECIES_EMOLGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 103,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 200,
        .expYield = 150,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_MOTOR_DRIVE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Emolga"),
        .cryId = CRY_EMOLGA,
        .natDexNum = NATIONAL_DEX_EMOLGA,
        .categoryName = _("Vuelardilla"),
        .height = 4,
        .weight = 50,
		.description = COMPOUND_STRING(
			"Almacena en una membrana la electricidad\n"
			"generada por sus mejillas y planea\n"
			"por los aires soltando descargas."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Emolga,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Emolga,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .enemyMonElevation = 19,
        .backPic = gMonBackPic_Emolga,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Emolga,
        .shinyPalette = gMonShinyPalette_Emolga,
        .iconSprite = gMonIcon_Emolga,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Emolga)
        OVERWORLD(
            sPicTable_Emolga,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Emolga,
            gShinyOverworldPalette_Emolga
        )
        .levelUpLearnset = sEmolgaLevelUpLearnset,
        .teachableLearnset = sEmolgaTeachableLearnset,
        .eggMoveLearnset = sEmolgaEggMoveLearnset,
    },
#endif //P_FAMILY_EMOLGA

#if P_FAMILY_KARRABLAST
    [SPECIES_KARRABLAST] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 200,
        .expYield = 63,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_SHED_SKIN, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Karrablast"),
        .cryId = CRY_KARRABLAST,
        .natDexNum = NATIONAL_DEX_KARRABLAST,
        .categoryName = _("Bocado"),
        .height = 5,
        .weight = 59,
		.description = COMPOUND_STRING(
			"Si recibe una descarga eléctrica durante\n"
			"un combate contra un Shelmet, puede\n"
			"evolucionar. Se desconoce el porqué."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Karrablast,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Karrablast,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Karrablast,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Karrablast,
        .shinyPalette = gMonShinyPalette_Karrablast,
        .iconSprite = gMonIcon_Karrablast,
        .iconPalIndex = 0,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Karrablast)
        OVERWORLD(
            sPicTable_Karrablast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Karrablast,
            gShinyOverworldPalette_Karrablast
        )
        .levelUpLearnset = sKarrablastLevelUpLearnset,
        .teachableLearnset = sKarrablastTeachableLearnset,
        .eggMoveLearnset = sKarrablastEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_SPECIFIC_MON, SPECIES_SHELMET, SPECIES_ESCAVALIER}),
    },

    [SPECIES_ESCAVALIER] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 105,
        .baseSpeed     = 20,
        .baseSpAttack  = 60,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 75,
        .expYield = 173,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_SHELL_ARMOR, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Escavalier"),
        .cryId = CRY_ESCAVALIER,
        .natDexNum = NATIONAL_DEX_ESCAVALIER,
        .categoryName = _("Soldado"),
        .height = 10,
        .weight = 330,
		.description = COMPOUND_STRING(
			"Se defiende de los ataques con el\n"
			"caparazón que roba a los Shelmet. Atacan\n"
			"con sus dos mortíferas lanzas."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Escavalier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Escavalier,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Escavalier,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Escavalier,
        .shinyPalette = gMonShinyPalette_Escavalier,
        .iconSprite = gMonIcon_Escavalier,
        .iconPalIndex = 0,
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Escavalier)
        OVERWORLD(
            sPicTable_Escavalier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Escavalier,
            gShinyOverworldPalette_Escavalier
        )
        .levelUpLearnset = sEscavalierLevelUpLearnset,
        .teachableLearnset = sEscavalierTeachableLearnset,
    },
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_FOONGUS
    [SPECIES_FOONGUS] =
    {
        .baseHP        = 69,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 190,
        .expYield = 59,
        .evYield_HP = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Foongus"),
        .cryId = CRY_FOONGUS,
        .natDexNum = NATIONAL_DEX_FOONGUS,
        .categoryName = _("Hongo"),
        .height = 2,
        .weight = 10,
		.description = COMPOUND_STRING(
			"Por razones desconocidas, se parece a\n"
			"una Poké Ball. Lanza esporas de veneno\n"
			"para repeler al enemigo."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Foongus,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Foongus,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Foongus,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Foongus,
        .shinyPalette = gMonShinyPalette_Foongus,
        .iconSprite = gMonIcon_Foongus,
        .iconPalIndex = 0,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Foongus)
        OVERWORLD(
            sPicTable_Foongus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Foongus,
            gShinyOverworldPalette_Foongus
        )
        .levelUpLearnset = sFoongusLevelUpLearnset,
        .teachableLearnset = sFoongusTeachableLearnset,
        .eggMoveLearnset = sFoongusEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_AMOONGUSS}),
    },

    [SPECIES_AMOONGUSS] =
    {
        .baseHP        = 114,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 85,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 75,
        .expYield = 162,
        .evYield_HP = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Amoonguss"),
        .cryId = CRY_AMOONGUSS,
        .natDexNum = NATIONAL_DEX_AMOONGUSS,
        .categoryName = _("Hongo"),
        .height = 6,
        .weight = 105,
		.description = COMPOUND_STRING(
			"Baila meciendo rítmicamente los dos\n"
			"brazos a modo de Poké Ball para hacer\n"
			"que sus presas se acerquen."),
        .pokemonScale = 422,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Amoonguss,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Amoonguss,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Amoonguss,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Amoonguss,
        .shinyPalette = gMonShinyPalette_Amoonguss,
        .iconSprite = gMonIcon_Amoonguss,
        .iconPalIndex = 1,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Amoonguss)
        OVERWORLD(
            sPicTable_Amoonguss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Amoonguss,
            gShinyOverworldPalette_Amoonguss
        )
        .levelUpLearnset = sAmoongussLevelUpLearnset,
        .teachableLearnset = sAmoongussTeachableLearnset,
    },
#endif //P_FAMILY_FOONGUS

#if P_FAMILY_FRILLISH
    [SPECIES_FRILLISH] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_WATER, TYPE_GHOST),
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Frillish"),
        .cryId = CRY_FRILLISH,
        .natDexNum = NATIONAL_DEX_FRILLISH,
        .categoryName = _("Ingrávido"),
        .height = 12,
        .weight = 330,
		.description = COMPOUND_STRING(
			"Se escabulle al fondo del mar una vez\n"
			"que atrapa fuertemente a su rival con\n"
			"unos tentáculos semejantes a velos."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frillish,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Frillish,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Frillish,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Frillish,
        .shinyPalette = gMonShinyPalette_Frillish,
        .iconSprite = gMonIcon_Frillish,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_FrillishF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_FrillishF,
        .backPicSizeFemale = MON_COORDS_SIZE(40, 56),
        .paletteFemale = gMonPalette_FrillishF,
        .shinyPaletteFemale = gMonShinyPalette_FrillishF,
        .iconSpriteFemale = gMonIcon_FrillishF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Frillish)
        OVERWORLD(
            sPicTable_Frillish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Frillish,
            gShinyOverworldPalette_Frillish
        )
        OVERWORLD_FEMALE(
            sPicTable_FrillishF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_FrillishF,
            gShinyOverworldPalette_FrillishF
        )
        .levelUpLearnset = sFrillishLevelUpLearnset,
        .teachableLearnset = sFrillishTeachableLearnset,
        .eggMoveLearnset = sFrillishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_JELLICENT}),
    },

    [SPECIES_JELLICENT] =
    {
        .baseHP        = 100,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_WATER, TYPE_GHOST),
        .catchRate = 60,
        .expYield = 168,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Jellicent"),
        .cryId = CRY_JELLICENT,
        .natDexNum = NATIONAL_DEX_JELLICENT,
        .categoryName = _("Ingrávido"),
        .height = 22,
        .weight = 1350,
		.description = COMPOUND_STRING(
			"Avanza expulsando violentamente el agua\n"
			"de mar absorbida anteriormente.\n"
			"Le encanta la energía vital."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Jellicent,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Jellicent,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Jellicent,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Jellicent,
        .shinyPalette = gMonShinyPalette_Jellicent,
        .iconSprite = gMonIcon_Jellicent,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_JellicentF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_JellicentF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .paletteFemale = gMonPalette_JellicentF,
        .shinyPaletteFemale = gMonShinyPalette_JellicentF,
        .iconSpriteFemale = gMonIcon_JellicentF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Jellicent)
        OVERWORLD(
            sPicTable_Jellicent,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jellicent,
            gShinyOverworldPalette_Jellicent
        )
        OVERWORLD_FEMALE(
            sPicTable_JellicentF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_JellicentF,
            gShinyOverworldPalette_JellicentF
        )
        .levelUpLearnset = sJellicentLevelUpLearnset,
        .teachableLearnset = sJellicentTeachableLearnset,
    },
#endif //P_FAMILY_FRILLISH

#if P_FAMILY_ALOMOMOLA
    [SPECIES_ALOMOMOLA] =
    {
        .baseHP        = 165,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_HEALER, ABILITY_HYDRATION, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Alomomola"),
        .cryId = CRY_ALOMOMOLA,
        .natDexNum = NATIONAL_DEX_ALOMOMOLA,
        .categoryName = _("Socorrista"),
        .height = 12,
        .weight = 316,
		.description = COMPOUND_STRING(
			"La membrana viscosa que recubre\n"
			"el cuerpo de Alomomola tiene facultades\n"
			"curativas, por lo que mola."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Alomomola,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Alomomola,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Alomomola,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Alomomola,
        .shinyPalette = gMonShinyPalette_Alomomola,
        .iconSprite = gMonIcon_Alomomola,
        .iconPalIndex = 0,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Alomomola)
        OVERWORLD(
            sPicTable_Alomomola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Alomomola,
            gShinyOverworldPalette_Alomomola
        )
        .levelUpLearnset = sAlomomolaLevelUpLearnset,
        .teachableLearnset = sAlomomolaTeachableLearnset,
        .eggMoveLearnset = sAlomomolaEggMoveLearnset,
    },
#endif //P_FAMILY_ALOMOMOLA

#if P_FAMILY_JOLTIK
    [SPECIES_JOLTIK] =
    {
        .baseHP        = 50,
        .baseAttack    = 47,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 57,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = 64,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_UNNERVE, ABILITY_SWARM },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Joltik"),
        .cryId = CRY_JOLTIK,
        .natDexNum = NATIONAL_DEX_JOLTIK,
        .categoryName = _("Lapa"),
        .height = 1,
        .weight = 6,
		.description = COMPOUND_STRING(
			"Los que viven en las ciudades saben\n"
			"absorber electricidad de los enchufes\n"
			"de las casas particulares."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Joltik,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Joltik,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Joltik,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Joltik,
        .shinyPalette = gMonShinyPalette_Joltik,
        .iconSprite = gMonIcon_Joltik,
        .iconPalIndex = 0,
        SHADOW(0, -5, SHADOW_SIZE_S)
        FOOTPRINT(Joltik)
        OVERWORLD(
            sPicTable_Joltik,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Joltik,
            gShinyOverworldPalette_Joltik
        )
        .levelUpLearnset = sJoltikLevelUpLearnset,
        .teachableLearnset = sJoltikTeachableLearnset,
        .eggMoveLearnset = sJoltikEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GALVANTULA}),
    },

    [SPECIES_GALVANTULA] =
    {
        .baseHP        = 70,
        .baseAttack    = 77,
        .baseDefense   = 60,
        .baseSpeed     = 108,
        .baseSpAttack  = 97,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_BUG, TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_UNNERVE, ABILITY_SWARM },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Galvantula"),
        .cryId = CRY_GALVANTULA,
        .natDexNum = NATIONAL_DEX_GALVANTULA,
        .categoryName = _("Electroaraña"),
        .height = 8,
        .weight = 143,
		.description = COMPOUND_STRING(
			"Pone trampas con hilos electrificados.\n"
			"De este modo, electrocuta a sus enemigos\n"
			"y los inmoviliza por completo."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Galvantula,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Galvantula,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Galvantula,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Galvantula,
        .shinyPalette = gMonShinyPalette_Galvantula,
        .iconSprite = gMonIcon_Galvantula,
        .iconPalIndex = 2,
        SHADOW(0, -2, SHADOW_SIZE_L)
        FOOTPRINT(Galvantula)
        OVERWORLD(
            sPicTable_Galvantula,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Galvantula,
            gShinyOverworldPalette_Galvantula
        )
        .levelUpLearnset = sGalvantulaLevelUpLearnset,
        .teachableLearnset = sGalvantulaTeachableLearnset,
    },
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
    [SPECIES_FERROSEED] =
    {
        .baseHP        = 44,
        .baseAttack    = 50,
        .baseDefense   = 91,
        .baseSpeed     = 10,
        .baseSpAttack  = 24,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_GRASS, TYPE_STEEL),
        .catchRate = 255,
        .expYield = 61,
        .evYield_Defense = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_IRON_BARBS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ferroseed"),
        .cryId = CRY_FERROSEED,
        .natDexNum = NATIONAL_DEX_FERROSEED,
        .categoryName = _("Frutoespina"),
        .height = 6,
        .weight = 188,
		.description = COMPOUND_STRING(
			"Tiene por costumbre estampar sus púas\n"
			"en las paredes de cuevas.\n"
			"Absorbe los minerales de las rocas."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ferroseed,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Ferroseed,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Ferroseed,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Ferroseed,
        .shinyPalette = gMonShinyPalette_Ferroseed,
        .iconSprite = gMonIcon_Ferroseed,
        .iconPalIndex = 1,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Ferroseed)
        OVERWORLD(
            sPicTable_Ferroseed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ferroseed,
            gShinyOverworldPalette_Ferroseed
        )
        .levelUpLearnset = sFerroseedLevelUpLearnset,
        .teachableLearnset = sFerroseedTeachableLearnset,
        .eggMoveLearnset = sFerroseedEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_FERROTHORN}),
    },

    [SPECIES_FERROTHORN] =
    {
        .baseHP        = 74,
        .baseAttack    = 94,
        .baseDefense   = 131,
        .baseSpeed     = 20,
        .baseSpAttack  = 54,
        .baseSpDefense = 116,
        .types = MON_TYPES(TYPE_GRASS, TYPE_STEEL),
        .catchRate = 90,
        .expYield = 171,
        .evYield_Defense = 2,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_MINERAL),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_IRON_BARBS, ABILITY_NONE, ABILITY_ANTICIPATION },
    #else
        .abilities = { ABILITY_IRON_BARBS, ABILITY_NONE, ABILITY_NONE },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ferrothorn"),
        .cryId = CRY_FERROTHORN,
        .natDexNum = NATIONAL_DEX_FERROTHORN,
        .categoryName = _("Bolaespina"),
        .height = 10,
        .weight = 1100,
		.description = COMPOUND_STRING(
			"Azota al enemigo con sus tres tentáculos\n"
			"y después dispara púas hasta que no\n"
			"deja ni rastro del rival."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ferrothorn,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Ferrothorn,
        .frontAnimId = ANIM_V_SHAKE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Ferrothorn,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Ferrothorn,
        .shinyPalette = gMonShinyPalette_Ferrothorn,
        .iconSprite = gMonIcon_Ferrothorn,
        .iconPalIndex = 1,
        SHADOW(-2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Ferrothorn)
        OVERWORLD(
            sPicTable_Ferrothorn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ferrothorn,
            gShinyOverworldPalette_Ferrothorn
        )
        .levelUpLearnset = sFerrothornLevelUpLearnset,
        .teachableLearnset = sFerrothornTeachableLearnset,
    },
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_KLINK
    [SPECIES_KLINK] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 130,
        .expYield = 60,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Klink"),
        .cryId = CRY_KLINK,
        .natDexNum = NATIONAL_DEX_KLINK,
        .categoryName = _("Engranaje"),
        .height = 3,
        .weight = 210,
		.description = COMPOUND_STRING(
			"La configuración de sus dos cuerpos\n"
			"es predeterminada. Si no se corresponde\n"
			"con su homólogo, se separa."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klink,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Klink,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Klink,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Klink,
        .shinyPalette = gMonShinyPalette_Klink,
        .iconSprite = gMonIcon_Klink,
        .iconPalIndex = 0,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Klink)
        OVERWORLD(
            sPicTable_Klink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Klink,
            gShinyOverworldPalette_Klink
        )
        .levelUpLearnset = sKlinkLevelUpLearnset,
        .teachableLearnset = sKlinkTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_KLANG}),
    },

    [SPECIES_KLANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 60,
        .expYield = 154,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Klang"),
        .cryId = CRY_KLANG,
        .natDexNum = NATIONAL_DEX_KLANG,
        .categoryName = _("Engranaje"),
        .height = 6,
        .weight = 510,
		.description = COMPOUND_STRING(
			"Muestra sus sentimientos cambiando la\n"
			"dirección de su giro. Cuanto más se\n"
			"enfade, más rápido girará."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klang,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Klang,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Klang,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Klang,
        .shinyPalette = gMonShinyPalette_Klang,
        .iconSprite = gMonIcon_Klang,
        .iconPalIndex = 0,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Klang)
        OVERWORLD(
            sPicTable_Klang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Klang,
            gShinyOverworldPalette_Klang
        )
        .levelUpLearnset = sKlangLevelUpLearnset,
        .teachableLearnset = sKlangTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 49, SPECIES_KLINKLANG}),
    },

    [SPECIES_KLINKLANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 260 : 234,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Klinklang"),
        .cryId = CRY_KLINKLANG,
        .natDexNum = NATIONAL_DEX_KLINKLANG,
        .categoryName = _("Engranaje"),
        .height = 6,
        .weight = 810,
		.description = COMPOUND_STRING(
			"El núcleo rojo sirve como depósito de\n"
			"energía que expulsa por las púas una\n"
			"vez que está cargado."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klinklang,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Klinklang,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Klinklang,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Klinklang,
        .shinyPalette = gMonShinyPalette_Klinklang,
        .iconSprite = gMonIcon_Klinklang,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Klinklang)
        OVERWORLD(
            sPicTable_Klinklang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Klinklang,
            gShinyOverworldPalette_Klinklang
        )
        .levelUpLearnset = sKlinklangLevelUpLearnset,
        .teachableLearnset = sKlinklangTeachableLearnset,
    },
#endif //P_FAMILY_KLINK

#if P_FAMILY_TYNAMO
    [SPECIES_TYNAMO] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = 55,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tynamo"),
        .cryId = CRY_TYNAMO,
        .natDexNum = NATIONAL_DEX_TYNAMO,
        .categoryName = _("Electropez"),
        .height = 2,
        .weight = 3,
		.description = COMPOUND_STRING(
			"Actúa siempre en su cardumen.\n"
			"Cuenta con un mecanismo que genera\n"
			"electricidad cuando está en peligro."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tynamo,
        .frontPicSize = MON_COORDS_SIZE(40, 24),
        .frontPicYOffset = 22,
        .frontAnimFrames = sAnims_Tynamo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_Tynamo,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Tynamo,
        .shinyPalette = gMonShinyPalette_Tynamo,
        .iconSprite = gMonIcon_Tynamo,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Tynamo)
        OVERWORLD(
            sPicTable_Tynamo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tynamo,
            gShinyOverworldPalette_Tynamo
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sTynamoLevelUpLearnset,
        .teachableLearnset = sTynamoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_EELEKTRIK}),
    },

    [SPECIES_EELEKTRIK] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 60,
        .expYield = 142,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eelektrik"),
        .cryId = CRY_EELEKTRIK,
        .natDexNum = NATIONAL_DEX_EELEKTRIK,
        .categoryName = _("Electropez"),
        .height = 12,
        .weight = 220,
		.description = COMPOUND_STRING(
			"Las motas redondas componen su aparato\n"
			"electrificador. Enrolla a su rival y\n"
			"deja que la corriente fluya por ellas."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Eelektrik,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Eelektrik,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Eelektrik,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Eelektrik,
        .shinyPalette = gMonShinyPalette_Eelektrik,
        .iconSprite = gMonIcon_Eelektrik,
        .iconPalIndex = 0,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Eelektrik)
        OVERWORLD(
            sPicTable_Eelektrik,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eelektrik,
            gShinyOverworldPalette_Eelektrik
        )
        .levelUpLearnset = sEelektrikLevelUpLearnset,
        .teachableLearnset = sEelektrikTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_EELEKTROSS}),
    },

    [SPECIES_EELEKTROSS] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 258 : 232,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eelektross"),
        .cryId = CRY_EELEKTROSS,
        .natDexNum = NATIONAL_DEX_EELEKTROSS,
        .categoryName = _("Electropez"),
        .height = 21,
        .weight = 805,
		.description = COMPOUND_STRING(
			"Sale del mar con la fuerza de sus brazos\n"
			"y ataca a sus presas en la costa.\n"
			"Luego se las lleva de vuelta al mar."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Eelektross,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Eelektross,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Eelektross,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Eelektross,
        .shinyPalette = gMonShinyPalette_Eelektross,
        .iconSprite = gMonIcon_Eelektross,
        .iconPalIndex = 0,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Eelektross)
        OVERWORLD(
            sPicTable_Eelektross,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eelektross,
            gShinyOverworldPalette_Eelektross
        )
        .levelUpLearnset = sEelektrossLevelUpLearnset,
        .teachableLearnset = sEelektrossTeachableLearnset,
    },
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_ELGYEM
    [SPECIES_ELGYEM] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 85,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 255,
        .expYield = 67,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TELEPATHY, ABILITY_SYNCHRONIZE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Elgyem"),
        .cryId = CRY_ELGYEM,
        .natDexNum = NATIONAL_DEX_ELGYEM,
        .categoryName = _("Cerebro"),
        .height = 5,
        .weight = 90,
		.description = COMPOUND_STRING(
			"Apareció de la nada en un lejano\n"
			"desierto hace 50 años. Hasta entonces\n"
			"nadie lo había visto."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Elgyem,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Elgyem,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Elgyem,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Elgyem,
        .shinyPalette = gMonShinyPalette_Elgyem,
        .iconSprite = gMonIcon_Elgyem,
        .iconPalIndex = 0,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Elgyem)
        OVERWORLD(
            sPicTable_Elgyem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Elgyem,
            gShinyOverworldPalette_Elgyem
        )
        .levelUpLearnset = sElgyemLevelUpLearnset,
        .teachableLearnset = sElgyemTeachableLearnset,
        .eggMoveLearnset = sElgyemEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_BEHEEYEM}),
    },

    [SPECIES_BEHEEYEM] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 40,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 90,
        .expYield = 170,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TELEPATHY, ABILITY_SYNCHRONIZE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Beheeyem"),
        .cryId = CRY_BEHEEYEM,
        .natDexNum = NATIONAL_DEX_BEHEEYEM,
        .categoryName = _("Cerebro"),
        .height = 10,
        .weight = 345,
		.description = COMPOUND_STRING(
			"Parece que se comunica haciendo\n"
			"brillar sus dedos tricolores, pero\n"
			"nadie ha conseguido descifrarlo."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Beheeyem,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Beheeyem,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Beheeyem,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Beheeyem,
        .shinyPalette = gMonShinyPalette_Beheeyem,
        .iconSprite = gMonIcon_Beheeyem,
        .iconPalIndex = 2,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Beheeyem)
        OVERWORLD(
            sPicTable_Beheeyem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Beheeyem,
            gShinyOverworldPalette_Beheeyem
        )
        .levelUpLearnset = sBeheeyemLevelUpLearnset,
        .teachableLearnset = sBeheeyemTeachableLearnset,
    },
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
    [SPECIES_LITWICK] =
    {
        .baseHP        = 50,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 20,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FIRE),
        .catchRate = 190,
        .expYield = 55,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR },
    #else
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Litwick"),
        .cryId = CRY_LITWICK,
        .natDexNum = NATIONAL_DEX_LITWICK,
        .categoryName = _("Vela"),
        .height = 3,
        .weight = 31,
		.description = COMPOUND_STRING(
			"Finge ser una luz guía en el camino, pero\n"
			"en realidad solo quiere absorber la\n"
			"energía vital de quien lo sigue."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Litwick,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Litwick,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Litwick,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Litwick,
        .shinyPalette = gMonShinyPalette_Litwick,
        .iconSprite = gMonIcon_Litwick,
        .iconPalIndex = 2,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Litwick)
        OVERWORLD(
            sPicTable_Litwick,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Litwick,
            gShinyOverworldPalette_Litwick
        )
        .levelUpLearnset = sLitwickLevelUpLearnset,
        .teachableLearnset = sLitwickTeachableLearnset,
        .eggMoveLearnset = sLitwickEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 41, SPECIES_LAMPENT}),
    },

    [SPECIES_LAMPENT] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FIRE),
        .catchRate = 90,
        .expYield = 130,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR },
    #else
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Lampent"),
        .cryId = CRY_LAMPENT,
        .natDexNum = NATIONAL_DEX_LAMPENT,
        .categoryName = _("Farolillo"),
        .height = 6,
        .weight = 130,
		.description = COMPOUND_STRING(
			"Lo temen por ser considerado de mal\n"
			"agüero. Vaga en busca de almas de\n"
			"individuos que han pasado a mejor vida."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lampent,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Lampent,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Lampent,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Lampent,
        .shinyPalette = gMonShinyPalette_Lampent,
        .iconSprite = gMonIcon_Lampent,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Lampent)
        OVERWORLD(
            sPicTable_Lampent,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lampent,
            gShinyOverworldPalette_Lampent
        )
        .levelUpLearnset = sLampentLevelUpLearnset,
        .teachableLearnset = sLampentTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_CHANDELURE}),
    },

    [SPECIES_CHANDELURE] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 145,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 260 : 234,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR },
    #else
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chandelure"),
        .cryId = CRY_CHANDELURE,
        .natDexNum = NATIONAL_DEX_CHANDELURE,
        .categoryName = _("Señuelo"),
        .height = 10,
        .weight = 343,
		.description = COMPOUND_STRING(
			"Absorbe almas y las quema. Mece las\n"
			"llamas de sus brazos para hipnotizar a\n"
			"sus enemigos."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chandelure,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Chandelure,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Chandelure,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Chandelure,
        .shinyPalette = gMonShinyPalette_Chandelure,
        .iconSprite = gMonIcon_Chandelure,
        .iconPalIndex = 2,
        SHADOW(1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Chandelure)
        OVERWORLD(
            sPicTable_Chandelure,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chandelure,
            gShinyOverworldPalette_Chandelure
        )
        .levelUpLearnset = sChandelureLevelUpLearnset,
        .teachableLearnset = sChandelureTeachableLearnset,
    },
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
    [SPECIES_AXEW] =
    {
        .baseHP        = 46,
        .baseAttack    = 87,
        .baseDefense   = 60,
        .baseSpeed     = 57,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 75,
        .expYield = 64,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Axew"),
        .cryId = CRY_AXEW,
        .natDexNum = NATIONAL_DEX_AXEW,
        .categoryName = _("Colmillo"),
        .height = 6,
        .weight = 180,
		.description = COMPOUND_STRING(
			"Usa sus colmillos para romper las\n"
			"bayas que come. Estos se regeneran\n"
			"una y otra vez, por eso son tan\n"
			"fuertes y afilados."),
        .pokemonScale = 422,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Axew,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Axew,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Axew,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Axew,
        .shinyPalette = gMonShinyPalette_Axew,
        .iconSprite = gMonIcon_Axew,
        .iconPalIndex = 1,
        SHADOW(2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Axew)
        OVERWORLD(
            sPicTable_Axew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Axew,
            gShinyOverworldPalette_Axew
        )
        .levelUpLearnset = sAxewLevelUpLearnset,
        .teachableLearnset = sAxewTeachableLearnset,
        .eggMoveLearnset = sAxewEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_FRAXURE}),
    },

    [SPECIES_FRAXURE] =
    {
        .baseHP        = 66,
        .baseAttack    = 117,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 60,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Fraxure"),
        .cryId = CRY_FRAXURE,
        .natDexNum = NATIONAL_DEX_FRAXURE,
        .categoryName = _("Bocahacha"),
        .height = 10,
        .weight = 360,
		.description = COMPOUND_STRING(
			"Al terminar un combate, se tiene que\n"
			"afilar los colmillos con pedernal,\n"
			"pues los rotos no le vuelven a salir."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fraxure,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Fraxure,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fraxure,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Fraxure,
        .shinyPalette = gMonShinyPalette_Fraxure,
        .iconSprite = gMonIcon_Fraxure,
        .iconPalIndex = 1,
        SHADOW(-2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Fraxure)
        OVERWORLD(
            sPicTable_Fraxure,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Fraxure,
            gShinyOverworldPalette_Fraxure
        )
        .levelUpLearnset = sFraxureLevelUpLearnset,
        .teachableLearnset = sFraxureTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_HAXORUS}),
    },

    [SPECIES_HAXORUS] =
    {
        .baseHP        = 76,
        .baseAttack    = 147,
        .baseDefense   = 90,
        .baseSpeed     = 97,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 270 : 243,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Haxorus"),
        .cryId = CRY_HAXORUS,
        .natDexNum = NATIONAL_DEX_HAXORUS,
        .categoryName = _("Bocahacha"),
        .height = 18,
        .weight = 1055,
		.description = COMPOUND_STRING(
			"Sus colmillos no se quiebran ni aunque\n"
			"los hinque en un armazón de acero.\n"
			"Está protegido por una coraza."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Haxorus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Haxorus,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Haxorus,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Haxorus,
        .shinyPalette = gMonShinyPalette_Haxorus,
        .iconSprite = gMonIcon_Haxorus,
        .iconPalIndex = 2,
        SHADOW(2, 9, SHADOW_SIZE_L)
        FOOTPRINT(Haxorus)
        OVERWORLD(
            sPicTable_Haxorus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Haxorus,
            gShinyOverworldPalette_Haxorus
        )
        .levelUpLearnset = sHaxorusLevelUpLearnset,
        .teachableLearnset = sHaxorusTeachableLearnset,
    },
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
    [SPECIES_CUBCHOO] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH, ABILITY_RATTLED },
    #else
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_RATTLED },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cubchoo"),
        .cryId = CRY_CUBCHOO,
        .natDexNum = NATIONAL_DEX_CUBCHOO,
        .categoryName = _("Congelación"),
        .height = 5,
        .weight = 85,
		.description = COMPOUND_STRING(
			"Cuando se siente mal, sus mucosidades\n"
			"pasan a ser muy acuosas, y pierden\n"
			"potencia sus movimientos de hielo."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cubchoo,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Cubchoo,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cubchoo,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Cubchoo,
        .shinyPalette = gMonShinyPalette_Cubchoo,
        .iconSprite = gMonIcon_Cubchoo,
        .iconPalIndex = 0,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Cubchoo)
        OVERWORLD(
            sPicTable_Cubchoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cubchoo,
            gShinyOverworldPalette_Cubchoo
        )
        .levelUpLearnset = sCubchooLevelUpLearnset,
        .teachableLearnset = sCubchooTeachableLearnset,
        .eggMoveLearnset = sCubchooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BEARTIC}),
    },

    [SPECIES_BEARTIC] =
    {
        .baseHP        = 95,
        .baseAttack    = P_UPDATED_STATS >= GEN_7 ? 130 : 110,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_7) ? 177 : 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH, ABILITY_SWIFT_SWIM },
    #else
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SWIFT_SWIM },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Beartic"),
        .cryId = CRY_BEARTIC,
        .natDexNum = NATIONAL_DEX_BEARTIC,
        .categoryName = _("Glaciación"),
        .height = 26,
        .weight = 2600,
		.description = COMPOUND_STRING(
			"Congela su aliento a discreción. Se le\n"
			"da bien nadar, por eso se dirige a\n"
			"menudo a los mares del norte en busca\n"
			"de presas."),
        .pokemonScale = 266,
        .pokemonOffset = 3,
        .trainerScale = 399,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Beartic,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Beartic,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Beartic,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Beartic,
        .shinyPalette = gMonShinyPalette_Beartic,
        .iconSprite = gMonIcon_Beartic,
        .iconPalIndex = 0,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Beartic)
        OVERWORLD(
            sPicTable_Beartic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Beartic,
            gShinyOverworldPalette_Beartic
        )
        .levelUpLearnset = sBearticLevelUpLearnset,
        .teachableLearnset = sBearticTeachableLearnset,
    },
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_CRYOGONAL
    [SPECIES_CRYOGONAL] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 80 : 70,
        .baseAttack    = 50,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 50 : 30,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_7) ? 180 : 170,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cryogonal"),
        .cryId = CRY_CRYOGONAL,
        .natDexNum = NATIONAL_DEX_CRYOGONAL,
        .categoryName = _("Cristal"),
        .height = 11,
        .weight = 1480,
		.description = COMPOUND_STRING(
			"Nació entre nubes de nieve.\n"
			"Atrapa a sus presas con una cadena\n"
			"hecha de hielo cristalizado."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cryogonal,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cryogonal,
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Cryogonal,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Cryogonal,
        .shinyPalette = gMonShinyPalette_Cryogonal,
        .iconSprite = gMonIcon_Cryogonal,
        .iconPalIndex = 0,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cryogonal)
        OVERWORLD(
            sPicTable_Cryogonal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cryogonal,
            gShinyOverworldPalette_Cryogonal
        )
        .levelUpLearnset = sCryogonalLevelUpLearnset,
        .teachableLearnset = sCryogonalTeachableLearnset,
    },
#endif //P_FAMILY_CRYOGONAL

#if P_FAMILY_SHELMET
    [SPECIES_SHELMET] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 200,
        .expYield = 61,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYDRATION, ABILITY_SHELL_ARMOR, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Shelmet"),
        .cryId = CRY_SHELMET,
        .natDexNum = NATIONAL_DEX_SHELMET,
        .categoryName = _("Caracol"),
        .height = 4,
        .weight = 77,
		.description = COMPOUND_STRING(
			"Evoluciona si entra en contacto con\n"
			"energía eléctrica junto a Karrablast.\n"
			"Aún no se ha esclarecido el porqué."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shelmet,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Shelmet,
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Shelmet,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Shelmet,
        .shinyPalette = gMonShinyPalette_Shelmet,
        .iconSprite = gMonIcon_Shelmet,
        .iconPalIndex = 1,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Shelmet)
        OVERWORLD(
            sPicTable_Shelmet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shelmet,
            gShinyOverworldPalette_Shelmet
        )
        .levelUpLearnset = sShelmetLevelUpLearnset,
        .teachableLearnset = sShelmetTeachableLearnset,
        .eggMoveLearnset = sShelmetEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_SPECIFIC_MON, SPECIES_KARRABLAST, SPECIES_ACCELGOR}),
    },

    [SPECIES_ACCELGOR] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 75,
        .expYield = 173,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYDRATION, ABILITY_STICKY_HOLD, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Accelgor"),
        .cryId = CRY_ACCELGOR,
        .natDexNum = NATIONAL_DEX_ACCELGOR,
        .categoryName = _("Sincaparazón"),
        .height = 8,
        .weight = 253,
		.description = COMPOUND_STRING(
			"Los ambientes secos lo debilitan.\n"
			"Evita la sequedad envolviéndose en\n"
			"muchas membranas finas superpuestas."),
        .pokemonScale = 366,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Accelgor,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Accelgor,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Accelgor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
        .palette = gMonPalette_Accelgor,
        .shinyPalette = gMonShinyPalette_Accelgor,
        .iconSprite = gMonIcon_Accelgor,
        .iconPalIndex = 1,
        SHADOW(-14, 8, SHADOW_SIZE_S)
        FOOTPRINT(Accelgor)
        OVERWORLD(
            sPicTable_Accelgor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Accelgor,
            gShinyOverworldPalette_Accelgor
        )
        .levelUpLearnset = sAccelgorLevelUpLearnset,
        .teachableLearnset = sAccelgorTeachableLearnset,
    },
#endif //P_FAMILY_SHELMET

#if P_FAMILY_STUNFISK
    [SPECIES_STUNFISK] =
    {
        .baseHP        = 109,
        .baseAttack    = 66,
        .baseDefense   = 84,
        .baseSpeed     = 32,
        .baseSpAttack  = 81,
        .baseSpDefense = 99,
        .types = MON_TYPES(TYPE_GROUND, TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STATIC, ABILITY_LIMBER, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Stunfisk"),
        .cryId = CRY_STUNFISK,
        .natDexNum = NATIONAL_DEX_STUNFISK,
        .categoryName = _("Trampa"),
        .height = 7,
        .weight = 110,
		.description = COMPOUND_STRING(
			"Ni un pisotón de un luchador de sumo\n"
			"lo aplastaría gracias a su piel sólida.\n"
			"Sonríe al soltar descargas eléctricas."),
        .pokemonScale = 365,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Stunfisk,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Stunfisk,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Stunfisk,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 22,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Stunfisk,
        .shinyPalette = gMonShinyPalette_Stunfisk,
        .iconSprite = gMonIcon_Stunfisk,
        .iconPalIndex = 2,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Stunfisk)
        OVERWORLD(
            sPicTable_Stunfisk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Stunfisk,
            gShinyOverworldPalette_Stunfisk
        )
        .levelUpLearnset = sStunfiskLevelUpLearnset,
        .teachableLearnset = sStunfiskTeachableLearnset,
        .eggMoveLearnset = sStunfiskEggMoveLearnset,
        .formSpeciesIdTable = sStunfiskFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_STUNFISK_GALAR] =
    {
        .baseHP        = 109,
        .baseAttack    = 81,
        .baseDefense   = 99,
        .baseSpeed     = 32,
        .baseSpAttack  = 66,
        .baseSpDefense = 84,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MIMICRY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Stunfisk"),
        .cryId = CRY_STUNFISK,
        .natDexNum = NATIONAL_DEX_STUNFISK,
        .categoryName = _("Trampa"),
        .height = 7,
        .weight = 205,
        .description = COMPOUND_STRING(
            "Sus labios cebo atraen a sus presas\n"
            "mientras yace al acecho en el barro. Al\n"
            "acercarse la presa, la aprieta con\n"
            "sus afiladas aletas de acero."),
        .pokemonScale = 365,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_StunfiskGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_StunfiskGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_StunfiskGalar,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 23,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_StunfiskGalar,
        .shinyPalette = gMonShinyPalette_StunfiskGalar,
        .iconSprite = gMonIcon_StunfiskGalar,
        .iconPalIndex = 1,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Stunfisk)
        OVERWORLD(
            sPicTable_StunfiskGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_StunfiskGalar,
            gShinyOverworldPalette_StunfiskGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sStunfiskGalarLevelUpLearnset,
        .teachableLearnset = sStunfiskGalarTeachableLearnset,
        .eggMoveLearnset = sStunfiskGalarEggMoveLearnset,
        .formSpeciesIdTable = sStunfiskFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_MIENFOO
    [SPECIES_MIENFOO] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 180,
        .expYield = 70,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_REGENERATOR, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mienfoo"),
        .cryId = CRY_MIENFOO,
        .natDexNum = NATIONAL_DEX_MIENFOO,
        .categoryName = _("Artemarcia"),
        .height = 9,
        .weight = 200,
		.description = COMPOUND_STRING(
			"Abruma a su rival con oleadas de ataques\n"
			"veloces. Corta al enemigo con sus\n"
			"afiladas garras."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mienfoo,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Mienfoo,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Mienfoo,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Mienfoo,
        .shinyPalette = gMonShinyPalette_Mienfoo,
        .iconSprite = gMonIcon_Mienfoo,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Mienfoo)
        OVERWORLD(
            sPicTable_Mienfoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mienfoo,
            gShinyOverworldPalette_Mienfoo
        )
        .levelUpLearnset = sMienfooLevelUpLearnset,
        .teachableLearnset = sMienfooTeachableLearnset,
        .eggMoveLearnset = sMienfooEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_MIENSHAO}),
    },

    [SPECIES_MIENSHAO] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_REGENERATOR, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mienshao"),
        .cryId = CRY_MIENSHAO,
        .natDexNum = NATIONAL_DEX_MIENSHAO,
        .categoryName = _("Artemarcia"),
        .height = 14,
        .weight = 355,
		.description = COMPOUND_STRING(
			"Usa el pelaje de sus brazos a manera\n"
			"de látigos. Sus ataques alcanzan\n"
			"velocidades de vértigo."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mienshao,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Mienshao,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mienshao,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Mienshao,
        .shinyPalette = gMonShinyPalette_Mienshao,
        .iconSprite = gMonIcon_Mienshao,
        .iconPalIndex = 2,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Mienshao)
        OVERWORLD(
            sPicTable_Mienshao,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mienshao,
            gShinyOverworldPalette_Mienshao
        )
        .levelUpLearnset = sMienshaoLevelUpLearnset,
        .teachableLearnset = sMienshaoTeachableLearnset,
    },
#endif //P_FAMILY_MIENFOO

#if P_FAMILY_DRUDDIGON
    [SPECIES_DRUDDIGON] =
    {
        .baseHP        = 77,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 48,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack = 2,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_SHEER_FORCE, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Druddigon"),
        .cryId = CRY_DRUDDIGON,
        .natDexNum = NATIONAL_DEX_DRUDDIGON,
        .categoryName = _("Cueva"),
        .height = 16,
        .weight = 1390,
		.description = COMPOUND_STRING(
			"Corre por estrechas cavernas y atrapa\n"
			"a sus presas con sus afiladas garras.\n"
			"La piel de su cara es más dura que\n"
			"una roca."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Druddigon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Druddigon,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .backPic = gMonBackPic_Druddigon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Druddigon,
        .shinyPalette = gMonShinyPalette_Druddigon,
        .iconSprite = gMonIcon_Druddigon,
        .iconPalIndex = 0,
        SHADOW(3, 9, SHADOW_SIZE_M)
        FOOTPRINT(Druddigon)
        OVERWORLD(
            sPicTable_Druddigon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Druddigon,
            gShinyOverworldPalette_Druddigon
        )
        .levelUpLearnset = sDruddigonLevelUpLearnset,
        .teachableLearnset = sDruddigonTeachableLearnset,
        .eggMoveLearnset = sDruddigonEggMoveLearnset,
    },
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_GOLETT
    [SPECIES_GOLETT] =
    {
        .baseHP        = 59,
        .baseAttack    = 74,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GROUND, TYPE_GHOST),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_IRON_FIST, ABILITY_KLUTZ, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Golett"),
        .cryId = CRY_GOLETT,
        .natDexNum = NATIONAL_DEX_GOLETT,
        .categoryName = _("Autómata"),
        .height = 10,
        .weight = 920,
		.description = COMPOUND_STRING(
			"Se mueve gracias a la energía que\n"
			"quema dentro de su cuerpo, pero el\n"
			"origen de esta energía es incierto."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Golett,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Golett,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Golett,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Golett,
        .shinyPalette = gMonShinyPalette_Golett,
        .iconSprite = gMonIcon_Golett,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Golett)
        OVERWORLD(
            sPicTable_Golett,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golett,
            gShinyOverworldPalette_Golett
        )
        .levelUpLearnset = sGolettLevelUpLearnset,
        .teachableLearnset = sGolettTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 43, SPECIES_GOLURK}),
    },

    [SPECIES_GOLURK] =
    {
        .baseHP        = 89,
        .baseAttack    = 124,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND, TYPE_GHOST),
        .catchRate = 90,
        .expYield = 169,
        .evYield_Attack = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_IRON_FIST, ABILITY_KLUTZ, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Golurk"),
        .cryId = CRY_GOLURK,
        .natDexNum = NATIONAL_DEX_GOLURK,
        .categoryName = _("Autómata"),
        .height = 28,
        .weight = 3300,
		.description = COMPOUND_STRING(
			"Vuela a la velocidad del sonido.\n"
			"Pierde el control de su energía si se\n"
			"le retira el sello del pecho."),
        .pokemonScale = 275,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Golurk,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Golurk,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Golurk,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Golurk,
        .shinyPalette = gMonShinyPalette_Golurk,
        .iconSprite = gMonIcon_Golurk,
        .iconPalIndex = 0,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Golurk)
        OVERWORLD(
            sPicTable_Golurk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golurk,
            gShinyOverworldPalette_Golurk
        )
        .levelUpLearnset = sGolurkLevelUpLearnset,
        .teachableLearnset = sGolurkTeachableLearnset,
    },
#endif //P_FAMILY_GOLETT

#if P_FAMILY_PAWNIARD
    [SPECIES_PAWNIARD] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DARK, TYPE_STEEL),
        .catchRate = 120,
        .expYield = 68,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_DEFIANT, ABILITY_INNER_FOCUS, ABILITY_PRESSURE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pawniard"),
        .cryId = CRY_PAWNIARD,
        .natDexNum = NATIONAL_DEX_PAWNIARD,
        .categoryName = _("Tajo"),
        .height = 5,
        .weight = 102,
		.description = COMPOUND_STRING(
			"Lucha bajo las órdenes de Bisharp.\n"
			"Se agarra a sus oponentes y les inflinge\n"
			"daño utilizando sus cuchillas."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pawniard,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Pawniard,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Pawniard,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pawniard,
        .shinyPalette = gMonShinyPalette_Pawniard,
        .iconSprite = gMonIcon_Pawniard,
        .iconPalIndex = 0,
        SHADOW(4, 4, SHADOW_SIZE_S)
        FOOTPRINT(Pawniard)
        OVERWORLD(
            sPicTable_Pawniard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pawniard,
            gShinyOverworldPalette_Pawniard
        )
        .levelUpLearnset = sPawniardLevelUpLearnset,
        .teachableLearnset = sPawniardTeachableLearnset,
        .eggMoveLearnset = sPawniardEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 52, SPECIES_BISHARP}),
    },

    [SPECIES_BISHARP] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack = 2,
        .itemRare = ITEM_LEADERS_CREST,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_DEFIANT, ABILITY_INNER_FOCUS, ABILITY_PRESSURE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Bisharp"),
        .cryId = CRY_BISHARP,
        .natDexNum = NATIONAL_DEX_BISHARP,
        .categoryName = _("Filo"),
        .height = 16,
        .weight = 700,
		.description = COMPOUND_STRING(
			"Un Pokémon temible que remata a su\n"
			"presa una vez que su séquito de Pawniard\n"
			"la ha debilitado e inmovilizado."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Bisharp,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Bisharp,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Bisharp,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Bisharp,
        .shinyPalette = gMonShinyPalette_Bisharp,
        .iconSprite = gMonIcon_Bisharp,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Bisharp)
        OVERWORLD(
            sPicTable_Bisharp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bisharp,
            gShinyOverworldPalette_Bisharp
        )
        .levelUpLearnset = sBisharpLevelUpLearnset,
        .teachableLearnset = sBisharpTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFEAT_THREE_WITH_ITEM, ITEM_LEADERS_CREST, SPECIES_KINGAMBIT}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_KINGAMBIT] =
    {
        .baseHP        = 100,
        .baseAttack    = 135,
        .baseDefense   = 120,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DARK, TYPE_STEEL),
        .catchRate = 25,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_DEFIANT, ABILITY_SUPREME_OVERLORD, ABILITY_PRESSURE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Kingambit"),
        .cryId = CRY_KINGAMBIT,
        .natDexNum = NATIONAL_DEX_KINGAMBIT,
        .categoryName = _("Gran Espada"),
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Cuenta con un enorme ejercito a sus\n"
            "órdenes. Sin embargo, debido a su\n"
            "falta de dote como estratega,\n"
            "termina recurriendo a la fuerza bruta."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kingambit,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kingambit,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kingambit,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kingambit,
        .shinyPalette = gMonShinyPalette_Kingambit,
        .iconSprite = gMonIcon_Kingambit,
        .iconPalIndex = 0,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Kingambit)
        OVERWORLD(
            sPicTable_Kingambit,
            SIZE_64x64,
            SHADOW_SIZE_L,
            TRACKS_NONE,
            gOverworldPalette_Kingambit,
            gShinyOverworldPalette_Kingambit
        )
        .levelUpLearnset = sKingambitLevelUpLearnset,
        .teachableLearnset = sKingambitTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
    [SPECIES_BOUFFALANT] =
    {
        .baseHP        = 95,
        .baseAttack    = 110,
        .baseDefense   = 95,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RECKLESS, ABILITY_SAP_SIPPER, ABILITY_SOUNDPROOF },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bouffalant"),
        .cryId = CRY_BOUFFALANT,
        .natDexNum = NATIONAL_DEX_BOUFFALANT,
        .categoryName = _("Torocabezazo"),
        .height = 16,
        .weight = 946,
		.description = COMPOUND_STRING(
			"Embiste con su cabeza sin distinción.\n"
			"Sería capaz de hacer descarrilar un tren\n"
			"si este invadiera su territorio."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Bouffalant,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Bouffalant,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Bouffalant,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bouffalant,
        .shinyPalette = gMonShinyPalette_Bouffalant,
        .iconSprite = gMonIcon_Bouffalant,
        .iconPalIndex = 2,
        SHADOW(8, 7, SHADOW_SIZE_M)
        FOOTPRINT(Bouffalant)
        OVERWORLD(
            sPicTable_Bouffalant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bouffalant,
            gShinyOverworldPalette_Bouffalant
        )
        .levelUpLearnset = sBouffalantLevelUpLearnset,
        .teachableLearnset = sBouffalantTeachableLearnset,
        .eggMoveLearnset = sBouffalantEggMoveLearnset,
    },
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_RUFFLET
    [SPECIES_RUFFLET] =
    {
        .baseHP        = 70,
        .baseAttack    = 83,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 37,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 190,
        .expYield = 70,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Rufflet"),
        .cryId = CRY_RUFFLET,
        .natDexNum = NATIONAL_DEX_RUFFLET,
        .categoryName = _("Aguilucho"),
        .height = 5,
        .weight = 105,
		.description = COMPOUND_STRING(
			"Se enfrentan a rivales muchos mayores,\n"
			"no por valentía, sino por pura temeridad.\n"
			"Pero así es como se fortalecen."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rufflet,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Rufflet,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rufflet,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Rufflet,
        .shinyPalette = gMonShinyPalette_Rufflet,
        .iconSprite = gMonIcon_Rufflet,
        .iconPalIndex = 2,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Rufflet)
        OVERWORLD(
            sPicTable_Rufflet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rufflet,
            gShinyOverworldPalette_Rufflet
        )
        .levelUpLearnset = sRuffletLevelUpLearnset,
        .teachableLearnset = sRuffletTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 54, SPECIES_BRAVIARY},
                                {EVO_NONE, 0, SPECIES_BRAVIARY_HISUI}),
    },

    [SPECIES_BRAVIARY] =
    {
        .baseHP        = 100,
        .baseAttack    = 123,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 57,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 60,
        .expYield = 179,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Braviary"),
        .cryId = CRY_BRAVIARY,
        .natDexNum = NATIONAL_DEX_BRAVIARY,
        .categoryName = _("Aguerrido"),
        .height = 15,
        .weight = 410,
		.description = COMPOUND_STRING(
			"Lucha por sus compañeros sin reparar\n"
			"en peligros. Es capaz de volar alto\n"
			"incluso con un coche en sus garras."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Braviary,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Braviary,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Braviary,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Braviary,
        .shinyPalette = gMonShinyPalette_Braviary,
        .iconSprite = gMonIcon_Braviary,
        .iconPalIndex = 0,
        SHADOW(-1, 16, SHADOW_SIZE_M)
        FOOTPRINT(Braviary)
        OVERWORLD(
            sPicTable_Braviary,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Braviary,
            gShinyOverworldPalette_Braviary
        )
        .levelUpLearnset = sBraviaryLevelUpLearnset,
        .teachableLearnset = sBraviaryTeachableLearnset,
        .formSpeciesIdTable = sBraviaryFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_BRAVIARY_HISUI] =
    {
        .baseHP        = 110,
        .baseAttack    = 83,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 112,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 60,
        .expYield = 179,
        .evYield_SpAttack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Braviary"),
        .cryId = CRY_BRAVIARY,
        .natDexNum = NATIONAL_DEX_BRAVIARY,
        .categoryName = _("Grito guerra"),
        .height = 17,
        .weight = 434,
        .description = COMPOUND_STRING(
            "Con un grito de batalla escalofriante,\n"
            "este enorme y feroz Pokémon ave\n"
            "sale en busca de su presa."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BraviaryHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BraviaryHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_BraviaryHisui,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BraviaryHisui,
        .shinyPalette = gMonShinyPalette_BraviaryHisui,
        .iconSprite = gMonIcon_BraviaryHisui,
        .iconPalIndex = 2,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Braviary)
        OVERWORLD(
            sPicTable_BraviaryHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_BraviaryHisui,
            gShinyOverworldPalette_BraviaryHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sBraviaryHisuiLevelUpLearnset,
        .teachableLearnset = sBraviaryHisuiTeachableLearnset,
        .formSpeciesIdTable = sBraviaryFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_RUFFLET

#if P_FAMILY_VULLABY
    [SPECIES_VULLABY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 190,
        .expYield = 74,
        .evYield_Defense = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_OVERCOAT, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Vullaby"),
        .cryId = CRY_VULLABY,
        .natDexNum = NATIONAL_DEX_VULLABY,
        .categoryName = _("Pañal"),
        .height = 5,
        .weight = 90,
		.description = COMPOUND_STRING(
			"No puede volar porque sus alas son muy\n"
			"pequeñas. Cuando va a evolucionar, se\n"
			"deshace de su calavera."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vullaby,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Vullaby,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Vullaby,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Vullaby,
        .shinyPalette = gMonShinyPalette_Vullaby,
        .iconSprite = gMonIcon_Vullaby,
        .iconPalIndex = 0,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Vullaby)
        OVERWORLD(
            sPicTable_Vullaby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vullaby,
            gShinyOverworldPalette_Vullaby
        )
        .levelUpLearnset = sVullabyLevelUpLearnset,
        .teachableLearnset = sVullabyTeachableLearnset,
        .eggMoveLearnset = sVullabyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 54, SPECIES_MANDIBUZZ}),
    },

    [SPECIES_MANDIBUZZ] =
    {
        .baseHP        = 110,
        .baseAttack    = 65,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 60,
        .expYield = 179,
        .evYield_SpAttack = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_OVERCOAT, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mandibuzz"),
        .cryId = CRY_MANDIBUZZ,
        .natDexNum = NATIONAL_DEX_MANDIBUZZ,
        .categoryName = _("Aguilahueso"),
        .height = 12,
        .weight = 395,
		.description = COMPOUND_STRING(
			"Vuela en círculos. Cuando avista una\n"
			"presa, la ataca y la transporta a su\n"
			"nido con suma facilidad."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mandibuzz,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Mandibuzz,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Mandibuzz,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Mandibuzz,
        .shinyPalette = gMonShinyPalette_Mandibuzz,
        .iconSprite = gMonIcon_Mandibuzz,
        .iconPalIndex = 1,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Mandibuzz)
        OVERWORLD(
            sPicTable_Mandibuzz,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mandibuzz,
            gShinyOverworldPalette_Mandibuzz
        )
        .levelUpLearnset = sMandibuzzLevelUpLearnset,
        .teachableLearnset = sMandibuzzTeachableLearnset,
    },
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
    [SPECIES_HEATMOR] =
    {
        .baseHP        = 85,
        .baseAttack    = 97,
        .baseDefense   = 66,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 90,
        .expYield = 169,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Heatmor"),
        .cryId = CRY_HEATMOR,
        .natDexNum = NATIONAL_DEX_HEATMOR,
        .categoryName = _("Hormiguero"),
        .height = 14,
        .weight = 580,
		.description = COMPOUND_STRING(
			"Absorbe aire por el orificio de su cola y\n"
			"consume llamas en su interior.\n"
			"Es enemigo acérrimo de los Durant."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Heatmor,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Heatmor,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Heatmor,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Heatmor,
        .shinyPalette = gMonShinyPalette_Heatmor,
        .iconSprite = gMonIcon_Heatmor,
        .iconPalIndex = 2,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Heatmor)
        OVERWORLD(
            sPicTable_Heatmor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Heatmor,
            gShinyOverworldPalette_Heatmor
        )
        .levelUpLearnset = sHeatmorLevelUpLearnset,
        .teachableLearnset = sHeatmorTeachableLearnset,
        .eggMoveLearnset = sHeatmorEggMoveLearnset,
    },
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DURANT
    [SPECIES_DURANT] =
    {
        .baseHP        = 58,
        .baseAttack    = 109,
        .baseDefense   = 112,
        .baseSpeed     = 109,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_HUSTLE, ABILITY_TRUANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Durant"),
        .cryId = CRY_DURANT,
        .natDexNum = NATIONAL_DEX_DURANT,
        .categoryName = _("Hormigacero"),
        .height = 3,
        .weight = 330,
		.description = COMPOUND_STRING(
			"Llevan una armadura de acero.\n"
			"Se defienden en grupo para contrarrestar\n"
			"sus depredadores, los Heatmor."),
        .pokemonScale = 530,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Durant,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Durant,
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Durant,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Durant,
        .shinyPalette = gMonShinyPalette_Durant,
        .iconSprite = gMonIcon_Durant,
        .iconPalIndex = 0,
        SHADOW(0, -3, SHADOW_SIZE_L)
        FOOTPRINT(Durant)
        OVERWORLD(
            sPicTable_Durant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Durant,
            gShinyOverworldPalette_Durant
        )
        .levelUpLearnset = sDurantLevelUpLearnset,
        .teachableLearnset = sDurantTeachableLearnset,
        .eggMoveLearnset = sDurantEggMoveLearnset,
    },
#endif //P_FAMILY_DURANT

#if P_FAMILY_DEINO
    [SPECIES_DEINO] =
    {
        .baseHP        = 52,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 38,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Deino"),
        .cryId = CRY_DEINO,
        .natDexNum = NATIONAL_DEX_DEINO,
        .categoryName = _("Tosco"),
        .height = 8,
        .weight = 173,
		.description = COMPOUND_STRING(
			"No ve, por eso va haciendo placajes y\n"
			"dando mordiscos a diestro y siniestro.\n"
			"Su cuerpo está plagado de heridas."),
        .pokemonScale = 366,
        .pokemonOffset = 12,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Deino,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Deino,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deino,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Deino,
        .shinyPalette = gMonShinyPalette_Deino,
        .iconSprite = gMonIcon_Deino,
        .iconPalIndex = 2,
        SHADOW(1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Deino)
        OVERWORLD(
            sPicTable_Deino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Deino,
            gShinyOverworldPalette_Deino
        )
        .levelUpLearnset = sDeinoLevelUpLearnset,
        .teachableLearnset = sDeinoTeachableLearnset,
        .eggMoveLearnset = sDeinoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_ZWEILOUS}),
    },

    [SPECIES_ZWEILOUS] =
    {
        .baseHP        = 72,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Zweilous"),
        .cryId = CRY_ZWEILOUS,
        .natDexNum = NATIONAL_DEX_ZWEILOUS,
        .categoryName = _("Violento"),
        .height = 14,
        .weight = 500,
		.description = COMPOUND_STRING(
			"Cambia de morada siempre que termina\n"
			"con la comida de una zona.\n"
			"Sus dos cabezas se llevan fatal."),
        .pokemonScale = 265,
        .pokemonOffset = 3,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zweilous,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Zweilous,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Zweilous,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Zweilous,
        .shinyPalette = gMonShinyPalette_Zweilous,
        .iconSprite = gMonIcon_Zweilous,
        .iconPalIndex = 2,
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Zweilous)
        OVERWORLD(
            sPicTable_Zweilous,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zweilous,
            gShinyOverworldPalette_Zweilous
        )
        .levelUpLearnset = sZweilousLevelUpLearnset,
        .teachableLearnset = sZweilousTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 64, SPECIES_HYDREIGON}),
    },

    [SPECIES_HYDREIGON] =
    {
        .baseHP        = 92,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 98,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Hydreigon"),
        .cryId = CRY_HYDREIGON,
        .natDexNum = NATIONAL_DEX_HYDREIGON,
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 1600,
		.description = COMPOUND_STRING(
			"Vuela ayudado por sus seis alas y\n"
			"ataca todo aquello que encuentra a\n"
			"su paso. Es muy agresivo."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Hydreigon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Hydreigon,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Hydreigon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Hydreigon,
        .shinyPalette = gMonShinyPalette_Hydreigon,
        .iconSprite = gMonIcon_Hydreigon,
        .iconPalIndex = 2,
        SHADOW(1, 16, SHADOW_SIZE_M)
        FOOTPRINT(Hydreigon)
        OVERWORLD(
            sPicTable_Hydreigon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hydreigon,
            gShinyOverworldPalette_Hydreigon
        )
        .levelUpLearnset = sHydreigonLevelUpLearnset,
        .teachableLearnset = sHydreigonTeachableLearnset,
    },
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
    [SPECIES_LARVESTA] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_SWARM },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Larvesta"),
        .cryId = CRY_LARVESTA,
        .natDexNum = NATIONAL_DEX_LARVESTA,
        .categoryName = _("Antorcha"),
        .height = 11,
        .weight = 288,
		.description = COMPOUND_STRING(
			"Vive en las laderas de los volcanes.\n"
			"Emite fuego por sus cinco cuernos\n"
			"para ahuyentar a sus enemigos."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Larvesta,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Larvesta,
        .frontAnimId = ANIM_GLOW_ORANGE,
        .backPic = gMonBackPic_Larvesta,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Larvesta,
        .shinyPalette = gMonShinyPalette_Larvesta,
        .iconSprite = gMonIcon_Larvesta,
        .iconPalIndex = 0,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Larvesta)
        OVERWORLD(
            sPicTable_Larvesta,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Larvesta,
            gShinyOverworldPalette_Larvesta
        )
        .levelUpLearnset = sLarvestaLevelUpLearnset,
        .teachableLearnset = sLarvestaTeachableLearnset,
        .eggMoveLearnset = sLarvestaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 59, SPECIES_VOLCARONA}),
    },

    [SPECIES_VOLCARONA] =
    {
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIRE),
        .catchRate = 15,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 275 : 248,
        .evYield_SpAttack = 3,
        .itemCommon = ITEM_SILVER_POWDER,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_SWARM },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Volcarona"),
        .cryId = CRY_VOLCARONA,
        .natDexNum = NATIONAL_DEX_VOLCARONA,
        .categoryName = _("Sol"),
        .height = 16,
        .weight = 460,
		.description = COMPOUND_STRING(
			"Antaño, las cenizas volcánicas cubrieron\n"
			"los cielos. Entonces, sus llamaradas\n"
			"sirvieron de sol."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Volcarona,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Volcarona,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Volcarona,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Volcarona,
        .shinyPalette = gMonShinyPalette_Volcarona,
        .iconSprite = gMonIcon_Volcarona,
        .iconPalIndex = 0,
        SHADOW(-4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Volcarona)
        OVERWORLD(
            sPicTable_Volcarona,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Volcarona,
            gShinyOverworldPalette_Volcarona
        )
        .levelUpLearnset = sVolcaronaLevelUpLearnset,
        .teachableLearnset = sVolcaronaTeachableLearnset,
    },
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_COBALION
    [SPECIES_COBALION] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 129,
        .baseSpeed     = 108,
        .baseSpAttack  = 90,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FIGHTING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_JUSTIFIED, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cobalion"),
        .cryId = CRY_COBALION,
        .natDexNum = NATIONAL_DEX_COBALION,
        .categoryName = _("Tesón acero"),
        .height = 21,
        .weight = 2500,
		.description = COMPOUND_STRING(
			"Posee un cuerpo y un corazón de acero.\n"
			"Basta una mirada suya para que Pokémon\n"
			"violentos le obedezcan."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Cobalion,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cobalion,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Cobalion,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Cobalion,
        .shinyPalette = gMonShinyPalette_Cobalion,
        .iconSprite = gMonIcon_Cobalion,
        .iconPalIndex = 0,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cobalion)
        OVERWORLD(
            sPicTable_Cobalion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cobalion,
            gShinyOverworldPalette_Cobalion
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sCobalionLevelUpLearnset,
        .teachableLearnset = sCobalionTeachableLearnset,
    },
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
    [SPECIES_TERRAKION] =
    {
        .baseHP        = 91,
        .baseAttack    = 129,
        .baseDefense   = 90,
        .baseSpeed     = 108,
        .baseSpAttack  = 72,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FIGHTING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_JUSTIFIED, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Terrakion"),
        .cryId = CRY_TERRAKION,
        .natDexNum = NATIONAL_DEX_TERRAKION,
        .categoryName = _("Gruta"),
        .height = 19,
        .weight = 2600,
		.description = COMPOUND_STRING(
			"Luchó contra los hombres para proteger\n"
			"a los Pokémon que perdieron su hogar por\n"
			"culpa de las guerras de los humanos."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 336,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Terrakion,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Terrakion,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Terrakion,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Terrakion,
        .shinyPalette = gMonShinyPalette_Terrakion,
        .iconSprite = gMonIcon_Terrakion,
        .iconPalIndex = 2,
        SHADOW(3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Terrakion)
        OVERWORLD(
            sPicTable_Terrakion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Terrakion,
            gShinyOverworldPalette_Terrakion
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTerrakionLevelUpLearnset,
        .teachableLearnset = sTerrakionTeachableLearnset,
    },
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
    [SPECIES_VIRIZION] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 72,
        .baseSpeed     = 108,
        .baseSpAttack  = 90,
        .baseSpDefense = 129,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_JUSTIFIED, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Virizion"),
        .cryId = CRY_VIRIZION,
        .natDexNum = NATIONAL_DEX_VIRIZION,
        .categoryName = _("Prado"),
        .height = 20,
        .weight = 2000,
		.description = COMPOUND_STRING(
			"Sus cuernos son hojas afiladas.\n"
			"Sacude a sus enemigos con sus\n"
			"movimientos y los reduce."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 344,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Virizion,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Virizion,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Virizion,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Virizion,
        .shinyPalette = gMonShinyPalette_Virizion,
        .iconSprite = gMonIcon_Virizion,
        .iconPalIndex = 1,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Virizion)
        OVERWORLD(
            sPicTable_Virizion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Virizion,
            gShinyOverworldPalette_Virizion
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sVirizionLevelUpLearnset,
        .teachableLearnset = sVirizionTeachableLearnset,
    },
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
    [SPECIES_TORNADUS_INCARNATE] =
    {
        .baseHP        = 79,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tornadus"),
        .cryId = CRY_TORNADUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_TORNADUS,
        .categoryName = _("Torbellino"),
        .height = 15,
        .weight = 630,
        .description = COMPOUND_STRING(
            "Expulsa una enorme energía desde\n"
"su cola, causando tormentas severas.\n"
"Su poder puede derribar casas enteras.\n"
"Se desplaza por el cielo a 200 kmh."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TornadusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_TornadusIncarnate,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_TornadusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_TornadusIncarnate,
        .shinyPalette = gMonShinyPalette_TornadusIncarnate,
        .iconSprite = gMonIcon_TornadusIncarnate,
        .iconPalIndex = 1,
        SHADOW(2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Tornadus)
        OVERWORLD(
            sPicTable_TornadusIncarnate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TornadusIncarnate,
            gShinyOverworldPalette_TornadusIncarnate
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTornadusLevelUpLearnset,
        .teachableLearnset = sTornadusTeachableLearnset,
        .formSpeciesIdTable = sTornadusFormSpeciesIdTable,
        .formChangeTable = sTornadusFormChangeTable,
    },

    [SPECIES_TORNADUS_THERIAN] =
    {
        .baseHP        = 79,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 121,
        .baseSpAttack  = 110,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_REGENERATOR, ABILITY_NONE, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tornadus"),
        .cryId = CRY_TORNADUS_THERIAN,
        .natDexNum = NATIONAL_DEX_TORNADUS,
        .categoryName = _("Torbellino"),
        .height = 14,
        .weight = 630,
        .description = COMPOUND_STRING(
           "Un ejemplo de lo que se conoce como un\n"
            "“cambio de forma”. Tornadus ha sido\n"
            "observado cruzando el océano en esta\n"
            "forma."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TornadusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TornadusTherian,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_TornadusTherian,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_TornadusTherian,
        .shinyPalette = gMonShinyPalette_TornadusTherian,
        .iconSprite = gMonIcon_TornadusTherian,
        .iconPalIndex = 1,
        SHADOW(-5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Tornadus)
        OVERWORLD(
            sPicTable_TornadusTherian,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TornadusTherian,
            gShinyOverworldPalette_TornadusTherian
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sTornadusLevelUpLearnset,
        .teachableLearnset = sTornadusTeachableLearnset,
        .formSpeciesIdTable = sTornadusFormSpeciesIdTable,
        .formChangeTable = sTornadusFormChangeTable,
    },
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_THUNDURUS
    [SPECIES_THUNDURUS_INCARNATE] =
    {
        .baseHP        = 79,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Thundurus"),
        .cryId = CRY_THUNDURUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_THUNDURUS,
        .categoryName = _("Centella"),
        .height = 15,
        .weight = 610,
        .description = COMPOUND_STRING(
            "Su cola descarga inmensos rayos.\n"
            "Incontables restos carbonizados\n"
            "marcan el paisaje de los lugares\n"
            "por donde ha pasado Thundurus."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ThundurusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ThundurusIncarnate,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_ThundurusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_ThundurusIncarnate,
        .shinyPalette = gMonShinyPalette_ThundurusIncarnate,
        .iconSprite = gMonIcon_ThundurusIncarnate,
        .iconPalIndex = 0,
        SHADOW(2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Thundurus)
        OVERWORLD(
            sPicTable_ThundurusIncarnate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ThundurusIncarnate,
            gShinyOverworldPalette_ThundurusIncarnate
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sThundurusLevelUpLearnset,
        .teachableLearnset = sThundurusTeachableLearnset,
        .formSpeciesIdTable = sThundurusFormSpeciesIdTable,
        .formChangeTable = sThundurusFormChangeTable,
    },

    [SPECIES_THUNDURUS_THERIAN] =
    {
        .baseHP        = 79,
        .baseAttack    = 105,
        .baseDefense   = 70,
        .baseSpeed     = 101,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NONE, ABILITY_VOLT_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Thundurus"),
        .cryId = CRY_THUNDURUS_THERIAN,
        .natDexNum = NATIONAL_DEX_THUNDURUS,
        .categoryName = _("Centella"),
        .height = 30,
        .weight = 610,
        .description = COMPOUND_STRING(
            "Pulveriza a sus enemigos hasta\n"
            "convertirlos en nada con golpes de\n"
            "rayos devastadores. Lanzados desde\n"
            "la cadena de orbes en su cola."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ThundurusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_ThundurusTherian,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_ThundurusTherian,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_ThundurusTherian,
        .shinyPalette = gMonShinyPalette_ThundurusTherian,
        .iconSprite = gMonIcon_ThundurusTherian,
        .iconPalIndex = 0,
        SHADOW(5, 16, SHADOW_SIZE_M)
        FOOTPRINT(Thundurus)
        OVERWORLD(
            sPicTable_ThundurusTherian,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ThundurusTherian,
            gShinyOverworldPalette_ThundurusTherian
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sThundurusLevelUpLearnset,
        .teachableLearnset = sThundurusTeachableLearnset,
        .formSpeciesIdTable = sThundurusFormSpeciesIdTable,
        .formChangeTable = sThundurusFormChangeTable,
    },
#endif //P_FAMILY_THUNDURUS

#if P_FAMILY_RESHIRAM
    [SPECIES_RESHIRAM] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FIRE),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TURBOBLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Reshiram"),
        .cryId = CRY_RESHIRAM,
        .natDexNum = NATIONAL_DEX_RESHIRAM,
        .categoryName = _("Blanco veraz"),
        .height = 32,
        .weight = 3300,
		.description = COMPOUND_STRING(
			"Cuando la cola de Reshiram arde, su\n"
			"energía calorífica altera la atmósfera,\n"
			"y el tiempo meteorológico cambia."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 445,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Reshiram,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Reshiram,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Reshiram,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Reshiram,
        .shinyPalette = gMonShinyPalette_Reshiram,
        .iconSprite = gMonIcon_Reshiram,
        .iconPalIndex = 0,
        SHADOW(-2, 12, SHADOW_SIZE_L)
        FOOTPRINT(Reshiram)
        OVERWORLD(
            sPicTable_Reshiram,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Reshiram,
            gShinyOverworldPalette_Reshiram
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sReshiramLevelUpLearnset,
        .teachableLearnset = sReshiramTeachableLearnset,
    },
#endif //P_FAMILY_RESHIRAM

#if P_FAMILY_ZEKROM
    [SPECIES_ZEKROM] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_ELECTRIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERAVOLT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zekrom"),
        .cryId = CRY_ZEKROM,
        .natDexNum = NATIONAL_DEX_ZEKROM,
        .categoryName = _("Negro puro"),
        .height = 29,
        .weight = 3450,
		.description = COMPOUND_STRING(
			"Genera electricidad con su cola y,\n"
			"para ocultarse, sobrevuela Teselia\n"
			"envuelto en nubes de rayos."),
        .pokemonScale = 275,
        .pokemonOffset = 2,
        .trainerScale = 412,
        .trainerOffset = 10,
        .frontPic = gMonFrontPic_Zekrom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zekrom,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Zekrom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Zekrom,
        .shinyPalette = gMonShinyPalette_Zekrom,
        .iconSprite = gMonIcon_Zekrom,
        .iconPalIndex = 2,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Zekrom)
        OVERWORLD(
            sPicTable_Zekrom,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zekrom,
            gShinyOverworldPalette_Zekrom
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZekromLevelUpLearnset,
        .teachableLearnset = sZekromTeachableLearnset,
    },
#endif //P_FAMILY_ZEKROM

#if P_FAMILY_LANDORUS
    [SPECIES_LANDORUS_INCARNATE] =
    {
        .baseHP        = 89,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 101,
        .baseSpAttack  = 115,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Landorus"),
        .cryId = CRY_LANDORUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_LANDORUS,
        .categoryName = _("Fertilidad"),
        .height = 15,
        .weight = 680,
        .description = COMPOUND_STRING(
            "La energía que brota de su cola incrementa\n"
            "la nutrición en el suelo, haciendo que los\n"
            "cultivos crezcan a gran tamaño. Ha sido\n"
            "llamado “El Guardián de los Campos.”"),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LandorusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_LandorusIncarnate,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_LandorusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_LandorusIncarnate,
        .shinyPalette = gMonShinyPalette_LandorusIncarnate,
        .iconSprite = gMonIcon_LandorusIncarnate,
        .iconPalIndex = 0,
        SHADOW(2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Landorus)
        OVERWORLD(
            sPicTable_LandorusIncarnate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_LandorusIncarnate,
            gShinyOverworldPalette_LandorusIncarnate
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLandorusLevelUpLearnset,
        .teachableLearnset = sLandorusTeachableLearnset,
        .formSpeciesIdTable = sLandorusFormSpeciesIdTable,
        .formChangeTable = sLandorusFormChangeTable,
    },

    [SPECIES_LANDORUS_THERIAN] =
    {
        .baseHP        = 89,
        .baseAttack    = 145,
        .baseDefense   = 90,
        .baseSpeed     = 91,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Landorus"),
        .cryId = CRY_LANDORUS_THERIAN,
        .natDexNum = NATIONAL_DEX_LANDORUS,
        .categoryName = _("Fertilidad"),
        .height = 13,
        .weight = 680,
        .description = COMPOUND_STRING(
            "Landorus vuela por el cielo en\n"
            "esta forma, otorgando cosechas abundantes\n"
            "a la tierra y ganándose la veneración\n"
            "de la gente."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LandorusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LandorusTherian,
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .backPic = gMonBackPic_LandorusTherian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_LandorusTherian,
        .shinyPalette = gMonShinyPalette_LandorusTherian,
        .iconSprite = gMonIcon_LandorusTherian,
        .iconPalIndex = 0,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Landorus)
        OVERWORLD(
            sPicTable_LandorusTherian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_LandorusTherian,
            gShinyOverworldPalette_LandorusTherian
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sLandorusLevelUpLearnset,
        .teachableLearnset = sLandorusTeachableLearnset,
        .formSpeciesIdTable = sLandorusFormSpeciesIdTable,
        .formChangeTable = sLandorusFormChangeTable,
    },
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_KYUREM
    [SPECIES_KYUREM] =
    {
        .baseHP        = 125,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_ICE),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 330 : 297,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Kyurem"),
        .cryId = CRY_KYUREM,
        .natDexNum = NATIONAL_DEX_KYUREM,
        .categoryName = _("Frontera"),
        .height = 30,
        .weight = 3250,
		.description = COMPOUND_STRING(
			"Produce en su interior una intensa\n"
			"energía gélida, y cualquier fuga hace\n"
			"que su cuerpo se congele."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 356,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kyurem,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Kyurem,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kyurem,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Kyurem,
        .shinyPalette = gMonShinyPalette_Kyurem,
        .iconSprite = gMonIcon_Kyurem,
        .iconPalIndex = 0,
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Kyurem)
        OVERWORLD(
            sPicTable_Kyurem,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kyurem,
            gShinyOverworldPalette_Kyurem
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKyuremLevelUpLearnset,
        .teachableLearnset = sKyuremTeachableLearnset,
        .formSpeciesIdTable = sKyuremFormSpeciesIdTable,
    },

#if P_FUSION_FORMS
    [SPECIES_KYUREM_WHITE] =
    {
        .baseHP        = 125,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 170,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_ICE),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 350,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 315,
    #else
        .expYield = 297,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TURBOBLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Kyurem"),
        .cryId = CRY_KYUREM_WHITE,
        .natDexNum = NATIONAL_DEX_KYUREM,
        .categoryName = _("Frontera"),
        .height = 36,
        .weight = 3250,
        .description = COMPOUND_STRING(
            "La similitud entre los genes de Reshiram y\n"
            "Kyurem permitió que Kyurem absorbiera a\n"
            "Reshiram. Ahora Kyurem puede usar el poder\n"
            "tanto del fuego como del hielo."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 356,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KyuremWhite,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KyuremWhite,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_KyuremWhite,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_KyuremWhite,
        .shinyPalette = gMonShinyPalette_KyuremWhite,
        .iconSprite = gMonIcon_KyuremWhite,
        .iconPalIndex = 0,
        SHADOW(-8, 14, SHADOW_SIZE_L)
        FOOTPRINT(Kyurem)
        OVERWORLD(
            sPicTable_KyuremWhite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_KyuremWhite,
            gShinyOverworldPalette_KyuremWhite
        )
        .isLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKyuremWhiteLevelUpLearnset,
        .teachableLearnset = sKyuremTeachableLearnset,
        .formSpeciesIdTable = sKyuremFormSpeciesIdTable,
    },

    [SPECIES_KYUREM_BLACK] =
    {
        .baseHP        = 125,
        .baseAttack    = 170,
        .baseDefense   = 100,
        .baseSpeed     = 95,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_ICE),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 350,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 315,
    #else
        .expYield = 297,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TERAVOLT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Kyurem"),
        .cryId = CRY_KYUREM_BLACK,
        .natDexNum = NATIONAL_DEX_KYUREM,
        .categoryName = _("Frontera"),
        .height = 33,
        .weight = 3250,
        .description = COMPOUND_STRING(
            "La similitud entre los genes de Zekrom y\n"
            "Kyurem permitió que Kyurem absorbiera a\n"
            "Zekrom. Ahora Kyurem puede usar el poder\n"
            "tanto de la electricidad como del hielo."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 356,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KyuremBlack,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KyuremBlack,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_KyuremBlack,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_KyuremBlack,
        .shinyPalette = gMonShinyPalette_KyuremBlack,
        .iconSprite = gMonIcon_KyuremBlack,
        .iconPalIndex = 0,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Kyurem)
        OVERWORLD(
            sPicTable_KyuremBlack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_KyuremBlack,
            gShinyOverworldPalette_KyuremBlack
        )
        .isLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sKyuremBlackLevelUpLearnset,
        .teachableLearnset = sKyuremTeachableLearnset,
        .formSpeciesIdTable = sKyuremFormSpeciesIdTable,
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM

#if P_FAMILY_KELDEO
    [SPECIES_KELDEO_ORDINARY] =
{
    .baseHP        = 91,
    .baseAttack    = 72,
    .baseDefense   = 90,
    .baseSpeed     = 108,
    .baseSpAttack  = 129,
    .baseSpDefense = 90,
    .types = MON_TYPES(TYPE_WATER, TYPE_FIGHTING),
    .catchRate = 3,
    .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
    .evYield_SpAttack = 3,
    .genderRatio = MON_GENDERLESS,
    .eggCycles = 80,
    .friendship = 35,
    .growthRate = GROWTH_SLOW,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    .abilities = { ABILITY_JUSTIFIED, ABILITY_NONE, ABILITY_NONE },
    .bodyColor = BODY_COLOR_YELLOW,
    .speciesName = _("Keldeo"),
    .cryId = CRY_KELDEO,
    .natDexNum = NATIONAL_DEX_KELDEO,
    .categoryName = _("Potro"),
    .height = 14,
    .weight = 485,
    .description = COMPOUND_STRING(
        "Cuando está decidido, se llena de\n"
        "poder y se vuelve más rápido. Cruza\n"
        "el mundo corriendo sobre la superficie\n"
        "de océanos y ríos."),
    .pokemonScale = 265,
    .pokemonOffset = 2,
    .trainerScale = 262,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_KeldeoOrdinary,
    .frontPicSize = MON_COORDS_SIZE(56, 56),
    .frontPicYOffset = 5,
    .frontAnimFrames = sAnims_KeldeoOrdinary,
    .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
    .backPic = gMonBackPic_KeldeoOrdinary,
    .backPicSize = MON_COORDS_SIZE(56, 64),
    .backPicYOffset = 4,
    .backAnimId = BACK_ANIM_JOLT_RIGHT,
    .palette = gMonPalette_KeldeoOrdinary,
    .shinyPalette = gMonShinyPalette_KeldeoOrdinary,
    .iconSprite = gMonIcon_KeldeoOrdinary,
    .iconPalIndex = 0,
        SHADOW(-2, 8, SHADOW_SIZE_M)
    FOOTPRINT(Keldeo)
    OVERWORLD(
        sPicTable_KeldeoOrdinary,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_FOOT,
        gOverworldPalette_KeldeoOrdinary,
        gShinyOverworldPalette_KeldeoOrdinary
    )
    .isMythical = TRUE,
    .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    .levelUpLearnset = sKeldeoLevelUpLearnset,
    .teachableLearnset = sKeldeoTeachableLearnset,
    .formSpeciesIdTable = sKeldeoFormSpeciesIdTable,
    .formChangeTable = sKeldeoFormChangeTable,
},

[SPECIES_KELDEO_RESOLUTE] =
{
    .baseHP        = 91,
    .baseAttack    = 72,
    .baseDefense   = 90,
    .baseSpeed     = 108,
    .baseSpAttack  = 129,
    .baseSpDefense = 90,
    .types = MON_TYPES(TYPE_WATER, TYPE_FIGHTING),
    .catchRate = 3,
    .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
    .evYield_SpAttack = 3,
    .genderRatio = MON_GENDERLESS,
    .eggCycles = 80,
    .friendship = 35,
    .growthRate = GROWTH_SLOW,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    .abilities = { ABILITY_JUSTIFIED, ABILITY_NONE, ABILITY_NONE },
    .bodyColor = BODY_COLOR_YELLOW,
    .noFlip = TRUE,
    .speciesName = _("Keldeo"),
    .cryId = CRY_KELDEO,
    .natDexNum = NATIONAL_DEX_KELDEO,
    .categoryName = _("Potro"),
    .height = 14,
    .weight = 485,
    .description = COMPOUND_STRING(
        "El poder que yacía oculto en su cuerpo\n"
        "ahora cubre su cuerno, convirtiéndolo\n"
        "en una espada que puede cortar a través\n"
        "de cualquier cosa."),
    .pokemonScale = 265,
    .pokemonOffset = 2,
    .trainerScale = 262,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_KeldeoResolute,
    .frontPicSize = MON_COORDS_SIZE(64, 64),
    .frontPicYOffset = 2,
    .frontAnimFrames = sAnims_KeldeoResolute,
    .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
    .backPic = gMonBackPic_KeldeoResolute,
    .backPicSize = MON_COORDS_SIZE(64, 64),
    .backPicYOffset = 3,
    .backAnimId = BACK_ANIM_GROW_STUTTER,
    .palette = gMonPalette_KeldeoResolute,
    .shinyPalette = gMonShinyPalette_KeldeoResolute,
    .iconSprite = gMonIcon_KeldeoResolute,
    .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_M)
    FOOTPRINT(Keldeo)
    .isMythical = TRUE,
    .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    .levelUpLearnset = sKeldeoLevelUpLearnset,
    .teachableLearnset = sKeldeoTeachableLearnset,
    .formSpeciesIdTable = sKeldeoFormSpeciesIdTable,
    .formChangeTable = sKeldeoFormChangeTable,
},
#endif //P_FAMILY_KELDEO

#if P_FAMILY_MELOETTA
    [SPECIES_MELOETTA_ARIA] =
    {
        .baseHP        = 100,
        .baseAttack    = 77,
        .baseDefense   = 77,
        .baseSpeed     = 90,
        .baseSpAttack  = 128,
        .baseSpDefense = 128,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Meloetta"),
        .cryId = CRY_MELOETTA,
        .natDexNum = NATIONAL_DEX_MELOETTA,
        .categoryName = _("Melodía"),
        .height = 6,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Sus melodías tienen el poder\n"
            "de hacer que los que las escuchan\n"
            "se sientan felices o tristes. Ha\n"
            "inspirado muchas canciones famosas."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeloettaAria,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MeloettaAria,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_MeloettaAria,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_MeloettaAria,
        .shinyPalette = gMonShinyPalette_MeloettaAria,
        .iconSprite = gMonIcon_MeloettaAria,
        .iconPalIndex = 4,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Meloetta)
        OVERWORLD(
            sPicTable_MeloettaAria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeloettaAria,
            gShinyOverworldPalette_MeloettaAria
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMeloettaLevelUpLearnset,
        .teachableLearnset = sMeloettaTeachableLearnset,
        .formSpeciesIdTable = sMeloettaFormSpeciesIdTable,
        .formChangeTable = sMeloettaFormChangeTable,
    },

    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .baseHP        = 100,
        .baseAttack    = 128,
        .baseDefense   = 90,
        .baseSpeed     = 128,
        .baseSpAttack  = 77,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .evYield_Speed = 1,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Meloetta"),
        .cryId = CRY_MELOETTA,
        .natDexNum = NATIONAL_DEX_MELOETTA,
        .categoryName = _("Melodía"),
        .height = 6,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Las melodías son cantadas con\n"
            "un método vocal especial que puede\n"
            "controlar los sentimientos."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeloettaPirouette,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MeloettaPirouette,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_MeloettaPirouette,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_MeloettaPirouette,
        .shinyPalette = gMonShinyPalette_MeloettaPirouette,
        .iconSprite = gMonIcon_MeloettaPirouette,
        .iconPalIndex = 0,
        SHADOW(0, 16, SHADOW_SIZE_S)
        FOOTPRINT(Meloetta)
        OVERWORLD(
            sPicTable_MeloettaPirouette,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeloettaPirouette,
            gShinyOverworldPalette_MeloettaPirouette
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMeloettaLevelUpLearnset,
        .teachableLearnset = sMeloettaTeachableLearnset,
        .formSpeciesIdTable = sMeloettaFormSpeciesIdTable,
        .formChangeTable = sMeloettaFormChangeTable,
    },
#endif //P_FAMILY_MELOETTA

#if P_FAMILY_GENESECT
#define GENESECT_SPECIES_INFO(form)                                                 \
    {                                                                               \
        .baseHP        = 71,                                                        \
        .baseAttack    = 120,                                                       \
        .baseDefense   = 95,                                                        \
        .baseSpeed     = 99,                                                        \
        .baseSpAttack  = 120,                                                       \
        .baseSpDefense = 95,                                                        \
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),                                   \
        .catchRate = 3,                                                             \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,                    \
        .evYield_Attack = 1,                                                        \
        .evYield_Speed = 1,                                                         \
        .evYield_SpAttack = 1,                                                      \
        .genderRatio = MON_GENDERLESS,                                              \
        .eggCycles = 120,                                                           \
        .friendship = 0,                                                            \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                  \
        .abilities = { ABILITY_DOWNLOAD, ABILITY_NONE, ABILITY_NONE },              \
        .bodyColor = BODY_COLOR_PURPLE,                                             \
        .speciesName = _("Genesect"),                                               \
        .cryId = CRY_GENESECT,                                                      \
        .natDexNum = NATIONAL_DEX_GENESECT,                                         \
        .categoryName = _("Paleozoic"),                                             \
        .height = 15,                                                               \
        .weight = 825,                                                              \
        .description = gGenesectPokedexText,                                        \
        .pokemonScale = 268,                                                        \
        .pokemonOffset = 2,                                                         \
        .trainerScale = 271,                                                        \
        .trainerOffset = 0,                                                         \
        .frontPic = gMonFrontPic_Genesect,                                          \
        .frontPicSize = MON_COORDS_SIZE(56, 64),                                    \
        .frontPicYOffset = 0,                                                       \
        .frontAnimFrames = sAnims_Genesect,                                         \
        .frontAnimId = ANIM_H_VIBRATE,                                              \
        .backPic = gMonBackPic_Genesect,                                            \
        .backPicSize = MON_COORDS_SIZE(64, 48),                                     \
        .backPicYOffset = 8,                                                        \
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,                            \
        .palette = gMonPalette_##form,                                              \
        .shinyPalette = gMonShinyPalette_##form,                                    \
        .iconSprite = gMonIcon_Genesect,                                            \
        .iconPalIndex = 2,                                                          \
        SHADOW(5, 13, SHADOW_SIZE_L)                                                \
        FOOTPRINT(Genesect)                                                         \
        OVERWORLD(                                                                  \
            sPicTable_Genesect,                                                     \
            SIZE_32x32,                                                             \
            SHADOW_SIZE_M,                                                          \
            TRACKS_FOOT,                                                            \
            gOverworldPalette_Genesect,                                             \
            gShinyOverworldPalette_Genesect                                         \
        )                                                                           \
        .levelUpLearnset = sGenesectLevelUpLearnset,                                \
        .teachableLearnset = sGenesectTeachableLearnset,                            \
        .formSpeciesIdTable = sGenesectFormSpeciesIdTable,                          \
        .formChangeTable = sGenesectFormChangeTable,                                \
        .isMythical = TRUE,                                                         \
        .isFrontierBanned = TRUE,                                                   \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT, \
    }

    [SPECIES_GENESECT]             = GENESECT_SPECIES_INFO(Genesect),
    [SPECIES_GENESECT_DOUSE] = GENESECT_SPECIES_INFO(GenesectDouseDrive),
    [SPECIES_GENESECT_SHOCK] = GENESECT_SPECIES_INFO(GenesectShockDrive),
    [SPECIES_GENESECT_BURN]  = GENESECT_SPECIES_INFO(GenesectBurnDrive),
    [SPECIES_GENESECT_CHILL] = GENESECT_SPECIES_INFO(GenesectChillDrive),
#endif //P_FAMILY_GENESECT

#ifdef __INTELLISENSE__
};
#endif
