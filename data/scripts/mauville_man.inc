MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldMan::
	special Script_GetCurrentMauvilleMan
	switch VAR_RESULT
	case MAUVILLE_MAN_BARD, MauvilleCity_PokemonCenter_1F_EventScript_Bard
	case MAUVILLE_MAN_HIPSTER, MauvilleCity_PokemonCenter_1F_EventScript_Hipster
	case MAUVILLE_MAN_TRADER, MauvilleCity_PokemonCenter_1F_EventScript_Trader
	case MAUVILLE_MAN_STORYTELLER, MauvilleCity_PokemonCenter_1F_EventScript_Storyteller
	case MAUVILLE_MAN_GIDDY, MauvilleCity_PokemonCenter_1F_EventScript_Giddy
	end

@ Bard
MauvilleCity_PokemonCenter_1F_EventScript_Bard::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_PlaySong
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong
	end

MauvilleCity_PokemonCenter_1F_EventScript_PlaySong::
	setvar VAR_0x8004, FALSE  @ Play his current song
	special PlayBardSong
	delay 60
	special HasBardSongBeenChanged
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	end

MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics::
	setvar VAR_0x8004, EASY_CHAT_TYPE_BARD_SONG
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, TRUE  @ Play the new song
	special PlayBardSong
	delay 60
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	special SaveBardSongLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2, MSGBOX_DEFAULT
	release
	end

@ Hipster
MauvilleCity_PokemonCenter_1F_EventScript_Hipster::
	lock
	faceplayer
	setflag FLAG_UNLOCKED_TRENDY_SAYINGS
	msgbox MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening, MSGBOX_DEFAULT
	special HasHipsterTaughtWord
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord::
	special HipsterTryTeachWord
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_TeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TeachWord::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord, MSGBOX_DEFAULT
	special SetHipsterTaughtWord
	release
	end

@ Trader
MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor:
	.string "Hola, soy el CANJEADOR.\n"
	.string "¿Quieres intercambiar objetos\l"
	.string "de decoración conmigo?$"

MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues:
	.string "Ay…\n"
	.string "Nadie me quiere…$"

MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded:
	.string "Un momento… ¡Si tú y yo ya hemos\n"
	.string "intercambiado adornos!$"

MauvilleCity_PokemonCenter_1F_Text_PickADecorItem:
	.string "Si entre mis objetos ves alguno\n"
	.string "que te guste, habla sin miedo.$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything:
	.string "¡¿Que no quieres nada?!\n"
	.string "Nadie me quiere…$"

MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt:
	.string "Ese objeto de decoración solía\n"
	.string "pertenecer a {STR_VAR_1}.\p"
	.string "¿Lo quieres?$"

MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor:
	.string "Eh… Un momento… ¡Si tú no tienes\n"
	.string "ni un solo objeto de decoración!$"

MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade:
	.string "Vale, escoge el adorno que quieres\n"
	.string "intercambiar conmigo…$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade:
	.string "¡¿Que no quieres intercambiar nada?!\n"
	.string "Nadie me quiere…$"

MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis:
	.string "Tienes de esto para aburrir…\n"
	.string "No te queda sitio para más.$"

MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor:
	.string "Vale, cambiamos mi {STR_VAR_3}\n"
	.string "por tu {STR_VAR_2}, ¿no?$"

MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse:
	.string "¡Pero si estás usando ese objeto!\n"
	.string "¡¿Cómo vas a intercambiarlo?!$"

MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC:
	.string "¡Trato hecho!\n"
	.string "Te enviaré el adorno a tu PC.$"

MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne:
	.string "¡Huy, huy, huy, lo siento!\n"
	.string "Ese adorno es muy poco común.\l"
	.string "¡No lo puedo intercambiar!\p"
	.string "¿No te interesa ninguna otra cosa?$"

MauvilleCity_PokemonCenter_1F_EventScript_Trader::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade
	special GetTraderTradedFlag
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade::
	msgbox MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive::
	special TraderMenuGetDecoration
	waitstate
	goto_if_eq VAR_0x8004, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor
	goto_if_eq VAR_0x8004, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor
	special DoesPlayerHaveNoDecorations
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor::
	message MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor::
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive::
	msgbox MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade, MSGBOX_DEFAULT
	special TraderShowDecorationMenu
	waitstate
	goto_if_eq VAR_0x8006, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor
	goto_if_eq VAR_0x8006, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse
	special IsDecorationCategoryFull
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	special TraderDoDecorationTrade
	msgbox MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis, MSGBOX_DEFAULT
	release
	end

@ Storyteller
MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale:
	.string "Soy el CUENTALEYENDAS.\n"
	.string "Te contaré historias sobre\l"
	.string "ENTRENADORES legendarios.\p"
	.string "¿Quieres oír una?$"

MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues:
	.string "No tienes ninguna consideración…\n"
	.string "Ay, qué sofoco…$"

MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell:
	.string "Sé todas estas leyendas.\n"
	.string "¿Cuál quieres oír?$"

MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales:
	.string "El caso es que en realidad no sé nada\n"
	.string "sobre ENTRENADORES legendarios, je…\p"
	.string "Porque ¿dónde se puede encontrar a\n"
	.string "un ENTRENADOR de leyenda, a ver?$"

MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes:
	.string "¡Andaaa!\n"
	.string "¿Tú? ¿De verdad?\p"
	.string "{STR_VAR_2}\n"
	.string "¿Cuántas veces? ¡¿{STR_VAR_1}?!\p"
	.string "¡Es magnífico!\n"
	.string "¡El nacimiento de una leyenda!$"

MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends:
	.string "Ahora que lo pienso… ¿Habrá otros\n"
	.string "ENTRENADORES con leyendas aún\l"
	.string "más impresionantes por descubrir?$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales:
	.string "¿Tú entrenas POKéMON?\p"
	.string "Pues dime, ¿tienes alguna historia\n"
	.string "que suene remotamente legendaria?$"

@ Unused
MauvilleCity_PokemonCenter_1F_Text_HearAnotherLegendaryTale:
	.string "Incidentally… Would you care to hear\n"
	.string "another legendary tale?$"

MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend:
	.string "Mmmm…\n"
	.string "No me gusta del todo…\p"
	.string "Espero que puedas contarme pronto\n"
	.string "algo mucho más emocionante que eso…$"

MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested:
	.string "Ojalá que la gente se interese cada\n"
	.string "vez más por oír mis épicas historias\l"
	.string "sobre ENTRENADORES legendarios…$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameTitle::
	.string "“El ENTRENADOR guardador”$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameAction::
	.string "Guardaste la partida…$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} guardó la partida…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "tuviera tanto cuidado como {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedTitle::
	.string "“El ENTRENADOR molón”$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedAction::
	.string "Creaste tendencias…$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} creó modas…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie\n"
	.string "más a la última que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedTitle::
	.string "“El ENTRENADOR plantabayas”$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedAction::
	.string "Plantaste BAYAS…$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} plantó BAYAS…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie más\n"
	.string "amante de las BAYAS que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesTitle::
	.string "“El ENTRENADOR sobre ruedas”$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesAction::
	.string "Cambiaste de BICI…$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} cambió de BICI…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie más\n"
	.string "amante de las BICIS que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsTitle::
	.string "“El ENTRENADOR estrella”$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsAction::
	.string "Concediste entrevistas…$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "A {STR_VAR_3} le entrevistaron…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "llamara más la atención que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesTitle::
	.string "“El ENTRENADOR peleón”$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesAction::
	.string "Entablaste combate…$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} combatió…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "aceptara más combates que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtTitle::
	.string "“El ENTRENADOR cazador”$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtAction::
	.string "Atrapaste POKéMON…$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "¡{STR_VAR_3} atrapó {STR_VAR_1} POKéMON!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "cazara tantos POKéMON salvajes\l"
	.string "como {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtTitle::
	.string "“El ENTRENADOR pescador”$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtAction::
	.string "Pescaste POKéMON con CAÑA…$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "¡{STR_VAR_3} atrapó {STR_VAR_1} POKéMON\n"
	.string "pescando!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "manejara mejor la CAÑA que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedTitle::
	.string "“El ENTRENADOR empollón”$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedAction::
	.string "Lograste incubar HUEVOS…$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "¡{STR_VAR_3} se hizo con {STR_VAR_1}\n"
	.string "POKéMON incubando HUEVOS!\p"
	.string "¡Nunca se supo de nadie que rompiera\n"
	.string "cascarones mejor que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedTitle::
	.string "“El ENTRENADOR evolutivo”$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedAction::
	.string "Hiciste evolucionar POKéMON…$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "¡{STR_VAR_3} logró hacer evolucionar\n"
	.string "{STR_VAR_1} POKéMON!\p"
	.string "¡Nunca se supo de nadie que supiera\n"
	.string "más de evolución que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterTitle::
	.string "“El ENTRENADOR curandero”$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterAction::
	.string "Usaste los CENTROS POKéMON…$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} curó POKéMON en los\n"
	.string "CENTROS POKéMON…\l"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie más\n"
	.string "amante de estos sitios que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeTitle::
	.string "“El ENTRENADOR casero”$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeAction::
	.string "Curaste POKéMON en casa…$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} curó POKéMON en su casa…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie más\n"
	.string "amante de su hogar que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesTitle::
	.string "“El ENTRENADOR aventurero”$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesAction::
	.string "Entraste en la ZONA SAFARI…$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} fue a la ZONA SAFARI…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie con\n"
	.string "un lado más salvaje que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutTitle::
	.string "“El ENTRENADOR leñador”$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutAction::
	.string "Usaste CORTE…$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} usó CORTE…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie más\n"
	.string "“cortante” que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashTitle::
	.string "“El ENTRENADOR picapedrero”$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashAction::
	.string "Usaste GOLPE ROCA…$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} usó GOLPE ROCA…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie más\n"
	.string "tritura-rocas que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesTitle::
	.string "“El ENTRENADOR nómada”$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesAction::
	.string "Te mudaste de BASE SECRETA…$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} cambió de BASE SECRETA…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "se mudara más que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashTitle::
	.string "“El ENTRENADOR salpicón”$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashAction::
	.string "Usaste SALPICADURA…$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} usó SALPICADURA…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie\n"
	.string "que salpicara más que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleTitle::
	.string "“El ENTRENADOR tenaz”$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleAction::
	.string "Usaste COMBATE…$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} usó COMBATE…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie\n"
	.string "más perseverante que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsTitle::
	.string "“El rey de las TRAGAPERRAS”$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsAction::
	.string "Ganaste el premio gordo…$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} ganó el premio gordo\n"
	.string "en las TRAGAPERRAS…\l"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie con\n"
	.string "más suerte en el juego que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsTitle::
	.string "“El rey de las RULETAS”$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsAction::
	.string "Ganaste en la RULETA…$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "¡{STR_VAR_3} ganó en la RULETA\n"
	.string "{STR_VAR_1} veces seguidas!\p"
	.string "¡En HOENN nunca se supo de nadie con\n"
	.string "más mano en el juego que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesTitle::
	.string "“El paladín de la TORRE BATALLA”$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesAction::
	.string "Luchaste en la TORRE BATALLA…$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} aceptó el desafío de la\n"
	.string "TORRE BATALLA…\l"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie con más\n"
	.string "espíritu de superación que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksTitle::
	.string "“El ENTRENADOR licuador”$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksAction::
	.string "Hiciste {POKEBLOCK}S…$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} hizo {POKEBLOCK}S…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie que usara la\n"
	.string "LICUABAYAS mejor que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsTitle::
	.string "“El ENTRENADOR concursante”$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsAction::
	.string "Participaste en los CONCURSOS…$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} participó en CONCURSOS…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie con más\n"
	.string "afán de protagonismo que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsTitle::
	.string "“El rey de los CONCURSOS”$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsAction::
	.string "Ganaste en los CONCURSOS…$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} ganó CONCURSOS…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "se exhibiera mejor que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedTitle::
	.string "“El ENTRENADOR consumista”$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedAction::
	.string "Te fuiste de compras…$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} compró cosas en tiendas…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie\n"
	.string "que gastara más que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderTitle::
	.string "“El ENTRENADOR detective”$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderAction::
	.string "Usaste un BUSCAOBJETOS…$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} usó un BUSCAOBJETOS…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie que escarbara\n"
	.string "y hurgara más que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedTitle::
	.string "“El ENTRENADOR empapado”$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedAction::
	.string "Te cayó un chaparrón…$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} se mojó bajo la lluvia…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie que atrajera\n"
	.string "más nubarrones que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexTitle::
	.string "“El lector de POKéDEX”$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexAction::
	.string "Consultaste la POKéDEX…$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} consultó la POKéDEX…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie más amante de\n"
	.string "las listas de POKéMON que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsTitle::
	.string "“El coleccionista de CINTAS”$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsAction::
	.string "Recibiste CINTAS…$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} recibió CINTAS…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "las coleccionara más que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedTitle::
	.string "“El ENTRENADOR saltarín”$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedAction::
	.string "Saltaste los desniveles…$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} saltó desniveles…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie que\n"
	.string "saltara más y mejor que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedTitle::
	.string "“El ENTRENADOR teleadicto”$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedAction::
	.string "Viste la tele…$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} vio la tele…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie más amante\n"
	.string "de la caja tonta que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockTitle::
	.string "“El ENTRENADOR relojero”$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockAction::
	.string "Miraste la hora…$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} miró la hora…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie\n"
	.string "más puntual que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryTitle::
	.string "“El rey de la LOTERÍA POKéMON”$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryAction::
	.string "Ganaste a la LOTERÍA POKéMON…$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} ganó a la LOTERÍA POKéMON…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡Nunca se supo de nadie que cambiara\n"
	.string "tantos POKéMON como {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareTitle::
	.string "“El ENTRENADOR impaciente”$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareAction::
	.string "Dejaste POKéMON en la GUARDERÍA…$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} dejó POKéMON en la\n"
	.string "GUARDERÍA…\l"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie\n"
	.string "con más ambición que {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarTitle::
	.string "“El ENTRENADOR escalador”$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarAction::
	.string "Te montaste en el TELEFÉRICO…$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} se montó en el TELEFÉRICO…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie\n"
	.string "tan incansable como {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsTitle::
	.string "“El ENTRENADOR bañista”$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsAction::
	.string "Usaste los baños termales…$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsStory::
	.string "Érase una vez {STR_VAR_3}.\p"
	.string "{STR_VAR_3} usó los baños termales…\n"
	.string "¿Sabes cuántas veces? ¡{STR_VAR_1}!\p"
	.string "¡En HOENN nunca se supo de nadie con\n"
	.string "una piel más suave que {STR_VAR_3}!$"


MauvilleCity_PokemonCenter_1F_EventScript_Storyteller::
	lock
	faceplayer
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	setvar VAR_0x800B, 0
	msgbox MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales
	message MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell
	waitmessage
	special StorytellerStoryListMenu
	waitstate
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection
	setvar VAR_0x8008, 1
	special Script_StorytellerDisplayStory
	waitmessage
	waitbuttonpress
	specialvar VAR_RESULT, StorytellerUpdateStat
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales
	goto MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale

MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection::
	goto MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	end

MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasStorytellerAlreadyRecorded
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd
	goto MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales

MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales, MSGBOX_DEFAULT
MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, Script_StorytellerInitializeRandomStat
	goto_if_eq VAR_RESULT, 1, MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale
	msgbox MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller::
	msgbox MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

@ Unused
MauvilleCity_PokemonCenter_1F_EventScript_WaitingForRecordMix::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd::
	release
	end

@ Giddy
MauvilleCity_PokemonCenter_1F_Text_HearMyStory:
	.string "¡Soy CHARLATÁN!\n"
	.string "¡Y tengo algo que contarte!\p"
	.string "¿Quieres oírlo?$"

MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues:
	.string "Pues vaya…\n"
	.string "Me has dejado chafado…$"

MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking:
	.string "Estaba pensando que…$"

MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain:
	.string "Pues eso, estaba pensando que…\p"
	.string "¡Que tendríamos que seguir\n"
	.string "charlando otro día! ¡Hasta lueguito!$"

MauvilleCity_PokemonCenter_1F_EventScript_Giddy::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_HearMyStory, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	end

@ Giddy will continue to tell stories regardless of whether yes or no is selected below.
@ Each story there is a 10% chance it will be his last. Otherwise he will stop at 10 stories.
MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale::
	special GenerateGiddyLine
	special ShowFieldMessageStringVar4
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy::
	msgbox MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong:
	.string "Hola, soy el BARDO.\n"
	.string "¿Quieres oír mi canción?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1:
	.string "Oh… Me has dejado más\n"
	.string "triste que el alpiste…$"

MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers:
	.string "Es una canción tan conmovedora…\n"
	.string "Podría cantarla sin parar…$"

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics:
	.string "¿Y…?\n"
	.string "¿Te gusta mi canción?\p"
	.string "Pero la letra no me acaba de\n"
	.string "convencer. Le falta algo…\p"
	.string "¿Querrías escribir otra letra\n"
	.string "para mí, por favor?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2:
	.string "Oh… Me has dejado más\n"
	.string "triste que el alpiste…$"

MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou:
	.string "¡Qué inspiración!\n"
	.string "Déjame que te la cante…$"

MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo:
	.string "¿Es así como querías que sonara\n"
	.string "tu canción?$"

MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile:
	.string "Vale, pues ya está.\n"
	.string "Cantaré esta canción un rato.$"

MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening:
	.string "¡Hola! ¡Soy el FARDÓN!\n"
	.string "Te voy a enseñar lo que más mola.$"

MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou:
	.string "Eh, si ya te he enseñado lo\n"
	.string "que más molaba…\p"
	.string "¡Yo quiero compartir las modas\n"
	.string "con más gente, no sólo contigo!$"

MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach:
	.string "Eh, pero si tú ya sabes mogollón de\n"
	.string "todo lo que está a la última…\p"
	.string "¡No puedo enseñarte nada!$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord:
	.string "Eh, ¿has oído hablar de\n"
	.string "“{STR_VAR_1}”?\p"
	.string "¿Que qué significa? Si no lo sabes…,\n"
	.string "¡pregúntaselo a tus amigos!$"
