#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_ELECTRIC_TERRAIN].effect == EFFECT_ELECTRIC_TERRAIN);
    ASSUME(gMovesInfo[MOVE_PSYCHIC_TERRAIN].effect == EFFECT_PSYCHIC_TERRAIN);
    ASSUME(gMovesInfo[MOVE_GRASSY_TERRAIN].effect == EFFECT_GRASSY_TERRAIN);
    ASSUME(gMovesInfo[MOVE_MISTY_TERRAIN].effect == EFFECT_MISTY_TERRAIN);
    ASSUME(gMovesInfo[MOVE_STEEL_ROLLER].effect == EFFECT_HIT_SET_REMOVE_TERRAIN);
    ASSUME(gMovesInfo[MOVE_ICE_SPINNER].effect == EFFECT_HIT_SET_REMOVE_TERRAIN);
}

SINGLE_BATTLE_TEST("Steel Roller and Ice Spinner can remove a terrain from the field")
{
    u32 j;
    static const u16 terrainMoves[] =
    {
        MOVE_ELECTRIC_TERRAIN,
        MOVE_PSYCHIC_TERRAIN,
        MOVE_GRASSY_TERRAIN,
        MOVE_MISTY_TERRAIN,
    };

    u16 terrainMove = MOVE_NONE;
    u16 removeTerrainMove = MOVE_NONE;

    for (j = 0; j < ARRAY_COUNT(terrainMoves); j++)
    {
        PARAMETRIZE { removeTerrainMove = MOVE_STEEL_ROLLER; terrainMove = terrainMoves[j]; }
        PARAMETRIZE { removeTerrainMove = MOVE_ICE_SPINNER; terrainMove =  terrainMoves[j]; }
    }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, terrainMove); MOVE(player, removeTerrainMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, terrainMove, opponent);
        ANIMATION(ANIM_TYPE_MOVE, removeTerrainMove, player);
        switch (terrainMove)
        {
        case MOVE_ELECTRIC_TERRAIN:
            MESSAGE("The electricity disappeared from the battlefield.");
            break;
        case MOVE_PSYCHIC_TERRAIN:
            MESSAGE("The weirdness disappeared from the battlefield!");
            break;
        case MOVE_GRASSY_TERRAIN:
            MESSAGE("The grass disappeared from the battlefield.");
            break;
        case MOVE_MISTY_TERRAIN:
            MESSAGE("The mist disappeared from the battlefield.");
            break;
        }
    }
}

SINGLE_BATTLE_TEST("Steel Roller fails if there is no terrain on the field")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_STEEL_ROLLER); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_ROLLER, player);
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Ice Spinner doesn't fail if there is no terrain on the field")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ICE_SPINNER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ICE_SPINNER, player);
        NOT MESSAGE("But it failed!");
    }
}

AI_SINGLE_BATTLE_TEST("Steel Roller will not be chosen by the AI if it might fail")
{
    u32 move;

    PARAMETRIZE { move = MOVE_ELECTRIC_TERRAIN; }
    PARAMETRIZE { move = MOVE_NONE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STEEL_ROLLER, MOVE_ICE_SHARD); }
    } WHEN {
        if (move == MOVE_ELECTRIC_TERRAIN) {
            TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); EXPECT_MOVE(opponent, MOVE_ICE_SHARD); }
            TURN { EXPECT_MOVE(opponent, MOVE_STEEL_ROLLER); }
        } else {
            TURN { EXPECT_MOVE(opponent, MOVE_ICE_SHARD); }
        }
    }
}

AI_SINGLE_BATTLE_TEST("Ice Spinner can be chosen by the AI regardless if there is a terrain or not")
{
    u32 move;

    PARAMETRIZE { move = MOVE_ELECTRIC_TERRAIN; }
    PARAMETRIZE { move = MOVE_NONE; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ICE_SPINNER, MOVE_ICE_SHARD); }
    } WHEN {
        if (move == MOVE_ELECTRIC_TERRAIN) {
            TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); EXPECT_MOVE(opponent, MOVE_ICE_SPINNER); }
            TURN { EXPECT_MOVE(opponent, MOVE_ICE_SPINNER); }
        } else {
            TURN { EXPECT_MOVE(opponent, MOVE_ICE_SPINNER); }
        }
    }
}

SINGLE_BATTLE_TEST("Steel Roller and Ice Spinner reverts typing on Mimicry users")
{
    u32 j;
    static const u16 terrainMoves[] =
    {
        MOVE_ELECTRIC_TERRAIN,
        MOVE_PSYCHIC_TERRAIN,
        MOVE_GRASSY_TERRAIN,
        MOVE_MISTY_TERRAIN,
    };

    u16 terrainMove = MOVE_NONE;
    u16 removeTerrainMove = MOVE_NONE;

    for (j = 0; j < ARRAY_COUNT(terrainMoves); j++)
    {
        PARAMETRIZE { removeTerrainMove = MOVE_STEEL_ROLLER; terrainMove = terrainMoves[j]; }
        PARAMETRIZE { removeTerrainMove = MOVE_ICE_SPINNER; terrainMove =  terrainMoves[j]; }
    }

    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_STUNFISK_GALAR].types[1] == TYPE_STEEL);
        PLAYER(SPECIES_WOBBUFFET); 
        OPPONENT(SPECIES_STUNFISK_GALAR) { Ability(ABILITY_MIMICRY); }
    } WHEN {
        TURN { MOVE(opponent, terrainMove); MOVE(player, removeTerrainMove); }
        TURN { MOVE(player, MOVE_TOXIC); }
    } SCENE {
        MESSAGE("It doesn't affect the opposing Stunfisk…");
    }
}
