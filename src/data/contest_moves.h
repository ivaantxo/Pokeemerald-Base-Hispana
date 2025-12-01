const struct ContestEffect gContestEffects[] =
{
    [CONTEST_EFFECT_HIGHLY_APPEALING] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Quite the appealing move."),
        #else
        .description = COMPOUND_STRING("A highly appealing move."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 40,
        .jam = 0,
        .function = ContestEffect_HighlyAppealing,
    },
    [CONTEST_EFFECT_USER_MORE_EASILY_STARTLED] =
    {
        .description = COMPOUND_STRING("After this move, the user is\nmore easily startled."),
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 60,
        .jam = 0,
        .function = ContestEffect_UserMoreEasilyStartled,
    },
    [CONTEST_EFFECT_GREAT_APPEAL_BUT_NO_MORE_MOVES] =
    {
        .description = COMPOUND_STRING("Makes a great appeal, but\nallows no more to the end."),
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 80,
        .jam = 0,
        .function = ContestEffect_GreatAppealButNoMoreMoves,
    },
    [CONTEST_EFFECT_REPETITION_NOT_BORING] =
    {
        .description = COMPOUND_STRING("Can be repeatedly used\nwithout boring the JUDGE."),
        .effectType = CONTEST_EFFECT_TYPE_APPEAL,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_RepetitionNotBoring,
    },
    [CONTEST_EFFECT_AVOID_STARTLE_ONCE] =
    {
        .description = COMPOUND_STRING("Can avoid being startled\nby others once."),
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 20,
        .jam = 0,
        .function = ContestEffect_AvoidStartleOnce,
    },
    [CONTEST_EFFECT_AVOID_STARTLE] =
    {
        .description = COMPOUND_STRING("Can avoid being startled\nby others."),
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_AvoidStartle,
    },
    [CONTEST_EFFECT_AVOID_STARTLE_SLIGHTLY] =
    {
        .description = COMPOUND_STRING("Can avoid being startled\nby others a little."),
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_AvoidStartleSlightly,
    },
    [CONTEST_EFFECT_USER_LESS_EASILY_STARTLED] =
    {
        .description = COMPOUND_STRING("After this move, the user is\nless likely to be startled."),
        .effectType = CONTEST_EFFECT_TYPE_AVOID_STARTLE,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_UserLessEasilyStartled,
    },
    [CONTEST_EFFECT_STARTLE_FRONT_MON] =
    {
        .description = COMPOUND_STRING("Slightly startles the\nPOKéMON in front."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 30,
        .jam = 20,
        .function = ContestEffect_StartleFrontMon,
    },
    [CONTEST_EFFECT_SLIGHTLY_STARTLE_PREV_MONS] =
    {
        .description = COMPOUND_STRING("Slightly startles those\nthat have made appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 30,
        .jam = 10,
        .function = ContestEffect_StartlePrevMons,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MON] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Startles the last Pokémon\nto act before the user."),
        #else
        .description = COMPOUND_STRING("Startles the POKéMON that\nappealed before the user."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 20,
        .jam = 30,
        .function = ContestEffect_StartleFrontMon,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MONS] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Startles all of the Pokémon\nto act before the user."),
        #else
        .description = COMPOUND_STRING("Startles all POKéMON that\nhave done their appeals."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 20,
        .function = ContestEffect_StartlePrevMons,
    },
    [CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON] =
    {
        .description = COMPOUND_STRING("Badly startles the\nPOKéMON in front."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 10,
        .jam = 40,
        .function = ContestEffect_StartleFrontMon,
    },
    [CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS] =
    {
        .description = COMPOUND_STRING("Badly startles those that\nhave made appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 10,
        .jam = 30,
        .function = ContestEffect_StartlePrevMons,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MON_2] =
    {
        .description = COMPOUND_STRING("Startles the POKéMON that\nappealed before the user."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MON,
        .appeal = 30,
        .jam = 20,
        .function = ContestEffect_StartlePrevMon2,
    },
    [CONTEST_EFFECT_STARTLE_PREV_MONS_2] =
    {
        .description = COMPOUND_STRING("Startles all POKéMON that\nhave done their appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 30,
        .jam = 10,
        .function = ContestEffect_StartlePrevMons2,
    },
    [CONTEST_EFFECT_SHIFT_JUDGE_ATTENTION] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Makes audience expect\nlittle of other contestants."),
        #else
        .description = COMPOUND_STRING("Shifts the JUDGE's\nattention from others."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_ShiftJudgeAttention,
    },
    [CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION] =
    {
        .description = COMPOUND_STRING("Startles the POKéMON that\nhas the JUDGE's attention."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_StartleMonWithJudgesAttention,
    },
    [CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN] =
    {
        .description = COMPOUND_STRING("Jams the others, and misses\none turn of appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 40,
        .jam = 40,
        .function = ContestEffect_JamsOthersButMissOneTurn,
    },
    [CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL] =
    {
        .description = COMPOUND_STRING("Startles POKéMON that\nmade a same-type appeal."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_StartleMonsSameTypeAppeal,
    },
    [CONTEST_EFFECT_STARTLE_MONS_COOL_APPEAL] =
    {
        .description = COMPOUND_STRING("Badly startles POKéMON\nthat made COOL appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_StartleMonsCoolAppeal,
    },
    [CONTEST_EFFECT_STARTLE_MONS_BEAUTY_APPEAL] =
    {
        .description = COMPOUND_STRING("Badly startles POKéMON\nthat made BEAUTY appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_StartleMonsBeautyAppeal,
    },
    [CONTEST_EFFECT_STARTLE_MONS_CUTE_APPEAL] =
    {
        .description = COMPOUND_STRING("Badly startles POKéMON\nthat made CUTE appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_StartleMonsCuteAppeal,
    },
    [CONTEST_EFFECT_STARTLE_MONS_SMART_APPEAL] =
    {
        .description = COMPOUND_STRING("Badly startles POKéMON\nthat made SMART appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_StartleMonsSmartAppeal,
    },
    [CONTEST_EFFECT_STARTLE_MONS_TOUGH_APPEAL] =
    {
        .description = COMPOUND_STRING("Badly startles POKéMON\nthat made TOUGH appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_StartleMonsToughAppeal,
    },
    [CONTEST_EFFECT_MAKE_FOLLOWING_MON_NERVOUS] =
    {
        .description = COMPOUND_STRING("Makes one POKéMON after\nthe user nervous."),
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 20,
        .jam = 0,
        .function = ContestEffect_MakeFollowingMonNervous,
    },
    [CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Makes the remaining\nPokémon nervous."),
        #else
        .description = COMPOUND_STRING("Makes all POKéMON after\nthe user nervous."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 20,
        .jam = 0,
        .function = ContestEffect_MakeFollowingMonsNervous,
    },
    [CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS] =
    {
        .description = COMPOUND_STRING("Worsens the condition of\nthose that made appeals."),
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_WorsenConditionOfPrevMons,
    },
    [CONTEST_EFFECT_BADLY_STARTLES_MONS_IN_GOOD_CONDITION] =
    {
        .description = COMPOUND_STRING("Badly startles POKéMON in\ngood condition."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 30,
        .jam = 10,
        .function = ContestEffect_BadlyStartlesMonsInGoodCondition,
    },
    [CONTEST_EFFECT_BETTER_IF_FIRST] =
    {
        .description = COMPOUND_STRING("The appeal works great if\nperformed first."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
        .function = ContestEffect_BetterIfFirst,
    },
    [CONTEST_EFFECT_BETTER_IF_LAST] =
    {
        .description = COMPOUND_STRING("The appeal works great if\nperformed last."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
        .function = ContestEffect_BetterIfLast,
    },
    [CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONES] =
    {
        .description = COMPOUND_STRING("Makes the appeal as good\nas those before it."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_AppealAsGoodAsPrevOnes,
    },
    [CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONE] =
    {
        .description = COMPOUND_STRING("Makes the appeal as good\nas the one before it."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_AppealAsGoodAsPrevOne,
    },
    [CONTEST_EFFECT_BETTER_WHEN_LATER] =
    {
        .description = COMPOUND_STRING("The appeal works better\nthe later it is performed."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_BetterWhenLater,
    },
    [CONTEST_EFFECT_QUALITY_DEPENDS_ON_TIMING] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Effectiveness varies\ndepending on when it is used."),
        #else
        .description = COMPOUND_STRING("The appeal's quality varies\ndepending on its timing."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_QualityDependsOnTiming,
    },
    [CONTEST_EFFECT_BETTER_IF_SAME_TYPE] =
    {
        .description = COMPOUND_STRING("Works well if it's the same\ntype as the one before."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
        .function = ContestEffect_BetterIfSameType,
    },
    [CONTEST_EFFECT_BETTER_IF_DIFF_TYPE] =
    {
        .description = COMPOUND_STRING("Works well if different in\ntype than the one before."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 20,
        .jam = 0,
        .function = ContestEffect_BetterIfDiffType,
    },
    [CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Affected by how well the\nprevious Pokémon's move went."),
        #else
        .description = COMPOUND_STRING("Affected by how well the\nappeal in front goes."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_AffectedByPrevAppeal,
    },
    [CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS] =
    {
        .description = COMPOUND_STRING("Ups the user's condition.\nHelps prevent nervousness."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_ImproveConditionPreventNervousness,
    },
    [CONTEST_EFFECT_BETTER_WITH_GOOD_CONDITION] =
    {
        .description = COMPOUND_STRING("The appeal works well if the\nuser's condition is good."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_BetterWithGoodCondition,
    },
    [CONTEST_EFFECT_NEXT_APPEAL_EARLIER] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Causes the user to move\nearlier on the next turn."),
        #else
        .description = COMPOUND_STRING("The next appeal can be\nmade earlier next turn."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_NextAppealEarlier,
    },
    [CONTEST_EFFECT_NEXT_APPEAL_LATER] =
    {
        #if C_UPDATED_MOVE_EFFECTS >= GEN_6
        .description = COMPOUND_STRING("Causes the user to move\nlater on the next turn."),
        #else
        .description = COMPOUND_STRING("The next appeal can be\nmade later next turn."),
        #endif
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_NextAppealLater,
    },
    [CONTEST_EFFECT_MAKE_SCRAMBLING_TURN_ORDER_EASIER] =
    {
        .description = COMPOUND_STRING("Makes the next turn's order\nmore easily scrambled."),
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_MakeScramblingTurnOrderEasier,
    },
    [CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER] =
    {
        .description = COMPOUND_STRING("Scrambles the order of\nappeals on the next turn."),
        .effectType = CONTEST_EFFECT_TYPE_TURN_ORDER,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_ScrambleNextTurnOrder,
    },
    [CONTEST_EFFECT_EXCITE_AUDIENCE_IN_ANY_CONTEST] =
    {
        .description = COMPOUND_STRING("An appeal that excites the\naudience in any CONTEST."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = C_UPDATED_MOVE_EFFECTS >= GEN_6 ? 20 : 10,
        .jam = 0,
        .function = ContestEffect_ExciteAudienceInAnyContest,
    },
    [CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS] =
    {
        .description = COMPOUND_STRING("Badly startles all POKéMON\nthat made good appeals."),
        .effectType = CONTEST_EFFECT_TYPE_STARTLE_MONS,
        .appeal = 20,
        .jam = 10,
        .function = ContestEffect_BadlyStartleMonsWithGoodAppeals,
    },
    [CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED] =
    {
        .description = COMPOUND_STRING("The appeal works best the\nmore the crowd is excited."),
        .effectType = CONTEST_EFFECT_TYPE_SPECIAL_APPEAL,
        .appeal = 10,
        .jam = 0,
        .function = ContestEffect_BetterWhenAudienceExcited,
    },
    [CONTEST_EFFECT_DONT_EXCITE_AUDIENCE] =
    {
        .description = COMPOUND_STRING("Temporarily stops the\ncrowd from growing excited."),
        .effectType = CONTEST_EFFECT_TYPE_WORSEN,
        .appeal = 30,
        .jam = 0,
        .function = ContestEffect_DontExciteAudience,
    },
};

/*
    [CONTEST_EFFECT_HIGHLY_APPEALING]                      = COMPOUND_STRING("Resulta muy llamativo."),
    [CONTEST_EFFECT_USER_MORE_EASILY_STARTLED]             = COMPOUND_STRING("Tras usarlo, será fácil\nque te asusten."),
    [CONTEST_EFFECT_GREAT_APPEAL_BUT_NO_MORE_MOVES]        = COMPOUND_STRING("Gusta mucho, pero impide\nseguir participando."),
    [CONTEST_EFFECT_REPETITION_NOT_BORING]                 = COMPOUND_STRING("Por más que se use, el JUEZ\nno se aburrirá nunca."),
    [CONTEST_EFFECT_AVOID_STARTLE_ONCE]                    = COMPOUND_STRING("Puede evitar que\nte asusten una vez."),
    [CONTEST_EFFECT_AVOID_STARTLE]                         = COMPOUND_STRING("Puede evitar\nque te asusten."),
    [CONTEST_EFFECT_AVOID_STARTLE_SLIGHTLY]                = COMPOUND_STRING("Reduce la probabilidad\nde que te asusten."),
    [CONTEST_EFFECT_USER_LESS_EASILY_STARTLED]             = COMPOUND_STRING("Tras usarlo, será difícil\nque te asusten."),
    [CONTEST_EFFECT_STARTLE_FRONT_MON]                     = COMPOUND_STRING("Asusta un poco al POKéMON\nque tengas enfrente."),
    [CONTEST_EFFECT_SLIGHTLY_STARTLE_PREV_MONS]            = COMPOUND_STRING("Asusta un poco a los que\nya se han exhibido."),
    [CONTEST_EFFECT_STARTLE_PREV_MON]                      = COMPOUND_STRING("Asusta al POKéMON que se\nha exhibido antes que tú."),
    [CONTEST_EFFECT_STARTLE_PREV_MONS]                     = COMPOUND_STRING("Asusta a los POKéMON que\nya se han exhibido."),
    [CONTEST_EFFECT_BADLY_STARTLE_FRONT_MON]               = COMPOUND_STRING("Aterra al último POKéMON\nque se exhibió."),
    [CONTEST_EFFECT_BADLY_STARTLE_PREV_MONS]               = COMPOUND_STRING("Aterra a los que\nya se han exhibido."),
    [CONTEST_EFFECT_STARTLE_PREV_MON_2]                    = COMPOUND_STRING("Asusta al POKéMON que se\nha exhibido antes que tú."),
    [CONTEST_EFFECT_STARTLE_PREV_MONS_2]                   = COMPOUND_STRING("Asusta a los POKéMON que\nse exhibieron antes que tú."),
    [CONTEST_EFFECT_SHIFT_JUDGE_ATTENTION]                 = COMPOUND_STRING("Hace que el JUEZ deje de\nprestar atención al resto."),
    [CONTEST_EFFECT_STARTLE_MON_WITH_JUDGES_ATTENTION]     = COMPOUND_STRING("Asusta más al POKéMON que\ncapta la atención del JUEZ."),
    [CONTEST_EFFECT_JAMS_OTHERS_BUT_MISS_ONE_TURN]         = COMPOUND_STRING("Inhibe a los otros,\npero pierdes un turno."),
    [CONTEST_EFFECT_STARTLE_MONS_SAME_TYPE_APPEAL]         = COMPOUND_STRING("Asusta más a los que usaron\nrecursos del mismo tipo."),
    [CONTEST_EFFECT_STARTLE_MONS_COOL_APPEAL]              = COMPOUND_STRING("Aterra a los que han hecho\nalarde de CARISMA."),
    [CONTEST_EFFECT_STARTLE_MONS_BEAUTY_APPEAL]            = COMPOUND_STRING("Aterra a los que han hecho\nalarde de BELLEZA."),
    [CONTEST_EFFECT_STARTLE_MONS_CUTE_APPEAL]              = COMPOUND_STRING("Aterra a los que han hecho\nalarde de DULZURA."),
    [CONTEST_EFFECT_STARTLE_MONS_SMART_APPEAL]             = COMPOUND_STRING("Aterra a los que han hecho\n\nalarde de INGENIO."),
    [CONTEST_EFFECT_STARTLE_MONS_TOUGH_APPEAL]             = COMPOUND_STRING("Aterra a los que han hecho\n\nalarde de DUREZA."),
    [CONTEST_EFFECT_MAKE_FOLLOWING_MON_NERVOUS]            = COMPOUND_STRING("Pone nervioso al POKéMON\nque va detrás de ti."),
    [CONTEST_EFFECT_MAKE_FOLLOWING_MONS_NERVOUS]           = COMPOUND_STRING("Inquieta a los POKéMON\nque van detrás de ti."),
    [CONTEST_EFFECT_WORSEN_CONDITION_OF_PREV_MONS]         = COMPOUND_STRING("Baja la forma de los que\nse han exhibido."),
    [CONTEST_EFFECT_BADLY_STARTLES_MONS_IN_GOOD_CONDITION] = COMPOUND_STRING("Aterra a los POKéMON que\nestán en buena forma."),
    [CONTEST_EFFECT_BETTER_IF_FIRST]                       = COMPOUND_STRING("La exhibición es un éxito\nsi se es el primero."),
    [CONTEST_EFFECT_BETTER_IF_LAST]                        = COMPOUND_STRING("La exhibición es un éxito\nsi se es el último."),
    [CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONES]           = COMPOUND_STRING("La exhibición es tan buena\ncomo las anteriores."),
    [CONTEST_EFFECT_APPEAL_AS_GOOD_AS_PREV_ONE]            = COMPOUND_STRING("La exhibición es tan buena\ncomo la anterior."),
    [CONTEST_EFFECT_BETTER_WHEN_LATER]                     = COMPOUND_STRING("Causa mayor impacto cuanto\nmás tarde se usa."),
    [CONTEST_EFFECT_QUALITY_DEPENDS_ON_TIMING]             = COMPOUND_STRING("El impacto que tenga varía\nsegún cuándo se use."),
    [CONTEST_EFFECT_BETTER_IF_SAME_TYPE]                   = COMPOUND_STRING("Funciona bien si es del\n\nmismo tipo que el anterior."),
    [CONTEST_EFFECT_BETTER_IF_DIFF_TYPE]                   = COMPOUND_STRING("Funciona bien si es de tipo\ndistinto que el anterior."),
    [CONTEST_EFFECT_AFFECTED_BY_PREV_APPEAL]               = COMPOUND_STRING("El éxito dependerá de la\nactuación precedente."),
    [CONTEST_EFFECT_IMPROVE_CONDITION_PREVENT_NERVOUSNESS] = COMPOUND_STRING("Mejora tu forma y te ayuda\na mantener la calma."),
    [CONTEST_EFFECT_BETTER_WITH_GOOD_CONDITION]            = COMPOUND_STRING("Resulta muy lucido\nsi estás en buena forma."),
    [CONTEST_EFFECT_NEXT_APPEAL_EARLIER]                   = COMPOUND_STRING("En la siguiente ronda, deja\nque te exhibas antes."),
    [CONTEST_EFFECT_NEXT_APPEAL_LATER]                     = COMPOUND_STRING("En la siguiente ronda, deja\nque te exhibas más tarde."),
    [CONTEST_EFFECT_MAKE_SCRAMBLING_TURN_ORDER_EASIER]     = COMPOUND_STRING("Puede alterar los turnos\nen la siguiente ronda."),
    [CONTEST_EFFECT_SCRAMBLE_NEXT_TURN_ORDER]              = COMPOUND_STRING("Altera los turnos en la\nsiguiente ronda."),
    [CONTEST_EFFECT_EXCITE_AUDIENCE_IN_ANY_CONTEST]        = COMPOUND_STRING("Entusiasma al público\nen cualquier CONCURSO."),
    [CONTEST_EFFECT_BADLY_STARTLE_MONS_WITH_GOOD_APPEALS]  = COMPOUND_STRING("Aterra a todos los POKéMON\nque se han exhibido bien."),
    [CONTEST_EFFECT_BETTER_WHEN_AUDIENCE_EXCITED]          = COMPOUND_STRING("El lucimiento es mayor si\nel público está entregado."),
    [CONTEST_EFFECT_DONT_EXCITE_AUDIENCE]                  = COMPOUND_STRING("Templa momentáneamente\nel fervor del público."),
};

const u8 *const gContestMoveTypeTextPointers[] =
{
    [CONTEST_CATEGORY_COOL]   = COMPOUND_STRING("CARISMA"),
    [CONTEST_CATEGORY_BEAUTY] = COMPOUND_STRING("BELLEZA"),
    [CONTEST_CATEGORY_CUTE]   = COMPOUND_STRING("DULZURA"),
    [CONTEST_CATEGORY_SMART]  = COMPOUND_STRING("INTELIGENCIA"),
    [CONTEST_CATEGORY_TOUGH]  = COMPOUND_STRING("DUREZA"),
};

static const u8 *const sContestConditions[] =
{
    [CONTEST_CATEGORY_COOL]   = COMPOUND_STRING("carisma"),
    [CONTEST_CATEGORY_BEAUTY] = COMPOUND_STRING("belleza"),
    [CONTEST_CATEGORY_CUTE]   = COMPOUND_STRING("dulzura"),
    [CONTEST_CATEGORY_SMART]  = COMPOUND_STRING("inteligencia"),
    [CONTEST_CATEGORY_TOUGH]  = COMPOUND_STRING("dureza"),
};

static const u8 *const sInvalidContestMoveNames[] =
{
    [CONTEST_CATEGORY_COOL]    = COMPOUND_STRING("Mov CARISMA"),
    [CONTEST_CATEGORY_BEAUTY]  = COMPOUND_STRING("Mov BELLEZA"),
    [CONTEST_CATEGORY_CUTE]    = COMPOUND_STRING("Mov DULZURA"),
    [CONTEST_CATEGORY_SMART]   = COMPOUND_STRING("Mov INTELIGENCIA"),
    [CONTEST_CATEGORY_TOUGH]   = COMPOUND_STRING("Mov DUREZA"),
    [CONTEST_CATEGORIES_COUNT] = COMPOUND_STRING("???"),
};
*/
