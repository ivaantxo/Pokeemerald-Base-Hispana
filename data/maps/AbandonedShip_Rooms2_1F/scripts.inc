AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0

AbandonedShip_Rooms2_1F_EventScript_Dan::
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_DanRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Kira::
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Jani::
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Garrison::
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_Text_DanIntro:
	.string "FITO: ¡Estábamos buscando tesoros\n"
	.string "y nos encontramos con un combate!$"

AbandonedShip_Rooms2_1F_Text_DanDefeat:
	.string "FITO: A pesar de luchar a dúo,\n"
	.string "hemos perdido…$"

AbandonedShip_Rooms2_1F_Text_DanPostBattle:
	.string "FITO: No encontramos ni una baratija…\n"
	.string "¿Se habrá llevado ya alguien el tesoro?$"

AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
	.string "FITO: Pero si no tienes dos POKéMON…\n"
	.string "Así no ganas ni en sueños…$"

AbandonedShip_Rooms2_1F_Text_KiraIntro:
	.string "LUCI: ¡Anda! Buscábamos tesoros\n"
	.string "y nos encontramos con un combate…$"

AbandonedShip_Rooms2_1F_Text_KiraDefeat:
	.string "LUCI: ¡Guau, qué fuerte eres!$"

AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
	.string "LUCI: Me pregunto dónde habrán\n"
	.string "escondido el tesoro…\p"
	.string "¡Si lo encuentro, ya sé en qué\n"
	.string "me lo voy a gastar!$"

AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
	.string "LUCI: ¿No tienes dos POKéMON?\n"
	.string "¡Pues lo dejamos para otro día!$"

AbandonedShip_Rooms2_1F_Text_KiraRegister:
	.string "LUCI: ¡Ay, me pones de los nervios!\n"
	.string "¡Por eso mismo te voy a registrar!$"

AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
	.string "FITO: Todavía estamos buscando\n"
	.string "tesoros por aquí.\p"
	.string "Entretanto, nuestros POKéMON\n"
	.string "han mejorado. ¿Quieres verlo?$"

AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
	.string "FITO: Nada, sigues siendo tan fuerte\n"
	.string "como siempre.$"

AbandonedShip_Rooms2_1F_Text_DanPostRematch:
	.string "FITO: No encontramos ningún tesoro,\n"
	.string "perdemos en los combates POKéMON…\p"
	.string "Yo me voy a casa… Bueno, quiero irme,\n"
	.string "pero no creo que ella me deje…$"

AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
	.string "FITO: Pero si no tienes dos POKéMON…\n"
	.string "Así no ganas ni en sueños…$"

AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
	.string "LUCI: ¡Hola de nuevo!\p"
	.string "Ya se ve que tú tampoco has dejado\n"
	.string "de buscar el tesoro.\p"
	.string "¿Qué te parece si luchamos\n"
	.string "y quien pierda deja de buscar?$"

AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
	.string "LUCI: Oh, perdimos otra vez…$"

AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
	.string "LUCI: Entrenaremos mejor a nuestros\n"
	.string "POKéMON.\p"
	.string "¡Pero no nos iremos hasta\n"
	.string "encontrar algún tesoro!$"

AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
	.string "LUCI: ¿No tienes dos POKéMON?\n"
	.string "¡Pues lo dejamos para otro día!$"

AbandonedShip_Rooms2_1F_Text_JaniIntro:
	.string "No se me da bien nadar,\n"
	.string "¡pero luchar es otra cosa!$"

AbandonedShip_Rooms2_1F_Text_JaniDefeat:
	.string "Ay, ay, ay…\n"
	.string "Esto no ha salido bien…$"

AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
	.string "Andar descalza por este barco\n"
	.string "no es muy higiénico.$"

AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
	.string "Fuerza y compasión…\n"
	.string "¡Todo ENTRENADOR debe poseer ambas!$"

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
	.string "Hay algo en ti que deslumbra.$"

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
	.string "Por cierto, he visto algo que\n"
	.string "brillaba en uno de los camarotes.$"
