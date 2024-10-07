DewfordTown_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
	.byte 0

DewfordTown_Gym_OnTransition:
	call DewfordTown_Gym_EventScript_SetFlashLevel
	end

DewfordTown_Gym_EventScript_SetFlashLevel::
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
	goto DewfordTown_Gym_EventScript_SetFlashLevel1

DewfordTown_Gym_EventScript_SetLightsOn::
	setflashlevel 0
	return

@ Brightest
DewfordTown_Gym_EventScript_SetFlashLevel1::
	setflashlevel 1
	return

DewfordTown_Gym_EventScript_SetFlashLevel2::
	setflashlevel 2
	return

DewfordTown_Gym_EventScript_SetFlashLevel3::
	setflashlevel 3
	return

DewfordTown_Gym_EventScript_SetFlashLevel4::
	setflashlevel 4
	return

DewfordTown_Gym_EventScript_SetFlashLevel5::
	setflashlevel 5
	return

DewfordTown_Gym_EventScript_SetFlashLevel6::
	setflashlevel 6
	return

@ Darkest
DewfordTown_Gym_EventScript_SetFlashLevel7::
	setflashlevel 7
	return

DewfordTown_Gym_EventScript_BrightenRoom::
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	nop1
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers

DewfordTown_Gym_EventScript_NoLightChange::
	return

@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
	playse SE_SWITCH
	animateflash 6
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
	playse SE_SWITCH
	animateflash 5
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
	playse SE_SWITCH
	animateflash 4
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
	playse SE_SWITCH
	animateflash 3
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
	playse SE_SWITCH
	animateflash 2
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
	playse SE_SWITCH
	animateflash 1
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
	playse SE_SWITCH
	animateflash 0
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckJocelyn::
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLaura::
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckBrenden::
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckCristian::
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLilith::
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_StopCountingTrainers::
	return

DewfordTown_Gym_EventScript_Brawly::
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated::
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	call DewfordTown_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release
	end

DewfordTown_Gym_EventScript_GiveBulkUp::
	giveitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_BULK_UP
	return

DewfordTown_Gym_EventScript_GiveBulkUp2:
	giveitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_BULK_UP
	release
	end

DewfordTown_Gym_EventScript_BrawlyRematch::
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_TakaoBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_JocelynBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LauraBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_BrendenBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_CristianBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LilithBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
	.string "¿Camino del CAMPEONATO?\p"
	.string "MARCIAL, el LÍDER del GIMNASIO\n"
	.string "de AZULIZA, usa POKéMON de tipo\l"
	.string "LUCHA.\p"
	.string "¡Si lo desafías con POKéMON de tipo\n"
	.string "NORMAL, acabarás mal!\p"
	.string "Los POKéMON de tipo LUCHA pueden\n"
	.string "acabar con los POKéMON de tipo NORMAL\l"
	.string "en un santiamén, así que ten cuidado…\p"
	.string "Y lo que es aún peor: el GIMNASIO\n"
	.string "está oscuro como boca de lobo.\p"
	.string "Pero se irá iluminando a medida\n"
	.string "que derrotes a los ENTRENADORES\l"
	.string "que te encuentres en tu camino.\p"
	.string "Bueno, ¡ve a por él!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "¡Guau! ¡Ahora sí que hay luz\n"
	.string "para dar y tomar!\p"
	.string "¡Y tu futuro también parece brillante!$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "¡Querer es poder!\n"
	.string "¡Quiero derrotarte!$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "Tendría que haberlo querido más…$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "Tu ingenio supera mi fuerza bruta.\n"
	.string "¡Tu técnica es insuperable!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "No es necesario molestar a MARCIAL…\p"
	.string "¡Te voy a aplastar!$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "Pero… ¿cómo?\n"
	.string "¿Cómo he podido perder tan rápido?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "No me voy a hundir por esto…\n"
	.string "¡Me motiva para seguir entrenando!\p"
	.string "Un día seré LÍDER de GIMNASIO…\p"
	.string "No, ¡seré CAMPEONA de la LIGA\n"
	.string "POKéMON!$"

DewfordTown_Gym_Text_LauraIntro:
	.string "¡No me lleves la contraria!\n"
	.string "¡Vas a perder porque lo digo yo!$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "¡Buaaaaaa!\n"
	.string "¡No es justooo!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "Lucho en la oscuridad para quitarme\n"
	.string "todos los miedos.\p"
	.string "Pero, al estar tan oscuro, nunca he\n"
	.string "podido ver la cara de MARCIAL…$"

DewfordTown_Gym_Text_LilithIntro:
	.string "¡Uaka!…\n"
	.string "¿Dando tumbos en la oscuridad?$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Bah…\n"
	.string "¡No quiero ni saber tu nombre!$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "¡Mereces perderte y acabar otra vez\n"
	.string "en la entrada!$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "¡Vas a ver las agallas\n"
	.string "que tiene un lobo de mar!$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "Pero ¿cómo ha pasado?\n"
	.string "¡Yo nunca pierdo de esta manera!$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "¡Por todos los mares! ¡Mereces conocer\n"
	.string "a nuestro LIDER de GIMNASIO!$"

DewfordTown_Gym_Text_CristianIntro:
	.string "¡Si quieres pasar, tendrás que hacerlo\n"
	.string "por encima de mí!$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "¡Grrrrr!\n"
	.string "¡Una derrota humillante!$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "¡Me has ganado a mí!\n"
	.string "¡A por la MEDALLA!$"

DewfordTown_Gym_Text_BrawlyIntro:
	.string "¡Soy MARCIAL!\n"
	.string "¡El LÍDER del GIMNASIO de AZULIZA!\p"
	.string "He templado mi carácter entre las\n"
	.string "fieras olas de este lugar y me he\l"
	.string "endurecido en esta oscura cueva.\p"
	.string "¿Quieres desafiarme?\n"
	.string "Vamos a ver de qué eres capaz…$"

DewfordTown_Gym_Text_BrawlyDefeat:
	.string "¡Guau y doble guau! ¡Eres peor que\n"
	.string "un maremoto! No lo esperaba…\p"
	.string "¡Estoy hundido en la miseria!\p"
	.string "De acuerdo. Te la has ganado.\n"
	.string "¡Toma esta MEDALLA de GIMNASIO!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
	.string "{PLAYER} recibió la MEDALLA PUÑO\n"
	.string "de MARCIAL.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "Con la MEDALLA PUÑO te obedecerán\n"
	.string "todos los POKéMON hasta el nivel 30,\l"
	.string "incluso los que has intercambiado.\p"
	.string "Y además podrás usar el movimiento de\n"
	.string "la MO DESTELLO fuera de los combates.\p"
	.string "Si quieres, puedes usar también esta\n"
	.string "MÁQUINA TÉCNICA.$"

DewfordTown_Gym_Text_ExplainBulkUp:
	.string "La MT08 contiene CORPULENCIA.\p"
	.string "Es un movimiento que aumenta\n"
	.string "las habilidades de ATAQUE y DEFENSA.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly:
	.string "Acabas de registrar a MARCIAL,\n"
	.string "el LÍDER de GIMNASIO, en el POKéNAV.$"

DewfordTown_Gym_Text_BrawlyPostBattle:
	.string "¡Puedo ver que tu talento crecerá\n"
	.string "tanto que dejarás atónitos a todos\l"
	.string "los ENTRENADORES de HOENN!$"

DewfordTown_Gym_Text_GymStatue:
	.string "GIMNASIO POKéMON de PUEBLO AZULIZA$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "GIMNASIO POKéMON de PUEBLO AZULIZA\p"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch:
	.string "MARCIAL: Una ola puede retroceder,\n"
	.string "pero siempre acaba en la orilla.\p"
	.string "Una enorme ola de talento como tú…,\n"
	.string "¡sabía que no tardaría en volver!\p"
	.string "¡Muéstrame lo grande que te has hecho!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat:
	.string "¡Guau!\n"
	.string "¡Otra vez me has llevado por delante!$"

DewfordTown_Gym_Text_BrawlyPostRematch:
	.string "MARCIAL: Combatir es algo muy profundo.\n"
	.string "Nunca acabas de llegar al fondo.\l"
	.string "¡Igual que el mar de HOENN!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
	.string "MARCIAL: Una ola puede retroceder,\n"
	.string "pero siempre acaba en la orilla.\p"
	.string "Una enorme ola de talento como tú…,\n"
	.string "¡sabía que no tardaría en volver!\p"
	.string "¡Vaya, sólo tienes un POKéMON\n"
	.string "disponible para luchar!\p"
	.string "Lo siento, pero tendrás que volver con\n"
	.string "al menos dos si quieres combatir.$"
