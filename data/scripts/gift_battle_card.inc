MysteryGiftScript_BattleCard::
	setvaddress MysteryGiftScript_BattleCard
	vgoto_if_set FLAG_MYSTERY_GIFT_DONE, MysteryGiftScript_BattleCardInfo
	setorcopyvar VAR_RESULT, GET_CARD_BATTLES_WON
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	vgoto_if_ne VAR_0x8008, REQUIRED_CARD_BATTLES, MysteryGiftScript_BattleCardInfo
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard_WonPrize
	waitmessage
	waitbuttonpress
	giveitem ITEM_POTION
	release
	setflag FLAG_MYSTERY_GIFT_DONE
	end

MysteryGiftScript_BattleCardInfo:
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftBattleCountCard:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Tu TARJETA de RECUENTO de\n"
	.string "COMBATES te muestra los récords\p"
	.string "de los combates mantenidos con\n"
	.string "ENTRENADORES que tienen la\l"
	.string "misma TARJETA.\p"
	.string "Busca ENTRENADORES que\n"
	.string "tengan la misma TARJETA que tú.\p"
	.string "Cuando leas las NOTICIAS,\n"
	.string "podrás ver las clasificaciones.\p"
	.string "¡No te lo pierdas!$"

sText_MysteryGiftBattleCountCard_WonPrize:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "¡Enhorabuena!\p"
	.string "¡Has ganado un premio por vencer\n"
	.string "a tu rival en tres combates!\p"
	.string "¡Esperamos que sigas luchando!$"
