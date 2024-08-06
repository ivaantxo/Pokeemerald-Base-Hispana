const u8 gEasyChatWord_MatchUp[] = _("IMPORTANTE");
const u8 gEasyChatWord_Go[] = _("ADELANTE");
const u8 gEasyChatWord_No1[] = _("N.º 1");
const u8 gEasyChatWord_Decide[] = _("GANARÁS");
const u8 gEasyChatWord_LetMeWin[] = _("CATEGORÍA");
const u8 gEasyChatWord_Wins[] = _("GANA");
const u8 gEasyChatWord_Win[] = _("GANAR");
const u8 gEasyChatWord_Won[] = _("GANÉ");
const u8 gEasyChatWord_IfIWin[] = _("SI YO GANO");
const u8 gEasyChatWord_WhenIWin[] = _("FUERZAS");
const u8 gEasyChatWord_CantWin[] = _("GANARME");
const u8 gEasyChatWord_CanWin[] = _("EMOCIONANTE");
const u8 gEasyChatWord_NoMatch[] = _("PERDERÁS");
const u8 gEasyChatWord_Spirit[] = _("ESPÍRITU");
const u8 gEasyChatWord_Decided[] = _("TU RIVAL");
const u8 gEasyChatWord_TrumpCard[] = _("TRIUNFARÉ");
const u8 gEasyChatWord_TakeThat[] = _("FORTALECERÉ");
const u8 gEasyChatWord_ComeOn[] = _("VENCERME");
const u8 gEasyChatWord_Attack[] = _("ATACO");
const u8 gEasyChatWord_Surrender[] = _("ME RINDO");
const u8 gEasyChatWord_Gutsy[] = _("VALIENTE");
const u8 gEasyChatWord_Talent[] = _("ESFORZARÉ");
const u8 gEasyChatWord_Strategy[] = _("ESTRATEGIA");
const u8 gEasyChatWord_Smite[] = _("ALUCINAR");
const u8 gEasyChatWord_Match[] = _("CÓLERA");
const u8 gEasyChatWord_Victory[] = _("VICTORIA");
const u8 gEasyChatWord_Offensive[] = _("OFENSIVA");
const u8 gEasyChatWord_Sense[] = _("IMPRESIÓNAME");
const u8 gEasyChatWord_Versus[] = _("VERSUS");
const u8 gEasyChatWord_Fights[] = _("LUCHAR");
const u8 gEasyChatWord_Power[] = _("PODER");
const u8 gEasyChatWord_Challenge[] = _("DESAFÍO");
const u8 gEasyChatWord_Strong[] = _("FUERZA");
const u8 gEasyChatWord_TooStrong[] = _("ENFRENTARÁS");
const u8 gEasyChatWord_GoEasy[] = _("TRANSFORMARÉ");
const u8 gEasyChatWord_Foe[] = _("¡LUCHA!");
const u8 gEasyChatWord_Genius[] = _("GENIO");
const u8 gEasyChatWord_Legend[] = _("LEYENDA");
const u8 gEasyChatWord_Escape[] = _("ESCAPARÁS");
const u8 gEasyChatWord_Aim[] = _("ODIO");
const u8 gEasyChatWord_Battle[] = _("COMBATE");
const u8 gEasyChatWord_Fight[] = _("LUCHO");
const u8 gEasyChatWord_Resuscitate[] = _("LUCHEMOS");
const u8 gEasyChatWord_Points[] = _("ENTRENADO");
const u8 gEasyChatWord_Serious[] = _("PELEO");
const u8 gEasyChatWord_GiveUp[] = _("DERROTARÁS");
const u8 gEasyChatWord_Loss[] = _("PERDER");
const u8 gEasyChatWord_IfILose[] = _("PALIZA");
const u8 gEasyChatWord_Lost[] = _("PERDERÉ");
const u8 gEasyChatWord_Lose[] = _("PERDIDO");
const u8 gEasyChatWord_Guard[] = _("LUCHA");
const u8 gEasyChatWord_Partner[] = _("AZOTES");
const u8 gEasyChatWord_Reject[] = _("RECHAZARÉ");
const u8 gEasyChatWord_Accept[] = _("¡ACEPTO!");
const u8 gEasyChatWord_Invincible[] = _("INVENCIBLE");
const u8 gEasyChatWord_Received[] = _("DESTINO");
const u8 gEasyChatWord_Easy[] = _("ESTROPEARME");
const u8 gEasyChatWord_Weak[] = _("APRENDE");
const u8 gEasyChatWord_TooWeak[] = _("DEBILITADO");
const u8 gEasyChatWord_Pushover[] = _("MACHACAR");
const u8 gEasyChatWord_Leader[] = _("LÍDER");
const u8 gEasyChatWord_Rule[] = _("REGLAS");
const u8 gEasyChatWord_Move[] = _("¡MUÉVETE!");

const struct EasyChatWordInfo gEasyChatGroup_Battle[] = {
    [EC_INDEX(EC_WORD_MATCH_UP)] =
    {
        .text = gEasyChatWord_MatchUp,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GO)] =
    {
        .text = gEasyChatWord_Go,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NO_1)] =
    {
        .text = gEasyChatWord_No1,
        .alphabeticalOrder = 62,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DECIDE)] =
    {
        .text = gEasyChatWord_Decide,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LET_ME_WIN)] =
    {
        .text = gEasyChatWord_LetMeWin,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WINS)] =
    {
        .text = gEasyChatWord_Wins,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WIN)] =
    {
        .text = gEasyChatWord_Win,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WON)] =
    {
        .text = gEasyChatWord_Won,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IF_I_WIN)] =
    {
        .text = gEasyChatWord_IfIWin,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHEN_I_WIN)] =
    {
        .text = gEasyChatWord_WhenIWin,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAN_T_WIN)] =
    {
        .text = gEasyChatWord_CantWin,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAN_WIN)] =
    {
        .text = gEasyChatWord_CanWin,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NO_MATCH)] =
    {
        .text = gEasyChatWord_NoMatch,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SPIRIT)] =
    {
        .text = gEasyChatWord_Spirit,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DECIDED)] =
    {
        .text = gEasyChatWord_Decided,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRUMP_CARD)] =
    {
        .text = gEasyChatWord_TrumpCard,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TAKE_THAT)] =
    {
        .text = gEasyChatWord_TakeThat,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COME_ON)] =
    {
        .text = gEasyChatWord_ComeOn,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ATTACK)] =
    {
        .text = gEasyChatWord_Attack,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SURRENDER)] =
    {
        .text = gEasyChatWord_Surrender,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GUTSY)] =
    {
        .text = gEasyChatWord_Gutsy,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TALENT)] =
    {
        .text = gEasyChatWord_Talent,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STRATEGY)] =
    {
        .text = gEasyChatWord_Strategy,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMITE)] =
    {
        .text = gEasyChatWord_Smite,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MATCH)] =
    {
        .text = gEasyChatWord_Match,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VICTORY)] =
    {
        .text = gEasyChatWord_Victory,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OFFENSIVE)] =
    {
        .text = gEasyChatWord_Offensive,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SENSE)] =
    {
        .text = gEasyChatWord_Sense,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VERSUS)] =
    {
        .text = gEasyChatWord_Versus,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FIGHTS)] =
    {
        .text = gEasyChatWord_Fights,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POWER)] =
    {
        .text = gEasyChatWord_Power,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHALLENGE)] =
    {
        .text = gEasyChatWord_Challenge,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STRONG)] =
    {
        .text = gEasyChatWord_Strong,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOO_STRONG)] =
    {
        .text = gEasyChatWord_TooStrong,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GO_EASY)] =
    {
        .text = gEasyChatWord_GoEasy,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FOE)] =
    {
        .text = gEasyChatWord_Foe,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GENIUS)] =
    {
        .text = gEasyChatWord_Genius,
        .alphabeticalOrder = 60,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEGEND)] =
    {
        .text = gEasyChatWord_Legend,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ESCAPE)] =
    {
        .text = gEasyChatWord_Escape,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AIM)] =
    {
        .text = gEasyChatWord_Aim,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATTLE)] =
    {
        .text = gEasyChatWord_Battle,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FIGHT)] =
    {
        .text = gEasyChatWord_Fight,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RESUSCITATE)] =
    {
        .text = gEasyChatWord_Resuscitate,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POINTS)] =
    {
        .text = gEasyChatWord_Points,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SERIOUS)] =
    {
        .text = gEasyChatWord_Serious,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIVE_UP)] =
    {
        .text = gEasyChatWord_GiveUp,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOSS)] =
    {
        .text = gEasyChatWord_Loss,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IF_I_LOSE)] =
    {
        .text = gEasyChatWord_IfILose,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOST)] =
    {
        .text = gEasyChatWord_Lost,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOSE)] =
    {
        .text = gEasyChatWord_Lose,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GUARD)] =
    {
        .text = gEasyChatWord_Guard,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARTNER)] =
    {
        .text = gEasyChatWord_Partner,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_REJECT)] =
    {
        .text = gEasyChatWord_Reject,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ACCEPT)] =
    {
        .text = gEasyChatWord_Accept,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INVINCIBLE)] =
    {
        .text = gEasyChatWord_Invincible,
        .alphabeticalOrder = 61,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RECEIVED)] =
    {
        .text = gEasyChatWord_Received,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EASY)] =
    {
        .text = gEasyChatWord_Easy,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEAK)] =
    {
        .text = gEasyChatWord_Weak,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOO_WEAK)] =
    {
        .text = gEasyChatWord_TooWeak,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PUSHOVER)] =
    {
        .text = gEasyChatWord_Pushover,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEADER)] =
    {
        .text = gEasyChatWord_Leader,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RULE)] =
    {
        .text = gEasyChatWord_Rule,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MOVE)] =
    {
        .text = gEasyChatWord_Move,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
};
