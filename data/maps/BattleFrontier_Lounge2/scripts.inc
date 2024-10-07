BattleFrontier_Lounge2_MapScripts::
	.byte 0

@ This NPC gives hints about a random facility or battle mode.
@ For battle modes he gives generic advice
@ For facilities, depending on how far the player has progressed he will say either
@    The name of the Frontier Brain there
@    The type and description of the 3 pokemon they use in their silver battle
@    The type and description of the 3 pokemon they use in their gold battle
BattleFrontier_Lounge2_EventScript_FrontierManiac::
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_AlreadyMetManiac::
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_GiveAdvice::
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_BufferSingle
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_BufferDouble
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_BufferMulti
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BufferMultiLink
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_BufferBattleDome
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_BufferBattleFactory
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_BufferBattlePalace
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_BufferBattleArena
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_BufferBattlePike
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
@ <= FRONTIER_MANIAC_TOWER_LINK is any Battle Tower mode
	call_if_le VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BattleTowerNews
@ >= FRONTIER_MANIAC_DOME is any facility other than Battle Tower
	call_if_ge VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_FacilityNews
	special ShowFrontierManiacMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge2_EventScript_BattleTowerNews::
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_FacilityNews::
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_BufferSingle::
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
	return

BattleFrontier_Lounge2_EventScript_BufferDouble::
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
	return

BattleFrontier_Lounge2_EventScript_BufferMulti::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
	return

BattleFrontier_Lounge2_EventScript_BufferMultiLink::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
	return

BattleFrontier_Lounge2_EventScript_BufferBattleDome::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
	return

BattleFrontier_Lounge2_EventScript_BufferBattleFactory::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePalace::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
	return

BattleFrontier_Lounge2_EventScript_BufferBattleArena::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePike::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePyramid::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
	return

BattleFrontier_Lounge2_EventScript_Maniac1::
	lock
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac2::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac3::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_TriathleteF::
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
	end

BattleFrontier_Lounge2_Text_FrontierManiacIntro::
	.string "¡Eh, qué tal! Si quieres saber algo sobre\n"
	.string "el FRENTE de BATALLA, yo soy tu hombre.\p"
	.string "Se puede decir que soy\n"
	.string "el FOROFO del FRENTE.\p"
	.string "Sólo para asegurarme,\n"
	.string "tú entrenas POKéMON, ¿verdad?\p"
	.string "Pues estaré encantado de contarte las\n"
	.string "últimas noticias del FRENTE de BATALLA.$"

BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
	.string "¿Qué tal? ¿Has venido a preguntarme\n"
	.string "qué es lo que más está de moda?$"

@ Unused
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
	.string "Well? Well? Well?\p"
	.string "I’m sure my information’s been\n"
	.string "seriously useful to you, right?$"

BattleFrontier_Lounge2_Text_FacilityIsHottest::
	.string "Déjame pensar…\p"
	.string "Yo diría que…, sí,\n"
	.string "{STR_VAR_1}, sin duda.$"

BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
	.string "Déjame pensar…\p"
	.string "Creo que {STR_VAR_1},\n"
	.string "de TORRE BATALLA, es lo que más mola.$"

BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
	.string "¡Seguro que no lo sabías!\p"
	.string "Allí hay una ENTRENADORA\n"
	.string "de esas a las que TRETO denomina\l"
	.string "AS del FRENTE.\p"
	.string "Es la misteriosa DAMA de la TORRE,\n"
	.string "y es la que hace y deshace por allí.$"

BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "a la DAMA de la TORRE?\p"
	.string "Para medir las fuerzas de su adversario,\n"
	.string "suele usar estos POKéMON:\p"
	.string "Un POKéMON PSI de tipo PSÍQUICO,\n"
	.string "un POKéMON VOLCÁN de tipo FUEGO\l"
	.string "y un POKéMON DORMIR de tipo NORMAL.$"

BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "a la DAMA de la TORRE en serio?\p"
	.string "Cuando pone toda la carne en el asador,\n"
	.string "parece que usa estos POKéMON:\p"
	.string "Un POKéMON EÓN de tipo PSÍQUICO y\n"
	.string "DRAGÓN, un POKéMON TRUENO de tipo\l"
	.string "ELÉCTRICO y un POKéMON DORMIR\l"
	.string "de tipo NORMAL.$"

BattleFrontier_Lounge2_Text_DomeAceIsThere::
	.string "¡Seguro que no lo sabías!\p"
	.string "Allí hay un ENTRENADOR de esos\n"
	.string "que TRETO denomina AS del FRENTE.\p"
	.string "Es el extravagante ASTRO de la CÚPULA\n"
	.string "y es el jefe de allí, vaya.$"

BattleFrontier_Lounge2_Text_DomeAceSilverMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al ASTRO de la CÚPULA?\p"
	.string "Cuando no quiere cebarse con el rival,\n"
	.string "suele usar estos tres POKéMON:\p"
	.string "Un POKéMON DRAGÓN de tipo DRAGÓN\n"
	.string "y VOLADOR, un POKéMON PEZ LODO\l"
	.string "de tipo AGUA y TIERRA, y un POKéMON\l"
	.string "LLAMA de tipo FUEGO y VOLADOR.$"

BattleFrontier_Lounge2_Text_DomeAceGoldMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al ASTRO de la CÚPULA en serio?\p"
	.string "Cuando quiere demostrar lo que sabe,\n"
	.string "suele usar estos tres POKéMON:\p"
	.string "Un POKéMON EÓN de tipo DRAGÓN y\n"
	.string "PSÍQUICO, un POKéMON PEZ LODO de tipo\l"
	.string "AGUA y TIERRA, y un POKéMON PATA\l"
	.string "HIERRO de tipo ACERO y PSÍQUICO.$"

BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
	.string "¡Apuesto a que no lo sabías!\p"
	.string "Allí hay un ENTRENADOR de esos\n"
	.string "que TRETO denomina AS del FRENTE.\p"
	.string "Es un tipo un poco raro, pero la cosa\n"
	.string "es que es el JEFE de la FÁBRICA.$"

BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al JEFE de la FÁBRICA?\p"
	.string "Si mal no recuerdo, en combate\n"
	.string "suele alquilar sólo tres POKéMON:\p"
	.string "Suele luchar en igualdad\n"
	.string "de condiciones contra su rival.$"

BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al JEFE de la FÁBRICA en serio?\p"
	.string "Aunque el combate vaya en serio,\n"
	.string "sigue alquilando sólo tres POKéMON:\p"
	.string "Siempre lucha en igualdad\n"
	.string "de condiciones contra su rival.$"

BattleFrontier_Lounge2_Text_PikeQueenIsThere::
	.string "¡Apuesto a que no lo sabías!\p"
	.string "Allí hay una ENTRENADORA\n"
	.string "de esas a las que TRETO denomina\l"
	.string "AS del FRENTE.\p"
	.string "Da un miedo terrible,\n"
	.string "¡es la REINA de la SIERPE!$"

BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "a la REINA de la SIERPE?\p"
	.string "Cuando está de buenas, suele\n"
	.string "usar estos tres POKéMON:\p"
	.string "Un POKéMON COLMILLOS de tipo VENENO,\n"
	.string "un POKéMON MOHO de tipo BICHO y ROCA,\l"
	.string "y un POKéMON TIERNO de tipo AGUA.$"

BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "a la REINA de la SIERPE en serio?\p"
	.string "Cuando está furiosa de verdad,\n"
	.string "suele usar estos tres POKéMON:\p"
	.string "Un POKéMON COLMILLOS de tipo VENENO,\n"
	.string "un POKéMON SERPFÉRREA de tipo ACERO\l"
	.string "y TIERRA, y un POKéMON ATROCIDAD\l"
	.string "de tipo AGUA y VOLADOR.$"

BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
	.string "¡Apuesto a que no lo sabías!\p"
	.string "Allí hay una ENTRENADORA\n"
	.string "de esas a las que TRETO denomina\l"
	.string "AS del FRENTE.\p"
	.string "Es una belleza, es la MAESTRA del DOJO.\n"
	.string "Parece que es quien manda allí.$"

BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "a la MAESTRA del DOJO?\p"
	.string "Cuando está calibrando las fuerzas del\n"
	.string "enemigo, suele usar estos tres POKéMON:\p"
	.string "Un POKéMON UNICORNIO de tipo BICHO\n"
	.string "y LUCHA, un POKéMON LUZ LUNAR\l"
	.string "de tipo SINIESTRO y un POKéMON MUDA\l"
	.string "de tipo BICHO y FANTASMA.$"

BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "a la MAESTRA del DOJO en serio?\p"
	.string "Cuando da el todo por el todo,\n"
	.string "suele usar estos tres POKéMON:\p"
	.string "Un POKéMON LUZ LUNAR de tipo\n"
	.string "SINIESTRO, un POKéMON SOMBRA de tipo\l"
	.string "FANTASMA y VENENO, y un POKéMON\l"
	.string "HONGO de tipo PLANTA y LUCHA.$"

BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
	.string "¡Apuesto a que no lo sabías!\p"
	.string "Allí hay un ENTRENADOR de esos\n"
	.string "que TRETO denomina AS del FRENTE.\p"
	.string "Es un ENTRENADOR siniestro llamado\n"
	.string "AMO del PALACIO, y es el que manda allí.$"

BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al AMO del PALACIO?\p"
	.string "Cuando quiere poner a prueba al rival,\n"
	.string "dicen que suele usar estos POKéMON:\p"
	.string "Un POKéMON MURCIÉLAGO de tipo VENENO\n"
	.string "y VOLADOR, un POKéMON HOLGAZÁN de\l"
	.string "tipo NORMAL y un POKéMON TRANSPORTE\l"
	.string "de tipo AGUA y HIELO.$"

BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al AMO del PALACIO en serio?\p"
	.string "Cuando se la juega de verdad,\n"
	.string "dicen que usa estos POKéMON:\p"
	.string "Un POKéMON LEGENDARIO de tipo FUEGO,\n"
	.string "un POKéMON HOLGAZÁN de tipo NORMAL\l"
	.string "y un POKéMON AURORA de tipo AGUA.$"

BattleFrontier_Lounge2_Text_PyramidKingIsThere::
	.string "¡Apuesto a que no lo sabías!\p"
	.string "Allí hay un ENTRENADOR de esos\n"
	.string "que TRETO denomina AS del FRENTE.\p"
	.string "Es el feroz ENTRENADOR al que llaman\n"
	.string "REY de la PIRÁMIDE,\l"
	.string "y allí es como el dueño.$"

BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al REY de la PIRÁMIDE?\p"
	.string "Cuando quiere probar al enemigo,\n"
	.string "usa siempre estos POKéMON:\p"
	.string "Un POKéMON PICO ROCA de tipo ROCA,\n"
	.string "un POKéMON ICEBERG de tipo HIELO\l"
	.string "y un POKéMON HIERRO de tipo ACERO.$"

BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
	.string "¿Te has enfrentado alguna vez\n"
	.string "al REY de la PIRÁMIDE en serio?\p"
	.string "Cuando no se anda con chiquitas,\n"
	.string "usa siempre estos POKéMON:\p"
	.string "Un POKéMON CONGELAR de tipo HIELO\n"
	.string "y VOLADOR, un POKéMON ELÉCTRICO\l"
	.string "de tipo ELÉCTRICO y VOLADOR, y un\l"
	.string "POKéMON LLAMA de tipo FUEGO y VOLADOR.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
	.string "Claro, hay varios sitios donde puedes\n"
	.string "enfrentarte en COMBATES DOBLES.\p"
	.string "Pero digamos que lo básico son las\n"
	.string "SALAS BATALLA de COMBATES DOBLES\l"
	.string "de la TORRE BATALLA.\p"
	.string "Es donde se aprende de verdad\n"
	.string "a entablar COMBATES DOBLES\l"
	.string "en el FRENTE de BATALLA.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
	.string "Ten cuidado en los combates de aquí.\p"
	.string "He oído que hay ENTRENADORES\n"
	.string "que han creado estrategias sólo\l"
	.string "para los COMBATES DOBLES.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
	.string "Cuando creas que dominas los COMBATES\n"
	.string "DOBLES de aquí, podrás pensar en ir\l"
	.string "a otros lugares donde también haya.$"

BattleFrontier_Lounge2_Text_MultiBattleAdvice::
	.string "En el SALÓN BATALLA se juntan\n"
	.string "todo tipo de ENTRENADORES.\p"
	.string "¡Piénsalo, igual hasta te encuentras\n"
	.string "con tus amigos o con tus seguidores!\l"
	.string "¡Busca y seguro que encuentras!$"

BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
	.string "Si estás con un amigo, ve a la\n"
	.string "SALA BATALLA de COMBATES\l"
	.string "MULTIJUGADOR con CONEXIÓN.\p"
	.string "¡Si tu amigo es muy fuerte, prepárate\n"
	.string "para enfrentarte a enemigos muy duros!$"

BattleFrontier_Lounge2_Text_NewsGatheringPower::
	.string "¡Qué extraordinario poder adivinatorio!\n"
	.string "¡Nadie puede compararse a mi mentor!$"

BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
	.string "¡Qué magnífico poder de observación!\n"
	.string "¡Nadie puede compararse a mi mentor!$"

BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
	.string "¡Qué increíble poder de persuasión!\n"
	.string "¡Nadie puede compararse a mi mentor!$"

BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
	.string "¡Qué sitio más raro!…\n"
	.string "Me da hasta miedo…$"

