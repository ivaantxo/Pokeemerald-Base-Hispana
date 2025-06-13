@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_FACTORY_BATTLE_PLAYER).
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_F.
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by factory_setopponentgfx.

BattleFrontier_BattleFactoryBattleRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleFactoryBattleRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryBattleRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryBattleRoom_OnFrame
	.byte 0

BattleFrontier_BattleFactoryBattleRoom_OnTransition:
	frontier_settrainers
	checkplayergender
	call_if_eq VAR_RESULT, MALE, BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale
	call_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale
	frontier_getbrainstatus
	copyvar VAR_TEMP_F, VAR_RESULT
	goto_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj::
	call BattleFrontier_EventScript_SetBrainObjectGfx
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 9
	end

BattleFrontier_BattleFactoryBattleRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects
	.2byte 0

BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects::
	setvar VAR_TEMP_1, 1
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
	goto_if_ne VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects
	hideobjectat LOCALID_FACTORY_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects::
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale::
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale::
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

BattleFrontier_BattleFactoryBattleRoom_OnFrame:
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom
	.2byte 0

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle::
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
	waitmovement 0
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom::
	goto_if_ne VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
	waitmovement 0
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
	factory_setopponentgfx
	removeobject LOCALID_FACTORY_BATTLE_OPPONENT
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 1
	addobject LOCALID_FACTORY_BATTLE_OPPONENT
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter
	waitmovement 0
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent::
	goto_if_ne VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland
	palace_getopponentintro
	lockall
	msgbox gStringVar4, MSGBOX_DEFAULT
	waitmessage
	closemessage
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
	special HealPlayerParty
	setvar VAR_0x8004, SPECIAL_BATTLE_FACTORY
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	switch VAR_RESULT
	case 1, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent::
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
	goto_if_eq VAR_RESULT, MAX_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
	addvar VAR_RESULT, 1
	setorcopyvar VAR_0x8006, VAR_RESULT
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS  @ uses VAR_0x8006 above
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak::
	call BattleFrontier_EventScript_IncrementWinStreak
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum::
	frontier_get FRONTIER_DATA_BATTLE_NUM
	addvar VAR_RESULT, 1
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	switch VAR_RESULT
	case 7, BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
	setvar VAR_0x8006, 1
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 8
	waitstate
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland::
	switch VAR_TEMP_F
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead, MSGBOX_DEFAULT
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver::
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn, MSGBOX_DEFAULT
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver::
	frontier_getsymbols
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
	waitmovement 0
	playfanfare MUS_OBTAIN_SYMBOL
	message BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland

BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold::
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime, MSGBOX_DEFAULT
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold::
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn, MSGBOX_DEFAULT
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold::
	frontier_getsymbols
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass, MSGBOX_DEFAULT
	waitmessage
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
	waitmovement 0
	playfanfare MUS_OBTAIN_SYMBOL
	message BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland

BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle::
	closemessage
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
	special HealPlayerParty
	setvar VAR_0x8004, SPECIAL_BATTLE_FACTORY
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland::
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
	goto_if_eq VAR_RESULT, MAX_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
	addvar VAR_RESULT, 1
	setorcopyvar VAR_0x8006, VAR_RESULT
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS  @ uses VAR_0x8006 above
	factory_get FACTORY_DATA_WIN_STREAK
	goto_if_eq VAR_RESULT, MAX_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum
	addvar VAR_RESULT, 1
	factory_set FACTORY_DATA_WIN_STREAK, VAR_RESULT
	frontier_get FRONTIER_DATA_BATTLE_NUM
	addvar VAR_RESULT, 1
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
	end

BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end

BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland:
	walk_right
	step_end

BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle:
	walk_up
	walk_up
	walk_up
	face_left
	step_end

BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby::
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
	goto_if_eq VAR_RESULT, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 4, 8
	waitstate
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles::
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 14, 8
	waitstate
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle::
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_1, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_2, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_3, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_4, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_5, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_6, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn:
	.string "¡Venga, venga!\n"
	.string "¡Muévete!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead:
	.string "¡Hola, me llamo SABINO!\n"
	.string "Soy el que manda aquí, por así decirlo.\l"
	.string "Por eso me llaman el JEFE de la FÁBRICA.\p"
	.string "He estado echando un vistazo a tus\n"
	.string "resultados de COMBATE con TRUEQUE.\p"
	.string "Parece que tienes madera, pero aún\n"
	.string "hay algo de serrín en tu cabeza.\p"
	.string "Déjame decirte algo, ¿eh? El saber\n"
	.string "no está sólo en leer libros y estudiar.\p"
	.string "Si sólo haces eso…\n"
	.string "¡No aprenderás nunca nada!\p"
	.string "Tienes que vivir las cosas, sentirlas\n"
	.string "en tu propia piel, ¿entiendes?\p"
	.string "Te retaré en igualdad de condiciones.\n"
	.string "¡Yo también usaré POKéMON prestados!$"

BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn:
	.string "¡Llegó la hora de mostrarme todo\n"
	.string "el saber que posees!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass:
	.string "SABINO: ¡Bien hecho!\n"
	.string "Déjame tu PASE del FRENTE.$"

BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol:
	.string "¡El SÍMBOLO del SABER ha sido\n"
	.string "grabado en tu PASE del FRENTE!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred:
	.string "Eh, tú…\n"
	.string "Brillas con luz propia…\p"
	.string "La próxima vez, no seré tan magnánimo.\n"
	.string "Sin contemplaciones, ¿entiendes?\p"
	.string "¡Sigue estudiando y aprendiendo!$"

BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime:
	.string "SABINO: ¡Eh, hola! ¿Qué tal lo llevas?\n"
	.string "¿Sigues aplicándote en tus estudios?\p"
	.string "Mmm…\p"
	.string "Tus ojos brillan con más fuerza\n"
	.string "que la última vez que te vi.\p"
	.string "¡Venga, creo que nos vamos a divertir!$"

BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn:
	.string "¡Adelante!\n"
	.string "¡Veamos de lo que eres capaz!$"

BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass:
	.string "SABINO: Pero cómo…\n"
	.string "¡Oye, tú ya estás en otro nivel!\p"
	.string "¡Uff!\n"
	.string "¡Dame el PASE del FRENTE!$"

BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine:
	.string "¡El SÍMBOLO del SABER\n"
	.string "ha adquirido un brillo dorado!$"

BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou:
	.string "¡Vaya, vaya!\p"
	.string "¡Te prometo que es la última vez\n"
	.string "que pierdo contigo!\p"
	.string "Tenemos que repetirlo, ¿vale?$"

