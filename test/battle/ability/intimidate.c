#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after switch out", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARBOK) { Ability(ability); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("The opposing Arbok's Intimidate cuts Wobbuffet's Attack!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after KO", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); Speed(1); }
        OPPONENT(SPECIES_ARBOK) { Ability(ability); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent);
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("The opposing Arbok's Intimidate cuts Wobbuffet's Attack!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Intimidate doesn't activate on an empty field in a double battle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); SEND_OUT(playerRight, 3); SEND_OUT(opponentRight, 3); }
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        // Everyone faints.

        SEND_IN_MESSAGE("Ekans");
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        }
        MESSAGE("2 sent out Arbok!");
        NONE_OF {
            ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        }
        SEND_IN_MESSAGE("Abra");
        MESSAGE("2 sent out Wynaut!");
        // Intimidate activates after all battlers have been brought out
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
        MESSAGE("Ekans's Intimidate cuts the opposing Arbok's Attack!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Ekans's Intimidate cuts the opposing Wynaut's Attack!");

        ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("The opposing Arbok's Intimidate cuts Ekans's Attack!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("The opposing Arbok's Intimidate cuts Abra's Attack!");
    }
}

SINGLE_BATTLE_TEST("Intimidate and Eject Button force the opponent to Attack")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_HITMONTOP) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN {
           MOVE(player, MOVE_QUICK_ATTACK);
           MOVE(opponent, MOVE_TACKLE);
           SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("The opposing Wobbuffet is switched out with the Eject Button!");
        MESSAGE("2 sent out Hitmontop!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("The opposing Hitmontop's Intimidate cuts Wobbuffet's Attack!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            MESSAGE("The opposing Hitmontop used Tackle!");
        }
    }
}

DOUBLE_BATTLE_TEST("Intimidate activates on an empty slot")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_CROAGUNK);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_HITMONTOP) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_RALTS);
        OPPONENT(SPECIES_AZURILL);
    } WHEN {
        TURN {
            SWITCH(playerLeft, 2);
            MOVE(playerRight, MOVE_GUNK_SHOT, target: opponentLeft);
            MOVE(opponentRight, MOVE_SPLASH);
        }
        TURN {
            SWITCH(playerLeft, 3);
            MOVE(playerRight, MOVE_SPLASH);
            }


    } SCENE {
        SWITCH_OUT_MESSAGE("Wobbuffet");
        SEND_IN_MESSAGE("Wynaut");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUNK_SHOT, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponentRight);
        SWITCH_OUT_MESSAGE("Wynaut");
        SEND_IN_MESSAGE("Hitmontop");
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        NONE_OF {
            MESSAGE("Hitmontop's Intimidate cuts the opposing Ralts's Attack!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Hitmontop's Intimidate cuts the opposing Azurill's Attack!");
    }
}

DOUBLE_BATTLE_TEST("Intimidate activates immediately after the mon was switched in as long as one opposing mon is alive")
{
    GIVEN {
        PLAYER(SPECIES_TAPU_KOKO) { Ability(ABILITY_ELECTRIC_SURGE); };
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); Item(ITEM_ELECTRIC_SEED); }
        OPPONENT(SPECIES_WYNAUT) { HP(1); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_U_TURN, target: opponentLeft); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_ELECTRIC_SURGE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, playerLeft);
        HP_BAR(opponentLeft);
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Intimidate can not further lower opponents Atk stat if it is at minimum stages")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("The opposing Arbok's Intimidate cuts Wobbuffet's Attack!");
        }
        MESSAGE("Wobbuffet's Attack won't go any lower!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], MIN_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Intimidate is not going to trigger if a mon switches out through u-turn and the opposing field is empty")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_WYNAUT) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_TREECKO);
        OPPONENT(SPECIES_TORCHIC);
    } WHEN {
        TURN {
            MOVE(opponentRight, MOVE_HEALING_WISH);
            MOVE(playerLeft, MOVE_U_TURN, target: opponentLeft);
            SEND_OUT(playerLeft, 2);
            SEND_OUT(opponentLeft, 2);
            SEND_OUT(opponentRight, 3);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, playerLeft);
        HP_BAR(opponentLeft);
        MESSAGE("2 sent out Treecko!");
        MESSAGE("2 sent out Torchic!");
        NOT ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer effected by Neutralizing Gas - switching out")
{
    GIVEN {
        PLAYER(SPECIES_WEEZING) { Ability(ABILITY_NEUTRALIZING_GAS); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        SWITCH_OUT_MESSAGE("Weezing");
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        SEND_IN_MESSAGE("Wobbuffet");
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer affected by Neutralizing Gas - switching moves")
{
    u32 move;
    PARAMETRIZE { move = MOVE_U_TURN; }
    PARAMETRIZE { move = MOVE_HEALING_WISH; }
    PARAMETRIZE { move = MOVE_BATON_PASS; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
        ASSUME(gMovesInfo[MOVE_HEALING_WISH].effect == EFFECT_HEALING_WISH);
        ASSUME(gMovesInfo[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        PLAYER(SPECIES_WEEZING) { Ability(ABILITY_NEUTRALIZING_GAS); }
        PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(player, move); SEND_OUT(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        SEND_IN_MESSAGE("Wobbuffet");
    } THEN {
        if (move == MOVE_HEALING_WISH)
            EXPECT_EQ(player->hp, player->maxHP);
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer affected by Neutralizing Gas - opponent caused switches")
{
    u32 move, item;
    PARAMETRIZE { move = MOVE_TACKLE; item = ITEM_EJECT_BUTTON; }
    PARAMETRIZE { move = MOVE_GROWL; item = ITEM_EJECT_PACK; }
    PARAMETRIZE { move = MOVE_ROAR; item = ITEM_NONE; }
    PARAMETRIZE { move = MOVE_DRAGON_TAIL; item = ITEM_NONE; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
        ASSUME(gMovesInfo[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        ASSUME(gMovesInfo[MOVE_ROAR].effect == EFFECT_ROAR);
        ASSUME(gMovesInfo[MOVE_DRAGON_TAIL].effect == EFFECT_HIT_SWITCH_TARGET);
        PLAYER(SPECIES_WEEZING) { Ability(ABILITY_NEUTRALIZING_GAS); Item(item); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        if (item != ITEM_NONE) {
            TURN { MOVE(opponent, move); SEND_OUT(player, 1); }
        } else {
            TURN { MOVE(opponent, move); }
        }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (item != ITEM_NONE)
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        if (item != ITEM_NONE) {
            SEND_IN_MESSAGE("Wobbuffet");
        } else {
            MESSAGE("Wobbuffet was dragged out!");
        }
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer affected by Neutralizing Gas - fainted")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FELL_STINGER].effect == EFFECT_FELL_STINGER);
        PLAYER(SPECIES_WEEZING) { Ability(ABILITY_NEUTRALIZING_GAS); HP(1); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_FELL_STINGER); SEND_OUT(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing gas filled the area!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FELL_STINGER, opponent);
        MESSAGE("The effects of the neutralizing gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("Weezing fainted!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        SEND_IN_MESSAGE("Wobbuffet");
    }
}

