#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_CONFIDE].effect == EFFECT_SPECIAL_ATTACK_DOWN);
}

SINGLE_BATTLE_TEST("Confide lowers Special Attack", s16 damage)
{
    bool32 lowerSpecialAttack;
    PARAMETRIZE { lowerSpecialAttack = FALSE; }
    PARAMETRIZE { lowerSpecialAttack = TRUE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_GUST].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (lowerSpecialAttack) TURN { MOVE(player, MOVE_CONFIDE); }
        TURN { MOVE(opponent, MOVE_GUST); }
    } SCENE {
        if (lowerSpecialAttack) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFIDE, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Wobbuffet's Sp. Atk fell!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUST, opponent);
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.5), results[0].damage);
    }
}
