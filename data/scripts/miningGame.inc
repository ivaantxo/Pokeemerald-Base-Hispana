MiningGame_Event::
	lock
	callnative isMiningPlaceActive
	compare VAR_RESULT, 1
	goto_if_eq MiningGame_Event_2
	msgbox MiningGame_Event_Text_1, MSGBOX_DEFAULT
	closemessage
MiningGame_Event_1:
	release
	end

MiningGame_Event_2:
	msgbox MiningGame_Event_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MiningGame_Event_6
MiningGame_Event_5:
	closemessage
	goto MiningGame_Event_1

MiningGame_Event_6:
	callnative DesactiveMiningPlace
	fadescreen FADE_TO_BLACK
	special DoSpecialMiningGame
	goto MiningGame_Event_5


MiningGame_Event_Text_0:
	.string "Esta pared parece que puede picar.\n"
	.string "¿Quieres intentarlo?$"

MiningGame_Event_Text_1:
	.string "Aquí has picado hace poco.$"
