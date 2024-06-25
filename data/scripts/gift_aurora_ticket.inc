MysteryGiftScript_AuroraTicket::
	setvaddress MysteryGiftScript_AuroraTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_AURORA_TICKET, AuroraTicket_Obtained
	vgoto_if_set FLAG_BATTLED_DEOXYS, AuroraTicket_Obtained
	checkitem ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, AuroraTicket_Obtained
	vmessage sText_AuroraTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, AuroraTicket_NoBagSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage sText_AuroraTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_NoBagSpace:
	vmessage sText_AuroraTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_Obtained:
	vmessage sText_AuroraTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_AuroraTicketForYou:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Debes de ser {PLAYER}, ¿no?\p"
	.string "Pues tenemos un ticket para ti.$"

sText_AuroraTicketUseAtPort:
	.string "Parece que puedes usarlo en el\n"
	.string "puerto de CIUDAD CALAGUA.\p"
	.string "¿Por qué no curioseas un poco\n"
	.string "para ver de qué va la cosa?$"

sText_AuroraTicketThankYou:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.$"

sText_AuroraTicketBagFull:
	.string "Lo siento, {PLAYER}. El BOLSILLO\n"
	.string "de los OBJETOS CLAVE está lleno.\p"
	.string "Guarda algo en el PC y vuelve\n"
	.string "más tarde.$"
