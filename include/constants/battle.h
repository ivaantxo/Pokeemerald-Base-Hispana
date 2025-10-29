#ifndef GUARD_CONSTANTS_BATTLE_H
#define GUARD_CONSTANTS_BATTLE_H

/*
 * A battler may be in one of four positions on the field. The first bit determines
 * what side the battler is on, either the player's side or the opponent's side.
 * The second bit determines what flank the battler is on, either the left or right.
 * Note that the opponent's flanks are drawn corresponding to their perspective, so
 * their right mon appears on the left, and their left mon appears on the right.
 * The battler ID is usually the same as the position, except in the case of link battles.
 *
 *   + ------------------------- +
 *   |           Opponent's side |
 *   |            Right    Left  |
 *   |              3       1    |
 *   |                           |
 *   | Player's side             |
 *   |  Left   Right             |
 *   |   0       2               |
 *   ----------------------------+
 *   |                           |
 *   |                           |
 *   +---------------------------+
 */

enum BattlerPosition
{
    B_POSITION_PLAYER_LEFT,
    B_POSITION_OPPONENT_LEFT,
    B_POSITION_PLAYER_RIGHT,
    B_POSITION_OPPONENT_RIGHT,
    MAX_POSITION_COUNT,
};

enum BattlerId
{
    B_BATTLER_0,
    B_BATTLER_1,
    B_BATTLER_2,
    B_BATTLER_3,
    MAX_BATTLERS_COUNT,
};

// These macros can be used with either battler ID or positions to get the partner or the opposite mon
#define BATTLE_OPPOSITE(id) ((id) ^ BIT_SIDE)
#define BATTLE_PARTNER(id) ((id) ^ BIT_FLANK)

#define B_SIDE_PLAYER     0
#define B_SIDE_OPPONENT   1
#define NUM_BATTLE_SIDES  2

#define B_FLANK_LEFT  0
#define B_FLANK_RIGHT 1

#define BIT_SIDE        1
#define BIT_FLANK       2

// Battle Type Flags
#define BATTLE_TYPE_DOUBLE             (1 << 0)
#define BATTLE_TYPE_LINK               (1 << 1)
#define BATTLE_TYPE_IS_MASTER          (1 << 2) // In not-link battles, it's always set.
#define BATTLE_TYPE_TRAINER            (1 << 3)
#define BATTLE_TYPE_FIRST_BATTLE       (1 << 4)
#define BATTLE_TYPE_LINK_IN_BATTLE     (1 << 5) // Set on battle entry, cleared on exit. Checked rarely
#define BATTLE_TYPE_MULTI              (1 << 6)
#define BATTLE_TYPE_SAFARI             (1 << 7)
#define BATTLE_TYPE_BATTLE_TOWER       (1 << 8)
#define BATTLE_TYPE_WALLY_TUTORIAL     (1 << 9) // Used in pokefirered as BATTLE_TYPE_OLD_MAN_TUTORIAL.
#define BATTLE_TYPE_ROAMER             (1 << 10)
#define BATTLE_TYPE_EREADER_TRAINER    (1 << 11)
#define BATTLE_TYPE_RAID               (1 << 12)
#define BATTLE_TYPE_LEGENDARY          (1 << 13)
#define BATTLE_TYPE_14                 (1 << 14)
#define BATTLE_TYPE_TWO_OPPONENTS      (1 << 15) // Used in pokefirered as BATTLE_TYPE_GHOST.
#define BATTLE_TYPE_DOME               (1 << 16) // Used in pokefirered as BATTLE_TYPE_POKEDUDE.
#define BATTLE_TYPE_PALACE             (1 << 17) // Used in pokefirered as BATTLE_TYPE_WILD_SCRIPTED.
#define BATTLE_TYPE_ARENA              (1 << 18) // Used in pokefirered as BATTLE_TYPE_LEGENDARY_FRLG.
#define BATTLE_TYPE_FACTORY            (1 << 19) // Used in pokefirered as BATTLE_TYPE_TRAINER_TOWER.
#define BATTLE_TYPE_PIKE               (1 << 20)
#define BATTLE_TYPE_PYRAMID            (1 << 21)
#define BATTLE_TYPE_INGAME_PARTNER     (1 << 22)
#define BATTLE_TYPE_TOWER_LINK_MULTI   (1 << 23)
#define BATTLE_TYPE_RECORDED           (1 << 24)
#define BATTLE_TYPE_RECORDED_LINK      (1 << 25)
#define BATTLE_TYPE_TRAINER_HILL       (1 << 26)
#define BATTLE_TYPE_SECRET_BASE        (1 << 27)
#define BATTLE_TYPE_28                 (1 << 28)
#define BATTLE_TYPE_29                 (1 << 29)
#define BATTLE_TYPE_30                 (1 << 30)
#define BATTLE_TYPE_RECORDED_IS_MASTER (1 << 31)
#define BATTLE_TYPE_FRONTIER                (BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_DOME | BATTLE_TYPE_PALACE | BATTLE_TYPE_ARENA | BATTLE_TYPE_FACTORY | BATTLE_TYPE_PIKE | BATTLE_TYPE_PYRAMID)
#define BATTLE_TYPE_FRONTIER_NO_PYRAMID     (BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_DOME | BATTLE_TYPE_PALACE | BATTLE_TYPE_ARENA | BATTLE_TYPE_FACTORY | BATTLE_TYPE_PIKE)
#define BATTLE_TYPE_RECORDED_INVALID        ((BATTLE_TYPE_LINK | BATTLE_TYPE_SAFARI | BATTLE_TYPE_FIRST_BATTLE                  \
                                             | BATTLE_TYPE_WALLY_TUTORIAL | BATTLE_TYPE_ROAMER | BATTLE_TYPE_EREADER_TRAINER    \
                                             | BATTLE_TYPE_LEGENDARY                                                            \
                                             | BATTLE_TYPE_RECORDED | BATTLE_TYPE_TRAINER_HILL | BATTLE_TYPE_SECRET_BASE))

#define WILD_DOUBLE_BATTLE ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_TRAINER))))
#define RECORDED_WILD_BATTLE ((gBattleTypeFlags & BATTLE_TYPE_RECORDED) && !(gBattleTypeFlags & (BATTLE_TYPE_TRAINER | BATTLE_TYPE_FRONTIER)))
#define BATTLE_TWO_VS_ONE_OPPONENT ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && TRAINER_BATTLE_PARAM.opponentB == 0xFFFF))
#define BATTLE_TYPE_HAS_AI          (BATTLE_TYPE_TRAINER | BATTLE_TYPE_FIRST_BATTLE | BATTLE_TYPE_SAFARI | BATTLE_TYPE_ROAMER | BATTLE_TYPE_INGAME_PARTNER)
#define BATTLE_TYPE_PLAYER_HAS_PARTNER      (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_TOWER_LINK_MULTI)

// Battle Outcome defines
#define B_OUTCOME_WON                  1
#define B_OUTCOME_LOST                 2
#define B_OUTCOME_DREW                 3
#define B_OUTCOME_RAN                  4
#define B_OUTCOME_PLAYER_TELEPORTED    5
#define B_OUTCOME_MON_FLED             6
#define B_OUTCOME_CAUGHT               7
#define B_OUTCOME_NO_SAFARI_BALLS      8
#define B_OUTCOME_FORFEITED            9
#define B_OUTCOME_MON_TELEPORTED       10
#define B_OUTCOME_LINK_BATTLE_RAN      (1 << 7) // 128

// Non-volatile status conditions
// These remain outside of battle and after switching out.
// If a new STATUS1 is added here, it should also be added to
// sCompressedStatuses in src/pokemon.c or else it will be lost outside
// of battle.
#define STATUS1_NONE             0
#define STATUS1_SLEEP            (1 << 0 | 1 << 1 | 1 << 2) // First 3 bits (Number of turns to sleep)
#define STATUS1_SLEEP_TURN(num)  ((num) << 0) // Just for readability (or if rearranging statuses)
#define STATUS1_POISON           (1 << 3)
#define STATUS1_BURN             (1 << 4)
#define STATUS1_FREEZE           (1 << 5)
#define STATUS1_PARALYSIS        (1 << 6)
#define STATUS1_TOXIC_POISON     (1 << 7)
#define STATUS1_TOXIC_COUNTER    (1 << 8 | 1 << 9 | 1 << 10 | 1 << 11)
#define STATUS1_TOXIC_TURN(num)  ((num) << 8)
#define STATUS1_FROSTBITE        (1 << 12)
#define STATUS1_PSN_ANY          (STATUS1_POISON | STATUS1_TOXIC_POISON)
#define STATUS1_ANY              (STATUS1_SLEEP | STATUS1_POISON | STATUS1_BURN | STATUS1_FREEZE | STATUS1_PARALYSIS | STATUS1_TOXIC_POISON | STATUS1_FROSTBITE)

#define STATUS1_CAN_MOVE         (STATUS1_POISON | STATUS1_BURN | STATUS1_PARALYSIS | STATUS1_TOXIC_POISON | STATUS1_FROSTBITE)
#define STATUS1_INCAPACITATED    (STATUS1_SLEEP | STATUS1_FREEZE)
#define STATUS1_ICY_ANY          (STATUS1_FREEZE | STATUS1_FROSTBITE)
#define STATUS1_DAMAGING         (STATUS1_PSN_ANY | STATUS1_BURN | STATUS1_FROSTBITE)

enum VolatileFlags
{
    V_BATON_PASSABLE = (1 << 0),
};

/* Volatile status ailments
 * These are removed after exiting the battle or switching
 *  Enum,                                   Type                           Type, max value, flags */
#define VOLATILE_DEFINITIONS(F) \
    F(VOLATILE_CONFUSION,                   confusionTurns,                (u32, 6), V_BATON_PASSABLE) \
    F(VOLATILE_FLINCHED,                    flinched,                      (u32, 1)) \
    F(VOLATILE_UPROAR,                      uproarTurns,                   (u32, 5)) \
    F(VOLATILE_TORMENT,                     torment,                       (u32, 1)) \
    F(VOLATILE_BIDE,                        bideTurns,                     (u32, 3)) \
    F(VOLATILE_LOCK_CONFUSE,                lockConfusionTurns,            (u32, 3)) \
    F(VOLATILE_MULTIPLETURNS,               multipleTurns,                 (u32, 1)) \
    F(VOLATILE_WRAPPED,                     wrapped,                       (u32, 1)) \
    F(VOLATILE_POWDER,                      powder,                        (u32, 1)) \
    F(VOLATILE_UNUSED,                      padding,                       (u32, 1)) \
    F(VOLATILE_INFATUATION,                 infatuation,                   (enum BattlerId, MAX_BITS(4))) \
    F(VOLATILE_DEFENSE_CURL,                defenseCurl,                   (u32, 1)) \
    F(VOLATILE_TRANSFORMED,                 transformed,                   (u32, 1)) \
    F(VOLATILE_RECHARGE,                    recharge,                      (u32, 1)) \
    F(VOLATILE_RAGE,                        rage,                          (u32, 1)) \
    F(VOLATILE_SUBSTITUTE,                  substitute,                    (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_DESTINY_BOND,                destinyBond,                   (u32, 1)) \
    F(VOLATILE_ESCAPE_PREVENTION,           escapePrevention,              (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_NIGHTMARE,                   nightmare,                     (u32, 1)) \
    F(VOLATILE_CURSED,                      cursed,                        (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_FORESIGHT,                   foresight,                     (u32, 1)) \
    F(VOLATILE_DRAGON_CHEER,                dragonCheer,                   (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_FOCUS_ENERGY,                focusEnergy,                   (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_SEMI_INVULNERABLE,           semiInvulnerable,              (u32, 5)) \
    F(VOLATILE_ELECTRIFIED,                 electrified,                   (u32, 1)) \
    F(VOLATILE_MUD_SPORT,                   mudSport,                      (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_WATER_SPORT,                 waterSport,                    (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_INFINITE_CONFUSION,          infiniteConfusion,             (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_SALT_CURE,                   saltCure,                      (u32, 1)) \
    F(VOLATILE_SYRUP_BOMB,                  syrupBomb,                     (u32, 1)) \
    F(VOLATILE_GLAIVE_RUSH,                 glaiveRush,                    (u32, 1)) \
    F(VOLATILE_LEECH_SEED,                  leechSeed,                     (enum BattlerId, MAX_BITS(4)), V_BATON_PASSABLE) \
    F(VOLATILE_LOCK_ON,                     lockOn,                        (u32, 2), V_BATON_PASSABLE) \
    F(VOLATILE_PERISH_SONG,                 perishSong,                    (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_MINIMIZE,                    minimize,                      (u32, 1)) \
    F(VOLATILE_CHARGE,                      charge,                        (u32, 1)) \
    F(VOLATILE_ROOT,                        root,                          (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_YAWN,                        yawn,                          (u32, 2)) \
    F(VOLATILE_IMPRISON,                    imprison,                      (u32, 1)) \
    F(VOLATILE_GRUDGE,                      grudge,                        (u32, 1)) \
    F(VOLATILE_GASTRO_ACID,                 gastroAcid,                    (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_EMBARGO,                     embargo,                       (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_SMACK_DOWN,                  smackDown,                     (u32, 1)) \
    F(VOLATILE_TELEKINESIS,                 telekinesis,                   (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_MIRACLE_EYE,                 miracleEye,                    (u32, 1)) \
    F(VOLATILE_MAGNET_RISE,                 magnetRise,                    (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_HEAL_BLOCK,                  healBlock,                     (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_AQUA_RING,                   aquaRing,                      (u32, 1), V_BATON_PASSABLE) \
    F(VOLATILE_LASER_FOCUS,                 laserFocus,                    (u32, 1)) \
    F(VOLATILE_POWER_TRICK,                 powerTrick,                    (u32, 1), V_BATON_PASSABLE)


/* Use within a macro to get the maximum allowed value for a volatile. Requires _typeMaxValue as input. */
#define GET_VOLATILE_MAXIMUM(_typeMaxValue, ...) INVOKE_WITH_B(GET_VOLATILE_MAXIMUM_, _typeMaxValue)
#define GET_VOLATILE_MAXIMUM_(_type, ...) FIRST(__VA_OPT__(FIRST(__VA_ARGS__),) MAX_BITS((sizeof(_type) * 8)))

#define UNPACK_VOLATILE_ENUMS(_enum, ...) _enum,

enum Volatile
{
    VOLATILE_NONE,
    VOLATILE_DEFINITIONS(UNPACK_VOLATILE_ENUMS)
    /* Expands to VOLATILE_CONFUSION, VOLATILE_FLINCHED, etc. */
};

// Helper macros
#define INFATUATED_WITH(battler) (battler + 1)
#define LEECHSEEDED_BY(battler) (battler + 1)

enum SemiInvulnerableState
{
    STATE_NONE,
    STATE_UNDERGROUND,
    STATE_UNDERWATER,
    STATE_ON_AIR,
    STATE_PHANTOM_FORCE,
    STATE_SKY_DROP,
    STATE_COMMANDER,
};

enum SemiInvulnerableExclusion
{
    CHECK_ALL,
    EXCLUDE_COMMANDER,
};

#define HITMARKER_STRING_PRINTED        (1 << 4)
#define HITMARKER_IGNORE_BIDE           (1 << 5)
#define HITMARKER_DESTINYBOND           (1 << 6)
#define HITMARKER_NO_ANIMATIONS         (1 << 7)   // set from battleSceneOff. Never changed during battle
#define HITMARKER_IGNORE_SUBSTITUTE     (1 << 8)
#define HITMARKER_NO_ATTACKSTRING       (1 << 9)
#define HITMARKER_ATTACKSTRING_PRINTED  (1 << 10)
#define HITMARKER_NO_PPDEDUCT           (1 << 11)
#define HITMARKER_UNUSED_12             (1 << 12)
#define HITMARKER_STATUS_ABILITY_EFFECT (1 << 13)
#define HITMARKER_UNUSED_14             (1 << 14)
#define HITMARKER_RUN                   (1 << 15)
#define HITMARKER_IGNORE_DISGUISE       (1 << 16)
#define HITMARKER_DISABLE_ANIMATION     (1 << 17)   // disable animations during battle scripts, e.g. for Bug Bite
#define HITMARKER_UNUSED_18             (1 << 18)
#define HITMARKER_UNABLE_TO_USE_MOVE    (1 << 19)
#define HITMARKER_PASSIVE_HP_UPDATE     (1 << 20)
#define HITMARKER_UNUSED_21             (1 << 21)
#define HITMARKER_PLAYER_FAINTED        (1 << 22)
#define HITMARKER_ALLOW_NO_PP           (1 << 23)
#define HITMARKER_GRUDGE                (1 << 24)
#define HITMARKER_OBEYS                 (1 << 25)
#define HITMARKER_UNUSED_26             (1 << 26)
#define HITMARKER_UNUSED_27             (1 << 27)
#define HITMARKER_FAINTED(battler)      (1u << (battler + 28))
#define HITMARKER_FAINTED2(battler)     HITMARKER_FAINTED(battler)

// Per-side statuses that affect an entire party
#define SIDE_STATUS_REFLECT                 (1 << 0)
#define SIDE_STATUS_LIGHTSCREEN             (1 << 1)
#define SIDE_STATUS_SAFEGUARD               (1 << 2)
#define SIDE_STATUS_FUTUREATTACK            (1 << 3)
#define SIDE_STATUS_MIST                    (1 << 4)
#define SIDE_STATUS_TAILWIND                (1 << 5)
#define SIDE_STATUS_AURORA_VEIL             (1 << 6)
#define SIDE_STATUS_LUCKY_CHANT             (1 << 7)
#define SIDE_STATUS_DAMAGE_NON_TYPES        (1 << 8)
#define SIDE_STATUS_RAINBOW                 (1 << 9)
#define SIDE_STATUS_SEA_OF_FIRE             (1 << 10)
#define SIDE_STATUS_SWAMP                   (1 << 11)

#define SIDE_STATUS_SCREEN_ANY     (SIDE_STATUS_REFLECT | SIDE_STATUS_LIGHTSCREEN | SIDE_STATUS_AURORA_VEIL)
#define SIDE_STATUS_PLEDGE_ANY     (SIDE_STATUS_RAINBOW | SIDE_STATUS_SEA_OF_FIRE | SIDE_STATUS_SWAMP)
#define SIDE_STATUS_GOOD_FOG       (SIDE_STATUS_SCREEN_ANY | SIDE_STATUS_SAFEGUARD | SIDE_STATUS_MIST)
#define SIDE_STATUS_GOOD_COURT     (SIDE_STATUS_GOOD_FOG | SIDE_STATUS_TAILWIND | SIDE_STATUS_LUCKY_CHANT | SIDE_STATUS_RAINBOW)
#define SIDE_STATUS_BAD_COURT      (SIDE_STATUS_DAMAGE_NON_TYPES | SIDE_STATUS_SEA_OF_FIRE | SIDE_STATUS_SWAMP)

enum Hazards
{
    HAZARDS_NONE,
    HAZARDS_SPIKES,
    HAZARDS_STICKY_WEB,
    HAZARDS_TOXIC_SPIKES,
    HAZARDS_STEALTH_ROCK,
    HAZARDS_STEELSURGE,
    HAZARDS_MAX_COUNT,
};

// Used for damaging entry hazards based on type
enum TypeSideHazard
{
    TYPE_SIDE_HAZARD_POINTED_STONES = TYPE_ROCK,
    TYPE_SIDE_HAZARD_SHARP_STEEL    = TYPE_STEEL,
};

// Field affecting statuses.
#define STATUS_FIELD_MAGIC_ROOM                     (1 << 0)
#define STATUS_FIELD_TRICK_ROOM                     (1 << 1)
#define STATUS_FIELD_WONDER_ROOM                    (1 << 2)
#define STATUS_FIELD_MUDSPORT                       (1 << 3)
#define STATUS_FIELD_WATERSPORT                     (1 << 4)
#define STATUS_FIELD_GRAVITY                        (1 << 5)
#define STATUS_FIELD_GRASSY_TERRAIN                 (1 << 6)
#define STATUS_FIELD_MISTY_TERRAIN                  (1 << 7)
#define STATUS_FIELD_ELECTRIC_TERRAIN               (1 << 8)
#define STATUS_FIELD_PSYCHIC_TERRAIN                (1 << 9)
#define STATUS_FIELD_ION_DELUGE                     (1 << 10)
#define STATUS_FIELD_FAIRY_LOCK                     (1 << 11)

#define STATUS_FIELD_TERRAIN_ANY        (STATUS_FIELD_GRASSY_TERRAIN | STATUS_FIELD_MISTY_TERRAIN | STATUS_FIELD_ELECTRIC_TERRAIN | STATUS_FIELD_PSYCHIC_TERRAIN)

// Flags describing move's result
#define MOVE_RESULT_MISSED                (1 << 0)
#define MOVE_RESULT_SUPER_EFFECTIVE       (1 << 1)
#define MOVE_RESULT_NOT_VERY_EFFECTIVE    (1 << 2)
#define MOVE_RESULT_DOESNT_AFFECT_FOE     (1 << 3)
#define MOVE_RESULT_ONE_HIT_KO            (1 << 4)
#define MOVE_RESULT_FAILED                (1 << 5)
#define MOVE_RESULT_FOE_ENDURED           (1 << 6)
#define MOVE_RESULT_FOE_HUNG_ON           (1 << 7)
#define MOVE_RESULT_STURDIED              (1 << 8)
#define MOVE_RESULT_FOE_ENDURED_AFFECTION (1 << 9)
#define MOVE_RESULT_SYNCHRONOISE_AFFECTED (1 << 10)
#define MOVE_RESULT_NO_EFFECT             (MOVE_RESULT_MISSED | MOVE_RESULT_DOESNT_AFFECT_FOE | MOVE_RESULT_FAILED)

enum BattleWeather
{
    BATTLE_WEATHER_RAIN,
    BATTLE_WEATHER_RAIN_PRIMAL,
    BATTLE_WEATHER_RAIN_DOWNPOUR,
    BATTLE_WEATHER_SUN,
    BATTLE_WEATHER_SUN_PRIMAL,
    BATTLE_WEATHER_SANDSTORM,
    BATTLE_WEATHER_HAIL,
    BATTLE_WEATHER_SNOW,
    BATTLE_WEATHER_FOG,
    BATTLE_WEATHER_STRONG_WINDS,
    BATTLE_WEATHER_COUNT,
};

// Battle Weather flags
#define B_WEATHER_NONE          0
#define B_WEATHER_RAIN_NORMAL   (1 << BATTLE_WEATHER_RAIN)
#define B_WEATHER_RAIN_PRIMAL   (1 << BATTLE_WEATHER_RAIN_PRIMAL)
#define B_WEATHER_RAIN_DOWNPOUR (1 << BATTLE_WEATHER_RAIN_DOWNPOUR)  // unused
#define B_WEATHER_RAIN          (B_WEATHER_RAIN_NORMAL | B_WEATHER_RAIN_PRIMAL | B_WEATHER_RAIN_DOWNPOUR)
#define B_WEATHER_SUN_NORMAL    (1 << BATTLE_WEATHER_SUN)
#define B_WEATHER_SUN_PRIMAL    (1 << BATTLE_WEATHER_SUN_PRIMAL)
#define B_WEATHER_SUN           (B_WEATHER_SUN_NORMAL | B_WEATHER_SUN_PRIMAL)
#define B_WEATHER_SANDSTORM     (1 << BATTLE_WEATHER_SANDSTORM)
#define B_WEATHER_HAIL          (1 << BATTLE_WEATHER_HAIL)
#define B_WEATHER_SNOW          (1 << BATTLE_WEATHER_SNOW)
#define B_WEATHER_FOG           (1 << BATTLE_WEATHER_FOG)
#define B_WEATHER_STRONG_WINDS  (1 << BATTLE_WEATHER_STRONG_WINDS)

#define B_WEATHER_ANY           (B_WEATHER_RAIN | B_WEATHER_SANDSTORM | B_WEATHER_SUN | B_WEATHER_HAIL | B_WEATHER_STRONG_WINDS | B_WEATHER_SNOW | B_WEATHER_FOG)
#define B_WEATHER_DAMAGING_ANY  (B_WEATHER_HAIL | B_WEATHER_SANDSTORM)
#define B_WEATHER_ICY_ANY       (B_WEATHER_HAIL | B_WEATHER_SNOW)
#define B_WEATHER_LOW_LIGHT     (B_WEATHER_FOG | B_WEATHER_ICY_ANY | B_WEATHER_RAIN | B_WEATHER_SANDSTORM)
#define B_WEATHER_PRIMAL_ANY    (B_WEATHER_RAIN_PRIMAL | B_WEATHER_SUN_PRIMAL | B_WEATHER_STRONG_WINDS)

// Explicit numbers until frostbite because those shouldn't be shifted
enum __attribute__((packed)) MoveEffect
{
    MOVE_EFFECT_NONE = 0,
    MOVE_EFFECT_SLEEP = 1,
    MOVE_EFFECT_POISON = 2,
    MOVE_EFFECT_BURN = 3,
    MOVE_EFFECT_FREEZE = 4,
    MOVE_EFFECT_PARALYSIS = 5,
    MOVE_EFFECT_TOXIC = 6,
    MOVE_EFFECT_FROSTBITE = 7,
    MOVE_EFFECT_CONFUSION,
    MOVE_EFFECT_FLINCH,
    MOVE_EFFECT_TRI_ATTACK,
    MOVE_EFFECT_UPROAR,
    MOVE_EFFECT_PAYDAY,
    MOVE_EFFECT_WRAP,
    MOVE_EFFECT_ATK_PLUS_1,
    MOVE_EFFECT_DEF_PLUS_1,
    MOVE_EFFECT_SPD_PLUS_1,
    MOVE_EFFECT_SP_ATK_PLUS_1,
    MOVE_EFFECT_SP_DEF_PLUS_1,
    MOVE_EFFECT_ACC_PLUS_1,
    MOVE_EFFECT_EVS_PLUS_1,
    MOVE_EFFECT_ATK_MINUS_1,
    MOVE_EFFECT_DEF_MINUS_1,
    MOVE_EFFECT_SPD_MINUS_1,
    MOVE_EFFECT_SP_ATK_MINUS_1,
    MOVE_EFFECT_SP_DEF_MINUS_1,
    MOVE_EFFECT_ACC_MINUS_1,
    MOVE_EFFECT_EVS_MINUS_1,
    MOVE_EFFECT_REMOVE_ARG_TYPE,
    MOVE_EFFECT_RECHARGE,
    MOVE_EFFECT_RAGE,
    MOVE_EFFECT_PREVENT_ESCAPE,
    MOVE_EFFECT_NIGHTMARE,
    MOVE_EFFECT_ALL_STATS_UP,
    MOVE_EFFECT_REMOVE_STATUS,
    MOVE_EFFECT_ATK_DEF_DOWN,
    MOVE_EFFECT_ATK_PLUS_2,
    MOVE_EFFECT_DEF_PLUS_2,
    MOVE_EFFECT_SPD_PLUS_2,
    MOVE_EFFECT_SP_ATK_PLUS_2,
    MOVE_EFFECT_SP_DEF_PLUS_2,
    MOVE_EFFECT_ACC_PLUS_2,
    MOVE_EFFECT_EVS_PLUS_2,
    MOVE_EFFECT_ATK_MINUS_2,
    MOVE_EFFECT_DEF_MINUS_2,
    MOVE_EFFECT_SPD_MINUS_2,
    MOVE_EFFECT_SP_ATK_MINUS_2,
    MOVE_EFFECT_SP_DEF_MINUS_2,
    MOVE_EFFECT_ACC_MINUS_2,
    MOVE_EFFECT_EVS_MINUS_2,
    MOVE_EFFECT_SCALE_SHOT,
    MOVE_EFFECT_THRASH,
    MOVE_EFFECT_DEF_SPDEF_DOWN,
    MOVE_EFFECT_CLEAR_SMOG,
    MOVE_EFFECT_FLAME_BURST,
    MOVE_EFFECT_FEINT,
    MOVE_EFFECT_V_CREATE,
    MOVE_EFFECT_HAPPY_HOUR,
    MOVE_EFFECT_CORE_ENFORCER,
    MOVE_EFFECT_THROAT_CHOP,
    MOVE_EFFECT_INCINERATE,
    MOVE_EFFECT_BUG_BITE,
    MOVE_EFFECT_RECOIL_HP_25,
    MOVE_EFFECT_TRAP_BOTH,
    MOVE_EFFECT_ROUND,
    MOVE_EFFECT_DIRE_CLAW,
    MOVE_EFFECT_SYRUP_BOMB,
    MOVE_EFFECT_FLORAL_HEALING,
    MOVE_EFFECT_SECRET_POWER,
    MOVE_EFFECT_PSYCHIC_NOISE,
    MOVE_EFFECT_TERA_BLAST,
    MOVE_EFFECT_ORDER_UP,
    MOVE_EFFECT_ION_DELUGE,
    MOVE_EFFECT_HAZE,
    MOVE_EFFECT_LEECH_SEED,
    MOVE_EFFECT_REFLECT,
    MOVE_EFFECT_LIGHT_SCREEN,
    MOVE_EFFECT_SALT_CURE,
    MOVE_EFFECT_EERIE_SPELL,

    // Max move effects happen earlier in the execution chain.
    // For example stealth rock from G-Max Stonesurge is set up before abilities but from Stone Axe after.
    // Stone Axe can also fail to set up rocks if user faints where as Stonesurge will always go up.
    // This means we need to be careful if we want to re-use those effects for (new) vanilla moves
    MOVE_EFFECT_RAISE_TEAM_ATTACK,
    MOVE_EFFECT_RAISE_TEAM_DEFENSE,
    MOVE_EFFECT_RAISE_TEAM_SPEED,
    MOVE_EFFECT_RAISE_TEAM_SP_ATK,
    MOVE_EFFECT_RAISE_TEAM_SP_DEF,
    MOVE_EFFECT_LOWER_ATTACK_SIDE,
    MOVE_EFFECT_LOWER_DEFENSE_SIDE,
    MOVE_EFFECT_LOWER_SPEED_SIDE,
    MOVE_EFFECT_LOWER_SP_ATK_SIDE,
    MOVE_EFFECT_LOWER_SP_DEF_SIDE,
    MOVE_EFFECT_SUN,
    MOVE_EFFECT_RAIN,
    MOVE_EFFECT_SANDSTORM,
    MOVE_EFFECT_HAIL,
    MOVE_EFFECT_MISTY_TERRAIN,
    MOVE_EFFECT_GRASSY_TERRAIN,
    MOVE_EFFECT_ELECTRIC_TERRAIN,
    MOVE_EFFECT_PSYCHIC_TERRAIN,
    MOVE_EFFECT_VINE_LASH,
    MOVE_EFFECT_WILDFIRE,
    MOVE_EFFECT_CANNONADE,
    MOVE_EFFECT_EFFECT_SPORE_SIDE,
    MOVE_EFFECT_PARALYZE_SIDE,
    MOVE_EFFECT_CONFUSE_PAY_DAY_SIDE,
    MOVE_EFFECT_CRIT_PLUS_SIDE,
    MOVE_EFFECT_PREVENT_ESCAPE_SIDE,
    MOVE_EFFECT_AURORA_VEIL,
    MOVE_EFFECT_INFATUATE_SIDE,
    MOVE_EFFECT_RECYCLE_BERRIES,
    MOVE_EFFECT_POISON_SIDE,
    MOVE_EFFECT_DEFOG,
    MOVE_EFFECT_POISON_PARALYZE_SIDE,
    MOVE_EFFECT_HEAL_TEAM,
    MOVE_EFFECT_SPITE,
    MOVE_EFFECT_GRAVITY,
    MOVE_EFFECT_VOLCALITH,
    MOVE_EFFECT_SANDBLAST_SIDE,
    MOVE_EFFECT_YAWN_FOE,
    MOVE_EFFECT_LOWER_EVASIVENESS_SIDE,
    MOVE_EFFECT_AROMATHERAPY,
    MOVE_EFFECT_CONFUSE_SIDE,
    MOVE_EFFECT_STEELSURGE, // Steel type rocks
    MOVE_EFFECT_STEALTH_ROCK, // Max Move rocks, not to be confused for rocks set up from Ceasless Edge (same but differ in execution order)
    MOVE_EFFECT_TORMENT_SIDE,
    MOVE_EFFECT_LOWER_SPEED_2_SIDE,
    MOVE_EFFECT_FIRE_SPIN_SIDE,
    MOVE_EFFECT_FIXED_POWER,
    // Max move effects end. They can be used for (custom) normal moves.

    NUM_MOVE_EFFECTS
};

#if B_USE_FROSTBITE == TRUE
#define MOVE_EFFECT_FREEZE_OR_FROSTBITE MOVE_EFFECT_FROSTBITE
#else
#define MOVE_EFFECT_FREEZE_OR_FROSTBITE MOVE_EFFECT_FREEZE
#endif

#define MOVE_EFFECT_CONTINUE            0x8000

// Battle environment defines for gBattleEnvironment.
enum BattleEnvironments
{
    BATTLE_ENVIRONMENT_GRASS,
    BATTLE_ENVIRONMENT_LONG_GRASS,
    BATTLE_ENVIRONMENT_SAND,
    BATTLE_ENVIRONMENT_UNDERWATER,
    BATTLE_ENVIRONMENT_WATER,
    BATTLE_ENVIRONMENT_POND,
    BATTLE_ENVIRONMENT_MOUNTAIN,
    BATTLE_ENVIRONMENT_CAVE,
    BATTLE_ENVIRONMENT_BUILDING,
    BATTLE_ENVIRONMENT_PLAIN,
    BATTLE_ENVIRONMENT_FRONTIER,
    BATTLE_ENVIRONMENT_GYM,
    BATTLE_ENVIRONMENT_LEADER,
    BATTLE_ENVIRONMENT_MAGMA,
    BATTLE_ENVIRONMENT_AQUA,
    BATTLE_ENVIRONMENT_SIDNEY,
    BATTLE_ENVIRONMENT_PHOEBE,
    BATTLE_ENVIRONMENT_GLACIA,
    BATTLE_ENVIRONMENT_DRAKE,
    BATTLE_ENVIRONMENT_CHAMPION,
    BATTLE_ENVIRONMENT_GROUDON,
    BATTLE_ENVIRONMENT_KYOGRE,
    BATTLE_ENVIRONMENT_RAYQUAZA,
    // New battle environments are used for Secret Power but not fully implemented.
    BATTLE_ENVIRONMENT_SOARING,
    BATTLE_ENVIRONMENT_SKY_PILLAR,
    BATTLE_ENVIRONMENT_BURIAL_GROUND,
    BATTLE_ENVIRONMENT_PUDDLE,
    BATTLE_ENVIRONMENT_MARSH,
    BATTLE_ENVIRONMENT_SWAMP,
    BATTLE_ENVIRONMENT_SNOW,
    BATTLE_ENVIRONMENT_ICE,
    BATTLE_ENVIRONMENT_VOLCANO,
    BATTLE_ENVIRONMENT_DISTORTION_WORLD,
    BATTLE_ENVIRONMENT_SPACE,
    BATTLE_ENVIRONMENT_ULTRA_SPACE,
    BATTLE_ENVIRONMENT_COUNT,
};

#define B_WAIT_TIME_LONG        (B_WAIT_TIME_MULTIPLIER * 4)
#define B_WAIT_TIME_MED         (B_WAIT_TIME_MULTIPLIER * 3)
#define B_WAIT_TIME_SHORT       (B_WAIT_TIME_MULTIPLIER * 2)
#define B_WAIT_TIME_SHORTEST    (B_WAIT_TIME_MULTIPLIER)

#define FLEE_ITEM    1
#define FLEE_ABILITY 2

// Return value for IsRunningFromBattleImpossible.
#define BATTLE_RUN_SUCCESS        0
#define BATTLE_RUN_FORBIDDEN      1
#define BATTLE_RUN_FAILURE        2

#define B_WIN_TYPE_NORMAL 0
#define B_WIN_TYPE_ARENA  1

// Window Ids for sStandardBattleWindowTemplates / sBattleArenaWindowTemplates
#define B_WIN_MSG                 0
#define B_WIN_ACTION_PROMPT       1 // "What will {x} do?"
#define B_WIN_ACTION_MENU         2 // "Fight/Pokémon/Bag/Run" menu
#define B_WIN_MOVE_NAME_1         3 // Top left
#define B_WIN_MOVE_NAME_2         4 // Top right
#define B_WIN_MOVE_NAME_3         5 // Bottom left
#define B_WIN_MOVE_NAME_4         6 // Bottom right
#define B_WIN_PP                  7
#define B_WIN_DUMMY               8
#define B_WIN_PP_REMAINING        9
#define B_WIN_MOVE_TYPE          10
#define B_WIN_SWITCH_PROMPT      11 // "Switch which?"
#define B_WIN_YESNO              12
#define B_WIN_LEVEL_UP_BOX       13
#define B_WIN_LEVEL_UP_BANNER    14
#define B_WIN_VS_PLAYER          15
#define B_WIN_VS_OPPONENT        16
#define B_WIN_VS_MULTI_PLAYER_1  17
#define B_WIN_VS_MULTI_PLAYER_2  18
#define B_WIN_VS_MULTI_PLAYER_3  19
#define B_WIN_VS_MULTI_PLAYER_4  20
#define B_WIN_VS_OUTCOME_DRAW    21
#define B_WIN_VS_OUTCOME_LEFT    22
#define B_WIN_VS_OUTCOME_RIGHT   23
#define B_WIN_MOVE_DESCRIPTION   24

// The following are duplicate id values for windows that Battle Arena uses differently.
#define ARENA_WIN_PLAYER_NAME      15
#define ARENA_WIN_VS               16
#define ARENA_WIN_OPPONENT_NAME    17
#define ARENA_WIN_MIND             18
#define ARENA_WIN_SKILL            19
#define ARENA_WIN_BODY             20
#define ARENA_WIN_JUDGMENT_TITLE   21
#define ARENA_WIN_JUDGMENT_TEXT    22

// Flag for BattlePutTextOnWindow. Never set
#define B_WIN_COPYTOVRAM (1 << 7)

// Indicator for the party summary bar to display an empty slot.
#define HP_EMPTY_SLOT 0xFFFF

#define MOVE_TARGET_SELECTED            0
#define MOVE_TARGET_DEPENDS             (1 << 0)
#define MOVE_TARGET_OPPONENT            (1 << 1)
#define MOVE_TARGET_RANDOM              (1 << 2)
#define MOVE_TARGET_BOTH                (1 << 3)
#define MOVE_TARGET_USER                (1 << 4)
#define MOVE_TARGET_FOES_AND_ALLY       (1 << 5)
#define MOVE_TARGET_OPPONENTS_FIELD     (1 << 6)
#define MOVE_TARGET_ALLY                (1 << 7)
#define MOVE_TARGET_ALL_BATTLERS        ((1 << 8) | MOVE_TARGET_USER) // No functionality for status moves

// For the second argument of GetBattleMoveTarget, when no target override is needed
#define NO_TARGET_OVERRIDE 0

// Constants for Parental Bond
#define PARENTAL_BOND_1ST_HIT 2
#define PARENTAL_BOND_2ND_HIT 1
#define PARENTAL_BOND_OFF     0

// Constants for if HandleScriptMegaPrimalBurst should handle Mega Evolution, Primal Reversion, or Ultra Burst.
#define HANDLE_TYPE_MEGA_EVOLUTION 0
#define HANDLE_TYPE_PRIMAL_REVERSION 1
#define HANDLE_TYPE_ULTRA_BURST 2

// Constants for Torment
#define PERMANENT_TORMENT   0xF

// Constants for B_VAR_STARTING_STATUS
// Timer value controlled by B_VAR_STARTING_STATUS_TIMER
enum StartingStatus
{
    STARTING_STATUS_NONE,
    STARTING_STATUS_ELECTRIC_TERRAIN,
    STARTING_STATUS_MISTY_TERRAIN,
    STARTING_STATUS_GRASSY_TERRAIN,
    STARTING_STATUS_PSYCHIC_TERRAIN,
    STARTING_STATUS_TRICK_ROOM,
    STARTING_STATUS_MAGIC_ROOM,
    STARTING_STATUS_WONDER_ROOM,
    STARTING_STATUS_TAILWIND_PLAYER,
    STARTING_STATUS_TAILWIND_OPPONENT,
    STARTING_STATUS_RAINBOW_PLAYER,
    STARTING_STATUS_RAINBOW_OPPONENT,
    STARTING_STATUS_SEA_OF_FIRE_PLAYER,
    STARTING_STATUS_SEA_OF_FIRE_OPPONENT,
    STARTING_STATUS_SWAMP_PLAYER,
    STARTING_STATUS_SWAMP_OPPONENT,
};

enum SlideMsgStates
{
    PRINT_SLIDE_MESSAGE,
    RESTORE_BATTLER_SLIDE_CONTROL,
};

enum MonState
{
    MON_IN_BATTLE,
    MON_OUTSIDE_BATTLE,
};

enum __attribute__((packed)) CalcDamageState
{
    CAN_DAMAGE,
    WILL_FAIL,
    CHECK_ACCURACY,
};

#endif // GUARD_CONSTANTS_BATTLE_H
