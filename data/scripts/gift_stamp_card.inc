MysteryGiftScript_StampCard::
	setvaddress MysteryGiftScript_StampCard
	setorcopyvar VAR_RESULT, GET_MAX_STAMPS
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	setorcopyvar VAR_RESULT, GET_NUM_STAMPS
	specialvar VAR_0x8009, GetMysteryGiftCardStat
	subvar VAR_0x8008, VAR_0x8009
	buffernumberstring STR_VAR_1, VAR_0x8008
	lock
	faceplayer
	vmessage sText_MysteryGiftStampCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftStampCard:
	.string "Gracias por usar el sistema\n"
	.string "de SELLOS.\p"
	.string "Para completar la TARJETA\n"
	.string "de SELLOS, te faltan {STR_VAR_1}.$"
