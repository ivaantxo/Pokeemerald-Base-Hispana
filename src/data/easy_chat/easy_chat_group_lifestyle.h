const u8 gEasyChatWord_Chores[] = _("RUTINA");
const u8 gEasyChatWord_Home[] = _("HOGAR");
const u8 gEasyChatWord_Money[] = _("DINERO");
const u8 gEasyChatWord_Allowance[] = _("PAGA SEMANAL");
const u8 gEasyChatWord_Bath[] = _("BAÑO");
const u8 gEasyChatWord_Conversation[] = _("CHARLAR");
const u8 gEasyChatWord_School[] = _("COLEGIO");
const u8 gEasyChatWord_Commemorate[] = _("CUMPLEAÑOS");
const u8 gEasyChatWord_Habit[] = _("HÁBITOS");
const u8 gEasyChatWord_Group[] = _("AMIGOS");
const u8 gEasyChatWord_Word[] = _("PRENSA");
const u8 gEasyChatWord_Store[] = _("MERCADO");
const u8 gEasyChatWord_Service[] = _("TRÁFICO");
const u8 gEasyChatWord_Work[] = _("TRABAJO");
const u8 gEasyChatWord_System[] = _("AUTOBÚS");
const u8 gEasyChatWord_Train[] = _("METRO");
const u8 gEasyChatWord_Class[] = _("CLASES");
const u8 gEasyChatWord_Lessons[] = _("DEBERES");
const u8 gEasyChatWord_Information[] = _("DESAYUNAR");
const u8 gEasyChatWord_Living[] = _("MERENDAR");
const u8 gEasyChatWord_Teacher[] = _("PROFESOR");
const u8 gEasyChatWord_Tournament[] = _("CENAR");
const u8 gEasyChatWord_Letter[] = _("CORREO");
const u8 gEasyChatWord_Event[] = _("EVENTO");
const u8 gEasyChatWord_Digital[] = _("NOTAS");
const u8 gEasyChatWord_Test[] = _("EXÁMENES");
const u8 gEasyChatWord_DeptStore[] = _("TIENDAS");
const u8 gEasyChatWord_Television[] = _("TELEVISIÓN");
const u8 gEasyChatWord_Phone[] = _("TELÉFONO");
const u8 gEasyChatWord_Item[] = _("RECREO");
const u8 gEasyChatWord_Name[] = _("DUCHARSE");
const u8 gEasyChatWord_News[] = _("PAN");
const u8 gEasyChatWord_Popular[] = _("CINE");
const u8 gEasyChatWord_Party[] = _("TEATRO");
const u8 gEasyChatWord_Study[] = _("ESTUDIOS");
const u8 gEasyChatWord_Machine[] = _("COCHES");
const u8 gEasyChatWord_Mail[] = _("PELUQUERÍA");
const u8 gEasyChatWord_Message[] = _("MENSAJES");
const u8 gEasyChatWord_Promise[] = _("PARQUE");
const u8 gEasyChatWord_Dream[] = _("AULA");
const u8 gEasyChatWord_Kindergarten[] = _("PISCINA");
const u8 gEasyChatWord_Life[] = _("PLAYA");
const u8 gEasyChatWord_Radio[] = _("RADIO");
const u8 gEasyChatWord_Rental[] = _("REÍR");
const u8 gEasyChatWord_World[] = _("LLORAR");

const struct EasyChatWordInfo gEasyChatGroup_Lifestyle[] = {
    [EC_INDEX(EC_WORD_CHORES)] =
    {
        .text = gEasyChatWord_Chores,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALLOWANCE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOME)] =
    {
        .text = gEasyChatWord_Home,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BATH),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MONEY)] =
    {
        .text = gEasyChatWord_Money,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CHORES),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALLOWANCE)] =
    {
        .text = gEasyChatWord_Allowance,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CLASS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATH)] =
    {
        .text = gEasyChatWord_Bath,
        .alphabeticalOrder = EC_INDEX(EC_WORD_COMMEMORATE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONVERSATION)] =
    {
        .text = gEasyChatWord_Conversation,
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONVERSATION),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SCHOOL)] =
    {
        .text = gEasyChatWord_School,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DEPT_STORE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COMMEMORATE)] =
    {
        .text = gEasyChatWord_Commemorate,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIGITAL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HABIT)] =
    {
        .text = gEasyChatWord_Habit,
        .alphabeticalOrder = EC_INDEX(EC_WORD_DREAM),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GROUP)] =
    {
        .text = gEasyChatWord_Group,
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVENT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORD)] =
    {
        .text = gEasyChatWord_Word,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GROUP),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STORE)] =
    {
        .text = gEasyChatWord_Store,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HABIT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SERVICE)] =
    {
        .text = gEasyChatWord_Service,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORK)] =
    {
        .text = gEasyChatWord_Work,
        .alphabeticalOrder = EC_INDEX(EC_WORD_INFORMATION),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SYSTEM)] =
    {
        .text = gEasyChatWord_System,
        .alphabeticalOrder = EC_INDEX(EC_WORD_ITEM),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRAIN)] =
    {
        .text = gEasyChatWord_Train,
        .alphabeticalOrder = EC_INDEX(EC_WORD_KINDERGARTEN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CLASS)] =
    {
        .text = gEasyChatWord_Class,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LESSONS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LESSONS)] =
    {
        .text = gEasyChatWord_Lessons,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LETTER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INFORMATION)] =
    {
        .text = gEasyChatWord_Information,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIFE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIVING)] =
    {
        .text = gEasyChatWord_Living,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIVING),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEACHER)] =
    {
        .text = gEasyChatWord_Teacher,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MACHINE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOURNAMENT)] =
    {
        .text = gEasyChatWord_Tournament,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MAIL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LETTER)] =
    {
        .text = gEasyChatWord_Letter,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MESSAGE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVENT)] =
    {
        .text = gEasyChatWord_Event,
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONEY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIGITAL)] =
    {
        .text = gEasyChatWord_Digital,
        .alphabeticalOrder = EC_INDEX(EC_WORD_NAME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEST)] =
    {
        .text = gEasyChatWord_Test,
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEWS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DEPT_STORE)] =
    {
        .text = gEasyChatWord_DeptStore,
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARTY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TELEVISION)] =
    {
        .text = gEasyChatWord_Television,
        .alphabeticalOrder = EC_INDEX(EC_WORD_PHONE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PHONE)] =
    {
        .text = gEasyChatWord_Phone,
        .alphabeticalOrder = EC_INDEX(EC_WORD_POPULAR),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ITEM)] =
    {
        .text = gEasyChatWord_Item,
        .alphabeticalOrder = EC_INDEX(EC_WORD_PROMISE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NAME)] =
    {
        .text = gEasyChatWord_Name,
        .alphabeticalOrder = EC_INDEX(EC_WORD_RADIO),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEWS)] =
    {
        .text = gEasyChatWord_News,
        .alphabeticalOrder = EC_INDEX(EC_WORD_RENTAL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POPULAR)] =
    {
        .text = gEasyChatWord_Popular,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SCHOOL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARTY)] =
    {
        .text = gEasyChatWord_Party,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SERVICE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STUDY)] =
    {
        .text = gEasyChatWord_Study,
        .alphabeticalOrder = EC_INDEX(EC_WORD_STORE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MACHINE)] =
    {
        .text = gEasyChatWord_Machine,
        .alphabeticalOrder = EC_INDEX(EC_WORD_STUDY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAIL)] =
    {
        .text = gEasyChatWord_Mail,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SYSTEM),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MESSAGE)] =
    {
        .text = gEasyChatWord_Message,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEACHER),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PROMISE)] =
    {
        .text = gEasyChatWord_Promise,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TELEVISION),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DREAM)] =
    {
        .text = gEasyChatWord_Dream,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEST),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KINDERGARTEN)] =
    {
        .text = gEasyChatWord_Kindergarten,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOURNAMENT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIFE)] =
    {
        .text = gEasyChatWord_Life,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRAIN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RADIO)] =
    {
        .text = gEasyChatWord_Radio,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORD),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RENTAL)] =
    {
        .text = gEasyChatWord_Rental,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORK),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORLD)] =
    {
        .text = gEasyChatWord_World,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORLD),
        .enabled = TRUE,
    },
};
