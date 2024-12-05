#ifndef GUARD_BATTLE_AI_MAIN_H
#define GUARD_BATTLE_AI_MAIN_H


typedef s32 (*AiScoreFunc)(u32, u32, u32, s32);

#define UNKNOWN_NO_OF_HITS UINT32_MAX

// return vals for BattleAI_ChooseMoveOrAction
// 0 - 3 are move idx
#define AI_CHOICE_FLEE 4
#define AI_CHOICE_WATCH 5

// for AI_WhoStrikesFirst
#define AI_IS_FASTER   1
#define AI_IS_SLOWER   -1

// for stat increasing / decreasing scores
#define STAT_CHANGE_ATK        0
#define STAT_CHANGE_DEF        1
#define STAT_CHANGE_SPEED      2
#define STAT_CHANGE_SPATK      3
#define STAT_CHANGE_SPDEF      4

#define STAT_CHANGE_ATK_2      5
#define STAT_CHANGE_DEF_2      6
#define STAT_CHANGE_SPEED_2    7
#define STAT_CHANGE_SPATK_2    8
#define STAT_CHANGE_SPDEF_2    9

#define STAT_CHANGE_ACC        10
#define STAT_CHANGE_EVASION    11

#define BEST_DAMAGE_MOVE         1  // Move with the most amount of hits with the best accuracy/effect
#define POWERFUL_STATUS_MOVE     10 // Moves with this score will be chosen over a move that faints target
#define NO_DAMAGE_OR_FAILS      -20 // Move fails or does no damage

// Scores given in AI_CalcMoveEffectScore
#define NO_INCREASE      0
#define WEAK_EFFECT      1
#define DECENT_EFFECT    2
#define GOOD_EFFECT      3
#define BEST_EFFECT      4

// AI_TryToFaint
#define FAST_KILL      6 // AI is faster and faints target
#define SLOW_KILL      4 // AI is slower and faints target
#define LAST_CHANCE    2 // AI faints to target. It should try and do damage with a priority move

// AI_Risky
#define STRONG_RISKY_EFFECT     3
#define AVERAGE_RISKY_EFFECT    2

#include "test_runner.h"

// Logs for debugging AI tests.
#define SET_SCORE(battler, movesetIndex, val) \
    do \
    { \
        TestRunner_Battle_AISetScore(__FILE__, __LINE__, battler, movesetIndex, val); \
        AI_THINKING_STRUCT->score[movesetIndex] = val; \
    } while (0) \

#define ADJUST_SCORE(val) \
    do \
    { \
        TestRunner_Battle_AIAdjustScore(__FILE__, __LINE__, sBattler_AI, AI_THINKING_STRUCT->movesetIndex, val); \
        score += val; \
    } while (0) \

#define ADJUST_AND_RETURN_SCORE(val) \
    do \
    { \
        TestRunner_Battle_AIAdjustScore(__FILE__, __LINE__, sBattler_AI, AI_THINKING_STRUCT->movesetIndex, val); \
        score += val; \
        return score; \
    } while (0) \

#define ADJUST_SCORE_PTR(val) \
    do \
    { \
        TestRunner_Battle_AIAdjustScore(__FILE__, __LINE__, sBattler_AI, AI_THINKING_STRUCT->movesetIndex, val); \
        (*score) += val; \
    } while (0) \

#define RETURN_SCORE_PLUS(val)      \
{                                   \
    ADJUST_SCORE(val);              \
    return score;                   \
}

#define RETURN_SCORE_MINUS(val)     \
{                                   \
    ADJUST_SCORE(-val);             \
    return score;                   \
}

void BattleAI_SetupItems(void);
void BattleAI_SetupFlags(void);
void BattleAI_SetupAIData(u8 defaultScoreMoves, u32 battler);
u32 BattleAI_ChooseMoveOrAction(void);
void Ai_InitPartyStruct(void);
void Ai_UpdateSwitchInData(u32 battler);
void Ai_UpdateFaintData(u32 battler);
void SetAiLogicDataForTurn(struct AiLogicData *aiData);
void ResetDynamicAiFunc(void);

extern u8 sBattler_AI;

#endif // GUARD_BATTLE_AI_MAIN_H
