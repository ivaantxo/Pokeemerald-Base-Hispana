AquaHideout_1F_MapScripts::
	.byte 0

@ The below two entrance guards give hints about what to do to progress the story
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint1::
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint1::
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint2::
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint2::
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_1F_EventScript_Grunt1Defeated::
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_Text_OurBossIsSnatchingSomething:
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
	.string "a dar la lata al EQUIPO AQUA?\p"
	.string "¡Nuestro JEFE no está aquí!\n"
	.string "¡Ha ido a birlar algo muy importante!\p"
	.string "¿Qué?\n"
	.string "¿Que adónde ha ido?\p"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
	.string "diría algo tan sumamente importante?$"

AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
	.string "¿Cómo? ¿Qué?\n"
	.string "¿Eres un secuaz del EQUIPO MAGMA?\p"
	.string "Me han dicho que el EQUIPO MAGMA\n"
	.string "está intentado despertar a un POKéMON\l"
	.string "impresionante en su GUARIDA.\p"
	.string "Pero ¿dónde estará su GUARIDA?$"

AquaHideout_1F_Text_BossWentToJackASubmarine:
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
	.string "a dar la lata al EQUIPO AQUA?\p"
	.string "¡Nuestro JEFE no está aquí!\n"
	.string "¡Ha ido a mangar un submarino!\p"
	.string "¿Qué?\n"
	.string "¿Que adónde ha ido?\p"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
	.string "diría algo tan sumamente importante?$"

AquaHideout_1F_Text_BossIsOnRoute122:
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
	.string "a dar la lata al EQUIPO AQUA?\p"
	.string "¡Nuestro JEFE no está aquí! ¡Está en\n"
	.string "la RUTA 122, de camino al MONTE PÍRICO!\p"
	.string "¿Qué?\n"
	.string "¿Que por qué se ha ido?\p"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
	.string "diría algo tan sumamente importante?$"

AquaHideout_1F_Text_TeamMagmaAtMtChimney:
	.string "¿Cómo? ¿Qué?\n"
	.string "¿Eres un secuaz del EQUIPO MAGMA?\p"
	.string "Me han dicho que el EQUIPO MAGMA\n"
	.string "anda detrás de un POKéMON,\l"
	.string "allá por el MONTE CENIZO.\p"
	.string "Pero ¿cómo será ese POKéMON?$"

AquaHideout_1F_Text_BossIsInSlateportCity:
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
	.string "a dar la lata al EQUIPO AQUA?\p"
	.string "¡Nuestro JEFE no está aquí!\n"
	.string "¡Está de camino a CIUDAD PORTUAL!\p"
	.string "¿Qué?\n"
	.string "¿Que por qué se ha ido?\p"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
	.string "diría algo tan sumamente importante?$"

AquaHideout_1F_Text_Grunt1Intro:
	.string "¡Personaje sospechoso a la vista!$"

AquaHideout_1F_Text_Grunt1Defeat:
	.string "Brrr…\n"
	.string "¡He perdido!$"

AquaHideout_1F_Text_Grunt1PostBattle:
	.string "El EQUIPO no estará satisfecho,\n"
	.string "pero yo he hecho lo que he podido…$"

