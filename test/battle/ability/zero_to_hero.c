#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Zero to Hero transforms Palafin when it switches out")
{
    GIVEN {
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
    } SCENE {
        SWITCH_OUT_MESSAGE("Palafin");
        SEND_IN_MESSAGE("Wobbuffet");
        SWITCH_OUT_MESSAGE("Wobbuffet");
        SEND_IN_MESSAGE("Palafin");
        ABILITY_POPUP(player, ABILITY_ZERO_TO_HERO);
        MESSAGE("Palafin underwent a heroic transformation!");
    } THEN { EXPECT_EQ(player->species, SPECIES_PALAFIN_HERO); }
}

SINGLE_BATTLE_TEST("Zero to Hero can't be suppressed by Neutralizing Gas")
{
    GIVEN {
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KOFFING) { Ability(ABILITY_NEUTRALIZING_GAS); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_NEUTRALIZING_GAS);
        ABILITY_POPUP(player, ABILITY_ZERO_TO_HERO);
        MESSAGE("Palafin underwent a heroic transformation!");
    } THEN { EXPECT_EQ(player->species, SPECIES_PALAFIN_HERO); }
}

SINGLE_BATTLE_TEST("Zero to Hero transforms both player and opponent")
{
    GIVEN {
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { SWITCH(player, 0); SWITCH(opponent, 0); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_ZERO_TO_HERO);
        MESSAGE("Palafin underwent a heroic transformation!");
        ABILITY_POPUP(opponent, ABILITY_ZERO_TO_HERO);
        MESSAGE("The opposing Palafin underwent a heroic transformation!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_PALAFIN_HERO);
        EXPECT_EQ(opponent->species, SPECIES_PALAFIN_HERO);
        }
}

SINGLE_BATTLE_TEST("Zero to Hero will activate if a switch move is used")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLIP_TURN].effect == EFFECT_HIT_ESCAPE);
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLIP_TURN); SEND_OUT(player, 1); }
        TURN { SWITCH(player, 0); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLIP_TURN, player);
        ABILITY_POPUP(player, ABILITY_ZERO_TO_HERO);
        MESSAGE("Palafin underwent a heroic transformation!");
    } THEN { EXPECT_EQ(player->species, SPECIES_PALAFIN_HERO); }
}

SINGLE_BATTLE_TEST("Gastro Acid, Worry Seed, and Simple Beam fail if the target has the Ability Zero to Hero")
{
    u16 move;

    PARAMETRIZE { move = MOVE_GASTRO_ACID; }
    PARAMETRIZE { move = MOVE_WORRY_SEED; }
    PARAMETRIZE { move = MOVE_SIMPLE_BEAM; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_GASTRO_ACID].effect == EFFECT_GASTRO_ACID);
        ASSUME(gMovesInfo[MOVE_WORRY_SEED].effect == EFFECT_WORRY_SEED);
        ASSUME(gMovesInfo[MOVE_SIMPLE_BEAM].effect == EFFECT_SIMPLE_BEAM);
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, move, player);
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Transform doesn't apply the heroic transformation message when copying Palafin")
{
    GIVEN {
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); MOVE(opponent, MOVE_TRANSFORM); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_ZERO_TO_HERO);
        MESSAGE("Palafin underwent a heroic transformation!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRANSFORM, opponent);
        MESSAGE("The opposing Wobbuffet transformed into Palafin!");
        NOT ABILITY_POPUP(opponent, ABILITY_ZERO_TO_HERO);
    } THEN { EXPECT_EQ(player->species, SPECIES_PALAFIN_HERO); }
}

SINGLE_BATTLE_TEST("Imposter doesn't apply the heroic transformation message when copying Palafin")
{
    GIVEN {
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_DITTO) { Ability(ABILITY_IMPOSTER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { SWITCH(player, 0); SWITCH(opponent, 0); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_ZERO_TO_HERO);
        MESSAGE("Palafin underwent a heroic transformation!");
        ABILITY_POPUP(opponent, ABILITY_IMPOSTER);
        MESSAGE("The opposing Ditto transformed into Palafin using Imposter!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_ZERO_TO_HERO);
            MESSAGE("The opposing Ditto underwent a heroic transformation!");
        }
    } THEN { EXPECT_EQ(player->species, SPECIES_PALAFIN_HERO); }
}

SINGLE_BATTLE_TEST("Zero to Hero's message displays correctly after all battlers fainted - Player")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_PALAFIN_ZERO);
        PLAYER(SPECIES_WOBBUFFET) { HP(1);}
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLIP_TURN); SEND_OUT(player, 1); }
        TURN { MOVE(opponent, MOVE_EXPLOSION); SEND_OUT(player, 0); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, opponent);
        // Everyone faints.
        SEND_IN_MESSAGE("Palafin");
        MESSAGE("2 sent out Wobbuffet!");
        ABILITY_POPUP(player, ABILITY_ZERO_TO_HERO);
        MESSAGE("Palafin underwent a heroic transformation!");
    }
}

SINGLE_BATTLE_TEST("Zero to Hero's message displays correctly after all battlers fainted - Opponent")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PALAFIN_ZERO);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_FLIP_TURN); SEND_OUT(opponent, 1); }
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_EXPLOSION); SEND_OUT(player, 1); SEND_OUT(opponent, 0); }
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        // Everyone faints.
        SEND_IN_MESSAGE("Wobbuffet");
        MESSAGE("2 sent out Palafin!");
        ABILITY_POPUP(opponent, ABILITY_ZERO_TO_HERO);
        MESSAGE("The opposing Palafin underwent a heroic transformation!");
    }
}

// Write Trace test and move this one to that file (including every other ability that can't be copied)
SINGLE_BATTLE_TEST("Zero to Hero cannot be copied by Trace")
{
    GIVEN {
        PLAYER(SPECIES_PALAFIN_ZERO) { Ability(ABILITY_ZERO_TO_HERO); }
        OPPONENT(SPECIES_RALTS) { Ability(ABILITY_TRACE); }
    } WHEN {
        TURN {}
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_TRACE);
            MESSAGE("The opposing Ralts Traced Palafin's Zero to Hero!");
        }
    }
}
