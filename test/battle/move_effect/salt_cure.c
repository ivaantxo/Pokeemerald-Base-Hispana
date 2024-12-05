#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SALT_CURE].effect == EFFECT_SALT_CURE);
}

SINGLE_BATTLE_TEST("Salt Cure inflicts 1/8 of the target's maximum HP as damage per turn")
{
    u32 j;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SALT_CURE); }
        for (j = 0; j < 3; j++)
            TURN {}
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SALT_CURE, player);
        MESSAGE("The opposing Wobbuffet is being salt cured!");
        for (j = 0; j < 4; j++) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SALT_CURE_DAMAGE, opponent);
            HP_BAR(opponent, damage: maxHP / 8);
            MESSAGE("The opposing Wobbuffet is hurt by Salt Cure!");
        }
    }
}

SINGLE_BATTLE_TEST("Salt Cure inflicts 1/4 to Water/Steel types of their maximum HP as damage per turn")
{
    u32 species;

    PARAMETRIZE { species = SPECIES_LAPRAS; };
    PARAMETRIZE { species = SPECIES_JIRACHI; };

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_SALT_CURE); }
        TURN {}
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SALT_CURE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SALT_CURE_DAMAGE, opponent);
        HP_BAR(opponent, damage: maxHP / 4);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SALT_CURE_DAMAGE, opponent);
        HP_BAR(opponent, damage: maxHP / 4);
    }
}

SINGLE_BATTLE_TEST("Salt Cure is removed when the afflicted Pokémon is switched out")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_SALT_CURE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SALT_CURE, player);
        MESSAGE("The opposing Wobbuffet is being salt cured!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SALT_CURE_DAMAGE, opponent);
        MESSAGE("The opposing Wobbuffet is hurt by Salt Cure!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SALT_CURE_DAMAGE, opponent);
            MESSAGE("The opposing Wobbuffet is hurt by Salt Cure!");
        }
    }
}

SINGLE_BATTLE_TEST("If Salt Cure faints the target no status will be applied")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SALT_CURE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SALT_CURE, player);
        NOT MESSAGE("The opposing Wobbuffet is being salt cured!");
        MESSAGE("The opposing Wobbuffet fainted!");
    }
}

SINGLE_BATTLE_TEST("Salt Cure does not get applied if hitting a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_SALT_CURE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SALT_CURE, player);
        MESSAGE("The substitute took damage for the opposing Wobbuffet!");
        NOT MESSAGE("The opposing Wobbuffet is being salt cured!");
    }
}

SINGLE_BATTLE_TEST("Salt Cure residual damage does not inflict any damage against Magic Guard")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_CLEFABLE) { Ability(ABILITY_MAGIC_GUARD); };
    } WHEN {
        TURN { MOVE(player, MOVE_SALT_CURE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SALT_CURE, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SALT_CURE_DAMAGE, opponent);
            HP_BAR(opponent);
            MESSAGE("The opposing Clefable is hurt by Salt Cure!");
        }
    }
}
