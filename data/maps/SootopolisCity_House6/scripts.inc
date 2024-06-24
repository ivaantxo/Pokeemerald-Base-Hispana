SootopolisCity_House6_MapScripts::
	.byte 0

SootopolisCity_House6_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, SootopolisCity_House6_EventScript_ReceivedWailmerDoll
	msgbox SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll, MSGBOX_YESNO
	call_if_eq VAR_RESULT, NO, SootopolisCity_House6_EventScript_DeclineWailmerDoll
	msgbox SootopolisCity_House6_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
	givedecoration DECOR_WAILMER_DOLL
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_House6_EventScript_NoRoomForWailmerDoll
	setflag FLAG_RECEIVED_WAILMER_DOLL
	release
	end

SootopolisCity_House6_EventScript_DeclineWailmerDoll::
	msgbox SootopolisCity_House6_Text_DontWantThisDoll, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_EventScript_ReceivedWailmerDoll::
	msgbox SootopolisCity_House6_Text_LovePlushDolls, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_EventScript_NoRoomForWailmerDoll::
	bufferdecorationname STR_VAR_2, DECOR_WAILMER_DOLL
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	msgbox SootopolisCity_House6_Text_IllHoldItForYou, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll:
	.string "¡Hola! Hacía un siglo que no\n"
	.string "venía ningún cliente…\p"
	.string "Me has alegrado el día, así que quiero\n"
	.string "darte este enorme MUÑECO WAILMER.$"

SootopolisCity_House6_Text_TakeGoodCareOfIt:
	.string "¡Cuídalo mucho!$"

SootopolisCity_House6_Text_IllHoldItForYou:
	.string "Oh, así que sí lo quieres, pero\n"
	.string "no ahora. Entonces te lo guardo.$"

SootopolisCity_House6_Text_DontWantThisDoll:
	.string "¿Seguro que no quieres este MUÑECO?$"

SootopolisCity_House6_Text_LovePlushDolls:
	.string "¡Me encantan los MUÑECOS de peluche!$"

