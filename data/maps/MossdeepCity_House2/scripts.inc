MossdeepCity_House2_MapScripts::
	.byte 0

MossdeepCity_House2_EventScript_Man::
	msgbox MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree, MSGBOX_NPC
	end

MossdeepCity_House2_EventScript_Twin::
	msgbox MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth, MSGBOX_NPC
	end

MossdeepCity_House2_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox MossdeepCity_House2_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	setflag FLAG_WINGULL_DELIVERED_MAIL
	clearflag FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_House2_EventScript_WingullExitNorth
	call_if_eq VAR_FACING, DIR_WEST, MossdeepCity_House2_EventScript_WingullExitWest
	removeobject LOCALID_MOSSDEEP_HOUSE_WINGULL
	release
	end

MossdeepCity_House2_EventScript_WingullExitNorth::
	applymovement LOCALID_MOSSDEEP_HOUSE_WINGULL, MossdeepCity_House2_Movement_WingullExitNorth
	waitmovement 0
	return

MossdeepCity_House2_EventScript_WingullExitWest::
	applymovement LOCALID_MOSSDEEP_HOUSE_WINGULL, MossdeepCity_House2_Movement_WingullExitEast
	waitmovement 0
	return

MossdeepCity_House2_Movement_WingullExitNorth:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	delay_8
	step_end

MossdeepCity_House2_Movement_WingullExitEast:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree:
	.string "Mi hermana pequeña se escribe CARTAS\n"
	.string "con su novio, que vive en ARBORADA.\p"
	.string "Yo preferiría poder quedar\n"
	.string "con él en vivo y en directo.$"

MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth:
	.string "No puedo ver a mi novio, porque vive en\n"
	.string "ARBORADA, pero mi POKéMON le lleva\l"
	.string "mis CARTAS allí y me trae las suyas.\p"
	.string "Así podemos seguir en contacto\n"
	.string "a pesar de la distancia.$"

MossdeepCity_House2_Text_Wingull:
	.string "WINGULL: ¡Winguuu!$"

