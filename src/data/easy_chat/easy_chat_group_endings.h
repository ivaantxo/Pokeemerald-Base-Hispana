const u8 gEasyChatWord_Will[] = _("HAS");
const u8 gEasyChatWord_WillBeHere[] = _("ESTOY");
const u8 gEasyChatWord_Or[] = _("VOY");
const u8 gEasyChatWord_Times[] = _("SIENTO");
const u8 gEasyChatWord_Wonder[] = _("VAS");
const u8 gEasyChatWord_IsItQues[] = _("DEVORA");
const u8 gEasyChatWord_Be[] = _("SER");
const u8 gEasyChatWord_Gimme[] = _("SEAS");
const u8 gEasyChatWord_Could[] = _("DIME");
const u8 gEasyChatWord_LikelyTo[] = _("VER");
const u8 gEasyChatWord_Would[] = _("QUEDAR");
const u8 gEasyChatWord_Is[] = _("ES");
const u8 gEasyChatWord_IsntItQues[] = _("SOY");
const u8 gEasyChatWord_Lets[] = _("ERES");
const u8 gEasyChatWord_Other[] = _("SERVIRÁ");
const u8 gEasyChatWord_Are[] = _("ESTÁS");
const u8 gEasyChatWord_Was[] = _("SON");
const u8 gEasyChatWord_Were[] = _("SERÁ");
const u8 gEasyChatWord_Those[] = _("DICEN");
const u8 gEasyChatWord_Isnt[] = _("ESPERO");
const u8 gEasyChatWord_Wont[] = _("PREFERIRÍA");
const u8 gEasyChatWord_Cant[] = _("PUEDES");
const u8 gEasyChatWord_Can[] = _("PUEDO");
const u8 gEasyChatWord_Dont[] = _("ESTÁ");
const u8 gEasyChatWord_Do[] = _("HAZ");
const u8 gEasyChatWord_Does[] = _("SÉ");
const u8 gEasyChatWord_Whom[] = _("TENGO");
const u8 gEasyChatWord_Which[] = _("FALTA");
const u8 gEasyChatWord_Wasnt[] = _("COMER");
const u8 gEasyChatWord_Werent[] = _("PUEDE");
const u8 gEasyChatWord_Have[] = _("TIENES");
const u8 gEasyChatWord_Havent[] = _("LLEGÓ");
const u8 gEasyChatWord_A[] = _("NECESITO");
const u8 gEasyChatWord_An[] = _("TENER");
const u8 gEasyChatWord_Not[] = _("PONGAS");
const u8 gEasyChatWord_There[] = _("ADORAMOS");
const u8 gEasyChatWord_OkQues[] = _("CREO");
const u8 gEasyChatWord_So[] = _("CORRIDO");
const u8 gEasyChatWord_Maybe[] = _("DEBERÍAMOS");
const u8 gEasyChatWord_About[] = _("EMPEZAR");
const u8 gEasyChatWord_Over[] = _("PODRÁS");
const u8 gEasyChatWord_It[] = _("GUSTAN");
const u8 gEasyChatWord_All[] = _("PORTAS");
const u8 gEasyChatWord_For[] = _("LLEGAN");
const u8 gEasyChatWord_On[] = _("DEBERÍA");
const u8 gEasyChatWord_Off[] = _("PRÉSTAME");
const u8 gEasyChatWord_As[] = _("PODRÍAS");
const u8 gEasyChatWord_To[] = _("UTILIZA");
const u8 gEasyChatWord_With[] = _("CUIDAS");
const u8 gEasyChatWord_Better[] = _("VEO");
const u8 gEasyChatWord_Ever[] = _("EMOCIONAN");
const u8 gEasyChatWord_Since[] = _("QUIERO");
const u8 gEasyChatWord_Of[] = _("HACERME");
const u8 gEasyChatWord_BelongsTo[] = _("HAY");
const u8 gEasyChatWord_At[] = _("CREAS");
const u8 gEasyChatWord_In[] = _("ESCUCHA");
const u8 gEasyChatWord_Out[] = _("DECIDAN");
const u8 gEasyChatWord_Too[] = _("OBSERVA");
const u8 gEasyChatWord_Like[] = _("GUSTA");
const u8 gEasyChatWord_Did[] = _("PARECE");
const u8 gEasyChatWord_Didnt[] = _("QUIERES");
const u8 gEasyChatWord_Doesnt[] = _("DES");
const u8 gEasyChatWord_Without[] = _("DA");
const u8 gEasyChatWord_After[] = _("DESAPARECE");
const u8 gEasyChatWord_Before[] = _("BUSCANDO");
const u8 gEasyChatWord_While[] = _("VEN");
const u8 gEasyChatWord_Than[] = _("DESPIERTA");
const u8 gEasyChatWord_Once[] = _("PASARLO");
const u8 gEasyChatWord_Anywhere[] = _("CONFÍA");

const struct EasyChatWordInfo gEasyChatGroup_Endings[] = {
    [EC_INDEX(EC_WORD_WILL)] =
    {
        .text = gEasyChatWord_Will,
        .alphabeticalOrder = EC_INDEX(EC_WORD_A),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WILL_BE_HERE)] =
    {
        .text = gEasyChatWord_WillBeHere,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ABOUT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OR)] =
    {
        .text = gEasyChatWord_Or,
        .alphabeticalOrder = EC_INDEX(EC_WORD_AFTER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TIMES)] =
    {
        .text = gEasyChatWord_Times,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WONDER)] =
    {
        .text = gEasyChatWord_Wonder,
        .alphabeticalOrder = EC_INDEX(EC_WORD_AN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IS_IT_QUES)] =
    {
        .text = gEasyChatWord_IsItQues,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ANYWHERE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BE)] =
    {
        .text = gEasyChatWord_Be,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ARE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIMME)] =
    {
        .text = gEasyChatWord_Gimme,
        .alphabeticalOrder = EC_INDEX(EC_WORD_AS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COULD)] =
    {
        .text = gEasyChatWord_Could,
        .alphabeticalOrder = EC_INDEX(EC_WORD_AT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIKELY_TO)] =
    {
        .text = gEasyChatWord_LikelyTo,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOULD)] =
    {
        .text = gEasyChatWord_Would,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BEFORE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IS)] =
    {
        .text = gEasyChatWord_Is,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BELONGS_TO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ISN_T_IT_QUES)] =
    {
        .text = gEasyChatWord_IsntItQues,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BETTER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LET_S)] =
    {
        .text = gEasyChatWord_Lets,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CAN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OTHER)] =
    {
        .text = gEasyChatWord_Other,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CAN_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ARE)] =
    {
        .text = gEasyChatWord_Are,
        .alphabeticalOrder = EC_INDEX(EC_WORD_COULD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAS)] =
    {
        .text = gEasyChatWord_Was,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DID),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WERE)] =
    {
        .text = gEasyChatWord_Were,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIDN_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THOSE)] =
    {
        .text = gEasyChatWord_Those,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ISN_T)] =
    {
        .text = gEasyChatWord_Isnt,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DOES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WON_T)] =
    {
        .text = gEasyChatWord_Wont,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DOESN_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAN_T)] =
    {
        .text = gEasyChatWord_Cant,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DON_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAN)] =
    {
        .text = gEasyChatWord_Can,
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DON_T)] =
    {
        .text = gEasyChatWord_Dont,
        .alphabeticalOrder = EC_INDEX(EC_WORD_FOR),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DO)] =
    {
        .text = gEasyChatWord_Do,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GIMME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DOES)] =
    {
        .text = gEasyChatWord_Does,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAVE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHOM)] =
    {
        .text = gEasyChatWord_Whom,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAVEN_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHICH)] =
    {
        .text = gEasyChatWord_Which,
        .alphabeticalOrder = EC_INDEX(EC_WORD_IN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WASN_T)] =
    {
        .text = gEasyChatWord_Wasnt,
        .alphabeticalOrder = EC_INDEX(EC_WORD_IS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEREN_T)] =
    {
        .text = gEasyChatWord_Werent,
        .alphabeticalOrder = EC_INDEX(EC_WORD_IS_IT_QUES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAVE)] =
    {
        .text = gEasyChatWord_Have,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ISN_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAVEN_T)] =
    {
        .text = gEasyChatWord_Havent,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ISN_T_IT_QUES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_A)] =
    {
        .text = gEasyChatWord_A,
        .alphabeticalOrder = EC_INDEX(EC_WORD_IT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AN)] =
    {
        .text = gEasyChatWord_An,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LET_S),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOT)] =
    {
        .text = gEasyChatWord_Not,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIKE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THERE)] =
    {
        .text = gEasyChatWord_There,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIKELY_TO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OK_QUES)] =
    {
        .text = gEasyChatWord_OkQues,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MAYBE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SO)] =
    {
        .text = gEasyChatWord_So,
        .alphabeticalOrder = EC_INDEX(EC_WORD_NOT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAYBE)] =
    {
        .text = gEasyChatWord_Maybe,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OF),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ABOUT)] =
    {
        .text = gEasyChatWord_About,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OFF),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OVER)] =
    {
        .text = gEasyChatWord_Over,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OK_QUES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IT)] =
    {
        .text = gEasyChatWord_It,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ON),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALL)] =
    {
        .text = gEasyChatWord_All,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ONCE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FOR)] =
    {
        .text = gEasyChatWord_For,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OR),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ON)] =
    {
        .text = gEasyChatWord_On,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OTHER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OFF)] =
    {
        .text = gEasyChatWord_Off,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OUT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AS)] =
    {
        .text = gEasyChatWord_As,
        .alphabeticalOrder = EC_INDEX(EC_WORD_OVER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO)] =
    {
        .text = gEasyChatWord_To,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SINCE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WITH)] =
    {
        .text = gEasyChatWord_With,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BETTER)] =
    {
        .text = gEasyChatWord_Better,
        .alphabeticalOrder = EC_INDEX(EC_WORD_THAN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVER)] =
    {
        .text = gEasyChatWord_Ever,
        .alphabeticalOrder = EC_INDEX(EC_WORD_THERE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SINCE)] =
    {
        .text = gEasyChatWord_Since,
        .alphabeticalOrder = EC_INDEX(EC_WORD_THOSE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OF)] =
    {
        .text = gEasyChatWord_Of,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TIMES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BELONGS_TO)] =
    {
        .text = gEasyChatWord_BelongsTo,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AT)] =
    {
        .text = gEasyChatWord_At,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IN)] =
    {
        .text = gEasyChatWord_In,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WAS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OUT)] =
    {
        .text = gEasyChatWord_Out,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WASN_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOO)] =
    {
        .text = gEasyChatWord_Too,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WERE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIKE)] =
    {
        .text = gEasyChatWord_Like,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WEREN_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DID)] =
    {
        .text = gEasyChatWord_Did,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHICH),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIDN_T)] =
    {
        .text = gEasyChatWord_Didnt,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHILE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DOESN_T)] =
    {
        .text = gEasyChatWord_Doesnt,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHOM),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WITHOUT)] =
    {
        .text = gEasyChatWord_Without,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WILL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AFTER)] =
    {
        .text = gEasyChatWord_After,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WILL_BE_HERE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEFORE)] =
    {
        .text = gEasyChatWord_Before,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WITH),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHILE)] =
    {
        .text = gEasyChatWord_While,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WITHOUT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THAN)] =
    {
        .text = gEasyChatWord_Than,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WON_T),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ONCE)] =
    {
        .text = gEasyChatWord_Once,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WONDER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANYWHERE)] =
    {
        .text = gEasyChatWord_Anywhere,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WOULD),
        .enabled = TRUE,
    },
};
