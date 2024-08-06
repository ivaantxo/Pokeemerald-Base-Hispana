AbandonedShip_Corridors_1F_MapScripts::
	.byte 0

AbandonedShip_Corridors_1F_EventScript_Youngster::
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end

AbandonedShip_Corridors_1F_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_Text_CharlieIntro:
	.string "¿Qué? ¿Te hace gracia que lleve\n"
	.string "flotador montado en el barco?$"

AbandonedShip_Corridors_1F_Text_CharlieDefeat:
	.string "Vaya, me he quedado desinflado…$"

AbandonedShip_Corridors_1F_Text_CharliePostBattle:
	.string "¡No es fácil lanzar POKé BALLS\n"
	.string "cuando llevas un flotador!$"

AbandonedShip_Corridors_1F_Text_IsntItFunHere:
	.string "¿A que es superdivertido?\n"
	.string "¡Me lo paso pipa aquí!$"
