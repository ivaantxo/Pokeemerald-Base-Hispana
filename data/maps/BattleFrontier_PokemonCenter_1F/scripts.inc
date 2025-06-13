BattleFrontier_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

BattleFrontier_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST
	end

BattleFrontier_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_FRONTIER_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Man::
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Picnicker::
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge, MSGBOX_NPC
	end

BattleFrontier_PokemonCenter_1F_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon:
	.string "¡Antes ha estado aquí alguien con un \n"
	.string "POKéMON que no había visto nunca!\p"
	.string "Por lo menos nadie me habló de él\n"
	.string "en la ESCUELA de ENTRENADORES.\p"
	.string "Ya me gustaría saber dónde se pueden\n"
	.string "pillar POKéMON como ése…$"

BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena:
	.string "¡Vale! Próxima parada, ¡el DOJO BATALLA!\n"
	.string "Será mejor que escoja bien los POKéMON\l"
	.string "del Sistema de Almacenamiento del PC.$"

BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge:
	.string "¡Ji, ji!… ¡Voy a ganar un combate\n"
	.string "detrás de otro con este pequeñín!$"

BattleFrontier_PokemonCenter_1F_Text_Skitty:
	.string "SKITTY: ¡Skimiau!$"

