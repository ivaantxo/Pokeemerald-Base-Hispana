BattleFrontier_BattleFactoryLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
	.byte 0

BattleFrontier_BattleFactoryLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleFactoryLobby_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
	lockall
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
	closemessage
	factory_setswapped
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
	factory_set FACTORY_DATA_WIN_STREAK, 0
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
	waitmessage
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints

BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
	waitmessage
BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
	waitmessage
	frontier_checkairshow
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
	factory_save 0
	playse SE_SAVE
	waitse
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
	end

BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
	lockall
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
	waitmessage
	frontier_checkairshow
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
	factory_save 0
	playse SE_SAVE
	waitse

BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle

BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
	lockall
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
	waitmessage
	factory_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	setvar VAR_0x8006, 2
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge

BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end

BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end

BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
	special SavePlayerParty
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
	case YES, BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge

BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	factory_init
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
	setvar VAR_0x8006, 0
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
	special SavePlayerParty
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor
	waitmovement 0
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_SINGLES
	return

BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_DOUBLES
	return

BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge

BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge

BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor:
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
	return

BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
	lockall
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
	lockall
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_Woman::
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
	end

BattleFrontier_BattleFactoryLobby_EventScript_Camper::
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
	end

BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
	lock
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
	case 3, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
	case 4, BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
	case 5, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
	releaseall
	end

BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle:
	.string "¡Aquí ponemos a prueba el saber\n"
	.string "de los ENTRENADORES!\p"
	.string "¡Te doy la más calurosa bienvenida\n"
	.string "a la FÁBRICA BATALLA!\p"
	.string "Yo soy el guía del TORNEO de COMBATES\n"
	.string "con TRUEQUE INDIVIDUALES.$"

BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge:
	.string "¿Participas en el TORNEO de COMBATES\n"
	.string "con TRUEQUE INDIVIDUALES?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge:
	.string "En el TORNEO de COMBATES con TRUEQUE\n"
	.string "INDIVIDUALES se disputan COMBATES\l"
	.string "con POKéMON prestados.\p"
	.string "Primero, debes elegir los tres POKéMON\n"
	.string "con los que vas a comenzar el torneo.\p"
	.string "Con esos POKéMON prestados, debes\n"
	.string "luchar en el primer COMBATE INDIVIDUAL.\p"
	.string "Si ganas a tu rival, tendrás derecho a\n"
	.string "un trueque: podrás elegir uno de sus\l"
	.string "POKéMON y cambiárselo por uno tuyo.\p"
	.string "Repite este ciclo de combate y trueque\n"
	.string "y, si logras ganar siete veces seguidas,\l"
	.string "conseguirás PUNTOS de BATALLA.\p"
	.string "Si quieres interrumpir el desafío,\n"
	.string "no olvides guardar antes la partida.\p"
	.string "Si no la guardas, se te descalificará.$"

BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit:
	.string "Esperamos que vuelvas\n"
	.string "pronto por aquí.$"

BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode:
	.string "¿En qué nivel deseas participar?\n"
	.string "¿Nivel 50 o nivel libre?$"

BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge:
	.string "Antes de comenzar,\n"
	.string "tengo que guardar la partida, ¿vale?$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping:
	.string "Okay, I will hold your POKéMON for\n"
	.string "safekeeping while you compete.$"

BattleFrontier_BattleFactoryLobby_Text_StepThisWay:
	.string "Pasa por aquí.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults:
	.string "¡Gracias por participar!\p"
	.string "Voy a devolverte tus POKéMON\n"
	.string "a cambio de los que te prestamos.\p"
	.string "Y voy a guardar también tus resultados.\n"
	.string "Un momento, por favor.$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_ReturnMons:
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins:
	.string "¡Bravo! ¡Has ganado siete encuentros\n"
	.string "seguidos de COMBATE con TRUEQUE!$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak:
	.string "In recognition of your 7-win streak,\n"
	.string "we award you these Battle Point(s).$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints:
	.string "Oh, oh, oh!\p"
	.string "Your Battle Points are maxed.\p"
	.string "Please come back after using\n"
	.string "some Battle Points.$"

BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume:
	.string "¡Te estábamos esperando!\p"
	.string "Antes de continuar el desafío,\n"
	.string "debo guardar la partida.$"

BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting:
	.string "Siento decírtelo, pero no guardaste\n"
	.string "la partida la última vez que jugaste.\p"
	.string "Así que se te ha descalificado.\n"
	.string "Lo siento.$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_WellReturnMons:
	.string "We’ll return your personal POKéMON.$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle:
	.string "¡Aquí ponemos a prueba el saber\n"
	.string "de los ENTRENADORES!\p"
	.string "¡Te doy la más calurosa bienvenida\n"
	.string "a la FÁBRICA BATALLA!\p"
	.string "Yo soy el guía del TORNEO de COMBATES\n"
	.string "con TRUEQUE DOBLES.$"

BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge:
	.string "¿Participas en el TORNEO de COMBATES\n"
	.string "con TRUEQUE DOBLES?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge:
	.string "En el TORNEO de COMBATES con TRUEQUE\n"
	.string "DOBLES se disputan COMBATES\l"
	.string "con POKéMON prestados.\p"
	.string "Primero, debes elegir los tres POKéMON\n"
	.string "con los que vas a comenzar el torneo.\p"
	.string "Con esos POKéMON prestados, debes\n"
	.string "luchar en el primer COMBATE DOBLE.\p"
	.string "Si ganas a tu rival, tendrás derecho a\n"
	.string "un trueque: podrás elegir uno de sus\l"
	.string "POKéMON y cambiárselo por uno tuyo.\p"
	.string "Repite este ciclo de combate y trueque\n"
	.string "y, si logras ganar siete veces seguidas,\l"
	.string "conseguirás PUNTOS de BATALLA.\p"
	.string "Si quieres interrumpir el desafío,\n"
	.string "no olvides guardar antes la partida.\p"
	.string "Si no la guardas, se te descalificará.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead:
	.string "¡Enhorabuena por tu victoria sobre\n"
	.string "el JEFE de la FÁBRICA\l"
	.string "y por tus siete triunfos consecutivos!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints:
	.string "Tu enorme saber y la agudeza\n"
	.string "de tu mente merecen ser reconocidos\l"
	.string "con PUNTOS de BATALLA.$"

BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave:
	.string "Voy a cambiar tus POKéMON por\n"
	.string "los POKéMON que te prestamos.\p"
	.string "Y de paso guardaré los resultados.\n"
	.string "Un momento, por favor.$"

BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch:
	.string "¿Quieres que tu último combate\n"
	.string "en la FÁBRICA BATALLA sea grabado\l"
	.string "en tu PASE del FRENTE?$"

BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves:
	.string "¡Hola! \n"
	.string "¿Qué tal?\p"
	.string "Seguro que crees que aquí los combates\n"
	.string "están chupados porque no se necesita\l"
	.string "un equipo experto de POKéMON, ¿verdad?\p"
	.string "Pues yo no estaría tan segura.\p"
	.string "Si no tienes suficientes conocimientos\n"
	.string "sobre los POKéMON y sus movimientos,\l"
	.string "te va a ser difícil ganar.$"

BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon:
	.string "Cambié un POKéMON malo por otro peor.\n"
	.string "¡Creí que era justo el que necesitaba!\p"
	.string "Me han dado una buena tunda…$"

BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons:
	.string "Las cosas no me han ido muy bien,\n"
	.string "que digamos.\p"
	.string "Es importante ver cómo se portan\n"
	.string "los POKéMON de tu rival en combate\l"
	.string "para saber si merecen la pena o no.$"

BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints:
	.string "¿Sabías que los guías que trabajan\n"
	.string "aquí te dan pistas sobre los rivales?\p"
	.string "Pues yo no sé si es cosa mía,\n"
	.string "pero no pillo ni una, oye…$"

@ Unused
BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried:
	.string "Like, I’m really tough, but I get bored\n"
	.string "really easily, so I just kept swapping\l"
	.string "and battling over and over.\p"
	.string "So anyway, when I kept entering\n"
	.string "Battle Swap events, I noticed they\l"
	.string "varied the rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_RulesAreListed:
	.string "Son las reglas del COMBATE con TRUEQUE.$"

BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading:
	.string "¿Qué capítulo quieres leer?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules:
	.string "En los enfrentamientos de COMBATE\n"
	.string "con TRUEQUE, sólo se usan tres POKéMON.\p"
	.string "Al tomar prestados o trocar POKéMON,\n"
	.string "hay que tener en cuenta que el equipo\l"
	.string "no debe tener dos POKéMON iguales.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules:
	.string "Sólo puedes cambiarle un POKéMON\n"
	.string "al ENTRENADOR al que acabas de vencer.\p"
	.string "Y sólo puedes elegir entre los POKéMON\n"
	.string "que haya usado ese ENTRENADOR.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules:
	.string "Después de cada victoria, podrás\n"
	.string "cambiar uno de tus POKéMON por\l"
	.string "uno de los del ENTRENADOR derrotado.\p"
	.string "Con el séptimo ENTRENADOR\n"
	.string "no podrás hacer trueque de POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules:
	.string "A la hora de trocar POKéMON, debes\n"
	.string "tener en cuenta dos cosas.\p"
	.string "Primera: en el momento del trueque,\n"
	.string "no podrás ver las características\l"
	.string "del POKéMON que vas a recibir.\p"
	.string "Segunda: los POKéMON de tu equipo\n"
	.string "se mostrarán siguiendo el orden\l"
	.string "en el que los elegiste.\p"
	.string "Ese orden no se altera aunque\n"
	.string "luego realices trueques.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules:
	.string "En el nivel libre, tanto los POKéMON\n"
	.string "que recibes prestados como los POKéMON\l"
	.string "del rival son todos del nivel 100.$"
