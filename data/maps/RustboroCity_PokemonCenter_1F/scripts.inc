RustboroCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

RustboroCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

RustboroCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_Man::
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Boy::
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Girl::
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
	.string "Mi POKéMON tiene una naturaleza\n"
	.string "INGENUA y el de mi amigo tiene\l"
	.string "una naturaleza ALEGRE.\p"
	.string "¡Es increíble ver cómo cada POKéMON\n"
	.string "tiene una personalidad diferente!$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
	.string "Los POKéMON también pueden ser\n"
	.string "machos o hembras.\p"
	.string "Lo que no está claro es cuál\n"
	.string "es la diferencia entre unos y otros.$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
	.string "¡El hombre de ahí al lado me ha dado\n"
	.string "una MO!\p"
	.string "La he usado para enseñar a mi POKéMON\n"
	.string "a usar CORTE con los árboles.$"

