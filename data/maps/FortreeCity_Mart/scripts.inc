FortreeCity_Mart_MapScripts::
	.byte 0

FortreeCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FortreeCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FortreeCity_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_WOOD_MAIL
	pokemartlistend

FortreeCity_Mart_EventScript_Woman::
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Girl::
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Boy::
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
	end

FortreeCity_Mart_Text_SuperRepelBetter:
	.string "Un SUPERREPEL dura mucho tiempo\n"
	.string "y es de lo más práctico.\p"
	.string "Es muchísimo mejor que el REPELENTE\n"
	.string "normal.$"

FortreeCity_Mart_Text_StockUpOnItems:
	.string "Siempre guardo más objetos\n"
	.string "de los que voy a usar jamás.\p"
	.string "Nunca sabes lo que puede pasar.\n"
	.string "¡Más vale prevenir…!$"

FortreeCity_Mart_Text_RareCandyMakesMonGrow:
	.string "Un CARAMELORARO hace que tu\n"
	.string "POKéMON crezca un nivel de golpe.$"

