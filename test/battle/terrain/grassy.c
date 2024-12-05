#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Grassy Terrain recovers 1/16th HP at end of turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { MaxHP(100); HP(1); }
        OPPONENT(SPECIES_WOBBUFFET) { MaxHP(100); HP(1); };
    } WHEN {
        TURN { MOVE(player, MOVE_GRASSY_TERRAIN); }
    } SCENE {
        s32 maxHPPlayer = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        s32 maxHPOpponent = GetMonData(&OPPONENT_PARTY[0], MON_DATA_MAX_HP);
        MESSAGE("Wobbuffet is healed by the grassy terrain!");
        HP_BAR(player, damage: -maxHPPlayer / 16);
        MESSAGE("The opposing Wobbuffet is healed by the grassy terrain!");
        HP_BAR(opponent, damage: -maxHPOpponent / 16);
    }
}

SINGLE_BATTLE_TEST("Grassy Terrain activates Grassy Seed and Mimicry")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_GRASSY_SEED].holdEffect == HOLD_EFFECT_SEEDS);
        ASSUME(gItemsInfo[ITEM_GRASSY_SEED].holdEffectParam == HOLD_EFFECT_PARAM_GRASSY_TERRAIN);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_GRASSY_SEED); }
        OPPONENT(SPECIES_STUNFISK_GALAR) { Ability(ABILITY_MIMICRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_GRASSY_TERRAIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Using Grassy Seed, the Defense of Wobbuffet rose!");
        ABILITY_POPUP(opponent);
        MESSAGE("The opposing Stunfisk's type changed to Grass!");
    } THEN {
        EXPECT_EQ(gBattleMons[B_POSITION_OPPONENT_LEFT].types[0], TYPE_GRASS);
    }
}

SINGLE_BATTLE_TEST("Grassy Terrain increases power of Grass-type moves by 30/50 percent", s16 damage)
{
    bool32 terrain;
    PARAMETRIZE { terrain = FALSE; }
    PARAMETRIZE { terrain = TRUE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (terrain)
            TURN { MOVE(player, MOVE_GRASSY_TERRAIN); }
        TURN { MOVE(player, MOVE_ABSORB); }
    } SCENE {
        MESSAGE("Wobbuffet used Absorb!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_TERRAIN_TYPE_BOOST >= GEN_8)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.3), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Grassy Terrain lasts for 5 turns")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_GRASSY_TERRAIN); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GRASSY_TERRAIN, player);
        MESSAGE("Grass grew to cover the battlefield!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("The grass disappeared from the battlefield.");
    }
}

SINGLE_BATTLE_TEST("Grassy Terrain heals the pokemon on the field for the duration of the terrain, including last turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_GRASSY_TERRAIN); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GRASSY_TERRAIN, player);
        MESSAGE("Grass grew to cover the battlefield!");
        MESSAGE("The opposing Wobbuffet is healed by the grassy terrain!");
        MESSAGE("The opposing Wobbuffet is healed by the grassy terrain!");
        MESSAGE("The opposing Wobbuffet is healed by the grassy terrain!");
        MESSAGE("The opposing Wobbuffet is healed by the grassy terrain!");
        MESSAGE("The opposing Wobbuffet is healed by the grassy terrain!");
        MESSAGE("The grass disappeared from the battlefield.");
    }
}
