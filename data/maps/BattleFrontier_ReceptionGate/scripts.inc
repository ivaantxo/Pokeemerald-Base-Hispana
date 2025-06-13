BattleFrontier_ReceptionGate_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
	.byte 0

BattleFrontier_ReceptionGate_OnTransition:
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	end

BattleFrontier_ReceptionGate_OnFrame:
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
	.2byte 0

BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
	lockall
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
	playse SE_PIN
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
	waitmovement 0
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
	end

BattleFrontier_ReceptionGate_EventScript_ScottScene::
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
	waitfanfare
	waitmessage
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
	setflag FLAG_SYS_FRONTIER_PASS
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
	waitmovement 0
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
	releaseall
	end

BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

@ Unused
BattleFrontier_ReceptionGate_Movement_WalkDown:
	walk_down
	walk_down
	step_end

BattleFrontier_ReceptionGate_Movement_ScottEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_ScottExit:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

BattleFrontier_ReceptionGate_EventScript_Greeter::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
	end

BattleFrontier_ReceptionGate_EventScript_BattleTower::
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattleDome::
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePalace::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattleArena::
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattleFactory::
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePike::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_RankingHall::
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_RulesGuide::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
	waitmessage
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
	end

BattleFrontier_ReceptionGate_EventScript_LevelMode::
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_Level50::
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_OpenLevel::
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_MonEntry::
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_HoldItems::
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
	waitmessage
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
	end

BattleFrontier_ReceptionGate_EventScript_Symbols::
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_RecordBattle::
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_BattlePoints::
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay:
	.string "¿Es la primera vez que vienes?\n"
	.string "¡Entonces por aquí, por favor!$"

BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier:
	.string "¡Éste es el FRENTE de BATALLA!\n"
	.string "¡La prueba final de los ENTRENADORES!$"

BattleFrontier_ReceptionGate_Text_IssueFrontierPass:
	.string "Como es la primera vez que nos visitas,\n"
	.string "te entregaremos el PASE del FRENTE.\p"
	.string "Te permitirá entrar y competir en todos\n"
	.string "los edificios del FRENTE de BATALLA.\p"
	.string "¡Aquí tienes!$"

BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass:
	.string "{PLAYER} obtuvo el PASE del FRENTE.$"

BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass:
	.string "{PLAYER} colocó su FICHA de ENTRENADOR\n"
	.string "dentro del PASE del FRENTE.$"

BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier:
	.string "¡Y ahora, disfruta al máximo de todo lo\n"
	.string "que te ofrece el FRENTE de BATALLA!$"

BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame:
	.string "(?): Bueno, bueno, ¡pero si es {PLAYER}{KUN}!\n"
	.string "¡Al final has venido!$"

BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay:
	.string "GUÍA: ¡Oh! ¡Don TRETO! ¡Está usted aquí!\n"
	.string "¡Muy buenas! ¡Muy buenas tenga usted!$"

BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere:
	.string "TRETO: ¡Me alegra mucho verte,\n"
	.string "por supuesto que sí!\p"
	.string "Espero que tengas tiempo de\n"
	.string "echarle un vistazo a todo esto.\p"
	.string "Y, por supuesto, espero que no vengas\n"
	.string "sólo a mirar, sino también a combatir.\p"
	.string "Aquí tengo mi rinconcito, así que\n"
	.string "puedes venir a verme cuando quieras.$"

BattleFrontier_ReceptionGate_Text_YourGuideToFacilities:
	.string "¿Buscas información sobre algún\n"
	.string "edificio del FRENTE de BATALLA?$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich2:
	.string "¿Sobre cuál?$"

BattleFrontier_ReceptionGate_Text_BattleTowerInfo:
	.string "Esta torre es para muchos el edificio\n"
	.string "emblemático del FRENTE de BATALLA.\p"
	.string "En ella se disputan cuatro tipos\n"
	.string "de combates: INDIVIDUALES,\l"
	.string "DOBLES, MÚLTIPLES y\l"
	.string "MULTIJUGADOR con CONEXIÓN.$"

BattleFrontier_ReceptionGate_Text_BattleDomeInfo:
	.string "La CÚPULA BATALLA es un enorme\n"
	.string "edificio con forma de huevo gigante.\p"
	.string "Dentro de ella se disputan los llamados\n"
	.string "TORNEOS de COMBATES, en dos\l"
	.string "modalidades: INDIVIDUAL y DOBLES.$"

BattleFrontier_ReceptionGate_Text_BattlePalaceInfo:
	.string "El PALACIO BATALLA es un edificio rojo\n"
	.string "situado al este del FRENTE de BATALLA.\p"
	.string "En él se celebran los llamados\n"
	.string "COMBATES sin TUTELA, en dos\l"
	.string "modalidades: INDIVIDUAL y DOBLES.$"

BattleFrontier_ReceptionGate_Text_BattleArenaInfo:
	.string "El DOJO BATALLA es el edificio\n"
	.string "de aspecto oriental situado en la\l"
	.string "zona central del FRENTE de BATALLA.\p"
	.string "Los denominados TORNEOS con JUEZ\n"
	.string "tienen lugar en el DOJO BATALLA.$"

BattleFrontier_ReceptionGate_Text_BattleFactoryInfo:
	.string "La FÁBRICA BATALLA es ese enorme\n"
	.string "edificio que está nada más salir\l"
	.string "a la izquierda.\p"
	.string "Allí se celebran los famosos COMBATES\n"
	.string "con TRUEQUE, tanto en la modalidad\l"
	.string "INDIVIDUAL como en la de DOBLES.$"

BattleFrontier_ReceptionGate_Text_BattlePikeInfo:
	.string "La SIERPE BATALLA es ese edificio con\n"
	.string "la forma de un POKéMON que está situado\l"
	.string "en el centro del FRENTE de BATALLA.\p"
	.string "El desafío conocido como\n"
	.string "ELECCIÓN de COMBATES se celebra allí.$"

BattleFrontier_ReceptionGate_Text_BattlePyramidInfo:
	.string "La PIRÁMIDE BATALLA es la gran\n"
	.string "pirámide que está al noreste\l"
	.string "del FRENTE de BATALLA.\p"
	.string "Allí podrás emprender las llamadas\n"
	.string "EXPEDICIONES de COMBATES.$"

BattleFrontier_ReceptionGate_Text_RankingHallInfo:
	.string "El HALL de las CLASIFICACIONES\n"
	.string "se halla junto a la TORRE BATALLA.\p"
	.string "En él podrás ver los récords logrados\n"
	.string "por los más grandes ENTRENADORES\l"
	.string "en los distintos desafíos que ofrece\l"
	.string "el FRENTE de BATALLA.$"

BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo:
	.string "El CENTRO del SERVICIO de CANJE está\n"
	.string "junto a la entrada de la TORRE BATALLA.\p"
	.string "Los PUNTOS de BATALLA que hayas\n"
	.string "ganado en el FRENTE de BATALLA podrás\l"
	.string "canjearlos allí por fabulosos premios.$"

BattleFrontier_ReceptionGate_Text_YourGuideToRules:
	.string "Mi trabajo es informar sobre las reglas\n"
	.string "básicas comunes a todos los desafíos\l"
	.string "a los que puedes enfrentarte en los\l"
	.string "escenarios del FRENTE de BATALLA.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhat:
	.string "¿Sobre qué quieres que te hable?$"

BattleFrontier_ReceptionGate_Text_LevelModeInfo:
	.string "Todos los desafíos del FRENTE\n"
	.string "de BATALLA están disponibles\l"
	.string "en el nivel 50 y el nivel libre.$"

BattleFrontier_ReceptionGate_Text_Level50Info:
	.string "El nivel 50 está abierto a los POKéMON\n"
	.string "cuyo nivel sea igual o inferior a 50.\p"
	.string "Pero debes saber que ninguno de los\n"
	.string "ENTRENADORES a los que te enfrentes\l"
	.string "tendrá POKéMON por debajo del nivel 50.\p"
	.string "Es el nivel básico para enfrentarse a\n"
	.string "los desafíos del FRENTE de BATALLA.\p"
	.string "Para empezar, te recomendamos\n"
	.string "que elijas este nivel.$"

BattleFrontier_ReceptionGate_Text_OpenLevelInfo:
	.string "El nivel libre, como su nombre indica,\n"
	.string "no impone límite alguno al nivel de los\l"
	.string "POKéMON con los que se combate.\p"
	.string "Los niveles de tus rivales se ajustarán\n"
	.string "para igualarse a los de tus POKéMON.\p"
	.string "Con todo, ningún ENTRENADOR\n"
	.string "al que te enfrentes tendrá POKéMON\l"
	.string "por debajo del nivel 60.$"

BattleFrontier_ReceptionGate_Text_MonEntryInfo:
	.string "Prácticamente cualquier POKéMON podrá\n"
	.string "participar en los desafíos que ofrece\l"
	.string "cualquiera de los escenarios que hay.\p"
	.string "No obstante, los HUEVOS y ciertos\n"
	.string "POKéMON no podrán hacerlo.\p"
	.string "El número de POKéMON necesario para\n"
	.string "participar dependerá del escenario.\p"
	.string "Sin embargo, lo que no podrás hacer en\n"
	.string "ninguno de los escenarios es participar\l"
	.string "con dos POKéMON iguales.$"

BattleFrontier_ReceptionGate_Text_HoldItemsInfo:
	.string "Antes de afrontar cualquier desafío\n"
	.string "en un escenario del FRENTE de BATALLA,\l"
	.string "comprueba que no haya dos de tus\l"
	.string "POKéMON sosteniendo el mismo objeto.\p"
	.string "Asegúrate de que todos los POKéMON\n"
	.string "que vayan a entrar en un combate\l"
	.string "sostienen objetos diferentes.$"

BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass:
	.string "Estaré encantado de explicarte lo que\n"
	.string "quieras sobre el PASE del FRENTE.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich1:
	.string "¿Te explico algo en especial?$"

BattleFrontier_ReceptionGate_Text_SymbolsInfo:
	.string "Hay siete escenarios diferentes\n"
	.string "en el FRENTE de BATALLA.\p"
	.string "Cuando un ENTRENADOR demuestra\n"
	.string "sus habilidades y triunfa en uno de los\l"
	.string "edificios, puede que reciba su símbolo.\p"
	.string "Para ganar un símbolo, puede que haya\n"
	.string "que derrotar a varios ENTRENADORES\l"
	.string "consecutivamente y puede que en varias\l"
	.string "ocasiones.\p"
	.string "No es nada fácil ganar estos símbolos.\n"
	.string "¡Que tengas suerte!$"

BattleFrontier_ReceptionGate_Text_RecordedBattleInfo:
	.string "En tu PASE del FRENTE puedes\n"
	.string "grabar un combate.\p"
	.string "Puedes grabar un combate en el que te\n"
	.string "hayas enfrentado a uno o varios amigos.\p"
	.string "O puedes grabar uno de tus combates\n"
	.string "del FRENTE de BATALLA, salvo los de la\l"
	.string "SIERPE BATALLA y la PIRÁMIDE BATALLA.\p"
	.string "La opción de grabarlos aparece\n"
	.string "al terminar el combate.$"

BattleFrontier_ReceptionGate_Text_BattlePointsInfo:
	.string "Cuando un ENTRENADOR lucha de manera\n"
	.string "extraordinaria en el FRENTE de BATALLA,\l"
	.string "recibe PUNTOS de BATALLA como premio.\p"
	.string "Luego, esos PUNTOS de BATALLA\n"
	.string "pueden canjearse por objetos en\l"
	.string "el CENTRO del SERVICIO de CANJE.$"

