SlateportCity_SternsShipyard_1F_MapScripts::
	.byte 0

SlateportCity_SternsShipyard_1F_EventScript_Dock::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_EventScript_Briney::
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
	.string "A ver… Si esto va aquí\n"
	.string "y aquello va allá…\p"
	.string "¿Dónde va esto entonces?\n"
	.string "¿Y qué es esta cosa?\p"
	.string "¡Aaaaah!\n"
	.string "¡No entiendo nada de nada!$"

SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
	.string "¿Eh?\n"
	.string "Ah, hola, soy MUÉLLEZ.\p"
	.string "El CAP. BABOR me ha encargado\n"
	.string "que diseñe un ferry.\p"
	.string "Oh, eso de ahí…\n"
	.string "¿Son las PIEZAS DEVON?\p"
	.string "Pero… No puede ser…\p"
	.string "El CAP. BABOR se fue a no sé\n"
	.string "dónde. Tenía algo que hacer.\p"
	.string "¿Podrías ir a buscarlo\n"
	.string "y entregárselas?$"

SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
	.string "MUÉLLEZ: ¿Adónde puede haber\n"
	.string "ido el CAP. BABOR?\p"
	.string "¿Podrías ir a buscarlo\n"
	.string "y entregarle ese paquete?$"

SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
	.string "MUÉLLEZ: Construir barcos es todo\n"
	.string "un arte.\p"
	.string "Hay muchas cosas que no\n"
	.string "se pueden calcular sin más.\p"
	.string "Cómo me gustaría que algún\n"
	.string "lobo de mar me aconsejase…$"

SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
	.string "MUÉLLEZ: ¡Hola! El SR. ARENQUE\n"
	.string "se ha unido a nosotros.\p"
	.string "Gracias a su valiosísima ayuda,\n"
	.string "nuestro proyecto de ferry\l"
	.string "empieza a tomar forma.$"

SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
	.string "MUÉLLEZ: ¡El ferry está listo!\p"
	.string "¡El nuevo S.S. MAREA es toda\n"
	.string "una maravilla tecnológica!\p"
	.string "Sin embargo, creo que aún\n"
	.string "podemos mejorar el diseño.\p"
	.string "¡Ya sabes que el avance\n"
	.string "de la ciencia es imparable!$"

SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
	.string "SR. ARENQUE: ¡Anda, {PLAYER}{KUN}!\n"
	.string "¡Cuánto tiempo!\p"
	.string "Desde que te conocí, me he\n"
	.string "sentido la mar de inquieto.\p"
	.string "Así que he decidido ayudar a\n"
	.string "MUÉLLEZ a construir el ferry.\p"
	.string "¡Imagina cuánta gente podría\n"
	.string "transportar en cada viaje!\p"
	.string "¿Sabes? Este MUÉLLEZ es\n"
	.string "un tipo especial de verdad.\p"
	.string "Uniendo sus conocimientos\n"
	.string "y mi experiencia, haremos\l"
	.string "un gran barco, ¡ya lo creo!$"

SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
	.string "Las estaciones, el tiempo,\n"
	.string "la posición de la Luna…\p"
	.string "El estado del mar se ve afectado\n"
	.string "por todo esto y mucho más.\p"
	.string "¡Exactamente!\n"
	.string "¡El mar tiene vida!$"

SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
	.string "Me entra mareo con nada…, así que\n"
	.string "me han destinado a este puesto.$"

