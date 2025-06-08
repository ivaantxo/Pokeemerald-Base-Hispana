const u8 gEasyChatWord_Thanks[] = _("GRACIAS");
const u8 gEasyChatWord_Yes[] = _("¿QUÉ TAL?");
const u8 gEasyChatWord_HereGoes[] = _("¡AHÍ VA!");
const u8 gEasyChatWord_HereICome[] = _("¿CÓMO VAS?");
const u8 gEasyChatWord_HereItIs[] = _("¡NOS VEMOS!");
const u8 gEasyChatWord_Yeah[] = _("¡HASTA OTRA!");
const u8 gEasyChatWord_Welcome[] = _("¡BIENVENIDO!");
const u8 gEasyChatWord_Oi[] = _("¡BIENVENIDA!");
const u8 gEasyChatWord_HowDo[] = _("DE NADA");
const u8 gEasyChatWord_Congrats[] = _("ENHORABUENA");
const u8 gEasyChatWord_GiveMe[] = _("¡BIEN HECHO!");
const u8 gEasyChatWord_Sorry[] = _("¡LO SIENTO!");
const u8 gEasyChatWord_Apologize[] = _("¡DISCULPA!");
const u8 gEasyChatWord_Forgive[] = _("¡PERDONA!");
const u8 gEasyChatWord_HeyThere[] = _("¡OYE!");
const u8 gEasyChatWord_Hello[] = _("¡HOLA!");
const u8 gEasyChatWord_GoodBye[] = _("¡ADIÓS!");
const u8 gEasyChatWord_ThankYou[] = _("MIL GRACIAS");
const u8 gEasyChatWord_IveArrived[] = _("¡AQUÍ ESTOY!");
const u8 gEasyChatWord_Pardon[] = _("¡PERDÓN!");
const u8 gEasyChatWord_Excuse[] = _("¡QUÉ PENA!");
const u8 gEasyChatWord_SeeYa[] = _("¡QUÉ BIEN!");
const u8 gEasyChatWord_ExcuseMe[] = _("¡QUÉ GUAY!");
const u8 gEasyChatWord_WellThen[] = _("¡AHORA QUÉ!");
const u8 gEasyChatWord_GoAhead[] = _("TÚ MISMO");
const u8 gEasyChatWord_Appreciate[] = _("¡ME GUSTAS!");
const u8 gEasyChatWord_HeyQues[] = _("¡TÚ MISMA!");
const u8 gEasyChatWord_WhatsUpQues[] = _("¿QUÉ PASA?");
const u8 gEasyChatWord_HuhQues[] = _("¿QUÉ?");
const u8 gEasyChatWord_No[] = _("¡VETE!");
const u8 gEasyChatWord_Hi[] = _("¡TE DEJO!");
const u8 gEasyChatWord_YeahYeah[] = _("¡ME LARGO!");
const u8 gEasyChatWord_ByeBye[] = _("¡ME VOY!");
const u8 gEasyChatWord_MeetYou[] = _("HASTA NUNCA");
const u8 gEasyChatWord_Hey[] = _("¡OLVÍDAME!");
const u8 gEasyChatWord_Smell[] = _("¡OLVÍDATE!");
const u8 gEasyChatWord_Listening[] = _("¡PASA DE MÍ!");
const u8 gEasyChatWord_HooHah[] = _("¡PASO DE TI!");
const u8 gEasyChatWord_Yahoo[] = _("¡ME PIRO!");
const u8 gEasyChatWord_Yo[] = _("¡PÍRATE!");
const u8 gEasyChatWord_ComeOver[] = _("¡LÁRGATE!");
const u8 gEasyChatWord_CountOn[] = _("¡DÉJAME!");

const struct EasyChatWordInfo gEasyChatGroup_Greetings[] = {
    [EC_INDEX(EC_WORD_THANKS)] =
    {
        .text = gEasyChatWord_Thanks,
        .alphabeticalOrder = EC_INDEX(EC_WORD_APOLOGIZE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YES)] =
    {
        .text = gEasyChatWord_Yes,
        .alphabeticalOrder = EC_INDEX(EC_WORD_APPRECIATE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_GOES)] =
    {
        .text = gEasyChatWord_HereGoes,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BYE_BYE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_I_COME)] =
    {
        .text = gEasyChatWord_HereICome,
        .alphabeticalOrder = EC_INDEX(EC_WORD_COME_OVER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_IT_IS)] =
    {
        .text = gEasyChatWord_HereItIs,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONGRATS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YEAH)] =
    {
        .text = gEasyChatWord_Yeah,
        .alphabeticalOrder = EC_INDEX(EC_WORD_COUNT_ON),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WELCOME)] =
    {
        .text = gEasyChatWord_Welcome,
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCUSE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OI)] =
    {
        .text = gEasyChatWord_Oi,
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCUSE_ME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOW_DO)] =
    {
        .text = gEasyChatWord_HowDo,
        .alphabeticalOrder = EC_INDEX(EC_WORD_FORGIVE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONGRATS)] =
    {
        .text = gEasyChatWord_Congrats,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GIVE_ME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIVE_ME)] =
    {
        .text = gEasyChatWord_GiveMe,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GO_AHEAD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SORRY)] =
    {
        .text = gEasyChatWord_Sorry,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOOD_BYE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APOLOGIZE)] =
    {
        .text = gEasyChatWord_Apologize,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HELLO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FORGIVE)] =
    {
        .text = gEasyChatWord_Forgive,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE_GOES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY_THERE)] =
    {
        .text = gEasyChatWord_HeyThere,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE_I_COME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HELLO)] =
    {
        .text = gEasyChatWord_Hello,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE_IT_IS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOOD_BYE)] =
    {
        .text = gEasyChatWord_GoodBye,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THANK_YOU)] =
    {
        .text = gEasyChatWord_ThankYou,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY_THERE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_VE_ARRIVED)] =
    {
        .text = gEasyChatWord_IveArrived,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY_QUES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARDON)] =
    {
        .text = gEasyChatWord_Pardon,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HI),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCUSE)] =
    {
        .text = gEasyChatWord_Excuse,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOO_HAH),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEE_YA)] =
    {
        .text = gEasyChatWord_SeeYa,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOW_DO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCUSE_ME)] =
    {
        .text = gEasyChatWord_ExcuseMe,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HUH_QUES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WELL_THEN)] =
    {
        .text = gEasyChatWord_WellThen,
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_VE_ARRIVED),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GO_AHEAD)] =
    {
        .text = gEasyChatWord_GoAhead,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LISTENING),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APPRECIATE)] =
    {
        .text = gEasyChatWord_Appreciate,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MEET_YOU),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY_QUES)] =
    {
        .text = gEasyChatWord_HeyQues,
        .alphabeticalOrder = EC_INDEX(EC_WORD_NO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHAT_S_UP_QUES)] =
    {
        .text = gEasyChatWord_WhatsUpQues,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OI),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HUH_QUES)] =
    {
        .text = gEasyChatWord_HuhQues,
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARDON),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NO)] =
    {
        .text = gEasyChatWord_No,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SEE_YA),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HI)] =
    {
        .text = gEasyChatWord_Hi,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMELL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YEAH_YEAH)] =
    {
        .text = gEasyChatWord_YeahYeah,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SORRY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BYE_BYE)] =
    {
        .text = gEasyChatWord_ByeBye,
        .alphabeticalOrder = EC_INDEX(EC_WORD_THANK_YOU),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MEET_YOU)] =
    {
        .text = gEasyChatWord_MeetYou,
        .alphabeticalOrder = EC_INDEX(EC_WORD_THANKS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY)] =
    {
        .text = gEasyChatWord_Hey,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WELCOME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMELL)] =
    {
        .text = gEasyChatWord_Smell,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WELL_THEN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LISTENING)] =
    {
        .text = gEasyChatWord_Listening,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHAT_S_UP_QUES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOO_HAH)] =
    {
        .text = gEasyChatWord_HooHah,
        .alphabeticalOrder = EC_INDEX(EC_WORD_YAHOO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YAHOO)] =
    {
        .text = gEasyChatWord_Yahoo,
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEAH),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YO)] =
    {
        .text = gEasyChatWord_Yo,
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEAH_YEAH),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COME_OVER)] =
    {
        .text = gEasyChatWord_ComeOver,
        .alphabeticalOrder = EC_INDEX(EC_WORD_YES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COUNT_ON)] =
    {
        .text = gEasyChatWord_CountOn,
        .alphabeticalOrder = EC_INDEX(EC_WORD_YO),
        .enabled = TRUE,
    },
};
