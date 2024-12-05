#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Venusaur can Mega Evolve holding Venusaurite")
{
    GIVEN {
        PLAYER(SPECIES_VENUSAUR) { Item(ITEM_VENUSAURITE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        MESSAGE("Venusaur's Venusaurite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Venusaur has Mega Evolved into Mega Venusaur!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_VENUSAUR_MEGA);
    }
}

DOUBLE_BATTLE_TEST("Mega Evolution's order is determined by Speed - opponent faster")
{
    GIVEN {
        PLAYER(SPECIES_VENUSAUR) { Item(ITEM_VENUSAURITE); Speed(1); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        OPPONENT(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(3); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(playerLeft, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        MESSAGE("The opposing Gardevoir's Gardevoirite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponentLeft);
        MESSAGE("The opposing Gardevoir has Mega Evolved into Mega Gardevoir!");
        MESSAGE("Venusaur's Venusaurite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, playerLeft);
        MESSAGE("Venusaur has Mega Evolved into Mega Venusaur!");
    }
}

DOUBLE_BATTLE_TEST("Mega Evolution's order is determined by Speed - player faster")
{
    GIVEN {
        PLAYER(SPECIES_VENUSAUR) { Item(ITEM_VENUSAURITE); Speed(5); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        OPPONENT(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(4); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(playerLeft, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        MESSAGE("Venusaur's Venusaurite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, playerLeft);
        MESSAGE("Venusaur has Mega Evolved into Mega Venusaur!");
        MESSAGE("The opposing Gardevoir's Gardevoirite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponentLeft);
        MESSAGE("The opposing Gardevoir has Mega Evolved into Mega Gardevoir!");
    }
}

SINGLE_BATTLE_TEST("Rayquaza can Mega Evolve knowing Dragon Ascent")
{
    GIVEN {
        PLAYER(SPECIES_RAYQUAZA) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        MESSAGE("1's fervent wish has reached Rayquaza!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Rayquaza has Mega Evolved into Mega Rayquaza!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_RAYQUAZA_MEGA);
    }
}

SINGLE_BATTLE_TEST("Mega Evolution affects turn order")
{
    GIVEN {
        ASSUME(B_MEGA_EVO_TURN_ORDER >= GEN_7);
        PLAYER(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(105); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(106); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        MESSAGE("Gardevoir used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");
    } THEN {
        ASSUME(player->speed == 205);
    }
}

SINGLE_BATTLE_TEST("Abilities replaced by Mega Evolution do not affect turn order")
{
    GIVEN {
        ASSUME(B_MEGA_EVO_TURN_ORDER >= GEN_7);
        ASSUME(gSpeciesInfo[SPECIES_SABLEYE_MEGA].abilities[0] != ABILITY_STALL
            && gSpeciesInfo[SPECIES_SABLEYE_MEGA].abilities[1] != ABILITY_STALL);
        PLAYER(SPECIES_SABLEYE) { Item(ITEM_SABLENITE); Ability(ABILITY_STALL); Speed(105); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(44); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        MESSAGE("Sableye used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");
    } THEN {
        ASSUME(player->speed == 45);
    }
}

DOUBLE_BATTLE_TEST("Mega Evolution happens after switching, but before Focus Punch-like Moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FOCUS_PUNCH].effect == EFFECT_FOCUS_PUNCH);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_VENUSAUR) { Item(ITEM_VENUSAURITE); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(opponentRight, 2); MOVE(playerRight, MOVE_FOCUS_PUNCH, gimmick: GIMMICK_MEGA, target: opponentLeft); MOVE(playerLeft, MOVE_FOCUS_PUNCH, target: opponentLeft); }
        TURN {}
    } SCENE {
        MESSAGE("2 withdrew Wobbuffet!");
        MESSAGE("2 sent out Wobbuffet!");

        MESSAGE("Venusaur's Venusaurite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, playerRight);
        MESSAGE("Venusaur has Mega Evolved into Mega Venusaur!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerRight);
        MESSAGE("Venusaur is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerLeft);
        MESSAGE("Wobbuffet is tightening its focus!");
    }
}

SINGLE_BATTLE_TEST("Regular Mega Evolution and Fervent Wish Mega Evolution can happen on the same turn")
{
    GIVEN {
        PLAYER(SPECIES_RAYQUAZA) { Moves(MOVE_DRAGON_ASCENT, MOVE_CELEBRATE); Speed(3); }
        OPPONENT(SPECIES_GARDEVOIR) { Item(ITEM_GARDEVOIRITE); Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(opponent, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        MESSAGE("1's fervent wish has reached Rayquaza!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Rayquaza has Mega Evolved into Mega Rayquaza!");

        MESSAGE("The opposing Gardevoir's Gardevoirite is reacting to 2's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        MESSAGE("The opposing Gardevoir has Mega Evolved into Mega Gardevoir!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_RAYQUAZA_MEGA);
        EXPECT_EQ(opponent->species, SPECIES_GARDEVOIR_MEGA);
    }
}

SINGLE_BATTLE_TEST("Mega Evolved Pokemon do not change abilities after fainting")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_CRUNCH].makesContact == TRUE);
        ASSUME(gSpeciesInfo[SPECIES_GARCHOMP_MEGA].abilities[0] != ABILITY_ROUGH_SKIN);
        ASSUME(gSpeciesInfo[SPECIES_GARCHOMP_MEGA].abilities[1] != ABILITY_ROUGH_SKIN);
        ASSUME(gSpeciesInfo[SPECIES_GARCHOMP_MEGA].abilities[2] != ABILITY_ROUGH_SKIN);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GARCHOMP) { Ability(ABILITY_ROUGH_SKIN); Item(ITEM_GARCHOMPITE); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_CRUNCH); MOVE(opponent, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CRUNCH, player);
        MESSAGE("The opposing Garchomp fainted!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_ROUGH_SKIN);
            MESSAGE("Wobbuffet was hurt by the opposing Garchomp's Rough Skin!");
            HP_BAR(player);
        }
    }
}
