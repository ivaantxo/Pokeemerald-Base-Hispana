BattleFrontier_BattlePyramidFloor_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
	.byte 0

BattleFrontier_BattlePyramidFloor_OnFrame:
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
	.2byte 0

BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
	lockall
	@ pyramid_updatelight, cant use macro because it straddles the loop
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
	setvar VAR_0x8007, SE_SAVE
	setvar VAR_RESULT, 0
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
	special CallBattlePyramidFunction
	delay 2
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
	setvar VAR_TEMP_D, 0
	releaseall
	end

BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
	special ShowMapNamePopup
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
	playbgm MUS_B_PYRAMID, FALSE
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end

BattleFrontier_BattlePyramidFloor_OnResume:
	pyramid_setfloorpal
	frontier_getstatus
	switch VAR_TEMP_CHALLENGE_STATUS
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
	setvar VAR_TEMP_D, 1
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
	pyramid_resetparty
	end

BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
	pyramid_clearhelditems
	special HealPlayerParty
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
	pyramid_save CHALLENGE_STATUS_SAVING
	special SavePlayerParty
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	pyramid_settrainers
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_OnTransition:
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
	return

BattlePyramid_WarpToNextFloor::
	call BattleFrontier_EventScript_IncrementWinStreak
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
	addvar VAR_RESULT, 1
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop
	pyramid_seedfloor
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_RESULT, 0
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
	waitstate
	end

BattlePyramid_WarpToTop::
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
	waitstate
	end

@ TRAINER_PHILLIP is used as a placeholder
BattlePyramid_TrainerBattle::
	trainerbattle TRAINER_BATTLE_HILL, LOCALID_NONE, TRAINER_PHILLIP, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
	pyramid_showhint
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BattlePyramid_FindItemBall::
	pyramid_setitem
	callstd STD_FIND_ITEM
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBallEnd
	pyramid_hideitem
BattlePyramid_FindItemBallEnd::
	end

BattlePyramid_Retire::
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost

@ Also used by Trainer Hill
BattleFacility_TrainerBattle_PlaceholderText:
	.string "Mensaje de prueba.$"

gText_BattlePyramidConfirmRest::
	.string "Tu expedición de la PIRÁMIDE BATALLA\n"
	.string "se guardará para que puedas tomarte\l"
	.string "un descanso. ¿Estás de acuerdo?$"

gText_BattlePyramidConfirmRetire::
	.string "¿De verdad deseas abortar\n"
	.string "tu EXPEDICIÓN de COMBATES?$"

BattlePyramid_Text_ExitHintUp1::
	.string "La salida de este nivel está\n"
	.string "en esa dirección: {UP_ARROW}.$"

BattlePyramid_Text_ExitHintLeft1::
	.string "La salida de este nivel está\n"
	.string "en esa dirección: {LEFT_ARROW}.$"

BattlePyramid_Text_ExitHintRight1::
	.string "La salida de este nivel está\n"
	.string "en esa dirección: {RIGHT_ARROW}.$"

BattlePyramid_Text_ExitHintDown1::
	.string "La salida de este nivel está\n"
	.string "en esa dirección: {DOWN_ARROW}.$"

BattlePyramid_Text_ExitHintUp2::
	.string "Creo que la salida de este nivel\n"
	.string "está por ahí: {UP_ARROW}.$"

BattlePyramid_Text_ExitHintLeft2::
	.string "Creo que la salida de este nivel\n"
	.string "está por ahí: {LEFT_ARROW}.$"

BattlePyramid_Text_ExitHintRight2::
	.string "Creo que la salida de este nivel\n"
	.string "está por ahí: {RIGHT_ARROW}.$"

BattlePyramid_Text_ExitHintDown2::
	.string "Creo que la salida de este nivel\n"
	.string "está por ahí: {DOWN_ARROW}.$"

BattlePyramid_Text_ExitHintUp3::
	.string "La salida está en esa dirección: {UP_ARROW}.$"

BattlePyramid_Text_ExitHintLeft3::
	.string "La salida está en esa dirección: {LEFT_ARROW}.$"

BattlePyramid_Text_ExitHintRight3::
	.string "La salida está en esa dirección: {RIGHT_ARROW}.$"

BattlePyramid_Text_ExitHintDown3::
	.string "La salida está en esa dirección: {DOWN_ARROW}.$"

BattlePyramid_Text_ExitHintUp4::
	.string "En este nivel, la salida está\n"
	.string "en esa dirección: {UP_ARROW}.$"

BattlePyramid_Text_ExitHintLeft4::
	.string "En este nivel, la salida está\n"
	.string "en esa dirección: {LEFT_ARROW}.$"

BattlePyramid_Text_ExitHintRight4::
	.string "En este nivel, la salida está\n"
	.string "en esa dirección: {RIGHT_ARROW}.$"

BattlePyramid_Text_ExitHintDown4::
	.string "En este nivel, la salida está\n"
	.string "en esa dirección: {DOWN_ARROW}.$"

BattlePyramid_Text_ExitHintUp5::
	.string "¿La salida, dices?\n"
	.string "Por ahí: {UP_ARROW}.$"

BattlePyramid_Text_ExitHintLeft5::
	.string "¿La salida, dices?\n"
	.string "Por ahí: {LEFT_ARROW}.$"

BattlePyramid_Text_ExitHintRight5::
	.string "¿La salida, dices?\n"
	.string "Por ahí: {RIGHT_ARROW}.$"

BattlePyramid_Text_ExitHintDown5::
	.string "¿La salida, dices?\n"
	.string "Por ahí: {DOWN_ARROW}.$"

BattlePyramid_Text_ExitHintUp6::
	.string "La salida resulta que está \n"
	.string "en la dirección: {UP_ARROW}.$"

BattlePyramid_Text_ExitHintLeft6::
	.string "La salida resulta que está \n"
	.string "en la dirección: {LEFT_ARROW}.$"

BattlePyramid_Text_ExitHintRight6::
	.string "La salida resulta que está \n"
	.string "en la dirección: {RIGHT_ARROW}.$"

BattlePyramid_Text_ExitHintDown6::
	.string "La salida resulta que está \n"
	.string "en la dirección: {DOWN_ARROW}.$"

BattlePyramid_Text_EightItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te quedan 8 por aquí.$"

BattlePyramid_Text_SevenItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te quedan 7 por aquí.$"

BattlePyramid_Text_SixItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te quedan 6 por aquí.$"

BattlePyramid_Text_FiveItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te quedan 5 por aquí.$"

BattlePyramid_Text_FourItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te quedan 4 por aquí.$"

BattlePyramid_Text_ThreeItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te quedan 3 por aquí.$"

BattlePyramid_Text_TwoItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te quedan 2 por aquí.$"

BattlePyramid_Text_OneItemRemaining1::
	.string "¿Buscas objetos?\p"
	.string "Pues todavía te queda 1 por aquí.$"

BattlePyramid_Text_ZeroItemsRemaining1::
	.string "¿Buscas objetos?\p"
	.string "¡Pero si ya los has encontrado todos!$"

BattlePyramid_Text_EightItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Hay 8 objetos desperdigados por aquí.$"

BattlePyramid_Text_SevenItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Hay 7 objetos más desperdigados\n"
	.string "por aquí.$"

BattlePyramid_Text_SixItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Hay 6 objetos más desperdigados\n"
	.string "por aquí.$"

BattlePyramid_Text_FiveItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Hay 5 objetos más desperdigados\n"
	.string "por aquí.$"

BattlePyramid_Text_FourItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Hay 4 objetos más desperdigados\n"
	.string "por aquí.$"

BattlePyramid_Text_ThreeItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Hay 3 objetos más desperdigados\n"
	.string "por aquí.$"

BattlePyramid_Text_TwoItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Hay 2 objetos más desperdigados\n"
	.string "por aquí.$"

BattlePyramid_Text_OneItemRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Sólo queda 1 objeto más por aquí.$"

BattlePyramid_Text_ZeroItemsRemaining2::
	.string "Ya que has ganado,\n"
	.string "¡te contaré un secreto!\p"
	.string "Ya no queda ningún objeto más por aquí.$"

BattlePyramid_Text_EightItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía quedan 8 en este nivel.$"

BattlePyramid_Text_SevenItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía quedan 7 en este nivel.$"

BattlePyramid_Text_SixItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía quedan 6 en este nivel.$"

BattlePyramid_Text_FiveItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía quedan 5 en este nivel.$"

BattlePyramid_Text_FourItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía quedan 4 en este nivel.$"

BattlePyramid_Text_ThreeItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía quedan 3 en este nivel.$"

BattlePyramid_Text_TwoItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía quedan 2 en este nivel.$"

BattlePyramid_Text_OneItemRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues todavía queda 1 en este nivel.$"

BattlePyramid_Text_ZeroItemsRemaining3::
	.string "¿Cómo vas de objetos?\p"
	.string "Pues ya no queda ninguno en este nivel.\n"
	.string "¡Cuídate!$"

BattlePyramid_Text_EightItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 8 objetos en este nivel.$"

BattlePyramid_Text_SevenItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 7 objetos en este nivel.$"

BattlePyramid_Text_SixItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 6 objetos en este nivel.$"

BattlePyramid_Text_FiveItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 5 objetos en este nivel.$"

BattlePyramid_Text_FourItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 4 objetos en este nivel.$"

BattlePyramid_Text_ThreeItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 3 objetos en este nivel.$"

BattlePyramid_Text_TwoItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 2 objetos en este nivel.$"

BattlePyramid_Text_OneItemRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: hay 1 objeto en este nivel.$"

BattlePyramid_Text_ZeroItemsRemaining4::
	.string "¡Te mereces una pequeña ayudita\n"
	.string "por haberme ganado!\p"
	.string "Ahí va: ¡ya no quedan más objetos\n"
	.string "en este nivel!$"

BattlePyramid_Text_EightItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 8 objetos…$"

BattlePyramid_Text_SevenItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 7 objetos…$"

BattlePyramid_Text_SixItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 6 objetos…$"

BattlePyramid_Text_FiveItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 5 objetos…$"

BattlePyramid_Text_FourItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 4 objetos…$"

BattlePyramid_Text_ThreeItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 3 objetos…$"

BattlePyramid_Text_TwoItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 2 objetos…$"

BattlePyramid_Text_OneItemRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "hay 1 objeto…$"

BattlePyramid_Text_ZeroItemsRemaining5::
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
	.string "no quedan objetos…$"

BattlePyramid_Text_EightItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 8 en este nivel.$"

BattlePyramid_Text_SevenItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 7 en este nivel.$"

BattlePyramid_Text_SixItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 6 en este nivel.$"

BattlePyramid_Text_FiveItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 5 en este nivel.$"

BattlePyramid_Text_FourItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 4 en este nivel.$"

BattlePyramid_Text_ThreeItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 3 en este nivel.$"

BattlePyramid_Text_TwoItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 2 en este nivel.$"

BattlePyramid_Text_OneItemRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que hay 1 en este nivel.$"

BattlePyramid_Text_ZeroItemsRemaining6::
	.string "¿Llevas algún objeto?\p"
	.string "Creo que ya no quedan en este nivel.$"

BattlePyramid_Text_SevenTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Pero aún te quedan otros 7\n"
	.string "ENTRENADORES aparte de mí!$"

BattlePyramid_Text_SixTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Pero aún te quedan otros 6\n"
	.string "ENTRENADORES aparte de mí!$"

BattlePyramid_Text_FiveTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Pero aún te quedan otros 5\n"
	.string "ENTRENADORES aparte de mí!$"

BattlePyramid_Text_FourTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Pero aún te quedan otros 4\n"
	.string "ENTRENADORES aparte de mí!$"

BattlePyramid_Text_ThreeTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Pero aún te quedan otros 3\n"
	.string "ENTRENADORES aparte de mí!$"

BattlePyramid_Text_TwoTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Pero aún te quedan otros 2\n"
	.string "ENTRENADORES aparte de mí!$"

BattlePyramid_Text_OneTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Pero aún te queda otro\n"
	.string "ENTRENADOR aparte de mí!$"

BattlePyramid_Text_ZeroTrainersRemaining1::
	.string "¡Sabes combatir, de eso no hay duda!\p"
	.string "¡Ya no te queda ningún\n"
	.string "ENTRENADOR por batir!$"

BattlePyramid_Text_SevenTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Pues que sepas que aún te quedan 7\n"
	.string "ENTRENADORES más! ¡Prepárate!$"

BattlePyramid_Text_SixTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Pues que sepas que aún te quedan 6\n"
	.string "ENTRENADORES más! ¡Prepárate!$"

BattlePyramid_Text_FiveTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Pues que sepas que aún te quedan 5\n"
	.string "ENTRENADORES más! ¡Prepárate!$"

BattlePyramid_Text_FourTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Pues que sepas que aún te quedan 4\n"
	.string "ENTRENADORES más! ¡Prepárate!$"

BattlePyramid_Text_ThreeTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Pues que sepas que aún te quedan 3\n"
	.string "ENTRENADORES más! ¡Prepárate!$"

BattlePyramid_Text_TwoTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Pues que sepas que aún te quedan 2\n"
	.string "ENTRENADORES más! ¡Prepárate!$"

BattlePyramid_Text_OneTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Pues que sepas que aún te queda 1\n"
	.string "ENTRENADOR más! ¡Prepárate!$"

BattlePyramid_Text_ZeroTrainersRemaining2::
	.string "¡Qué fastidio!\p"
	.string "¡Ya no te queda ningún ENTRENADOR\n"
	.string "que pueda hacerte frente!$"

BattlePyramid_Text_SevenTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "Todavía te quedan 7 ENTRENADORES\n"
	.string "más en este nivel. ¿Podrás con todos?$"

BattlePyramid_Text_SixTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "Todavía te quedan 6 ENTRENADORES\n"
	.string "más en este nivel. ¿Podrás con todos?$"

BattlePyramid_Text_FiveTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "Todavía te quedan 5 ENTRENADORES\n"
	.string "más en este nivel. ¿Podrás con todos?$"

BattlePyramid_Text_FourTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "Todavía te quedan 4 ENTRENADORES\n"
	.string "más en este nivel. ¿Podrás con todos?$"

BattlePyramid_Text_ThreeTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "Todavía te quedan 3 ENTRENADORES\n"
	.string "más en este nivel. ¿Podrás con todos?$"

BattlePyramid_Text_TwoTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "Todavía te quedan 2 ENTRENADORES\n"
	.string "más en este nivel. ¿Podrás con todos?$"

BattlePyramid_Text_OneTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "Todavía te queda 1 ENTRENADOR\n"
	.string "más en este nivel. ¿Cómo lo ves?$"

BattlePyramid_Text_ZeroTrainersRemaining3::
	.string "¡Me has dejado con la boca abierta!\p"
	.string "¡Has acabado uno a uno con todos\n"
	.string "los ENTRENADORES de este nivel!$"

BattlePyramid_Text_SevenTrainersRemaining4::
	.string "Dudo que puedas derrotar a los 7\n"
	.string "ENTRENADORES que quedan en este nivel.$"

BattlePyramid_Text_SixTrainersRemaining4::
	.string "Dudo que puedas derrotar a los 6\n"
	.string "ENTRENADORES que quedan en este nivel.$"

BattlePyramid_Text_FiveTrainersRemaining4::
	.string "Dudo que puedas derrotar a los 5\n"
	.string "ENTRENADORES que quedan en este nivel.$"

BattlePyramid_Text_FourTrainersRemaining4::
	.string "Dudo que puedas derrotar a los 4\n"
	.string "ENTRENADORES que quedan en este nivel.$"

BattlePyramid_Text_ThreeTrainersRemaining4::
	.string "Dudo que puedas derrotar a los 3\n"
	.string "ENTRENADORES que quedan en este nivel.$"

BattlePyramid_Text_TwoTrainersRemaining4::
	.string "Dudo que puedas derrotar a los 2\n"
	.string "ENTRENADORES que quedan en este nivel.$"

BattlePyramid_Text_OneTrainersRemaining4::
	.string "Dudo que puedas derrotar al\n"
	.string "ENTRENADOR que queda en este nivel.$"

BattlePyramid_Text_ZeroTrainersRemaining4::
	.string "Bueno, ya no te queda nadie\n"
	.string "por vencer en este nivel…$"

BattlePyramid_Text_SevenTrainersRemaining5::
	.string "Puede que hasta consigas derrotar\n"
	.string "a los 7 ENTRENADORES que quedan.$"

BattlePyramid_Text_SixTrainersRemaining5::
	.string "Puede que hasta consigas derrotar\n"
	.string "a los 6 ENTRENADORES que quedan.$"

BattlePyramid_Text_FiveTrainersRemaining5::
	.string "Puede que hasta consigas derrotar\n"
	.string "a los 5 ENTRENADORES que quedan.$"

BattlePyramid_Text_FourTrainersRemaining5::
	.string "Puede que hasta consigas derrotar\n"
	.string "a los 4 ENTRENADORES que quedan.$"

BattlePyramid_Text_ThreeTrainersRemaining5::
	.string "Puede que hasta consigas derrotar\n"
	.string "a los 3 ENTRENADORES que quedan.$"

BattlePyramid_Text_TwoTrainersRemaining5::
	.string "Puede que hasta consigas derrotar\n"
	.string "a los 2 ENTRENADORES que quedan.$"

BattlePyramid_Text_OneTrainersRemaining5::
	.string "Puede que hasta consigas derrotar\n"
	.string "al ENTRENADOR que queda.$"

BattlePyramid_Text_ZeroTrainersRemaining5::
	.string "Eres mucho para nosotros.\p"
	.string "En este nivel ya no queda ningún\n"
	.string "ENTRENADOR para enfrentarse a ti.$"

BattlePyramid_Text_SevenTrainersRemaining6::
	.string "¿Serás capaz de vencer a los 7\n"
	.string "ENTRENADORES que quedan?$"

BattlePyramid_Text_SixTrainersRemaining6::
	.string "¿Serás capaz de vencer a los 6\n"
	.string "ENTRENADORES que quedan?$"

BattlePyramid_Text_FiveTrainersRemaining6::
	.string "¿Serás capaz de vencer a los 5\n"
	.string "ENTRENADORES que quedan?$"

BattlePyramid_Text_FourTrainersRemaining6::
	.string "¿Serás capaz de vencer a los 4\n"
	.string "ENTRENADORES que quedan?$"

BattlePyramid_Text_ThreeTrainersRemaining6::
	.string "¿Serás capaz de vencer a los 3\n"
	.string "ENTRENADORES que quedan?$"

BattlePyramid_Text_TwoTrainersRemaining6::
	.string "¿Serás capaz de vencer a los 2\n"
	.string "ENTRENADORES que quedan?$"

BattlePyramid_Text_OneTrainersRemaining6::
	.string "¿Serás capaz de vencer al último\n"
	.string "ENTRENADOR que queda?$"

BattlePyramid_Text_ZeroTrainersRemaining6::
	.string "Ya no queda ni un solo ENTRENADOR\n"
	.string "que pueda retarte…$"
