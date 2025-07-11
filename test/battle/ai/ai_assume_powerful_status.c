#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_DOUBLE_BATTLE_TEST("AI_FLAG_ASSUME_POWERFUL_STATUS correctly records assumed status moves")
{
    PASSES_RANDOMLY(ASSUME_POWERFUL_STATUS_HIGH_ODDS, 100, RNG_AI_ASSUME_POWERFUL_STATUS_HIGH_ODDS);
    PASSES_RANDOMLY(ASSUME_POWERFUL_STATUS_MEDIUM_ODDS, 100, RNG_AI_ASSUME_POWERFUL_STATUS_MEDIUM_ODDS);
    PASSES_RANDOMLY(ASSUME_POWERFUL_STATUS_LOW_ODDS, 100, RNG_AI_ASSUME_POWERFUL_STATUS_LOW_ODDS);

    u32 aiFlag = 0;
    PARAMETRIZE { aiFlag = AI_FLAG_ASSUME_POWERFUL_STATUS; }
    PARAMETRIZE { aiFlag = 0; }
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT | aiFlag);
        PLAYER(SPECIES_TYPHLOSION) { Moves(MOVE_TACKLE, MOVE_COURT_CHANGE, MOVE_FAKE_OUT); }
        PLAYER(SPECIES_ZIGZAGOON) { Moves(MOVE_HAIL, MOVE_SHED_TAIL, MOVE_THUNDERBOLT); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target:opponentLeft); MOVE(playerRight, MOVE_THUNDERBOLT, target:opponentRight); }
    } THEN {
        if (aiFlag == AI_FLAG_ASSUME_POWERFUL_STATUS)
        {
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][0], MOVE_TACKLE);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][1], MOVE_COURT_CHANGE);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][2], MOVE_FAKE_OUT);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][3], MOVE_NONE);

            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][0], MOVE_HAIL);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][1], MOVE_SHED_TAIL);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][2], MOVE_THUNDERBOLT);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][3], MOVE_NONE);
        }
        else if (aiFlag == 0)
        {
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][0], MOVE_TACKLE);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][1], MOVE_NONE);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][2], MOVE_NONE);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_LEFT][3], MOVE_NONE);

            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][0], MOVE_NONE);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][1], MOVE_NONE);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][2], MOVE_THUNDERBOLT);
            EXPECT_EQ(gBattleHistory->usedMoves[B_POSITION_PLAYER_RIGHT][3], MOVE_NONE);
        }
    }
}
