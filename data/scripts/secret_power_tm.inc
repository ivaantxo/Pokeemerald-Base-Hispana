Route111_Text_MakingRoomUseTMToMakeYourOwn:
	.string "¿Qué es esto?\n"
	.string "¿Qué he hecho?\p"
	.string "¡Anda, qué guay! Me he construido mi\n"
	.string "propio cuartel general aquí gracias a\l"
	.string "un movimiento POKéMON.\p"
	.string "¡Tengo una idea! Te daré esta MT para\n"
	.string "que tú también te construyas el tuyo.$"

Route111_Text_ExplainSecretPower:
	.string "Busca un árbol grande que sea un poco\n"
	.string "más ancho que todos los demás.\p"
	.string "Usa DAÑO SECRETO delante.\n"
	.string "Caerá una liana y podrás\l"
	.string "trepar hasta la copa.\p"
	.string "Tendrás un montón de espacio\n"
	.string "para poner tus cosas.\p"
	.string "Será tu cuartel general…\n"
	.string "¡TU BASE SECRETA!\p"
	.string "Hazte una corriendo…\p"
	.string "Otra cosa: no hace falta hacerse la\n"
	.string "BASE SECRETA en un árbol.\p"
	.string "Usa DAÑO SECRETO en paredes\n"
	.string "rocosas que tengan muescas.\p"
	.string "Yo también voy a buscar lugares\n"
	.string "donde crear mi base. ¡Me piro!$"

Route111_Text_DontWantThis:
	.string "Oh, ¿no lo quieres?\n"
	.string "Bueno, aquí estaré por si cambias\l"
	.string "de idea.$"

Route111_Text_DontHaveAnyRoom:
	.string "Vaya, no tienes sitio para esto.\p"
	.string "Te lo voy a guardar, así que vuelve\n"
	.string "cuando quieras a por él, ¿eh?$"

Route111_EventScript_SecretPowerMan::
	lock
	faceplayer
	msgbox Route111_Text_MakingRoomUseTMToMakeYourOwn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_GiveSecretPower
	msgbox Route111_Text_DontWantThis, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_GiveSecretPower::
	giveitem ITEM_TM_SECRET_POWER
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_NoRoomForSecretPower
	msgbox Route111_Text_ExplainSecretPower, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_SECRET_POWER
	clearflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	call_if_eq VAR_FACING, DIR_WEST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_EAST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_NORTH, Route111_EventScript_SecretPowerManExitNorth
	removeobject VAR_LAST_TALKED
	release
	end

Route111_EventScript_SecretPowerManExit::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExit
	waitmovement 0
	return

Route111_EventScript_SecretPowerManExitNorth::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExitNorth
	waitmovement 0
	return

Route111_EventScript_NoRoomForSecretPower::
	msgbox Route111_Text_DontHaveAnyRoom, MSGBOX_DEFAULT
	release
	end

Route111_Movement_SecretPowerManExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Route111_Movement_SecretPowerManExitNorth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
