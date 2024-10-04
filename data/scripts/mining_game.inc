MiningGame_Event::
	lock
	callnative IsMiningPlaceActive
	compare VAR_RESULT, 1
	goto_if_eq MiningGame_Event_2
	msgbox MiningGame_Text_AquiHasPicadoHacePoco, MSGBOX_DEFAULT
	closemessage
MiningGame_Event_1:
	release
	end

MiningGame_Event_2:
	msgbox MiningGame_Text_QuieresIntentarPicarla, MSGBOX_YESNO
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

MiningGame_Text_QuieresIntentarPicarla:
	.string "Esta pared parece un poco suelta.\n"
	.string "¿Quieres intentar picarla?$"

MiningGame_Text_AquiHasPicadoHacePoco:
	.string "Aquí has picado hace poco.$"
