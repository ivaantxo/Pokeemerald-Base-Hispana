#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Quick Draw has a 30% chance of going first")
{
    PASSES_RANDOMLY(3, 10, RNG_QUICK_DRAW);
    GIVEN {
        PLAYER(SPECIES_SLOWBRO_GALAR) { Ability(ABILITY_QUICK_DRAW); Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_QUICK_DRAW);
        MESSAGE("Slowbro used Tackle!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");
    }
}

SINGLE_BATTLE_TEST("Quick Draw does not activate 70% of the time")
{
    PASSES_RANDOMLY(7, 10, RNG_QUICK_DRAW);
    GIVEN {
        PLAYER(SPECIES_SLOWBRO_GALAR) { Ability(ABILITY_QUICK_DRAW); Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        NOT ABILITY_POPUP(player, ABILITY_QUICK_DRAW);
        MESSAGE("The opposing Wobbuffet used Celebrate!");
        MESSAGE("Slowbro used Tackle!");
    }
}
