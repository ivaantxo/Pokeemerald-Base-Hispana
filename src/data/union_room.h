ALIGNED(4) static const u8 sText_EmptyString[] = _("");
ALIGNED(4) static const u8 sText_Colon[] = _(":");
ALIGNED(4) static const u8 sText_ID[] = _("ID");
ALIGNED(4) static const u8 sText_PleaseStartOver[] = _("Hay que empezar de nuevo.");
ALIGNED(4) static const u8 sText_WirelessSearchCanceled[] = _("Se ha cancelado la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("Awaiting communication\nfrom another player.");
ALIGNED(4) static const u8 sText_AwaitingCommunication[] = _("Para la opción\n{STR_VAR_1},\lfaltan jugadores por comunicarse.");
ALIGNED(4) static const u8 sText_AwaitingLinkPressStart[] = _("Para la opción\n{STR_VAR_1},\lpulsa START cuando estéis listos.");
ALIGNED(4) static const u8 sJPText_SingleBattle[] = _("シングルバトルを かいさいする");
ALIGNED(4) static const u8 sJPText_DoubleBattle[] = _("ダブルバトルを かいさいする");
ALIGNED(4) static const u8 sJPText_MultiBattle[] = _("マルチバトルを かいさいする");
ALIGNED(4) static const u8 sJPText_TradePokemon[] = _("ポケモンこうかんを かいさいする");
ALIGNED(4) static const u8 sJPText_Chat[] = _("チャットを かいさいする");
ALIGNED(4) static const u8 sJPText_DistWonderCard[] = _("ふしぎなカードをくばる");
ALIGNED(4) static const u8 sJPText_DistWonderNews[] = _("ふしぎなニュースをくばる");
ALIGNED(4) static const u8 sJPText_DistMysteryEvent[] = _("ふしぎなできごとを かいさいする"); // Unused
ALIGNED(4) static const u8 sJPText_HoldPokemonJump[] = _("なわとびを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldBerryCrush[] = _("きのみマッシャーを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldBerryPicking[] = _("きのみどりを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldSpinTrade[] = _("ぐるぐるこうかんを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldSpinShop[] = _("ぐるぐるショップを かいさいする");

// Unused
static const u8 *const sJPLinkGroupActionTexts[] = {
    sJPText_SingleBattle,
    sJPText_DoubleBattle,
    sJPText_MultiBattle,
    sJPText_TradePokemon,
    sJPText_Chat,
    sJPText_DistWonderCard,
    sJPText_DistWonderNews,
    sJPText_DistWonderCard,
    sJPText_HoldPokemonJump,
    sJPText_HoldBerryCrush,
    sJPText_HoldBerryPicking,
    sJPText_HoldBerryPicking,
    sJPText_HoldSpinTrade,
    sJPText_HoldSpinShop
};

static const u8 sText_1PlayerNeeded[] = _("Falta 1\njugador.");
static const u8 sText_2PlayersNeeded[] = _("Faltan 2\njugadores.");
static const u8 sText_3PlayersNeeded[] = _("Faltan 3\njugadores.");
static const u8 sText_4PlayersNeeded[] = _("4 players\nneeded.");
static const u8 sText_2PlayerMode[] = _("MODO DE 2\nJUGADORES");
static const u8 sText_3PlayerMode[] = _("MODO DE 3\nJUGADORES");
static const u8 sText_4PlayerMode[] = _("MODO DE 4\nJUGADORES");
static const u8 sText_5PlayerMode[] = _("MODO DE 5\nJUGADORES");

static const u8 *const sPlayersNeededOrModeTexts[][5] = {
    // 2 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode
    },
    // 4 players required
    {
        sText_3PlayersNeeded,
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_4PlayerMode
    },
    // 2-5 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    },
    // 3-5 players required
    {
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    },
    // 2-4 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode,
        sText_3PlayerMode,
        sText_4PlayerMode
    }
};

ALIGNED(4) static const u8 sText_BButtonCancel[] = _("{B_BUTTON}SALIR");
ALIGNED(4) static const u8 sJPText_SearchingForParticipants[] = _("ため\nさんかしゃ ぼしゅうちゅう です！"); // Unused, may have been cut off
ALIGNED(4) static const u8 sText_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} quiere\n{STR_VAR_1}.\l¿Aceptas?");
ALIGNED(4) static const u8 sText_PlayerContactedYouShareX[] = _("{STR_VAR_2} se ha conectado.\n¿Compartes {STR_VAR_1}?");
ALIGNED(4) static const u8 sText_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} se ha conectado.\n¿Añadir al grupo?");
ALIGNED(4) static const u8 sText_AreTheseMembersOK[] = _("¿Está bien este grupo\npara {STR_VAR_1}?");
ALIGNED(4) static const u8 sText_CancelModeWithTheseMembers[] = _("¿Cancelas\n{STR_VAR_1}\lpara este grupo?");
ALIGNED(4) static const u8 sText_AnOKWasSentToPlayer[] = _("Se ha enviado el “OK”\na {STR_VAR_1}.");
ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("Parece que el otro ENTRENADOR no\nestá disponible en este momento…\p");
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("No puedes comunicarte con nadie\nque esté muy lejos.\p");
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("Hay ENTRENADORES que no están\nlistos todavía.\p");

static const u8 *const sCantTransmitToTrainerTexts[] = {
    [UR_TRADE_PLAYER_NOT_READY - 1]  = sText_CantTransmitTrainerTooFar,
    [UR_TRADE_PARTNER_NOT_READY - 1] = sText_TrainersNotReadyYet
};

ALIGNED(4) static const u8 sText_ModeWithTheseMembersWillBeCanceled[] = _("Se cancelará\n{STR_VAR_1}\lpara este grupo.{PAUSE 60}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Hay un miembro del grupo que\nno puede seguir disponible.\p");

static const u8 *const sPlayerUnavailableTexts[] = {
    sText_OtherTrainerUnavailableNow,
    sText_MemberNoLongerAvailable
};

ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("No parece que el otro ENTRENADOR\nesté disponible…\p");
ALIGNED(4) static const u8 sText_PlayerSentBackOK[] = _("¡{STR_VAR_1} envió\ntambién un “OK”!");
ALIGNED(4) static const u8 sText_PlayerOKdRegistration[] = _("{STR_VAR_1} te ha\nadmitido en el grupo.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} responde\ncon un “No”…\p");
ALIGNED(4) static const u8 sText_AwaitingOtherMembers[] = _("Para la opción\n{STR_VAR_1},\lfaltan jugadores.");
ALIGNED(4) static const u8 sText_QuitBeingMember[] = _("¿Te sales del grupo?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Ya no eres del grupo.\p");

static const u8 *const sPlayerDisconnectedTexts[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = sText_MemberNoLongerAvailable,
    [RFU_STATUS_CONNECTION_ERROR]    = sText_TrainerAppearsUnavailable,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = sText_StoppedBeingMember
};

ALIGNED(4) static const u8 sText_WirelessLinkEstablished[] = _("Se ha establecido la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) static const u8 sText_WirelessLinkDropped[] = _("Se ha cortado la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) static const u8 sText_LinkWithFriendDropped[] = _("Se ha perdido la comunicación\ncon tu amigo…");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} contesta\nque “No”…");

static const u8 *const sLinkDroppedTexts[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = sText_LinkWithFriendDropped,
    [RFU_STATUS_CONNECTION_ERROR]    = sText_LinkWithFriendDropped,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo2,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = NULL
};

ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("¿Eliges {STR_VAR_2}?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("¿Eliges {STR_VAR_2}?");

// Unused
static const u8 *const sDoYouWantModeTexts[] = {
    sText_DoYouWantXMode,
    sText_DoYouWantXMode2
};

ALIGNED(4) static const u8 sText_CommunicatingPleaseWait[] = _("Communicating…\nPlease wait.");
ALIGNED(4) static const u8 sText_AwaitingPlayersResponseAboutTrade[] = _("Esperando la respuesta de {STR_VAR_1}\npara el intercambio…");
ALIGNED(4) static const u8 sText_Communicating[] = _("Comunicando{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Comunicando con {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Un momento{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");

static const u8 *const sCommunicatingWaitTexts[] = {
    sText_Communicating,
    sText_CommunicatingWithPlayer,
    sText_PleaseWaitAWhile
};

ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("¡Hola! ¿Querías algo?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("¿Qué tal? ¿Quieres algo?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: ¡Anda,\ncoincidimos de nuevo! ¿Y bien?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: ¡Eh, {PLAYER}!\n¿Qué te gustaría hacer?");

static const u8 *const sHiDoSomethingTexts[][GENDER_COUNT] = {
    {
        sText_HiDoSomethingMale,
        sText_HiDoSomethingFemale
    }, {
        sText_HiDoSomethingAgainMale,
        sText_HiDoSomethingAgainFemale
    }
};

ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("¿Quieres hacer algo?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("¿Te gustaría hacer algo?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: ¿Qué\nte apetecería hacer?");
ALIGNED(4) static const u8 sText_DoSomethingAgainFemale[] = _("{STR_VAR_1}: Want to do anything else?");

// Unused
static const u8 *const sDoSomethingTexts[][GENDER_COUNT] = {
    {
        sText_DoSomethingMale,
        sText_DoSomethingFemale
    }, {
        sText_DoSomethingAgainMale,
        sText_DoSomethingAgainMale // was probably supposed to be sText_DoSomethingAgainFemale
    }
};

ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Se están comunicando contigo.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} está\nen conexión contigo.{PAUSE 60}");

static const u8 *const sPlayerContactedYouTexts[] = {
    sText_SomebodyHasContactedYou,
    sText_PlayerHasContactedYou
};

ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Esperando respuesta del otro\nENTRENADOR…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Esperando respuesta de\n{STR_VAR_1}…");

static const u8 *const sAwaitingResponseTexts[] = {
    sText_AwaitingResponseFromTrainer,
    sText_AwaitingResponseFromPlayer
};

ALIGNED(4) static const u8 sText_ShowTrainerCard[] = _("El otro ENTRENADOR te ha mostrado\nsu FICHA de ENTRENADOR.\p¿Quieres enseñarle la tuya?");
ALIGNED(4) static const u8 sText_BattleChallenge[] = _("El otro ENTRENADOR te reta\na luchar.\p¿Aceptas el desafío?");
ALIGNED(4) static const u8 sText_ChatInvitation[] = _("El otro ENTRENADOR te invita\na chatear.\p¿Te apetece chatear un rato?");
ALIGNED(4) static const u8 sText_OfferToTradeMon[] = _("Te proponen cambiar tu {DYNAMIC 1}\nde nivel {DYNAMIC 0}\ppor {DYNAMIC 3},\nde nivel {DYNAMIC 2}.\p¿Te parece buen trato?");
ALIGNED(4) static const u8 sText_OfferToTradeEgg[] = _("Hay alguien que quiere el\nHUEVO que tienes registrado.\l¿Se lo das?");
ALIGNED(4) static const u8 sText_ChatDropped[] = _("Se ha interrumpido la comunicación.\p");
ALIGNED(4) static const u8 sText_OfferDeclined1[] = _("Has decidido que no.\p");
ALIGNED(4) static const u8 sText_OfferDeclined2[] = _("Has decidido que no.\p");
ALIGNED(4) static const u8 sText_ChatEnded[] = _("La comunicación se ha finalizado.\p");

// Unused
static const u8 *const sInvitationTexts[] = {
    sText_ShowTrainerCard,
    sText_BattleChallenge,
    sText_ChatInvitation,
    sText_OfferToTradeMon
};

ALIGNED(4) static const u8 sText_JoinChatMale[] = _("¡Eh, hola! ¡Estamos chateando!\n¿Te apuntas?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: ¡Eh, {PLAYER}!\n¡Estamos chateando!\l¿Te apuntas?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("¡Anda, hola! ¡Estamos chateando!\n¿Te apuntas?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: ¡Hola, {PLAYER}!\n¡Estamos chateando!\l¿Te apuntas?");

static const u8 *const sJoinChatTexts[][GENDER_COUNT] = {
    {
        sText_JoinChatMale,
        sText_JoinChatFemale
    }, {
        sText_PlayerJoinChatMale,
        sText_PlayerJoinChatFemale
    }
};

ALIGNED(4) static const u8 sText_TrainerAppearsBusy[] = _("(?)… Parece que el ENTRENADOR\nestá comunicando…\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Quieres luchar, ¿eh?\nVale, pero dame un poco de tiempo.");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("¿Quieres chatear?\nGenial, pero espera un momento.");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("¿Te gusta mi FICHA de ENTRENADOR?");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("¿Un combate? ¡Hecho!\nDeja sólo que me prepare.");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("¿Chatear? ¡Por mí, perfecto!\nDame sólo un segundo.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("Mira, te dejo que veas mi FICHA\nde ENTRENADOR.");

static const u8 *const sText_WaitOrShowCardTexts[GENDER_COUNT][4] = {
    {
        sText_WaitForBattleMale,
        sText_WaitForChatMale,
        NULL,
        sText_ShowTrainerCardMale
    }, {
        sText_WaitForBattleFemale,
        sText_WaitForChatFemale,
        NULL,
        sText_ShowTrainerCardFemale
    }
};

ALIGNED(4) static const u8 sText_WaitForChatMale2[] = _("You want to chat, huh?\nSure, just wait a little.");
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("¡Gracias por esperar!\n¡Empecemos el combate!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("¡Bueno, a chatear se ha dicho!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Perdona que te haya hecho\nesperar. ¡Ya estoy!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Perdona que te haya hecho\nesperar. ¡A chatear!{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("El intercambio va a comenzar.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("El combate va a comenzar.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Entrando en el chat…{PAUSE 60}");

static const u8 *const sStartActivityTexts[][GENDER_COUNT][3] = {
    {
        {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }, {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }
    }, {
        {
            sText_DoneWaitingBattleMale,
            sText_DoneWaitingChatMale,
            sText_TradeWillBeStarted
        }, {
            sText_DoneWaitingBattleFemale,
            sText_DoneWaitingChatFemale,
            sText_TradeWillBeStarted
        }
    }
};

ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Lo siento, pero mis POKéMON\nno se encuentran muy allá…\lDejémoslo para otra ocasión.\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("No sabes cómo lo siento, pero mis\nPOKéMON no se encuentran bien…\lYa lucharemos en otro momento.\p");

static const u8 *const sBattleDeclinedTexts[GENDER_COUNT] = {
    sText_BattleDeclinedMale,
    sText_BattleDeclinedFemale
};

ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("¿Mmm? ¿Dónde habré puesto\nmi FICHA de ENTRENADOR?…\l¡Bueno, otra vez será!\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Eh…, no sé dónde he metido\nmi FICHA de ENTRENADOR…\l¡Te la enseñaré en otra ocasión!\p");

static const u8 *const sShowTrainerCardDeclinedTexts[GENDER_COUNT] = {
    sText_ShowTrainerCardDeclinedMale,
    sText_ShowTrainerCardDeclinedFemale
};

ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Cuando quieras que hagamos algo,\n¡ya sabes dónde estoy!\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Cuando quieras que hagamos algo,\nme lo dices, ¿eh?\p");

static const u8 *const sIfYouWantToDoSomethingTexts[GENDER_COUNT] = {
    sText_IfYouWantToDoSomethingMale,
    sText_IfYouWantToDoSomethingFemale
};

ALIGNED(4) static const u8 sText_TrainerBattleBusy[] = _("¡Anda, si yo tenía que hacer\nun montón de cosas!\lOtra vez será, ¡lo siento!\p");
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower1[] = _("Para luchar, necesitas dos POKéMON\nde nivel inferior a 30.\p");
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower2[] = _("Si quieres luchar, necesitas dos\nPOKéMON de nivel inferior a 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Bueno, hasta la próxima.\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nBueno, ya nos veremos.\p");

// Response from partner when player declines chat
static const u8 *const sDeclineChatTexts[GENDER_COUNT] = {
    sText_DeclineChatMale,
    stext_DeclineChatFemale
};

ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Lo siento, ahora mismo no me\nviene bien.\lYa chatearemos en otro momento.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Lo siento, ahora tengo mucho\nque hacer.\lYa chatearemos en otra ocasión.\p");

// Response from partner when they decline chat
static const u8 *const sChatDeclinedTexts[GENDER_COUNT] = {
    sText_ChatDeclinedMale,
    sText_ChatDeclinedFemale
};

ALIGNED(4) static const u8 sText_YoureToughMale[] = _("¡Guauuu!\n¡Sí que sois fuertes!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("¡Qué movimiento tan genial!\n¡Qué estrategia tan buena!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("¡Qué pasada!\n¡Alucinante!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("¿Pero cómo se puede usar a\nese POKéMON en una situación así?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Ese POKéMON sí que está bien\nentrenado…\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("¡Eso es! ¡Ése es el movimiento\nque hay que usar aquí!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("¡Es impresionante!\n¿Pero cómo se puede luchar así?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("¡No se puede cambiar de POKéMON\nen un momento mejor!\p");

static const u8 *const sBattleReactionTexts[GENDER_COUNT][4] = {
    {
        sText_YoureToughMale,
        sText_UsedGoodMoveMale,
        sText_BattleSurpriseMale,
        sText_SwitchedMonsMale
    },
    {
        sText_YoureToughFemale,
        sText_UsedGoodMoveFemale,
        sText_BattleSurpriseFemale,
        sText_SwitchedMonsFemale
    }
};

ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("¡Hay cosas que se aprenden\ndesde pequeño!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("¡Parad ya, que me parto de risa\n:-D!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Anda, qué curioso…\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Mmmm… ¿Cómo?\n¿He entendido bien?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Anda…\nNo tenía ni idea…\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("¿De qué va la cosa?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("¡Eso mismo digo yo!\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("Eh…\n¡Así es!\p");

static const u8 *const sChatReactionTexts[GENDER_COUNT][4] = {
    {
        sText_LearnedSomethingMale,
        sText_ThatsFunnyMale,
        sText_RandomChatMale1,
        sText_RandomChatMale2
    },
    {
        sText_LearnedSomethingFemale,
        sText_ThatsFunnyFemale,
        sText_RandomChatFemale1,
        sText_RandomChatFemale2
    }
};

ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Mira mi FICHA de ENTRENADOR.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("Espero que nos conozcamos mejor.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("Está bien enseñarse las FICHAS\nde ENTRENADOR para conocerse.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Me alegro de conocerte.\n¡Espero que tú también!\p");

static const u8 *const sTrainerCardReactionTexts[GENDER_COUNT][2] = {
    {
        sText_ShowedTrainerCardMale1,
        sText_ShowedTrainerCardMale2
    },
    {
        sText_ShowedTrainerCardFemale1,
        sText_ShowedTrainerCardFemale2
    }
};

ALIGNED(4) static const u8 sText_MaleTraded1[] = _("¡Yuuuujuu!\n¡Siempre he querido este POKéMON!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("¡Por fin! ¡Menos mal que se pueden\nconseguir POKéMON por intercambio!\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("¡Estoy intercambiando POKéMON!\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("¡Qué ganas de tener ese POKéMON!\p");

static const u8 *const sTradeReactionTexts[GENDER_COUNT][4] = {
    {
        sText_MaleTraded1,
        sText_MaleTraded2
    },
    {
        sText_FemaleTraded1,
        sText_FemaleTraded2
    }
};

ALIGNED(4) static const u8 sText_XCheckedTradingBoard[] = _("{STR_VAR_1} echó un ojo al PANEL\nde los INTERCAMBIOS.\p");
ALIGNED(4) static const u8 sText_RegisterMonAtTradingBoard[] = _("Éste es el PANEL de los\nINTERCAMBIOS.\pAquí se pueden registrar POKéMON\ny ofrecerlos para intercambio.\p¿Quieres registrar a algún\nPOKéMON?");
ALIGNED(4) static const u8 sText_TradingBoardInfo[] = _("El PANEL de los INTERCAMBIOS\nse usa para ofrecer POKéMON\lpara intercambio.\pLo único que hay que hacer es\nregistrar al POKéMON que quieras\lintercambiar.\pHabrá algún ENTRENADOR\nque ofrezca otro a cambio.\pEsperamos que registres a muchos\ny hagas un montón de intercambios.\p¿Qué, te animas?");
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("We have registered your POKéMON for\ntrade on the TRADING BOARD.\pThank you for using this service!\p");
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("Nobody has registered any POKéMON\nfor trade on the TRADING BOARD.\p\n");
ALIGNED(4) static const u8 sText_ChooseRequestedMonType[] = _("Elige el tipo de POKéMON que\nte gustaría recibir.\n");
ALIGNED(4) static const u8 sText_WhichMonWillYouOffer[] = _("¿A qué miembro de tu equipo\nPOKéMON ofreces en el intercambio?\p");
ALIGNED(4) static const u8 sText_RegistrationCanceled[] = _("Se ha cancelado el registro.\p");
ALIGNED(4) static const u8 sText_RegistraionCompleted[] = _("Se ha finalizado el registro.\p");
ALIGNED(4) static const u8 sText_TradeCanceled[] = _("Se ha cancelado el intercambio.\p");
ALIGNED(4) static const u8 sText_CancelRegistrationOfMon[] = _("¿Cancelas el registro\nde tu {STR_VAR_1} de nivel {STR_VAR_2}?");
ALIGNED(4) static const u8 sText_CancelRegistrationOfEgg[] = _("¿Cancelas el registro\nde tu HUEVO?");
ALIGNED(4) static const u8 sText_RegistrationCanceled2[] = _("Se ha cancelado el registro.\p");
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("TRAINERS wishing to make a trade\nwill be listed.");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("Please choose the TRAINER with whom\nyou would like to trade POKéMON.");
ALIGNED(4) static const u8 sText_AskTrainerToMakeTrade[] = _("¿Quieres preguntarle a {STR_VAR_1}\nsi quiere realizar un intercambio?");
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("Awaiting a response from\nthe other TRAINER…");
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("You have not registered a POKéMON\nfor trading.\p");
ALIGNED(4) static const u8 sText_DontHaveTypeTrainerWants[] = _("{STR_VAR_1} quiere un\nPKMN de tipo {STR_VAR_2},\ly no tienes…\p");
ALIGNED(4) static const u8 sText_DontHaveEggTrainerWants[] = _("{STR_VAR_1} quiere un HUEVO,\ny tú no tienes…\p");
ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("Ahora mismo, {STR_VAR_1} no\npuede ofrecerte nada\lpor tu POKéMON.\p");
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("Ahora mismo, no puedes hacer\nningún intercambio por el\lPOKéMON de {STR_VAR_1}.\p");

// Unused
static const u8 *const sCantTradeMonTexts[] = {
    sText_PlayerCantTradeForYourMon,
    sText_CantTradeForPartnersMon
};

ALIGNED(4) static const u8 sText_TradeOfferRejected[] = _("Tu oferta ha sido rechazada.\p");
ALIGNED(4) static const u8 sText_EggTrade[] = _("INTERCAMBIO DE HUEVO");
ALIGNED(4) static const u8 sText_ChooseJoinCancel[] = _("{DPAD_UPDOWN}SEL.  {A_BUTTON}PARTICIPAR  {B_BUTTON}ATRÁS");
ALIGNED(4) static const u8 sText_ChooseTrainer[] = _("Selecciona a un ENTRENADOR.");
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Selecciona a un ENTRENADOR\npara un COMBATE INDIVIDUAL.");
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Selecciona a un ENTRENADOR\npara un COMBATE DOBLE.");
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Selecciona al LÍDER para\nun COMBATE MÚLTIPLE.");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Selecciona a un ENTRENADOR\npara realizar un intercambio.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Selecciona al ENTRENADOR que\ncomparte TARJETAS MISTERIOSAS.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Selecciona al ENTRENADOR que\ncomparte NOTICIAS MISTERIOSAS.");
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("¡SALTO POKéMON!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("¡MACHACABAYAS!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("¡DODRIO A POR BAYAS!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryBlender[] = _("¡LICUABAYAS!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderRecordCorner[] = _("¡CENTRO de RÉCORDS!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderCoolContest[] = _("¡CONCURSO de CARISMA!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBeautyContest[] = _("¡CONCURSO de BELLEZA!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderCuteContest[] = _("¡CONCURSO de DULZURA!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderSmartContest[] = _("¡CONCURSO de INGENIO!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderToughContest[] = _("¡CONCURSO de DUREZA!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerLv50[] = _("¡Nv. 50 de TORRE BATALLA!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerOpenLv[] = _("¡Nv. LIBRE de TORRE BATALLA!\nSelecciona al LÍDER.");

static const u8 *const sChooseTrainerTexts[NUM_LINK_GROUP_TYPES] =
{
    [LINK_GROUP_SINGLE_BATTLE]     = sText_ChooseTrainerSingleBattle,
    [LINK_GROUP_DOUBLE_BATTLE]     = sText_ChooseTrainerDoubleBattle,
    [LINK_GROUP_MULTI_BATTLE]      = sText_ChooseLeaderMultiBattle,
    [LINK_GROUP_TRADE]             = sText_ChooseTrainerToTradeWith,
    [LINK_GROUP_POKEMON_JUMP]      = sText_ChooseLeaderPokemonJump,
    [LINK_GROUP_BERRY_CRUSH]       = sText_ChooseLeaderBerryCrush,
    [LINK_GROUP_BERRY_PICKING]     = sText_ChooseLeaderBerryPicking,
    [LINK_GROUP_WONDER_CARD]       = sText_ChooseTrainerToShareWonderCards,
    [LINK_GROUP_WONDER_NEWS]       = sText_ChooseTrainerToShareWonderNews,
    [LINK_GROUP_UNION_ROOM_RESUME] = NULL,
    [LINK_GROUP_UNION_ROOM_INIT]   = NULL,
    [LINK_GROUP_UNK_11]            = NULL,
    [LINK_GROUP_RECORD_CORNER]     = sText_ChooseLeaderRecordCorner,
    [LINK_GROUP_BERRY_BLENDER]     = sText_ChooseLeaderBerryBlender,
    [LINK_GROUP_UNK_14]            = NULL,
    [LINK_GROUP_COOL_CONTEST]      = sText_ChooseLeaderCoolContest,
    [LINK_GROUP_BEAUTY_CONTEST]    = sText_ChooseLeaderBeautyContest,
    [LINK_GROUP_CUTE_CONTEST]      = sText_ChooseLeaderCuteContest,
    [LINK_GROUP_SMART_CONTEST]     = sText_ChooseLeaderSmartContest,
    [LINK_GROUP_TOUGH_CONTEST]     = sText_ChooseLeaderToughContest,
    [LINK_GROUP_BATTLE_TOWER]      = sText_ChooseLeaderBattleTowerLv50,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = sText_ChooseLeaderBattleTowerOpenLv
};

ALIGNED(4) static const u8 sText_SearchingForWirelessSystemWait[] = _("Buscando el sistema de\nCOMUNICACIÓN INALÁMBRICA…");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("For a DOUBLE BATTLE, you must have\nat least two POKéMON.\p");
ALIGNED(4) static const u8 sText_AwaitingPlayersResponse[] = _("Esperando respuesta de {STR_VAR_1}…");
ALIGNED(4) static const u8 sText_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("Se le ha pedido a {STR_VAR_1}\nque te registre en el grupo…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromWirelessSystem[] = _("Esperando respuesta del sistema\nde COMUNICACIÓN INALÁMBRICA…");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("Please wait for other TRAINERS to\ngather and get ready.");
ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("En este momento no parece que\nse estén compartiendo TARJETAS.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("En este momento no parece que\nse estén compartiendo NOTICIAS.");

static const u8 *const sNoWonderSharedTexts[] = {
    sText_NoCardsSharedRightNow,
    sText_NoNewsSharedRightNow
};

ALIGNED(4) static const u8 sText_Battle[] = _("COMBATE");
ALIGNED(4) static const u8 sText_Chat2[] = _("CHAT");
ALIGNED(4) static const u8 sText_Greetings[] = _("ENCUENTR.");
ALIGNED(4) static const u8 sText_Exit[] = _("SALIR");
ALIGNED(4) static const u8 sText_Exit2[] = _("SALIR");
ALIGNED(4) static const u8 sText_Info[] = _("INFO.");
ALIGNED(4) static const u8 sText_NameWantedOfferLv[] = _("NOMBRE{CLEAR_TO 60}QUIERE{CLEAR_TO 110}DA{CLEAR_TO 198}NV.");
ALIGNED(4) static const u8 sText_SingleBattle[] = _("COMB. INDIVIDUAL");
ALIGNED(4) static const u8 sText_DoubleBattle[] = _("COMBATE DOBLE");
ALIGNED(4) static const u8 sText_MultiBattle[] = _("COMBATE MÚLTIPLE");
ALIGNED(4) static const u8 sText_PokemonTrades[] = _("INTERCAMBIOS PKMN");
ALIGNED(4) static const u8 sText_Chat[] = _("CHAT");
ALIGNED(4) static const u8 sText_Cards[] = _("TARJETAS");
ALIGNED(4) static const u8 sText_WonderCards[] = _("TARJETAS MIST.");
ALIGNED(4) static const u8 sText_WonderNews[] = _("NOTICIAS MIST.");
ALIGNED(4) static const u8 sText_PokemonJump[] = _("SALTO POKéMON");
ALIGNED(4) static const u8 sText_BerryCrush[] = _("MACHACABAYAS");
ALIGNED(4) static const u8 sText_BerryPicking[] = _("A POR BAYAS");
ALIGNED(4) static const u8 sText_Search[] = _("BUSCAR");
ALIGNED(4) static const u8 sText_BerryBlender[] = _("LICUABAYAS");
ALIGNED(4) static const u8 sText_RecordCorner[] = _("CENTRO de RÉCORDS");
ALIGNED(4) static const u8 sText_CoolContest[] = _("CONCURSO CARISMA");
ALIGNED(4) static const u8 sText_BeautyContest[] = _("CONCURSO BELLEZA");
ALIGNED(4) static const u8 sText_CuteContest[] = _("CONCURSO DULZURA");
ALIGNED(4) static const u8 sText_SmartContest[] = _("CONCURSO INGENIO");
ALIGNED(4) static const u8 sText_ToughContest[] = _("CONCURSO DUREZA");
ALIGNED(4) static const u8 sText_BattleTowerLv50[] = _("Nv. 50 de TORRE BATALLA");
ALIGNED(4) static const u8 sText_BattleTowerOpenLv[] = _("Nv. LIBRE de TORRE BATALLA");
ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("¡Es NORMAL!");
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("¡Es de color BRONCE!");
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("¡Es de color COBRE!");
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("¡Es de color PLATA!");
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("¡Es de color ORO!");

static const u8 *const sCardColorTexts[] = {
    sText_ItsNormalCard,
    sText_ItsBronzeCard,
    sText_ItsCopperCard,
    sText_ItsSilverCard,
    sText_ItsGoldCard
};

ALIGNED(4) static const u8 sText_TrainerCardInfoPage1[] = _("Ésta es la FICHA de ENTRENADOR\nde {DYNAMIC 0} {DYNAMIC 1}…\l{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTIEMPO J.:    {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) static const u8 sText_TrainerCardInfoPage2[] = _("COMBATES: {DYNAMIC 0} V  {DYNAMIC 2} D\nINTERCAMBIOS:  {DYNAMIC 3}\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: ¡Me alegro de conocerte!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: ¡Es un placer conocerte!{PAUSE 60}");

static const u8 *const sGladToMeetYouTexts[GENDER_COUNT] = {
    sText_GladToMeetYouMale,
    sText_GladToMeetYouFemale
};

ALIGNED(4) static const u8 sText_FinishedCheckingPlayersTrainerCard[] = _("Leída la FICHA de ENTRENADOR\nde {DYNAMIC 1}.{PAUSE 60}");

static const u8 *const sLinkGroupActivityNameTexts[] = {
    [ACTIVITY_NONE]              = sText_EmptyString,
    [ACTIVITY_BATTLE_SINGLE]     = sText_SingleBattle,
    [ACTIVITY_BATTLE_DOUBLE]     = sText_DoubleBattle,
    [ACTIVITY_BATTLE_MULTI]      = sText_MultiBattle,
    [ACTIVITY_TRADE]             = sText_PokemonTrades,
    [ACTIVITY_CHAT]              = sText_Chat,
    [ACTIVITY_WONDER_CARD_DUP]   = sText_WonderCards,
    [ACTIVITY_WONDER_NEWS_DUP]   = sText_WonderNews,
    [ACTIVITY_CARD]              = sText_Cards,
    [ACTIVITY_POKEMON_JUMP]      = sText_PokemonJump,
    [ACTIVITY_BERRY_CRUSH]       = sText_BerryCrush,
    [ACTIVITY_BERRY_PICK]        = sText_BerryPicking,
    [ACTIVITY_SEARCH]            = sText_Search,
    [ACTIVITY_SPIN_TRADE]        = sText_EmptyString,
    [ACTIVITY_BATTLE_TOWER_OPEN] = sText_BattleTowerOpenLv,
    [ACTIVITY_RECORD_CORNER]     = sText_RecordCorner,
    [ACTIVITY_BERRY_BLENDER]     = sText_BerryBlender,
    [ACTIVITY_ACCEPT]            = sText_EmptyString,
    [ACTIVITY_DECLINE]           = sText_EmptyString,
    [ACTIVITY_NPCTALK]           = sText_EmptyString,
    [ACTIVITY_PLYRTALK]          = sText_EmptyString,
    [ACTIVITY_WONDER_CARD]       = sText_WonderCards,
    [ACTIVITY_WONDER_NEWS]       = sText_WonderNews,
    [ACTIVITY_CONTEST_COOL]      = sText_CoolContest,
    [ACTIVITY_CONTEST_BEAUTY]    = sText_BeautyContest,
    [ACTIVITY_CONTEST_CUTE]      = sText_CuteContest,
    [ACTIVITY_CONTEST_SMART]     = sText_SmartContest,
    [ACTIVITY_CONTEST_TOUGH]     = sText_ToughContest,
    [ACTIVITY_BATTLE_TOWER]      = sText_BattleTowerLv50
};

static const struct WindowTemplate sWindowTemplate_BButtonCancel = {
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 30,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x0008
};

// Minimum and maximum number of players for a link group
// A minimum of 0 means the min and max are equal
#define LINK_GROUP_CAPACITY(min, max) (((min) << 12) | ((max) << 8))
#define GROUP_MAX(capacity) (capacity & 0x0F)
#define GROUP_MIN(capacity) (capacity >> 4)
#define GROUP_MIN2(capacity) (capacity & 0xF0) // Unnecessary to have both, but needed to match

static const u32 sLinkGroupToActivityAndCapacity[NUM_LINK_GROUP_TYPES] = {
    [LINK_GROUP_SINGLE_BATTLE]     = ACTIVITY_BATTLE_SINGLE     | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_DOUBLE_BATTLE]     = ACTIVITY_BATTLE_DOUBLE     | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_MULTI_BATTLE]      = ACTIVITY_BATTLE_MULTI      | LINK_GROUP_CAPACITY(0, 4),
    [LINK_GROUP_TRADE]             = ACTIVITY_TRADE             | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_POKEMON_JUMP]      = ACTIVITY_POKEMON_JUMP      | LINK_GROUP_CAPACITY(2, 5),
    [LINK_GROUP_BERRY_CRUSH]       = ACTIVITY_BERRY_CRUSH       | LINK_GROUP_CAPACITY(2, 5),
    [LINK_GROUP_BERRY_PICKING]     = ACTIVITY_BERRY_PICK        | LINK_GROUP_CAPACITY(3, 5),
    [LINK_GROUP_WONDER_CARD]       = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_WONDER_NEWS]       = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNION_ROOM_RESUME] = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNION_ROOM_INIT]   = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNK_11]            = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_RECORD_CORNER]     = ACTIVITY_RECORD_CORNER     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BERRY_BLENDER]     = ACTIVITY_BERRY_BLENDER     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_UNK_14]            = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_COOL_CONTEST]      = ACTIVITY_CONTEST_COOL      | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BEAUTY_CONTEST]    = ACTIVITY_CONTEST_BEAUTY    | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_CUTE_CONTEST]      = ACTIVITY_CONTEST_CUTE      | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_SMART_CONTEST]     = ACTIVITY_CONTEST_SMART     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_TOUGH_CONTEST]     = ACTIVITY_CONTEST_TOUGH     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BATTLE_TOWER]      = ACTIVITY_BATTLE_TOWER      | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_BATTLE_TOWER_OPEN] = ACTIVITY_BATTLE_TOWER_OPEN | LINK_GROUP_CAPACITY(0, 2)
};

static const struct WindowTemplate sWindowTemplate_PlayerList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 13,
    .height = 8,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_5PlayerList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 13,
    .height = 10,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_NumPlayerMode = {
    .bg = 0,
    .tilemapLeft = 16,
    .tilemapTop = 3,
    .width = 7,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x00c6
};

static const struct ListMenuItem sPossibleGroupMembersListMenuItems[] = {
    { sText_EmptyString, 0 },
    { sText_EmptyString, 1 },
    { sText_EmptyString, 2 },
    { sText_EmptyString, 3 },
    { sText_EmptyString, 4 }
};

static const struct ListMenuTemplate sListMenuTemplate_PossibleGroupMembers = {
    .items = sPossibleGroupMembersListMenuItems,
    .moveCursorFunc = NULL,
    .itemPrintFunc = ItemPrintFunc_PossibleGroupMembers,
    .totalItems = ARRAY_COUNT(sPossibleGroupMembersListMenuItems),
    .maxShowed = 5,
    .windowId = 0,
    .header_X = 0,
    .item_X = 0,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_INVISIBLE
};

static const struct WindowTemplate sWindowTemplate_GroupList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 17,
    .height = 10,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_PlayerNameAndId = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 3,
    .width = 7,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x00ee
};

static const struct ListMenuItem sUnionRoomGroupsMenuItems[] = {
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_EmptyString,  8 },
    { sText_EmptyString,  9 },
    { sText_EmptyString, 10 },
    { sText_EmptyString, 11 },
    { sText_EmptyString, 12 },
    { sText_EmptyString, 13 },
    { sText_EmptyString, 14 },
    { sText_EmptyString, 15 }
};

static const struct ListMenuTemplate sListMenuTemplate_UnionRoomGroups = {
    .items = sUnionRoomGroupsMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = ListMenuItemPrintFunc_UnionRoomGroups,
    .totalItems = ARRAY_COUNT(sUnionRoomGroupsMenuItems),
    .maxShowed = 5,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_InviteToActivity = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 5,
    .width = 16,
    .height = 8,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sInviteToActivityMenuItems[] = {
    { sText_Greetings, ACTIVITY_CARD | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Battle,    ACTIVITY_BATTLE_SINGLE | IN_UNION_ROOM | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Chat2,     ACTIVITY_CHAT | IN_UNION_ROOM | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Exit,      ACTIVITY_NONE | IN_UNION_ROOM }
};

static const struct ListMenuTemplate sListMenuTemplate_InviteToActivity = {
    .items = sInviteToActivityMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sInviteToActivityMenuItems),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_RegisterForTrade = {
    .bg = 0,
    .tilemapLeft = 18,
    .tilemapTop = 7,
    .width = 16,
    .height = 6,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sRegisterForTradeListMenuItems[] = {
    { gText_Register, 1 },
    { sText_Info, 2 },
    { sText_Exit, 3 }
};

static const struct ListMenuTemplate sListMenuTemplate_RegisterForTrade = {
    .items = sRegisterForTradeListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sRegisterForTradeListMenuItems),
    .maxShowed = 3,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_TradingBoardRequestType = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 1,
    .width = 16,
    .height = 12,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sTradingBoardTypes[NUMBER_OF_MON_TYPES] = {
    { gTypesInfo[TYPE_NORMAL].name,   TYPE_NORMAL         },
    { gTypesInfo[TYPE_FIRE].name,     TYPE_FIRE           },
    { gTypesInfo[TYPE_WATER].name,    TYPE_WATER          },
    { gTypesInfo[TYPE_ELECTRIC].name, TYPE_ELECTRIC       },
    { gTypesInfo[TYPE_GRASS].name,    TYPE_GRASS          },
    { gTypesInfo[TYPE_ICE].name,      TYPE_ICE            },
    { gTypesInfo[TYPE_GROUND].name,   TYPE_GROUND         },
    { gTypesInfo[TYPE_ROCK].name,     TYPE_ROCK           },
    { gTypesInfo[TYPE_FLYING].name,   TYPE_FLYING         },
    { gTypesInfo[TYPE_PSYCHIC].name,  TYPE_PSYCHIC        },
    { gTypesInfo[TYPE_FIGHTING].name, TYPE_FIGHTING       },
    { gTypesInfo[TYPE_POISON].name,   TYPE_POISON         },
    { gTypesInfo[TYPE_BUG].name,      TYPE_BUG            },
    { gTypesInfo[TYPE_GHOST].name,    TYPE_GHOST          },
    { gTypesInfo[TYPE_DRAGON].name,   TYPE_DRAGON         },
    { gTypesInfo[TYPE_STEEL].name,    TYPE_STEEL          },
    { gTypesInfo[TYPE_DARK].name,     TYPE_DARK           },
    { gTypesInfo[TYPE_FAIRY].name,    TYPE_FAIRY          },
    { sText_Exit,                NUMBER_OF_MON_TYPES }
};

static const struct ListMenuTemplate sMenuTemplate_TradingBoardRequestType = {
    .items = sTradingBoardTypes,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sTradingBoardTypes),
    .maxShowed = 6,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_TradingBoardHeader = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 28,
    .height = 2,
    .paletteNum = 13,
    .baseBlock = 0x0001
};

static const struct WindowTemplate sWindowTemplate_TradingBoardMain = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 5,
    .width = 28,
    .height = 12,
    .paletteNum = 13,
    .baseBlock = 0x0039
};

static const struct ListMenuItem sTradeBoardListMenuItems[] = {
    { sText_EmptyString, LIST_HEADER },
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_Exit2,  8 }
};

static const struct ListMenuTemplate sTradeBoardListMenuTemplate = {
    .items = sTradeBoardListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = TradeBoardListMenuItemPrintFunc,
    .totalItems = ARRAY_COUNT(sTradeBoardListMenuItems),
    .maxShowed = 6,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 14,
    .fillValue = 15,
    .cursorShadowPal = 13,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

// Unused
static const struct WindowTemplate sWindowTemplate_Unused = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 5,
    .width = 28,
    .height = 12,
    .paletteNum = 13,
    .baseBlock = 0x0039
};

static const struct ListMenuItem sEmptyListMenuItems[] = {
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_EmptyString,  8 },
    { sText_EmptyString,  9 },
    { sText_EmptyString, 10 },
    { sText_EmptyString, 11 },
    { sText_EmptyString, 12 },
    { sText_EmptyString, 13 },
    { sText_EmptyString, 14 },
    { sText_EmptyString, 15 }
};

// Unused
static const struct ListMenuTemplate sEmptyListMenuTemplate = {
    .items = sEmptyListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = ItemPrintFunc_EmptyList,
    .totalItems = ARRAY_COUNT(sEmptyListMenuItems),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct RfuPlayerData sUnionRoomPlayer_DummyRfu = {0};

ALIGNED(4) static const u8 sAcceptedActivityIds_SingleBattle[]    = {ACTIVITY_BATTLE_SINGLE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_DoubleBattle[]    = {ACTIVITY_BATTLE_DOUBLE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_MultiBattle[]     = {ACTIVITY_BATTLE_MULTI, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Trade[]           = {ACTIVITY_TRADE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_PokemonJump[]     = {ACTIVITY_POKEMON_JUMP, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryCrush[]      = {ACTIVITY_BERRY_CRUSH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryPicking[]    = {ACTIVITY_BERRY_PICK, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_WonderCard[]      = {ACTIVITY_WONDER_CARD, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_WonderNews[]      = {ACTIVITY_WONDER_NEWS, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Resume[]          = {
    IN_UNION_ROOM | ACTIVITY_NONE,
    IN_UNION_ROOM | ACTIVITY_BATTLE_SINGLE,
    IN_UNION_ROOM | ACTIVITY_TRADE,
    IN_UNION_ROOM | ACTIVITY_CHAT,
    IN_UNION_ROOM | ACTIVITY_CARD,
    IN_UNION_ROOM | ACTIVITY_ACCEPT,
    IN_UNION_ROOM | ACTIVITY_DECLINE,
    IN_UNION_ROOM | ACTIVITY_NPCTALK,
    IN_UNION_ROOM | ACTIVITY_PLYRTALK,
    0xff
};
ALIGNED(4) static const u8 sAcceptedActivityIds_Init[]            = {ACTIVITY_SEARCH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Unk11[]           = {
    ACTIVITY_BATTLE_SINGLE,
    ACTIVITY_BATTLE_DOUBLE,
    ACTIVITY_BATTLE_MULTI,
    ACTIVITY_TRADE,
    ACTIVITY_POKEMON_JUMP,
    ACTIVITY_BERRY_CRUSH,
    ACTIVITY_BERRY_PICK,
    ACTIVITY_WONDER_CARD,
    ACTIVITY_WONDER_NEWS,
    ACTIVITY_SPIN_TRADE,
    0xff
};
ALIGNED(4) static const u8 sAcceptedActivityIds_RecordCorner[]    = {ACTIVITY_RECORD_CORNER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryBlender[]    = {ACTIVITY_BERRY_BLENDER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_CoolContest[]     = {ACTIVITY_CONTEST_COOL, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BeautyContest[]   = {ACTIVITY_CONTEST_BEAUTY, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_CuteContest[]     = {ACTIVITY_CONTEST_CUTE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_SmartContest[]    = {ACTIVITY_CONTEST_SMART, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_ToughContest[]    = {ACTIVITY_CONTEST_TOUGH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BattleTower[]     = {ACTIVITY_BATTLE_TOWER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BattleTowerOpen[] = {ACTIVITY_BATTLE_TOWER_OPEN, 0xff};

static const u8 *const sAcceptedActivityIds[NUM_LINK_GROUP_TYPES] = {
    [LINK_GROUP_SINGLE_BATTLE]     = sAcceptedActivityIds_SingleBattle,
    [LINK_GROUP_DOUBLE_BATTLE]     = sAcceptedActivityIds_DoubleBattle,
    [LINK_GROUP_MULTI_BATTLE]      = sAcceptedActivityIds_MultiBattle,
    [LINK_GROUP_TRADE]             = sAcceptedActivityIds_Trade,
    [LINK_GROUP_POKEMON_JUMP]      = sAcceptedActivityIds_PokemonJump,
    [LINK_GROUP_BERRY_CRUSH]       = sAcceptedActivityIds_BerryCrush,
    [LINK_GROUP_BERRY_PICKING]     = sAcceptedActivityIds_BerryPicking,
    [LINK_GROUP_WONDER_CARD]       = sAcceptedActivityIds_WonderCard,
    [LINK_GROUP_WONDER_NEWS]       = sAcceptedActivityIds_WonderNews,
    [LINK_GROUP_UNION_ROOM_RESUME] = sAcceptedActivityIds_Resume,
    [LINK_GROUP_UNION_ROOM_INIT]   = sAcceptedActivityIds_Init,
    [LINK_GROUP_UNK_11]            = sAcceptedActivityIds_Unk11,
    [LINK_GROUP_RECORD_CORNER]     = sAcceptedActivityIds_RecordCorner,
    [LINK_GROUP_BERRY_BLENDER]     = sAcceptedActivityIds_BerryBlender,
    [LINK_GROUP_UNK_14]            = NULL,
    [LINK_GROUP_COOL_CONTEST]      = sAcceptedActivityIds_CoolContest,
    [LINK_GROUP_BEAUTY_CONTEST]    = sAcceptedActivityIds_BeautyContest,
    [LINK_GROUP_CUTE_CONTEST]      = sAcceptedActivityIds_CuteContest,
    [LINK_GROUP_SMART_CONTEST]     = sAcceptedActivityIds_SmartContest,
    [LINK_GROUP_TOUGH_CONTEST]     = sAcceptedActivityIds_ToughContest,
    [LINK_GROUP_BATTLE_TOWER]      = sAcceptedActivityIds_BattleTower,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = sAcceptedActivityIds_BattleTowerOpen
};

static const u8 sLinkGroupToURoomActivity[NUM_LINK_GROUP_TYPES + 2] =
{
    [LINK_GROUP_SINGLE_BATTLE]     = ACTIVITY_BATTLE_SINGLE,
    [LINK_GROUP_DOUBLE_BATTLE]     = ACTIVITY_BATTLE_DOUBLE,
    [LINK_GROUP_MULTI_BATTLE]      = ACTIVITY_BATTLE_MULTI,
    [LINK_GROUP_TRADE]             = ACTIVITY_TRADE,
    [LINK_GROUP_POKEMON_JUMP]      = ACTIVITY_POKEMON_JUMP,
    [LINK_GROUP_BERRY_CRUSH]       = ACTIVITY_BERRY_CRUSH,
    [LINK_GROUP_BERRY_PICKING]     = ACTIVITY_BERRY_PICK,
    [LINK_GROUP_WONDER_CARD]       = ACTIVITY_WONDER_CARD,
    [LINK_GROUP_WONDER_NEWS]       = ACTIVITY_WONDER_NEWS,
    [LINK_GROUP_UNION_ROOM_RESUME] = ACTIVITY_NONE,
    [LINK_GROUP_UNION_ROOM_INIT]   = ACTIVITY_NONE,
    [LINK_GROUP_UNK_11]            = ACTIVITY_NONE,
    [LINK_GROUP_RECORD_CORNER]     = ACTIVITY_RECORD_CORNER,
    [LINK_GROUP_BERRY_BLENDER]     = ACTIVITY_BERRY_BLENDER,
    [LINK_GROUP_UNK_14]            = ACTIVITY_NONE,
    [LINK_GROUP_COOL_CONTEST]      = ACTIVITY_CONTEST_COOL,
    [LINK_GROUP_BEAUTY_CONTEST]    = ACTIVITY_CONTEST_BEAUTY,
    [LINK_GROUP_CUTE_CONTEST]      = ACTIVITY_CONTEST_CUTE,
    [LINK_GROUP_SMART_CONTEST]     = ACTIVITY_CONTEST_SMART,
    [LINK_GROUP_TOUGH_CONTEST]     = ACTIVITY_CONTEST_TOUGH,
    [LINK_GROUP_BATTLE_TOWER]      = ACTIVITY_BATTLE_TOWER,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = ACTIVITY_BATTLE_TOWER_OPEN
};
