#include "global.h"
#include "test/battle.h"


SINGLE_BATTLE_TEST("Stance Change changes Aegislash from Shield to Blade when using a damaging move")
{
    u16 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    PARAMETRIZE { move = MOVE_GROWL; }
    GIVEN {
        PLAYER(SPECIES_AEGISLASH_SHIELD);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (move != MOVE_GROWL) {
            ABILITY_POPUP(player, ABILITY_STANCE_CHANGE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        } else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_STANCE_CHANGE);
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
            }
        }
        ANIMATION(ANIM_TYPE_MOVE, move, player);
    } THEN {
        if (move != MOVE_GROWL)
            EXPECT_EQ(player->species, SPECIES_AEGISLASH_BLADE);
        else
            EXPECT_EQ(player->species, SPECIES_AEGISLASH_SHIELD);
    }
}

SINGLE_BATTLE_TEST("Stance Change changes Aegislash from Blade to Shield when using King's Shield")
{
    u16 move;
    PARAMETRIZE { move = MOVE_PROTECT; }
    PARAMETRIZE { move = MOVE_KINGS_SHIELD; }
    GIVEN {
        PLAYER(SPECIES_AEGISLASH_BLADE);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (move == MOVE_KINGS_SHIELD) {
            ABILITY_POPUP(player, ABILITY_STANCE_CHANGE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        } else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_STANCE_CHANGE);
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
            }
        }
        ANIMATION(ANIM_TYPE_MOVE, move, player);
    } THEN {
        if (move == MOVE_KINGS_SHIELD)
            EXPECT_EQ(player->species, SPECIES_AEGISLASH_SHIELD);
        else
            EXPECT_EQ(player->species, SPECIES_AEGISLASH_BLADE);
    }
}

SINGLE_BATTLE_TEST("Stance Change doesn't change Aegislash to Shield if King's Shield is called by a different move - Sleep Talk")
{
    KNOWN_FAILING; // Currently does change form
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SLEEP_TALK].effect == EFFECT_SLEEP_TALK);
        PLAYER(SPECIES_AEGISLASH_BLADE) { Moves(MOVE_KINGS_SHIELD, MOVE_SLEEP_TALK); Status1(STATUS1_SLEEP_TURN(3)); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SLEEP_TALK); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_STANCE_CHANGE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KINGS_SHIELD, player);
    } THEN {
        EXPECT_EQ(player->species, SPECIES_AEGISLASH_BLADE);
    }
}

TO_DO_BATTLE_TEST("Stance Change doesn't change Aegislash to Shield if King's Shield is called by a different move - Me First");
