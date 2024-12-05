#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_SAFETY_GOGGLES].holdEffect == HOLD_EFFECT_SAFETY_GOGGLES);
};

SINGLE_BATTLE_TEST("Safety Goggles block powder and spore moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_STUN_SPORE].powderMove);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_ABRA) { Item(ITEM_SAFETY_GOGGLES); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
        MESSAGE("The opposing Abra is not affected thanks to its Safety Goggles!");
    }
}

SINGLE_BATTLE_TEST("Safety Goggles blocks damage from Hail")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_SAFETY_GOGGLES); };
    } WHEN {
        TURN { MOVE(player, MOVE_HAIL); }
    } SCENE {
        NOT MESSAGE("The opposing Wobbuffet is buffeted by the hail!");
    }
}

SINGLE_BATTLE_TEST("Safety Goggles blocks damage from Sandstorm")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_SAFETY_GOGGLES); };
    } WHEN {
        TURN { MOVE(player, MOVE_SANDSTORM); }
    } SCENE {
        NOT MESSAGE("The opposing Wobbuffet is buffeted by the sandstorm!");
    }
}

TO_DO_BATTLE_TEST("Safety Goggles blocks Effect Spore's effect");
