Route124_DivingTreasureHuntersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
	.byte 0

Route124_DivingTreasureHuntersHouse_OnTransition:
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
	end

Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
	lock
	faceplayer
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
	end

Route124_DivingTreasureHuntersHouse_EventScript_SkipGreeting::
	msgbox Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards, MSGBOX_DEFAULT
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
	end

Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard::
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
	goto_if_eq VAR_TEMP_1, 0, Route124_DivingTreasureHuntersHouse_EventScript_NoShards
	goto Route124_DivingTreasureHuntersHouse_EventScript_HasShard
	end

Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards::
	setvar VAR_TEMP_1, 0
	checkitem ITEM_RED_SHARD
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard
	checkitem ITEM_YELLOW_SHARD
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard
	checkitem ITEM_BLUE_SHARD
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard
	checkitem ITEM_GREEN_SHARD
	call_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard
	return

Route124_DivingTreasureHuntersHouse_EventScript_HasRedShard::
	addvar VAR_TEMP_1, 1
	return

Route124_DivingTreasureHuntersHouse_EventScript_HasYellowShard::
	addvar VAR_TEMP_1, 2
	return

Route124_DivingTreasureHuntersHouse_EventScript_HasBlueShard::
	addvar VAR_TEMP_1, 4
	return

Route124_DivingTreasureHuntersHouse_EventScript_HasGreenShard::
	addvar VAR_TEMP_1, 8
	return

Route124_DivingTreasureHuntersHouse_EventScript_HasShard::
	msgbox Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou, MSGBOX_DEFAULT
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions::
	message Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade
	waitmessage
	switch VAR_TEMP_1
	case 1,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR
	case 2,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY
	case 3,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY
	case 4,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB
	case 5,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB
	case 6,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB
	case 7,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB
	case 8,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG
	case 9,  Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG
	case 10, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG
	case 11, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG
	case 12, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG
	case 13, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG
	case 14, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG
	case 15, Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsR::
	multichoice 0, 0, MULTI_SHARDS_R, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsY::
	multichoice 0, 0, MULTI_SHARDS_Y, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRY::
	multichoice 0, 0, MULTI_SHARDS_RY, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsB::
	multichoice 0, 0, MULTI_SHARDS_B, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRB::
	multichoice 0, 0, MULTI_SHARDS_RB, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYB::
	multichoice 0, 0, MULTI_SHARDS_YB, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYB::
	multichoice 0, 0, MULTI_SHARDS_RYB, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsG::
	multichoice 0, 0, MULTI_SHARDS_G, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRG::
	multichoice 0, 0, MULTI_SHARDS_RG, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYG::
	multichoice 0, 0, MULTI_SHARDS_YG, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYG::
	multichoice 0, 0, MULTI_SHARDS_RYG, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsBG::
	multichoice 0, 0, MULTI_SHARDS_BG, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRBG::
	multichoice 0, 0, MULTI_SHARDS_RBG, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsYBG::
	multichoice 0, 0, MULTI_SHARDS_YBG, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardOptionsRYBG::
	multichoice 0, 0, MULTI_SHARDS_RYBG, FALSE
	switch VAR_RESULT
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard
	case 1, Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard
	case 2, Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard
	case 3, Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard
	case 4, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_TradeRedShard::
	setvar VAR_0x8008, ITEM_RED_SHARD
	setvar VAR_0x8009, ITEM_FIRE_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard

Route124_DivingTreasureHuntersHouse_EventScript_TradeYellowShard::
	setvar VAR_0x8008, ITEM_YELLOW_SHARD
	setvar VAR_0x8009, ITEM_THUNDER_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard

Route124_DivingTreasureHuntersHouse_EventScript_TradeBlueShard::
	setvar VAR_0x8008, ITEM_BLUE_SHARD
	setvar VAR_0x8009, ITEM_WATER_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard

Route124_DivingTreasureHuntersHouse_EventScript_TradeGreenShard::
	setvar VAR_0x8008, ITEM_GREEN_SHARD
	setvar VAR_0x8009, ITEM_LEAF_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard

Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard::
	bufferitemname STR_VAR_1, VAR_0x8008
	bufferitemname STR_VAR_2, VAR_0x8009
	msgbox Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, TRUE, Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
	checkitem VAR_0x8008, 2
	goto_if_eq VAR_RESULT, FALSE, Route124_DivingTreasureHuntersHouse_EventScript_TradeShard
	goto Route124_DivingTreasureHuntersHouse_EventScript_BagFull
	end

Route124_DivingTreasureHuntersHouse_EventScript_TradeShard::
	removeitem VAR_0x8008
	giveitem VAR_0x8009
	msgbox Route124_DivingTreasureHuntersHouse_Text_ItsADeal, MSGBOX_DEFAULT
	call Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards
	goto_if_eq VAR_TEMP_1, 0, Route124_DivingTreasureHuntersHouse_EventScript_EndTrade
	msgbox Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	end

Route124_DivingTreasureHuntersHouse_EventScript_BagFull::
	msgbox Route124_DivingTreasureHuntersHouse_Text_BagFull, MSGBOX_DEFAULT
	release
	end

Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade::
	msgbox Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind, MSGBOX_DEFAULT
	release
	end

Route124_DivingTreasureHuntersHouse_EventScript_NoShards::
	msgbox Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards, MSGBOX_DEFAULT
	release
	end

Route124_DivingTreasureHuntersHouse_EventScript_EndTrade::
	release
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard::
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
	end

Route124_DivingTreasureHuntersHouse_Text_Greeting:
	.string "¡Soy el BUSCATESOROS MARINOS!\p"
	.string "Soy ese increíble tipo que bucea en las\n"
	.string "profundidades oceánicas en busca de\l"
	.string "fabulosos tesoros sumergidos.$"

Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards:
	.string "Dime, ¿has visto alguna PARTE\n"
	.string "o alguna herramienta antigua?$"

Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards:
	.string "No tienes ningún tesoro que darme…\p"
	.string "Si ves alguna PARTE, como, por ejemplo,\n"
	.string "la PARTE ROJA…, ¡ven a cambiármela!$"

Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou:
	.string "¡Ay, ay, eso…, eso es…!\n"
	.string "¡Una PARTE! ¡La estaba buscando!\p"
	.string "¡Me la tienes que cambiar!\n"
	.string "¡Te daré algo supermolón!$"

Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade:
	.string "¿Qué quieres cambiar?$"

Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone:
	.string "¿Me cambiarías tu {STR_VAR_1}\n"
	.string "por mi {STR_VAR_2}?$"

Route124_DivingTreasureHuntersHouse_Text_ItsADeal:
	.string "¡Trato hecho!\n"
	.string "¡Ha sido un placer!$"

Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse:
	.string "¿Quieres cambiar algo más?$"

Route124_DivingTreasureHuntersHouse_Text_BagFull:
	.string "Huy, la MOCHILA está llena.\n"
	.string "¡Deshazte de algún objeto!$"

Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind:
	.string "¿No? Qué aguafiestas…\n"
	.string "Bah, si cambias de opinión, aquí estoy.$"

Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard:
	.string "{CLEAR_TO 4}Objeto deseado{CLEAR_TO 106}Objeto cambiado\n"
	.string "{CLEAR_TO 15}PARTE ROJA{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 114}PIEDRA FUEGO{CLEAR_TO 200}\p"
	.string "{CLEAR_TO 4}Objeto deseado{CLEAR_TO 106}Objeto cambiado\n"
	.string "{CLEAR_TO 3}PARTE AMARILLA{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 112}PIEDRATRUENO{CLEAR_TO 200}\p"
	.string "{CLEAR_TO 4}Objeto deseado{CLEAR_TO 106}Objeto cambiado\n"
	.string "{CLEAR_TO 15}PARTE AZUL{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 117}PIEDRA AGUA{CLEAR_TO 200}\p"
	.string "{CLEAR_TO 4}Objeto deseado{CLEAR_TO 106}Objeto cambiado\n"
	.string "{CLEAR_TO 12}PARTE VERDE{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 117}PIEDRA HOJA$"
