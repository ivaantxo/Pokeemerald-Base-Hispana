Tutorial_EventScript::
	lockall
	multichoice 20, 0, MULTI_TUTORIAL, TRUE
	switch VAR_RESULT
	case 0, Tutorial_EventScript_Bgs
	case 1, Tutorial_EventScript_Bgs_Sprites
	case 2, Tutorial_EventScript_MiniGame
	case MULTI_B_PRESSED, Tutorial_EventScript_Exit
	end

Tutorial_EventScript_Bgs::
	callnative(StartTutorialBgs_CB2)

Tutorial_EventScript_Bgs_Sprites::
	callnative(StartTutorialSprites_CB2)

Tutorial_EventScript_MiniGame::
	callnative(StartTutorial_CB2)

Tutorial_EventScript_Exit::
	releaseall
	end