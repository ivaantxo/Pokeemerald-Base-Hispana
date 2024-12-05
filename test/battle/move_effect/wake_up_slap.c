#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_WAKE_UP_SLAP, MOVE_EFFECT_REMOVE_STATUS) == TRUE);
    ASSUME(gMovesInfo[MOVE_WAKE_UP_SLAP].argument == STATUS1_SLEEP);
}

SINGLE_BATTLE_TEST("Wake-Up Slap does not cure paralyzed pokemons behind substitutes or get increased power")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INNER_FOCUS; }
    PARAMETRIZE { ability = ABILITY_INFILTRATOR; }
    GIVEN {
        PLAYER(SPECIES_CROBAT) { Ability(ability); }
        OPPONENT(SPECIES_SEISMITOAD);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_SING); }
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_WAKE_UP_SLAP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WAKE_UP_SLAP, player);
        if (ability == ABILITY_INNER_FOCUS) {
            MESSAGE("The substitute took damage for the opposing Seismitoad!");
            NONE_OF
            {
                MESSAGE("The opposing Seismitoad's substitute faded!"); // Smelling Salts does 86 damage, the sub has 122 HP, if hitting a sub it shouldn't get boosted damage.
                MESSAGE("The opposing Seismitoad woke up!");
                STATUS_ICON(opponent, none: TRUE);
            }
        } else {
            MESSAGE("The opposing Seismitoad woke up!");
            STATUS_ICON(opponent, none: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Wake-Up Slap gets increased power against sleeping targets")
{
    u32 status1;
    PARAMETRIZE { status1 = STATUS1_SLEEP; }
    PARAMETRIZE { status1 = STATUS1_NONE; }
    GIVEN {
        PLAYER(SPECIES_CROBAT);
        OPPONENT(SPECIES_LOTAD) { Status1(status1); }
    } WHEN {
        TURN { MOVE(player, MOVE_WAKE_UP_SLAP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WAKE_UP_SLAP, player);
        if (status1 == STATUS1_SLEEP) {
            MESSAGE("The opposing Lotad fainted!");
        } else {
            NOT MESSAGE("The opposing Lotad fainted!");
            MESSAGE("The opposing Lotad used Celebrate!");
        }
    }
}
