LavaridgeTown_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
	.byte 0

LavaridgeTown_Gym_1F_OnTransition:
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
	end

@ Unclear where/if these temp vars are getting checked
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
	setvar VAR_TEMP_B, 0
	setvar VAR_TEMP_C, 0
	setvar VAR_TEMP_D, 0
	setvar VAR_TEMP_E, 0
	setvar VAR_TEMP_F, 0
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
	setvar VAR_TEMP_B, 1
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
	setvar VAR_TEMP_C, 1
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
	setvar VAR_TEMP_D, 1
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
	setvar VAR_TEMP_E, 1
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
	return

LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
	return

LavaridgeTown_Gym_1F_EventScript_Flannery::
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
	giveitem ITEM_TM_OVERHEAT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_OVERHEAT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
	giveitem ITEM_TM_OVERHEAT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_OVERHEAT
	return

LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Cole::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_EventScript_CheckTrainerScript::
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	release
	special ShouldTryGetTrainerScript
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
	end

LavaridgeTown_Gym_1F_EventScript_Axle::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Keegan::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Danielle::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Gerald::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jace::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jeff::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JEFF, TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Eli::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
	.string "¿Camino del CAMPEONATO?\p"
	.string "CANDELA, la LÍDER del GIMNASIO\n"
	.string "de LAVACALDA, usa POKéMON\l"
	.string "de tipo FUEGO.\p"
	.string "Su pasión por los POKéMON es más\n"
	.string "ardiente que la lava de un volcán.\p"
	.string "¡No te acerques mucho a ella\n"
	.string "si no quieres salir ardiendo!\p"
	.string "¡Bájale los humos! ¡Ve a por ella!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
	.string "¡Guau! ¡Ha sido un combate al rojo vivo!$"

LavaridgeTown_Gym_1F_Text_ColeIntro:
	.string "¡Jo, jo, jo, jo!\n"
	.string "¡Esto está que arde!$"

LavaridgeTown_Gym_1F_Text_ColeDefeat:
	.string "He acabado chamuscado…$"

LavaridgeTown_Gym_1F_Text_ColePostBattle:
	.string "Si te entierras en arena caliente,\n"
	.string "mejoras la circulación de la sangre.\p"
	.string "También es muy bueno para curar\n"
	.string "el dolor de las articulaciones.$"

LavaridgeTown_Gym_1F_Text_AxleIntro:
	.string "Estoy intentando quitarme el estrés.\n"
	.string "¡Deja de estresarme con tu presencia!$"

LavaridgeTown_Gym_1F_Text_AxleDefeat:
	.string "¡Espero que CANDELA te queme\n"
	.string "bien por los dos lados!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle:
	.string "Aaaah… Oooooh…\p"
	.string "Después de estar enterrado en arena\n"
	.string "caliente un rato, te quedas en la gloria.$"

LavaridgeTown_Gym_B1F_Text_KeeganIntro:
	.string "Todo esto ha debido de cansarte.\n"
	.string "¿Quieres descansar un poco\l"
	.string "en la arena caliente?\p"
	.string "Aunque debes saber que tener\n"
	.string "voluntad y resistencia es vital\l"
	.string "para todo ENTRENADOR.$"

LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
	.string "Si juegas con fuego, te quemas…$"

LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
	.string "Tienes talento… Pero nuestra LÍDER,\n"
	.string "CANDELA, es muy fuerte.\p"
	.string "Si no tienes cuidado, acabarás\n"
	.string "tostándote de lo lindo…$"

LavaridgeTown_Gym_1F_Text_GeraldIntro:
	.string "¿Tus POKéMON soportan temperaturas\n"
	.string "superiores a los 200 ºC?$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat:
	.string "No me he caldeado lo suficiente…$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
	.string "La temperatura del magma\n"
	.string "es de 200 ºC.\p"
	.string "Me has vencido, así que seguro que tus\n"
	.string "POKéMON pueden sobrevivir en el magma.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro:
	.string "Mmmm…\n"
	.string "Bueno, vale, lucharé contigo.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat:
	.string "No esperaba que fueras tan fuerte…$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
	.string "Yo de mayor quiero ser tan fuerte\n"
	.string "y magnífica como CANDELA.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro:
	.string "¡Venga, no perdamos tiempo!\n"
	.string "¡Estas cosas saben mejor en caliente!$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat:
	.string "Me has aguado la fiesta…$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle:
	.string "Dentro de ti arde la llama del valor.\n"
	.string "Quizás puedas vencer a nuestra LÍDER.$"

LavaridgeTown_Gym_B1F_Text_JeffIntro:
	.string "¡Quien juega con fuego\n"
	.string "acaba quemándose!$"

LavaridgeTown_Gym_B1F_Text_JeffDefeat:
	.string "No sé qué, pero me ha fallado algo.$"

LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
	.string "Bueno, ¿y qué? ¡Da igual lo que dijera!\n"
	.string "¡Si quiero, puedo caminar sobre brasas!\p"
	.string "¡Pero ni se te ocurra intentarlo a ti!…$"

LavaridgeTown_Gym_B1F_Text_EliIntro:
	.string "Me gustan todas las montañas,\n"
	.string "pero mi gran amor son los volcanes.$"

LavaridgeTown_Gym_B1F_Text_EliDefeat:
	.string "Vaya, parece que me he despeñado.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle:
	.string "Me voy a quedar aquí porque\n"
	.string "soy un fan perdido de CANDELA.\p"
	.string "¡Je, je, je, je!$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro:
	.string "Hola… No, espera…\p"
	.string "¡Me alegra ver que alguien tan\n"
	.string "enclenque ha llegado tan lejos!\p"
	.string "Me han confiado la tarea…\n"
	.string "No, espera…\p"
	.string "¡Yo soy CANDELA, la LÍDER\n"
	.string "de este GIMNASIO!\p"
	.string "Eh, esto…\n"
	.string "¡No me subestimes porque haga\l"
	.string "poco tiempo que soy LÍDER!\p"
	.string "Gracias a las habilidades heredadas de\n"
	.string "mi abuelo, yo, esto… ¡demostraré que\l"
	.string "nuestra ardiente técnica no tiene par!$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
	.string "Ooooh…\n"
	.string "Creo que no estaba preparada…\p"
	.string "Yo… soy LÍDER de GIMNASIO\n"
	.string "desde hace poco tiempo…\p"
	.string "He intentando llegar muy alto\n"
	.string "demasiado rápido…\p"
	.string "Tengo que hacer las cosas con calma\n"
	.string "o mis POKéMON acabarán confusos…\p"
	.string "Gracias por enseñarme eso.\n"
	.string "A cambio quiero darte algo.$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
	.string "{PLAYER} recibió la MEDALLA CALOR\n"
	.string "de CANDELA.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
	.string "Con la MEDALLA CALOR te obedecerán\n"
	.string "todos los POKéMON hasta el nivel 50,\l"
	.string "incluso los que has intercambiado.\p"
	.string "Y además podrás usar el movimiento\n"
	.string "de la MO FUERZA fuera de los combates.\p"
	.string "Esto otro es una muestra de mi\n"
	.string "aprecio. ¡No lo rechaces!$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat:
	.string "La MT50 contiene SOFOCO.\p"
	.string "Este movimiento inflige un gran\n"
	.string "daño al oponente.\p"
	.string "Pero también baja el AT. ESP.\n"
	.string "del POKéMON que lo use. Puede\l"
	.string "no ser adecuado para combates largos.$"

LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
	.string "Acabas de registrar a CANDELA,\n"
	.string "la LÍDER de GIMNASIO, en el POKéNAV.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
	.string "Tu fuerza me recuerda a alguien…\p"
	.string "¡Ah, ya sé! Luchas como NORMAN,\n"
	.string "el LÍDER del GIMNASIO de PETALIA.$"

LavaridgeTown_Gym_1F_Text_GymStatue:
	.string "GIMNASIO POKéMON de PUEBLO LAVACALDA$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified:
	.string "GIMNASIO POKéMON de PUEBLO LAVACALDA\p"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string "{PLAYER}$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
	.string "CANDELA: ¡Una sola derrota no basta\n"
	.string "para echarme atrás!\p"
	.string "Me encantan los POKéMON.\n"
	.string "Me encanta combatir.\l"
	.string "Y… ¡me encanta este GIMNASIO!\p"
	.string "¡Vamos a hacer otro intercambio\n"
	.string "de movimientos superguays!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
	.string "¡Aaaaah!\n"
	.string "¡A punto estoy de estallar!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
	.string "CANDELA: He perdido el combate,\n"
	.string "pero me siento muy satisfecha.\p"
	.string "No hay mucha gente que ponga\n"
	.string "tanto ardor en el combate como tú.\p"
	.string "¡Tenemos que luchar pronto otra vez!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
	.string "CANDELA: ¡Una sola derrota no basta\n"
	.string "para echarme atrás!\p"
	.string "Me encantan los POKéMON.\n"
	.string "Me encanta combatir.\l"
	.string "Y… ¡me encanta este GIMNASIO!\p"
	.string "¡Vamos a hacer otro intercambio\n"
	.string "de movimientos superguays!\p"
	.string "Pero, espera, ¿sólo tienes un POKéMON\n"
	.string "para combatir?\p"
	.string "Pues lo siento, pero tendrás que volver\n"
	.string "cuando tengas por lo menos dos.$"
