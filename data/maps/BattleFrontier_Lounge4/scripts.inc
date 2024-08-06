BattleFrontier_Lounge4_MapScripts::
	.byte 0

BattleFrontier_Lounge4_EventScript_Woman::
	msgbox BattleFrontier_Lounge4_Text_WonderIfInterviewsAiring, MSGBOX_NPC
	end

BattleFrontier_Lounge4_EventScript_Cook::
	msgbox BattleFrontier_Lounge4_Text_IfIOpenedRestaurantHere, MSGBOX_NPC
	end

BattleFrontier_Lounge4_EventScript_Man::
	msgbox BattleFrontier_Lounge4_Text_NeedBreatherAfterBattles, MSGBOX_NPC
	end

BattleFrontier_Lounge4_Text_WonderIfInterviewsAiring:
	.string "¿Entrevistarán hoy a algún ENTRENADOR\n"
	.string "de los buenos?$"

BattleFrontier_Lounge4_Text_IfIOpenedRestaurantHere:
	.string "Si abriese un restaurante aquí,\n"
	.string "seguro que me forraba.$"

BattleFrontier_Lounge4_Text_NeedBreatherAfterBattles:
	.string "¡Uf!…\p"
	.string "Necesito tomarme estos descansos\n"
	.string "después de unos combates tan duros…\p"
	.string "Pero lo que no puedo es dejar de pensar\n"
	.string "en estrategias y movimientos.$"

