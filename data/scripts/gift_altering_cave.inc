MysteryGiftScript_AlteringCave::
	setvaddress MysteryGiftScript_AlteringCave
	addvar VAR_ALTERING_CAVE_WILD_SET, 1
	vgoto_if_ne VAR_ALTERING_CAVE_WILD_SET, (NUM_ALTERING_CAVE_TABLES + 1), MysteryGiftScript_AlteringCave_
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
MysteryGiftScript_AlteringCave_:
	lock
	faceplayer
	vmessage sText_MysteryGiftAlteringCave
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftAlteringCave:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Últimamente se ha comentado que\n"
	.string "han aparecido POKéMON raros.\p"
	.string "Dicen que ha sido por la CUEVA\n"
	.string "CAMBIANTE, en la RUTA 103.\p"
	.string "¿Por qué no te pasas por allí\n"
	.string "y ves si los rumores son ciertos?$"
