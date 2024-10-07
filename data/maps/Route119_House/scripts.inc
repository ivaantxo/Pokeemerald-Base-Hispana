Route119_House_MapScripts::
	.byte 0

Route119_House_EventScript_Woman::
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	end

Route119_House_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route119_House_Text_RumorAboutCaveOfOrigin:
	.string "He oído hablar de una cueva llamada\n"
	.string "CUEVA ANCESTRAL.\p"
	.string "Se rumorea que allí resucitan los\n"
	.string "espíritus de los POKéMON que han\l"
	.string "partido. ¿Será verdad…?$"

Route119_House_Text_Wingull:
	.string "WINGULL: ¿Wingulu?$"

