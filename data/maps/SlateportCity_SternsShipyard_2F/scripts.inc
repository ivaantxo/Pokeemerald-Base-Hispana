SlateportCity_SternsShipyard_2F_MapScripts::
	.byte 0

SlateportCity_SternsShipyard_2F_EventScript_Scientist1::
	msgbox SlateportCity_SternsShipyard_2F_Text_ShipDesignMoreLikeBuilding, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_2F_EventScript_Scientist2::
	msgbox SlateportCity_SternsShipyard_2F_Text_FloatsBecauseBuoyancy, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_2F_Text_ShipDesignMoreLikeBuilding:
	.string "Diseñar un gran barco se parece\n"
	.string "más a construir un edificio que\l"
	.string "a crear un medio de transporte.$"

SlateportCity_SternsShipyard_2F_Text_FloatsBecauseBuoyancy:
	.string "¿No te parece extraño que un barco\n"
	.string "construido con hierro pueda flotar?\p"
	.string "Pues bien, flota gracias al principio\n"
	.string "de la flotabilidad. ¡Naturalmente!$"

