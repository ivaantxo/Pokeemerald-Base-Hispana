#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen6[] =
{
#endif

#if P_FAMILY_CHESPIN
    [SPECIES_CHESPIN] =
    {
        .baseHP        = 56,
        .baseAttack    = 61,
        .baseDefense   = 65,
        .baseSpeed     = 38,
        .baseSpAttack  = 48,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chespin"),
        .cryId = CRY_CHESPIN,
        .natDexNum = NATIONAL_DEX_CHESPIN,
        .categoryName = _("Erizo"),
        .height = 4,
        .weight = 90,
		.description = COMPOUND_STRING(
			"Cuando acumula energía, las suaves\n"
			"púas de su cabeza se vuelven tan duras y\n"
			"afiladas que hasta pueden atravesar\n"
			"rocas."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chespin,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Chespin,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Chespin,
        .shinyPalette = gMonShinyPalette_Chespin,
        .iconSprite = gMonIcon_Chespin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chespin)
        OVERWORLD(
            sPicTable_Chespin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chespin,
            gShinyOverworldPalette_Chespin
        )
        .levelUpLearnset = sChespinLevelUpLearnset,
        .teachableLearnset = sChespinTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUILLADIN}),
    },

    [SPECIES_QUILLADIN] =
    {
        .baseHP        = 61,
        .baseAttack    = 78,
        .baseDefense   = 95,
        .baseSpeed     = 57,
        .baseSpAttack  = 56,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Quilladin"),
        .cryId = CRY_QUILLADIN,
        .natDexNum = NATIONAL_DEX_QUILLADIN,
        .categoryName = _("Corazaespín"),
        .height = 7,
        .weight = 290,
		.description = COMPOUND_STRING(
			"Desvía los ataques de los enemigos con\n"
			"la robusta coraza que cubre su cuerpo\n"
			"y contraataca con sus dos afilados\n"
			"cuernos."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quilladin,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Quilladin,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Quilladin,
        .shinyPalette = gMonShinyPalette_Quilladin,
        .iconSprite = gMonIcon_Quilladin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Quilladin)
        OVERWORLD(
            sPicTable_Quilladin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quilladin,
            gShinyOverworldPalette_Quilladin
        )
        .levelUpLearnset = sQuilladinLevelUpLearnset,
        .teachableLearnset = sQuilladinTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CHESNAUGHT}),
    },

    [SPECIES_CHESNAUGHT] =
    {
        .baseHP        = 88,
        .baseAttack    = 107,
        .baseDefense   = 122,
        .baseSpeed     = 64,
        .baseSpAttack  = 74,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chesnaught"),
        .cryId = CRY_CHESNAUGHT,
        .natDexNum = NATIONAL_DEX_CHESNAUGHT,
        .categoryName = _("Corazaespín"),
        .height = 16,
        .weight = 900,
		.description = COMPOUND_STRING(
			"Cuando adopta una postura defensiva\n"
			"juntando ambos puños delante de la cara,\n"
			"es capaz de resistir incluso el impacto\n"
			"directo de una bomba."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Chesnaught,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Chesnaught,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Chesnaught,
        .shinyPalette = gMonShinyPalette_Chesnaught,
        .iconSprite = gMonIcon_Chesnaught,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 10, SHADOW_SIZE_L)
        FOOTPRINT(Chesnaught)
        OVERWORLD(
            sPicTable_Chesnaught,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chesnaught,
            gShinyOverworldPalette_Chesnaught
        )
        .levelUpLearnset = sChesnaughtLevelUpLearnset,
        .teachableLearnset = sChesnaughtTeachableLearnset,
    },
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
    [SPECIES_FENNEKIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fennekin"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_FENNEKIN,
        .categoryName = _("Zorro"),
        .height = 4,
        .weight = 94,
		.description = COMPOUND_STRING(
			"Mordisquea una ramita mientras camina,\n"
			"como si de un aperitivo se tratase.\n"
			"Intimida a su enemigo expulsando aire\n"
			"caliente por las orejas."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fennekin,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fennekin,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Fennekin,
        .shinyPalette = gMonShinyPalette_Fennekin,
        .iconSprite = gMonIcon_Fennekin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Fennekin)
        OVERWORLD(
            sPicTable_Fennekin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fennekin,
            gShinyOverworldPalette_Fennekin
        )
        .levelUpLearnset = sFennekinLevelUpLearnset,
        .teachableLearnset = sFennekinTeachableLearnset,
        .eggMoveLearnset = sFennekinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BRAIXEN}),
    },

    [SPECIES_BRAIXEN] =
    {
        .baseHP        = 59,
        .baseAttack    = 59,
        .baseDefense   = 58,
        .baseSpeed     = 73,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 143,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Braixen"),
        .cryId = CRY_BRAIXEN,
        .natDexNum = NATIONAL_DEX_BRAIXEN,
        .categoryName = _("Zorro"),
        .height = 10,
        .weight = 145,
		.description = COMPOUND_STRING(
			"Tiene una rama enredada en la cola.\n"
			"Cuando la saca, la rama prende fuego\n"
			"al hacer fricción con su pelaje y se\n"
			"lanza al ataque con ella."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Braixen,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Braixen,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Braixen,
        .shinyPalette = gMonShinyPalette_Braixen,
        .iconSprite = gMonIcon_Braixen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Braixen)
        OVERWORLD(
            sPicTable_Braixen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Braixen,
            gShinyOverworldPalette_Braixen
        )
        .levelUpLearnset = sBraixenLevelUpLearnset,
        .teachableLearnset = sBraixenTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_DELPHOX}),
    },

    [SPECIES_DELPHOX] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 104,
        .baseSpAttack  = 114,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIRE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 267 : 240,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delphox"),
        .cryId = CRY_DELPHOX,
        .natDexNum = NATIONAL_DEX_DELPHOX,
        .categoryName = _("Zorro"),
        .height = 15,
        .weight = 390,
		.description = COMPOUND_STRING(
			"Fija la mirada en la llama que arde en\n"
			"la punta de su bastón para concentrarse\n"
			"y prever sucesos que tienen lugar\n"
			"en el futuro."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delphox,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
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
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Delphox,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Delphox,
        .shinyPalette = gMonShinyPalette_Delphox,
        .iconSprite = gMonIcon_Delphox,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Delphox)
        OVERWORLD(
            sPicTable_Delphox,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Delphox,
            gShinyOverworldPalette_Delphox
        )
        .levelUpLearnset = sDelphoxLevelUpLearnset,
        .teachableLearnset = sDelphoxTeachableLearnset,
    },
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
    [SPECIES_FROAKIE] =
    {
        .baseHP        = 41,
        .baseAttack    = 56,
        .baseDefense   = 40,
        .baseSpeed     = 71,
        .baseSpAttack  = 62,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Froakie"),
        .cryId = CRY_FROAKIE,
        .natDexNum = NATIONAL_DEX_FROAKIE,
        .categoryName = _("Burburrana"),
        .height = 3,
        .weight = 70,
		.description = COMPOUND_STRING(
			"Secreta burbujas tanto por la espalda\n"
			"como por el pecho. Gracias a la\n"
			"elasticidad de estas, puede parar\n"
			"ataques y reducir el daño recibido."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Froakie,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
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
        .backPic = gMonBackPic_Froakie,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Froakie,
        .shinyPalette = gMonShinyPalette_Froakie,
        .iconSprite = gMonIcon_Froakie,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Froakie)
        OVERWORLD(
            sPicTable_Froakie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Froakie,
            gShinyOverworldPalette_Froakie
        )
        .levelUpLearnset = sFroakieLevelUpLearnset,
        .teachableLearnset = sFroakieTeachableLearnset,
        .eggMoveLearnset = sFroakieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FROGADIER}),
    },

    [SPECIES_FROGADIER] =
    {
        .baseHP        = 54,
        .baseAttack    = 63,
        .baseDefense   = 52,
        .baseSpeed     = 97,
        .baseSpAttack  = 83,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Frogadier"),
        .cryId = CRY_FROGADIER,
        .natDexNum = NATIONAL_DEX_FROGADIER,
        .categoryName = _("Burburrana"),
        .height = 6,
        .weight = 109,
		.description = COMPOUND_STRING(
			"Puede lanzar piedras envueltas en\n"
			"burbujas con tal puntería, que acierta\n"
			"latas vacías a 30 metros de distancia."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frogadier,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Frogadier,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Frogadier,
        .shinyPalette = gMonShinyPalette_Frogadier,
        .iconSprite = gMonIcon_Frogadier,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Frogadier)
        OVERWORLD(
            sPicTable_Frogadier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frogadier,
            gShinyOverworldPalette_Frogadier
        )
        .levelUpLearnset = sFrogadierLevelUpLearnset,
        .teachableLearnset = sFrogadierTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GRENINJA}),
    },

    [SPECIES_GRENINJA] =
    {
        .baseHP        = 72,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 122,
        .baseSpAttack  = 103,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Greninja"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greninja,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Greninja,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greninja,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Greninja,
        .shinyPalette = gMonShinyPalette_Greninja,
        .iconSprite = gMonIcon_Greninja,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
        OVERWORLD(
            sPicTable_Greninja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Greninja,
            gShinyOverworldPalette_Greninja
        )
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .formSpeciesIdTable = sGreninjaFormSpeciesIdTable,
    },

    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        .baseHP        = 72,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 122,
        .baseSpAttack  = 103,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 265 : 239,
        .evYield_Speed = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BATTLE_BOND, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Greninja"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Greninja,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames =sAnims_Greninja,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greninja,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Greninja,
        .shinyPalette = gMonShinyPalette_Greninja,
        .iconSprite = gMonIcon_Greninja,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
        OVERWORLD(
            sPicTable_Greninja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Greninja,
            gShinyOverworldPalette_Greninja
        )
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .formSpeciesIdTable = sGreninjaFormSpeciesIdTable,
        .formChangeTable = sGreninjaBattleBondFormChangeTable,
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .baseHP        = 72,
        .baseAttack    = 145,
        .baseDefense   = 67,
        .baseSpeed     = 132,
        .baseSpAttack  = 153,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = 288,
        .evYield_Speed = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BATTLE_BOND, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Greninja"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GreninjaAsh,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_GreninjaAsh,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_GreninjaAsh,
        .shinyPalette = gMonShinyPalette_GreninjaAsh,
        .iconSprite = gMonIcon_GreninjaAsh,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GreninjaAsh,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GreninjaAsh,
            gShinyOverworldPalette_GreninjaAsh
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .levelUpLearnset = sGreninjaLevelUpLearnset,
        .teachableLearnset = sGreninjaTeachableLearnset,
        .formSpeciesIdTable = sGreninjaFormSpeciesIdTable,
        .formChangeTable = sGreninjaBattleBondFormChangeTable,
    },
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
    [SPECIES_BUNNELBY] =
    {
        .baseHP        = 38,
        .baseAttack    = 36,
        .baseDefense   = 38,
        .baseSpeed     = 57,
        .baseSpAttack  = 32,
        .baseSpDefense = 36,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 47,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bunnelby"),
        .cryId = CRY_BUNNELBY,
        .natDexNum = NATIONAL_DEX_BUNNELBY,
        .categoryName = _("Excavador"),
        .height = 4,
        .weight = 50,
		.description = COMPOUND_STRING(
			"Usa sus grandes orejas para excavar en\n"
			"la tierra y así crear madrigueras.\n"
			"Puede pasarse una noche entera cavando\n"
			"sin parar."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bunnelby,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Bunnelby,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Bunnelby,
        .shinyPalette = gMonShinyPalette_Bunnelby,
        .iconSprite = gMonIcon_Bunnelby,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 9, SHADOW_SIZE_S)
        FOOTPRINT(Bunnelby)
        OVERWORLD(
            sPicTable_Bunnelby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bunnelby,
            gShinyOverworldPalette_Bunnelby
        )
        .levelUpLearnset = sBunnelbyLevelUpLearnset,
        .teachableLearnset = sBunnelbyTeachableLearnset,
        .eggMoveLearnset = sBunnelbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_DIGGERSBY}),
    },

    [SPECIES_DIGGERSBY] =
    {
        .baseHP        = 85,
        .baseAttack    = 56,
        .baseDefense   = 77,
        .baseSpeed     = 78,
        .baseSpAttack  = 50,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GROUND),
        .catchRate = 127,
        .expYield = 148,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Diggersby"),
        .cryId = CRY_DIGGERSBY,
        .natDexNum = NATIONAL_DEX_DIGGERSBY,
        .categoryName = _("Excavador"),
        .height = 10,
        .weight = 424,
		.description = COMPOUND_STRING(
			"Sus orejas, tan poderosas como una\n"
			"excavadora, pueden hacer añicos hasta\n"
			"la roca más sólida. Cuando termina de\n"
			"cavar, se toma un respiro."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Diggersby,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Diggersby,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Diggersby,
        .shinyPalette = gMonShinyPalette_Diggersby,
        .iconSprite = gMonIcon_Diggersby,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 10, SHADOW_SIZE_M)
        FOOTPRINT(Diggersby)
        OVERWORLD(
            sPicTable_Diggersby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Diggersby,
            gShinyOverworldPalette_Diggersby
        )
        .levelUpLearnset = sDiggersbyLevelUpLearnset,
        .teachableLearnset = sDiggersbyTeachableLearnset,
    },
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
    [SPECIES_FLETCHLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 43,
        .baseSpeed     = 62,
        .baseSpAttack  = 40,
        .baseSpDefense = 38,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_NONE, ABILITY_GALE_WINGS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fletchling"),
        .cryId = CRY_FLETCHLING,
        .natDexNum = NATIONAL_DEX_FLETCHLING,
        .categoryName = _("Petirrojo"),
        .height = 3,
        .weight = 17,
		.description = COMPOUND_STRING(
			"Es muy amigable y se comunica con\n"
			"sus aliados mediante melodiosos gorjeos\n"
			"y el movimiento de su cola y sus\n"
			"gráciles alas."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fletchling,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Fletchling,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Fletchling,
        .shinyPalette = gMonShinyPalette_Fletchling,
        .iconSprite = gMonIcon_Fletchling,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Fletchling)
        OVERWORLD(
            sPicTable_Fletchling,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fletchling,
            gShinyOverworldPalette_Fletchling
        )
        .levelUpLearnset = sFletchlingLevelUpLearnset,
        .teachableLearnset = sFletchlingTeachableLearnset,
        .eggMoveLearnset = sFletchlingEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 17, SPECIES_FLETCHINDER}),
    },

    [SPECIES_FLETCHINDER] =
    {
        .baseHP        = 62,
        .baseAttack    = 73,
        .baseDefense   = 55,
        .baseSpeed     = 84,
        .baseSpAttack  = 56,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 120,
        .expYield = 134,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fletchinder"),
        .cryId = CRY_FLETCHINDER,
        .natDexNum = NATIONAL_DEX_FLETCHINDER,
        .categoryName = _("Lumbre"),
        .height = 7,
        .weight = 160,
		.description = COMPOUND_STRING(
			"No tolera bajo ningún concepto que \n"
			"otro Fletchinder invada su territorio,\n"
			"cuyo radio abarca varios kilómetros."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fletchinder,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Fletchinder,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Fletchinder,
        .shinyPalette = gMonShinyPalette_Fletchinder,
        .iconSprite = gMonIcon_Fletchinder,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Fletchinder)
        OVERWORLD(
            sPicTable_Fletchinder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fletchinder,
            gShinyOverworldPalette_Fletchinder
        )
        .levelUpLearnset = sFletchinderLevelUpLearnset,
        .teachableLearnset = sFletchinderTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_TALONFLAME}),
    },

    [SPECIES_TALONFLAME] =
    {
        .baseHP        = 78,
        .baseAttack    = 81,
        .baseDefense   = 71,
        .baseSpeed     = 126,
        .baseSpAttack  = 74,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Talonflame"),
        .cryId = CRY_TALONFLAME,
        .natDexNum = NATIONAL_DEX_TALONFLAME,
        .categoryName = _("Flamígero"),
        .height = 12,
        .weight = 245,
		.description = COMPOUND_STRING(
			"Si se exalta durante un combate reñido,\n"
			"arroja chispas y ascuas de los\n"
			"intersticios entre su plumaje\n"
			"mientras vuela."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Talonflame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Talonflame,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Talonflame,
        .shinyPalette = gMonShinyPalette_Talonflame,
        .iconSprite = gMonIcon_Talonflame,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Talonflame)
        OVERWORLD(
            sPicTable_Talonflame,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Talonflame,
            gShinyOverworldPalette_Talonflame
        )
        .levelUpLearnset = sTalonflameLevelUpLearnset,
        .teachableLearnset = sTalonflameTeachableLearnset,
    },
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
#define SCATTERBUG_SPECIES_INFO(evolution)                                                  \
    {                                                                                       \
        .baseHP        = 38,                                                                \
        .baseAttack    = 35,                                                                \
        .baseDefense   = 40,                                                                \
        .baseSpeed     = 35,                                                                \
        .baseSpAttack  = 27,                                                                \
        .baseSpDefense = 25,                                                                \
        .types = MON_TYPES(TYPE_BUG),                                                       \
        .catchRate = 255,                                                                   \
        .expYield = 40,                                                                     \
        .evYield_Defense = 1,                                                               \
        .genderRatio = PERCENT_FEMALE(50),                                                  \
        .eggCycles = 15,                                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                                         \
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD },  \
        .bodyColor = BODY_COLOR_BLACK,                                                      \
        .speciesName = _("Scatterbug"),                                                     \
        .cryId = CRY_SCATTERBUG,                                                            \
        .natDexNum = NATIONAL_DEX_SCATTERBUG,                                               \
        .categoryName = _("Tiraescamas"),                                                   \
        .height = 3,                                                                        \
        .weight = 25,                                                                       \
        .description = gScatterbugPokedexText,                                              \
        .pokemonScale = 530,                                                                \
        .pokemonOffset = 13,                                                                \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
        .frontPic = gMonFrontPic_Scatterbug,                                                \
        .frontPicSize = MON_COORDS_SIZE(32, 48),                                            \
        .frontPicYOffset = 13,                                                              \
        .frontAnimFrames = sAnims_Scatterbug,                                               \
        .frontAnimId = ANIM_V_STRETCH,                                                      \
        .backPic = gMonBackPic_Scatterbug,                                                  \
        .backPicSize = MON_COORDS_SIZE(40, 56),                                             \
        .backPicYOffset = 12,                                                               \
        .backAnimId = BACK_ANIM_H_SLIDE,                                                    \
        .palette = gMonPalette_Scatterbug,                                                  \
        .shinyPalette = gMonShinyPalette_Scatterbug,                                        \
        .iconSprite = gMonIcon_Scatterbug,                                                  \
        .iconPalIndex = 1,                                                                  \
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,                                             \
        SHADOW(1, 1, SHADOW_SIZE_S)                                                         \
        FOOTPRINT(Scatterbug)                                                               \
        OVERWORLD(                                                                          \
            sPicTable_Scatterbug,                                                           \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Scatterbug,                                                   \
            gShinyOverworldPalette_Scatterbug                                               \
        )                                                                                   \
        .tmIlliterate = TRUE,                                                               \
        .levelUpLearnset = sScatterbugLevelUpLearnset,                                      \
        .teachableLearnset = sScatterbugTeachableLearnset,                                  \
        .eggMoveLearnset = sScatterbugEggMoveLearnset,                                      \
        .formSpeciesIdTable = sScatterbugFormSpeciesIdTable,                                \
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_SPEWPA_##evolution}),                \
    }                                                                                       \

    [SPECIES_SCATTERBUG_ICY_SNOW]    = SCATTERBUG_SPECIES_INFO(ICY_SNOW),
    [SPECIES_SCATTERBUG_POLAR]       = SCATTERBUG_SPECIES_INFO(POLAR),
    [SPECIES_SCATTERBUG_TUNDRA]      = SCATTERBUG_SPECIES_INFO(TUNDRA),
    [SPECIES_SCATTERBUG_CONTINENTAL] = SCATTERBUG_SPECIES_INFO(CONTINENTAL),
    [SPECIES_SCATTERBUG_GARDEN]      = SCATTERBUG_SPECIES_INFO(GARDEN),
    [SPECIES_SCATTERBUG_ELEGANT]     = SCATTERBUG_SPECIES_INFO(ELEGANT),
    [SPECIES_SCATTERBUG_MEADOW]      = SCATTERBUG_SPECIES_INFO(MEADOW),
    [SPECIES_SCATTERBUG_MODERN]      = SCATTERBUG_SPECIES_INFO(MODERN),
    [SPECIES_SCATTERBUG_MARINE]      = SCATTERBUG_SPECIES_INFO(MARINE),
    [SPECIES_SCATTERBUG_ARCHIPELAGO] = SCATTERBUG_SPECIES_INFO(ARCHIPELAGO),
    [SPECIES_SCATTERBUG_HIGH_PLAINS] = SCATTERBUG_SPECIES_INFO(HIGH_PLAINS),
    [SPECIES_SCATTERBUG_SANDSTORM]   = SCATTERBUG_SPECIES_INFO(SANDSTORM),
    [SPECIES_SCATTERBUG_RIVER]       = SCATTERBUG_SPECIES_INFO(RIVER),
    [SPECIES_SCATTERBUG_MONSOON]     = SCATTERBUG_SPECIES_INFO(MONSOON),
    [SPECIES_SCATTERBUG_SAVANNA]     = SCATTERBUG_SPECIES_INFO(SAVANNA),
    [SPECIES_SCATTERBUG_SUN]         = SCATTERBUG_SPECIES_INFO(SUN),
    [SPECIES_SCATTERBUG_OCEAN]       = SCATTERBUG_SPECIES_INFO(OCEAN),
    [SPECIES_SCATTERBUG_JUNGLE]      = SCATTERBUG_SPECIES_INFO(JUNGLE),
    [SPECIES_SCATTERBUG_FANCY]       = SCATTERBUG_SPECIES_INFO(FANCY),
    [SPECIES_SCATTERBUG_POKEBALL]    = SCATTERBUG_SPECIES_INFO(POKEBALL),

#define SPEWPA_SPECIES_INFO(evolution)                                          \
    {                                                                           \
        .baseHP        = 45,                                                    \
        .baseAttack    = 22,                                                    \
        .baseDefense   = 60,                                                    \
        .baseSpeed     = 29,                                                    \
        .baseSpAttack  = 27,                                                    \
        .baseSpDefense = 30,                                                    \
        .types = MON_TYPES(TYPE_BUG),                                           \
        .catchRate = 120,                                                       \
        .expYield = 75,                                                         \
        .evYield_Defense = 2,                                                   \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                             \
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_FRIEND_GUARD }, \
        .bodyColor = BODY_COLOR_BLACK,                                          \
        .speciesName = _("Spewpa"),                                             \
        .cryId = CRY_SPEWPA,                                                    \
        .natDexNum = NATIONAL_DEX_SPEWPA,                                       \
        .categoryName = _("Tiraescamas"),                                       \
        .height = 3,                                                            \
        .weight = 84,                                                           \
        .description = gSpewpaPokedexText,                                      \
        .pokemonScale = 530,                                                    \
        .pokemonOffset = 13,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Spewpa,                                        \
        .frontPicSize = MON_COORDS_SIZE(40, 48),                                \
        .frontPicYOffset = 11,                                                  \
        .frontAnimFrames = sAnims_Spewpa,                                       \
        .frontAnimId = ANIM_V_SHAKE,                                            \
        .backPic = gMonBackPic_Spewpa,                                          \
        .backPicSize = MON_COORDS_SIZE(48, 48),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_H_VIBRATE,                                      \
        .palette = gMonPalette_Spewpa,                                          \
        .shinyPalette = gMonShinyPalette_Spewpa,                                \
        .iconSprite = gMonIcon_Spewpa,                                          \
        .iconPalIndex = 1,                                                      \
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,                               \
        SHADOW(0, 2, SHADOW_SIZE_M)                                             \
        FOOTPRINT(Spewpa)                                                       \
        OVERWORLD(                                                              \
            sPicTable_Spewpa,                                                   \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Spewpa,                                           \
            gShinyOverworldPalette_Spewpa                                       \
        )                                                                       \
        .tmIlliterate = TRUE,                                                   \
        .levelUpLearnset = sSpewpaLevelUpLearnset,                              \
        .teachableLearnset = sSpewpaTeachableLearnset,                          \
        .formSpeciesIdTable = sSpewpaFormSpeciesIdTable,                        \
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_VIVILLON_##evolution}), \
    }

    [SPECIES_SPEWPA_ICY_SNOW]    = SPEWPA_SPECIES_INFO(ICY_SNOW),
    [SPECIES_SPEWPA_POLAR]       = SPEWPA_SPECIES_INFO(POLAR),
    [SPECIES_SPEWPA_TUNDRA]      = SPEWPA_SPECIES_INFO(TUNDRA),
    [SPECIES_SPEWPA_CONTINENTAL] = SPEWPA_SPECIES_INFO(CONTINENTAL),
    [SPECIES_SPEWPA_GARDEN]      = SPEWPA_SPECIES_INFO(GARDEN),
    [SPECIES_SPEWPA_ELEGANT]     = SPEWPA_SPECIES_INFO(ELEGANT),
    [SPECIES_SPEWPA_MEADOW]      = SPEWPA_SPECIES_INFO(MEADOW),
    [SPECIES_SPEWPA_MODERN]      = SPEWPA_SPECIES_INFO(MODERN),
    [SPECIES_SPEWPA_MARINE]      = SPEWPA_SPECIES_INFO(MARINE),
    [SPECIES_SPEWPA_ARCHIPELAGO] = SPEWPA_SPECIES_INFO(ARCHIPELAGO),
    [SPECIES_SPEWPA_HIGH_PLAINS] = SPEWPA_SPECIES_INFO(HIGH_PLAINS),
    [SPECIES_SPEWPA_SANDSTORM]   = SPEWPA_SPECIES_INFO(SANDSTORM),
    [SPECIES_SPEWPA_RIVER]       = SPEWPA_SPECIES_INFO(RIVER),
    [SPECIES_SPEWPA_MONSOON]     = SPEWPA_SPECIES_INFO(MONSOON),
    [SPECIES_SPEWPA_SAVANNA]     = SPEWPA_SPECIES_INFO(SAVANNA),
    [SPECIES_SPEWPA_SUN]         = SPEWPA_SPECIES_INFO(SUN),
    [SPECIES_SPEWPA_OCEAN]       = SPEWPA_SPECIES_INFO(OCEAN),
    [SPECIES_SPEWPA_JUNGLE]      = SPEWPA_SPECIES_INFO(JUNGLE),
    [SPECIES_SPEWPA_FANCY]       = SPEWPA_SPECIES_INFO(FANCY),
    [SPECIES_SPEWPA_POKEBALL]   = SPEWPA_SPECIES_INFO(POKEBALL),

#define VIVILLON_MISC_INFO(form, color, iconPal)                                            \
        .baseHP        = 80,                                                                \
        .baseAttack    = 52,                                                                \
        .baseDefense   = 50,                                                                \
        .baseSpeed     = 89,                                                                \
        .baseSpAttack  = 90,                                                                \
        .baseSpDefense = 50,                                                                \
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),                                          \
        .catchRate = 45,                                                                    \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 206 : 185,                            \
        .evYield_HP = 1,                                                                    \
        .evYield_Speed = 1,                                                                 \
        .evYield_SpAttack = 1,                                                              \
        .genderRatio = PERCENT_FEMALE(50),                                                  \
        .eggCycles = 15,                                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                                   \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),                                         \
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD },  \
        .bodyColor = color,                                                                 \
        .speciesName = _("Vivillon"),                                                       \
        .cryId = CRY_VIVILLON,                                                              \
        .natDexNum = NATIONAL_DEX_VIVILLON,                                                 \
        .categoryName = _("Escamaposa"),                                                         \
        .height = 12,                                                                       \
        .weight = 170,                                                                      \
        .pokemonScale = 282,                                                                \
        .pokemonOffset = 4,                                                                 \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
        .frontPic = gMonFrontPic_Vivillon ##form,                                           \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                            \
        .frontPicYOffset = 0,                                                               \
        .frontAnimFrames = sAnims_Vivillon,                                                 \
        .frontAnimId = ANIM_ZIGZAG_SLOW,                                                    \
        .enemyMonElevation = 9,                                                             \
        .backPic = gMonBackPic_Vivillon ##form,                                             \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                             \
        .backPicYOffset = 0,                                                                \
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,                                    \
        .palette = gMonPalette_Vivillon ##form,                                             \
        .shinyPalette = gMonShinyPalette_Vivillon ##form,                                   \
        .iconSprite = gMonIcon_Vivillon ##form,                                             \
        .iconPalIndex = iconPal,                                                            \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                             \
        SHADOW(0, 20, SHADOW_SIZE_M)                                                        \
        FOOTPRINT(Vivillon)                                                                 \
        OVERWORLD(                                                                          \
            sPicTable_Vivillon ##form,                                                      \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Vivillon ##form,                                              \
            gShinyOverworldPalette_Vivillon ##form                                          \
        )                                                                                   \
        .levelUpLearnset = sVivillonLevelUpLearnset,                                        \
        .teachableLearnset = sVivillonTeachableLearnset,                                    \
        .formSpeciesIdTable = sVivillonFormSpeciesIdTable

    [SPECIES_VIVILLON_ICY_SNOW] =
    {
        VIVILLON_MISC_INFO(IcySnow, BODY_COLOR_WHITE, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de tierras heladas.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_POLAR] =
    {
        VIVILLON_MISC_INFO(Polar, BODY_COLOR_BLUE, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de tierras nevadas.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_TUNDRA] =
    {
        VIVILLON_MISC_INFO(Tundra, BODY_COLOR_BLUE, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de tierras de frío extremo.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_CONTINENTAL] =
    {
        VIVILLON_MISC_INFO(Continental, BODY_COLOR_YELLOW, 2),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de tierras de vastos espacios.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_GARDEN] =
    {
        VIVILLON_MISC_INFO(Garden, BODY_COLOR_GREEN, 1),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de tierras verdes.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_ELEGANT] =
    {
        VIVILLON_MISC_INFO(Elegant, BODY_COLOR_PURPLE, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de estaciones definidas.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_MEADOW] =
    {
        VIVILLON_MISC_INFO(Meadow, BODY_COLOR_PINK, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de donde florecen las flores.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_MODERN] =
    {
        VIVILLON_MISC_INFO(Modern, BODY_COLOR_RED, 2),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras bañadas por el Sol.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_MARINE] =
    {
        VIVILLON_MISC_INFO(Marine, BODY_COLOR_BLUE, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras con brisas oceánicas.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_ARCHIPELAGO] =
    {
        VIVILLON_MISC_INFO(Archipelago, BODY_COLOR_BROWN, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de lugares con muchas islas.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_HIGH_PLAINS] =
    {
        VIVILLON_MISC_INFO(HighPlains, BODY_COLOR_BROWN, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras con poca lluvia.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_SANDSTORM] =
    {
        VIVILLON_MISC_INFO(Sandstorm, BODY_COLOR_BROWN, 1),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de tierras áridas.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_RIVER] =
    {
        VIVILLON_MISC_INFO(River, BODY_COLOR_BROWN, 2),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras con grandes ríos.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_MONSOON] =
    {
        VIVILLON_MISC_INFO(Monsoon, BODY_COLOR_GRAY, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras con lluvias intensas.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_SAVANNA] =
    {
        VIVILLON_MISC_INFO(Savanna, BODY_COLOR_GREEN, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras con clima tropical.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_SUN] =
    {
        VIVILLON_MISC_INFO(Sun, BODY_COLOR_RED, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras bañadas por la luz.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_OCEAN] =
    {
        VIVILLON_MISC_INFO(Ocean, BODY_COLOR_RED, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras de verano perpetuo.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_JUNGLE] =
    {
        VIVILLON_MISC_INFO(Jungle, BODY_COLOR_GREEN, 0),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació. Esta\n"
            "forma es de tierras de selvas tropicales.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_FANCY] =
    {
        VIVILLON_MISC_INFO(Fancy, BODY_COLOR_PINK, 1),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de una tierra misteriosa.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },
    [SPECIES_VIVILLON_POKEBALL] =
    {
        VIVILLON_MISC_INFO(PokeBall, BODY_COLOR_RED, 2),
        .description = COMPOUND_STRING(
            "Su patrón depende del clima y la\n"
            "topografía de donde nació.\n"
            "Esta forma es de una tierra especial.\n"
            "Suelta escamas tóxicas de color al luchar."),
    },

#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
    [SPECIES_LITLEO] =
    {
        .baseHP        = 62,
        .baseAttack    = 50,
        .baseDefense   = 58,
        .baseSpeed     = 72,
        .baseSpAttack  = 73,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .catchRate = 220,
        .expYield = 74,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Litleo"),
        .cryId = CRY_LITLEO,
        .natDexNum = NATIONAL_DEX_LITLEO,
        .categoryName = _("Leoncito"),
        .height = 6,
        .weight = 135,
		.description = COMPOUND_STRING(
			"Cuanto más poderoso es el enemigo al\n"
			"que se enfrenta, más calor desprende\n"
			"su mechón y más energía recorre\n"
			"todo su cuerpo."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Litleo,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Litleo,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Litleo,
        .shinyPalette = gMonShinyPalette_Litleo,
        .iconSprite = gMonIcon_Litleo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Litleo)
        OVERWORLD(
            sPicTable_Litleo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Litleo,
            gShinyOverworldPalette_Litleo
        )
        .levelUpLearnset = sLitleoLevelUpLearnset,
        .teachableLearnset = sLitleoTeachableLearnset,
        .eggMoveLearnset = sLitleoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_PYROAR}),
    },

    [SPECIES_PYROAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 68,
        .baseDefense   = 72,
        .baseSpeed     = 106,
        .baseSpAttack  = 109,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .catchRate = 65,
        .expYield = 177,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pyroar"),
        .cryId = CRY_PYROAR,
        .natDexNum = NATIONAL_DEX_PYROAR,
        .categoryName = _("Regio"),
        .height = 15,
        .weight = 815,
		.description = COMPOUND_STRING(
			"El macho con la melena de fuego más\n"
			"grande de toda la manada es el líder\n"
			"de sus compañeros."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pyroar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Pyroar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Pyroar,
        .shinyPalette = gMonShinyPalette_Pyroar,
        .iconSprite = gMonIcon_Pyroar,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PyroarF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_PyroarF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .iconSpriteFemale = gMonIcon_PyroarF,
        .iconPalIndexFemale = 2,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pyroar)
        OVERWORLD(
            sPicTable_Pyroar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pyroar,
            gShinyOverworldPalette_Pyroar
        )
        OVERWORLD_FEMALE(
            sPicTable_PyroarF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPyroarLevelUpLearnset,
        .teachableLearnset = sPyroarTeachableLearnset,
    },
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
#define FLABEBE_MISC_INFO(Form, FORM, iconPal)                                  \
        .baseHP        = 44,                                                    \
        .baseAttack    = 38,                                                    \
        .baseDefense   = 39,                                                    \
        .baseSpeed     = 42,                                                    \
        .baseSpAttack  = 61,                                                    \
        .baseSpDefense = 79,                                                    \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 225,                                                       \
        .expYield = 61,                                                         \
        .evYield_SpDefense = 1,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                           \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Flabébé"),                                            \
        .cryId = CRY_FLABEBE,                                                   \
        .natDexNum = NATIONAL_DEX_FLABEBE,                                      \
        .categoryName = _("Monoflor"),                                      \
        .height = 1,                                                            \
        .weight = 1,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Flabebe,                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 56),                                \
        .frontPicYOffset = 6,                                                   \
        .frontAnimFrames = sAnims_Flabebe,                                      \
        .frontAnimId = ANIM_H_SLIDE_SLOW,                                       \
        .enemyMonElevation = 6,                                                 \
        .backPic = gMonBackPic_Flabebe,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 40),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Flabebe##Form,                                   \
        .shinyPalette = gMonShinyPalette_Flabebe##Form,                         \
        .iconSprite = gMonIcon_Flabebe##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(0, 11, SHADOW_SIZE_S)                                            \
        FOOTPRINT(Flabebe)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Flabebe##Form,                                            \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Flabebe##Form,                                    \
            gShinyOverworldPalette_Flabebe##Form                                \
        )                                                                       \
        .levelUpLearnset = sFlabebeLevelUpLearnset,                             \
        .teachableLearnset = sFlabebeTeachableLearnset,                         \
        .eggMoveLearnset = sFlabebeEggMoveLearnset,                             \
        .formSpeciesIdTable = sFlabebeFormSpeciesIdTable,                       \
        .evolutions = EVOLUTION({EVO_LEVEL, 19, SPECIES_FLOETTE_ ##FORM})

    [SPECIES_FLABEBE_RED] =
    {
        FLABEBE_MISC_INFO(Red, RED, 1),
        .description = COMPOUND_STRING(
            "Este Flabébé monta una flor roja.\n"
            "Inmediatamente después de nacer, este\n"
            "Pokémon comienza a volar en busca de\n"
            "una flor que le guste."),
    },
    [SPECIES_FLABEBE_YELLOW] =
    {
        FLABEBE_MISC_INFO(Yellow, YELLOW, 1),
        .description = COMPOUND_STRING(
            "Desata una variedad de movimientos al\n"
            "desplegar el poder oculto dentro de las\n"
            "flores. Este Pokémon tiene una especial\n"
            "preferencia por las flores amarillas."),
    },
    [SPECIES_FLABEBE_ORANGE] =
    {
        FLABEBE_MISC_INFO(Orange, ORANGE, 0),
        .description = COMPOUND_STRING(
            "Recibe fuerza de las flores y les da algo\n"
            "de su energía a cambio. A este Pokémon\n"
            "le gustan las flores naranjas sobre\n"
            "todas las demás."),
    },
    [SPECIES_FLABEBE_BLUE]   =
    {
        FLABEBE_MISC_INFO(Blue, BLUE, 0),
        .description = COMPOUND_STRING(
            "A este Pokémon le gustan más que nada\n"
            "las flores azules. Flota hacia arriba\n"
            "usando el poder que emana de su flor\n"
            "y se desliza suavemente por el aire."),
    },
    [SPECIES_FLABEBE_WHITE]  =
    {
        FLABEBE_MISC_INFO(White, WHITE, 1),
        .description = COMPOUND_STRING(
            "Cuando cae la tarde, busca un lugar\n"
            "lleno de flores del mismo color blanco\n"
            "que él mismo, y luego se duerme."),
    },

#define FLOETTE_MISC_INFO(form, FORM, iconPal)                                  \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 120,                                                       \
        .evYield_SpDefense = 2,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Floette"),                                            \
        .natDexNum = NATIONAL_DEX_FLOETTE,                                      \
        .categoryName = _("Monoflor"),                                      \
        .height = 2,                                                            \
        .weight = 9,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontAnimFrames = sAnims_Floette,                                      \
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,                                     \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Floette ##form,                                  \
        .shinyPalette = gMonShinyPalette_Floette ##form,                        \
        .iconSprite = gMonIcon_Floette##form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                      \
        SHADOW(-3, 12, SHADOW_SIZE_S)                                           \
        FOOTPRINT(Floette)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Floette ##form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Floette ##form,                                   \
            gShinyOverworldPalette_Floette ##form                               \
        )                                                                       \
        .formSpeciesIdTable = sFloetteFormSpeciesIdTable

#define FLOETTE_NORMAL_INFO(form, FORM, iconPal)                                                \
        .baseHP        = 54,                                                                    \
        .baseAttack    = 45,                                                                    \
        .baseDefense   = 47,                                                                    \
        .baseSpeed     = 52,                                                                    \
        .baseSpAttack  = 75,                                                                    \
        .baseSpDefense = 98,                                                                    \
        .expYield = 130,                                                                        \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                                           \
        .cryId = CRY_FLOETTE,                                                                   \
        .frontPic = gMonFrontPic_Floette,                                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 64),                                                \
        .frontPicYOffset = 3,                                                                   \
        .enemyMonElevation = 4,                                                                 \
        .backPic = gMonBackPic_Floette,                                                         \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                                 \
        .backPicYOffset = 2,                                                                    \
        .levelUpLearnset = sFloetteLevelUpLearnset,                                             \
        .teachableLearnset = sFloetteTeachableLearnset,                                         \
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_FLORGES_ ##FORM}),\
        FLOETTE_MISC_INFO(form, FORM, iconPal)

    [SPECIES_FLOETTE_RED] =
    {
        FLOETTE_NORMAL_INFO(Red, RED, 1),
        .description = COMPOUND_STRING(
            "Este Pokémon usa largas ondas rojas\n"
            "de luz para transferir su energía\n"
            "a las flores y liberar su potencial."),
    },
    [SPECIES_FLOETTE_YELLOW] =
    {
        FLOETTE_NORMAL_INFO(Yellow, YELLOW, 1),
        .description = COMPOUND_STRING(
            "Puede extraer el poder oculto en\n"
            "flores amarillas. Este poder se\n"
            "convierte en los movimientos que\n"
            "Floette usa para protegerse."),
    },
    [SPECIES_FLOETTE_ORANGE] =
    {
        FLOETTE_NORMAL_INFO(Orange, ORANGE, 0),
        .description = COMPOUND_STRING(
            "Este Pokémon puede extraer el mayor\n"
            "poder cuando está en sintonía con\n"
            "flores naranjas, en comparación con\n"
            "flores de otros colores."),
    },
    [SPECIES_FLOETTE_BLUE] =
    {
        FLOETTE_NORMAL_INFO(Blue, BLUE, 0),
        .description = COMPOUND_STRING(
            "Siempre que este Pokémon encuentra\n"
            "plantas con flores que se están\n"
            "marchitando, las lleva a su territorio\n"
            "y se encarga de cuidarlas."),
    },
    [SPECIES_FLOETTE_WHITE] =
    {
        FLOETTE_NORMAL_INFO(White, WHITE, 1),
        .description = COMPOUND_STRING(
            "Si encuentra a alguien desordenando un\n"
            "parterre de flores, lo atacará\n"
            "sin piedad. Este Floette cuida\n"
            "muy bien de las flores blancas."),
    },
    [SPECIES_FLOETTE_ETERNAL] =
    {
        FLOETTE_MISC_INFO(Eternal, ETERNAL, 0),
        .baseHP        = 74,
        .baseAttack    = 65,
        .baseDefense   = 67,
        .baseSpeed     = 92,
        .baseSpAttack  = 125,
        .baseSpDefense = 128,
        .expYield = 243,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .cryId = CRY_FLOETTE_ETERNAL,
        .description = COMPOUND_STRING(
            "La flor que sostiene ya no se puede\n"
            "encontrar en flor en ningún lugar.\n"
            "También se cree que contiene\n"
            "un poder aterrador."),
        .frontPic = gMonFrontPic_FloetteEternal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_FloetteEternal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .levelUpLearnset = sFloetteEternalLevelUpLearnset,
        .teachableLearnset = sFloetteEternalTeachableLearnset,
    },

#define FLORGES_MISC_INFO(Form, iconPal)                                        \
        .baseHP        = 78,                                                    \
        .baseAttack    = 65,                                                    \
        .baseDefense   = 68,                                                    \
        .baseSpeed     = 75,                                                    \
        .baseSpAttack  = 112,                                                   \
        .baseSpDefense = 154,                                                   \
        .types = MON_TYPES(TYPE_FAIRY),                                         \
        .catchRate = 45,                                                        \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 276 : 248,                \
        .evYield_SpDefense = 3,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),                           \
        .abilities = { ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS },  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Florges"),                                            \
        .cryId = CRY_FLORGES,                                                   \
        .natDexNum = NATIONAL_DEX_FLORGES,                                      \
        .categoryName = _("Jardín"),                                            \
        .height = 11,                                                           \
        .weight = 100,                                                          \
        .pokemonScale = 320,                                                    \
        .pokemonOffset = 7,                                                     \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        .frontPic = gMonFrontPic_Florges,                                       \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                \
        .frontPicYOffset = 0,                                                   \
        .frontAnimFrames = sAnims_Florges,                                      \
        .frontAnimId = ANIM_V_SLIDE_SLOW,                                       \
        .backPic = gMonBackPic_Florges,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 48),                                 \
        .backPicYOffset = 9,                                                    \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                            \
        .palette = gMonPalette_Florges##Form,                                   \
        .shinyPalette = gMonShinyPalette_Florges##Form,                         \
        .iconSprite = gMonIcon_Florges##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(-5, 15, SHADOW_SIZE_M)                                           \
        FOOTPRINT(Florges)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Florges ##Form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Florges ##Form,                                   \
            gShinyOverworldPalette_Florges ##Form                               \
        )                                                                       \
        .levelUpLearnset = sFlorgesLevelUpLearnset,                             \
        .teachableLearnset = sFlorgesTeachableLearnset,                         \
        .formSpeciesIdTable = sFlorgesFormSpeciesIdTable

    [SPECIES_FLORGES_RED] =
    {
        FLORGES_MISC_INFO(Red, 0),
        .description = COMPOUND_STRING(
            "Este Pokémon crea un impresionante\n"
            "jardín de flores en su territorio. Extrae\n"
            "el poder de las flores rojas\n"
            "alrededor de su cuello."),
    },
    [SPECIES_FLORGES_YELLOW] =
    {
        FLORGES_MISC_INFO(Yellow, 1),
        .description = COMPOUND_STRING(
            "Este Pokémon lucha extrayendo el poder\n"
            "de las flores amarillas. Castiga sin\n"
            "piedad a cualquiera que pise\n"
            "las plantas en flor."),
    },
    [SPECIES_FLORGES_ORANGE] =
    {
        FLORGES_MISC_INFO(Orange, 0),
        .description = COMPOUND_STRING(
            "En tiempos antiguos, los gobernadores\n"
            "solían criar a Florges con cariño\n"
            "para cuidar los exquisitos jardines\n"
            "de sus castillos."),
    },
    [SPECIES_FLORGES_BLUE] =
    {
        FLORGES_MISC_INFO(Blue, 0),
        .description = COMPOUND_STRING(
            "En el pasado, los pigmentos azules eran\n"
            "tremendamente costosos, por lo que las\n"
            "pinturas de Florges azules son\n"
            "altamente valiosas."),
    },
    [SPECIES_FLORGES_WHITE] =
    {
        FLORGES_MISC_INFO(White, 0),
        .description = COMPOUND_STRING(
            "Un jardín de flores creado por un\n"
            "Florges de flores blancas estará\n"
            "bellamente decorado con plantas en flor\n"
            "de muchos colores diferentes."),
    },
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
    [SPECIES_SKIDDO] =
    {
        .baseHP        = 66,
        .baseAttack    = 65,
        .baseDefense   = 48,
        .baseSpeed     = 52,
        .baseSpAttack  = 62,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skiddo"),
        .cryId = CRY_SKIDDO,
        .natDexNum = NATIONAL_DEX_SKIDDO,
        .categoryName = _("Montura"),
        .height = 9,
        .weight = 310,
		.description = COMPOUND_STRING(
			"Se dice que fue la primera especie de\n"
			"Pokémon que se acostumbró a vivir con\n"
			"los seres humanos. Tiene una naturaleza\n"
			"muy afable."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skiddo,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skiddo,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Skiddo,
        .shinyPalette = gMonShinyPalette_Skiddo,
        .iconSprite = gMonIcon_Skiddo,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 7, SHADOW_SIZE_M)
        FOOTPRINT(Skiddo)
        OVERWORLD(
            sPicTable_Skiddo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skiddo,
            gShinyOverworldPalette_Skiddo
        )
        .levelUpLearnset = sSkiddoLevelUpLearnset,
        .teachableLearnset = sSkiddoTeachableLearnset,
        .eggMoveLearnset = sSkiddoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GOGOAT}),
    },

    [SPECIES_GOGOAT] =
    {
        .baseHP        = 123,
        .baseAttack    = 100,
        .baseDefense   = 62,
        .baseSpeed     = 68,
        .baseSpAttack  = 97,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 186,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gogoat"),
        .cryId = CRY_GOGOAT,
        .natDexNum = NATIONAL_DEX_GOGOAT,
        .categoryName = _("Montura"),
        .height = 17,
        .weight = 910,
		.description = COMPOUND_STRING(
			"Habita en regiones montañosas. El líder\n"
			"de la manada se decide en una\n"
			"demostración de fuerza en la que los\n"
			"contendientes luchan con los cuernos."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gogoat,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gogoat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Gogoat,
        .shinyPalette = gMonShinyPalette_Gogoat,
        .iconSprite = gMonIcon_Gogoat,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gogoat)
        OVERWORLD(
            sPicTable_Gogoat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gogoat,
            gShinyOverworldPalette_Gogoat
        )
        .levelUpLearnset = sGogoatLevelUpLearnset,
        .teachableLearnset = sGogoatTeachableLearnset,
    },
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
    [SPECIES_PANCHAM] =
    {
        .baseHP        = 67,
        .baseAttack    = 82,
        .baseDefense   = 62,
        .baseSpeed     = 43,
        .baseSpAttack  = 46,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 220,
        .expYield = 70,
        .evYield_Attack = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pancham"),
        .cryId = CRY_PANCHAM,
        .natDexNum = NATIONAL_DEX_PANCHAM,
        .categoryName = _("Juguetón"),
        .height = 6,
        .weight = 80,
		.description = COMPOUND_STRING(
			"Se esfuerza mucho para que el enemigo\n"
			"no lo menosprecie, pero su mirada no\n"
			"intimida demasiado. Se caracteriza por\n"
			"mascar siempre una hoja."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pancham,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Pancham,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Pancham,
        .shinyPalette = gMonShinyPalette_Pancham,
        .iconSprite = gMonIcon_Pancham,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pancham)
        OVERWORLD(
            sPicTable_Pancham,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pancham,
            gShinyOverworldPalette_Pancham
        )
        .levelUpLearnset = sPanchamLevelUpLearnset,
        .teachableLearnset = sPanchamTeachableLearnset,
        .eggMoveLearnset = sPanchamEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_PANGORO, CONDITIONS({IF_TYPE_IN_PARTY, TYPE_DARK})}),
    },

    [SPECIES_PANGORO] =
    {
        .baseHP        = 95,
        .baseAttack    = 124,
        .baseDefense   = 78,
        .baseSpeed     = 58,
        .baseSpAttack  = 69,
        .baseSpDefense = 71,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .catchRate = 65,
        .expYield = 173,
        .evYield_Attack = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pangoro"),
        .cryId = CRY_PANGORO,
        .natDexNum = NATIONAL_DEX_PANGORO,
        .categoryName = _("Rostro fiero"),
        .height = 21,
        .weight = 1360,
		.description = COMPOUND_STRING(
			"Es muy temperamental, pero no permite\n"
			"que nadie se meta con los débiles.\n"
			"Mediante su hoja, predice los\n"
			"movimientos del enemigo."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Pangoro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Pangoro,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Pangoro,
        .shinyPalette = gMonShinyPalette_Pangoro,
        .iconSprite = gMonIcon_Pangoro,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pangoro)
        OVERWORLD(
            sPicTable_Pangoro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pangoro,
            gShinyOverworldPalette_Pangoro
        )
        .levelUpLearnset = sPangoroLevelUpLearnset,
        .teachableLearnset = sPangoroTeachableLearnset,
    },
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
#define FURFROU_MISC_INFO(_form, _noFlip, frontWidth, frontYOffset, backWidth, backYOffset, _iconIdx)   \
    {                                                                                                   \
        .baseHP        = 75,                                                                            \
        .baseAttack    = 80,                                                                            \
        .baseDefense   = 60,                                                                            \
        .baseSpeed     = 102,                                                                           \
        .baseSpAttack  = 65,                                                                            \
        .baseSpDefense = 90,                                                                            \
        .types = MON_TYPES(TYPE_NORMAL),                                                                \
        .catchRate = 160,                                                                               \
        .expYield = 165,                                                                                \
        .evYield_Speed = 1,                                                                             \
        .genderRatio = PERCENT_FEMALE(50),                                                              \
        .eggCycles = 20,                                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),                                                   \
        .abilities = { ABILITY_FUR_COAT, ABILITY_NONE, ABILITY_NONE },                                  \
        .bodyColor = BODY_COLOR_WHITE,                                                                  \
        .noFlip = _noFlip,                                                                              \
        .speciesName = _("Furfrou"),                                                                    \
        .cryId = CRY_FURFROU,                                                                           \
        .natDexNum = NATIONAL_DEX_FURFROU,                                                              \
        .categoryName = _("Caniche"),                                                                    \
        .height = 12,                                                                                   \
        .weight = 280,                                                                                  \
        .description = gFurfrouPokedexText,                                                             \
        .pokemonScale = 282,                                                                            \
        .pokemonOffset = 4,                                                                             \
        .trainerScale = 256,                                                                            \
        .trainerOffset = 0,                                                                             \
        .frontPic = gMonFrontPic_Furfrou##_form,                                                        \
        .frontPicSize = MON_COORDS_SIZE(frontWidth, 64),                                                \
        .frontPicYOffset = frontYOffset,                                                                \
        .frontAnimFrames = sAnims_Furfrou,                                                              \
        .frontAnimId = ANIM_H_SLIDE,                                                                    \
        .backPic = gMonBackPic_Furfrou##_form,                                                          \
        .backPicSize = MON_COORDS_SIZE(backWidth, 64),                                                  \
        .backPicYOffset = backYOffset,                                                                  \
        .backAnimId = BACK_ANIM_V_STRETCH,                                                              \
        .palette = gMonPalette_Furfrou##_form,                                                          \
        .shinyPalette = gMonShinyPalette_Furfrou##_form,                                                \
        .iconSprite = gMonIcon_Furfrou##_form,                                                          \
        .iconPalIndex = _iconIdx,                                                                       \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                                         \
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)                                                       \
        FOOTPRINT(Furfrou)                                                                              \
        OVERWORLD(                                                                                      \
            sPicTable_Furfrou##_form,                                                                   \
            SIZE_32x32,                                                                                 \
            SHADOW_SIZE_M,                                                                              \
            TRACKS_FOOT,                                                                                \
            sAnimTable_Following,                                                                       \
            gOverworldPalette_Furfrou##_form,                                                           \
            gShinyOverworldPalette_Furfrou##_form                                                       \
        )                                                                                               \
        .levelUpLearnset = sFurfrouLevelUpLearnset,                                                     \
        .teachableLearnset = sFurfrouTeachableLearnset,                                                 \
        .eggMoveLearnset = sFurfrouEggMoveLearnset,                                                     \
        .formSpeciesIdTable = sFurfrouFormSpeciesIdTable,                                               \
        .formChangeTable = sFurfrouFormChangeTable,                                                     \
    }

    [SPECIES_FURFROU_NATURAL]   = FURFROU_MISC_INFO(Natural,   FALSE, 48, 3, 56, 0, 0),
    [SPECIES_FURFROU_HEART]     = FURFROU_MISC_INFO(Heart,     FALSE, 56, 2, 56, 1, 0),
    [SPECIES_FURFROU_STAR]      = FURFROU_MISC_INFO(Star,      FALSE, 56, 2, 64, 1, 0),
    [SPECIES_FURFROU_DIAMOND]   = FURFROU_MISC_INFO(Diamond,   FALSE, 48, 2, 56, 1, 0),
    [SPECIES_FURFROU_DEBUTANTE] = FURFROU_MISC_INFO(Debutante, TRUE,  48, 2, 56, 1, 2),
    [SPECIES_FURFROU_MATRON]    = FURFROU_MISC_INFO(Matron,    FALSE, 48, 2, 56, 1, 2),
    [SPECIES_FURFROU_DANDY]     = FURFROU_MISC_INFO(Dandy,     FALSE, 48, 2, 56, 1, 1),
    [SPECIES_FURFROU_LA_REINE]  = FURFROU_MISC_INFO(LaReine,   FALSE, 48, 2, 56, 1, 0),
    [SPECIES_FURFROU_KABUKI]    = FURFROU_MISC_INFO(Kabuki,    FALSE, 56, 2, 56, 1, 0),
    [SPECIES_FURFROU_PHARAOH]   = FURFROU_MISC_INFO(Pharaoh,   FALSE, 48, 2, 56, 1, 0),
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
    [SPECIES_ESPURR] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 54,
        .baseSpeed     = 68,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = 71,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_OWN_TEMPO },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Espurr"),
        .cryId = CRY_ESPURR,
        .natDexNum = NATIONAL_DEX_ESPURR,
        .categoryName = _("Moderación"),
        .height = 3,
        .weight = 35,
		.description = COMPOUND_STRING(
			"Protege con las orejas el órgano con\n"
			"el que irradia su intenso poder psíquico\n"
			"para evitar que este escape al exterior."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Espurr,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
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
        .backPic = gMonBackPic_Espurr,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Espurr,
        .shinyPalette = gMonShinyPalette_Espurr,
        .iconSprite = gMonIcon_Espurr,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Espurr)
        OVERWORLD(
            sPicTable_Espurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Espurr,
            gShinyOverworldPalette_Espurr
        )
        .levelUpLearnset = sEspurrLevelUpLearnset,
        .teachableLearnset = sEspurrTeachableLearnset,
        .eggMoveLearnset = sEspurrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_MEOWSTIC_M, CONDITIONS({IF_GENDER, MON_MALE})},
                                {EVO_LEVEL, 25, SPECIES_MEOWSTIC_F, CONDITIONS({IF_GENDER, MON_FEMALE})}),
    },

    [SPECIES_MEOWSTIC_M] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Meowstic"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Autocontrol"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "El instinto defensivo de los machos es\n"
"fuerte. Es cuando están protegiéndose\n"
"a sí mismos o a sus aliados que\n"
"desatan todo su poder."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowsticM,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MeowsticM,
        .shinyPalette = gMonShinyPalette_MeowsticM,
        .iconSprite = gMonIcon_MeowsticM,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticM,
            gShinyOverworldPalette_MeowsticM
        )
        .levelUpLearnset = sMeowsticMLevelUpLearnset,
        .teachableLearnset = sMeowsticMTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
    },

    [SPECIES_MEOWSTIC_F] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Meowstic"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Autocontrol"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Las hembras son un poco más egoístas\n"
            "y agresivas que los machos. Si no\n"
            "obtienen lo que quieren, te\n"
            "atormentarán con sus habilidades."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MeowsticF,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticF,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MeowsticF,
        .shinyPalette = gMonShinyPalette_MeowsticF,
        .iconSprite = gMonIcon_MeowsticF,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticF,
            gShinyOverworldPalette_MeowsticF
        )
        .levelUpLearnset = sMeowsticFLevelUpLearnset,
        .teachableLearnset = sMeowsticFTeachableLearnset,
        .formSpeciesIdTable = sMeowsticFormSpeciesIdTable,
    },
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
    [SPECIES_HONEDGE] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 28,
        .baseSpAttack  = 35,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 180,
        .expYield = 65,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Honedge"),
        .cryId = CRY_HONEDGE,
        .natDexNum = NATIONAL_DEX_HONEDGE,
        .categoryName = _("Tizona"),
        .height = 8,
        .weight = 20,
		.description = COMPOUND_STRING(
			"Si alguien osa empuñarlo, se enrolla\n"
			"en el brazo del desafortunado con su\n"
			"paño azul y le absorbe toda la energía\n"
			"hasta que pierde el sentido."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Honedge,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Honedge,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Honedge,
        .shinyPalette = gMonShinyPalette_Honedge,
        .iconSprite = gMonIcon_Honedge,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-10, 11, SHADOW_SIZE_S)
        FOOTPRINT(Honedge)
        OVERWORLD(
            sPicTable_Honedge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Honedge,
            gShinyOverworldPalette_Honedge
        )
        .levelUpLearnset = sHonedgeLevelUpLearnset,
        .teachableLearnset = sHonedgeTeachableLearnset,
        .eggMoveLearnset = sHonedgeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_DOUBLADE}),
    },

    [SPECIES_DOUBLADE] =
    {
        .baseHP        = 59,
        .baseAttack    = 110,
        .baseDefense   = 150,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 90,
        .expYield = 157,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Doublade"),
        .cryId = CRY_DOUBLADE,
        .natDexNum = NATIONAL_DEX_DOUBLADE,
        .categoryName = _("Tizona"),
        .height = 8,
        .weight = 45,
		.description = COMPOUND_STRING(
			"Ni siquiera el espadachín más ducho\n"
			"conseguiría esquivar los complejos\n"
			"ataques que encadenan ambas espadas\n"
			"a la vez."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Doublade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Doublade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Doublade,
        .shinyPalette = gMonShinyPalette_Doublade,
        .iconSprite = gMonIcon_Doublade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 11, SHADOW_SIZE_M)
        FOOTPRINT(Doublade)
        OVERWORLD(
            sPicTable_Doublade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Doublade,
            gShinyOverworldPalette_Doublade
        )
        .levelUpLearnset = sDoubladeLevelUpLearnset,
        .teachableLearnset = sDoubladeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_AEGISLASH_SHIELD}),
    },

#define AEGISLASH_MAIN_STAT (P_UPDATED_STATS >= GEN_8 ? 140 : 150)

    [SPECIES_AEGISLASH_SHIELD] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = AEGISLASH_MAIN_STAT,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = AEGISLASH_MAIN_STAT,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 234,
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STANCE_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Aegislash"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Espada real"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
            "En esta postura defensiva, Aegislash\n"
            "usa su cuerpo de acero y un campo\n"
            "de fuerza espectral para reducir el\n"
            "daño de cualquier ataque."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_AegislashShield,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashShield,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_AegislashShield,
        .shinyPalette = gMonShinyPalette_AegislashShield,
        .iconSprite = gMonIcon_AegislashShield,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
        OVERWORLD(
            sPicTable_AegislashShield,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AegislashShield,
            gShinyOverworldPalette_AegislashShield
        )
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
        .formSpeciesIdTable = sAegislashFormSpeciesIdTable,
        .formChangeTable = sAegislashFormChangeTable,
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .baseHP        = 60,
        .baseAttack    = AEGISLASH_MAIN_STAT,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = AEGISLASH_MAIN_STAT,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 250 : 234,
    #if P_UPDATED_EVS >= GEN_7
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
    #else
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
    #endif
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STANCE_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Aegislash"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Espada real"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
            "Érase una vez un rey con un\n"
            "Aegislash que gobernaba la tierra. Su\n"
            "Pokémon eventualmente le drenó la\n"
            "vida, y su reino cayó con él."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_AegislashBlade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashBlade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_AegislashBlade,
        .shinyPalette = gMonShinyPalette_AegislashBlade,
        .iconSprite = gMonIcon_AegislashBlade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
        .levelUpLearnset = sAegislashLevelUpLearnset,
        .teachableLearnset = sAegislashTeachableLearnset,
        .formSpeciesIdTable = sAegislashFormSpeciesIdTable,
        .formChangeTable = sAegislashFormChangeTable,
    },
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
    [SPECIES_SPRITZEE] =
    {
        .baseHP        = 78,
        .baseAttack    = 52,
        .baseDefense   = 60,
        .baseSpeed     = 23,
        .baseSpAttack  = 63,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 200,
        .expYield = 68,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Spritzee"),
        .cryId = CRY_SPRITZEE,
        .natDexNum = NATIONAL_DEX_SPRITZEE,
        .categoryName = _("Perfume"),
        .height = 2,
        .weight = 5,
		.description = COMPOUND_STRING(
			"Su cuerpo emana una fragancia que\n"
			"embelesa a quien la huele. La fragancia\n"
			"es diferente según los alimentos\n"
			"que ingiere."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spritzee,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Spritzee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Spritzee,
        .shinyPalette = gMonShinyPalette_Spritzee,
        .iconSprite = gMonIcon_Spritzee,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Spritzee)
        OVERWORLD(
            sPicTable_Spritzee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spritzee,
            gShinyOverworldPalette_Spritzee
        )
        .levelUpLearnset = sSpritzeeLevelUpLearnset,
        .teachableLearnset = sSpritzeeTeachableLearnset,
        .eggMoveLearnset = sSpritzeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_AROMATISSE, CONDITIONS({IF_HOLD_ITEM, ITEM_SACHET})},
                                {EVO_ITEM, ITEM_SACHET, SPECIES_AROMATISSE}),
    },

    [SPECIES_AROMATISSE] =
    {
        .baseHP        = 101,
        .baseAttack    = 72,
        .baseDefense   = 72,
        .baseSpeed     = 29,
        .baseSpAttack  = 99,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 140,
        .expYield = 162,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Aromatisse"),
        .cryId = CRY_AROMATISSE,
        .natDexNum = NATIONAL_DEX_AROMATISSE,
        .categoryName = _("Fragancia"),
        .height = 8,
        .weight = 155,
		.description = COMPOUND_STRING(
			"La fragancia que despide es tan potente\n"
			"que solo podría caminar a su lado un\n"
			"Entrenador que tenga especial\n"
			"predilección por ese aroma."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aromatisse,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aromatisse,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Aromatisse,
        .shinyPalette = gMonShinyPalette_Aromatisse,
        .iconSprite = gMonIcon_Aromatisse,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Aromatisse)
        OVERWORLD(
            sPicTable_Aromatisse,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aromatisse,
            gShinyOverworldPalette_Aromatisse
        )
        .levelUpLearnset = sAromatisseLevelUpLearnset,
        .teachableLearnset = sAromatisseTeachableLearnset,
    },
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
    [SPECIES_SWIRLIX] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 66,
        .baseSpeed     = 49,
        .baseSpAttack  = 59,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 200,
        .expYield = 68,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Swirlix"),
        .cryId = CRY_SWIRLIX,
        .natDexNum = NATIONAL_DEX_SWIRLIX,
        .categoryName = _("Chuchería"),
        .height = 4,
        .weight = 35,
		.description = COMPOUND_STRING(
			"Como se alimenta exclusivamente de\n"
			"dulces, su pelaje es tan pegajoso y\n"
			"dulzón como el algodón de azúcar."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swirlix,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Swirlix,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Swirlix,
        .shinyPalette = gMonShinyPalette_Swirlix,
        .iconSprite = gMonIcon_Swirlix,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Swirlix)
        OVERWORLD(
            sPicTable_Swirlix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Swirlix,
            gShinyOverworldPalette_Swirlix
        )
        .levelUpLearnset = sSwirlixLevelUpLearnset,
        .teachableLearnset = sSwirlixTeachableLearnset,
        .eggMoveLearnset = sSwirlixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_SLURPUFF, CONDITIONS({IF_HOLD_ITEM, ITEM_WHIPPED_DREAM})},
                                {EVO_ITEM, ITEM_WHIPPED_DREAM, SPECIES_SLURPUFF}),
    },

    [SPECIES_SLURPUFF] =
    {
        .baseHP        = 82,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 72,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 140,
        .expYield = 168,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Slurpuff"),
        .cryId = CRY_SLURPUFF,
        .natDexNum = NATIONAL_DEX_SLURPUFF,
        .categoryName = _("Nata"),
        .height = 8,
        .weight = 50,
		.description = COMPOUND_STRING(
			"Puede rastrear hasta el más débil de los\n"
			"olores. Hace uso de su fino olfato para\n"
			"ayudar a los pasteleros más exquisitos."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Slurpuff,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Slurpuff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Slurpuff,
        .shinyPalette = gMonShinyPalette_Slurpuff,
        .iconSprite = gMonIcon_Slurpuff,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Slurpuff)
        OVERWORLD(
            sPicTable_Slurpuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Slurpuff,
            gShinyOverworldPalette_Slurpuff
        )
        .levelUpLearnset = sSlurpuffLevelUpLearnset,
        .teachableLearnset = sSlurpuffTeachableLearnset,
    },
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
    [SPECIES_INKAY] =
    {
        .baseHP        = 53,
        .baseAttack    = 54,
        .baseDefense   = 53,
        .baseSpeed     = 45,
        .baseSpAttack  = 37,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inkay"),
        .cryId = CRY_INKAY,
        .natDexNum = NATIONAL_DEX_INKAY,
        .categoryName = _("Rotación"),
        .height = 4,
        .weight = 35,
		.description = COMPOUND_STRING(
			"La luz intermitente que emite aplaca\n"
			"el ánimo de lucha del enemigo.\n"
			"Aprovecha la ocasión para esconderse."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Inkay,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Inkay,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Inkay,
        .shinyPalette = gMonShinyPalette_Inkay,
        .iconSprite = gMonIcon_Inkay,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_S)
        FOOTPRINT(Inkay)
        OVERWORLD(
            sPicTable_Inkay,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Inkay,
            gShinyOverworldPalette_Inkay
        )
        .levelUpLearnset = sInkayLevelUpLearnset,
        .teachableLearnset = sInkayTeachableLearnset,
        .eggMoveLearnset = sInkayEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MALAMAR}),
    },

    [SPECIES_MALAMAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 92,
        .baseDefense   = 88,
        .baseSpeed     = 73,
        .baseSpAttack  = 68,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .catchRate = 80,
        .expYield = 169,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Malamar"),
        .cryId = CRY_MALAMAR,
        .natDexNum = NATIONAL_DEX_MALAMAR,
        .categoryName = _("Revolución"),
        .height = 15,
        .weight = 470,
		.description = COMPOUND_STRING(
			"Tiene a su disposición los poderes\n"
			"hipnóticos más poderosos de entre todos\n"
			"los Pokémon. Controla al enemigo a su\n"
			"voluntad."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Malamar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Malamar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Malamar,
        .shinyPalette = gMonShinyPalette_Malamar,
        .iconSprite = gMonIcon_Malamar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Malamar)
        OVERWORLD(
            sPicTable_Malamar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Malamar,
            gShinyOverworldPalette_Malamar
        )
        .levelUpLearnset = sMalamarLevelUpLearnset,
        .teachableLearnset = sMalamarTeachableLearnset,
    },
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
    [SPECIES_BINACLE] =
    {
        .baseHP        = 42,
        .baseAttack    = 52,
        .baseDefense   = 67,
        .baseSpeed     = 50,
        .baseSpAttack  = 39,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Binacle"),
        .cryId = CRY_BINACLE,
        .natDexNum = NATIONAL_DEX_BINACLE,
        .categoryName = _("Dos manos"),
        .height = 5,
        .weight = 310,
		.description = COMPOUND_STRING(
			"Dos Binacle conviven en la misma roca,\n"
			"pero cuando se produce un altercado\n"
			"entre ambos, uno de ellos se muda a otra."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Binacle,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Binacle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Binacle,
        .shinyPalette = gMonShinyPalette_Binacle,
        .iconSprite = gMonIcon_Binacle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Binacle)
        OVERWORLD(
            sPicTable_Binacle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Binacle,
            gShinyOverworldPalette_Binacle
        )
        .levelUpLearnset = sBinacleLevelUpLearnset,
        .teachableLearnset = sBinacleTeachableLearnset,
        .eggMoveLearnset = sBinacleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_BARBARACLE}),
    },

    [SPECIES_BARBARACLE] =
    {
        .baseHP        = 72,
        .baseAttack    = 105,
        .baseDefense   = 115,
        .baseSpeed     = 68,
        .baseSpAttack  = 54,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_ROCK, TYPE_WATER),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Barbaracle"),
        .cryId = CRY_BARBARACLE,
        .natDexNum = NATIONAL_DEX_BARBARACLE,
        .categoryName = _("Combinación"),
        .height = 13,
        .weight = 960,
		.description = COMPOUND_STRING(
			"Si bien todas las extremidades de\n"
			"Barbaracle tienen cerebro propio y se\n"
			"mueven a su antojo, suelen seguir\n"
			"órdenes que imparte la cabeza."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Barbaracle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Barbaracle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Barbaracle,
        .shinyPalette = gMonShinyPalette_Barbaracle,
        .iconSprite = gMonIcon_Barbaracle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Barbaracle)
        OVERWORLD(
            sPicTable_Barbaracle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Barbaracle,
            gShinyOverworldPalette_Barbaracle
        )
        .levelUpLearnset = sBarbaracleLevelUpLearnset,
        .teachableLearnset = sBarbaracleTeachableLearnset,
    },
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
    [SPECIES_SKRELP] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_POISON, TYPE_WATER),
        .catchRate = 225,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skrelp"),
        .cryId = CRY_SKRELP,
        .natDexNum = NATIONAL_DEX_SKRELP,
        .categoryName = _("Pseudoalga"),
        .height = 5,
        .weight = 73,
		.description = COMPOUND_STRING(
			"Adopta la apariencia de algas podridas\n"
			"y lanza un líquido venenoso a las\n"
			"presas desprevenidas que pasan cerca."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skrelp,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Skrelp,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Skrelp,
        .shinyPalette = gMonShinyPalette_Skrelp,
        .iconSprite = gMonIcon_Skrelp,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Skrelp)
        OVERWORLD(
            sPicTable_Skrelp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skrelp,
            gShinyOverworldPalette_Skrelp
        )
        .levelUpLearnset = sSkrelpLevelUpLearnset,
        .teachableLearnset = sSkrelpTeachableLearnset,
        .eggMoveLearnset = sSkrelpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_DRAGALGE}),
    },

    [SPECIES_DRAGALGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 44,
        .baseSpAttack  = 97,
        .baseSpDefense = 123,
        .types = MON_TYPES(TYPE_POISON, TYPE_DRAGON),
        .catchRate = 55,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dragalge"),
        .cryId = CRY_DRAGALGE,
        .natDexNum = NATIONAL_DEX_DRAGALGE,
        .categoryName = _("Pseudoalga"),
        .height = 18,
        .weight = 815,
		.description = COMPOUND_STRING(
			"Según se dice, los barcos que se\n"
			"aventuran en aguas donde habitan\n"
			"Dragalge desaparecen del mapa y no\n"
			"regresan a puerto."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Dragalge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .backPic = gMonBackPic_Dragalge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Dragalge,
        .shinyPalette = gMonShinyPalette_Dragalge,
        .iconSprite = gMonIcon_Dragalge,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Dragalge)
        OVERWORLD(
            sPicTable_Dragalge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dragalge,
            gShinyOverworldPalette_Dragalge
        )
        .levelUpLearnset = sDragalgeLevelUpLearnset,
        .teachableLearnset = sDragalgeTeachableLearnset,
    },
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
    [SPECIES_CLAUNCHER] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 44,
        .baseSpAttack  = 58,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 225,
        .expYield = 66,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Clauncher"),
        .cryId = CRY_CLAUNCHER,
        .natDexNum = NATIONAL_DEX_CLAUNCHER,
        .categoryName = _("Proyectagua"),
        .height = 5,
        .weight = 83,
		.description = COMPOUND_STRING(
			"Abate a enemigos voladores disparando\n"
			"agua a presión con su enorme pinza como\n"
			"si de una pistola se tratara."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clauncher,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Clauncher,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Clauncher,
        .shinyPalette = gMonShinyPalette_Clauncher,
        .iconSprite = gMonIcon_Clauncher,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, -6, SHADOW_SIZE_M)
        FOOTPRINT(Clauncher)
        OVERWORLD(
            sPicTable_Clauncher,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clauncher,
            gShinyOverworldPalette_Clauncher
        )
        .levelUpLearnset = sClauncherLevelUpLearnset,
        .teachableLearnset = sClauncherTeachableLearnset,
        .eggMoveLearnset = sClauncherEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_CLAWITZER}),
    },

    [SPECIES_CLAWITZER] =
    {
        .baseHP        = 71,
        .baseAttack    = 73,
        .baseDefense   = 88,
        .baseSpeed     = 59,
        .baseSpAttack  = 120,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 55,
        .expYield = 100,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Clawitzer"),
        .cryId = CRY_CLAWITZER,
        .natDexNum = NATIONAL_DEX_CLAWITZER,
        .categoryName = _("Lanzachorro"),
        .height = 13,
        .weight = 353,
		.description = COMPOUND_STRING(
			"Posee una enorme pinza que dispara\n"
			"bolas de agua que podrían atravesar\n"
			"incluso el casco de un petrolero."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clawitzer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Clawitzer,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Clawitzer,
        .shinyPalette = gMonShinyPalette_Clawitzer,
        .iconSprite = gMonIcon_Clawitzer,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 1, SHADOW_SIZE_L)
        FOOTPRINT(Clawitzer)
        OVERWORLD(
            sPicTable_Clawitzer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clawitzer,
            gShinyOverworldPalette_Clawitzer
        )
        .levelUpLearnset = sClawitzerLevelUpLearnset,
        .teachableLearnset = sClawitzerTeachableLearnset,
    },
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
    [SPECIES_HELIOPTILE] =
    {
        .baseHP        = 44,
        .baseAttack    = 38,
        .baseDefense   = 33,
        .baseSpeed     = 70,
        .baseSpAttack  = 61,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Helioptile"),
        .cryId = CRY_HELIOPTILE,
        .natDexNum = NATIONAL_DEX_HELIOPTILE,
        .categoryName = _("Generador"),
        .height = 5,
        .weight = 60,
		.description = COMPOUND_STRING(
			"Habita en los desiertos y, cuando toma\n"
			"el sol, acumula energía, lo que le\n"
			"permite vivir sin la necesidad de\n"
			"ingerir alimentos."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Helioptile,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Helioptile,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Helioptile,
        .shinyPalette = gMonShinyPalette_Helioptile,
        .iconSprite = gMonIcon_Helioptile,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Helioptile)
        OVERWORLD(
            sPicTable_Helioptile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Helioptile,
            gShinyOverworldPalette_Helioptile
        )
        .levelUpLearnset = sHelioptileLevelUpLearnset,
        .teachableLearnset = sHelioptileTeachableLearnset,
        .eggMoveLearnset = sHelioptileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_HELIOLISK}),
    },

    [SPECIES_HELIOLISK] =
    {
        .baseHP        = 62,
        .baseAttack    = 55,
        .baseDefense   = 52,
        .baseSpeed     = 109,
        .baseSpAttack  = 109,
        .baseSpDefense = 94,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Heliolisk"),
        .cryId = CRY_HELIOLISK,
        .natDexNum = NATIONAL_DEX_HELIOLISK,
        .categoryName = _("Generador"),
        .height = 10,
        .weight = 210,
		.description = COMPOUND_STRING(
			"Extiende su gorguera y genera energía\n"
			"eléctrica suficiente para cubrir el\n"
			"consumo de electricidad de un\n"
			"rascacielos entero."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Heliolisk,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Heliolisk,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Heliolisk,
        .shinyPalette = gMonShinyPalette_Heliolisk,
        .iconSprite = gMonIcon_Heliolisk,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Heliolisk)
        OVERWORLD(
            sPicTable_Heliolisk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heliolisk,
            gShinyOverworldPalette_Heliolisk
        )
        .levelUpLearnset = sHelioliskLevelUpLearnset,
        .teachableLearnset = sHelioliskTeachableLearnset,
    },
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
    [SPECIES_TYRUNT] =
    {
        .baseHP        = 58,
        .baseAttack    = 89,
        .baseDefense   = 77,
        .baseSpeed     = 48,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tyrunt"),
        .cryId = CRY_TYRUNT,
        .natDexNum = NATIONAL_DEX_TYRUNT,
        .categoryName = _("Heredero"),
        .height = 8,
        .weight = 260,
		.description = COMPOUND_STRING(
			"Pokémon recreado a partir de fósiles.\n"
			"Cuando sucede algo que no es de su\n"
			"agrado, se enfurece y se vuelve violento."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tyrunt,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrunt,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Tyrunt,
        .shinyPalette = gMonShinyPalette_Tyrunt,
        .iconSprite = gMonIcon_Tyrunt,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 2, SHADOW_SIZE_M)
        FOOTPRINT(Tyrunt)
        OVERWORLD(
            sPicTable_Tyrunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrunt,
            gShinyOverworldPalette_Tyrunt
        )
        .levelUpLearnset = sTyruntLevelUpLearnset,
        .teachableLearnset = sTyruntTeachableLearnset,
        .eggMoveLearnset = sTyruntEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_TYRANTRUM, CONDITIONS({IF_NOT_TIME, TIME_NIGHT})}),
    },

    [SPECIES_TYRANTRUM] =
    {
        .baseHP        = 82,
        .baseAttack    = 121,
        .baseDefense   = 119,
        .baseSpeed     = 71,
        .baseSpAttack  = 69,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 182,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tyrantrum"),
        .cryId = CRY_TYRANTRUM,
        .natDexNum = NATIONAL_DEX_TYRANTRUM,
        .categoryName = _("Tirano"),
        .height = 25,
        .weight = 2700,
		.description = COMPOUND_STRING(
			"Hace 100 millones de años, este Pokémon\n"
			"se comportaba como un rey, sin nadie\n"
			"que osase hacerle frente."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Tyrantrum,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrantrum,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Tyrantrum,
        .shinyPalette = gMonShinyPalette_Tyrantrum,
        .iconSprite = gMonIcon_Tyrantrum,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Tyrantrum)
        OVERWORLD(
            sPicTable_Tyrantrum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrantrum,
            gShinyOverworldPalette_Tyrantrum
        )
        .levelUpLearnset = sTyrantrumLevelUpLearnset,
        .teachableLearnset = sTyrantrumTeachableLearnset,
    },
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
    [SPECIES_AMAURA] =
    {
        .baseHP        = 77,
        .baseAttack    = 59,
        .baseDefense   = 50,
        .baseSpeed     = 46,
        .baseSpAttack  = 67,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ICE),
        .catchRate = 45,
        .expYield = 72,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Amaura"),
        .cryId = CRY_AMAURA,
        .natDexNum = NATIONAL_DEX_AMAURA,
        .categoryName = _("Tundra"),
        .height = 13,
        .weight = 252,
		.description = COMPOUND_STRING(
			"Pokémon que ha sido regenerado a partir\n"
			"de un trozo de su antiguo cuerpo, que\n"
			"quedó congelado hace unos 100 millones\n"
			"de años."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Amaura,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CONCAVE_ARC_SMALL_TWICE,
        .backPic = gMonBackPic_Amaura,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Amaura,
        .shinyPalette = gMonShinyPalette_Amaura,
        .iconSprite = gMonIcon_Amaura,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Amaura)
        OVERWORLD(
            sPicTable_Amaura,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Amaura,
            gShinyOverworldPalette_Amaura
        )
        .levelUpLearnset = sAmauraLevelUpLearnset,
        .teachableLearnset = sAmauraTeachableLearnset,
        .eggMoveLearnset = sAmauraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_AURORUS, CONDITIONS({IF_TIME, TIME_NIGHT})}),
    },

    [SPECIES_AURORUS] =
    {
        .baseHP        = 123,
        .baseAttack    = 77,
        .baseDefense   = 72,
        .baseSpeed     = 58,
        .baseSpAttack  = 99,
        .baseSpDefense = 92,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ICE),
        .catchRate = 45,
        .expYield = 104,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Aurorus"),
        .cryId = CRY_AURORUS,
        .natDexNum = NATIONAL_DEX_AURORUS,
        .categoryName = _("Tundra"),
        .height = 27,
        .weight = 2250,
		.description = COMPOUND_STRING(
			"Gracias a sus cristales con forma de\n"
			"rombo, puede crear al momento una\n"
			"barrera de hielo para bloquear el ataque\n"
			"de su enemigo."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aurorus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Aurorus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Aurorus,
        .shinyPalette = gMonShinyPalette_Aurorus,
        .iconSprite = gMonIcon_Aurorus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 14, SHADOW_SIZE_L)
        FOOTPRINT(Aurorus)
        OVERWORLD(
            sPicTable_Aurorus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aurorus,
            gShinyOverworldPalette_Aurorus
        )
        .levelUpLearnset = sAurorusLevelUpLearnset,
        .teachableLearnset = sAurorusTeachableLearnset,
    },
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
    [SPECIES_HAWLUCHA] =
    {
        .baseHP        = 78,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 118,
        .baseSpAttack  = 74,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_HUMAN_LIKE),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #endif
        .abilities = { ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Hawlucha"),
        .cryId = CRY_HAWLUCHA,
        .natDexNum = NATIONAL_DEX_HAWLUCHA,
        .categoryName = _("Lucha libre"),
        .height = 8,
        .weight = 215,
		.description = COMPOUND_STRING(
			"Controla su posición en el aire con\n"
			"las alas. Lanza ataques desde gran\n"
			"altura que resultan difíciles de evitar."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hawlucha,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Hawlucha,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Hawlucha,
        .shinyPalette = gMonShinyPalette_Hawlucha,
        .iconSprite = gMonIcon_Hawlucha,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Hawlucha)
        OVERWORLD(
            sPicTable_Hawlucha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hawlucha,
            gShinyOverworldPalette_Hawlucha
        )
        .levelUpLearnset = sHawluchaLevelUpLearnset,
        .teachableLearnset = sHawluchaTeachableLearnset,
        .eggMoveLearnset = sHawluchaEggMoveLearnset,
    },
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
    [SPECIES_DEDENNE] =
    {
        .baseHP        = 67,
        .baseAttack    = 58,
        .baseDefense   = 57,
        .baseSpeed     = 101,
        .baseSpAttack  = 81,
        .baseSpDefense = 67,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FAIRY),
        .catchRate = 180,
        .expYield = 151,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CHEEK_POUCH, ABILITY_PICKUP, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dedenne"),
        .cryId = CRY_DEDENNE,
        .natDexNum = NATIONAL_DEX_DEDENNE,
        .categoryName = _("Antenas"),
        .height = 2,
        .weight = 22,
		.description = COMPOUND_STRING(
			"Sus bigotes hacen función de antenas,\n"
			"por lo que puede enviar y recibir ondas\n"
			"eléctricas para comunicarse a grandes\n"
			"distancias."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dedenne,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Dedenne,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Dedenne,
        .shinyPalette = gMonShinyPalette_Dedenne,
        .iconSprite = gMonIcon_Dedenne,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Dedenne)
        OVERWORLD(
            sPicTable_Dedenne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dedenne,
            gShinyOverworldPalette_Dedenne
        )
        .levelUpLearnset = sDedenneLevelUpLearnset,
        .teachableLearnset = sDedenneTeachableLearnset,
        .eggMoveLearnset = sDedenneEggMoveLearnset,
    },
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
    [SPECIES_CARBINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 60,
        .expYield = 100,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_MINERAL),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Carbink"),
        .cryId = CRY_CARBINK,
        .natDexNum = NATIONAL_DEX_CARBINK,
        .categoryName = _("Joya"),
        .height = 3,
        .weight = 57,
		.description = COMPOUND_STRING(
			"Nace en las profundidades subterráneas,\n"
			"a altas temperaturas y a gran presión.\n"
			"Irradia energía por la roca que tiene\n"
			"en la cabeza."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carbink,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Carbink,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Carbink,
        .shinyPalette = gMonShinyPalette_Carbink,
        .iconSprite = gMonIcon_Carbink,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Carbink)
        OVERWORLD(
            sPicTable_Carbink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Carbink,
            gShinyOverworldPalette_Carbink
        )
        .levelUpLearnset = sCarbinkLevelUpLearnset,
        .teachableLearnset = sCarbinkTeachableLearnset,
    },
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
    [SPECIES_GOOMY] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 60,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goomy"),
        .cryId = CRY_GOOMY,
        .natDexNum = NATIONAL_DEX_GOOMY,
        .categoryName = _("Molusco"),
        .height = 3,
        .weight = 28,
		.description = COMPOUND_STRING(
			"Palpa los alrededores con sus cuernos.\n"
			"Estos son tan sensibles que se queda\n"
			"paralizado si alguien se los agarra."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Goomy,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Goomy,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_Goomy,
        .shinyPalette = gMonShinyPalette_Goomy,
        .iconSprite = gMonIcon_Goomy,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Goomy)
        OVERWORLD(
            sPicTable_Goomy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goomy,
            gShinyOverworldPalette_Goomy
        )
        .levelUpLearnset = sGoomyLevelUpLearnset,
        .teachableLearnset = sGoomyTeachableLearnset,
        .eggMoveLearnset = sGoomyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_SLIGGOO},
                                {EVO_NONE, 0, SPECIES_SLIGGOO_HISUI}),
    },

    [SPECIES_SLIGGOO] =
    {
        .baseHP        = 68,
        .baseAttack    = 75,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sliggoo"),
        .cryId = CRY_SLIGGOO,
        .natDexNum = NATIONAL_DEX_SLIGGOO,
        .categoryName = _("Molusco"),
        .height = 8,
        .weight = 175,
		.description = COMPOUND_STRING(
			"Sus cuatro antenas constituyen un radar\n"
			"de gran potencia. Hacen las veces de \n"
			"nariz y oídos para percibir tanto ruidos\n"
			"como olores."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sliggoo,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sliggoo,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Sliggoo,
        .shinyPalette = gMonShinyPalette_Sliggoo,
        .iconSprite = gMonIcon_Sliggoo,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_Sliggoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sliggoo,
            gShinyOverworldPalette_Sliggoo
        )
        .levelUpLearnset = sSliggooLevelUpLearnset,
        .teachableLearnset = sSliggooTeachableLearnset,
        .formSpeciesIdTable = sSliggooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_GOODRA, CONDITIONS({IF_WEATHER, WEATHER_RAIN})},
                                {EVO_LEVEL, 50, SPECIES_GOODRA, CONDITIONS({IF_WEATHER, WEATHER_FOG})}),
    },

    [SPECIES_GOODRA] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goodra"),
        .cryId = CRY_GOODRA,
        .natDexNum = NATIONAL_DEX_GOODRA,
        .categoryName = _("Dragón"),
        .height = 20,
        .weight = 1505,
		.description = COMPOUND_STRING(
			"Golpea con sus antenas retráctiles y\n"
			"derriba con su gruesa cola a aquellos\n"
			"que se burlan de él creyendo que es\n"
			"inofensivo."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Goodra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Goodra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Goodra,
        .shinyPalette = gMonShinyPalette_Goodra,
        .iconSprite = gMonIcon_Goodra,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_Goodra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goodra,
            gShinyOverworldPalette_Goodra
        )
        .levelUpLearnset = sGoodraLevelUpLearnset,
        .teachableLearnset = sGoodraTeachableLearnset,
        .formSpeciesIdTable = sGoodraFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_SLIGGOO_HISUI] =
    {
        .baseHP        = 58,
        .baseAttack    = 75,
        .baseDefense   = 83,
        .baseSpeed     = 40,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sliggoo"),
        .cryId = CRY_SLIGGOO,
        .natDexNum = NATIONAL_DEX_SLIGGOO,
        .categoryName = _("Caracol"),
        .height = 7,
        .weight = 685,
        .description = COMPOUND_STRING(
           "Una criatura propensa a la melancolía.\n"
            "Su concha metálica se desarrolló como\n"
            "resultado de la reacción del moco de su\n"
            "piel con el hierro en el agua de Hisui."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SliggooHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SliggooHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SliggooHisui,
        .shinyPalette = gMonShinyPalette_SliggooHisui,
        .iconSprite = gMonIcon_SliggooHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_SliggooHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SliggooHisui,
            gShinyOverworldPalette_SliggooHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sSliggooHisuiLevelUpLearnset,
        .teachableLearnset = sSliggooHisuiTeachableLearnset,
        .formSpeciesIdTable = sSliggooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_GOODRA_HISUI, CONDITIONS({IF_WEATHER, WEATHER_RAIN})},
                                {EVO_LEVEL, 50, SPECIES_GOODRA_HISUI, CONDITIONS({IF_WEATHER, WEATHER_FOG})}),

    },

    [SPECIES_GOODRA_HISUI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goodra"),
        .cryId = CRY_GOODRA,
        .natDexNum = NATIONAL_DEX_GOODRA,
        .categoryName = _("Retracción"),
        .height = 17,
        .weight = 3341,
        .description = COMPOUND_STRING(
            "Detesta la soledad y es demasiado\n"
            "pegajoso: se enfurece y hace\n"
            "desmanes si las personas queridas para\n"
            "él alguna vez se alejan de su lado."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GoodraHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GoodraHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GoodraHisui,
        .shinyPalette = gMonShinyPalette_GoodraHisui,
        .iconSprite = gMonIcon_GoodraHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_GoodraHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GoodraHisui,
            gShinyOverworldPalette_GoodraHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sGoodraHisuiLevelUpLearnset,
        .teachableLearnset = sGoodraHisuiTeachableLearnset,
        .formSpeciesIdTable = sGoodraFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
    [SPECIES_KLEFKI] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 91,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 87,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = 165,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_MAGICIAN },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Klefki"),
        .cryId = CRY_KLEFKI,
        .natDexNum = NATIONAL_DEX_KLEFKI,
        .categoryName = _("Llavero"),
        .height = 2,
        .weight = 30,
		.description = COMPOUND_STRING(
			"Tiene el hábito de coleccionar llaves.\n"
			"Cuando un enemigo lo ataca, las hace\n"
			"tintinear como método de intimidación."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Klefki,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FOUR_PETAL,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Klefki,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Klefki,
        .shinyPalette = gMonShinyPalette_Klefki,
        .iconSprite = gMonIcon_Klefki,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Klefki)
        OVERWORLD(
            sPicTable_Klefki,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klefki,
            gShinyOverworldPalette_Klefki
        )
        .levelUpLearnset = sKlefkiLevelUpLearnset,
        .teachableLearnset = sKlefkiTeachableLearnset,
        .eggMoveLearnset = sKlefkiEggMoveLearnset,
    },
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
    [SPECIES_PHANTUMP] =
    {
        .baseHP        = 43,
        .baseAttack    = 70,
        .baseDefense   = 48,
        .baseSpeed     = 38,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Phantump"),
        .cryId = CRY_PHANTUMP,
        .natDexNum = NATIONAL_DEX_PHANTUMP,
        .categoryName = _("Tocón"),
        .height = 4,
        .weight = 70,
		.description = COMPOUND_STRING(
			"Pokémon que nace cuando un espíritu\n"
			"se adentra en un tocón podrido.\n"
			"Habita en bosques que son poco\n"
			"frecuentados por humanos."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Phantump,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Phantump,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Phantump,
        .shinyPalette = gMonShinyPalette_Phantump,
        .iconSprite = gMonIcon_Phantump,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Phantump)
        OVERWORLD(
            sPicTable_Phantump,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phantump,
            gShinyOverworldPalette_Phantump
        )
        .levelUpLearnset = sPhantumpLevelUpLearnset,
        .teachableLearnset = sPhantumpTeachableLearnset,
        .eggMoveLearnset = sPhantumpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_TREVENANT},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_TREVENANT}),
    },

    [SPECIES_TREVENANT] =
    {
        .baseHP        = 85,
        .baseAttack    = 110,
        .baseDefense   = 76,
        .baseSpeed     = 56,
        .baseSpAttack  = 65,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trevenant"),
        .cryId = CRY_TREVENANT,
        .natDexNum = NATIONAL_DEX_TREVENANT,
        .categoryName = _("Árbol viejo"),
        .height = 15,
        .weight = 710,
		.description = COMPOUND_STRING(
			"Puede controlar los árboles a su\n"
			"voluntad. Retiene hasta el fin de sus\n"
			"días a los humanos que se adentran en\n"
			"el bosque y lo mancillan."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trevenant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Trevenant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Trevenant,
        .shinyPalette = gMonShinyPalette_Trevenant,
        .iconSprite = gMonIcon_Trevenant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Trevenant)
        OVERWORLD(
            sPicTable_Trevenant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trevenant,
            gShinyOverworldPalette_Trevenant
        )
        .levelUpLearnset = sTrevenantLevelUpLearnset,
        .teachableLearnset = sTrevenantTeachableLearnset,
    },
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .baseHP        = 49,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Calabaza"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
            "La luz que proviene de los\n"
            "agujeros en la calabaza pueden\n"
            "hipnotizar y controlar a los\n"
            "Pokémon y personas que los ven."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooAverage,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooAverage,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_AVERAGE},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_AVERAGE}),
    },

    [SPECIES_PUMPKABOO_SMALL] =
    {
        .baseHP        = 44,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 56,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Calabaza"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "Cuando se trata de llevarse\n"
            "espíritus al Otro Mundo, los\n"
            "pequeños Pumpkaboo prefieren\n"
            "los de los niños a los adultos."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooSmall,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSmall,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SMALL},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_SMALL}),
    },

    [SPECIES_PUMPKABOO_LARGE] =
    {
        .baseHP        = 54,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 46,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Calabaza"),
        .height = 5,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Cuando se trata de llevarse\n"
            "espíritus al Otro Mundo, los\n"
            "Pumpkaboo grandes prefieren\n"
            "los de los adultos a los niños."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooLarge,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooLarge,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_LARGE},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_LARGE}),
    },

    [SPECIES_PUMPKABOO_SUPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 41,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 67,
        .evYield_Defense = 1,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO_SUPER,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Calabaza"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Los Pumpkaboo extragrandes\n"
            "tienen debilidad por las\n"
            "personas cuyo espíritu es\n"
            "de grandes proporciones."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PumpkabooSuper,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSuper,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
        .levelUpLearnset = sPumpkabooLevelUpLearnset,
        .teachableLearnset = sPumpkabooTeachableLearnset,
        .eggMoveLearnset = sPumpkabooEggMoveLearnset,
        .formSpeciesIdTable = sPumpkabooFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOURGEIST_SUPER},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOURGEIST_SUPER}),
    },

    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 122,
        .baseSpeed     = 84,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Calabaza"),
        .height = 9,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Se dice que los espeluznantes\n"
            "alaridos que emite bien entrada\n"
            "la noche son los lamentos de las\n"
            "almas en pena desde el más allá."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistAverage,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistAverage,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 122,
        .baseSpeed     = 99,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Calabaza"),
        .height = 7,
        .weight = 95,
        .description = COMPOUND_STRING(
            "Los Gourgeist de tamaño pequeño\n"
            "se hacen pasar por niños para\n"
            "que los adultos bajen la guardia\n"
            "y así llevárselos al otro mundo."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistSmall,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSmall,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 122,
        .baseSpeed     = 69,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Calabaza"),
        .height = 11,
        .weight = 140,
        .description = COMPOUND_STRING(
            "Los Gourgeist tamaño grande se\n"
            "hacen pasar por adultos para\n"
            "tomar a los niños de la mano y\n"
            "llevárselos al otro mundo."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistLarge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistLarge,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .baseHP        = 85,
        .baseAttack    = 100,
        .baseDefense   = 122,
        .baseSpeed     = 54,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 173,
        .evYield_Defense = 2,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST_SUPER,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Calabaza"),
        .height = 17,
        .weight = 390,
        .description = COMPOUND_STRING(
            "Los Gourgeist tamaño extragrande\n"
            "se llevan a cualquiera al otro\n"
            "mundo, pues nadie puede\n"
            "resistir su fuerza."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GourgeistSuper,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSuper,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
        .levelUpLearnset = sGourgeistLevelUpLearnset,
        .teachableLearnset = sGourgeistTeachableLearnset,
        .formSpeciesIdTable = sGourgeistFormSpeciesIdTable,
    },
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define BERGMITE_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_MINERAL)
#else
    #define BERGMITE_EGG_GROUPS MON_EGG_GROUPS(EGG_GROUP_MONSTER)
#endif

    [SPECIES_BERGMITE] =
    {
        .baseHP        = 55,
        .baseAttack    = 69,
        .baseDefense   = 85,
        .baseSpeed     = 28,
        .baseSpAttack  = 32,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bergmite"),
        .cryId = CRY_BERGMITE,
        .natDexNum = NATIONAL_DEX_BERGMITE,
        .categoryName = _("Témpano"),
        .height = 10,
        .weight = 995,
		.description = COMPOUND_STRING(
			"Envuelve su cuerpo en una capa de\n"
			"hielo que le permite evitar los ataques\n"
			"del enemigo. Si se resquebraja, la\n"
			"recompone con aire gélido."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bergmite,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Bergmite,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Bergmite,
        .shinyPalette = gMonShinyPalette_Bergmite,
        .iconSprite = gMonIcon_Bergmite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Bergmite)
        OVERWORLD(
            sPicTable_Bergmite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bergmite,
            gShinyOverworldPalette_Bergmite
        )
        .levelUpLearnset = sBergmiteLevelUpLearnset,
        .teachableLearnset = sBergmiteTeachableLearnset,
        .eggMoveLearnset = sBergmiteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_AVALUGG},
                                {EVO_NONE, 0, SPECIES_AVALUGG_HISUI}),
    },

    [SPECIES_AVALUGG] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseDefense   = 184,
        .baseSpeed     = 28,
        .baseSpAttack  = 44,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Avalugg"),
        .cryId = CRY_AVALUGG,
        .natDexNum = NATIONAL_DEX_AVALUGG,
        .categoryName = _("Iceberg"),
        .height = 20,
        .weight = 5050,
		.description = COMPOUND_STRING(
			"Parece un portaaviones de hielo, por\n"
			"el aspecto que presenta al llevar varios\n"
			"Bergmite en su espalda."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Avalugg,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Avalugg,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Avalugg,
        .shinyPalette = gMonShinyPalette_Avalugg,
        .iconSprite = gMonIcon_Avalugg,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_Avalugg,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Avalugg,
            gShinyOverworldPalette_Avalugg
        )
        .levelUpLearnset = sAvaluggLevelUpLearnset,
        .teachableLearnset = sAvaluggTeachableLearnset,
        .formSpeciesIdTable = sAvaluggFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_AVALUGG_HISUI] =
    {
        .baseHP        = 95,
        .baseAttack    = 127,
        .baseDefense   = 184,
        .baseSpeed     = 38,
        .baseSpAttack  = 34,
        .baseSpDefense = 36,
        .types = MON_TYPES(TYPE_ICE, TYPE_ROCK),
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = BERGMITE_EGG_GROUPS,
        .abilities = { ABILITY_STRONG_JAW, ABILITY_ICE_BODY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Avalugg"),
        .cryId = CRY_AVALUGG,
        .natDexNum = NATIONAL_DEX_AVALUGG,
        .categoryName = _("Iceberg"),
        .height = 14,
        .weight = 2624,
        .description = COMPOUND_STRING(
            "La armadura de hielo que cubre su\n"
            "mandíbula inferior pone al acero en\n"
            "vergüenza y puede romper rocas\n"
            "con facilidad."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_AvaluggHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AvaluggHisui,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AvaluggHisui,
        .shinyPalette = gMonShinyPalette_AvaluggHisui,
        .iconSprite = gMonIcon_AvaluggHisui,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -2, SHADOW_SIZE_L)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_AvaluggHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AvaluggHisui,
            gShinyOverworldPalette_AvaluggHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sAvaluggHisuiLevelUpLearnset,
        .teachableLearnset = sAvaluggHisuiTeachableLearnset,
        .formSpeciesIdTable = sAvaluggFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
    [SPECIES_NOIBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .catchRate = 190,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #endif
        .abilities = { ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Noibat"),
        .cryId = CRY_NOIBAT,
        .natDexNum = NATIONAL_DEX_NOIBAT,
        .categoryName = _("Onda sónica"),
        .height = 5,
        .weight = 80,
		.description = COMPOUND_STRING(
			"Le encanta la fruta, pero es tan selecto\n"
			"que emite ondas ultrasónicas para\n"
			"detectar cuáles están maduras y el\n"
			"resto las descarta."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Noibat,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
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
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Noibat,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Noibat,
        .shinyPalette = gMonShinyPalette_Noibat,
        .iconSprite = gMonIcon_Noibat,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Noibat)
        OVERWORLD(
            sPicTable_Noibat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noibat,
            gShinyOverworldPalette_Noibat
        )
        .levelUpLearnset = sNoibatLevelUpLearnset,
        .teachableLearnset = sNoibatTeachableLearnset,
        .eggMoveLearnset = sNoibatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_NOIVERN}),
    },

    [SPECIES_NOIVERN] =
    {
        .baseHP        = 85,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 123,
        .baseSpAttack  = 97,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 187,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_DRAGON),
    #else
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #endif
        .abilities = { ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Noivern"),
        .cryId = CRY_NOIVERN,
        .natDexNum = NATIONAL_DEX_NOIVERN,
        .categoryName = _("Onda sónica"),
        .height = 15,
        .weight = 850,
		.description = COMPOUND_STRING(
			"Surca el cielo nocturno cuando ni\n"
			"siquiera la luna brilla y ataca a presas\n"
			"incautas. Es imbatible en combates que\n"
			"tienen lugar a oscuras."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Noivern,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Noivern,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Noivern,
        .shinyPalette = gMonShinyPalette_Noivern,
        .iconSprite = gMonIcon_Noivern,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 10, SHADOW_SIZE_L)
        FOOTPRINT(Noivern)
        OVERWORLD(
            sPicTable_Noivern,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noivern,
            gShinyOverworldPalette_Noivern
        )
        .levelUpLearnset = sNoivernLevelUpLearnset,
        .teachableLearnset = sNoivernTeachableLearnset,
    },
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
    [SPECIES_XERNEAS_NEUTRAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FAIRY_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Vida"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XerneasNeutral,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasNeutral,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_XerneasNeutral,
        .shinyPalette = gMonShinyPalette_XerneasNeutral,
        .iconSprite = gMonIcon_XerneasNeutral,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasNeutral,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sXerneasLevelUpLearnset,
        .teachableLearnset = sXerneasTeachableLearnset,
        .formSpeciesIdTable = sXerneasFormSpeciesIdTable,
        .formChangeTable = sXerneasFormChangeTable,
    },

    [SPECIES_XERNEAS_ACTIVE] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_FAIRY_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Vida"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XerneasActive,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasActive,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_XerneasActive,
        .shinyPalette = gMonShinyPalette_XerneasActive,
        .iconSprite = gMonIcon_XerneasActive,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasActive,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sXerneasLevelUpLearnset,
        .teachableLearnset = sXerneasTeachableLearnset,
        .formSpeciesIdTable = sXerneasFormSpeciesIdTable,
        .formChangeTable = sXerneasFormChangeTable,
    },
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
    [SPECIES_YVELTAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 340 : 306,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yveltal"),
        .cryId = CRY_YVELTAL,
        .natDexNum = NATIONAL_DEX_YVELTAL,
        .categoryName = _("Destrucción"),
        .height = 58,
        .weight = 2030,
		.description = COMPOUND_STRING(
			"Cuando su vida se extingue, absorbe la\n"
			"vitalidad de todos los seres vivos y\n"
			"regresa a su forma de crisálida."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Yveltal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Yveltal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Yveltal,
        .shinyPalette = gMonShinyPalette_Yveltal,
        .iconSprite = gMonIcon_Yveltal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_L)
        FOOTPRINT(Yveltal)
        OVERWORLD(
            sPicTable_Yveltal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yveltal,
            gShinyOverworldPalette_Yveltal
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sYveltalLevelUpLearnset,
        .teachableLearnset = sYveltalTeachableLearnset,
    },
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
    [SPECIES_ZYGARDE_50] =
    {
        .baseHP        = 108,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 95,
        .baseSpAttack  = 81,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AURA_BREAK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Equilibrio"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde50AuraBreakFormChangeTable,
    },
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .baseHP        = 108,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 95,
        .baseSpAttack  = 81,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Equilibrio"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde50PowerConstructFormChangeTable,
    },
    [SPECIES_ZYGARDE_10_AURA_BREAK] =
    {
        .baseHP        = 54,
        .baseAttack    = 100,
        .baseDefense   = 71,
        .baseSpeed     = 115,
        .baseSpAttack  = 61,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 243 : 219,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AURA_BREAK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Equilibrio"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde10AuraBreakFormChangeTable,
    },

    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .baseHP        = 54,
        .baseAttack    = 100,
        .baseDefense   = 71,
        .baseSpeed     = 115,
        .baseSpAttack  = 61,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 243 : 219,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Equilibrio"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygarde10PowerConstructFormChangeTable,
    },

    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .baseHP        = 216,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 85,
        .baseSpAttack  = 91,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_GROUND),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 354 : 319,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_POWER_CONSTRUCT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_COMPLETE,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Equilibrio"),
        .height = 45,
        .weight = 6100,
        .description = COMPOUND_STRING(
            "Esta es la forma perfeccionada de\n"
            "Zygarde. Desde el orificio en su pecho,\n"
            "irradia energía de alta potencia\n"
            "que elimina todo a su alrededor."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_ZygardeComplete,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_ZygardeComplete,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_ZygardeComplete,
        .shinyPalette = gMonShinyPalette_ZygardeComplete,
        .iconSprite = gMonIcon_ZygardeComplete,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_ZygardeComplete,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZygardeComplete,
            gShinyOverworldPalette_ZygardeComplete
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZygardeLevelUpLearnset,
        .teachableLearnset = sZygardeTeachableLearnset,
        .formSpeciesIdTable = sZygardeFormSpeciesIdTable,
        .formChangeTable = sZygardeCompleteFormChangeTable,
    },
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
    [SPECIES_DIANCIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 100,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 150,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
        .cryId = CRY_DIANCIE,
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Joya"),
        .height = 7,
        .weight = 88,
		.description = COMPOUND_STRING(
			"Puede crear una gran cantidad de\n"
			"diamantes en un instante comprimiendo\n"
			"con las manos el carbono que flota\n"
			"en el aire."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Diancie,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Diancie,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Diancie,
        .shinyPalette = gMonShinyPalette_Diancie,
        .iconSprite = gMonIcon_Diancie,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Diancie)
        OVERWORLD(
            sPicTable_Diancie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Diancie,
            gShinyOverworldPalette_Diancie
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDiancieLevelUpLearnset,
        .teachableLearnset = sDiancieTeachableLearnset,
        .formSpeciesIdTable = sDiancieFormSpeciesIdTable,
        .formChangeTable = sDiancieFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DIANCIE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FAIRY),
        .catchRate = 3,
        .expYield = 315,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
        .cryId = CRY_DIANCIE_MEGA,
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Joya"),
        .height = 11,
        .weight = 278,
        .description = COMPOUND_STRING(
           "Las impurezas de su cuerpo se han caído,\n"
            "brillando con tal intensidad que no\n"
            "puede observarse directamente. Es\n"
            "conocida como “la Princesa Rosa Real”."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DiancieMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DiancieMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DiancieMega,
        .shinyPalette = gMonShinyPalette_DiancieMega,
        .iconSprite = gMonIcon_DiancieMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Diancie)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_DiancieMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DiancieMega,
            gShinyOverworldPalette_DiancieMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMythical = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDiancieLevelUpLearnset,
        .teachableLearnset = sDiancieTeachableLearnset,
        .formSpeciesIdTable = sDiancieFormSpeciesIdTable,
        .formChangeTable = sDiancieFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
    [SPECIES_HOOPA_CONFINED] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 150,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GHOST),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGICIAN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_CONFINED,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Travesura"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "En su forma verdadera, posee mucho\n"
            "poder. Si sus poderes están sellados,\n"
            "se transforma en una forma más pequeña.\n"
            "Esconde cosas a un lugar secreto."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HoopaConfined,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_HoopaConfined,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_HoopaConfined,
        .shinyPalette = gMonShinyPalette_HoopaConfined,
        .iconSprite = gMonIcon_HoopaConfined,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaConfined,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaConfined,
            gShinyOverworldPalette_HoopaConfined
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHoopaConfinedLevelUpLearnset,
        .teachableLearnset = sHoopaConfinedTeachableLearnset,
        .formSpeciesIdTable = sHoopaFormSpeciesIdTable,
        .formChangeTable = sHoopaFormChangeTable,
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 170,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DARK),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = P_UPDATED_FRIENDSHIP >= GEN_8 ? STANDARD_FRIENDSHIP : 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGICIAN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_UNBOUND,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Genio burlón"),
        .height = 65,
        .weight = 490,
        .description = COMPOUND_STRING(
            "Es su verdadera forma, que ha desatado\n"
            "su poder sellado. Sus anillos tienen\n"
            "el poder de doblar dimensiones y\n"
            "apoderarse de cualquier cosa del mundo."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HoopaUnbound,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_HoopaUnbound,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_HoopaUnbound,
        .shinyPalette = gMonShinyPalette_HoopaUnbound,
        .iconSprite = gMonIcon_HoopaUnbound,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaUnbound,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaUnbound,
            gShinyOverworldPalette_HoopaUnbound
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sHoopaUnboundLevelUpLearnset,
        .teachableLearnset = sHoopaUnboundTeachableLearnset,
        .formSpeciesIdTable = sHoopaFormSpeciesIdTable,
        .formChangeTable = sHoopaFormChangeTable,
    },
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
    [SPECIES_VOLCANION] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 120,
        .baseSpeed     = 70,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIRE, TYPE_WATER),
        .catchRate = 3,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Volcanion"),
        .cryId = CRY_VOLCANION,
        .natDexNum = NATIONAL_DEX_VOLCANION,
        .categoryName = _("Vapor"),
        .height = 17,
        .weight = 1950,
		.description = COMPOUND_STRING(
			"Expulsa vapor de agua por los brazos\n"
			"que tiene en la espalda. Sale a tal\n"
			"potencia que sería capaz de arrasar\n"
			"una montaña entera."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Volcanion,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Volcanion,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Volcanion,
        .shinyPalette = gMonShinyPalette_Volcanion,
        .iconSprite = gMonIcon_Volcanion,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Volcanion)
        OVERWORLD(
            sPicTable_Volcanion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Volcanion,
            gShinyOverworldPalette_Volcanion
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sVolcanionLevelUpLearnset,
        .teachableLearnset = sVolcanionTeachableLearnset,
    },
#endif //P_FAMILY_VOLCANION

#ifdef __INTELLISENSE__
};
#endif
