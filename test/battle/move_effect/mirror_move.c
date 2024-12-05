#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_MIRROR_MOVE].effect == EFFECT_MIRROR_MOVE);
}

SINGLE_BATTLE_TEST("Mirror Move copies the last used move by the target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_MIRROR_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player);
        MESSAGE("Wobbuffet used Mirror Move!");
        MESSAGE("Wobbuffet used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Mirror Move fails if no move was used before")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MIRROR_MOVE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Wobbuffet used Mirror Move!");
        MESSAGE("The Mirror Move failed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Mirror Move's called powder move fails against Grass Types")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_STUN_SPORE].powderMove);
        ASSUME(gSpeciesInfo[SPECIES_ODDISH].types[0] == TYPE_GRASS);
        ASSUME(gMovesInfo[MOVE_STUN_SPORE].effect == EFFECT_PARALYZE);
        PLAYER(SPECIES_ODDISH);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); MOVE(opponent, MOVE_MIRROR_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
        STATUS_ICON(opponent, paralysis: TRUE);
        MESSAGE("The opposing Wobbuffet used Mirror Move!");
        MESSAGE("The opposing Wobbuffet used Stun Spore!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, opponent);
        MESSAGE("It doesn't affect Oddish…");
        NOT STATUS_ICON(player, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Mirror Move's called multi-hit move hits multiple times")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BULLET_SEED].effect == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BULLET_SEED); MOVE(opponent, MOVE_MIRROR_MOVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLET_SEED, player);
        HP_BAR(opponent);
        MESSAGE("The Pokémon was hit 5 time(s)!");
        MESSAGE("The opposing Wobbuffet used Mirror Move!");
        MESSAGE("The opposing Wobbuffet used Bullet Seed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLET_SEED, opponent);
        HP_BAR(player);
        MESSAGE("The Pokémon was hit 5 time(s)!");
    }
}
