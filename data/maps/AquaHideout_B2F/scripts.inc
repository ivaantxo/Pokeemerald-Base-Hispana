AquaHideout_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
	.byte 0

AquaHideout_B2F_OnTransition:
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
	end

AquaHideout_B2F_EventScript_PreventMattNoticing::
	setvar VAR_TEMP_1, 1
	return

AquaHideout_B2F_EventScript_MattNoticePlayer::
	lockall
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_TEMP_1, 1
	releaseall
	end

AquaHideout_B2F_EventScript_Matt::
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_SubmarineEscape::
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 20
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
	waitmovement 0
	removeobject VAR_0x8009
	delay 20
	applymovement VAR_0x8008, Common_Movement_FacePlayer
	waitmovement 0
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	release
	end

AquaHideout_B2F_Movement_SumbarineDepartLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

@ Unused
AquaHideout_B2F_Movement_SumbarineDepartRight:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

AquaHideout_B2F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt4Defeated::
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_Text_MattIntro:
	.string "Jo, jo, jo…\p"
	.string "¿Has llegado hasta aquí?\n"
	.string "Creo que te hemos subestimado.\p"
	.string "¡Pero ya está bien de tonterías!\p"
	.string "Yo soy más fuerte que los SOLDADOS\n"
	.string "con los que has luchado hasta ahora.\p"
	.string "No voy a limitarme a hacerte perder\n"
	.string "tiempo… ¡Te voy a pulverizar!$"

AquaHideout_B2F_Text_MattDefeat:
	.string "Jo, jo, jo…\n"
	.string "Yo tampoco lo he logrado…$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
	.string "¡Jo, jo, jo!\p"
	.string "¡Mientras me divertía contigo,\n"
	.string "nuestro JEFE terminó los preparativos!$"

AquaHideout_B2F_Text_MattPostBattle:
	.string "¡Jo, jo, jo!\p"
	.string "Nuestro JEFE ya ha ido a ocultarse\n"
	.string "a una cueva submarina.\p"
	.string "Si quieres encontrarlo, tendrás que\n"
	.string "buscarlo en el gran mar que hay\l"
	.string "más allá de CALAGUA.\p"
	.string "¿Pero acaso podrás encontrar\n"
	.string "siquiera el mar? ¡Jo, jo, jo!$"

AquaHideout_B2F_Text_Grunt4Intro:
	.string "¡Jua, jua, jua! ¡Estoy harto de esperar!\n"
	.string "¡Me debes un combate!$"

AquaHideout_B2F_Text_Grunt4Defeat:
	.string "Total, podía haberme quedado\n"
	.string "esperando…$"

AquaHideout_B2F_Text_Grunt4PostBattle:
	.string "El JEFE no va a estar satisfecho…$"

AquaHideout_B2F_Text_Grunt6Intro:
	.string "Baldosas teletransportadoras:\n"
	.string "¡el orgullo de la GUARIDA!\p"
	.string "No tienes ni idea de dónde estás,\n"
	.string "¿verdad?\p"
	.string "Aturullar al enemigo para luego caer\n"
	.string "sobre ellos. ¡Ése es nuestro plan!$"

AquaHideout_B2F_Text_Grunt6Defeat:
	.string "¿Y tú qué desayunas?\n"
	.string "¿Cómo es que no te cansas?$"

AquaHideout_B2F_Text_Grunt6PostBattle:
	.string "Esto me recuerda… que no me acuerdo\n"
	.string "de dónde puse la MASTER BALL.\p"
	.string "Si no la protejo bien, el JEFE me va\n"
	.string "a machacar…$"

AquaHideout_B2F_Text_Grunt8Intro:
	.string "Lo primero que aprendí al entrar en el\n"
	.string "EQUIPO AQUA fue cómo están conectadas\l"
	.string "estas baldosas teletransportadoras.$"

AquaHideout_B2F_Text_Grunt8Defeat:
	.string "Debería pensar en algo más que en las\n"
	.string "baldosas teletransportadoras…$"

AquaHideout_B2F_Text_Grunt8PostBattle:
	.string "Tengo que encontrar la manera\n"
	.string "de luchar de forma más eficaz…$"
