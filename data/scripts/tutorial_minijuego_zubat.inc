TutorialMinijuegoZubat_EventScript::
	lockall
	multichoice 20, 0, MULTI_TUTORIAL_MINIJUEGO_ZUBAT, TRUE
	switch VAR_RESULT
	case 0, TutorialMinijuegoZubat_EventScript_Bgs
	case 1, TutorialMinijuegoZubat_EventScript_Bgs_Sprites
	case 2, TutorialMinijuegoZubat_EventScript_MiniGame
	case MULTI_B_PRESSED, TutorialMinijuegoZubat_EventScript_Exit
	end

TutorialMinijuegoZubat_EventScript_Bgs::
	callnative(StartTutorialBgs_CB2)

TutorialMinijuegoZubat_EventScript_Bgs_Sprites::
	callnative(StartTutorialSprites_CB2)

TutorialMinijuegoZubat_EventScript_MiniGame::
	callnative(StartTutorial_CB2)

TutorialMinijuegoZubat_EventScript_Exit::
	releaseall
	end
