MysteryGiftScript_VisitingTrainer::
	setvaddress MysteryGiftScript_VisitingTrainer
	special ValidateEReaderTrainer
	vgoto_if_eq VAR_RESULT, 0, MysteryGiftScript_VisitingTrainerArrived
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerInstructions
	waitmessage
	waitbuttonpress
	release
	end

MysteryGiftScript_VisitingTrainerArrived:
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerArrived
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftVisitingTrainerInstructions:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Al llevar la TARJETA MISTERIOSA,\n"
	.string "podrás participar en una encuesta\l"
	.string "en la TIENDA POKéMON.\p"
	.string "Aprovecha las encuestas para\n"
	.string "invitar a ENTRENADORES\l"
	.string "a ARRECÍPOLIS.\p"
	.string "Voy a darte una contraseña secreta\n"
	.string "para la encuesta:\p"
	.string "“QUIERO ENTRENADORES\n"
	.string "MUY FUERTES”\p"
	.string "Escríbela en un cuestionario y\n"
	.string "envíala al sistema de comunicación\l"
	.string "inalámbrica.$"

sText_MysteryGiftVisitingTrainerArrived:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Ha llegado un ENTRENADOR\n"
	.string "a ARRECÍPOLIS y te está buscando.\p"
	.string "Esperamos que disfrutes del\n"
	.string "combate con el ENTRENADOR.\p"
	.string "Si quieres, puedes invitar a más\n"
	.string "ENTRENADORES usando otras\l"
	.string "contraseñas.\p"
	.string "Busca otras contraseñas\n"
	.string "que vayan bien.$"
