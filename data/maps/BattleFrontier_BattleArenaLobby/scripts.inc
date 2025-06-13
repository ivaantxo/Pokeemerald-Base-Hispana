BattleFrontier_BattleArenaLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
	.byte 0

BattleFrontier_BattleArenaLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleArenaLobby_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
	lockall
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
	closemessage
	arena_set ARENA_DATA_WIN_STREAK, 0
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints

BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
	waitmessage
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
	lockall
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
	waitmessage
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
	frontier_checkairshow
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	arena_save 0
	playse SE_SAVE
	waitse
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge

BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
	return

BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
	lockall
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
	waitmessage
	arena_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge

BattleFrontier_BattleArenaLobby_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	special SavePlayerParty
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	arena_init
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
	closemessage
	frontier_get FRONTIER_DATA_LVL_MODE
	call_if_eq VAR_RESULT, FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
	call_if_eq VAR_RESULT, FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge

BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
	release
	end

BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
	waitmovement 0
	opendoor 2, 2
	waitdooranim
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 2, 2
	waitdooranim
	return

BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
	waitmovement 0
	opendoor 11, 2
	waitdooranim
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 11, 2
	waitdooranim
	return

BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
	lockall
	frontier_results FRONTIER_FACILITY_ARENA
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_Youngster::
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Man::
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Camper::
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Woman::
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
	end

BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_MindRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
	releaseall
	end

BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena:
	.string "¡Aquí ponemos a prueba el coraje\n"
	.string "de los ENTRENADORES!\p"
	.string "¡Te doy la bienvenida al DOJO BATALLA!\p"
	.string "¡Soy el guía del TORNEO con JUEZ!$"

BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge:
	.string "¿Aceptas el desafío del DOJO BATALLA?$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge:
	.string "Espero que vuelvas pronto por aquí.$"

BattleFrontier_BattleArenaLobby_Text_ExplainChallenge:
	.string "En el DOJO BATALLA, se disputan\n"
	.string "TORNEOS con JUEZ.\p"
	.string "Cada ENTRENADOR participa\n"
	.string "con un equipo de tres POKéMON.\p"
	.string "Primero, debes elegir los tres POKéMON\n"
	.string "en el orden en que deseas que combatan.\p"
	.string "Durante el combate, los POKéMON\n"
	.string "aparecerán uno a uno en ese orden.\p"
	.string "Una vez entre un POKéMON en combate,\n"
	.string "deberá seguir hasta que concluya.\p"
	.string "Pero si no hay ganador al cabo\n"
	.string "de tres rondas, el juez decidirá.\p"
	.string "Si quieres interrumpir el torneo,\n"
	.string "no olvides guardar antes la partida.\p"
	.string "Si no la guardas, se te descalificará.\p"
	.string "Si logras vencer a siete ENTRENADORES\n"
	.string "seguidos, ganarás PUNTOS de BATALLA.$"

BattleFrontier_BattleArenaLobby_Text_OkayToSave:
	.string "Antes de entrar en el DOJO BATALLA,\n"
	.string "debes guardar la partida. ¿De acuerdo?$"

BattleFrontier_BattleArenaLobby_Text_WhichLevelMode:
	.string "En DOJO BATALLA hay dos categorías:\n"
	.string "nivel 50 y nivel libre. ¿Cuál prefieres?$"

BattleFrontier_BattleArenaLobby_Text_SelectThreeMons:
	.string "Selecciona los tres POKéMON\n"
	.string "con los que quieres combatir.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen:
	.string "Qué lástima…\p"
	.string "No tienes tres POKéMON que puedan\n"
	.string "participar en este desafío.\p"
	.string "Necesitas tres POKéMON diferentes\n"
	.string "para poder participar.\p"
	.string "Además, deben sostener distintos\n"
	.string "tipos de objeto.\p"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
	.string "Vuelve cuando cumplas las condiciones\n"
	.string "para aceptar el desafío.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50:
	.string "Qué lástima…\p"
	.string "No tienes tres POKéMON que puedan\n"
	.string "participar en este desafío.\p"
	.string "Necesitas tres POKéMON diferentes\n"
	.string "de nivel 50 o inferior.\p"
	.string "Además, deben sostener distintos\n"
	.string "tipos de objeto.\p"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
	.string "Vuelve cuando cumplas las condiciones\n"
	.string "para aceptar el desafío.$"

BattleFrontier_BattleArenaLobby_Text_GuideYouToArena:
	.string "Ahora te guiaré hasta el DOJO BATALLA.$"

BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown:
	.string "Qué lástima…\p"
	.string "Me temo que no guardaste la partida\n"
	.string "antes de abandonar el desafío…\p"
	.string "Eso supone la descalificación\n"
	.string "automática…\p"
	.string "No obstante, puedes volver\n"
	.string "a participar cuando quieras.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins:
	.string "¡Enhorabuena por tu extraordinaria\n"
	.string "serie de siete victorias consecutivas!$"

BattleFrontier_BattleArenaLobby_Text_RecordAchievement:
	.string "Vamos a guardar tu récord.\n"
	.string "Espera unos instantes.$"

@ Unused
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize:
	.string "In commemoration of your 7-win streak,\n"
	.string "we present you with this prize.$"

@ Unused
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

@ Unused
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize:
	.string "Oh?\n"
	.string "Your BAG seems to be full.\p"
	.string "I urge you to clear space and\n"
	.string "return for your prize.$"

BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave:
	.string "¡Gracias por participar!\p"
	.string "Vamos a guardar tu récord.\n"
	.string "Espera unos instantes.$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2:
	.string "Esperamos que vuelvas\n"
	.string "pronto por aquí.$"

BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame:
	.string "Es un placer tenerte de nuevo por aquí.\p"
	.string "Antes de conducirte al DOJO BATALLA,\n"
	.string "debo guardar tu partida. Un segundo.$"

BattleFrontier_BattleArenaLobby_Text_RecordLastMatch:
	.string "¿Quieres que tu último combate\n"
	.string "en el DOJO BATALLA sea grabado\l"
	.string "en tu PASE del FRENTE?$"

BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack:
	.string "He perdido por decisión del JUEZ…\p"
	.string "Creo que hice mal en usar tantos\n"
	.string "movimientos defensivos y no atacar…$"

BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked:
	.string "¡El JUEZ me ha dado la victoria!\p"
	.string "¡Mi táctica de atacar sin cesar\n"
	.string "al POKéMON del rival ha funcionado!$"

BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw:
	.string "Hemos empatado.\p"
	.string "Cuando se acabó el tiempo, tanto mi\n"
	.string "POKéMON como el de mi rival tenían\l"
	.string "el mismo número de PS.$"

BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant:
	.string "En el DOJO BATALLA, el orden\n"
	.string "de los POKéMON es algo clave.\p"
	.string "Por ejemplo, si tu primer POKéMON\n"
	.string "tiene ciertas deficiencias, trata de\l"
	.string "compensarlo poniendo de segundo\l"
	.string "POKéMON a uno cuyos movimientos\l"
	.string "sean muy eficaces contra el primero.\p"
	.string "Creo que ésa es la estrategia adecuada\n"
	.string "para formar un buen equipo.$"

BattleFrontier_BattleArenaLobby_Text_RulesAreListed:
	.string "Son las reglas del TORNEO con JUEZ.$"

BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading:
	.string "¿Qué capítulo quieres leer?$"

BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules:
	.string "Las reglas del TORNEO con JUEZ difieren\n"
	.string "de las que rigen los combates normales.\p"
	.string "Primero, los combates\n"
	.string "sólo duran tres turnos.\p"
	.string "Si al cabo de los tres turnos no hay\n"
	.string "un ganador, lo decidirá el JUEZ.\p"
	.string "El JUEZ elegirá al ganador basándose\n"
	.string "en cómo han luchado los POKéMON.\p"
	.string "Además, no podrá cambiarse de POKéMON\n"
	.string "hasta que el combate esté decidido.$"

BattleFrontier_BattleArenaLobby_Text_ExplainMindRules:
	.string "El primer factor que se juzga\n"
	.string "es la MENTE.\p"
	.string "Con este factor, el JUEZ evalúa\n"
	.string "la capacidad agresiva de los rivales.\p"
	.string "Para ello, el JUEZ se basa en el número\n"
	.string "de veces que los ENTRENADORES\l"
	.string "han ordenado movimientos ofensivos.$"

BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules:
	.string "El segundo factor que se juzga\n"
	.string "es la HABILIDAD.\p"
	.string "Se trata de evaluar la eficacia de los\n"
	.string "movimientos usados por los POKéMON.\p"
	.string "Si un movimiento funcionó,\n"
	.string "sube la nota en habilidad.\p"
	.string "Si un movimiento no funcionó,\n"
	.string "baja la nota en habilidad.\p"
	.string "En movimientos ofensivos, la nota sube\n"
	.string "si resulta “muy eficaz” y baja cuando\l"
	.string "“no es muy eficaz”.\p"
	.string "La nota en habilidad no sube cuando\n"
	.string "se usan movimientos como PROTECCIÓN\l"
	.string "y DETECCIÓN.\p"
	.string "Si el rival usa PROTECCIÓN o DETECCIÓN\n"
	.string "y el movimiento de tu POKéMON falla,\l"
	.string "la nota en habilidad no baja.$"

BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules:
	.string "El tercer factor que se juzga\n"
	.string "es el CUERPO.\p"
	.string "La nota se basa en el número de PS\n"
	.string "que se conservan al final del combate.\p"
	.string "La nota tiene también en cuenta\n"
	.string "cuántos PS tenía cada POKéMON\l"
	.string "al comienzo del combate.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon:
	.string "¡7 victorias sobre 7 ENTRENADORES\n"
	.string "venciendo a la MAESTRA del DOJO!\p"
	.string "¡Debemos felicitarte todos\n"
	.string "por semejante proeza!$"

BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints:
	.string "En reconocimiento a ese infatigable\n"
	.string "espíritu tuyo, por favor, acepta un\l"
	.string "modesto premio en PUNTOS de BATALLA.$"
