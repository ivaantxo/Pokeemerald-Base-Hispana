#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SEED_FLARE].power == gMovesInfo[MOVE_FUTURE_SIGHT].power);
    ASSUME(gMovesInfo[MOVE_SEED_FLARE].category == gMovesInfo[MOVE_FUTURE_SIGHT].category);
    ASSUME(gMovesInfo[MOVE_FUTURE_SIGHT].effect == EFFECT_FUTURE_SIGHT);
    ASSUME(gMovesInfo[MOVE_FUTURE_SIGHT].power > 0);
}

SINGLE_BATTLE_TEST("Future Sight uses Sp. Atk stat of the original user without modifiers")
{
    u32 item;
    s16 seedFlareDmg;
    s16 futureSightDmg;

    PARAMETRIZE { item = ITEM_TWISTED_SPOON; }
    PARAMETRIZE { item = ITEM_PSYCHIC_GEM; }

    GIVEN {
        PLAYER(SPECIES_PIKACHU) { Item(item); }
        PLAYER(SPECIES_RAICHU) { Item(item); }
        OPPONENT(SPECIES_REGICE);
    } WHEN {
        TURN { MOVE(player, MOVE_SEED_FLARE, WITH_RNG(RNG_SECONDARY_EFFECT, FALSE)); }
        TURN { MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN { SWITCH(player, 1); }
        TURN { }
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SEED_FLARE, player);
        HP_BAR(opponent, captureDamage: &seedFlareDmg);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FUTURE_SIGHT, player);
        MESSAGE("The opposing Regice took the Future Sight attack!");
        HP_BAR(opponent, captureDamage: &futureSightDmg);
    } THEN {
        EXPECT_EQ(seedFlareDmg, futureSightDmg);
    }
}

SINGLE_BATTLE_TEST("Future Sight is not boosted by Life Orb is original user if not on the field")
{
    s16 seedFlareDmg;
    s16 futureSightDmg;

    GIVEN {
        PLAYER(SPECIES_PIKACHU);
        PLAYER(SPECIES_RAICHU) { Item(ITEM_LIFE_ORB); }
        OPPONENT(SPECIES_REGICE);
    } WHEN {
        TURN { MOVE(player, MOVE_SEED_FLARE, WITH_RNG(RNG_SECONDARY_EFFECT, FALSE)); }
        TURN { MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN { SWITCH(player, 1); }
        TURN { }
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SEED_FLARE, player);
        HP_BAR(opponent, captureDamage: &seedFlareDmg);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FUTURE_SIGHT, player);
        MESSAGE("The opposing Regice took the Future Sight attack!");
        HP_BAR(opponent, captureDamage: &futureSightDmg);
        NOT MESSAGE("Raichu was hurt by its Life Orb!");
    } THEN {
        EXPECT_EQ(seedFlareDmg, futureSightDmg);
    }
}

SINGLE_BATTLE_TEST("Future Sight receives STAB from party mon")
{
    s16 seedFlareDmg;
    s16 futureSightDmg;

    GIVEN {
        PLAYER(SPECIES_RALTS);
        PLAYER(SPECIES_RAICHU);
        OPPONENT(SPECIES_REGICE);
    } WHEN {
        TURN { MOVE(player, MOVE_SEED_FLARE, WITH_RNG(RNG_SECONDARY_EFFECT, FALSE)); }
        TURN { MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN { SWITCH(player, 1); }
        TURN { }
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SEED_FLARE, player);
        HP_BAR(opponent, captureDamage: &seedFlareDmg);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FUTURE_SIGHT, player);
        HP_BAR(opponent, captureDamage: &futureSightDmg);
    } THEN {
        EXPECT_MUL_EQ(seedFlareDmg, Q_4_12(1.5), futureSightDmg);
    }
}

SINGLE_BATTLE_TEST("Future Sight is affected by type effectiveness")
{
    GIVEN {
        PLAYER(SPECIES_PIKACHU);
        PLAYER(SPECIES_RAICHU);
        OPPONENT(SPECIES_HOUNDOOM);
    } WHEN {
        TURN { MOVE(player, MOVE_SEED_FLARE, WITH_RNG(RNG_SECONDARY_EFFECT, FALSE)); }
        TURN { MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN { SWITCH(player, 1); }
        TURN { }
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SEED_FLARE, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FUTURE_SIGHT, player);
        MESSAGE("The opposing Houndoom took the Future Sight attack!");
        MESSAGE("It doesn't affect the opposing Houndoom…");
        NOT HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Future Sight will miss timing if target faints before it is about to get hit")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 1); }
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FUTURE_SIGHT, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEMENTO, opponent);
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("2 sent out Wynaut!");
        NOT MESSAGE("The opposing Wynaut took the Future Sight attack!");
    }
}

SINGLE_BATTLE_TEST("Future Sight will miss timing if target faints by residual damage")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(10); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_WRAP); SEND_OUT(opponent, 1); }
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FUTURE_SIGHT, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WRAP, player);
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("2 sent out Wynaut!");
        NOT MESSAGE("The opposing Wynaut took the Future Sight attack!");
    }
}

SINGLE_BATTLE_TEST("Future Sight breaks Focus Sash and doesn't make the holder endure another move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PSYCHIC].power > 0);
        ASSUME(gItemsInfo[ITEM_FOCUS_SASH].holdEffect == HOLD_EFFECT_FOCUS_SASH);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIDGEY) { Level(1); Item(ITEM_FOCUS_SASH); }
    } WHEN {
        TURN { MOVE(player, MOVE_FUTURE_SIGHT); }
        TURN { }
        TURN { }
        TURN { MOVE(player, MOVE_PSYCHIC); }
    } SCENE {
        MESSAGE("The opposing Pidgey hung on using its Focus Sash!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHIC, player);
        MESSAGE("The opposing Pidgey fainted!");
    }
}
