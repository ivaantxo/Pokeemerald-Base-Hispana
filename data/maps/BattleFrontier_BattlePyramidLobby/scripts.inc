BattleFrontier_BattlePyramidLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
	.byte 0

@ Unused. Pyramid uses Dome's OnWarp (presumably by mistake). Their effects are identical
BattleFrontier_BattlePyramidLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth:
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePyramidLobby_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving::
	lockall
	message BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
	waitmessage
	playse SE_EXP_MAX
	waitse
	closemessage
	pyramid_set PYRAMID_DATA_WIN_STREAK, 0
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints

BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing::
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints::
	special DoBattlePyramidMonsHaveHeldItem
	call_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag
	clearflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
	frontier_checkairshow
	special LoadPlayerParty
	pyramid_clearhelditems
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	message BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
	waitmessage
	playse SE_EXP_MAX
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
	waitmessage
	pyramid_setprize
	pyramid_save 0
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge::
	frontier_checkairshow
	special LoadPlayerParty
	pyramid_clearhelditems
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	lockall
	message BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
	waitmessage
	playse SE_EXP_MAX
	waitse
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
	waitmessage
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
	pyramid_save 0
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge::
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge

BattleFrontier_BattlePyramidLobby_EventScript_Attendant::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PYRAMID
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	special SavePlayerParty
	msgbox BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge::
	message BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge

BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge::
	message BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
	msgbox BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
	case YES, BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge

BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	pyramid_init
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	pyramid_seedfloor
	pyramid_settrainers
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_RESULT, 0
	special HealPlayerParty
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50::
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen::
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge

BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge

BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge::
	msgbox BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge::
	release
	end

BattleFrontier_BattlePyramidLobby_EventScript_HintGiver::
	lockall
	applymovement LOCALID_PYRAMID_LOBBY_HINT_GIVER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait, MSGBOX_DEFAULT
	call BattleFrontier_BattlePyramidLobby_EventScript_GiveHint
	msgbox BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot, MSGBOX_DEFAULT
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_GiveHint::
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
	return

@ Shouldnt occur
BattleFrontier_BattlePyramidLobby_EventScript_NoHint::
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50::
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_50
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak
	setvar VAR_RESULT, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak::
	pyramid_get PYRAMID_DATA_WIN_STREAK_50
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen::
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak
	setvar VAR_RESULT, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak::
	pyramid_get PYRAMID_DATA_WIN_STREAK_OPEN
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
	return

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment::
	copyvar VAR_0x8004, VAR_RESULT
	special GetBattlePyramidHint
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_HintPoison
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_HintBurn
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_HintIce
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_HintRock
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_HintFighting
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_HintWeather
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_HintBug
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_HintDark
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_HintWater
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_HintGhost
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_HintSteel
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_HintNormal
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintParalysis, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintPoison::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPoison, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintBurn::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBurn, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPPWaste, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintLevitate, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintIce::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintIce, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintExplosion, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPsychic, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintRock::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintRock, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintFighting::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFighting, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintWeather::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWeather, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintBug::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBug, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintDark::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintDark, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintWater::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWater, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintGhost::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintGhost, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintSteel::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintSteel, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_HintNormal::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintNormal, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_ShowResults::
	lockall
	frontier_results FRONTIER_FACILITY_PYRAMID
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag::
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping, MSGBOX_DEFAULT
	pyramid_get PYRAMID_DATA_WIN_STREAK
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag

BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag::
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag::
	message BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
	waitmessage
	playse SE_EXP_MAX
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside
	waitmovement 0
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel
	waitmovement 0
	return

BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside:
	walk_right
	face_left
	step_end

BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel:
	walk_up
	walk_up
	step_end

BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag::
	msgbox BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake, MSGBOX_DEFAULT
	setflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
	special TryStoreHeldItemsInPyramidBag
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag
	message BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	end

BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag::
	msgbox BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag, MSGBOX_DEFAULT
	return

@ When exiting Battle Pyramid with a full pyramid bag and held items the player must select to keep/toss party held items and make room for any kept items by tossing from the pyramid bag
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep::
	multichoice 17, 6, MULTI_FRONTIER_ITEM_CHOOSE, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
	end

BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag::
	special ChooseItemsToTossFromPyramidBag
	waitstate
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	end

BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty::
	special BattlePyramidChooseMonHeldItems
	waitstate
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	end

BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems::
	special DoBattlePyramidMonsHaveHeldItem
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems
	return

BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems::
	msgbox BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem, MSGBOX_DEFAULT
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	end

BattleFrontier_BattlePyramidLobby_EventScript_Woman::
	msgbox BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning, MSGBOX_NPC
	end

BattleFrontier_BattlePyramidLobby_EventScript_FatMan::
	msgbox BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems, MSGBOX_NPC
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattlePyramidLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 15, 2, MULTI_BATTLE_PYRAMID_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_RulesBag
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePyramidLobby_EventScript_RulesBag::
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePyramidLobby_EventScript_ExitRules::
	releaseall
	end

BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid:
	.string "¡Aquí ponemos a prueba la valentía\n"
	.string "de los ENTRENADORES!\p"
	.string "¡Te doy la bienvenida\n"
	.string "a la PIRÁMIDE BATALLA!\p"
	.string "Yo soy el guía de las\n"
	.string "EXPEDICIONES de COMBATES.$"

BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge:
	.string "¿Tienes valor para embarcarte\n"
	.string "en una EXPEDICIÓN de COMBATES?$"

BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge:
	.string "Esperamos que vuelvas\n"
	.string "pronto por aquí.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid:
	.string "La EXPEDICIÓN de COMBATES es una\n"
	.string "prueba en la que deberás explorar esta\l"
	.string "pirámide y tratar de llegar a la cima.\p"
	.string "En esta pirámide hay siete laberintos,\n"
	.string "uno en cada nivel, por los que merodean\l"
	.string "ENTRENADORES y POKéMON salvajes.\p"
	.string "Sólo podrás entrar con tres POKéMON,\n"
	.string "y ninguno de ellos podrá sostener\l"
	.string "ningún objeto.\p"
	.string "Antes de iniciar el ascenso, recibirás\n"
	.string "una MOCHILA PIRÁMIDE para guardar\l"
	.string "objetos.\p"
	.string "Si tu expedición fracasa, perderás\n"
	.string "los objetos que había en tu MOCHILA\l"
	.string "PIRÁMIDE.\p"
	.string "Si quieres tomarte un respiro y dejar\n"
	.string "de jugar, selecciona “DESCANSO”:\l"
	.string "guardarás la partida\l"
	.string "y saldrás del juego.\p"
	.string "Si salieras del juego sin guardar,\n"
	.string "cuando retomes la partida\l"
	.string "se te habrá descalificado.$"

BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode:
	.string "La PIRÁMIDE BATALLA tiene dos niveles:\n"
	.string "el nivel 50 y el nivel libre.\l"
	.string "¿En cuál quieres combatir?$"

BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons:
	.string "Selecciona los tres POKéMON\n"
	.string "con los que quieres combatir.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen:
	.string "Cuánto lo siento…\p"
	.string "No tienes tres POKéMON que puedan\n"
	.string "participar en este desafío.\p"
	.string "Además, recuerda que tus POKéMON\n"
	.string "no pueden sostener ningún objeto.\p"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
	.string "Vuelve cuando cumplas las condiciones\n"
	.string "para aceptar el desafío.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50:
	.string "Cuánto lo siento…\p"
	.string "No tienes tres POKéMON que puedan\n"
	.string "participar en este desafío.\p"
	.string "Necesitas tres POKéMON diferentes\n"
	.string "de nivel 50 o inferior.\p"
	.string "Además, recuerda que tus POKéMON\n"
	.string "no pueden sostener ningún objeto.\p"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
	.string "Vuelve cuando cumplas las condiciones\n"
	.string "para aceptar el desafío.$"

BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge:
	.string "Antes de embarcarte en una EXPEDICIÓN\n"
	.string "de COMBATES, debes guardar la partida.\l"
	.string "¿Estás de acuerdo?$"

BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid:
	.string "Adelante, pues. Permíteme conducirte\n"
	.string "al interior de la PIRÁMIDE BATALLA.$"

BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping:
	.string "{PLAYER}, permíteme tu MOCHILA,\n"
	.string "por favor. La pondremos a buen recaudo.$"

BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag:
	.string "A cambio, toma la MOCHILA PIRÁMIDE,\n"
	.string "que ya has usado antes.$"

BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag:
	.string "A cambio, toma esta MOCHILA PIRÁMIDE.$"

BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag:
	.string "{PLAYER} cambió su MOCHILA\n"
	.string "por la MOCHILA PIRÁMIDE.$"

BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel:
	.string "Cuando te pongas en esta baldosa,\n"
	.string "irás a parar a un piso superior\l"
	.string "de la pirámide.\p"
	.string "¡Espero y deseo por tu bien\n"
	.string "que tenga éxito la expedición!$"

BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag:
	.string "Cuánto lo siento…\p"
	.string "Se te olvidó guardar la partida antes\n"
	.string "de abandonar la expedición…\p"
	.string "Me temo que ello implica la\n"
	.string "descalificación automática.\p"
	.string "Toma tu MOCHILA. Suerte para el futuro.\p"
	.string "{PLAYER} recuperó su MOCHILA.$"

BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid:
	.string "¡Qué alegría verte de vuelta!\p"
	.string "¡Has coronado la PIRÁMIDE BATALLA!\n"
	.string "¡Excelente!$"

BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake:
	.string "Esto…, parece que hay un problema.\p"
	.string "Al menos uno de tus POKéMON\n"
	.string "está sosteniendo un objeto.\p"
	.string "Lo siento, pero los objetos obtenidos\n"
	.string "en esta pirámide, en ella se quedan.$"

BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag:
	.string "Los objetos que lleven tus POKéMON\n"
	.string "se colocarán automáticamente\l"
	.string "en la MOCHILA PIRÁMIDE, {PLAYER}.$"

BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep:
	.string "La MOCHILA PIRÁMIDE no puede guardar\n"
	.string "todos los objetos que llevas, lo siento.\p"
	.string "Elige los objetos que quieres llevar\n"
	.string "en la MOCHILA PIRÁMIDE o que lleven\l"
	.string "tus POKéMON.$"

BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem:
	.string "Al menos un POKéMON sostiene\n"
	.string "todavía un objeto.$"

BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep:
	.string "Elige los objetos que quieres llevar\n"
	.string "en la MOCHILA PIRÁMIDE o que lleven\l"
	.string "tus POKéMON.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld:
	.string "{PLAYER} returned everything that\n"
	.string "the POKéMON held.$"

BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept:
	.string "Guardaremos la MOCHILA PIRÁMIDE que\n"
	.string "has usado para tu próxima expedición.\p"
	.string "{PLAYER} devolvió la MOCHILA PIRÁMIDE\n"
	.string "a cambio de su MOCHILA de siempre.$"

BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait:
	.string "Vamos a guardar tu récord.\n"
	.string "Espera unos instantes.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis:
	.string "As a memento for conquering\n"
	.string "the BATTLE PYRAMID, please take this.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_ReceivedPrizeItem:
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_BagIsFull:
	.string "…Ah…\n"
	.string "Your BAG appears to be filled.\p"
	.string "Please return after you’ve organized\n"
	.string "your BAG’s contents.$"

BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag:
	.string "Lo siento por ti…\p"
	.string "Toma tu MOCHILA.\p"
	.string "{PLAYER} recuperó su MOCHILA.$"

BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge:
	.string "Esperamos que vuelvas\n"
	.string "pronto por aquí.$"

@ Unused
BattleFrontier_BattlePyramidLobby_Text_HereIsPrize:
	.string "We have been looking forward to\n"
	.string "your arrival!\p"
	.string "Here is your prize for conquering\n"
	.string "the PYRAMID.$"

BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait:
	.string "Hola…\p"
	.string "Si quieres, te contaré las calamidades\n"
	.string "que te aguardan en la PIRÁMIDE…$"

BattleFrontier_BattlePyramidLobby_Text_Aah:
	.string "Mmm… \p"
	.string "Mmmmm…\p"
	.string "Mmmmmmm…\p"
	.string "¡Aah!$"

BattleFrontier_BattlePyramidLobby_Text_HintParalysis:
	.string "Veo una lluvia de chispas…\p"
	.string "Y, bajo ella, veo a tus POKéMON\n"
	.string "luchando contra la parálisis…$"

BattleFrontier_BattlePyramidLobby_Text_HintPoison:
	.string "Veo veneno…\p"
	.string "Y veo también a tus POKéMON\n"
	.string "sufriendo su efecto…$"

BattleFrontier_BattlePyramidLobby_Text_HintBurn:
	.string "Veo llamas de un rojo vivo…\p"
	.string "Y veo a tus POKéMON sufriendo\n"
	.string "sus quemaduras…$"

BattleFrontier_BattlePyramidLobby_Text_HintPPWaste:
	.string "Siento la enorme presión\n"
	.string "de una rabia irracional…\p"
	.string "Es una especie de maldición…\p"
	.string "Veo a tus POKéMON quedarse poco a poco\n"
	.string "sin PUNTOS de PODER, sin otra opción\l"
	.string "que recurrir al COMBATE…$"

BattleFrontier_BattlePyramidLobby_Text_HintLevitate:
	.string "Veo POKéMON elevándose sutilmente\n"
	.string "en el aire…\p"
	.string "Y veo a tus POKéMON frustrados por\n"
	.string "lo inútiles que les resultan todos sus\l"
	.string "movimientos de tipo TIERRA…$"

BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility:
	.string "Siento una energía terrorífica que\n"
	.string "surge de debajo de la tierra…\p"
	.string "Y veo a tus POKéMON incapaces de\n"
	.string "escapar al poder de sus garras…$"

BattleFrontier_BattlePyramidLobby_Text_HintIce:
	.string "Veo POKéMON de tipo HIELO…\p"
	.string "Y veo a tus POKéMON luchando\n"
	.string "contra su poder congelante…$"

BattleFrontier_BattlePyramidLobby_Text_HintExplosion:
	.string "Veo un frenesí de movimientos que\n"
	.string "ponen en peligro hasta a quien los usa…\p"
	.string "Y veo a tus POKéMON sucumbir\n"
	.string "a sus demoledores efectos…$"

BattleFrontier_BattlePyramidLobby_Text_HintPsychic:
	.string "Veo POKéMON de tipo PSÍQUICO…\p"
	.string "Y veo a tus POKéMON atormentados\n"
	.string "bajo sus enormes poderes mentales…$"

BattleFrontier_BattlePyramidLobby_Text_HintRock:
	.string "Veo POKéMON de tipo ROCA…\p"
	.string "Y los veo castigar con dureza\n"
	.string "a tus POKéMON…$"

BattleFrontier_BattlePyramidLobby_Text_HintFighting:
	.string "Veo POKéMON de tipo LUCHA…\p"
	.string "Luchando y castigando a tus POKéMON…$"

BattleFrontier_BattlePyramidLobby_Text_HintWeather:
	.string "DANZA LLUVIA… DÍA SOLEADO…\n"
	.string "TORMENTA ARENA… GRANIZO…\p"
	.string "Veo POKéMON que se hacen más fuertes\n"
	.string "con los cambios del tiempo…\p"
	.string "Y veo a tus POKéMON sufriendo\n"
	.string "el azote de sus movimientos…$"

BattleFrontier_BattlePyramidLobby_Text_HintBug:
	.string "Veo POKéMON de tipo BICHO…\p"
	.string "Y veo a tus POKéMON acribillados\n"
	.string "por ataques de distintos tipos…$"

BattleFrontier_BattlePyramidLobby_Text_HintDark:
	.string "Veo POKéMON de tipo SINIESTRO…\p"
	.string "Y los veo castigar a tus POKéMON con\n"
	.string "sus perversos movimientos…$"

BattleFrontier_BattlePyramidLobby_Text_HintWater:
	.string "Veo POKéMON de tipo AGUA…\p"
	.string "Y veo a tus POKéMON tratando\n"
	.string "de no sucumbir bajo el agua…$"

BattleFrontier_BattlePyramidLobby_Text_HintGhost:
	.string "Veo POKéMON de tipo FANTASMA…\p"
	.string "Y veo a tus POKéMON atemorizados por\n"
	.string "sus terroríficos movimientos…$"

BattleFrontier_BattlePyramidLobby_Text_HintSteel:
	.string "Veo POKéMON de tipo ACERO…\p"
	.string "Y los veo caer sobre tus POKéMON\n"
	.string "con todo el peso de sus movimientos…$"

BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon:
	.string "Veo POKéMON voladores…\p"
	.string "Y veo a tus POKéMON tratando de\n"
	.string "escapar del poder de sus movimientos…$"

BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve:
	.string "Veo a los que han evolucionado a partir\n"
	.string "del poder de las piedras…\p"
	.string "Siento su fuego, su agua,\n"
	.string "y su electricidad…\p"
	.string "Y veo sufrir a tus POKéMON\n"
	.string "bajo esas tres fuerzas…$"

BattleFrontier_BattlePyramidLobby_Text_HintNormal:
	.string "Veo POKéMON de tipo NORMAL…\p"
	.string "Y veo a tus POKéMON sufriendo\n"
	.string "la dureza de sus ataques…$"

BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot:
	.string "Que creas en mis predicciones o no,\n"
	.string "depende solamente de ti…\p"
	.string "El futuro siempre se puede cambiar…\n"
	.string "Te deseo mucha suerte.$"

BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning:
	.string "¿Sabes una cosa?\p"
	.string "Resulta que, si corres y te ven\n"
	.string "los ENTRENADORES, irán a por ti.\p"
	.string "Si no quieres líos, no llames la atención\n"
	.string "e intenta pasar sin que se den cuenta.$"

BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems:
	.string "¡Aaaaargh! ¡Qué rabia!\p"
	.string "Tenía un montón de objetos, ¡y los\n"
	.string "perdí todos cuando perdí el combate!\p"
	.string "¡Aaaaargh!$"

BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing:
	.string "¡Es un honor tenerte otra vez aquí!\n"
	.string "¡Has conseguido lo impensable!\p"
	.string "¡Has derrotado al REY de la PIRÁMIDE\n"
	.string "y has coronado la PIRÁMIDE BATALLA!$"

BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints:
	.string "¡Has demostrado un gran valor!\n"
	.string "¡No hay mejor recompensa por ello\l"
	.string "que los PUNTOS de BATALLA!$"

BattleFrontier_BattlePyramidLobby_Text_RulesAreListed:
	.string "Son las reglas de la EXPEDICIÓN\n"
	.string "de COMBATES.$"

BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading:
	.string "¿Qué capítulo quieres leer?$"

BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules:
	.string "Cuando llegues a la cima de la PIRÁMIDE,\n"
	.string "los POKéMON salvajes que había en ella\l"
	.string "serán sustituidos por otros distintos.\p"
	.string "Explora, observa y fíjate en los\n"
	.string "POKéMON salvajes con los que\l"
	.string "puedes encontrarte.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules:
	.string "En la PIRÁMIDE acechan muchos\n"
	.string "ENTRENADORES.\p"
	.string "En cada nivel, puede haber\n"
	.string "hasta ocho ENTRENADORES.\p"
	.string "Cada vez que derrotes a uno, obtendrás\n"
	.string "una pista que te ayudará a continuar.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules:
	.string "Los laberintos que hay en la PIRÁMIDE\n"
	.string "cambian cada vez que entras en ella.\p"
	.string "Los laberintos están en penumbra.\n"
	.string "Ve con mucho cuidado.\p"
	.string "Cada vez que derrotes a un POKéMON\n"
	.string "salvaje o a un ENTRENADOR, la luz que\l"
	.string "ilumina el laberinto será más intensa.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules:
	.string "La MOCHILA PIRÁMIDE será la que lleves\n"
	.string "cuando estés dentro de la PIRÁMIDE.\p"
	.string "Hay dos tipos de MOCHILA PIRÁMIDE:\n"
	.string "uno para las expediciones de nivel 50\l"
	.string "y otro para las de nivel libre.\p"
	.string "Cada una tiene capacidad para\n"
	.string "99 objetos de diez clases distintas.\p"
	.string "Si fracasa tu expedición, perderás\n"
	.string "el contenido de la MOCHILA PIRÁMIDE.$"

