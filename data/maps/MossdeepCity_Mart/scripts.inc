MossdeepCity_Mart_MapScripts::
	.byte 0

MossdeepCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart MossdeepCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
MossdeepCity_Mart_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	pokemartlistend

MossdeepCity_Mart_EventScript_Woman::
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Boy::
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Sailor::
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
	end

MossdeepCity_Mart_Text_ReviveIsFantastic:
	.string "¡REVIVIR es lo mejor!\p"
	.string "Si se lo das a un POKéMON debilitado,\n"
	.string "se recupera y puede luchar de nuevo.\p"
	.string "Pero ten cuidado: REVIVIR no restaura\n"
	.string "los PP usados de cada movimiento.$"

MossdeepCity_Mart_Text_MaxRepelLastsLongest:
	.string "MÁX. REPEL mantiene alejados a todos\n"
	.string "los POKéMON débiles.\p"
	.string "Entre todos los REPELENTES,\n"
	.string "éste es el que dura más tiempo.$"

MossdeepCity_Mart_Text_NetAndDiveBallsRare:
	.string "La MALLA BALL y la BUCEO BALL son\n"
	.string "unas POKé BALLS propias de ALGARIA.\p"
	.string "Una MALLA BALL es eficaz con los\n"
	.string "POKéMON de los tipos BICHO y AGUA.\p"
	.string "Una BUCEO BALL funciona mejor con los\n"
	.string "POKéMON que viven en el fondo del mar.$"

