#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SAND_ATTACK].effect == EFFECT_ACCURACY_DOWN);
}

SINGLE_BATTLE_TEST("Sand Attack lowers Accuracy by 1 stage")
{
    PASSES_RANDOMLY(gMovesInfo[MOVE_SCRATCH].accuracy * 3 / 4, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SCRATCH].accuracy == 100);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SAND_ATTACK); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SAND_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wobbuffet's accuracy fell!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}
