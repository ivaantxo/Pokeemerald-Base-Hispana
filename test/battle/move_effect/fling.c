#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FLING].effect == EFFECT_FLING);
}

SINGLE_BATTLE_TEST("Fling fails if pokemon holds no item")
{
    u16 item;

    PARAMETRIZE {item = ITEM_NONE; }
    PARAMETRIZE {item = ITEM_RAZOR_CLAW; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(item); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING);}
    } SCENE {
        MESSAGE("Wobbuffet used Fling!");
        if (item != ITEM_NONE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }
    }
}

SINGLE_BATTLE_TEST("Fling fails if pokemon is under the effects of Embargo or Magic Room")
{
    u16 move;

    PARAMETRIZE {move = MOVE_CELEBRATE; }
    PARAMETRIZE {move = MOVE_EMBARGO; }
    PARAMETRIZE {move = MOVE_MAGIC_ROOM; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_EMBARGO].effect == EFFECT_EMBARGO);
        ASSUME(gMovesInfo[MOVE_MAGIC_ROOM].effect == EFFECT_MAGIC_ROOM);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RAZOR_CLAW); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Wobbuffet used Fling!");
        if (move == MOVE_CELEBRATE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }
    }
}

SINGLE_BATTLE_TEST("Fling fails for pokemon with Klutz ability")
{
    u16 ability;

    PARAMETRIZE {ability = ABILITY_KLUTZ; }
    PARAMETRIZE {ability = ABILITY_RUN_AWAY; }

    GIVEN {
        ASSUME(B_KLUTZ_FLING_INTERACTION >= GEN_5);
        PLAYER(SPECIES_BUNEARY) { Item(ITEM_RAZOR_CLAW); Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Buneary used Fling!");
        if (ability != ABILITY_KLUTZ) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }
    }
}

SINGLE_BATTLE_TEST("Fling's thrown item can be regained with Recycle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_RECYCLE].effect == EFFECT_RECYCLE);
        PLAYER(SPECIES_WOBBUFFET) {Item(ITEM_RAZOR_CLAW); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING);}
        TURN { MOVE(player, MOVE_RECYCLE);}
        TURN { MOVE(player, MOVE_FLING);}
    } SCENE {
        MESSAGE("Wobbuffet used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        MESSAGE("Wobbuffet used Recycle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RECYCLE, player);
        MESSAGE("Wobbuffet found one Razor Claw!");
        MESSAGE("Wobbuffet used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Fling - Item is lost even when there is no target")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SELF_DESTRUCT].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_WOBBUFFET) {Item(ITEM_RAZOR_CLAW); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) {Speed(5); }
        OPPONENT(SPECIES_WOBBUFFET) {Speed(5); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SELF_DESTRUCT); MOVE(player, MOVE_FLING); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Self-Destruct!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SELF_DESTRUCT, opponent);
        HP_BAR(player);
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("Wobbuffet used Fling!");
        MESSAGE("But it failed!");

        MESSAGE("Wobbuffet used Fling!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Fling - Item is lost when target protects itself")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PROTECT].effect == EFFECT_PROTECT);
        PLAYER(SPECIES_WOBBUFFET) {Item(ITEM_RAZOR_CLAW); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_FLING);}
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Protect!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        MESSAGE("Wobbuffet used Fling!");
        MESSAGE("The opposing Wobbuffet protected itself!");

        MESSAGE("Wobbuffet used Fling!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Fling doesn't consume the item if pokemon is asleep/frozen/paralyzed")
{
    u32 status;
    u16 item;

    PARAMETRIZE {status = STATUS1_SLEEP_TURN(2); item = ITEM_RAZOR_CLAW; }
    PARAMETRIZE {status = STATUS1_PARALYSIS; item = ITEM_RAZOR_CLAW; }
    PARAMETRIZE {status = STATUS1_FREEZE; item = ITEM_RAZOR_CLAW; }
    PARAMETRIZE {status = STATUS1_SLEEP_TURN(2); item = ITEM_NONE; }
    PARAMETRIZE {status = STATUS1_PARALYSIS; item = ITEM_NONE; }
    PARAMETRIZE {status = STATUS1_FREEZE; item = ITEM_NONE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Item(item); Status1(status); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (status == STATUS1_FREEZE) {
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_FROZEN, FALSE)); }
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_FROZEN, TRUE)); }
        } else if (status == STATUS1_PARALYSIS) {
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_PARALYSIS, FALSE)); }
            TURN { MOVE(player, MOVE_FLING, WITH_RNG(RNG_PARALYSIS, TRUE)); }
        } else {
            TURN { MOVE(player, MOVE_FLING); }
            TURN { MOVE(player, MOVE_FLING); }
        }
    } SCENE {
        if (status == STATUS1_FREEZE) {
            MESSAGE("Wobbuffet is frozen solid!");
            MESSAGE("Wobbuffet thawed out!");
        }
        else if (status == STATUS1_PARALYSIS) {
            MESSAGE("Wobbuffet couldn't move because it's paralyzed!");
        }
        else {
            MESSAGE("Wobbuffet is fast asleep.");
            MESSAGE("Wobbuffet woke up!");
        }
        MESSAGE("Wobbuffet used Fling!");
        if (item != ITEM_NONE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("But it failed!");
        }

    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Fling applies special effects when throwing specific Items")
{
    u16 item;

    PARAMETRIZE {item = ITEM_FLAME_ORB; }
    PARAMETRIZE {item = ITEM_LIGHT_BALL; }
    PARAMETRIZE {item = ITEM_POISON_BARB; }
    PARAMETRIZE {item = ITEM_TOXIC_ORB; }
    PARAMETRIZE {item = ITEM_RAZOR_FANG; }
    PARAMETRIZE {item = ITEM_KINGS_ROCK; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(item); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Wobbuffet used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        switch (item)
        {
        case ITEM_FLAME_ORB:
            {
                MESSAGE("The opposing Wobbuffet was burned!");
                STATUS_ICON(opponent, STATUS1_BURN);
            }
            break;
        case ITEM_LIGHT_BALL:
            {
                MESSAGE("The opposing Wobbuffet is paralyzed, so it may be unable to move!");
                STATUS_ICON(opponent, STATUS1_PARALYSIS);
            }
            break;
        case ITEM_POISON_BARB:
            {
                MESSAGE("The opposing Wobbuffet was poisoned!");
                STATUS_ICON(opponent, STATUS1_POISON);
            }
            break;
        case ITEM_TOXIC_ORB:
            {
                MESSAGE("The opposing Wobbuffet was badly poisoned!");
                STATUS_ICON(opponent, STATUS1_TOXIC_POISON);
            }
            break;
        case ITEM_RAZOR_FANG:
        case ITEM_KINGS_ROCK:
            {
                MESSAGE("The opposing Wobbuffet flinched and couldn't move!");
            }
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Fling's secondary effects are blocked by Shield Dust")
{
    u16 item;

    PARAMETRIZE {item = ITEM_FLAME_ORB; }
    PARAMETRIZE {item = ITEM_LIGHT_BALL; }
    PARAMETRIZE {item = ITEM_POISON_BARB; }
    PARAMETRIZE {item = ITEM_TOXIC_ORB; }
    PARAMETRIZE {item = ITEM_RAZOR_FANG; }
    PARAMETRIZE {item = ITEM_KINGS_ROCK; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(item); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_SHIELD_DUST); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Wobbuffet used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        switch (item)
        {
        case ITEM_FLAME_ORB:
            {
                NONE_OF {
                    MESSAGE("The opposing Wobbuffet was burned!");
                    STATUS_ICON(opponent, STATUS1_BURN);
                }
                MESSAGE("The Flame Orb was used up…");
            }
            break;
        case ITEM_LIGHT_BALL:
            {
                NONE_OF {
                    MESSAGE("The opposing Wobbuffet is paralyzed, so it may be unable to move!");
                    STATUS_ICON(opponent, STATUS1_PARALYSIS);
                }
                MESSAGE("The Light Ball was used up…");
            }
            break;
        case ITEM_POISON_BARB:
            {
                NONE_OF {
                    MESSAGE("The opposing Wobbuffet was poisoned!");
                    STATUS_ICON(opponent, STATUS1_POISON);
                }
                MESSAGE("The Poison Barb was used up…");
            }
            break;
        case ITEM_TOXIC_ORB:
            {
                NONE_OF {
                    MESSAGE("The opposing Wobbuffet was badly poisoned!");
                    STATUS_ICON(opponent, STATUS1_TOXIC_POISON);
                }
                MESSAGE("The Toxic Orb was used up…");
            }
            break;
        case ITEM_RAZOR_FANG:
        case ITEM_KINGS_ROCK:
            {
                NONE_OF {
                    MESSAGE("The opposing Wobbuffet flinched and couldn't move!");
                }
                switch (item)
                {
                    case ITEM_RAZOR_FANG:
                        MESSAGE("The Razor Fang was used up…");
                        break;
                    case ITEM_KINGS_ROCK:
                        MESSAGE("The King's Rock was used up…");
                        break;
                }
            }
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Fling - thrown berry's effect activates for the target even if the trigger conditions are not met")
{
    u16 item, effect;
    u8 statId = 0;
    u32 status1 = STATUS1_NONE;

    PARAMETRIZE { item = ITEM_ORAN_BERRY; effect = HOLD_EFFECT_RESTORE_HP; }
    PARAMETRIZE { item = ITEM_SITRUS_BERRY; effect = HOLD_EFFECT_RESTORE_HP; }
    PARAMETRIZE { item = ITEM_ENIGMA_BERRY; effect = HOLD_EFFECT_ENIGMA_BERRY; }
    PARAMETRIZE { item = ITEM_LEPPA_BERRY; effect = HOLD_EFFECT_RESTORE_PP; }
    PARAMETRIZE { item = ITEM_CHESTO_BERRY; effect = HOLD_EFFECT_CURE_SLP; status1 = STATUS1_SLEEP; }
    PARAMETRIZE { item = ITEM_CHERI_BERRY; effect = HOLD_EFFECT_CURE_PAR; status1 = STATUS1_PARALYSIS; }
    PARAMETRIZE { item = ITEM_PECHA_BERRY; effect = HOLD_EFFECT_CURE_PSN; status1 = STATUS1_POISON; }
    PARAMETRIZE { item = ITEM_PECHA_BERRY; effect = HOLD_EFFECT_CURE_PSN; status1 = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { item = ITEM_RAWST_BERRY; effect = HOLD_EFFECT_CURE_BRN; status1 = STATUS1_BURN; }
    PARAMETRIZE { item = ITEM_ASPEAR_BERRY; effect = HOLD_EFFECT_CURE_FRZ; status1 = STATUS1_FREEZE; }
    PARAMETRIZE { item = ITEM_ASPEAR_BERRY; effect = HOLD_EFFECT_CURE_FRZ; status1 = STATUS1_FROSTBITE; }
    PARAMETRIZE { item = ITEM_APICOT_BERRY; effect = HOLD_EFFECT_SP_DEFENSE_UP; statId = STAT_SPDEF; }
    PARAMETRIZE { item = ITEM_MARANGA_BERRY; effect = HOLD_EFFECT_MARANGA_BERRY; statId = STAT_SPDEF; }
    PARAMETRIZE { item = ITEM_GANLON_BERRY; effect = HOLD_EFFECT_DEFENSE_UP; statId = STAT_DEF; }
    PARAMETRIZE { item = ITEM_KEE_BERRY; effect = HOLD_EFFECT_KEE_BERRY; statId = STAT_DEF; }
    PARAMETRIZE { item = ITEM_LIECHI_BERRY; effect = HOLD_EFFECT_ATTACK_UP; statId = STAT_ATK; }
    PARAMETRIZE { item = ITEM_PETAYA_BERRY; effect = HOLD_EFFECT_SP_ATTACK_UP; statId = STAT_SPATK; }
    PARAMETRIZE { item = ITEM_SALAC_BERRY; effect = HOLD_EFFECT_SPEED_UP; statId = STAT_SPEED; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLING].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET) { Item(item); Attack(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Status1(status1); HP(399); MaxHP(400); MovesWithPP({MOVE_CELEBRATE, 35}); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        MESSAGE("Wobbuffet used Fling!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent);
        if (effect == HOLD_EFFECT_RESTORE_HP) {
            if (item == ITEM_ORAN_BERRY) {
                MESSAGE("The opposing Wobbuffet restored its health using its Oran Berry!");
            } else if (item == ITEM_SITRUS_BERRY) {
                MESSAGE("The opposing Wobbuffet restored its health using its Sitrus Berry!");
            } else {
                MESSAGE("Wobbuffet restored its health using its Enigma Berry!");
            }
            HP_BAR(opponent);
        }
        else if (effect == HOLD_EFFECT_RESTORE_PP) {
            MESSAGE("The opposing Wobbuffet restored PP to its move Celebrate using its Leppa Berry!");
        }
        else if (status1 != STATUS1_NONE) {
            if (status1 == STATUS1_BURN) {
                MESSAGE("The opposing Wobbuffet's Rawst Berry cured its burn!");
            } else if (status1 == STATUS1_SLEEP) {
                MESSAGE("The opposing Wobbuffet's Chesto Berry woke it up!");
            } else if (status1 == STATUS1_FREEZE) {
                MESSAGE("The opposing Wobbuffet's Aspear Berry defrosted it!");
            } else if (status1 == STATUS1_FROSTBITE) {
                MESSAGE("The opposing Wobbuffet's Aspear Berry cured its frostbite!");
            } else if (status1 == STATUS1_PARALYSIS) {
                MESSAGE("The opposing Wobbuffet's Cheri Berry cured its paralysis!");
            } else if (status1 == STATUS1_TOXIC_POISON || status1 == STATUS1_POISON) {
                MESSAGE("The opposing Wobbuffet's Pecha Berry cured its poison!");
            }
            NOT STATUS_ICON(opponent, status1);
        }
        else if (statId != 0) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            if (statId == STAT_ATK) {
                MESSAGE("Using Liechi Berry, the Attack of the opposing Wobbuffet rose!");
            } else if (statId == STAT_DEF) {
                if (item == ITEM_GANLON_BERRY) {
                    MESSAGE("Using Ganlon Berry, the Defense of the opposing Wobbuffet rose!");
                } else {
                    MESSAGE("Using Kee Berry, the Defense of the opposing Wobbuffet rose!");
                }
            } else if (statId == STAT_SPDEF) {
                if (item == ITEM_APICOT_BERRY) {
                    MESSAGE("Using Apicot Berry, the Sp. Def of the opposing Wobbuffet rose!");
                } else {
                    MESSAGE("Using Maranga Berry, the Sp. Def of the opposing Wobbuffet rose!");
                }
            } else if (statId == STAT_SPEED) {
                MESSAGE("Using Salac Berry, the Speed of the opposing Wobbuffet rose!");
            } else if (statId == STAT_SPATK) {
                MESSAGE("Using Petaya Berry, the Sp. Atk of the opposing Wobbuffet rose!");
            }
        }
    } THEN {
        if (effect == HOLD_EFFECT_RESTORE_HP) {
            EXPECT_EQ(opponent->hp, opponent->maxHP);
        } else if (effect == HOLD_EFFECT_RESTORE_PP) {
            EXPECT_EQ(opponent->pp[0], 39); // Not 40, because Celebrate was used.
        }  else if (status1 != STATUS1_NONE) {
            EXPECT_EQ(opponent->status1, STATUS1_NONE);
        }
        else if (statId != 0) {
            EXPECT_EQ(opponent->statStages[statId], DEFAULT_STAT_STAGE + 1);
        }
    }
}

SINGLE_BATTLE_TEST("Fling deals damage based on items fling power")
{
    s16 damage[2];

    GIVEN {
        ASSUME(gMovesInfo[MOVE_CRUNCH].power == 80);
        ASSUME(gItemsInfo[ITEM_VENUSAURITE].flingPower == 80);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_VENUSAURITE); }
        OPPONENT(SPECIES_REGIROCK);
    } WHEN {
        TURN { MOVE(player, MOVE_CRUNCH); }
        TURN { MOVE(player, MOVE_FLING); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CRUNCH, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLING, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
    }
}
