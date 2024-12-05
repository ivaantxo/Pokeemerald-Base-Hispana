#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Static inflicts paralysis on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        ASSUME(!gMovesInfo[MOVE_SWIFT].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIKACHU) { Ability(ABILITY_STATIC); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (gMovesInfo[move].makesContact) {
            ABILITY_POPUP(opponent, ABILITY_STATIC);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
            MESSAGE("The opposing Pikachu's Static paralyzed Wobbuffet, so it may be unable to move!");
            STATUS_ICON(player, paralysis: TRUE);
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_STATIC);
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
                MESSAGE("The opposing Pikachu's Static paralyzed Wobbuffet, so it may be unable to move!");
                STATUS_ICON(player, paralysis: TRUE);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Static triggers 30% of the time")
{
    PASSES_RANDOMLY(3, 10, RNG_STATIC);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_4);
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIKACHU) { Ability(ABILITY_STATIC); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_STATIC);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
        MESSAGE("The opposing Pikachu's Static paralyzed Wobbuffet, so it may be unable to move!");
        STATUS_ICON(player, paralysis: TRUE);
    }
}
