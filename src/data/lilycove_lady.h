#include "constants/event_objects.h"
#include "constants/items.h"
#include "constants/moves.h"

struct LilycoveContestLadyValues
{
    u16 monGfxId;
    u16 monSpecies;
    const u8 *monName;
    const u8 *categoryName;
    const u8 *contestName;
};

static const struct LilycoveContestLadyValues sContestLadyValues[] =
{
    [CONTEST_CATEGORY_COOL] = {
        .monGfxId = OBJ_EVENT_GFX_ZIGZAGOON_1,
        .monSpecies = SPECIES_ZIGZAGOON,
        .monName = COMPOUND_STRING("HANDSOME"),
        .categoryName = COMPOUND_STRING("coolness"),
        .contestName = gText_CoolnessContest,
    },
    [CONTEST_CATEGORY_BEAUTY] = {
        .monGfxId = OBJ_EVENT_GFX_SKITTY,
        .monSpecies = SPECIES_SKITTY,
        .monName = COMPOUND_STRING("VINNY"),
        .categoryName = COMPOUND_STRING("beauty"),
        .contestName = gText_BeautyContest,
    },
    [CONTEST_CATEGORY_CUTE] = {
        .monGfxId = OBJ_EVENT_GFX_POOCHYENA,
        .monSpecies = SPECIES_POOCHYENA,
        .monName = COMPOUND_STRING("MOREME"),
        .categoryName = COMPOUND_STRING("cuteness"),
        .contestName = gText_CutenessContest,
    },
    [CONTEST_CATEGORY_SMART] = {
        .monGfxId = OBJ_EVENT_GFX_KECLEON,
        .monSpecies = SPECIES_KECLEON,
        .monName = COMPOUND_STRING("IRONHARD"),
        .categoryName = COMPOUND_STRING("smartness"),
        .contestName = gText_SmartnessContest,
    },
    [CONTEST_CATEGORY_TOUGH] = {
        .monGfxId = OBJ_EVENT_GFX_PIKACHU,
        .monSpecies = SPECIES_PIKACHU,
        .monName = COMPOUND_STRING("MUSCLE"),
        .categoryName = COMPOUND_STRING("toughness"),
        .contestName = gText_ToughnessContest,
    },
};

static const u16 sLilycoveLadyGfxId[] =
{
    OBJ_EVENT_GFX_WOMAN_4,
    OBJ_EVENT_GFX_WOMAN_2,
    OBJ_EVENT_GFX_GIRL_2
};

// Quiz Lady data
static const u16 sQuizLadyQuestion1[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_CAN_T, EC_WORD_LIKELY_TO, EC_WORD_POKEMON, EC_WORD_THE, EC_WORD_QUES, EC_WORD_SWARM, EC_WORD_POKEDEX, EC_WORD_DROUGHT
};

static const u16 sQuizLadyQuestion2[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_CHILD_S_PLAY, EC_WORD_QUES, EC_WORD_RUBY, EC_WORD_SAPPHIRE, EC_WORD_WHAT
};

static const u16 sQuizLadyQuestion3[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_EVEN_SO, EC_WORD_SERIOUSLY, EC_WORD_WITHOUT, EC_WORD_EVOLUTION, EC_WORD_QUES, EC_WORD_LEVEL, EC_WORD_INSOMNIA, EC_WORD_CUTE_CHARM
};

static const u16 sQuizLadyQuestion4[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_IS, EC_WORD_VERY, EC_WORD_SILKY, EC_WORD_QUES, EC_WORD_WEEK, EC_WORD_FLOWERS, EC_WORD_AGE
};

static const u16 sQuizLadyQuestion5[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_APPROVED, EC_WORD_QUES, EC_WORD_EGG, EC_WORD_LETTER, EC_WORD_DIGITAL
};

static const u16 sQuizLadyQuestion6[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_RECOMMEND, EC_WORD_THAT_S, EC_MOVE2(CONFUSION), EC_WORD_QUES, EC_WORD_ILLUMINATE, EC_WORD_OWN_TEMPO, EC_WORD_SWIFT_SWIM
};

static const u16 sQuizLadyQuestion7[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_LAY, EC_WORD_LIKE, EC_WORD_LIKELY_TO, EC_WORD_QUES, EC_WORD_RADIO, EC_WORD_TOURNAMENT, EC_WORD_TELEVISION
};

static const u16 sQuizLadyQuestion8[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_LAY, EC_WORD_LIKE, EC_WORD_WASN_T, EC_WORD_QUES, EC_WORD_ROCK, EC_WORD_CUTENESS, EC_WORD_NATURE
};

static const u16 sQuizLadyQuestion9[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_RECOMMEND, EC_WORD_A_TINY_BIT, EC_WORD_POISON, EC_WORD_QUES, EC_WORD_GUTS, EC_WORD_IMMUNITY, EC_WORD_SHED_SKIN
};

static const u16 sQuizLadyQuestion10[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_IS, EC_EMPTY_WORD, EC_WORD_FAMILY, EC_WORD_QUES, EC_WORD_SILKY, EC_WORD_GRANDFATHER, EC_WORD_YOU_VE
};

static const u16 sQuizLadyQuestion11[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_CAN_T, EC_WORD_STORES, EC_WORD_POKEMON, EC_WORD_THE, EC_WORD_QUES, EC_WORD_PC, EC_WORD_DEPT_STORE, EC_WORD_TEACHER
};

static const u16 sQuizLadyQuestion12[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_LAY, EC_WORD_WITHOUT, EC_WORD_MESSAGE, EC_WORD_QUES, EC_WORD_BIKE, EC_WORD_LOCOMOTIVE, EC_WORD_RADIO
};

static const u16 sQuizLadyQuestion13[QUIZ_QUESTION_LEN] =
{
    EC_WORD_QUES_EXCL, EC_WORD_DOWN, EC_WORD_WENT, EC_WORD_FOR_NOW, EC_WORD_POKEMON, EC_WORD_QUES, EC_WORD_PHONE, EC_WORD_PLUSH_DOLL, EC_WORD_LETTER
};

static const u16 sQuizLadyQuestion14[QUIZ_QUESTION_LEN] =
{
    EC_WORD_IS, EC_WORD_FUNNY, EC_WORD_NOT_VERY, EC_WORD_A_TINY_BIT, EC_WORD_STEEL, EC_EMPTY_WORD, EC_WORD_ICE, EC_WORD_GROUND, EC_EMPTY_WORD
};

static const u16 sQuizLadyQuestion15[QUIZ_QUESTION_LEN] =
{
    EC_WORD_DARK, EC_WORD_IS, EC_WORD_FUNNY, EC_WORD_NOT_VERY, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_PSYCHIC, EC_WORD_GUARD, EC_EMPTY_WORD
};

static const u16 sQuizLadyQuestion16[QUIZ_QUESTION_LEN] =
{
    EC_WORD_GHOST, EC_WORD_IS, EC_WORD_FUNNY, EC_WORD_NOT_VERY, EC_EMPTY_WORD, EC_EMPTY_WORD, EC_WORD_NORMAL, EC_WORD_DARK, EC_EMPTY_WORD
};

static const u16 *const sQuizLadyQuizQuestions[] =
{
    sQuizLadyQuestion1,
    sQuizLadyQuestion2,
    sQuizLadyQuestion3,
    sQuizLadyQuestion4,
    sQuizLadyQuestion5,
    sQuizLadyQuestion6,
    sQuizLadyQuestion7,
    sQuizLadyQuestion8,
    sQuizLadyQuestion9,
    sQuizLadyQuestion10,
    sQuizLadyQuestion11,
    sQuizLadyQuestion12,
    sQuizLadyQuestion13,
    sQuizLadyQuestion14,
    sQuizLadyQuestion15,
    sQuizLadyQuestion16
};

static const u16 sQuizLadyQuizAnswers[] =
{
    EC_WORD_POKEDEX,
    EC_WORD_WHAT,
    EC_WORD_LEVEL,
    EC_WORD_FLOWERS,
    EC_WORD_EGG,
    EC_WORD_OWN_TEMPO,
    EC_WORD_TELEVISION,
    EC_WORD_CUTENESS,
    EC_WORD_IMMUNITY,
    EC_WORD_GRANDFATHER,
    EC_WORD_PC,
    EC_WORD_RADIO,
    EC_WORD_PLUSH_DOLL,
    EC_WORD_ICE,
    EC_WORD_GUARD,
    EC_WORD_DARK,
};

static const u16 sQuizLadyPrizes[] =
{
    ITEM_GLITTER_MAIL,
    ITEM_BEAD_MAIL,
    ITEM_TROPIC_MAIL,
    ITEM_MAX_ETHER,
    ITEM_MAX_ETHER,
    ITEM_MAX_ETHER,
    ITEM_WATMEL_BERRY,
    ITEM_BELUE_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_LUXURY_BALL,
    ITEM_TM_HYPER_BEAM,
    ITEM_BIG_PEARL,
    ITEM_STAR_PIECE,
    ITEM_RARE_CANDY,
    ITEM_RARE_CANDY,
    ITEM_PREMIER_BALL
};

// Favor Lady data
static const u8 *const sFavorLadyRequests[] =
{
    COMPOUND_STRING("slippery"),
    COMPOUND_STRING("roundish"),
    COMPOUND_STRING("wham-ish"),
    COMPOUND_STRING("shiny"),
    COMPOUND_STRING("sticky"),
    COMPOUND_STRING("pointy"),
};

static const u16 sFavorLadyAcceptedItems_Slippery[] =
{
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_BURN_HEAL,
    ITEM_BELUE_BERRY,
    ITEM_AWAKENING,
    ITEM_ICE_HEAL,
    ITEM_REVIVE,
    ITEM_MAX_REVIVE,
    ITEM_ENERGY_POWDER,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Roundish[] =
{
    ITEM_FLUFFY_TAIL,
    ITEM_PEARL,
    ITEM_BIG_PEARL,
    ITEM_HARD_STONE,
    ITEM_SMOKE_BALL,
    ITEM_SHOAL_SHELL,
    ITEM_TINY_MUSHROOM,
    ITEM_BIG_MUSHROOM,
    ITEM_PECHA_BERRY,
    ITEM_ASPEAR_BERRY,
    ITEM_ORAN_BERRY,
    ITEM_GREPA_BERRY,
    ITEM_MAGOST_BERRY,
    ITEM_WATMEL_BERRY,
    ITEM_POKE_BALL,
    ITEM_ULTRA_BALL,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Whamish[] =
{
    ITEM_REVIVAL_HERB,
    ITEM_POTION,
    ITEM_FRESH_WATER,
    ITEM_SODA_POP,
    ITEM_LEMONADE,
    ITEM_HARD_STONE,
    ITEM_LIGHT_BALL,
    ITEM_LAVA_COOKIE,
    ITEM_CHESTO_BERRY,
    ITEM_NANAB_BERRY,
    ITEM_WEPEAR_BERRY,
    ITEM_KELPSY_BERRY,
    ITEM_NOMEL_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Shiny[] =
{
    ITEM_HEAL_POWDER,
    ITEM_X_SPEED,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_BLUE_FLUTE,
    ITEM_YELLOW_FLUTE,
    ITEM_RED_FLUTE,
    ITEM_BLACK_FLUTE,
    ITEM_WHITE_FLUTE,
    ITEM_NUGGET,
    ITEM_SUN_STONE,
    ITEM_STARDUST,
    ITEM_STAR_PIECE,
    ITEM_PEARL,
    ITEM_BIG_PEARL,
    ITEM_TWISTED_SPOON,
    ITEM_SILVER_POWDER,
    ITEM_BRIGHT_POWDER,
    ITEM_LUXURY_BALL,
    ITEM_PREMIER_BALL,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Sticky[] =
{
    ITEM_ENERGY_ROOT,
    ITEM_FULL_RESTORE,
    ITEM_MAX_POTION,
    ITEM_DIRE_HIT,
    ITEM_X_ACCURACY,
    ITEM_GUARD_SPEC,
    ITEM_WATMEL_BERRY,
    ITEM_LEFTOVERS,
    ITEM_TINY_MUSHROOM,
    ITEM_HEART_SCALE,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Pointy[] =
{
    ITEM_QUICK_CLAW,
    ITEM_POISON_BARB,
    ITEM_SHARP_BEAK,
    ITEM_DRAGON_FANG,
    ITEM_TAMATO_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_PETAYA_BERRY,
    ITEM_SALAC_BERRY,
    ITEM_STARDUST,
    ITEM_STAR_PIECE,
    ITEM_NONE
};

static const u16 *const sFavorLadyAcceptedItemLists[] =
{
    sFavorLadyAcceptedItems_Slippery,
    sFavorLadyAcceptedItems_Roundish,
    sFavorLadyAcceptedItems_Whamish,
    sFavorLadyAcceptedItems_Shiny,
    sFavorLadyAcceptedItems_Sticky,
    sFavorLadyAcceptedItems_Pointy
};

static const u16 sFavorLadyPrizes[] =
{
    ITEM_LUXURY_BALL,
    ITEM_NUGGET,
    ITEM_PROTEIN,
    ITEM_HEART_SCALE,
    ITEM_RARE_CANDY,
    ITEM_PP_MAX
};
