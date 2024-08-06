AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
	lock
	faceplayer
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	checkitem ITEM_SCANNER
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
	.string "Estoy investigando este barco\n"
	.string "en nombre del CAP. BABOR.\p"
	.string "También me ha pedido que encuentre\n"
	.string "un ESCÁNER, pero no lo he visto aún…$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
	.string "¡Ahí va! ¡Eso es un ESCÁNER!\p"
	.string "Escucha, ¿puedes llevárselo\n"
	.string "tú al CAP. BABOR?\p"
	.string "Todavía no he terminado\n"
	.string "de investigar el barco…$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
	.string "Este barco se llama S.S. CACTUS.\n"
	.string "Es más antiguo que andar “palante”…$"

