#ifndef GUARD_CONSTANTS_BATTLE_AI_H
#define GUARD_CONSTANTS_BATTLE_AI_H

// battlers
#define AI_TARGET 0
#define AI_USER 1
#define AI_TARGET_PARTNER 2
#define AI_USER_PARTNER 3

// get_type command
#define AI_TYPE1_TARGET 0
#define AI_TYPE1_USER 1
#define AI_TYPE2_TARGET 2
#define AI_TYPE2_USER 3
#define AI_TYPE_MOVE 4

// type effectiveness
#define AI_EFFECTIVENESS_x8     7
#define AI_EFFECTIVENESS_x4     6
#define AI_EFFECTIVENESS_x2     5
#define AI_EFFECTIVENESS_x1     4
#define AI_EFFECTIVENESS_x0_5   3
#define AI_EFFECTIVENESS_x0_25  2
#define AI_EFFECTIVENESS_x0_125 1
#define AI_EFFECTIVENESS_x0     0

// AI Flags. Most run specific functions to update score, new flags are used for internal logic in other scripts
// See docs/ai_flags.md for more details.
#define AI_FLAG_CHECK_BAD_MOVE        (1 << 0)  // AI will avoid using moves that are likely to fail or be ineffective in the current situation.
#define AI_FLAG_TRY_TO_FAINT          (1 << 1)  // AI will prioritize KOing the player's mon if able.
#define AI_FLAG_CHECK_VIABILITY       (1 << 2)  // AI damaging moves and move effects to determine the best available move in the current situation.
#define AI_FLAG_FORCE_SETUP_FIRST_TURN      (1 << 3) // AI will prioritize using setup moves on the first turn at the expensve of all else. AI_FLAG_CHECK_VIABILITY will instead do this when the AI determines it makes sense.
#define AI_FLAG_RISKY                 (1 << 4)  // AI will generally behave more recklessly, prioritizing damage over accuracy, explosions, etc.
#define AI_FLAG_PREFER_STRONGEST_MOVE (1 << 5)  // AI adds score bonus to any move the AI has that either OHKOs or 2HKOs the player.
#define AI_FLAG_PREFER_BATON_PASS     (1 << 6)  // AI prefers raising its own stats and setting for / using Baton Pass.
#define AI_FLAG_DOUBLE_BATTLE         (1 << 7)  // Automatically set for double battles, handles AI behaviour with partner.
#define AI_FLAG_HP_AWARE              (1 << 8)  // AI will favour certain move effects based on how much remaining HP it and the player's mon have.
#define AI_FLAG_POWERFUL_STATUS       (1 << 9)  // AI prefers moves that set up field effects or side statuses, even if the user can faint the target.
// New, Trainer Handicap Flags
#define AI_FLAG_NEGATE_UNAWARE        (1 << 10)  // AI is NOT aware of negating effects like wonder room, mold breaker, etc.
#define AI_FLAG_WILL_SUICIDE          (1 << 11)  // AI will use explosion / self destruct / final gambit / etc.
// New, Trainer Strategy Flags
#define AI_FLAG_PREFER_STATUS_MOVES   (1 << 12)  // AI gets a score bonus for status moves. Should be combined with AI_FLAG_CHECK_BAD_MOVE to prevent using only status moves.
#define AI_FLAG_STALL                 (1 << 13)  // AI stalls battle and prefers secondary damage/trapping/etc. TODO not finished.
#define AI_FLAG_SMART_SWITCHING       (1 << 14)  // AI includes a lot more switching checks. Automatically includes AI_FLAG_SMART_MON_CHOICES.
#define AI_FLAG_ACE_POKEMON           (1 << 15)  // AI has an Ace Pokemon. The last Pokemon in the party will not be used until it's the last one remaining.
#define AI_FLAG_OMNISCIENT            (1 << 16)  // AI has full knowledge of player moves, abilities, hold items.
#define AI_FLAG_SMART_MON_CHOICES     (1 << 17)  // AI will make smarter decisions when choosing which mon to send out mid-battle and after a KO, which are separate decisions. Automatically included by AI_FLAG_SMART_SWITCHING.
#define AI_FLAG_CONSERVATIVE          (1 << 18)  // AI assumes all moves will low roll damage.
#define AI_FLAG_SEQUENCE_SWITCHING    (1 << 19)  // AI switches in mons in exactly party order, and never switches mid-battle.
#define AI_FLAG_DOUBLE_ACE_POKEMON    (1 << 20)  // AI has *two* Ace Pokémon. The last two Pokémons in the party won't be used unless they're the last ones remaining. Goes well in battles where the trainer ID equals to twins, couples, etc.

#define AI_FLAG_COUNT                       21

// The following options are enough to have a basic/smart trainer. Any other addtion could make the trainer worse/better depending on the flag
#define AI_FLAG_BASIC_TRAINER         (AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY)
#define AI_FLAG_SMART_TRAINER         (AI_FLAG_BASIC_TRAINER | AI_FLAG_OMNISCIENT | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES)

// 'other' ai logic flags
#define AI_FLAG_DYNAMIC_FUNC          (1 << 28)  // Create custom AI functions for specific battles via "setdynamicaifunc" cmd
#define AI_FLAG_ROAMING               (1 << 29)
#define AI_FLAG_SAFARI                (1 << 30)
#define AI_FLAG_FIRST_BATTLE          (1 << 31)

#define AI_SCORE_DEFAULT 100 // Default score for all AI moves.

#endif // GUARD_CONSTANTS_BATTLE_AI_H
