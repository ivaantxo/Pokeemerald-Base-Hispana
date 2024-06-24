SootopolisCity_House4_MapScripts::
	.byte 0

SootopolisCity_House4_EventScript_Man::
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_Woman::
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House4_Text_AncientTreasuresWaitingInSea:
	.string "Escúchame bien si quieres aprender\n"
	.string "algo muy interesante.\p"
	.string "Dicen que hay unas antiguas ruinas\n"
	.string "cerca de aquí, en el mar.\p"
	.string "Es posible que alberguen tesoros\n"
	.string "que sólo esperan a ser descubiertos.$"

SootopolisCity_House4_Text_StrollUnderwaterWithPokemon:
	.string "Fabulosos tesoros submarinos…\p"
	.string "Qué bonito sería que existieran\n"
	.string "de verdad, pero, aunque no fuera así,\l"
	.string "me gustaría poder dar un paseo bajo\l"
	.string "el agua en compañía de mi POKéMON.$"

SootopolisCity_House4_Text_Azumarill:
	.string "AZUMARILL: ¡Mariiiii!$"

