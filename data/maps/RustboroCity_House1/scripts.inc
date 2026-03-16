RustboroCity_House1_MapScripts::
	.byte 0

RustboroCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_SEEDOT, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
	release
	end

RustboroCity_House1_EventScript_DeclineTrade::
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_TradeCompleted::
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_Hiker::
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
	end

RustboroCity_House1_Text_IllTradeIfYouWant:
	.string "¿Qué? ¿Que mi POKéMON es una monada?\n"
	.string "Eso ya lo sabía yo.\p"
	.string "Pues, si te hace mucha ilusión, podría\n"
	.string "incluso dártelo a cambio de algo.\p"
	.string "Si quieres, te cambio mi {STR_VAR_2}\n"
	.string "por un {STR_VAR_1}.$"

RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
	.string "Je, je, je…\n"
	.string "Pórtate bien con mi POKéMON.$"

RustboroCity_House1_Text_DoesntLookLikeMonToMe:
	.string "¿Eh? ¿Qué eso es un {STR_VAR_1}?\n"
	.string "Pues a mí no me lo parece en absoluto…$"

RustboroCity_House1_Text_YouDontWantToThatsOkay:
	.string "Ah, pues si no quieres, peor para ti.\n"
	.string "Porque mi POKéMON es una monada…$"

RustboroCity_House1_Text_AnyPokemonCanBeCute:
	.string "Cualquier POKéMON puede ser mono\n"
	.string "si lo crías con cariño y esmero.$"

RustboroCity_House1_Text_AllSortsOfPlaces:
	.string "En cada lugar hay gente y POKéMON\n"
	.string "diferentes.\p"
	.string "Es muy curioso, por eso voy siempre\n"
	.string "de aquí para allá.$"

