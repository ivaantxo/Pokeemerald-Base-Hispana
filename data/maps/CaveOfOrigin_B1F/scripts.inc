CaveOfOrigin_B1F_MapScripts::
	.byte 0

CaveOfOrigin_B1F_EventScript_Wallace::
	lock
	faceplayer
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_Delay48
	waitmovement 0
	delay 30
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
	waitmovement 0
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_WheresRayquaza::
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
	switch VAR_RESULT
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
	goto CaveOfOrigin_B1F_EventScript_DontRemember
	end

CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_AtMtPyre::
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_DontRemember::
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_AtSkyPillar::
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
	closemessage
	playse SE_EXIT
	fadescreenspeed FADE_TO_BLACK, 4
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
	fadescreen FADE_FROM_BLACK
	release
	end

CaveOfOrigin_B1F_Text_WallaceStory:
	.string "Ah, así que eres {PLAYER}{KUN}.\n"
	.string "He oído hablar mucho de ti.\p"
	.string "Me llamo PLUBIO.\p"
	.string "Era el LÍDER del GIMNASIO\n"
	.string "de ARRECÍPOLIS, pero ocurrió algo.\p"
	.string "Así que pedí a mi mentor, GALANO,\n"
	.string "que se ocupara del GIMNASIO.\p"
	.string "Verás…\n"
	.string "Resulta que…\p"
	.string "GROUDON y KYOGRE, los dos POKéMON\n"
	.string "que están haciendo estragos aquí,\l"
	.string "son dos POKéMON muy antiguos.\p"
	.string "Pero no son los únicos…\p"
	.string "Hay alguno más en algún lugar.\p"
	.string "Existe un tercer POKéMON\n"
	.string "antiquísimo llamado RAYQUAZA.\p"
	.string "Se cuenta que fue RAYQUAZA\n"
	.string "quien calmó a estos combatientes\l"
	.string "en un pasado ya muy lejano.\p"
	.string "Pero ni siquiera yo sé dónde\n"
	.string "podemos encontrar a RAYQUAZA…$"

CaveOfOrigin_B1F_Text_WhereIsRayquaza:
	.string "PLUBIO: {PLAYER}{KUN}, ¿es posible que tú\n"
	.string "sepas dónde encontrar a RAYQUAZA?\p"
	.string "Si es así, dímelo, por favor.$"

CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
	.string "PLUBIO: ¿En la CUEVA ANCESTRAL?\p"
	.string "¡Pero si eso está aquí mismo!\n"
	.string "¡No me basta con eso!\p"
	.string "Lo que necesito es que me digas dónde\n"
	.string "está RAYQUAZA ahora mismo.$"

CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
	.string "PLUBIO: ¿En el MONTE PÍRICO?\p"
	.string "Pero, cuando me encontré con la\n"
	.string "anciana allí, no hizo mención a eso.\p"
	.string "Dudo mucho que la anciana\n"
	.string "intentara ocultarme algo así…\p"
	.string "{PLAYER}{KUN}, ¿podrías pensarlo\n"
	.string "con más detenimiento?$"

CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
	.string "PLUBIO: ¿Qué? ¿No te acuerdas?\n"
	.string "Pues eso es un problema…\p"
	.string "¿No te acuerdas ni un poquito?$"

CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
	.string "PLUBIO: ¿En el PILAR CELESTE?\p"
	.string "¡Sí, eso es!\n"
	.string "¡Tiene que estar allí!\p"
	.string "{PLAYER}{KUN}, no hay tiempo que perder.\n"
	.string "¡Vamos al PILAR CELESTE enseguida!$"

