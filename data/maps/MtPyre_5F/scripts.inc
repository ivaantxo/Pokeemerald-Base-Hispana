MtPyre_5F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Tasha::
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_TashaIntro:
	.string "Me encanta pasar miedo…\n"
	.string "No puedo evitarlo.\p"
	.string "Y estar en este lugar…\n"
	.string "¡me pone la carne de gallina!$"

MtPyre_4F_Text_TashaDefeat:
	.string "Odio perder…$"

MtPyre_4F_Text_TashaPostBattle:
	.string "Quiero ver algo terrorífico…\n"
	.string "No puedo irme de aquí todavía…\p"
	.string "Pero mientras tanto…,\n"
	.string "¿te quedarías a hacerme compañía?$"

