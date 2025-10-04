#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "trainer_slide.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"

struct BattleWindowText
{
    u8 fillValue;
    u8 fontId;
    u8 x;
    u8 y;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 speed;
    u8 fgColor;
    u8 bgColor;
    u8 shadowColor;
};

#if TESTING
EWRAM_DATA u16 sBattlerAbilities[MAX_BATTLERS_COUNT] = {0};
#else
static EWRAM_DATA u16 sBattlerAbilities[MAX_BATTLERS_COUNT] = {0};
#endif
EWRAM_DATA struct BattleMsgData *gBattleMsgDataPtr = NULL;

// todo: make some of those names less vague: attacker/target vs pkmn, etc.

static const u8 sText_EmptyString4[] = _("");

const u8 gText_PkmnShroudedInMist[] = _("¡Neblina ha cubierto a {B_ATK_PREFIX2}!");
const u8 gText_PkmnGettingPumped[] = _("¡{B_ATK_NAME_WITH_PREFIX} se está preparando para luchar!");
const u8 gText_PkmnsXPreventsSwitching[] = _("¡{B_LAST_ABILITY} de {B_BUFF1} impide el cambio!\p");
const u8 gText_StatSharply[] = _(" mucho");
const u8 gText_StatRose[] = _("subió");
const u8 gText_StatFell[] = _("bajó");
const u8 gText_DefendersStatRose[] = _("{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} {B_BUFF2}");
static const u8 sText_GotAwaySafely[] = _("{PLAY_SE SE_FLEE}¡Escapaste sin problemas!\p");
static const u8 sText_PlayerDefeatedLinkTrainer[] = _("¡Derrotaste a {B_LINK_OPPONENT1_NAME}!");
static const u8 sText_TwoLinkTrainersDefeated[] = _("¡Derrotaste a {B_LINK_OPPONENT1_NAME} and {B_LINK_OPPONENT2_NAME}!");
static const u8 sText_PlayerLostAgainstLinkTrainer[] = _("¡Has perdido contra {B_LINK_OPPONENT1_NAME}!");
static const u8 sText_PlayerLostToTwo[] = _("¡Has perdido contra {B_LINK_OPPONENT1_NAME} y {B_LINK_OPPONENT2_NAME}!");
static const u8 sText_PlayerBattledToDrawLinkTrainer[] = _("¡{B_LINK_OPPONENT1_NAME} ha empatado contigo!");
static const u8 sText_PlayerBattledToDrawVsTwo[] = _("¡{B_LINK_OPPONENT1_NAME} y {B_LINK_OPPONENT2_NAME} han empatado contigo!");
static const u8 sText_WildFled[] = _("{PLAY_SE SE_FLEE}¡{B_LINK_OPPONENT1_NAME} ha huido!");
static const u8 sText_TwoWildFled[] = _("{PLAY_SE SE_FLEE}¡{B_LINK_OPPONENT1_NAME} y {B_LINK_OPPONENT2_NAME} han huido!");
static const u8 sText_PlayerDefeatedLinkTrainerTrainer1[] = _("¡Derrotaste a {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!\p");
static const u8 sText_OpponentMon1Appeared[] = _("¡{B_OPPONENT_MON1_NAME} apareció!\p");
static const u8 sText_WildPkmnAppeared[] = _("¡Un {B_OPPONENT_MON1_NAME} salvaje!\p");
static const u8 sText_LegendaryPkmnAppeared[] = _("¡Un {B_OPPONENT_MON1_NAME} salvaje!\p");
static const u8 sText_WildPkmnAppearedPause[] = _("¡Un {B_OPPONENT_MON1_NAME} salvaje!{PAUSE 127}");
static const u8 sText_TwoWildPkmnAppeared[] = _("¡Un {B_OPPONENT_MON1_NAME} y un {B_OPPONENT_MON2_NAME} salvajes!\p");
static const u8 sText_Trainer1WantsToBattle[] = _("¡A luchar contra {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!\p");
static const u8 sText_LinkTrainerWantsToBattle[] = _("¡{B_LINK_OPPONENT1_NAME} quiere luchar!");
static const u8 sText_TwoLinkTrainersWantToBattle[] = _("¡{B_LINK_OPPONENT1_NAME} y {B_LINK_OPPONENT2_NAME} quieren luchar!");
static const u8 sText_Trainer1SentOutPkmn[] = _("¡{B_OPPONENT_MON1_NAME} es el Pokémon enviado por {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
static const u8 sText_Trainer1SentOutTwoPkmn[] = _("¡{B_OPPONENT_MON1_NAME} y {B_OPPONENT_MON2_NAME} son la opción de {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
static const u8 sText_Trainer1SentOutPkmn2[] = _("¡{B_BUFF1} es el POKéMON enviado  por {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
static const u8 sText_LinkTrainerSentOutPkmn[] = _("¡{B_LINK_OPPONENT1_NAME} envió a{B_OPPONENT_MON1_NAME}!");
static const u8 sText_LinkTrainerSentOutTwoPkmn[] = _("¡{B_LINK_OPPONENT1_NAME} envió a {B_OPPONENT_MON1_NAME} y {B_OPPONENT_MON2_NAME}!");
static const u8 sText_TwoLinkTrainersSentOutPkmn[] = _("¡{B_LINK_OPPONENT1_NAME} envió a {B_LINK_OPPONENT_MON1_NAME}!\p{B_LINK_OPPONENT2_NAME} envió a {B_LINK_OPPONENT_MON2_NAME}!");
static const u8 sText_LinkTrainerSentOutPkmn2[] = _("¡{B_LINK_OPPONENT1_NAME} envió a {B_BUFF1}!");
static const u8 sText_LinkTrainerMultiSentOutPkmn[] = _("¡{B_LINK_SCR_TRAINER_NAME} envió a {B_BUFF1}!");
static const u8 sText_GoPkmn[] = _("¡Adelante, {B_PLAYER_MON1_NAME}!");
static const u8 sText_GoTwoPkmn[] = _("¡Adelante, {B_PLAYER_MON1_NAME} y {B_PLAYER_MON2_NAME}!");
static const u8 sText_GoPkmn2[] = _("¡Adelante, {B_BUFF1}!");
static const u8 sText_DoItPkmn[] = _("¡Vamos, {B_BUFF1}!");
static const u8 sText_GoForItPkmn[] = _("¡Tu puedes, {B_BUFF1}!");
static const u8 sText_YourFoesWeakGetEmPkmn[] = _("¡Tu enemigo está débil! ¡A por él, {B_BUFF1}!");
static const u8 sText_LinkPartnerSentOutPkmnGoPkmn[] = _("¡{B_LINK_PARTNER_NAME} envió a {B_LINK_PLAYER_MON2_NAME}!\p¡Adelante, {B_LINK_PLAYER_MON1_NAME}!");
static const u8 sText_PkmnThatsEnough[] = _("¡Ya vale, {B_BUFF1} ¡Ven aquí!");
static const u8 sText_PkmnComeBack[] = _("¡{B_BUFF1}, ven aquí!");
static const u8 sText_PkmnOkComeBack[] = _("¡Bien hecho, {B_BUFF1}! ¡Ven aquí!");
static const u8 sText_PkmnGoodComeBack[] = _("¡Muy bien, {B_BUFF1}! ¡Ven aquí!");
static const u8 sText_Trainer1WithdrewPkmn[] = _("¡Retirada de {B_BUFF1} por {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
static const u8 sText_LinkTrainer1WithdrewPkmn[] = _("¡{B_LINK_OPPONENT1_NAME} retiró a {B_BUFF1}!");
static const u8 sText_LinkTrainer2WithdrewPkmn[] = _("¡{B_LINK_SCR_TRAINER_NAME} retiró a {B_BUFF1}!");
static const u8 sText_WildPkmnPrefix[] = _(" salvaje");
static const u8 sText_FoePkmnPrefix[] = _(" enemigo");
static const u8 sText_EmptyString8[] = _("");
static const u8 sText_FoePkmnPrefix2[] = _("enemigo");
static const u8 sText_AllyPkmnPrefix[] = _("amigo");
static const u8 sText_FoePkmnPrefix3[] = _("enemigo");
static const u8 sText_AllyPkmnPrefix2[] = _("amigo");
static const u8 sText_FoePkmnPrefix4[] = _("enemigo");
static const u8 sText_AllyPkmnPrefix3[] = _("amigo");
static const u8 sText_AttackerUsedX[] = _("¡{B_ATK_NAME_WITH_PREFIX} usó {B_BUFF3}!");
static const u8 sText_ExclamationMark[] = _("!");
static const u8 sText_ExclamationMark2[] = _("!");
static const u8 sText_ExclamationMark3[] = _("!");
static const u8 sText_ExclamationMark4[] = _("!");
static const u8 sText_ExclamationMark5[] = _("!");
static const u8 sText_HP[] = _("PS");
static const u8 sText_Attack[] = _("Ataque");
static const u8 sText_Defense[] = _("Defensa");
static const u8 sText_Speed[] = _("Velocidad");
static const u8 sText_SpAttack[] = _("At. Esp.");
static const u8 sText_SpDefense[] = _("Def. Esp.");
static const u8 sText_Accuracy[] = _("Precisión");
static const u8 sText_Evasiveness[] = _("Evasión");

const u8 *const gStatNamesTable[NUM_BATTLE_STATS] =
{
    [STAT_HP]      = sText_HP,
    [STAT_ATK]     = sText_Attack,
    [STAT_DEF]     = sText_Defense,
    [STAT_SPEED]   = sText_Speed,
    [STAT_SPATK]   = sText_SpAttack,
    [STAT_SPDEF]   = sText_SpDefense,
    [STAT_ACC]     = sText_Accuracy,
    [STAT_EVASION] = sText_Evasiveness,
};
const u8 *const gPokeblockWasTooXStringTable[FLAVOR_COUNT] =
{
    [FLAVOR_SPICY]  = COMPOUND_STRING("demasiado picante!"),
    [FLAVOR_DRY]    = COMPOUND_STRING("demasiado seca!"),
    [FLAVOR_SWEET]  = COMPOUND_STRING("demasiado dulce!"),
    [FLAVOR_BITTER] = COMPOUND_STRING("demasiado amarga!"),
    [FLAVOR_SOUR]   = COMPOUND_STRING("demasiado ácida!"),
};

static const u8 sText_Someones[] = _("alguien");
static const u8 sText_Lanettes[] = _("Aredia");
static const u8 sText_EnigmaBerry[] = _("Baya Enigma");
static const u8 sText_BerrySuffix[] = _("Baya");
const u8 gText_EmptyString3[] = _("");

static const u8 sText_TwoInGameTrainersDefeated[] = _("You defeated {B_TRAINER1_NAME_WITH_CLASS} and {B_TRAINER2_NAME_WITH_CLASS}!\p");

// New battle strings.
const u8 gText_drastically[] = _(" muchísimo");
const u8 gText_severely[] = _(" muchísimo");    

const u8 *const gBattleStringsTable[STRINGID_COUNT] =
{
    [STRINGID_TRAINER1LOSETEXT]                     = COMPOUND_STRING("{B_TRAINER1_LOSE_TEXT}"),
    [STRINGID_PKMNGAINEDEXP]                        = COMPOUND_STRING("{B_BUFF1} ha ganado {B_BUFF3} puntos de experiencia{B_BUFF2}."),
    [STRINGID_PKMNGREWTOLV]                         = COMPOUND_STRING("¡{B_BUFF1} subió al nivel {B_BUFF2}!{WAIT_SE}"),
    [STRINGID_PKMNLEARNEDMOVE]                      = COMPOUND_STRING("¡{B_BUFF1} aprendió {B_BUFF2}!{WAIT_SE}\p"),
    [STRINGID_TRYTOLEARNMOVE1]                      = COMPOUND_STRING("{B_BUFF1} intenta aprender {B_BUFF2}.\p"),
    [STRINGID_TRYTOLEARNMOVE2]                      = COMPOUND_STRING("Pero {B_BUFF1} no puede aprender más de cuatro movimientos.\p"),
    [STRINGID_TRYTOLEARNMOVE3]                      = COMPOUND_STRING("¿Quieres sustituir uno de esos movimientos por {B_BUFF2}?"),
    [STRINGID_PKMNFORGOTMOVE]                       = COMPOUND_STRING("{B_BUFF1} olvidó {B_BUFF2}.\p"),
    [STRINGID_STOPLEARNINGMOVE]                     = COMPOUND_STRING("¿{PAUSE 32}Deja de aprender {B_BUFF2}?"),
    [STRINGID_DIDNOTLEARNMOVE]                      = COMPOUND_STRING("{B_BUFF1} no aprendió {B_BUFF2}.\p"),
    [STRINGID_PKMNLEARNEDMOVE2]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} aprendió {B_BUFF1}!"),
    [STRINGID_ATTACKMISSED]                         = COMPOUND_STRING("¡El ataque de {B_ATK_NAME_WITH_PREFIX} falló!"),
    [STRINGID_PKMNPROTECTEDITSELF]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se ha protegido!"),
    [STRINGID_STATSWONTINCREASE2]                   = COMPOUND_STRING("¡Las características de {B_ATK_NAME_WITH_PREFIX} no subirán más!"),
    [STRINGID_AVOIDEDDAMAGE]                        = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se protegió con {B_DEF_ABILITY}!"), //not in gen 5+, ability popup
    [STRINGID_ITDOESNTAFFECT]                       = COMPOUND_STRING("No afecta a {B_DEF_NAME_WITH_PREFIX}…"),
    [STRINGID_ATTACKERFAINTED]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se debilitó!\p"),
    [STRINGID_TARGETFAINTED]                        = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se debilitó!\p"),
    [STRINGID_PLAYERGOTMONEY]                       = COMPOUND_STRING("¡{B_PLAYER_NAME} ganó ¥{B_BUFF1}!\p"),
    [STRINGID_PLAYERWHITEOUT]                       = COMPOUND_STRING("¡A {B_PLAYER_NAME} no le quedan Pokémon!\p"),
    [STRINGID_PLAYERWHITEOUT2_WILD]                 = COMPOUND_STRING("Saliste corriendo y perdiste ¥{B_BUFF1}…"),
    [STRINGID_PLAYERWHITEOUT2_TRAINER]              = COMPOUND_STRING("Le diste ¥{B_BUFF1} al ganador…"),
    [STRINGID_PLAYERWHITEOUT3]                      = COMPOUND_STRING("¡Quedaste abrumado por la derrota!"),
    [STRINGID_PREVENTSESCAPE]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} impide escapar con {B_SCR_ABILITY}!\p"),
    [STRINGID_HITXTIMES]                            = COMPOUND_STRING("Nº de golpes: {B_BUFF1}."), //SV has dynamic plural here
    [STRINGID_PKMNFELLASLEEP]                       = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} se durmió!"),
    [STRINGID_PKMNMADESLEEP]                        = COMPOUND_STRING("¡{B_BUFF1} de {B_SCR_NAME_WITH_PREFIX} durmió a {B_EFF_NAME_WITH_PREFIX2}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNALREADYASLEEP]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} está dormido!"),
    [STRINGID_PKMNALREADYASLEEP2]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está dormido!"),
    [STRINGID_PKMNWASPOISONED]                      = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} fue envenenado!"),
    [STRINGID_PKMNPOISONEDBY]                       = COMPOUND_STRING("¡{B_BUFF1} de {B_SCR_NAME_WITH_PREFIX} envenenó a {B_EFF_NAME_WITH_PREFIX}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNHURTBYPOISON]                     = COMPOUND_STRING("¡El veneno resta salud a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNALREADYPOISONED]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} está envenenado."),
    [STRINGID_PKMNBADLYPOISONED]                    = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} fue gravemente envenenado!"),
    [STRINGID_PKMNENERGYDRAINED]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ha perdido energía!"),
    [STRINGID_PKMNWASBURNED]                        = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} se ha quemado!"),
    [STRINGID_PKMNBURNEDBY]                         = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} de {B_SCR_NAME_WITH_PREFIX} quemó a {B_EFF_NAME_WITH_PREFIX}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNHURTBYBURN]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se resiente de la quemadura!"),
    [STRINGID_PKMNWASFROZEN]                        = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} fue congelado!"),
    [STRINGID_PKMNFROZENBY]                         = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} de {B_SCR_NAME_WITH_PREFIX} congeló a {B_EFF_NAME_WITH_PREFIX} solid!"), //not in gen 5+, ability popup
    [STRINGID_PKMNISFROZEN]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está congelado!"),
    [STRINGID_PKMNWASDEFROSTED]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ya no está congelado!"),
    [STRINGID_PKMNWASDEFROSTED2]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ya no está congelado!"),
    [STRINGID_PKMNWASDEFROSTEDBY]                   = COMPOUND_STRING("¡{B_CURRENT_MOVE} descongeló a{B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNWASPARALYZED]                     = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} está paralizado! ¡Quizás no se mueva!"),
    [STRINGID_PKMNWASPARALYZEDBY]                   = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} de {B_SCR_NAME_WITH_PREFIX} paralizó a {B_EFF_NAME_WITH_PREFIX}! ¡Quizás no se mueva!"), //not in gen 5+, ability popup
    [STRINGID_PKMNISPARALYZED]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está paralizado! ¡No se puede mover!"),
    [STRINGID_PKMNISALREADYPARALYZED]               = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ya está paralizado!"),
    [STRINGID_PKMNHEALEDPARALYSIS]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ya no está paralizado!"),
    [STRINGID_PKMNDREAMEATEN]                       = COMPOUND_STRING("¡Se comió el sueño de {B_DEF_NAME_WITH_PREFIX}!"), //not in gen 5+, expansion doesn't use anymore
    [STRINGID_STATSWONTINCREASE]                    = COMPOUND_STRING("¡{B_BUFF1} de {B_ATK_NAME_WITH_PREFIX} no subirá más!"),
    [STRINGID_STATSWONTDECREASE]                    = COMPOUND_STRING("¡{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} no bajará más!"),
    [STRINGID_PKMNISCONFUSED]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está confuso!"),
    [STRINGID_PKMNHEALEDCONFUSION]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ya no está confuso!"),
    [STRINGID_PKMNWASCONFUSED]                      = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} se encuentra confuso!"),
    [STRINGID_PKMNALREADYCONFUSED]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ya está confuso!"),
    [STRINGID_PKMNFELLINLOVE]                       = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se ha enamorado!"),
    [STRINGID_PKMNINLOVE]                           = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha enamorado de {B_SCR_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNIMMOBILIZEDBYLOVE]                = COMPOUND_STRING("¡El amor impide que {B_ATK_NAME_WITH_PREFIX} ataque!"),
    [STRINGID_PKMNCHANGEDTYPE]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha cambiado al tipo {B_BUFF1}!"),
    [STRINGID_PKMNFLINCHED]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} retrocedió!"),
    [STRINGID_PKMNREGAINEDHEALTH]                   = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} recuperó salud!"),
    [STRINGID_PKMNHPFULL]                           = COMPOUND_STRING("¡Los PS de {B_DEF_NAME_WITH_PREFIX} están al máximo!"),
    [STRINGID_PKMNRAISEDSPDEF]                      = COMPOUND_STRING("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2} subió la Def. Esp.!"),
    [STRINGID_PKMNRAISEDDEF]                        = COMPOUND_STRING("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2} subió la Defensa!"),
    [STRINGID_PKMNCOVEREDBYVEIL]                    = COMPOUND_STRING("¡{B_ATK_PREFIX2} se protegió con un Velo!"),
    [STRINGID_PKMNUSEDSAFEGUARD]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} está protegido por Velo Sagrado!"),
    [STRINGID_PKMNSAFEGUARDEXPIRED]                 = COMPOUND_STRING("¡Velo Sagrado de {B_ATK_PREFIX3} dejó de funcionar!"),
    [STRINGID_PKMNWENTTOSLEEP]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se fue a dormir!"), //not in gen 5+
    [STRINGID_PKMNSLEPTHEALTHY]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} recuperó salud durmiendo!"),
    [STRINGID_PKMNWHIPPEDWHIRLWIND]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} provocó un remolino!"),
    [STRINGID_PKMNTOOKSUNLIGHT]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} absorbió luz solar!"),
    [STRINGID_PKMNLOWEREDHEAD]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} bajó la cabeza!"),
    [STRINGID_PKMNISGLOWING]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está rodeado de una luz brillante!"),
    [STRINGID_PKMNFLEWHIGH]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} voló muy alto!"),
    [STRINGID_PKMNDUGHOLE]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ocultó en un agujero!"),
    [STRINGID_PKMNSQUEEZEDBYBIND]                   = COMPOUND_STRING("¡Atadura de {B_ATK_NAME_WITH_PREFIX} oprime a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNTRAPPEDINVORTEX]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} fue atrapado en el torbellino!"),
    [STRINGID_PKMNWRAPPEDBY]                        = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} fue atrapado por Repetición de {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNCLAMPED]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} atenazó a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNHURTBY]                           = COMPOUND_STRING("¡{B_BUFF1} ha herido a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNFREEDFROM]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se liberó de {B_BUFF1}!"),
    [STRINGID_PKMNCRASHED]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} falló y se cayó!"),
    [STRINGID_PKMNSHROUDEDINMIST]                   = gText_PkmnShroudedInMist,
    [STRINGID_PKMNPROTECTEDBYMIST]                  = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se ha protegido con Neblina!"),
    [STRINGID_PKMNGETTINGPUMPED]                    = gText_PkmnGettingPumped,
    [STRINGID_PKMNHITWITHRECOIL]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} también se ha hecho daño!"),
    [STRINGID_PKMNPROTECTEDITSELF2]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se está protegiendo!"),
    [STRINGID_PKMNBUFFETEDBYSANDSTORM]              = COMPOUND_STRING("¡Tormenta Arena zarandea a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNPELTEDBYHAIL]                     = COMPOUND_STRING("¡Granizo golpea a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNSEEDED]                           = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} fue infectado!"),
    [STRINGID_PKMNEVADEDATTACK]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} esquivó el ataque!"),
    [STRINGID_PKMNSAPPEDBYLEECHSEED]                = COMPOUND_STRING("¡Drenadoras restó salud a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNFASTASLEEP]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} está dormido como un tronco."),
    [STRINGID_PKMNWOKEUP]                           = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se despertó!"),
    [STRINGID_PKMNUPROARKEPTAWAKE]                  = COMPOUND_STRING("¡Pero el Alboroto de {B_SCR_NAME_WITH_PREFIX} no le deja dormir!"),
    [STRINGID_PKMNWOKEUPINUPROAR]                   = COMPOUND_STRING("¡Alboroto despertó a {B_EFF_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNCAUSEDUPROAR]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} montó un Alboroto!"),
    [STRINGID_PKMNMAKINGUPROAR]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está montando un Alboroto!"),
    [STRINGID_PKMNCALMEDDOWN]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} se tranquilizó."),
    [STRINGID_PKMNCANTSLEEPINUPROAR]                = COMPOUND_STRING("¡Pero {B_DEF_NAME_WITH_PREFIX} no puede dormir con el Alboroto!"),
    [STRINGID_PKMNSTOCKPILED]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} reservó {B_BUFF1}!"),
    [STRINGID_PKMNCANTSTOCKPILE]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede reservar más!"), //I think this was replaced with just "But it failed!"
    [STRINGID_PKMNCANTSLEEPINUPROAR2]               = COMPOUND_STRING("¡Pero {B_DEF_NAME_WITH_PREFIX} no puede dormir con el Alboroto!"),
    [STRINGID_UPROARKEPTPKMNAWAKE]                  = COMPOUND_STRING("¡Pero el Alboroto mantuvo despierto a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNSTAYEDAWAKEUSING]                 = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se mantuvo despierto con {B_DEF_ABILITY}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSTORINGENERGY]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está acumulando energía!"),
    [STRINGID_PKMNUNLEASHEDENERGY]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} liberó energía!"),
    [STRINGID_PKMNFATIGUECONFUSION]                 = COMPOUND_STRING("¡El cansancio terminó confundiendo a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PLAYERPICKEDUPMONEY]                  = COMPOUND_STRING("¡{B_PLAYER_NAME} recogió ¥{B_BUFF1}!\p"),
    [STRINGID_PKMNUNAFFECTED]                       = COMPOUND_STRING("¡No afectó a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNTRANSFORMEDINTO]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se transformó en {B_BUFF1}!"),
    [STRINGID_PKMNMADESUBSTITUTE]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} creó un Sustituto!"),
    [STRINGID_PKMNHASSUBSTITUTE]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ya tiene un Sustituto!"),
    [STRINGID_SUBSTITUTEDAMAGED]                    = COMPOUND_STRING("¡El Sustituto recibe el daño en lugar de {B_DEF_NAME_WITH_PREFIX}!\p"),
    [STRINGID_PKMNSUBSTITUTEFADED]                  = COMPOUND_STRING("¡EL Sustituto de {B_DEF_NAME_WITH_PREFIX} se debilitó!\p"),
    [STRINGID_PKMNMUSTRECHARGE]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} necesita recuperarse de su ataque!"),
    [STRINGID_PKMNRAGEBUILDING]                     = COMPOUND_STRING("¡La Furia de {B_DEF_NAME_WITH_PREFIX} está creciendo!"),
    [STRINGID_PKMNMOVEWASDISABLED]                  = COMPOUND_STRING("¡{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} fue desactivado con Anulación!"),
    [STRINGID_PKMNMOVEISDISABLED]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede usar {B_CURRENT_MOVE} por culpa de Anulación!\p"),
    [STRINGID_PKMNMOVEDISABLEDNOMORE]               = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha liberado de Anulación!"),
    [STRINGID_PKMNGOTENCORE]                        = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} sufrió los efectos de Otra Vez!"),
    [STRINGID_PKMNENCOREENDED]                      = COMPOUND_STRING("¡Otra vez ya no hace efecto en {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNTOOKAIM]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} apuntó a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNSKETCHEDMOVE]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} usó Esquema en {B_BUFF1}!"),
    [STRINGID_PKMNTRYINGTOTAKEFOE]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} intenta llevarse a su rival!"),
    [STRINGID_PKMNTOOKFOE]                          = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se llevó a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNREDUCEDPP]                        = COMPOUND_STRING("¡Redujo {B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} en {B_BUFF2}!"),
    [STRINGID_PKMNSTOLEITEM]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} robó {B_LAST_ITEM} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_TARGETCANTESCAPENOW]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} no puede escapar!"),
    [STRINGID_PKMNFELLINTONIGHTMARE]                = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} cae en una Pesadilla!"),
    [STRINGID_PKMNLOCKEDINNIGHTMARE]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está inmerso en una Pesadilla!"),
    [STRINGID_PKMNLAIDCURSE]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} reduce sus PS y maldice a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNAFFLICTEDBYCURSE]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} es víctima de una Maldición!"),
    [STRINGID_SPIKESSCATTERED]                      = COMPOUND_STRING("¡El equipo Pokémon rival ha sido rodeado de Púas!"),
    [STRINGID_PKMNHURTBYSPIKES]                     = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha sido herido por Púas!"),
    [STRINGID_PKMNIDENTIFIED]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} identificó a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNPERISHCOUNTFELL]                  = COMPOUND_STRING("¡Contador de salud de {B_ATK_NAME_WITH_PREFIX} bajó a {B_BUFF1}!"),
    [STRINGID_PKMNBRACEDITSELF]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha fortalecido!"),
    [STRINGID_PKMNENDUREDHIT]                       = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} aguantó el golpe!"),
    [STRINGID_MAGNITUDESTRENGTH]                    = COMPOUND_STRING("¡Magnitud {B_BUFF1}!"),
    [STRINGID_PKMNCUTHPMAXEDATTACK]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} redujo sus PS y mejoró su Ataque!"),
    [STRINGID_PKMNCOPIEDSTATCHANGES]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} copió las nuevas característ. de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNGOTFREE]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se liberó de {B_BUFF1} de {B_DEF_NAME_WITH_PREFIX}!"), //No en gen 5
    [STRINGID_PKMNSHEDLEECHSEED]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se liberó de Drenadoras!"),
    [STRINGID_PKMNBLEWAWAYSPIKES]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se liberó de Púas!"),
    [STRINGID_PKMNFLEDFROMBATTLE]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} huyó del combate!"),
    [STRINGID_PKMNFORESAWATTACK]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} previó un ataque!"),
    [STRINGID_PKMNTOOKATTACK]                       = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} tomó el ataque de {B_BUFF1}!"),
    [STRINGID_PKMNATTACK]                           = COMPOUND_STRING("¡Ataque de {B_BUFF1}!"),
    [STRINGID_PKMNCENTERATTENTION]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se convirtió en el centro de atención!"),
    [STRINGID_PKMNCHARGINGPOWER]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} comenzó a cargar energía!"),
    [STRINGID_NATUREPOWERTURNEDINTO]                = COMPOUND_STRING("¡Adaptación se conviertió en {B_CURRENT_MOVE}!"),
    [STRINGID_PKMNSTATUSNORMAL]                     = COMPOUND_STRING("¡El estado de {B_ATK_NAME_WITH_PREFIX} regresó a la normalidad!"),
    [STRINGID_PKMNHASNOMOVESLEFT]                   = COMPOUND_STRING("¡A {B_ATK_NAME_WITH_PREFIX} no le quedan movimientos para usar!\p"),
    [STRINGID_PKMNSUBJECTEDTOTORMENT]               = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} es víctima de Tormento!"),
    [STRINGID_PKMNCANTUSEMOVETORMENT]               = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede usar dos veces seguidas el movimiento por Tormento!\p"),
    [STRINGID_PKMNTIGHTENINGFOCUS]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está reforzando su concentración!"),
    [STRINGID_PKMNFELLFORTAUNT]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se dejó engañar por Mofa!"),
    [STRINGID_PKMNCANTUSEMOVETAUNT]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede usar {B_CURRENT_MOVE} después de Mofa!\p"),
    [STRINGID_PKMNREADYTOHELP]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está listo para ayudar a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNSWITCHEDITEMS]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} provocó un cambio de objeto!"),
    [STRINGID_PKMNCOPIEDFOE]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} copió {B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNWISHCAMETRUE]                     = COMPOUND_STRING("¡El Deseo de {B_BUFF1} se hizo realidad!"),
    [STRINGID_PKMNPLANTEDROOTS]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} echó raíces!"),
    [STRINGID_PKMNABSORBEDNUTRIENTS]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} absorbió nutrientes con las raíces!"),
    [STRINGID_PKMNANCHOREDITSELF]                   = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se ancló con las raíces!"),
    [STRINGID_PKMNWASMADEDROWSY]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} comenzó a sentirse somnoliento!"),
    [STRINGID_PKMNKNOCKEDOFF]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} tiró el {B_LAST_ITEM} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNSWAPPEDABILITIES]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} intercambió habilidades con su objetivo!"),
    [STRINGID_PKMNSEALEDOPPONENTMOVE]               = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} selló cualquier movimiento que comparte con su objetivo!"),
    [STRINGID_PKMNCANTUSEMOVESEALED]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede usar su movimiento sellado {B_CURRENT_MOVE}!\p"),
    [STRINGID_PKMNWANTSGRUDGE]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} quiere que su objetivo guarde rencor!"),
    [STRINGID_PKMNLOSTPPGRUDGE]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} perdió todos los PP de {B_BUFF1} debido al rencor!"),
    [STRINGID_PKMNSHROUDEDITSELF]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se envolvió con un Manto Espejo!"),
    [STRINGID_PKMNMOVEBOUNCED]                      = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} devolvió el movimiento {B_CURRENT_MOVE}!"),
    [STRINGID_PKMNWAITSFORTARGET]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} espera a que su objetivo haga un movimiento!"),
    [STRINGID_PKMNSNATCHEDMOVE]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} robó el movimiento de {B_SCR_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNMADEITRAIN]                       = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} provocó la lluvia!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNRAISEDSPEED]                      = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX}aumentó su velocidad!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNPROTECTEDBY]                      = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} fue protegido por {B_DEF_ABILITY}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNPREVENTSUSAGE]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX}, con {B_DEF_ABILITY}, impide que {B_ATK_NAME_WITH_PREFIX} use {B_CURRENT_MOVE}!"),
    [STRINGID_PKMNRESTOREDHPUSING]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} restauró PS usando su {B_DEF_ABILITY}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNCHANGEDTYPEWITH]                  = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} lo convirtió en el tipo {B_BUFF1}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNPREVENTSPARALYSISWITH]            = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_EFF_NAME_WITH_PREFIX} impide que se quede paralizado!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNPREVENTSROMANCEWITH]              = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} impide que se enamore!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNPREVENTSPOISONINGWITH]            = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_EFF_NAME_WITH_PREFIX} impide que se envenene!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNPREVENTSCONFUSIONWITH]            = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} impide que quede confuso!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNRAISEDFIREPOWERWITH]              = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} reforzó sus ataques de Fuego!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNANCHORSITSELFWITH]                = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se aferra al suelo con {B_DEF_ABILITY}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNCUTSATTACKWITH]                   = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} bajó el Ataque de {B_DEF_NAME_WITH_PREFIX2}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNPREVENTSSTATLOSSWITH]             = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} previnó perder estadísticas!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNHURTSWITH]                        = COMPOUND_STRING("¡{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} hirió a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNTRACED]                           = COMPOUND_STRING("I¡{B_SCR_NAME_WITH_PREFIX} rastreó {B_BUFF2} de {B_BUFF1}!"),
    [STRINGID_STATSHARPLY]                          = gText_StatSharply,
    [STRINGID_STATROSE]                             = gText_StatRose,
    [STRINGID_STATHARSHLY]                          = COMPOUND_STRING(" mucho"),
    [STRINGID_STATFELL]                             = gText_StatFell,
    [STRINGID_ATTACKERSSTATROSE]                    = COMPOUND_STRING("{B_BUFF1} de {B_ATK_NAME_WITH_PREFIX} {B_BUFF2}"),
    [STRINGID_DEFENDERSSTATROSE]                    = gText_DefendersStatRose,
    [STRINGID_ATTACKERSSTATFELL]                    = COMPOUND_STRING("{B_BUFF1} de {B_ATK_NAME_WITH_PREFIX} {B_BUFF2}"),
    [STRINGID_DEFENDERSSTATFELL]                    = COMPOUND_STRING("{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} {B_BUFF2}"),
    [STRINGID_CRITICALHIT]                          = COMPOUND_STRING("¡Un golpe crítico!"),
    [STRINGID_ONEHITKO]                             = COMPOUND_STRING("¡K.O. en 1 golpe!"),
    [STRINGID_123POOF]                              = COMPOUND_STRING("1…{PAUSE 10}2…{PAUSE 10}and…{PAUSE 10}{PAUSE 20}{PLAY_SE SE_BALL_BOUNCE_1}¡puf!\p"),
    [STRINGID_ANDELLIPSIS]                          = COMPOUND_STRING("Y…\p"),
    [STRINGID_NOTVERYEFFECTIVE]                     = COMPOUND_STRING("No es muy eficaz…"),
    [STRINGID_SUPEREFFECTIVE]                       = COMPOUND_STRING("¡Es muy eficaz!"),
    [STRINGID_GOTAWAYSAFELY]                        = sText_GotAwaySafely,
    [STRINGID_WILDPKMNFLED]                         = COMPOUND_STRING("{PLAY_SE SE_FLEE}¡{B_BUFF1} salvaje ha huido!"),
    [STRINGID_NORUNNINGFROMTRAINERS]                = COMPOUND_STRING("¡No puedes huir de un combate contra un Entrenador!\p"),
    [STRINGID_CANTESCAPE]                           = COMPOUND_STRING("¡No puedes huir!\p"),
    [STRINGID_DONTLEAVEBIRCH]                       = COMPOUND_STRING("Prof. Abedul: ¡¡¡No me dejes así!!!\p"),
    [STRINGID_BUTNOTHINGHAPPENED]                   = COMPOUND_STRING("¡Pero no tuvo ningún efecto!"),
    [STRINGID_BUTITFAILED]                          = COMPOUND_STRING("¡Pero falló!"),
    [STRINGID_ITHURTCONFUSION]                      = COMPOUND_STRING("¡Está tan confuso que se hirió a sí mismo!"),
    [STRINGID_MIRRORMOVEFAILED]                     = COMPOUND_STRING("¡El Mov. Espejo ha fallado!"), //En gen 5+, usa "pero falló"
    [STRINGID_STARTEDTORAIN]                        = COMPOUND_STRING("¡Ha empezado a llover!"),
    [STRINGID_DOWNPOURSTARTED]                      = COMPOUND_STRING("¡Comenzó a caer un chaparrón!"), 
    [STRINGID_RAINCONTINUES]                        = COMPOUND_STRING("Sigue lloviendo…"), //no en gen 5+
    [STRINGID_DOWNPOURCONTINUES]                    = COMPOUND_STRING("El chaparrón continúa…"), // unused
    [STRINGID_RAINSTOPPED]                          = COMPOUND_STRING("Ha dejado de llover."),
    [STRINGID_SANDSTORMBREWED]                      = COMPOUND_STRING("¡Se acerca una tormenta de arena!"),
    [STRINGID_SANDSTORMRAGES]                       = COMPOUND_STRING("La tormenta de arena arrecia…"),
    [STRINGID_SANDSTORMSUBSIDED]                    = COMPOUND_STRING("La tormenta de arena amainó."),
    [STRINGID_SUNLIGHTGOTBRIGHT]                    = COMPOUND_STRING("¡El sol está brillando!"),
    [STRINGID_SUNLIGHTSTRONG]                       = COMPOUND_STRING("Hace mucho sol…"), //no en gen 5+
    [STRINGID_SUNLIGHTFADED]                        = COMPOUND_STRING("Se ha ido el sol."),
    [STRINGID_STARTEDHAIL]                          = COMPOUND_STRING("¡Ha empezado a granizar!"),
    [STRINGID_HAILCONTINUES]                        = COMPOUND_STRING("Sigue granizando…"),
    [STRINGID_HAILSTOPPED]                          = COMPOUND_STRING("Ha dejado de granizar."),
    [STRINGID_FAILEDTOSPITUP]                       = COMPOUND_STRING("¡Pero no consiguió  Escupir energía!"), //no en gen 5+, uses "but it failed"
    [STRINGID_FAILEDTOSWALLOW]                      = COMPOUND_STRING("¡Pero no consiguió  Tragar energía!"), //no en gen 5+, uses "but it failed"
    [STRINGID_STATCHANGESGONE]                      = COMPOUND_STRING("¡Se han eliminado todos los cambios en las características!"),
    [STRINGID_COINSSCATTERED]                       = COMPOUND_STRING("¡Hay monedas por todas partes!"),
    [STRINGID_TOOWEAKFORSUBSTITUTE]                 = COMPOUND_STRING("¡Estaba demasiado débil para crear un Sustituto!"),
    [STRINGID_SHAREDPAIN]                           = COMPOUND_STRING("¡Los combatientes comparten el daño sufrido!"),
    [STRINGID_BELLCHIMED]                           = COMPOUND_STRING("¡Ha repicado una campana!"),
    [STRINGID_FAINTINTHREE]                         = COMPOUND_STRING("¡Los Pokémon de ambas partes se debilitarán dentro de 3 turnos!"),
    [STRINGID_NOPPLEFT]                             = COMPOUND_STRING("¡No quedan PP para este movimiento!\p"), //no en gen 5+
    [STRINGID_BUTNOPPLEFT]                          = COMPOUND_STRING("¡Pero no quedan PP para este movimiento!"),
    [STRINGID_PLAYERUSEDITEM]                       = COMPOUND_STRING("¡{B_PLAYER_NAME} usó {B_LAST_ITEM}!"),
    [STRINGID_WALLYUSEDITEM]                        = COMPOUND_STRING("¡Blasco usó {B_LAST_ITEM}!"), //no decapitalize until it is everywhere
    [STRINGID_TRAINERBLOCKEDBALL]                   = COMPOUND_STRING("El entrenador bloqueó tú Poké Ball!"),
    [STRINGID_DONTBEATHIEF]                         = COMPOUND_STRING("¡Robar está mal!"),
    [STRINGID_ITDODGEDBALL]                         = COMPOUND_STRING("¡Esquivó la Ball! ¡No has podido atrapar a este Pokémon!"),
    [STRINGID_YOUMISSEDPKMN]                        = COMPOUND_STRING("¡Has apuntado mal al Pokémon!"),
    [STRINGID_PKMNBROKEFREE]                        = COMPOUND_STRING("¡Oh, no! ¡El Pokémon se ha escapado!"),
    [STRINGID_ITAPPEAREDCAUGHT]                     = COMPOUND_STRING("¡Vaya! ¡Parecía que lo habías atrapado!"),
    [STRINGID_AARGHALMOSTHADIT]                     = COMPOUND_STRING("¡Qué pena! ¡Te faltó poco!"),
    [STRINGID_SHOOTSOCLOSE]                         = COMPOUND_STRING("¡Uy! ¡Casi lo consigues!"),
    [STRINGID_GOTCHAPKMNCAUGHTPLAYER]               = COMPOUND_STRING("¡Ya está! ¡{B_DEF_NAME} atrapado!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}\p"),
    [STRINGID_GOTCHAPKMNCAUGHTWALLY]                = COMPOUND_STRING("¡Ya está! ¡{B_DEF_NAME} atrapado!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}{PAUSE 127}"),
    [STRINGID_GIVENICKNAMECAPTURED]                 = COMPOUND_STRING("¿Quieres ponerle un mote a {B_DEF_NAME}?"),
    [STRINGID_PKMNSENTTOPC]                         = COMPOUND_STRING("{B_DEF_NAME} fue enviado al PC de {B_PC_CREATOR_NAME}."), //Still used lanette's pc since terminology is different
    [STRINGID_PKMNDATAADDEDTODEX]                   = COMPOUND_STRING("Registrados en la Pokédex los datos de {B_DEF_NAME}.\p"),
    [STRINGID_ITISRAINING]                          = COMPOUND_STRING("Está lloviendo…"),
    [STRINGID_SANDSTORMISRAGING]                    = COMPOUND_STRING("La tormenta de arena cobra fuerza…"),
    [STRINGID_CANTESCAPE2]                          = COMPOUND_STRING("¡No puedes huir!\p"),
    [STRINGID_PKMNIGNORESASLEEP]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ignoró las órdenes porque está dormido!"),
    [STRINGID_PKMNIGNOREDORDERS]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ignoró las órdenes!"),
    [STRINGID_PKMNBEGANTONAP]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se fue a dormir!"),
    [STRINGID_PKMNLOAFING]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está holgazaneando!"),
    [STRINGID_PKMNWONTOBEY]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no quiere obedecer!"),
    [STRINGID_PKMNTURNEDAWAY]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se alejó!"),
    [STRINGID_PKMNPRETENDNOTNOTICE]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} fingió no darse cuenta!"),
    [STRINGID_ENEMYABOUTTOSWITCHPKMN]               = COMPOUND_STRING("{B_BUFF2} será el próximo POKéMON de {B_TRAINER1_CLASS} {B_TRAINER1_NAME}.\p{B_PLAYER_NAME}, ¿quieres  cambiar de POKéMON?"),
    [STRINGID_CREPTCLOSER]                          = COMPOUND_STRING("¡{B_PLAYER_NAME} se acercó sigilosamente a {B_OPPONENT_MON1_NAME}!"), //safari
    [STRINGID_CANTGETCLOSER]                        = COMPOUND_STRING("¡{B_PLAYER_NAME} no se puede acercar más!"), //safari
    [STRINGID_PKMNWATCHINGCAREFULLY]                = COMPOUND_STRING("¡{B_OPPONENT_MON1_NAME} te observa atentamente!"),
    [STRINGID_PKMNCURIOUSABOUTX]                    = COMPOUND_STRING("¡{B_OPPONENT_MON1_NAME} siente curiosidad por el {B_BUFF1}!"),
    [STRINGID_PKMNENTHRALLEDBYX]                    = COMPOUND_STRING("¡{B_OPPONENT_MON1_NAME} está embelesado con el {B_BUFF1}!"),
    [STRINGID_PKMNIGNOREDX]                         = COMPOUND_STRING("¡{B_OPPONENT_MON1_NAME} ignoró completamente el {B_BUFF1}!"),
    [STRINGID_THREWPOKEBLOCKATPKMN]                 = COMPOUND_STRING("¡{B_PLAYER_NAME} lanzó un {POKEBLOCK} a {B_OPPONENT_MON1_NAME}!"),
    [STRINGID_OUTOFSAFARIBALLS]                     = COMPOUND_STRING("{PLAY_SE SE_DING_DONG}Encargado: ¡No te quedan más Safari Balls! ¡Se acabó el tiempo!\p"),
    [STRINGID_PKMNSITEMCUREDPARALYSIS]              = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se curó de la parálisis con {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMCUREDPOISON]                 = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se curó del envenenamiento con {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMHEALEDBURN]                  = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se curó las quemaduras con {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMDEFROSTEDIT]                 = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se descongeló con {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMWOKEIT]                      = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se despertó con {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMSNAPPEDOUT]                  = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se libró de la confusión con {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMCUREDPROBLEM]                = COMPOUND_STRING("¡{B_LAST_ITEM} de {B_SCR_NAME_WITH_PREFIX} curó su problema de {B_BUFF1}!"),
    [STRINGID_PKMNSITEMRESTOREDHEALTH]              = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} restauró  salud con {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMRESTOREDPP]                  = COMPOUND_STRING("¡{B_LAST_ITEM} de {B_SCR_NAME_WITH_PREFIX} restauró los PP de {B_BUFF1}!"),
    [STRINGID_PKMNSITEMRESTOREDSTATUS]              = COMPOUND_STRING("¡{B_LAST_ITEM} de {B_SCR_NAME_WITH_PREFIX} restauró sus características!"),
    [STRINGID_PKMNSITEMRESTOREDHPALITTLE]           = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} restauró algo sus PS con {B_LAST_ITEM}!"),
    [STRINGID_ITEMALLOWSONLYYMOVE]                  = COMPOUND_STRING("¡{B_LAST_ITEM} solo permite el uso de {B_CURRENT_MOVE}!\p"),
    [STRINGID_PKMNHUNGONWITHX]                      = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} resistió usando su {B_LAST_ITEM}!"),
    [STRINGID_EMPTYSTRING3]                         = gText_EmptyString3,
    [STRINGID_PKMNSXPREVENTSBURNS]                  = COMPOUND_STRING("¡{B_EFF_ABILITY} de {B_EFF_NAME_WITH_PREFIX} impide que se queme!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXBLOCKSY]                        = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} bloquea {B_CURRENT_MOVE}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXRESTOREDHPALITTLE2]             = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} restauró algo sus PS con {B_ATK_ABILITY}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXWHIPPEDUPSANDSTORM]             = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} levantó la tormenta de arena!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXPREVENTSYLOSS]                  = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} previnó perder {B_BUFF1}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXINFATUATEDY]                    = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} enamoró a {B_ATK_NAME_WITH_PREFIX}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXMADEYINEFFECTIVE]               = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} anuló {B_CURRENT_MOVE}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXCUREDYPROBLEM]                  = COMPOUND_STRING("{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} curó su problema de {B_BUFF1}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_ITSUCKEDLIQUIDOOZE]                   = COMPOUND_STRING("¡Absorbió el  Lodo Líquido!"),
    [STRINGID_PKMNTRANSFORMED]                      = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se transformó!"),
    [STRINGID_ELECTRICITYWEAKENED]                  = COMPOUND_STRING("¡Se han debilitado los ataques Eléctricos!"),
    [STRINGID_FIREWEAKENED]                         = COMPOUND_STRING("¡Se han debilitado los ataques de Fuego!"),
    [STRINGID_PKMNHIDUNDERWATER]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ocultó bajo el agua!"),
    [STRINGID_PKMNSPRANGUP]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} dió salto tremendo!"),
    [STRINGID_HMMOVESCANTBEFORGOTTEN]               = COMPOUND_STRING("Los movimientos MO no se pueden olvidar así.\p"),
    [STRINGID_XFOUNDONEY]                           = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} encontró una unidad de {B_LAST_ITEM}!"),
    [STRINGID_PLAYERDEFEATEDTRAINER1]               = sText_PlayerDefeatedLinkTrainerTrainer1,
    [STRINGID_SOOTHINGAROMA]                        = COMPOUND_STRING("¡Un balsámico aroma impregnó la zona!"),
    [STRINGID_ITEMSCANTBEUSEDNOW]                   = COMPOUND_STRING("Aquí no se pueden usar objetos.{PAUSE 64}"), //no en gen 5+, i think
    [STRINGID_FORXCOMMAYZ]                          = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} encuentra {B_BUFF1} {B_LAST_ITEM}"), //no en gen 5+, la expansion no la usa más
    [STRINGID_USINGITEMSTATOFPKMNROSE]              = COMPOUND_STRING("Usando {B_LAST_ITEM}, el {B_BUFF1} de {B_SCR_NAME_WITH_PREFIX} {B_BUFF2}."), //Por hacer: actualizarlo, va a necesirae cambios en código
    [STRINGID_PKMNUSEDXTOGETPUMPED]                 = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} usa {B_LAST_ITEM} para potenciar los golpes críticos!"),
    [STRINGID_PKMNSXMADEYUSELESS]                   = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} inutilizó {B_CURRENT_MOVE}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNTRAPPEDBYSANDTOMB]                = COMPOUND_STRING("¡Bucle Arena atrapó a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_EMPTYSTRING4]                         = COMPOUND_STRING(""),
    [STRINGID_ABOOSTED]                             = COMPOUND_STRING(" adicionales"),
    [STRINGID_PKMNSXINTENSIFIEDSUN]                 = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} intensificó los rayos solares!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNMAKESGROUNDMISS]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} impides ataques de Tierra con {B_DEF_ABILITY}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_YOUTHROWABALLNOWRIGHT]                = COMPOUND_STRING("Ahora debo lanzar una Ball, ¿no? ¡Intentaré hacerlo lo mejor posible!"),
    [STRINGID_PKMNSXTOOKATTACK]                     = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} recibió el ataque!"), //En gen 5+ sin nombrar la habilidad
    [STRINGID_PKMNCHOSEXASDESTINY]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} usará {B_CURRENT_MOVE} más adelante!"),
    [STRINGID_PKMNLOSTFOCUS]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se desconcentró y quedó inmovilizado!"),
    [STRINGID_USENEXTPKMN]                          = COMPOUND_STRING("¿Usas el siguiente Pokémon?"),
    [STRINGID_PKMNFLEDUSINGITS]                     = COMPOUND_STRING("{PLAY_SE SE_FLEE}¡{B_ATK_NAME_WITH_PREFIX} escapó usando su {B_LAST_ITEM}!\p"),
    [STRINGID_PKMNFLEDUSING]                        = COMPOUND_STRING("{PLAY_SE SE_FLEE}¡{B_ATK_NAME_WITH_PREFIX} escapó usando su {B_ATK_ABILITY}!\p"), //no en gen 5+
    [STRINGID_PKMNWASDRAGGEDOUT]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} fue arrastrado al combate!\p\p"),
    [STRINGID_PKMNSITEMNORMALIZEDSTATUS]            = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} normalizó su estado con {B_LAST_ITEM}!"),
    [STRINGID_TRAINER1USEDITEM]                     = COMPOUND_STRING("¡Uso de {B_LAST_ITEM} {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!"),
    [STRINGID_BOXISFULL]                            = COMPOUND_STRING("¡Las CAJAS están llenas! ¡No puedes atrapar ninguno más!\p"),
    [STRINGID_PKMNAVOIDEDATTACK]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} evitó el ataque!"),
    [STRINGID_PKMNSXMADEITINEFFECTIVE]              = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} lo hizo ineficaz!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXPREVENTSFLINCHING]              = COMPOUND_STRING("¡{B_EFF_ABILITY} de {B_EFF_NAME_WITH_PREFIX} impide el retroceso!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNALREADYHASBURN]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ya está quemado."),
    [STRINGID_STATSWONTDECREASE2]                   = COMPOUND_STRING("¡Las características de {B_DEF_NAME_WITH_PREFIX} no bajarán más!"),
     [STRINGID_PKMNSXBLOCKSY2]                       = COMPOUND_STRING("{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} bloqueó {B_CURRENT_MOVE}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_PKMNSXWOREOFF]                        = COMPOUND_STRING("¡{B_BUFF1} de {B_ATK_PREFIX1} se agotó!"),
    [STRINGID_PKMNRAISEDDEFALITTLE]                 = COMPOUND_STRING("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2} subió la Defensa!"), //No se usara más en la expansión
    [STRINGID_PKMNRAISEDSPDEFALITTLE]               = COMPOUND_STRING("¡{B_CURRENT_MOVE} de {B_ATK_PREFIX2} subió algo la Def. Esp.!"), //No se usara más en la expansión
    [STRINGID_THEWALLSHATTERED]                     = COMPOUND_STRING("¡Destruyó la protección!"), //no en gen5+, usa "¡la pantalla de luz desapareció!" etc instead
    [STRINGID_PKMNSXPREVENTSYSZ]                    = COMPOUND_STRING("¡{B_ATK_ABILITY} de {B_ATK_NAME_WITH_PREFIX} impide que {B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} funcione!"),
    [STRINGID_PKMNSXCUREDITSYPROBLEM]               = COMPOUND_STRING("¡{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} curó su problema de {B_BUFF1}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_ATTACKERCANTESCAPE]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede escapar!\p"),
    [STRINGID_PKMNOBTAINEDX]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} obtuvo {B_BUFF1}."),
    [STRINGID_PKMNOBTAINEDX2]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} obtuvo {B_BUFF2}."),
    [STRINGID_PKMNOBTAINEDXYOBTAINEDZ]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} obtuvo {B_BUFF1}.\p{B_DEF_NAME_WITH_PREFIX} obtuvo {B_BUFF2}."),
    [STRINGID_BUTNOEFFECT]                          = COMPOUND_STRING("¡Pero no surtió efecto!"),
    [STRINGID_PKMNSXHADNOEFFECTONY]                 = COMPOUND_STRING("Se protegió con {B_LAST_ABILITY}!"), //En gen 5+, no hay popup de habilidad
    [STRINGID_TWOENEMIESDEFEATED]                   = sText_TwoInGameTrainersDefeated,
    [STRINGID_TRAINER2LOSETEXT]                     = COMPOUND_STRING("{B_TRAINER2_LOSE_TEXT}"),
    [STRINGID_PKMNINCAPABLEOFPOWER]                 = COMPOUND_STRING("¡Parece que {B_ATK_NAME_WITH_PREFIX} no es capaz de usar su poder!"),
    [STRINGID_GLINTAPPEARSINEYE]                    = COMPOUND_STRING("¡A {B_SCR_NAME_WITH_PREFIX}se le ha encendido la mirada!"),
    [STRINGID_PKMNGETTINGINTOPOSITION]              = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} está preparándose!"),
    [STRINGID_PKMNBEGANGROWLINGDEEPLY]              = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha empezado a gruñir con fuerza!"),
    [STRINGID_PKMNEAGERFORMORE]                     = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} no se da por satisfecho!"),
    [STRINGID_DEFEATEDOPPONENTBYREFEREE]            = COMPOUND_STRING("Por decisión del Juez, ¡{B_PLAYER_MON1_NAME} ha ganado a su rival {B_OPPONENT_MON1_NAME}!"),
    [STRINGID_LOSTTOOPPONENTBYREFEREE]              = COMPOUND_STRING("Por decisión del Juez, ¡{B_PLAYER_MON1_NAME} ha perdido ante su rival {B_OPPONENT_MON1_NAME}!"),
    [STRINGID_TIEDOPPONENTBYREFEREE]                = COMPOUND_STRING("Por decisión del Juez, ¡{B_PLAYER_MON1_NAME} y {B_OPPONENT_MON1_NAME} han empatado!"),
    [STRINGID_QUESTIONFORFEITMATCH]                 = COMPOUND_STRING("¿Quieres abandonar el encuentro y salir?"),
    [STRINGID_FORFEITEDMATCH]                       = COMPOUND_STRING("¡{B_PLAYER_NAME} abandona el encuentro!"),
    [STRINGID_PKMNTRANSFERREDSOMEONESPC]            = gText_PkmnTransferredSomeonesPC,
    [STRINGID_PKMNTRANSFERREDLANETTESPC]            = gText_PkmnTransferredLanettesPC,
    [STRINGID_PKMNBOXSOMEONESPCFULL]                = gText_PkmnTransferredSomeonesPCBoxFull,
    [STRINGID_PKMNBOXLANETTESPCFULL]                = gText_PkmnTransferredLanettesPCBoxFull,
    [STRINGID_TRAINER1WINTEXT]                      = COMPOUND_STRING("{B_TRAINER1_WIN_TEXT}"),
    [STRINGID_TRAINER2WINTEXT]                      = COMPOUND_STRING("{B_TRAINER2_WIN_TEXT}"),
    [STRINGID_ENDUREDSTURDY]                        = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} aguantó el golpe con {B_DEF_ABILITY}!"),
    [STRINGID_POWERHERB]                            = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} fue cargado gracias a {B_LAST_ITEM}!"),
    [STRINGID_HURTBYITEM]                           = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha resultado herido por {B_LAST_ITEM}!"),
    [STRINGID_PSNBYITEM]                            = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} ha sido gravemente envenenado por {B_LAST_ITEM}!"),
    [STRINGID_BRNBYITEM]                            = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} se ha quemado con {B_LAST_ITEM}!"),
    [STRINGID_DEFABILITYIN]                         = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} se activa!"),
    [STRINGID_GRAVITYINTENSIFIED]                   = COMPOUND_STRING("¡La gravedad se ha incrementado!"),
    [STRINGID_TARGETIDENTIFIED]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} fue identificado!"),
    [STRINGID_TARGETWOKEUP]                         = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se despertó!"),
    [STRINGID_PKMNSTOLEANDATEITEM]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} robó y se comió {B_LAST_ITEM} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_TAILWINDBLEW]                         = COMPOUND_STRING("¡El viento sopla a favor del equipo {B_ATK_TEAM2}!"),
    [STRINGID_PKMNWENTBACK]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} volvió con {B_ATK_TRAINER_CLASS} {B_ATK_TRAINER_NAME}"),
    [STRINGID_PKMNCANTUSEITEMSANYMORE]              = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} no puede usar objetos!"),
    [STRINGID_PKMNFLUNG]                            = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} arrojó su {B_LAST_ITEM}!"),
    [STRINGID_PKMNPREVENTEDFROMHEALING]             = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} no puede curarse!"),
    [STRINGID_PKMNSWITCHEDATKANDDEF]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha intercambiado su ataque y defensa!"),
    [STRINGID_PKMNSABILITYSUPPRESSED]               = COMPOUND_STRING("¡La habilidad de {B_DEF_NAME_WITH_PREFIX} fue suprimida!"),
    [STRINGID_SHIELDEDFROMCRITICALHITS]             = COMPOUND_STRING("¡{B_CURRENT_MOVE} protege al equipo {B_ATK_TEAM2} de los golpes críticos!"),
    [STRINGID_SWITCHEDATKANDSPATK]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha intercambiado los cambios en ataque y ataque especial con los del objetivo!"),
    [STRINGID_SWITCHEDDEFANDSPDEF]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha intercambiado los cambios en defensa y defensa especial con los del objetivo!"),
    [STRINGID_PKMNACQUIREDABILITY]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} obtuvo {B_DEF_ABILITY}!"),
    [STRINGID_POISONSPIKESSCATTERED]                = COMPOUND_STRING("¡El equipo rival ha sido rodeado de púas tóxicas!"),
    [STRINGID_PKMNSWITCHEDSTATCHANGES]              = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha intercambiado los cambios de características con el\pobjetivo!"),
    [STRINGID_PKMNSURROUNDEDWITHVEILOFWATER]        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha rodeado con un velo de agua!"),
    [STRINGID_PKMNLEVITATEDONELECTROMAGNETISM]      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} levita con electromagnetismo!"),
    [STRINGID_PKMNTWISTEDDIMENSIONS]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha alterado las dimensiones!"),
    [STRINGID_POINTEDSTONESFLOAT]                   = COMPOUND_STRING("¡Se han esparcido rocas alrededor del equipo {B_DEF_TEAM2}!"),
    [STRINGID_CLOAKEDINMYSTICALMOONLIGHT]           = COMPOUND_STRING("¡Ha sido envuelto en un místico halo de luz de luna!"),
    [STRINGID_TRAPPEDBYSWIRLINGMAGMA]               = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ha quedado atrapado en la lluvia ígnea!"),
    [STRINGID_VANISHEDINSTANTLY]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} desaparece en un abrir y cerrar de ojos!"),
    [STRINGID_PROTECTEDTEAM]                        = COMPOUND_STRING("¡{B_CURRENT_MOVE} protegió al equipo {B_ATK_TEAM2}!"),
    [STRINGID_SHAREDITSGUARD]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha compartido sus defensas con el objetivo!"),
    [STRINGID_SHAREDITSPOWER]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha compartido su poder con el objetivo!"),
    [STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON]         = COMPOUND_STRING("¡Se ha creado un espacio en que defensa y defensa especial se invierten!"),
    [STRINGID_BECAMENIMBLE]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha vuelto ligero!"),
    [STRINGID_HURLEDINTOTHEAIR]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ha sido lanzado por los aires!"),
    [STRINGID_HELDITEMSLOSEEFFECTS]                 = COMPOUND_STRING("¡Se ha creado un espacio en el que el efecto de los objetos desaparece!"),
    [STRINGID_FELLSTRAIGHTDOWN]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ha sido lanzado al suelo!"),
    [STRINGID_TARGETCHANGEDTYPE]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se ha transformado en el tipo {B_BUFF1}!"),
    [STRINGID_PKMNACQUIREDSIMPLE]                   = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ha adquirido Simple!"), //no deberia usar el nombre directo
    [STRINGID_EMPTYSTRING5]                         = sText_EmptyString4,
    [STRINGID_KINDOFFER]                            = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ha aceptado la propuesta!"),
    [STRINGID_RESETSTARGETSSTATLEVELS]              = COMPOUND_STRING("¡Se han anulado todos los cambios en las características de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_EMPTYSTRING6]                         = sText_EmptyString4,
    [STRINGID_ALLYSWITCHPOSITION]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} y {B_SCR_NAME_WITH_PREFIX} han intercambiado\psus posiciones!"),
    [STRINGID_RESTORETARGETSHEALTH]                 = COMPOUND_STRING("¡Los PS de {B_DEF_NAME_WITH_PREFIX} han sido restaurados!"),
    [STRINGID_TOOKPJMNINTOTHESKY]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha llevado a {B_DEF_NAME_WITH_PREFIX} por los aires!"),
    [STRINGID_FREEDFROMSKYDROP]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se ha liberado de Caída libre!"),
    [STRINGID_POSTPONETARGETMOVE]                   = COMPOUND_STRING("¡El movimiento de {B_DEF_NAME_WITH_PREFIX} ha sido aplazado!"),
    [STRINGID_REFLECTTARGETSTYPE]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ahora es del mismo tipo que {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_TRANSFERHELDITEM]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ha recibido {B_LAST_ITEM} de {B_ATK_NAME_WITH_PREFIX}"),
    [STRINGID_EMBARGOENDS]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ya puede usar objetos de nuevo!"),
    [STRINGID_ELECTROMAGNETISM]                     = COMPOUND_STRING("electromagnetismo"),
    [STRINGID_BUFFERENDS]                           = COMPOUND_STRING("¡{B_BUFF1} de {B_ATK_NAME_WITH_PREFIX} se ha disipado!"),
    [STRINGID_TELEKINESISENDS]                      = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se liberó de la telequinesis!"), 
    [STRINGID_TAILWINDENDS]                         = COMPOUND_STRING("¡Ha dejado de soplar el viento que favorecía al equipo {B_ATK_TEAM1}!"),
    [STRINGID_LUCKYCHANTENDS]                       = COMPOUND_STRING("¡El efecto de Conjuro se ha desvanecido en el equipo {B_ATK_TEAM1}!"),
    [STRINGID_TRICKROOMENDS]                        = COMPOUND_STRING("¡Se han restaurado las dimensiones alteradas!"),
    [STRINGID_WONDERROOMENDS]                       = COMPOUND_STRING("¡Los efectos de Zona extraña sobre la Defensa y la Defensa Especial han\pdesaparecido!"),
    [STRINGID_MAGICROOMENDS]                        = COMPOUND_STRING("¡Los efectos de Zona mágica sobre los objetos han desaparecido!"),
    [STRINGID_MUDSPORTENDS]                         = COMPOUND_STRING("Chapoteolodo ha dejado de surtir efecto."),
    [STRINGID_WATERSPORTENDS]                       = COMPOUND_STRING("Hidrochorro ha dejado de surtir efecto."),
    [STRINGID_GRAVITYENDS]                          = COMPOUND_STRING("¡La gravedad ha vuelto a su estado normal!"),
    [STRINGID_AQUARINGHEAL]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha recuperado algunos PS gracias al manto de agua\pque rodea su cuerpo!"),
    [STRINGID_ELECTRICTERRAINENDS]                  = COMPOUND_STRING("El campo de corriente eléctrica ha desaparecido."),
    [STRINGID_MISTYTERRAINENDS]                     = COMPOUND_STRING("La niebla se ha disipado."),
    [STRINGID_PSYCHICTERRAINENDS]                   = COMPOUND_STRING("Ha desaparecido la extraña sensación que se percibía en el terreno\pde combate."),
    [STRINGID_GRASSYTERRAINENDS]                    = COMPOUND_STRING("La hierba ha desaparecido."),
    [STRINGID_TARGETABILITYSTATRAISE]               = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} ha aumentado su {B_BUFF1}!"),
    [STRINGID_TARGETSSTATWASMAXEDOUT]               = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} ha aumentado al máximo su\p{B_BUFF1}!"),
    [STRINGID_ATTACKERABILITYSTATRAISE]             = COMPOUND_STRING("¡{B_ATK_ABILITY} de {B_ATK_NAME_WITH_PREFIX} ha aumentado su {B_BUFF1}!"),
    [STRINGID_POISONHEALHPUP]                       = COMPOUND_STRING("¡El veneno ha restaurado unos pocos PS a {B_ATK_NAME_WITH_PREFIX}!"), //creo que este mensaje no se muestra más
    [STRINGID_BADDREAMSDMG]                         = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} está atormentado por {B_ATK_ABILITY}!"),
    [STRINGID_MOLDBREAKERENTERS]                    = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha usado Rompemoldes!"),
    [STRINGID_TERAVOLTENTERS]                       = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} desprende un aura chisporroteante!"),
    [STRINGID_TURBOBLAZEENTERS]                     = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} desprende un aura llameante!"),
    [STRINGID_SLOWSTARTENTERS]                      = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} no rinde todo lo que podría!"),
    [STRINGID_SLOWSTARTEND]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} vuelve a ir a por todas!"),
    [STRINGID_SOLARPOWERHPDROP]                     = COMPOUND_STRING("¡{B_ATK_ABILITY} de {B_ATK_NAME_WITH_PREFIX} hace que pierda unos pocos PS!"), //creo que este mensaje no se muestra más
    [STRINGID_AFTERMATHDMG]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha resultado herido!"),
    [STRINGID_ANTICIPATIONACTIVATES]                = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se ha estremecido!"),
    [STRINGID_FOREWARNACTIVATES] = COMPOUND_STRING("¡{B_SCR_ABILITY} alertó a {B_SCR_NAME_WITH_PREFIX2} sobre {B_DEF_NAME_WITH_PREFIX2} y su {B_BUFF1}!"),
    [STRINGID_ICEBODYHPGAIN]                        = COMPOUND_STRING("¡{B_ATK_ABILITY} de {B_ATK_NAME_WITH_PREFIX} hizo que recuperara unos pocos PS"), //creo que este mensaje no se muestra más
    [STRINGID_SNOWWARNINGHAIL]                      = COMPOUND_STRING("¡Ha empezado a granizar!"),
    [STRINGID_FRISKACTIVATES]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha cacheado a {B_DEF_NAME_WITH_PREFIX} y ha hallado {B_LAST_ITEM}!"),
    [STRINGID_UNNERVEENTERS]                        = COMPOUND_STRING("¡El equipo rival está muy nervioso y no puede tomar bayas!"),
    [STRINGID_HARVESTBERRY]                         = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha reciclado {B_LAST_ITEM}!"),
    [STRINGID_MAGICBOUNCEACTIVATES]                 = COMPOUND_STRING("¡The {B_DEF_NAME_WITH_PREFIX} ha devuelto {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PROTEANTYPECHANGE]                    = COMPOUND_STRING("¡{B_ATK_ABILITY} de {B_ATK_NAME_WITH_PREFIX} lo ha cambiado a tipo {B_BUFF1}!"),
    [STRINGID_SYMBIOSISITEMPASS]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} le ha dado {B_LAST_ITEM} a {B_SCR_NAME_WITH_PREFIX} con {B_ATK_ABILITY}!"),
    [STRINGID_STEALTHROCKDMG]                       = COMPOUND_STRING("¡Unas piedras puntiagudas han dañado a {B_SCR_NAME_WITH_PREFIX}!"),
    [STRINGID_TOXICSPIKESABSORBED]                  = COMPOUND_STRING("¡Las púas tóxicas lanzadas al equipo enemigo han desaparecido!"),
    [STRINGID_TOXICSPIKESPOISONED]                  = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha sido envenenado!"),
    [STRINGID_TOXICSPIKESBADLYPOISONED]             = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} fue gravemente envenenado!"),
    [STRINGID_STICKYWEBSWITCHIN]                    = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha caído en una red viscosa!"),
    [STRINGID_HEALINGWISHCAMETRUE]                  = COMPOUND_STRING("¡El deseo se ha hecho realidad para {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_HEALINGWISHHEALED]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha recobrado la salud!"),
    [STRINGID_LUNARDANCECAMETRUE]                   = COMPOUND_STRING("¡Un místico halo de luz de luna envuelve a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_CURSEDBODYDISABLED]                    = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX2} desactivó {B_BUFF1} de {B_ATK_NAME_WITH_PREFIX} con {B_DEF_ABILITY}!"),
    [STRINGID_ATTACKERACQUIREDABILITY]              = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha adquirido {B_LAST_ABILITY}!"),
    [STRINGID_TARGETABILITYSTATLOWER]               = COMPOUND_STRING("¡{B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX} ha disminuido su {B_BUFF1}!"),
    [STRINGID_TARGETSTATWONTGOHIGHER]               = COMPOUND_STRING("¡{B_BUFF1} de {B_DEF_NAME_WITH_PREFIX} no puede aumentar más!"),
    [STRINGID_PKMNMOVEBOUNCEDABILITY]               = COMPOUND_STRING("¡Se ha devuelto el movimiento {B_CURRENT_MOVE} de {B_ATK_NAME_WITH_PREFIX} por {B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_IMPOSTERTRANSFORM]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha transformado en {B_DEF_NAME_WITH_PREFIX} usando {B_LAST_ABILITY}!"),
    [STRINGID_ASSAULTVESTDOESNTALLOW]               = COMPOUND_STRING("¡El efecto de {B_LAST_ITEM} impide la ejecución de movimientos de estado.\p"),
    [STRINGID_GRAVITYPREVENTSUSAGE]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede usar {B_CURRENT_MOVE} debido a la fuerza de la gravedad!\p"),
    [STRINGID_HEALBLOCKPREVENTSUSAGE]               = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede curarse debido a Anticura!\p"),
    [STRINGID_NOTDONEYET]                           = COMPOUND_STRING("¡El efecto de este movimiento no está programado aún!"),
    [STRINGID_STICKYWEBUSED]                        = COMPOUND_STRING("¡Una red viscosa se extiende a los pies del equipo {B_DEF_TEAM2}!"),
    [STRINGID_QUASHSUCCESS]                         = COMPOUND_STRING("¡El movimiento de {B_ATK_NAME_WITH_PREFIX} ha sido aplazado!"),
    [STRINGID_PKMNBLEWAWAYTOXICSPIKES]              = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha retirado las púas tóxicas!"),
    [STRINGID_PKMNBLEWAWAYSTICKYWEB]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha retirado la red viscosa!"),
    [STRINGID_PKMNBLEWAWAYSTEALTHROCK]              = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha retirado las piedras puntiagudas!"),
    [STRINGID_IONDELUGEON]                          = COMPOUND_STRING("¡Una lluvia de electrones cae sobre el terreno de combate!"),
    [STRINGID_TOPSYTURVYSWITCHEDSTATS]              = COMPOUND_STRING("¡Se han invertido los cambios en las características de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_TERRAINBECOMESMISTY]                  = COMPOUND_STRING("¡La niebla ha envuelto el terreno de combate!"),
    [STRINGID_TERRAINBECOMESGRASSY]                 = COMPOUND_STRING("¡El terreno de combate se ha cubierto de hierba!"),
    [STRINGID_TERRAINBECOMESELECTRIC]               = COMPOUND_STRING("¡Se ha formado un campo de corriente eléctrica en el terreno de combate!"),
    [STRINGID_TERRAINBECOMESPSYCHIC]                = COMPOUND_STRING("¡El terreno de combate se ha vuelto muy extraño!"),
    [STRINGID_TARGETELECTRIFIED]                    = COMPOUND_STRING("¡Electrificación hace que el siguiente movimiento de {B_DEF_NAME_WITH_PREFIX} sea de tipo Eléctrico!"),
    [STRINGID_MEGAEVOREACTING]                      = COMPOUND_STRING("¡{B_LAST_ITEM} de {B_ATK_NAME_WITH_PREFIX} reacciona ante el Mega Aro de {B_ATK_TRAINER_NAME}!"), //realmente muestra el tipo de Mega Anillo en el inventario, pero no lo implementamos :(
    [STRINGID_MEGAEVOEVOLVED]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha evolucionado a Mega-{B_BUFF1}!"),
    [STRINGID_DRASTICALLY]                          = gText_drastically,
    [STRINGID_SEVERELY]                             = gText_severely,
    [STRINGID_INFESTATION]                          = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} es presa del acoso de {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_NOEFFECTONTARGET]                     = COMPOUND_STRING("¡Pero no ha tenido ningún efecto en {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_BURSTINGFLAMESHIT]                    = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha resultado herido por un mar de llamas!"),
    [STRINGID_BESTOWITEMGIVING]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ha recibido {B_LAST_ITEM} de {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_THIRDTYPEADDED]                       = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} ahora también es de tipo {B_BUFF1}!"),
    [STRINGID_FELLFORFEINT]                         = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se ha dejado engañar por Amago!"),
    [STRINGID_POKEMONCANNOTUSEMOVE]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede usar {B_CURRENT_MOVE}!"),
    [STRINGID_COVEREDINPOWDER]                      = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} está cubierto de polvo!"),
    [STRINGID_POWDEREXPLODES]                       = COMPOUND_STRING("¡El polvo ha reaccionado con las llamas y ha explotado!"),
    [STRINGID_BELCHCANTSELECT]                      = COMPOUND_STRING("El Pokémon no puede ejecutar este movimiento, ya que no ha comido ninguna baya.\p"),
    [STRINGID_SPECTRALTHIEFSTEAL]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se ha apropiado de las mejoras en las características del rival!"),
    [STRINGID_GRAVITYGROUNDING]                     = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} no ha podido mantenerse en el aire debido al efecto de la gravedad!"),
    [STRINGID_MISTYTERRAINPREVENTS]                 = COMPOUND_STRING("¡El campo de niebla ha protegido a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_GRASSYTERRAINHEALS]                   = COMPOUND_STRING("¡El campo de hierba ha curado a {B_ATK_NAME_WITH_PREFIX}"),
    [STRINGID_ELECTRICTERRAINPREVENTS]              = COMPOUND_STRING("¡El campo eléctrico ha protegido a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PSYCHICTERRAINPREVENTS]               = COMPOUND_STRING("¡El campo psíquico ha protegido a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_SAFETYGOGGLESPROTECTED]               = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} no es afectado gracias a {B_LAST_ITEM}!"),
    [STRINGID_FLOWERVEILPROTECTED]                  = COMPOUND_STRING("¡Velo Flor ha protegido a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_SWEETVEILPROTECTED]                   = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} no se ha dormido debido al efecto de Velo Dulce!"),
    [STRINGID_AROMAVEILPROTECTED]                   = COMPOUND_STRING("¡Velo Aroma ha protegido a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_CELEBRATEMESSAGE]                     = COMPOUND_STRING("¡Felicidades, {B_PLAYER_NAME}!"),
    [STRINGID_USEDINSTRUCTEDMOVE]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} repite su último movimiento por {B_BUFF1}!"),
    [STRINGID_THROATCHOPENDS]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ya puede volver a usar movimientos sonoros!"),
    [STRINGID_PKMNCANTUSEMOVETHROATCHOP]            = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} no puede usar {B_CURRENT_MOVE} porque está amordazado!\p"),
    [STRINGID_LASERFOCUS]                           = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} agudiza la mente!"),
    [STRINGID_GEMACTIVATES]                         = COMPOUND_STRING("¡{B_LAST_ITEM} refuerza el poder de {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_BERRYDMGREDUCES]                      = COMPOUND_STRING("¡{B_LAST_ITEM} ha debilitado el daño hecho a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_AIRBALLOONFLOAT]                      = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} está flotando con un globo!"),
    [STRINGID_AIRBALLOONPOP]                        = COMPOUND_STRING("¡Ha explotado el {B_LAST_ITEM} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_INCINERATEBURN]                       = COMPOUND_STRING("¡{B_LAST_ITEM} de {B_EFF_NAME_WITH_PREFIX} se ha quemado!"),
    [STRINGID_BUGBITE]                              = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha robado y se ha comido {B_LAST_ITEM} de {B_EFF_NAME_WITH_PREFIX}!"),
    [STRINGID_ILLUSIONWOREOFF]                      = COMPOUND_STRING("¡La ilusión de {B_DEF_NAME_WITH_PREFIX} se ha desvanecido!"),
    [STRINGID_ATTACKERCUREDTARGETSTATUS]            = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha curado el problema de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_ATTACKERLOSTFIRETYPE]                 = COMPOUND_STRING("¡El fuego interior de {B_ATK_NAME_WITH_PREFIX} se ha extinguido!"),
    [STRINGID_HEALERCURE]                           = COMPOUND_STRING("¡{B_LAST_ABILITY} de {B_ATK_NAME_WITH_PREFIX} ha curado el problema de {B_SCR_NAME_WITH_PREFIX}!"),
    [STRINGID_SCRIPTINGABILITYSTATRAISE]            = COMPOUND_STRING("{B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} aumentó su {B_BUFF1}!"),
    [STRINGID_RECEIVERABILITYTAKEOVER]              = COMPOUND_STRING("¡La {B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} fue tomada!"),
    [STRINGID_PKNMABSORBINGPOWER]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} está absorbiendo energía!"),
    [STRINGID_NOONEWILLBEABLETORUNAWAY]             = COMPOUND_STRING("¡Nadie podrá huir durante el próximo turno!"),
    [STRINGID_DESTINYKNOTACTIVATES]                 = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se ha enamorado debido a {B_LAST_ITEM}!"),
    [STRINGID_CLOAKEDINAFREEZINGLIGHT]              = COMPOUND_STRING("¡Una luz fría envuelve a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_CLEARAMULETWONTLOWERSTATS]            = COMPOUND_STRING("¡El {B_LAST_ITEM} de {B_SCR_NAME_WITH_PREFIX} evita que sus estadísticas sean reducidas!"),
    [STRINGID_FERVENTWISHREACHED]                   = COMPOUND_STRING("¡El ruego vehemente de {B_ATK_TRAINER_NAME} alcanza a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_AIRLOCKACTIVATES]                     = COMPOUND_STRING("¡Las misteriosas turbulencias protegen a los Pokémon de tipo Volador!"),
    [STRINGID_PRESSUREENTERS]                       = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ejerce presión!"),
    [STRINGID_DARKAURAENTERS]                       = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} irradia un aura oscura!"),
    [STRINGID_FAIRYAURAENTERS]                      = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} irradia un aura feérica!"),
    [STRINGID_AURABREAKENTERS]                      = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha invertido todas las auras!"),
    [STRINGID_COMATOSEENTERS]                       = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} está sumido en un profundo letargo!"),
    [STRINGID_SCREENCLEANERENTERS]                  = COMPOUND_STRING("¡Todas las pantallas se han disipado!"),
    [STRINGID_FETCHEDPOKEBALL]                      = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} ha encontrado {B_LAST_ITEM}!"),
    [STRINGID_BATTLERABILITYRAISEDSTAT]             = COMPOUND_STRING("¡La {B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} aumentó su {B_BUFF1}!"),
    [STRINGID_ASANDSTORMKICKEDUP]                   = COMPOUND_STRING("¡Se ha desatado una tormenta de arena!"),
    [STRINGID_PKMNSWILLPERISHIN3TURNS]              = COMPOUND_STRING("¡Ambos Pokémon se debilitarán dentro de tres turnos!"),  //No creo que este mensaje se muestre más
    [STRINGID_ABILITYRAISEDSTATDRASTICALLY]         = COMPOUND_STRING("¡{B_DEF_ABILITY} ha aumentado mucho {B_BUFF1} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_AURAFLAREDTOLIFE]                     = COMPOUND_STRING("¡El aura de {B_DEF_NAME_WITH_PREFIX} cobró vida!"),
    [STRINGID_ASONEENTERS]                          = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} tiene dos habilidades!"),
    [STRINGID_CURIOUSMEDICINEENTERS]                = COMPOUND_STRING("¡Los cambios de estadísticas de {B_EFF_NAME_WITH_PREFIX} se han restablecido!"),
    [STRINGID_CANACTFASTERTHANKSTO]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} puede actuar más rápido gracias a {B_BUFF1}!"),
    [STRINGID_MICLEBERRYACTIVATES]                  = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} mejoró la precisión de su próximo movimiento usando {B_LAST_ITEM}!"),
    [STRINGID_PKMNSHOOKOFFTHETAUNT]                 = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} se olvidó de la provocación!"),
    [STRINGID_PKMNGOTOVERITSINFATUATION]            = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} superó su enamoramiento!"),
    [STRINGID_ITEMCANNOTBEREMOVED]                  = COMPOUND_STRING("¡No se puede quitar el objeto de {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_STICKYBARBTRANSFER]                   = COMPOUND_STRING("¡{B_LAST_ITEM} se adhirió a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNBURNHEALED]                       = COMPOUND_STRING("La quemadura de {B_DEF_NAME_WITH_PREFIX} fue curada."),
    [STRINGID_REDCARDACTIVATE]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} levantó su Tarjeta Roja contra {B_ATK_NAME_WITH_PREFIX}."),
    [STRINGID_EJECTBUTTONACTIVATE]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} es cambiado con el {B_LAST_ITEM}."),
    [STRINGID_ATKGOTOVERINFATUATION]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} superó su enamoramiento."),
    [STRINGID_TORMENTEDNOMORE]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ya no está atormentado."),
    [STRINGID_HEALBLOCKEDNOMORE]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} se desató de su bloqueo de curación."),
    [STRINGID_ATTACKERBECAMEFULLYCHARGED]           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} se cargó completamente gracias a su vínculo con su entrenador.\p"),
    [STRINGID_ATTACKERBECAMEASHSPECIES]             = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} se convirtió en Ash-Greninja.\p"),
    [STRINGID_EXTREMELYHARSHSUNLIGHT]               = COMPOUND_STRING("¡La luz del sol se volvió extremadamente intensa!"),
    [STRINGID_EXTREMESUNLIGHTFADED]                 = COMPOUND_STRING("La luz solar extrema se desvaneció."),
    [STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT]     = COMPOUND_STRING("El ataque de tipo Agua se evaporó bajo la luz solar intensa."),
    [STRINGID_EXTREMELYHARSHSUNLIGHTWASNOTLESSENED] = COMPOUND_STRING("La luz solar extremadamente intensa no se debilitó en absoluto."),
    [STRINGID_HEAVYRAIN]                            = COMPOUND_STRING("¡Comenzó a caer una intensa lluvia!"),
    [STRINGID_HEAVYRAINLIFTED]                      = COMPOUND_STRING("¡La intensa lluvia ha cesado!"),
    [STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN]         = COMPOUND_STRING("¡El ataque de tipo Fuego se disipó en la fuerte lluvia!"),
    [STRINGID_NORELIEFROMHEAVYRAIN]                 = COMPOUND_STRING("¡No hay alivio de esta intensa lluvia!"),
    [STRINGID_MYSTERIOUSAIRCURRENT]                 = COMPOUND_STRING("¡Una corriente de aire misteriosa protege a los Pokémon de tipo Volador!"),
    [STRINGID_STRONGWINDSDISSIPATED]                = COMPOUND_STRING("¡Los fuertes vientos misteriosos se han disipado!"),
    [STRINGID_MYSTERIOUSAIRCURRENTBLOWSON]          = COMPOUND_STRING("¡La corriente de aire misteriosa sopla sin importar qué!"),
    [STRINGID_ATTACKWEAKENEDBSTRONGWINDS]           = COMPOUND_STRING("¡Los fuertes vientos misteriosos han debilitado el ataque!"),
    [STRINGID_STUFFCHEEKSCANTSELECT]                = COMPOUND_STRING("¡Mejillas llenas no se pueden seleccionar sin una Baya!\p"),
    [STRINGID_PKMNREVERTEDTOPRIMAL]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX}'s Reversión Primigenia. ¡Ha vuelto a su forma primigenia!"),
    [STRINGID_BUTPOKEMONCANTUSETHEMOVE]             = COMPOUND_STRING("Pero {B_ATK_NAME_WITH_PREFIX} no puede usar el movimiento."),
    [STRINGID_BUTHOOPACANTUSEIT]                    = COMPOUND_STRING("¡Pero Hoopa no puede usarlo de la forma en que está ahora!"),
    [STRINGID_BROKETHROUGHPROTECTION]               = COMPOUND_STRING("¡Rompió la protección del {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_ABILITYALLOWSONLYMOVE]                = COMPOUND_STRING("{B_ATK_ABILITY} permite el uso solo de {B_CURRENT_MOVE}!\p"),
    [STRINGID_SWAPPEDABILITIES]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} intercambió habilidades con su objetivo."),
    [STRINGID_PASTELVEILPROTECTED]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} está protegido por un velo pastel!"),
    [STRINGID_PASTELVEILENTERS]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} se curó de su envenenamiento."),
    [STRINGID_BATTLERTYPECHANGEDTO]                 = COMPOUND_STRING("¡El tipo de {B_SCR_NAME_WITH_PREFIX} ha cambiado a {B_BUFF1}!"),
    [STRINGID_BOTHCANNOLONGERESCAPE]                = COMPOUND_STRING("¡Ningún Pokémon puede huir!"),
    [STRINGID_CANTESCAPEDUETOUSEDMOVE]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ya no puede huir porque usó {B_CURRENT_MOVE}."),
    [STRINGID_PKMNBECAMEWEAKERTOFIRE]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} se volvió más débil contra el fuego."),
    [STRINGID_ABOUTTOUSEPOLTERGEIST]                = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} está a punto de ser atacado por su {B_BUFF1}."),
    [STRINGID_CANTESCAPEBECAUSEOFCURRENTMOVE]       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ya no puede huir a causa de {B_CURRENT_MOVE}."),
    [STRINGID_NEUTRALIZINGGASENTERS]                = COMPOUND_STRING("Un Gas Neutralizante llenó la zona."),
    [STRINGID_NEUTRALIZINGGASOVER]                  = COMPOUND_STRING("Los efectos del Gas Neutralizante se disiparon."),
    [STRINGID_TARGETTOOHEAVY]                       = COMPOUND_STRING("¡Pero el objetivo era demasiado pesado!"),
    [STRINGID_PKMNTOOKTARGETHIGH]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} levantó a {B_DEF_NAME_WITH_PREFIX} al aire."),
    [STRINGID_PKMNINSNAPTRAP]                       = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} fue atrapado por un cepo!"),
    [STRINGID_METEORBEAMCHARGING]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} está rebosante de energía espacial."),
    [STRINGID_HEATUPBEAK]                           = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} comenzó a calentar su pico!"),
    [STRINGID_COURTCHANGE]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha intercambiado los efectos del campo!"),
    [STRINGID_ZPOWERSURROUNDS]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} se rodea de su Poder Z."),
    [STRINGID_ZMOVEUNLEASHED]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} desata su movimiento Z a toda potencia."),
    [STRINGID_ZMOVERESETSSTATS]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} devuelve sus estadísticas a la normalidad con su Poder Z."),
    [STRINGID_ZMOVEALLSTATSUP]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} aumentó todas sus estadísticas usando su Poder Z."),
    [STRINGID_ZMOVEZBOOSTCRIT]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} aumentó su relación de golpes críticos usando su Poder Z."),
    [STRINGID_ZMOVERESTOREHP]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} restauró sus PS usando su Poder Z."),
    [STRINGID_ZMOVESTATUP]                          = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} aumentó sus estadísticas usando su Poder Z."),
    [STRINGID_ZMOVEHPTRAP]                          = COMPOUND_STRING("¡La salud de {B_SCR_NAME_WITH_PREFIX} fue restaurada por el Poder Z!"),
    [STRINGID_ATTACKEREXPELLEDTHEPOISON]            = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} logró desprenderse del veneno."),
    [STRINGID_ATTACKERSHOOKITSELFAWAKE]             = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} se sacudió para despertarse."),
    [STRINGID_ATTACKERBROKETHROUGHPARALYSIS]        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} reunió toda su energía para superar su parálisis."),
    [STRINGID_ATTACKERHEALEDITSBURN]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} curó su quemadura con pura determinación."),
    [STRINGID_ATTACKERMELTEDTHEICE]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} derritió el hielo con su ardiente determinación."),
    [STRINGID_TARGETTOUGHEDITOUT]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} resistió para mostrarte su mejor lado."),
    [STRINGID_ATTACKERLOSTELECTRICTYPE]             = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} agotó toda su electricidad."),
    [STRINGID_ATTACKERSWITCHEDSTATWITHTARGET]       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} intercambió {B_BUFF1} con su objetivo."),
    [STRINGID_BEINGHITCHARGEDPKMNWITHPOWER]         = COMPOUND_STRING("Al ser alcanzado por {B_CURRENT_MOVE}, {B_DEF_NAME_WITH_PREFIX} se cargó de poder."),
    [STRINGID_SUNLIGHTACTIVATEDABILITY]             = COMPOUND_STRING("La luz del sol activó la habilidad {B_LAST_ABILITY} de {B_SCR_NAME_WITH_PREFIX}."),
    [STRINGID_STATWASHEIGHTENED]                    = COMPOUND_STRING("¡{B_BUFF1} de {B_SCR_NAME_WITH_PREFIX} aumentó!"),
    [STRINGID_ELECTRICTERRAINACTIVATEDABILITY]      = COMPOUND_STRING("El Terreno Eléctrico activó la habilidad {B_LAST_ABILITY} de {B_SCR_NAME_WITH_PREFIX}."),
    [STRINGID_ABILITYWEAKENEDSURROUNDINGMONSSTAT]   = COMPOUND_STRING("La habilidad {B_ATK_ABILITY} de {B_ATK_NAME_WITH_PREFIX} debilitó el {B_BUFF1} de todos los Pokémon cercanos.\p"),
    [STRINGID_ATTACKERGAINEDSTRENGTHFROMTHEFALLEN]  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ganó fuerza de los caídos."),
    [STRINGID_PKMNSABILITYPREVENTSABILITY] = COMPOUND_STRING("¡La {B_SCR_ABILITY} de {B_SCR_NAME_WITH_PREFIX} impide que la {B_DEF_ABILITY} de {B_DEF_NAME_WITH_PREFIX2} funcione!"), // En gen 5+, no existe popup de habilidad
    [STRINGID_PREPARESHELLTRAP]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} colocó una Trampa Concha!"),
    [STRINGID_SHELLTRAPDIDNTWORK]                   = COMPOUND_STRING("Trampa de concha de {B_ATK_NAME_WITH_PREFIX} no funcionó."),
    [STRINGID_SPIKESDISAPPEAREDFROMTEAM]            = COMPOUND_STRING("¡Las puás desaparecieron del suelo alrededor de {B_ATK_TEAM2} equipo!"),
    [STRINGID_TOXICSPIKESDISAPPEAREDFROMTEAM]       = COMPOUND_STRING("¡Las puás tóxicas desaparecieron del suelo alrededor de {B_ATK_TEAM2} equipo!"),
    [STRINGID_STICKYWEBDISAPPEAREDFROMTEAM]         = COMPOUND_STRING("¡La telaraña desapareció del suelo alrededor de {B_ATK_TEAM2} equipo!"),
    [STRINGID_STEALTHROCKDISAPPEAREDFROMTEAM]       = COMPOUND_STRING("¡Las piedras desaparecieron de alrededor {B_ATK_TEAM2} equipo!"),
    [STRINGID_COULDNTFULLYPROTECT]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} no pudo protegerse totalmente y resultó herido."),
    [STRINGID_STOCKPILEDEFFECTWOREOFF]              = COMPOUND_STRING("¡El efecto acumulado de {B_ATK_NAME_WITH_PREFIX} caducó!"),
    [STRINGID_PKMNREVIVEDREADYTOFIGHT]              = COMPOUND_STRING("{B_BUFF1} fue revivido y está listo para luchar de nuevo."),
    [STRINGID_ITEMRESTOREDSPECIESHEALTH]            = COMPOUND_STRING("{B_BUFF1} recuperó sus puntos de salud."),
    [STRINGID_ITEMCUREDSPECIESSTATUS]               = COMPOUND_STRING("{B_BUFF1} sanó de su estado alterado."),
    [STRINGID_ITEMRESTOREDSPECIESPP]                = COMPOUND_STRING("{B_BUFF1} recuperó sus puntos de poder."),
    [STRINGID_THUNDERCAGETRAPPED]                   = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} atrapó a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNHURTBYFROSTBITE]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se hirió por la congelación!"),
    [STRINGID_PKMNGOTFROSTBITE]                     = COMPOUND_STRING("¡{B_EFF_NAME_WITH_PREFIX} se congeló!"),
    [STRINGID_PKMNSITEMHEALEDFROSTBITE]             = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} se descongeló con {B_LAST_ITEM}!"),
    [STRINGID_ATTACKERHEALEDITSFROSTBITE]           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} curó su congelación con pura determinación."),
    [STRINGID_PKMNFROSTBITEHEALED]                  = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se descongeló!"),
    [STRINGID_PKMNFROSTBITEHEALED2]                 = COMPOUND_STRING("¡{B_DEF_NAME_WITH_PREFIX} se descongeló!"),
    [STRINGID_PKMNFROSTBITEHEALEDBY]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} su {B_CURRENT_MOVE} lo descongeló!"),
    [STRINGID_MIRRORHERBCOPIED]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} usó su {B_LAST_ITEM} para copiar los cambios de estadísticas de su oponente."),
    [STRINGID_STARTEDSNOW]                          = COMPOUND_STRING("¡Ha empezado a nevar!"),
    [STRINGID_SNOWCONTINUES]                        = COMPOUND_STRING("Sigue nevando…"), //no en gen 5+ (lol)
    [STRINGID_SNOWSTOPPED]                          = COMPOUND_STRING("Ha dejado de nevar."),
    [STRINGID_SNOWWARNINGSNOW]                      = COMPOUND_STRING("¡Ha empezado a nevar!"),
    [STRINGID_PKMNITEMMELTED]                       = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} ha corroído el objeto {B_LAST_ITEM} de {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_ULTRABURSTREACTING]                   = COMPOUND_STRING("Una luz brillante está a punto de estallar en {B_ATK_NAME_WITH_PREFIX}."),
    [STRINGID_ULTRABURSTCOMPLETED]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} recuperó su verdadero poder a través de Ultraexplosión."),
    [STRINGID_TEAMGAINEDEXP]                        = COMPOUND_STRING("¡El resto de tu equipo ganó EXP. ¡Puntos gracias a Repartir Exp.!\p"),
    [STRINGID_CURRENTMOVECANTSELECT]                = COMPOUND_STRING("{B_BUFF1} no puede ser usado.\p"),
    [STRINGID_TARGETISBEINGSALTCURED]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} está siendo curado con sal."),
    [STRINGID_TARGETISHURTBYSALTCURE]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} resulta herido por {B_BUFF1}."),
    [STRINGID_TARGETCOVEREDINSTICKYCANDYSYRUP]      = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} quedó cubierto de sirope."),
    [STRINGID_SHARPSTEELFLOATS]                     = COMPOUND_STRING("¡Afilado acero flota alrededor del equipo {B_DEF_TEAM2}!"),
    [STRINGID_SHARPSTEELDMG]                        = COMPOUND_STRING("¡El acero afilado mordió a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNBLEWAWAYSHARPSTEEL]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} disipó el acero afilado."),
    [STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM]        = COMPOUND_STRING("¡El acero afilado desapareció del suelo alrededor del equipo {B_ATK_TEAM2}!"),
    [STRINGID_TEAMTRAPPEDWITHVINES]                 = COMPOUND_STRING("¡El equipo {B_DEF_TEAM1} quedó atrapado con enredaderas!"),
    [STRINGID_PKMNHURTBYVINES]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} resulta herido por el latigazo enredador de G-Max."),
    [STRINGID_TEAMCAUGHTINVORTEX]                   = COMPOUND_STRING("¡El equipo {B_DEF_TEAM1} quedó atrapado en un remolino de agua!"),
    [STRINGID_PKMNHURTBYVORTEX]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} resulta herido por el cañonazo de G-Max."),
    [STRINGID_TEAMSURROUNDEDBYFIRE]                 = COMPOUND_STRING("¡El equipo {B_DEF_TEAM1} quedó atrapado entre llamas!"),
    [STRINGID_PKMNBURNINGUP]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} arde en las llamas de G-Max."),
    [STRINGID_TEAMSURROUNDEDBYROCKS]                = COMPOUND_STRING("¡El equipo {B_DEF_TEAM1} quedó atrapado entre rocas!"),
    [STRINGID_PKMNHURTBYROCKSTHROWN]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} resulta herido por las rocas lanzadas por G-Max."),
    [STRINGID_MOVEBLOCKEDBYDYNAMAX]                 = COMPOUND_STRING("El movimiento fue bloqueado por el poder de Dynamax."),
    [STRINGID_ZEROTOHEROTRANSFORMATION]             = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} experimentó una transformación heroica!"),
    [STRINGID_THETWOMOVESBECOMEONE]                 = COMPOUND_STRING("¡Los dos movimientos se fusionan! ¡Es un movimiento combinado!{PAUSE 16}"),
    [STRINGID_ARAINBOWAPPEAREDONSIDE]               = COMPOUND_STRING("Apareció un arco iris en el cielo del equipo {B_ATK_TEAM2}."),
    [STRINGID_THERAINBOWDISAPPEARED]                = COMPOUND_STRING("El arco iris en el equipo {B_ATK_TEAM2} desapareció."),
    [STRINGID_WAITINGFORPARTNERSMOVE]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} está esperando el movimiento de {B_ATK_PARTNER_NAME}...{PAUSE 16}"),
    [STRINGID_SEAOFFIREENVELOPEDSIDE]               = COMPOUND_STRING("Un mar de fuego envolvió al equipo {B_DEF_TEAM2}."),
    [STRINGID_HURTBYTHESEAOFFIRE]                   = COMPOUND_STRING("{B_ATK_TEAM1} {B_ATK_NAME_WITH_PREFIX} resultó herido por el mar de fuego."),
    [STRINGID_THESEAOFFIREDISAPPEARED]              = COMPOUND_STRING("El mar de fuego alrededor del equipo {B_ATK_TEAM2} desapareció."),
    [STRINGID_SWAMPENVELOPEDSIDE]                   = COMPOUND_STRING("Un pantano envolvió al equipo {B_DEF_TEAM2}."),
    [STRINGID_THESWAMPDISAPPEARED]                  = COMPOUND_STRING("El pantano alrededor del equipo {B_ATK_TEAM2} desapareció."),
    [STRINGID_PKMNTELLCHILLINGRECEPTIONJOKE]        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} se prepara para contar un chiste escalofriantemente malo."),
    [STRINGID_HOSPITALITYRESTORATION]               = COMPOUND_STRING("¡{B_ATK_PARTNER_NAME} se bebió todo el té que {B_SCR_NAME_WITH_PREFIX2} preparó!"),
    [STRINGID_ELECTROSHOTCHARGING]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} absorbió la electricidad!"),
    [STRINGID_ITEMWASUSEDUP]                        = COMPOUND_STRING("{B_LAST_ITEM} ya no quedan..."),
    [STRINGID_ATTACKERLOSTITSTYPE]                  = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} perdió su tipo {B_BUFF1}!"),
    [STRINGID_SHEDITSTAIL]                          = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se deshizo de su cola para crear un señuelo!"),
	[STRINGID_CLOAKEDINAHARSHLIGHT]                 = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se envolvió en una luz cegadora!"),
    [STRINGID_SUPERSWEETAROMAWAFTS]                 = COMPOUND_STRING("Un aroma superdulce se desprende del jarabe que cubre a {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_DIMENSIONSWERETWISTED]                = COMPOUND_STRING("Se han alterado las dimensiones!"),
    [STRINGID_BIZARREARENACREATED]                  = COMPOUND_STRING("¡Se ha creado una zona extraña! ¡Los objetos equipados perdieron sus efectos!"),
    [STRINGID_BIZARREAREACREATED]                   = COMPOUND_STRING("¡Se ha creado una zona extraña en la que la defensa y defensa especial se intercambian!"),
    [STRINGID_TIDYINGUPCOMPLETE]                    = COMPOUND_STRING("¡Limpieza completada!"),
    [STRINGID_PKMNTERASTALLIZEDINTO]                = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se teracristalizó  en el tipo {B_BUFF1}!"),
    [STRINGID_BOOSTERENERGYACTIVATES]               = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} usó su {B_LAST_ITEM} para activar {B_SCR_ABILITY}!"),
    [STRINGID_FOGCREPTUP]                           = COMPOUND_STRING("¡Una niebla tan espesa como la sopa apareció!"),
    [STRINGID_FOGISDEEP]                            = COMPOUND_STRING("La niebla es densa…"),
    [STRINGID_FOGLIFTED]                            = COMPOUND_STRING("La niebla se disipó."),
    [STRINGID_PKMNMADESHELLGLEAM]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hizo brillar su caparazón! ¡Está distorsionando las compatibilidades de tipos!"),
    [STRINGID_FICKLEBEAMDOUBLED]                    = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} va con todo con este ataque!"),
    [STRINGID_COMMANDERACTIVATES]                   = COMPOUND_STRING("¡{B_SCR_NAME_WITH_PREFIX} fue tragado por Dondozo y se convirtió en el comandante!"),
    [STRINGID_POKEFLUTECATCHY]                      = COMPOUND_STRING("¡{B_PLAYER_NAME} tocó la {B_LAST_ITEM}.\p¡Esa es una melodía pegadiza!"),
    [STRINGID_POKEFLUTE]                            = COMPOUND_STRING("¡{B_PLAYER_NAME} tocó la {B_LAST_ITEM}."),
    [STRINGID_MONHEARINGFLUTEAWOKE]                 = COMPOUND_STRING("¡El Pokémon que escuchó la flauta despertó!"),
    [STRINGID_SUNLIGHTISHARSH]                      = COMPOUND_STRING("¡La luz del sol es intensa!"),
    [STRINGID_ITISHAILING]                          = COMPOUND_STRING("¡Está granizando!"),
    [STRINGID_ITISSNOWING]                          = COMPOUND_STRING("¡Está nevando!"),
    [STRINGID_ISCOVEREDWITHGRASS]                   = COMPOUND_STRING("¡El campo de batalla está cubierto de hierba!"),
    [STRINGID_MISTSWIRLSAROUND]                     = COMPOUND_STRING("¡Una niebla gira alrededor del campo de batalla!"),
    [STRINGID_ELECTRICCURRENTISRUNNING]             = COMPOUND_STRING("¡Una corriente eléctrica recorre el campo de batalla!"),
    [STRINGID_SEEMSWEIRD]                           = COMPOUND_STRING("¡El campo de batalla parece extraño!"),
    [STRINGID_WAGGLINGAFINGER]                      = COMPOUND_STRING("¡Moviendo un dedo usó {B_CURRENT_MOVE}!"),
    [STRINGID_BLOCKEDBYSLEEPCLAUSE]                 = COMPOUND_STRING("¡La cláusula del sueño mantuvo despierto a {B_DEF_NAME_WITH_PREFIX}!"),
    [STRINGID_SUPEREFFECTIVETWOFOES]                = COMPOUND_STRING("¡Es muy eficaz contra {B_DEF_NAME_WITH_PREFIX} y {B_DEF_PARTNER_NAME}!"),
    [STRINGID_NOTVERYEFFECTIVETWOFOES]              = COMPOUND_STRING("No es muy eficaz contra {B_DEF_NAME_WITH_PREFIX} y {B_DEF_PARTNER_NAME}…"),
    [STRINGID_ITDOESNTAFFECTTWOFOES]                = COMPOUND_STRING("No afecta a {B_DEF_NAME_WITH_PREFIX} ni a {B_DEF_PARTNER_NAME}…"),
    [STRINGID_SENDCAUGHTMONPARTYORBOX]              = COMPOUND_STRING("¿Quieres añadir a {B_DEF_NAME} al equipo?"),
    [STRINGID_PKMNSENTTOPCAFTERCATCH]               = gText_PkmnSentToPCAfterCatch,
    [STRINGID_PKMNDYNAMAXED]                        = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} creció enormemente adoptando su forma Dinamax!"),
    [STRINGID_PKMNGIGANTAMAXED]                     = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} creció enormemente adoptando su forma Gigamax!"),
    [STRINGID_TIMETODYNAMAX]                        = COMPOUND_STRING("¡Es hora de Dinamaxizar!"),
    [STRINGID_TIMETOGIGANTAMAX]                     = COMPOUND_STRING("¡Es hora de Gigamaxizar!"),
    [STRINGID_QUESTIONFORFEITBATTLE]                = COMPOUND_STRING("¿Quieres rendirte y abandonar el combate ahora? Abandonar el combate cuenta como una derrota."),
    [STRINGID_POWERCONSTRUCTPRESENCEOFMANY]         = COMPOUND_STRING("¡Sientes la presencia de muchos!"),
    [STRINGID_POWERCONSTRUCTTRANSFORM]              = COMPOUND_STRING("¡{B_ATK_NAME_WITH_PREFIX} se transformó en su Forma Completa!"),
    [STRINGID_ABILITYSHIELDPROTECTS]                = COMPOUND_STRING("¡La habilidad de {B_ATK_NAME_WITH_PREFIX} está protegida por los efectos de su {B_LAST_ITEM}!"),
};

const u16 gTrainerUsedItemStringIds[] =
{
    STRINGID_PLAYERUSEDITEM, STRINGID_TRAINER1USEDITEM
};

const u16 gZEffectStringIds[] =
{
    [B_MSG_Z_RESET_STATS] = STRINGID_ZMOVERESETSSTATS,
    [B_MSG_Z_ALL_STATS_UP]= STRINGID_ZMOVEALLSTATSUP,
    [B_MSG_Z_BOOST_CRITS] = STRINGID_ZMOVEZBOOSTCRIT,
    [B_MSG_Z_FOLLOW_ME]   = STRINGID_PKMNCENTERATTENTION,
    [B_MSG_Z_RECOVER_HP]  = STRINGID_ZMOVERESTOREHP,
    [B_MSG_Z_STAT_UP]     = STRINGID_ZMOVESTATUP,
    [B_MSG_Z_HP_TRAP]     = STRINGID_ZMOVEHPTRAP,
};

const u16 gMentalHerbCureStringIds[] =
{
    [B_MSG_MENTALHERBCURE_INFATUATION] = STRINGID_ATKGOTOVERINFATUATION,
    [B_MSG_MENTALHERBCURE_TAUNT]       = STRINGID_BUFFERENDS,
    [B_MSG_MENTALHERBCURE_ENCORE]      = STRINGID_PKMNENCOREENDED,
    [B_MSG_MENTALHERBCURE_TORMENT]     = STRINGID_TORMENTEDNOMORE,
    [B_MSG_MENTALHERBCURE_HEALBLOCK]   = STRINGID_HEALBLOCKEDNOMORE,
    [B_MSG_MENTALHERBCURE_DISABLE]     = STRINGID_PKMNMOVEDISABLEDNOMORE,
};

const u16 gStartingStatusStringIds[B_MSG_STARTING_STATUS_COUNT] =
{
    [B_MSG_TERRAIN_SET_MISTY]    = STRINGID_TERRAINBECOMESMISTY,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_TERRAINBECOMESELECTRIC,
    [B_MSG_TERRAIN_SET_PSYCHIC]  = STRINGID_TERRAINBECOMESPSYCHIC,
    [B_MSG_TERRAIN_SET_GRASSY]   = STRINGID_TERRAINBECOMESGRASSY,
    [B_MSG_SET_TRICK_ROOM]       = STRINGID_DIMENSIONSWERETWISTED,
    [B_MSG_SET_MAGIC_ROOM]       = STRINGID_BIZARREARENACREATED,
    [B_MSG_SET_WONDER_ROOM]      = STRINGID_BIZARREAREACREATED,
    [B_MSG_SET_TAILWIND]         = STRINGID_TAILWINDBLEW,
    [B_MSG_SET_RAINBOW]          = STRINGID_ARAINBOWAPPEAREDONSIDE,
    [B_MSG_SET_SEA_OF_FIRE]      = STRINGID_SEAOFFIREENVELOPEDSIDE,
    [B_MSG_SET_SWAMP]            = STRINGID_SWAMPENVELOPEDSIDE,
};

const u16 gTerrainStringIds[B_MSG_TERRAIN_COUNT] =
{
    [B_MSG_TERRAIN_SET_MISTY] = STRINGID_TERRAINBECOMESMISTY,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_TERRAINBECOMESELECTRIC,
    [B_MSG_TERRAIN_SET_PSYCHIC] = STRINGID_TERRAINBECOMESPSYCHIC,
    [B_MSG_TERRAIN_SET_GRASSY] = STRINGID_TERRAINBECOMESGRASSY,
    [B_MSG_TERRAIN_END_MISTY] = STRINGID_MISTYTERRAINENDS,
    [B_MSG_TERRAIN_END_ELECTRIC] = STRINGID_ELECTRICTERRAINENDS,
    [B_MSG_TERRAIN_END_PSYCHIC] = STRINGID_PSYCHICTERRAINENDS,
    [B_MSG_TERRAIN_END_GRASSY] = STRINGID_GRASSYTERRAINENDS,
};

const u16 gTerrainPreventsStringIds[] =
{
    [B_MSG_TERRAINPREVENTS_MISTY]    = STRINGID_MISTYTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_ELECTRIC] = STRINGID_ELECTRICTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_PSYCHIC]  = STRINGID_PSYCHICTERRAINPREVENTS
};

const u16 gHealingWishStringIds[] =
{
    STRINGID_HEALINGWISHCAMETRUE,
    STRINGID_LUNARDANCECAMETRUE
};

const u16 gDmgHazardsStringIds[] =
{
    [B_MSG_PKMNHURTBYSPIKES]   = STRINGID_PKMNHURTBYSPIKES,
    [B_MSG_STEALTHROCKDMG]     = STRINGID_STEALTHROCKDMG,
    [B_MSG_SHARPSTEELDMG]      = STRINGID_SHARPSTEELDMG,
    [B_MSG_POINTEDSTONESFLOAT] = STRINGID_POINTEDSTONESFLOAT,
    [B_MSG_SPIKESSCATTERED]    = STRINGID_SPIKESSCATTERED,
    [B_MSG_SHARPSTEELFLOATS]   = STRINGID_SHARPSTEELFLOATS,
};

const u16 gSwitchInAbilityStringIds[] =
{
    [B_MSG_SWITCHIN_MOLDBREAKER] = STRINGID_MOLDBREAKERENTERS,
    [B_MSG_SWITCHIN_TERAVOLT] = STRINGID_TERAVOLTENTERS,
    [B_MSG_SWITCHIN_TURBOBLAZE] = STRINGID_TURBOBLAZEENTERS,
    [B_MSG_SWITCHIN_SLOWSTART] = STRINGID_SLOWSTARTENTERS,
    [B_MSG_SWITCHIN_UNNERVE] = STRINGID_UNNERVEENTERS,
    [B_MSG_SWITCHIN_ANTICIPATION] = STRINGID_ANTICIPATIONACTIVATES,
    [B_MSG_SWITCHIN_FOREWARN] = STRINGID_FOREWARNACTIVATES,
    [B_MSG_SWITCHIN_PRESSURE] = STRINGID_PRESSUREENTERS,
    [B_MSG_SWITCHIN_DARKAURA] = STRINGID_DARKAURAENTERS,
    [B_MSG_SWITCHIN_FAIRYAURA] = STRINGID_FAIRYAURAENTERS,
    [B_MSG_SWITCHIN_AURABREAK] = STRINGID_AURABREAKENTERS,
    [B_MSG_SWITCHIN_COMATOSE] = STRINGID_COMATOSEENTERS,
    [B_MSG_SWITCHIN_SCREENCLEANER] = STRINGID_SCREENCLEANERENTERS,
    [B_MSG_SWITCHIN_ASONE] = STRINGID_ASONEENTERS,
    [B_MSG_SWITCHIN_CURIOUS_MEDICINE] = STRINGID_CURIOUSMEDICINEENTERS,
    [B_MSG_SWITCHIN_PASTEL_VEIL] = STRINGID_PASTELVEILENTERS,
    [B_MSG_SWITCHIN_NEUTRALIZING_GAS] = STRINGID_NEUTRALIZINGGASENTERS,
};

const u16 gMissStringIds[] =
{
    [B_MSG_MISSED]      = STRINGID_ATTACKMISSED,
    [B_MSG_PROTECTED]   = STRINGID_PKMNPROTECTEDITSELF,
    [B_MSG_AVOIDED_ATK] = STRINGID_PKMNAVOIDEDATTACK,
    [B_MSG_AVOIDED_DMG] = STRINGID_AVOIDEDDAMAGE,
    [B_MSG_GROUND_MISS] = STRINGID_PKMNMAKESGROUNDMISS
};

const u16 gNoEscapeStringIds[] =
{
    [B_MSG_CANT_ESCAPE]          = STRINGID_CANTESCAPE,
    [B_MSG_DONT_LEAVE_BIRCH]     = STRINGID_DONTLEAVEBIRCH,
    [B_MSG_PREVENTS_ESCAPE]      = STRINGID_PREVENTSESCAPE,
    [B_MSG_CANT_ESCAPE_2]        = STRINGID_CANTESCAPE2,
    [B_MSG_ATTACKER_CANT_ESCAPE] = STRINGID_ATTACKERCANTESCAPE
};

const u16 gMoveWeatherChangeStringIds[] =
{
    [B_MSG_STARTED_RAIN]      = STRINGID_STARTEDTORAIN,
    [B_MSG_STARTED_DOWNPOUR]  = STRINGID_DOWNPOURSTARTED, // Unused
    [B_MSG_WEATHER_FAILED]    = STRINGID_BUTITFAILED,
    [B_MSG_STARTED_SANDSTORM] = STRINGID_SANDSTORMBREWED,
    [B_MSG_STARTED_SUNLIGHT]  = STRINGID_SUNLIGHTGOTBRIGHT,
    [B_MSG_STARTED_HAIL]      = STRINGID_STARTEDHAIL,
    [B_MSG_STARTED_SNOW]      = STRINGID_STARTEDSNOW,
    [B_MSG_STARTED_FOG]       = STRINGID_FOGCREPTUP, // Unused, can use for custom moves that set fog
};

const u16 gWeatherEndsStringIds[B_MSG_WEATHER_END_COUNT] =
{
    [B_MSG_WEATHER_END_RAIN]         = STRINGID_RAINSTOPPED,
    [B_MSG_WEATHER_END_SUN]          = STRINGID_SUNLIGHTFADED,
    [B_MSG_WEATHER_END_SANDSTORM]    = STRINGID_SANDSTORMSUBSIDED,
    [B_MSG_WEATHER_END_HAIL]         = STRINGID_HAILSTOPPED,
    [B_MSG_WEATHER_END_SNOW]         = STRINGID_SNOWSTOPPED,
    [B_MSG_WEATHER_END_FOG]          = STRINGID_FOGLIFTED,
    [B_MSG_WEATHER_END_STRONG_WINDS] = STRINGID_STRONGWINDSDISSIPATED,
};

const u16 gWeatherTurnStringIds[] =
{
    [B_MSG_WEATHER_TURN_RAIN]         = STRINGID_RAINCONTINUES,
    [B_MSG_WEATHER_TURN_DOWNPOUR]     = STRINGID_DOWNPOURCONTINUES,
    [B_MSG_WEATHER_TURN_SUN]          = STRINGID_SUNLIGHTSTRONG,
    [B_MSG_WEATHER_TURN_SANDSTORM]    = STRINGID_SANDSTORMRAGES,
    [B_MSG_WEATHER_TURN_HAIL]         = STRINGID_HAILCONTINUES,
    [B_MSG_WEATHER_TURN_SNOW]         = STRINGID_SNOWCONTINUES,
    [B_MSG_WEATHER_TURN_FOG]          = STRINGID_FOGISDEEP,
    [B_MSG_WEATHER_TURN_STRONG_WINDS] = STRINGID_MYSTERIOUSAIRCURRENTBLOWSON,
};

const u16 gSandStormHailDmgStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_PKMNBUFFETEDBYSANDSTORM,
    [B_MSG_HAIL]      = STRINGID_PKMNPELTEDBYHAIL
};

const u16 gProtectLikeUsedStringIds[] =
{
    [B_MSG_PROTECTED_ITSELF] = STRINGID_PKMNPROTECTEDITSELF2,
    [B_MSG_BRACED_ITSELF]    = STRINGID_PKMNBRACEDITSELF,
    [B_MSG_PROTECT_FAILED]   = STRINGID_BUTITFAILED,
    [B_MSG_PROTECTED_TEAM]   = STRINGID_PROTECTEDTEAM,
};

const u16 gReflectLightScreenSafeguardStringIds[] =
{
    [B_MSG_SIDE_STATUS_FAILED]     = STRINGID_BUTITFAILED,
    [B_MSG_SET_REFLECT_SINGLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_REFLECT_DOUBLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_LIGHTSCREEN_SINGLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_LIGHTSCREEN_DOUBLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_SAFEGUARD]          = STRINGID_PKMNCOVEREDBYVEIL,
};

const u16 gLeechSeedStringIds[] =
{
    [B_MSG_LEECH_SEED_SET]   = STRINGID_PKMNSEEDED,
    [B_MSG_LEECH_SEED_MISS]  = STRINGID_PKMNEVADEDATTACK,
    [B_MSG_LEECH_SEED_FAIL]  = STRINGID_ITDOESNTAFFECT,
    [B_MSG_LEECH_SEED_DRAIN] = STRINGID_PKMNSAPPEDBYLEECHSEED,
    [B_MSG_LEECH_SEED_OOZE]  = STRINGID_ITSUCKEDLIQUIDOOZE,
};

const u16 gRestUsedStringIds[] =
{
    [B_MSG_REST]          = STRINGID_PKMNWENTTOSLEEP,
    [B_MSG_REST_STATUSED] = STRINGID_PKMNSLEPTHEALTHY
};

const u16 gUproarOverTurnStringIds[] =
{
    [B_MSG_UPROAR_CONTINUES] = STRINGID_PKMNMAKINGUPROAR,
    [B_MSG_UPROAR_ENDS]      = STRINGID_PKMNCALMEDDOWN
};

const u16 gStockpileUsedStringIds[] =
{
    [B_MSG_STOCKPILED]     = STRINGID_PKMNSTOCKPILED,
    [B_MSG_CANT_STOCKPILE] = STRINGID_PKMNCANTSTOCKPILE,
};

const u16 gWokeUpStringIds[] =
{
    [B_MSG_WOKE_UP]        = STRINGID_PKMNWOKEUP,
    [B_MSG_WOKE_UP_UPROAR] = STRINGID_PKMNWOKEUPINUPROAR
};

const u16 gSwallowFailStringIds[] =
{
    [B_MSG_SWALLOW_FAILED]  = STRINGID_FAILEDTOSWALLOW,
    [B_MSG_SWALLOW_FULL_HP] = STRINGID_PKMNHPFULL
};

const u16 gUproarAwakeStringIds[] =
{
    [B_MSG_CANT_SLEEP_UPROAR]  = STRINGID_PKMNCANTSLEEPINUPROAR2,
    [B_MSG_UPROAR_KEPT_AWAKE]  = STRINGID_UPROARKEPTPKMNAWAKE,
};

const u16 gStatUpStringIds[] =
{
    [B_MSG_ATTACKER_STAT_ROSE] = STRINGID_ATTACKERSSTATROSE,
    [B_MSG_DEFENDER_STAT_ROSE] = STRINGID_DEFENDERSSTATROSE,
    [B_MSG_STAT_WONT_INCREASE] = STRINGID_STATSWONTINCREASE,
    [B_MSG_STAT_ROSE_EMPTY]    = STRINGID_EMPTYSTRING3,
    [B_MSG_STAT_ROSE_ITEM]     = STRINGID_USINGITEMSTATOFPKMNROSE,
    [B_MSG_USED_DIRE_HIT]      = STRINGID_PKMNUSEDXTOGETPUMPED,
};

const u16 gStatDownStringIds[] =
{
    [B_MSG_ATTACKER_STAT_FELL] = STRINGID_ATTACKERSSTATFELL,
    [B_MSG_DEFENDER_STAT_FELL] = STRINGID_DEFENDERSSTATFELL,
    [B_MSG_STAT_WONT_DECREASE] = STRINGID_STATSWONTDECREASE,
    [B_MSG_STAT_FELL_EMPTY]    = STRINGID_EMPTYSTRING3,
};

// Index copied from move's index in sTrappingMoves
const u16 gWrappedStringIds[NUM_TRAPPING_MOVES] =
{
    [B_MSG_WRAPPED_BIND]        = STRINGID_PKMNSQUEEZEDBYBIND,     // MOVE_BIND
    [B_MSG_WRAPPED_WRAP]        = STRINGID_PKMNWRAPPEDBY,          // MOVE_WRAP
    [B_MSG_WRAPPED_FIRE_SPIN]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_FIRE_SPIN
    [B_MSG_WRAPPED_CLAMP]       = STRINGID_PKMNCLAMPED,            // MOVE_CLAMP
    [B_MSG_WRAPPED_WHIRLPOOL]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_WHIRLPOOL
    [B_MSG_WRAPPED_SAND_TOMB]   = STRINGID_PKMNTRAPPEDBYSANDTOMB,  // MOVE_SAND_TOMB
    [B_MSG_WRAPPED_MAGMA_STORM] = STRINGID_TRAPPEDBYSWIRLINGMAGMA, // MOVE_MAGMA_STORM
    [B_MSG_WRAPPED_INFESTATION] = STRINGID_INFESTATION,            // MOVE_INFESTATION
    [B_MSG_WRAPPED_SNAP_TRAP]   = STRINGID_PKMNINSNAPTRAP,         // MOVE_SNAP_TRAP
    [B_MSG_WRAPPED_THUNDER_CAGE]= STRINGID_THUNDERCAGETRAPPED,     // MOVE_THUNDER_CAGE
};

const u16 gMistUsedStringIds[] =
{
    [B_MSG_SET_MIST]    = STRINGID_PKMNSHROUDEDINMIST,
    [B_MSG_MIST_FAILED] = STRINGID_BUTITFAILED
};

const u16 gFocusEnergyUsedStringIds[] =
{
    [B_MSG_GETTING_PUMPED]      = STRINGID_PKMNGETTINGPUMPED,
    [B_MSG_FOCUS_ENERGY_FAILED] = STRINGID_BUTITFAILED
};

const u16 gTransformUsedStringIds[] =
{
    [B_MSG_TRANSFORMED]      = STRINGID_PKMNTRANSFORMEDINTO,
    [B_MSG_TRANSFORM_FAILED] = STRINGID_BUTITFAILED
};

const u16 gSubstituteUsedStringIds[] =
{
    [B_MSG_SET_SUBSTITUTE]    = STRINGID_PKMNMADESUBSTITUTE,
    [B_MSG_SUBSTITUTE_FAILED] = STRINGID_TOOWEAKFORSUBSTITUTE
};

const u16 gGotPoisonedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPOISONED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNPOISONEDBY
};

const u16 gGotParalyzedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPARALYZED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASPARALYZEDBY
};

const u16 gFellAsleepStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLASLEEP,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNMADESLEEP,
};

const u16 gGotBurnedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASBURNED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNBURNEDBY
};

const u16 gGotFrostbiteStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNGOTFROSTBITE,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNGOTFROSTBITE,
};

const u16 gFrostbiteHealedStringIds[] =
{
    [B_MSG_FROSTBITE_HEALED]         = STRINGID_PKMNFROSTBITEHEALED2,
    [B_MSG_FROSTBITE_HEALED_BY_MOVE] = STRINGID_PKMNFROSTBITEHEALEDBY
};

const u16 gGotFrozenStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASFROZEN,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNFROZENBY
};

const u16 gGotDefrostedStringIds[] =
{
    [B_MSG_DEFROSTED]         = STRINGID_PKMNWASDEFROSTED2,
    [B_MSG_DEFROSTED_BY_MOVE] = STRINGID_PKMNWASDEFROSTEDBY
};

const u16 gKOFailedStringIds[] =
{
    [B_MSG_KO_MISS]       = STRINGID_ATTACKMISSED,
    [B_MSG_KO_UNAFFECTED] = STRINGID_PKMNUNAFFECTED
};

const u16 gAttractUsedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLINLOVE,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNSXINFATUATEDY
};

const u16 gAbsorbDrainStringIds[] =
{
    [B_MSG_ABSORB]      = STRINGID_PKMNENERGYDRAINED,
    [B_MSG_ABSORB_OOZE] = STRINGID_ITSUCKEDLIQUIDOOZE
};

const u16 gSportsUsedStringIds[] =
{
    [B_MSG_WEAKEN_ELECTRIC] = STRINGID_ELECTRICITYWEAKENED,
    [B_MSG_WEAKEN_FIRE]     = STRINGID_FIREWEAKENED
};

const u16 gPartyStatusHealStringIds[] =
{
    [B_MSG_BELL]                     = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_ATTACKER] = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_PARTNER]  = STRINGID_BELLCHIMED,
    [B_MSG_BELL_BOTH_SOUNDPROOF]     = STRINGID_BELLCHIMED,
    [B_MSG_SOOTHING_AROMA]           = STRINGID_SOOTHINGAROMA
};

const u16 gFutureMoveUsedStringIds[] =
{
    [B_MSG_FUTURE_SIGHT] = STRINGID_PKMNFORESAWATTACK,
    [B_MSG_DOOM_DESIRE]  = STRINGID_PKMNCHOSEXASDESTINY
};

const u16 gBallEscapeStringIds[] =
{
    [BALL_NO_SHAKES]     = STRINGID_PKMNBROKEFREE,
    [BALL_1_SHAKE]       = STRINGID_ITAPPEAREDCAUGHT,
    [BALL_2_SHAKES]      = STRINGID_AARGHALMOSTHADIT,
    [BALL_3_SHAKES_FAIL] = STRINGID_SHOOTSOCLOSE
};

// Overworld weathers that don't have an associated battle weather default to "It is raining."
const u16 gWeatherStartsStringIds[] =
{
    [WEATHER_NONE]               = STRINGID_ITISRAINING,
    [WEATHER_SUNNY_CLOUDS]       = STRINGID_ITISRAINING,
    [WEATHER_SUNNY]              = STRINGID_ITISRAINING,
    [WEATHER_RAIN]               = STRINGID_ITISRAINING,
    [WEATHER_SNOW]               = (B_OVERWORLD_SNOW >= GEN_9 ? STRINGID_ITISSNOWING : STRINGID_ITISHAILING),
    [WEATHER_RAIN_THUNDERSTORM]  = STRINGID_ITISRAINING,
    [WEATHER_FOG_HORIZONTAL]     = STRINGID_FOGISDEEP,
    [WEATHER_VOLCANIC_ASH]       = STRINGID_ITISRAINING,
    [WEATHER_SANDSTORM]          = STRINGID_SANDSTORMISRAGING,
    [WEATHER_FOG_DIAGONAL]       = STRINGID_FOGISDEEP,
    [WEATHER_UNDERWATER]         = STRINGID_ITISRAINING,
    [WEATHER_SHADE]              = STRINGID_ITISRAINING,
    [WEATHER_DROUGHT]            = STRINGID_SUNLIGHTISHARSH,
    [WEATHER_DOWNPOUR]           = STRINGID_ITISRAINING,
    [WEATHER_UNDERWATER_BUBBLES] = STRINGID_ITISRAINING,
    [WEATHER_ABNORMAL]           = STRINGID_ITISRAINING
};

const u16 gTerrainStartsStringIds[] =
{
    [B_MSG_TERRAIN_SET_MISTY]    = STRINGID_MISTSWIRLSAROUND,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_ELECTRICCURRENTISRUNNING,
    [B_MSG_TERRAIN_SET_PSYCHIC]  = STRINGID_SEEMSWEIRD,
    [B_MSG_TERRAIN_SET_GRASSY]   = STRINGID_ISCOVEREDWITHGRASS,
};

const u16 gPrimalWeatherBlocksStringIds[] =
{
    [B_MSG_PRIMAL_WEATHER_FIZZLED_BY_RAIN]      = STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN,
    [B_MSG_PRIMAL_WEATHER_EVAPORATED_IN_SUN]    = STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT,
};

const u16 gInobedientStringIds[] =
{
    [B_MSG_LOAFING]            = STRINGID_PKMNLOAFING,
    [B_MSG_WONT_OBEY]          = STRINGID_PKMNWONTOBEY,
    [B_MSG_TURNED_AWAY]        = STRINGID_PKMNTURNEDAWAY,
    [B_MSG_PRETEND_NOT_NOTICE] = STRINGID_PKMNPRETENDNOTNOTICE,
    [B_MSG_INCAPABLE_OF_POWER] = STRINGID_PKMNINCAPABLEOFPOWER
};

const u16 gSafariGetNearStringIds[] =
{
    [B_MSG_CREPT_CLOSER]    = STRINGID_CREPTCLOSER,
    [B_MSG_CANT_GET_CLOSER] = STRINGID_CANTGETCLOSER
};

const u16 gSafariPokeblockResultStringIds[] =
{
    [B_MSG_MON_CURIOUS]    = STRINGID_PKMNCURIOUSABOUTX,
    [B_MSG_MON_ENTHRALLED] = STRINGID_PKMNENTHRALLEDBYX,
    [B_MSG_MON_IGNORED]    = STRINGID_PKMNIGNOREDX
};

const u16 gBerryEffectStringIds[] =
{
    [B_MSG_CURED_PROBLEM]     = STRINGID_PKMNSITEMCUREDPROBLEM,
    [B_MSG_NORMALIZED_STATUS] = STRINGID_PKMNSITEMNORMALIZEDSTATUS
};

const u16 gStatusPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_BURN]      = STRINGID_PKMNSXPREVENTSBURNS,
    [B_MSG_ABILITY_PREVENTS_MOVE_PARALYSIS] = STRINGID_PKMNPREVENTSPARALYSISWITH,
    [B_MSG_ABILITY_PREVENTS_MOVE_POISON]    = STRINGID_PKMNPREVENTSPOISONINGWITH,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY,
    [B_MSG_ABILITY_PASTEL_VEIL]             = STRINGID_PASTELVEILPROTECTED
};

const u16 gItemSwapStringIds[] =
{
    [B_MSG_ITEM_SWAP_TAKEN] = STRINGID_PKMNOBTAINEDX,
    [B_MSG_ITEM_SWAP_GIVEN] = STRINGID_PKMNOBTAINEDX2,
    [B_MSG_ITEM_SWAP_BOTH]  = STRINGID_PKMNOBTAINEDXYOBTAINEDZ
};

const u16 gFlashFireStringIds[] =
{
    [B_MSG_FLASH_FIRE_BOOST]    = STRINGID_PKMNRAISEDFIREPOWERWITH,
    [B_MSG_FLASH_FIRE_NO_BOOST] = STRINGID_PKMNSXMADEYINEFFECTIVE
};

const u16 gCaughtMonStringIds[] =
{
    [B_MSG_SENT_SOMEONES_PC]   = STRINGID_PKMNTRANSFERREDSOMEONESPC,
    [B_MSG_SENT_LANETTES_PC]   = STRINGID_PKMNTRANSFERREDLANETTESPC,
    [B_MSG_SOMEONES_BOX_FULL]  = STRINGID_PKMNBOXSOMEONESPCFULL,
    [B_MSG_LANETTES_BOX_FULL]  = STRINGID_PKMNBOXLANETTESPCFULL,
    [B_MSG_SWAPPED_INTO_PARTY] = STRINGID_PKMNSENTTOPCAFTERCATCH,
};

const u16 gRoomsStringIds[] =
{
    STRINGID_PKMNTWISTEDDIMENSIONS, STRINGID_TRICKROOMENDS,
    STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON, STRINGID_WONDERROOMENDS,
    STRINGID_HELDITEMSLOSEEFFECTS, STRINGID_MAGICROOMENDS,
    STRINGID_EMPTYSTRING3
};

const u16 gStatusConditionsStringIds[] =
{
    STRINGID_PKMNWASPOISONED, STRINGID_PKMNBADLYPOISONED, STRINGID_PKMNWASBURNED, STRINGID_PKMNWASPARALYZED, STRINGID_PKMNFELLASLEEP, STRINGID_PKMNGOTFROSTBITE
};

const u16 gDamageNonTypesStartStringIds[] =
{
    [B_MSG_TRAPPED_WITH_VINES]  = STRINGID_TEAMTRAPPEDWITHVINES,
    [B_MSG_CAUGHT_IN_VORTEX]    = STRINGID_TEAMCAUGHTINVORTEX,
    [B_MSG_SURROUNDED_BY_FIRE]  = STRINGID_TEAMSURROUNDEDBYFIRE,
    [B_MSG_SURROUNDED_BY_ROCKS] = STRINGID_TEAMSURROUNDEDBYROCKS,
};

const u16 gDamageNonTypesDmgStringIds[] =
{
    [B_MSG_HURT_BY_VINES]        = STRINGID_PKMNHURTBYVINES,
    [B_MSG_HURT_BY_VORTEX]       = STRINGID_PKMNHURTBYVORTEX,
    [B_MSG_BURNING_UP]           = STRINGID_PKMNBURNINGUP,
    [B_MSG_HURT_BY_ROCKS_THROWN] = STRINGID_PKMNHURTBYROCKSTHROWN,
};

const u16 gDefogHazardsStringIds[] =
{
    [HAZARDS_SPIKES] = STRINGID_SPIKESDISAPPEAREDFROMTEAM,
    [HAZARDS_STICKY_WEB] = STRINGID_STICKYWEBDISAPPEAREDFROMTEAM,
    [HAZARDS_TOXIC_SPIKES] = STRINGID_TOXICSPIKESDISAPPEAREDFROMTEAM,
    [HAZARDS_STEALTH_ROCK] = STRINGID_STEALTHROCKDISAPPEAREDFROMTEAM,
    [HAZARDS_STEELSURGE] = STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM,
};

const u16 gSpinHazardsStringIds[] =
{
    [HAZARDS_SPIKES] = STRINGID_PKMNBLEWAWAYSPIKES,
    [HAZARDS_STICKY_WEB] = STRINGID_PKMNBLEWAWAYSTICKYWEB,
    [HAZARDS_TOXIC_SPIKES] = STRINGID_PKMNBLEWAWAYTOXICSPIKES,
    [HAZARDS_STEALTH_ROCK] = STRINGID_PKMNBLEWAWAYSTEALTHROCK,
    [HAZARDS_STEELSURGE] = STRINGID_PKMNBLEWAWAYSHARPSTEEL,
};

const u8 gText_PkmnIsEvolving[] = _("¡Anda!\n¡{STR_VAR_1} está evolucionando!");
const u8 gText_CongratsPkmnEvolved[] = _("¡Enhorabuena! ¡Tu {STR_VAR_1}\nse ha convertido en {STR_VAR_2}!{WAIT_SE}\p");
const u8 gText_PkmnStoppedEvolving[] = _("¿Eh? ¡La evolución de\n{STR_VAR_1} se ha detenido!\p");
const u8 gText_EllipsisQuestionMark[] = _("¿……?\p");
const u8 gText_WhatWillPkmnDo[] = _("¿Qué debería hacer\n{B_BUFF1}?");
const u8 gText_WhatWillPkmnDo2[] = _("¿Qué debería hacer\n{B_BUFF1}?");
const u8 gText_WhatWillWallyDo[] = _("¿¿Qué debería hacer\nBlasco?");
const u8 gText_LinkStandby[] = _("{PAUSE 16}Esperando conexión…");
const u8 gText_BattleMenu[] = _("Lucha{CLEAR_TO 56}Mochila\nPokémon{CLEAR_TO 56}Huida");
const u8 gText_SafariZoneMenu[] = _("Ball{CLEAR_TO 56}Pokécubo\n+ Cerca{CLEAR_TO 56}Huida");
const u8 gText_MoveInterfacePP[] = _("PP ");
const u8 gText_MoveInterfacePower[] = _("Pot.\nPrecis. ");
const u8 gText_MoveInterfaceType[] = _("Tipo/");
const u8 gText_MoveInterfacePpType[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}PP\nTipo/");
const u8 gText_MoveInterfaceDynamicColors[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_WhichMoveToForget4[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}¿Qué movimiento debería\nolvidar?");

const u8 gText_BattleYesNoChoice[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}Sí\nNo");
const u8 gText_BattleSwitchWhich[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}¿Cuál\ncambias?");
const u8 gText_BattleSwitchWhich2[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_BattleSwitchWhich3[] = _("{UP_ARROW}");
const u8 gText_BattleSwitchWhich4[] = _("{ESCAPE 4}");
const u8 gText_BattleSwitchWhich5[] = _("-");

const u8 gText_SafariBalls[] = _("{HIGHLIGHT DARK_GRAY}Safari Balls");
const u8 gText_SafariBallLeft[] = _("{HIGHLIGHT DARK_GRAY}Tienes: $" "{HIGHLIGHT DARK_GRAY}");
const u8 gText_Sleep[] = _("sueño");
const u8 gText_Poison[] = _("envenenamiento");
const u8 gText_Burn[] = _("quemaduras");
const u8 gText_Paralysis[] = _("parálisis");
const u8 gText_Ice[] = _("congelación");
const u8 gText_Confusion[] = _("confusión");
const u8 gText_Love[] = _("enamoramiento");
const u8 gText_SpaceAndSpace[] = _(" y ");
const u8 gText_CommaSpace[] = _(", ");
const u8 gText_Space2[] = _(" ");
const u8 gText_LineBreak[] = _(" ");
const u8 gText_NewLine[] = _("\n");
const u8 gText_Are[] = _("no pueden");
const u8 gText_Are2[] = _("no pueden");
const u8 gText_BadEgg[] = _("Huevo malo");
const u8 gText_BattleWallyName[] = _("Blasco");
const u8 gText_Win[] = _("{HIGHLIGHT TRANSPARENT}Victoria");
const u8 gText_Loss[] = _("{HIGHLIGHT TRANSPARENT}Derrota");
const u8 gText_Draw[] = _("{HIGHLIGHT TRANSPARENT}Empate");
static const u8 sText_SpaceIs[] = _(" es");
static const u8 sText_ApostropheS[] = _("de");
const u8 gText_BattleTourney[] = _("Torneo de Combates");

const u8 *const gRoundsStringTable[DOME_ROUNDS_COUNT] =
{
    [DOME_ROUND1]    = COMPOUND_STRING("Ronda 1"),
    [DOME_ROUND2]    = COMPOUND_STRING("Ronda 2"),
    [DOME_SEMIFINAL] = COMPOUND_STRING("Semifinal"),
    [DOME_FINAL]     = COMPOUND_STRING("Final"),
};

const u8 gText_TheGreatNewHope[] = _("¡La nueva esperanza!\p");
const u8 gText_WillChampionshipDreamComeTrue[] = _("¡¿El sueño de campeón se hará realidad?!\p");
const u8 gText_AFormerChampion[] = _("¡Un antiguo Campeón!\p");
const u8 gText_ThePreviousChampion[] = _("¡El Campeón anterior!\p");
const u8 gText_TheUnbeatenChampion[] = _("¡El Campeón imbatido!\p");
const u8 gText_PlayerMon1Name[] = _("{B_PLAYER_MON1_NAME}");
const u8 gText_Vs[] = _("VS");
const u8 gText_OpponentMon1Name[] = _("{B_OPPONENT_MON1_NAME}");
const u8 gText_Mind[] = _("Mente");
const u8 gText_Skill[] = _("Habilidad");
const u8 gText_Body[] = _("Cuerpo");
const u8 gText_Judgment[] = _("{B_BUFF1}{CLEAR 13}Juicio{CLEAR 13}{B_BUFF2}");
static const u8 sText_TwoTrainersSentPkmn[] = _("¡{B_OPPONENT_MON1_NAME} es el Pokémon enviado por {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!\p¡{B_OPPONENT_MON2_NAME} es el Pokémon enviado por {B_TRAINER2_CLASS} {B_TRAINER2_NAME}!");
static const u8 sText_Trainer2SentOutPkmn[] = _("¡{B_BUFF1} es el Pokémon enviado por {B_TRAINER2_CLASS} {B_TRAINER2_NAME}!");
static const u8 sText_TwoTrainersWantToBattle[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} y {B_TRAINER2_CLASS} {B_TRAINER2_NAME} quieren luchar!\p");
static const u8 sText_InGamePartnerSentOutZGoN[] = _("¡{B_PLAYER_MON2_NAME} es el Pokémon enviado por {B_PARTNER_CLASS} {B_PARTNER_NAME}! ¡Adelante, {B_PLAYER_MON1_NAME}!");

const u16 gBattlePalaceFlavorTextTable[] =
{
    [B_MSG_GLINT_IN_EYE]   = STRINGID_GLINTAPPEARSINEYE,
    [B_MSG_GETTING_IN_POS] = STRINGID_PKMNGETTINGINTOPOSITION,
    [B_MSG_GROWL_DEEPLY]   = STRINGID_PKMNBEGANGROWLINGDEEPLY,
    [B_MSG_EAGER_FOR_MORE] = STRINGID_PKMNEAGERFORMORE,
};

const u8 *const gRefereeStringsTable[] =
{
    [B_MSG_REF_NOTHING_IS_DECIDED] = COMPOUND_STRING("Juez: Si la cosa no se decide en las 3 próximas rondas, emitiremos un juicio!"),
    [B_MSG_REF_THATS_IT]           = COMPOUND_STRING("Juez: ¡Se acabó! Vamos a determinar quién consideramos que ha ganado"),
    [B_MSG_REF_JUDGE_MIND]         = COMPOUND_STRING("Juez: Lo 1.º en valorar es la mente: qué POKéMON ha tenido más coraje.\p"),
    [B_MSG_REF_JUDGE_SKILL]        = COMPOUND_STRING("Juez: Lo 2.º, la habilidad: qué POKéMON ha usado mejor sus ataques.\p"),
    [B_MSG_REF_JUDGE_BODY]         = COMPOUND_STRING("Juez: Lo 3.º, el cuerpo: qué POKéMON está más entero.\p"),
    [B_MSG_REF_PLAYER_WON]         = COMPOUND_STRING("Juez: El resultado es {B_BUFF1} a {B_BUFF2}! ¡Ha ganado {B_PLAYER_MON1_NAME}, de {B_PLAYER_NAME}!\p"),
    [B_MSG_REF_OPPONENT_WON]       = COMPOUND_STRING("Juez: El resultado es ¡{B_BUFF1} a {B_BUFF2}! ¡Ha ganado {B_OPPONENT_MON1_NAME}, de {B_TRAINER1_NAME}!\p"),
    [B_MSG_REF_DRAW]               = COMPOUND_STRING("Juez: El resultado es 3 a 3… ¡Eso es empate!\p"),
    [B_MSG_REF_COMMENCE_BATTLE]    = COMPOUND_STRING("Juez: ¡Comienza el encuentro {B_PLAYER_MON1_NAME} contra {B_OPPONENT_MON1_NAME}!"),
};

static const u8 sText_Trainer1Fled[] = _( "{PLAY_SE SE_FLEE}¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} huyó!");
static const u8 sText_PlayerLostAgainstTrainer1[] = _("¡Has perdido contra {B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
static const u8 sText_PlayerBattledToDrawTrainer1[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} ha empatado contigo!");
const u8 gText_RecordBattleToPass[] = _("¿Quieres grabar el combate\nen el Pase del Frente?");
const u8 gText_BattleRecordedOnPass[] = _("El combate de {B_PLAYER_NAME} se ha\ngrabado en el Pase del Frente.");
static const u8 sText_LinkTrainerWantsToBattlePause[] = _("Has sido retado por {B_LINK_OPPONENT1_NAME}!\p");
static const u8 sText_TwoLinkTrainersWantToBattlePause[] = _("Has sido retado por {B_LINK_OPPONENT1_NAME} y {B_LINK_OPPONENT2_NAME}!\p");
static const u8 sText_Your1[] = _("aliado");
static const u8 sText_Opposing1[] = _("enemigo");
static const u8 sText_Your2[] = _("aliado");
static const u8 sText_Opposing2[] = _("enemigo");

static const u8 sText_EmptyStatus[] = _("$$$$$$$");

static const struct BattleWindowText sTextOnWindowsInfo_Normal[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 13 : 12,
        .bgColor = 14,
        .shadowColor = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 15 : 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 2,
    },
    [B_WIN_VS_PLAYER] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_OPPONENT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_OUTCOME_DRAW] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_VS_OUTCOME_LEFT] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_VS_OUTCOME_RIGHT] = {
        .fillValue = PIXEL_FILL(0x0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_MOVE_DESCRIPTION] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
};

static const struct BattleWindowText sTextOnWindowsInfo_Arena[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 13 : 12,
        .bgColor = 14,
        .shadowColor = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 15 : 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 2,
    },
    [ARENA_WIN_PLAYER_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_VS] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_OPPONENT_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_MIND] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_SKILL] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_BODY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_JUDGMENT_TITLE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_JUDGMENT_TEXT] = {
        .fillValue = PIXEL_FILL(0x1),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 2,
        .bgColor = 1,
        .shadowColor = 3,
    },
    [B_WIN_MOVE_DESCRIPTION] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
};

static const struct BattleWindowText *const sBattleTextOnWindowsInfo[] =
{
    [B_WIN_TYPE_NORMAL] = sTextOnWindowsInfo_Normal,
    [B_WIN_TYPE_ARENA]  = sTextOnWindowsInfo_Arena
};

static const u8 sRecordedBattleTextSpeeds[] = {8, 4, 1, 0};

void BufferStringBattle(enum StringID stringID, u32 battler)
{
    s32 i;
    const u8 *stringPtr = NULL;

    gBattleMsgDataPtr = (struct BattleMsgData *)(&gBattleResources->bufferA[battler][4]);
    gLastUsedItem = gBattleMsgDataPtr->lastItem;
    gLastUsedAbility = gBattleMsgDataPtr->lastAbility;
    gBattleScripting.battler = gBattleMsgDataPtr->scrActive;
    gBattleStruct->scriptPartyIdx = gBattleMsgDataPtr->bakScriptPartyIdx;
    gBattleStruct->hpScale = gBattleMsgDataPtr->hpScale;
    gPotentialItemEffectBattler = gBattleMsgDataPtr->itemEffectBattler;
    gBattleStruct->stringMoveType = gBattleMsgDataPtr->moveType;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        sBattlerAbilities[i] = gBattleMsgDataPtr->abilities[i];
    }
    for (i = 0; i < TEXT_BUFF_ARRAY_COUNT; i++)
    {
        gBattleTextBuff1[i] = gBattleMsgDataPtr->textBuffs[0][i];
        gBattleTextBuff2[i] = gBattleMsgDataPtr->textBuffs[1][i];
        gBattleTextBuff3[i] = gBattleMsgDataPtr->textBuffs[2][i];
    }

    switch (stringID)
    {
    case STRINGID_INTROMSG: // first battle msg
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        {
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                {
                    stringPtr = sText_TwoTrainersWantToBattle;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                        stringPtr = sText_TwoLinkTrainersWantToBattlePause;
                    else
                        stringPtr = sText_TwoLinkTrainersWantToBattle;
                }
                else
                {
                    if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
                        stringPtr = sText_Trainer1WantsToBattle;
                    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                        stringPtr = sText_LinkTrainerWantsToBattlePause;
                    else
                        stringPtr = sText_LinkTrainerWantsToBattle;
                }
            }
            else
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1WantsToBattle;
                else if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER))
                    stringPtr = sText_TwoTrainersWantToBattle;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_TwoTrainersWantToBattle;
                else
                    stringPtr = sText_Trainer1WantsToBattle;
            }
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_LEGENDARY)
                stringPtr = sText_LegendaryPkmnAppeared;
            else if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT))))
                stringPtr = sText_TwoWildPkmnAppeared;
            else if (gBattleTypeFlags & BATTLE_TYPE_WALLY_TUTORIAL)
                stringPtr = sText_WildPkmnAppearedPause;
            else
                stringPtr = sText_WildPkmnAppeared;
        }
        break;
    case STRINGID_INTROSENDOUT: // poke first send-out
        if (IsOnPlayerSide(battler))
        {
            if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(BATTLE_PARTNER(battler))))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                    stringPtr = sText_InGamePartnerSentOutZGoN;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_GoTwoPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_LinkPartnerSentOutPkmnGoPkmn;
                else
                    stringPtr = sText_GoTwoPkmn;
            }
            else
            {
                stringPtr = sText_GoPkmn;
            }
        }
        else
        {
            if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(BATTLE_PARTNER(battler))))
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_TwoTrainersSentPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                    stringPtr = sText_TwoTrainersSentPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_TwoLinkTrainersSentOutPkmn;
                else if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                    stringPtr = sText_LinkTrainerSentOutTwoPkmn;
                else
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
            }
            else
            {
                if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK)))
                    stringPtr = sText_Trainer1SentOutPkmn;
                else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
                    stringPtr = sText_Trainer1SentOutPkmn;
                else
                    stringPtr = sText_LinkTrainerSentOutPkmn;
            }
        }
        break;
    case STRINGID_RETURNMON: // sending poke to ball msg
        if (IsOnPlayerSide(battler))
        {
            if (*(&gBattleStruct->hpScale) == 0)
                stringPtr = sText_PkmnThatsEnough;
            else if (*(&gBattleStruct->hpScale) == 1 || IsDoubleBattle())
                stringPtr = sText_PkmnComeBack;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sText_PkmnOkComeBack;
            else
                stringPtr = sText_PkmnGoodComeBack;
        }
        else
        {
            if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_LINK_OPPONENT || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
            {
                if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_LinkTrainer2WithdrewPkmn;
                else
                    stringPtr = sText_LinkTrainer1WithdrewPkmn;
            }
            else
            {
                stringPtr = sText_Trainer1WithdrewPkmn;
            }
        }
        break;
    case STRINGID_SWITCHINMON: // switch-in msg
        if (IsOnPlayerSide(gBattleScripting.battler))
        {
            if (*(&gBattleStruct->hpScale) == 0 || IsDoubleBattle())
                stringPtr = sText_GoPkmn2;
            else if (*(&gBattleStruct->hpScale) == 1)
                stringPtr = sText_DoItPkmn;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sText_GoForItPkmn;
            else
                stringPtr = sText_YourFoesWeakGetEmPkmn;
        }
        else
        {
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                {
                    if (gBattleScripting.battler == 1)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_Trainer2SentOutPkmn;
                }
                else
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                        stringPtr = sText_LinkTrainerMultiSentOutPkmn;
                    else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_LinkTrainerSentOutPkmn2;
                }
            }
            else
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                {
                    if (gBattleScripting.battler == 1)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_Trainer2SentOutPkmn;
                }
                else
                {
                    stringPtr = sText_Trainer1SentOutPkmn2;
                }
            }
        }
        break;
    case STRINGID_USEDMOVE: // Pokémon used a move msg
        if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT
         && !IsZMove(gBattleMsgDataPtr->currentMove)
         && !IsMaxMove(gBattleMsgDataPtr->currentMove))
            StringCopy(gBattleTextBuff3, gTypesInfo[*(&gBattleStruct->stringMoveType)].generic);
        else
            StringCopy(gBattleTextBuff3, GetMoveName(gBattleMsgDataPtr->currentMove));
        stringPtr = sText_AttackerUsedX;
        break;
    case STRINGID_BATTLEEND: // battle end
        if (gBattleTextBuff1[0] & B_OUTCOME_LINK_BATTLE_RAN)
        {
            gBattleTextBuff1[0] &= ~(B_OUTCOME_LINK_BATTLE_RAN);
            if (!IsOnPlayerSide(battler) && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTextBuff1[0] == B_OUTCOME_LOST || gBattleTextBuff1[0] == B_OUTCOME_DREW)
                stringPtr = sText_GotAwaySafely;
            else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                stringPtr = sText_TwoWildFled;
            else
                stringPtr = sText_WildFled;
        }
        else
        {
            if (!IsOnPlayerSide(battler) && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                        stringPtr = sText_TwoInGameTrainersDefeated;
                    else
                        stringPtr = sText_TwoLinkTrainersDefeated;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostToTwo;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawVsTwo;
                    break;
                }
            }
            else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainerTrainer1;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstTrainer1;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawTrainer1;
                    break;
                }
            }
            else
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainer;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstLinkTrainer;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawLinkTrainer;
                    break;
                }
            }
        }
        break;
    case STRINGID_TRAINERSLIDE:
        stringPtr = gBattleStruct->trainerSlideMsg;
        break;
    default: // load a string from the table
        if (stringID >= STRINGID_COUNT)
        {
            gDisplayedStringBattle[0] = EOS;
            return;
        }
        else
        {
            stringPtr = gBattleStringsTable[stringID];
        }
        break;
    }

    BattleStringExpandPlaceholdersToDisplayedString(stringPtr);
}

u32 BattleStringExpandPlaceholdersToDisplayedString(const u8 *src)
{
#ifndef NDEBUG
    u32 j, strWidth;
    u32 dstID = BattleStringExpandPlaceholders(src, gDisplayedStringBattle, sizeof(gDisplayedStringBattle));
    for (j = 1;; j++)
    {
        strWidth = GetStringLineWidth(0, gDisplayedStringBattle, 0, j, sizeof(gDisplayedStringBattle));
        if (strWidth == 0)
            break;
    }
    return dstID;
#else
    return BattleStringExpandPlaceholders(src, gDisplayedStringBattle, sizeof(gDisplayedStringBattle));
#endif
}

static const u8 *TryGetStatusString(u8 *src)
{
    u32 i;
    u8 status[8];
    u32 chars1, chars2;
    u8 *statusPtr;

    memcpy(status, sText_EmptyStatus, min(ARRAY_COUNT(status), ARRAY_COUNT(sText_EmptyStatus)));

    statusPtr = status;
    for (i = 0; i < ARRAY_COUNT(status); i++)
    {
        if (*src == EOS) break; // one line required to match -g
        *statusPtr = *src;
        src++;
        statusPtr++;
    }

    chars1 = *(u32 *)(&status[0]);
    chars2 = *(u32 *)(&status[4]);

    for (i = 0; i < ARRAY_COUNT(gStatusConditionStringsTable); i++)
    {
        if (chars1 == *(u32 *)(&gStatusConditionStringsTable[i][0])
            && chars2 == *(u32 *)(&gStatusConditionStringsTable[i][4]))
            return gStatusConditionStringsTable[i];
    }
    return NULL;
}

static void GetBattlerNick(u32 battler, u8 *dst)
{
    struct Pokemon *illusionMon = GetIllusionMonPtr(battler);
    struct Pokemon *mon = GetBattlerMon(battler);

    if (illusionMon != NULL)
        mon = illusionMon;
    GetMonData(mon, MON_DATA_NICKNAME, dst);
    StringGet_Nickname(dst);
}

#define HANDLE_NICKNAME_STRING_CASE(battler)                            \
    GetBattlerNick(battler, text);                                      \
    toCpy = text;                                                       \
    if (!IsOnPlayerSide(battler))                                       \
    {                                                                   \
        while (*toCpy != EOS)                                           \
        {                                                               \
            dst[dstID] = *toCpy;                                        \
            dstID++;                                                    \
            toCpy++;                                                    \
        }                                                               \
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)                     \
            toCpy = sText_FoePkmnPrefix;                                \
        else                                                            \
            toCpy = sText_WildPkmnPrefix;                               \
    }

static const u8 *BattleStringGetOpponentNameByTrainerId(u16 trainerId, u8 *text, u8 multiplayerId, u8 battler)
{
    const u8 *toCpy = NULL;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
    {
        u32 i;
        for (i = 0; i < ARRAY_COUNT(gBattleResources->secretBase->trainerName); i++)
            text[i] = gBattleResources->secretBase->trainerName[i];
        text[i] = EOS;
        ConvertInternationalString(text, gBattleResources->secretBase->language);
        toCpy = text;
    }
    else if (trainerId == TRAINER_UNION_ROOM)
    {
        toCpy = gLinkPlayers[multiplayerId ^ BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_LINK_OPPONENT)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler)].name;
        else
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler) & BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
    {
        CopyFrontierBrainTrainerName(text);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
    {
        GetFrontierTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
    {
        GetTrainerHillTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
    {
        GetEreaderTrainerName(text);
        toCpy = text;
    }
    else
    {
        toCpy = GetTrainerNameFromId(trainerId);
    }

    return toCpy;
}

static const u8 *BattleStringGetOpponentName(u8 *text, u8 multiplayerId, u8 battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_OPPONENT_LEFT:
        toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, battler);
        break;
    case B_POSITION_OPPONENT_RIGHT:
        if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_MULTI) && !BATTLE_TWO_VS_ONE_OPPONENT)
            toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, text, multiplayerId, battler);
        else
            toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, battler);
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetPlayerName(u8 *text, u8 battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_PLAYER_LEFT:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            toCpy = gLinkPlayers[0].name;
        else
            toCpy = gSaveBlock2Ptr->playerName;
        break;
    case B_POSITION_PLAYER_RIGHT:
        if (((gBattleTypeFlags & BATTLE_TYPE_RECORDED) && !(gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER)))
            || gTestRunnerEnabled)
        {
            toCpy = gLinkPlayers[0].name;
        }
        else if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && gBattleTypeFlags & (BATTLE_TYPE_RECORDED | BATTLE_TYPE_MULTI))
        {
            toCpy = gLinkPlayers[2].name;
        }
        else if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
        {
            GetFrontierTrainerName(text, gPartnerTrainerId);
            toCpy = text;
        }
        else
        {
            toCpy = gSaveBlock2Ptr->playerName;
        }
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetTrainerName(u8 *text, u8 multiplayerId, u8 battler)
{
    if (IsOnPlayerSide(battler))
        return BattleStringGetPlayerName(text, battler);
    else
        return BattleStringGetOpponentName(text, multiplayerId, battler);
}

static const u8 *BattleStringGetOpponentClassByTrainerId(u16 trainerId)
{
    const u8 *toCpy;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
        toCpy = gTrainerClasses[GetSecretBaseTrainerClass()].name;
    else if (trainerId == TRAINER_UNION_ROOM)
        toCpy = gTrainerClasses[GetUnionRoomTrainerClass()].name;
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
        toCpy = gTrainerClasses[GetFrontierBrainTrainerClass()].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        toCpy = gTrainerClasses[GetFrontierOpponentClass(trainerId)].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
        toCpy = gTrainerClasses[GetTrainerHillOpponentClass(trainerId)].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
        toCpy = gTrainerClasses[GetEreaderTrainerClassId()].name;
    else
        toCpy = gTrainerClasses[GetTrainerClassFromId(trainerId)].name;

    return toCpy;
}

// Ensure the defined length for an item name can contain the full defined length of a berry name.
// This ensures that custom Enigma Berry names will fit in the text buffer at the top of BattleStringExpandPlaceholders.
STATIC_ASSERT(BERRY_NAME_LENGTH + ARRAY_COUNT(sText_BerrySuffix) <= ITEM_NAME_LENGTH, BerryNameTooLong);

u32 BattleStringExpandPlaceholders(const u8 *src, u8 *dst, u32 dstSize)
{
    u32 dstID = 0; // if they used dstID, why not use srcID as well?
    const u8 *toCpy = NULL;
    u8 text[max(max(max(32, TRAINER_NAME_LENGTH + 1), POKEMON_NAME_LENGTH + 1), ITEM_NAME_LENGTH)];
    u8 *textStart = &text[0];
    u8 multiplayerId;
    u8 fontId = FONT_NORMAL;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
        multiplayerId = gRecordedBattleMultiplayerId;
    else
        multiplayerId = GetMultiplayerId();

    // Clear destination first
    while (dstID < dstSize)
    {
        dst[dstID] = EOS;
        dstID++;
    }

    dstID = 0;
    while (*src != EOS)
    {
        toCpy = NULL;

        if (*src == PLACEHOLDER_BEGIN)
        {
            src++;
            u32 classLength = 0;
            u32 nameLength = 0;
            const u8 *classString;
            const u8 *nameString;
            switch (*src)
            {
            case B_TXT_BUFF1:
                if (gBattleTextBuff1[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff1, gStringVar1);
                    toCpy = gStringVar1;
                }
                else
                {
                    toCpy = TryGetStatusString(gBattleTextBuff1);
                    if (toCpy == NULL)
                        toCpy = gBattleTextBuff1;
                }
                break;
            case B_TXT_BUFF2:
                if (gBattleTextBuff2[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff2, gStringVar2);
                    toCpy = gStringVar2;
                }
                else
                {
                    toCpy = gBattleTextBuff2;
                }
                break;
            case B_TXT_BUFF3:
                if (gBattleTextBuff3[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff3, gStringVar3);
                    toCpy = gStringVar3;
                }
                else
                {
                    toCpy = gBattleTextBuff3;
                }
                break;
            case B_TXT_COPY_VAR_1:
                toCpy = gStringVar1;
                break;
            case B_TXT_COPY_VAR_2:
                toCpy = gStringVar2;
                break;
            case B_TXT_COPY_VAR_3:
                toCpy = gStringVar3;
                break;
            case B_TXT_PLAYER_MON1_NAME: // first player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON1_NAME: // first enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_PLAYER_MON2_NAME: // second player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON2_NAME: // second enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON1_NAME: // link first player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON1_NAME: // link first opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 1, text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON2_NAME: // link second player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 2, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON2_NAME: // link second opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 3, text);
                toCpy = text;
                break;
            case B_TXT_ATK_PARTNER_NAME: // attacker partner name
                GetBattlerNick(BATTLE_PARTNER(gBattlerAttacker), text);
                toCpy = text;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX: // attacker name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerAttacker)
                break;
            case B_TXT_DEF_NAME_WITH_PREFIX: // target name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerTarget)
                break;
            case B_TXT_DEF_NAME: // target name
                GetBattlerNick(gBattlerTarget, text);
                toCpy = text;
                break;
            case B_TXT_DEF_PARTNER_NAME: // partner target name
                GetBattlerNick(BATTLE_PARTNER(gBattlerTarget), text);
                toCpy = text;
                break;
            case B_TXT_EFF_NAME_WITH_PREFIX: // effect battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gEffectBattler)
                break;
            case B_TXT_SCR_ACTIVE_NAME_WITH_PREFIX: // scripting active battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattleScripting.battler)
                break;
            case B_TXT_CURRENT_MOVE: // current move name
                if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT
                 && !IsZMove(gBattleMsgDataPtr->currentMove)
                 && !IsMaxMove(gBattleMsgDataPtr->currentMove))
                    toCpy = gTypesInfo[gBattleStruct->stringMoveType].generic;
                else
                    toCpy = GetMoveName(gBattleMsgDataPtr->currentMove);
                break;
            case B_TXT_LAST_MOVE: // originally used move name
                if (gBattleMsgDataPtr->originallyUsedMove >= MOVES_COUNT
                 && !IsZMove(gBattleMsgDataPtr->currentMove)
                 && !IsMaxMove(gBattleMsgDataPtr->currentMove))
                    toCpy = gTypesInfo[gBattleStruct->stringMoveType].generic;
                else
                    toCpy = GetMoveName(gBattleMsgDataPtr->originallyUsedMove);
                break;
            case B_TXT_LAST_ITEM: // last used item
                if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                {
                    if (gLastUsedItem == ITEM_ENIGMA_BERRY_E_READER)
                    {
                        if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
                        {
                            if ((gBattleScripting.multiplayerId != 0 && (gPotentialItemEffectBattler & BIT_SIDE))
                                || (gBattleScripting.multiplayerId == 0 && !(gPotentialItemEffectBattler & BIT_SIDE)))
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = sText_EnigmaBerry;
                            }
                        }
                        else
                        {
                            if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = sText_EnigmaBerry;
                            }
                        }
                    }
                    else
                    {
                        CopyItemName(gLastUsedItem, text);
                        toCpy = text;
                    }
                }
                else
                {
                    CopyItemName(gLastUsedItem, text);
                    toCpy = text;
                }
                break;
            case B_TXT_LAST_ABILITY: // last used ability
                toCpy = gAbilitiesInfo[gLastUsedAbility].name;
                break;
            case B_TXT_ATK_ABILITY: // attacker ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattlerAttacker]].name;
                break;
            case B_TXT_DEF_ABILITY: // target ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattlerTarget]].name;
                break;
            case B_TXT_SCR_ACTIVE_ABILITY: // scripting active ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattleScripting.battler]].name;
                break;
            case B_TXT_EFF_ABILITY: // effect battler ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gEffectBattler]].name;
                break;
            case B_TXT_TRAINER1_CLASS: // trainer class name
                toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                break;
            case B_TXT_TRAINER1_NAME: // trainer1 name
                toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                break;
            case B_TXT_TRAINER1_NAME_WITH_CLASS: // trainer1 name with trainer class
                toCpy = textStart;
                classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, textStart, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_LINK_PLAYER_NAME: // link player name
                toCpy = gLinkPlayers[multiplayerId].name;
                break;
            case B_TXT_LINK_PARTNER_NAME: // link partner name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT1_NAME: // link opponent 1 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT2_NAME: // link opponent 2 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id)))].name;
                break;
            case B_TXT_LINK_SCR_TRAINER_NAME: // link scripting active name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(gBattleScripting.battler)].name;
                break;
            case B_TXT_PLAYER_NAME: // player name
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_LEFT));
                break;
            case B_TXT_TRAINER1_LOSE_TEXT: // trainerA lose text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerALoseText();
                }
                break;
            case B_TXT_TRAINER1_WIN_TEXT: // trainerA win text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_26: // ?
                if (!IsOnPlayerSide(gBattleScripting.battler))
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        toCpy = sText_FoePkmnPrefix;
                    else
                        toCpy = sText_WildPkmnPrefix;
                    while (*toCpy != EOS)
                    {
                        dst[dstID] = *toCpy;
                        dstID++;
                        toCpy++;
                    }
                    GetMonData(&gEnemyParty[gBattleStruct->scriptPartyIdx], MON_DATA_NICKNAME, text);
                }
                else
                {
                    GetMonData(&gPlayerParty[gBattleStruct->scriptPartyIdx], MON_DATA_NICKNAME, text);
                }
                StringGet_Nickname(text);
                toCpy = text;
                break;
            case B_TXT_PC_CREATOR_NAME: // lanette pc
                if (FlagGet(FLAG_SYS_PC_LANETTE))
                    toCpy = sText_Lanettes;
                else
                    toCpy = sText_Someones;
                break;
            case B_TXT_ATK_PREFIX2:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_DEF_PREFIX2:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_ATK_PREFIX1:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_DEF_PREFIX1:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_ATK_PREFIX3:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_DEF_PREFIX3:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_TRAINER2_CLASS:
                toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                break;
            case B_TXT_TRAINER2_NAME:
                toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                break;
            case B_TXT_TRAINER2_NAME_WITH_CLASS:
                toCpy = textStart;
                classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, textStart, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_TRAINER2_LOSE_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerBLoseText();
                }
                break;
            case B_TXT_TRAINER2_WIN_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_PARTNER_CLASS:
                toCpy = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                break;
            case B_TXT_PARTNER_NAME:
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                break;
            case B_TXT_PARTNER_NAME_WITH_CLASS:
                toCpy = textStart;
                classString = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetPlayerName(textStart, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_ATK_TRAINER_NAME:
                toCpy = BattleStringGetTrainerName(text, multiplayerId, gBattlerAttacker);
                break;
            case B_TXT_ATK_TRAINER_CLASS:
                switch (GetBattlerPosition(gBattlerAttacker))
                {
                case B_POSITION_PLAYER_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                        toCpy = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                    break;
                case B_POSITION_OPPONENT_LEFT:
                    toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                    break;
                case B_POSITION_OPPONENT_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                        toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                    else
                        toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                    break;
                }
                break;
            case B_TXT_ATK_TRAINER_NAME_WITH_CLASS:
                toCpy = textStart;
                if (GetBattlerPosition(gBattlerAttacker) == B_POSITION_PLAYER_LEFT)
                {
                    textStart = StringCopy(textStart, BattleStringGetTrainerName(textStart, multiplayerId, gBattlerAttacker));
                }
                else
                {
                    classString = NULL;
                    switch (GetBattlerPosition(gBattlerAttacker))
                    {
                    case B_POSITION_PLAYER_RIGHT:
                        if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                            classString = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                        break;
                    case B_POSITION_OPPONENT_LEFT:
                        classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                        break;
                    case B_POSITION_OPPONENT_RIGHT:
                        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                            classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                        else
                            classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                        break;
                    }
                    classLength = 0;
                    nameLength = 0;
                    while (classString[classLength] != EOS)
                    {
                        textStart[classLength] = classString[classLength];
                        classLength++;
                    }
                    textStart[classLength] = CHAR_SPACE;
                    textStart += 1 + classLength;
                    nameString = BattleStringGetTrainerName(textStart, multiplayerId, gBattlerAttacker);
                    if (nameString != textStart)
                    {
                        while (nameString[nameLength] != EOS)
                        {
                            textStart[nameLength] = nameString[nameLength];
                            nameLength++;
                        }
                        textStart[nameLength] = EOS;
                    }
                }
                break;
            case B_TXT_ATK_TEAM1:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_ATK_TEAM2:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_DEF_TEAM1:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_DEF_TEAM2:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_EFF_TEAM1:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_EFF_TEAM2:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            }

            if (toCpy != NULL)
            {
                while (*toCpy != EOS)
                {
                    if (*toCpy == CHAR_SPACE)
                        dst[dstID] = CHAR_NBSP;
                    else
                        dst[dstID] = *toCpy;
                    dstID++;
                    toCpy++;
                }
            }

            if (*src == B_TXT_TRAINER1_LOSE_TEXT || *src == B_TXT_TRAINER2_LOSE_TEXT
                || *src == B_TXT_TRAINER1_WIN_TEXT || *src == B_TXT_TRAINER2_WIN_TEXT)
            {
                dst[dstID] = EXT_CTRL_CODE_BEGIN;
                dstID++;
                dst[dstID] = EXT_CTRL_CODE_PAUSE_UNTIL_PRESS;
                dstID++;
            }
        }
        else
        {
            dst[dstID] = *src;
            dstID++;
        }
        src++;
    }

    dst[dstID] = *src;
    dstID++;

    BreakStringAutomatic(dst, BATTLE_MSG_MAX_WIDTH, BATTLE_MSG_MAX_LINES, fontId, SHOW_SCROLL_PROMPT);

    return dstID;
}

static void IllusionNickHack(u32 battler, u32 partyId, u8 *dst)
{
    u32 id = PARTY_SIZE;
    // we know it's gEnemyParty
    struct Pokemon *mon = &gEnemyParty[partyId], *partnerMon;

    if (GetMonAbility(mon) == ABILITY_ILLUSION)
    {
        if (IsBattlerAlive(BATTLE_PARTNER(battler)))
            partnerMon = GetBattlerMon(BATTLE_PARTNER(battler));
        else
            partnerMon = mon;

        id = GetIllusionMonPartyId(gEnemyParty, mon, partnerMon, battler);
    }

    if (id != PARTY_SIZE)
        GetMonData(&gEnemyParty[id], MON_DATA_NICKNAME, dst);
    else
        GetMonData(mon, MON_DATA_NICKNAME, dst);
}

void ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst)
{
    u32 srcID = 1;
    u32 value = 0;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u16 hword;

    *dst = EOS;
    while (src[srcID] != B_BUFF_EOS)
    {
        switch (src[srcID])
        {
        case B_BUFF_STRING: // battle string
            hword = T1_READ_16(&src[srcID + 1]);
            StringAppend(dst, gBattleStringsTable[hword]);
            srcID += 3;
            break;
        case B_BUFF_NUMBER: // int to string
            switch (src[srcID + 1])
            {
            case 1:
                value = src[srcID + 3];
                break;
            case 2:
                value = T1_READ_16(&src[srcID + 3]);
                break;
            case 4:
                value = T1_READ_32(&src[srcID + 3]);
                break;
            }
            ConvertIntToDecimalStringN(dst, value, STR_CONV_MODE_LEFT_ALIGN, src[srcID + 2]);
            srcID += src[srcID + 1] + 3;
            break;
        case B_BUFF_MOVE: // move name
            StringAppend(dst, GetMoveName(T1_READ_16(&src[srcID + 1])));
            srcID += 3;
            break;
        case B_BUFF_TYPE: // type name
            StringAppend(dst, gTypesInfo[src[srcID + 1]].name);
            srcID += 2;
            break;
        case B_BUFF_MON_NICK_WITH_PREFIX: // poke nick with prefix
            if (IsOnPlayerSide(src[srcID + 1]))
            {
                GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, nickname);
            }
            else
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                    StringAppend(dst, sText_FoePkmnPrefix);
                else
                    StringAppend(dst, sText_WildPkmnPrefix);

                GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, nickname);
            }
            StringGet_Nickname(nickname);
            StringAppend(dst, nickname);
            srcID += 3;
            break;
        case B_BUFF_STAT: // stats
            StringAppend(dst, gStatNamesTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_SPECIES: // species name
            StringCopy(dst, GetSpeciesName(T1_READ_16(&src[srcID + 1])));
            srcID += 3;
            break;
        case B_BUFF_MON_NICK: // poke nick without prefix
            if (src[srcID + 2] == gBattlerPartyIndexes[src[srcID + 1]])
            {
                GetBattlerNick(src[srcID + 1], dst);
            }
            else if (gBattleScripting.illusionNickHack) // for STRINGID_ENEMYABOUTTOSWITCHPKMN
            {
                gBattleScripting.illusionNickHack = 0;
                IllusionNickHack(src[srcID + 1], src[srcID + 2], dst);
                StringGet_Nickname(dst);
            }
            else
            {
                if (IsOnPlayerSide(src[srcID + 1]))
                    GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                else
                    GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                StringGet_Nickname(dst);
            }
            srcID += 3;
            break;
        case B_BUFF_NEGATIVE_FLAVOR: // flavor table
            StringAppend(dst, gPokeblockWasTooXStringTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_ABILITY: // ability names
            StringAppend(dst, gAbilitiesInfo[T1_READ_16(&src[srcID + 1])].name);
            srcID += 3;
            break;
        case B_BUFF_ITEM: // item name
            hword = T1_READ_16(&src[srcID + 1]);
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (hword == ITEM_ENIGMA_BERRY_E_READER)
                {
                    if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                    {
                        StringCopy(dst, gEnigmaBerries[gPotentialItemEffectBattler].name);
                        StringAppend(dst, sText_BerrySuffix);
                    }
                    else
                    {
                        StringAppend(dst, sText_EnigmaBerry);
                    }
                }
                else
                {
                    CopyItemName(hword, dst);
                }
            }
            else
            {
                CopyItemName(hword, dst);
            }
            srcID += 3;
            break;
        }
    }
}

void BattlePutTextOnWindow(const u8 *text, u8 windowId)
{
    const struct BattleWindowText *textInfo = sBattleTextOnWindowsInfo[gBattleScripting.windowsType];
    bool32 copyToVram;
    struct TextPrinterTemplate printerTemplate;
    u8 speed;

    if (windowId & B_WIN_COPYTOVRAM)
    {
        windowId &= ~B_WIN_COPYTOVRAM;
        copyToVram = FALSE;
    }
    else
    {
        FillWindowPixelBuffer(windowId, textInfo[windowId].fillValue);
        copyToVram = TRUE;
    }

    printerTemplate.currentChar = text;
    printerTemplate.windowId = windowId;
    printerTemplate.fontId = textInfo[windowId].fontId;
    printerTemplate.x = textInfo[windowId].x;
    printerTemplate.y = textInfo[windowId].y;
    printerTemplate.currentX = printerTemplate.x;
    printerTemplate.currentY = printerTemplate.y;
    printerTemplate.letterSpacing = textInfo[windowId].letterSpacing;
    printerTemplate.lineSpacing = textInfo[windowId].lineSpacing;
    printerTemplate.unk = 0;
    printerTemplate.fgColor = textInfo[windowId].fgColor;
    printerTemplate.bgColor = textInfo[windowId].bgColor;
    printerTemplate.shadowColor = textInfo[windowId].shadowColor;

    if (B_WIN_MOVE_NAME_1 <= windowId && windowId <= B_WIN_MOVE_NAME_4)
    {
        // We cannot check the actual width of the window because
        // B_WIN_MOVE_NAME_1 and B_WIN_MOVE_NAME_3 are 16 wide for
        // Z-move details.
        if (gBattleStruct->zmove.viewing && windowId == B_WIN_MOVE_NAME_1)
            printerTemplate.fontId = GetFontIdToFit(text, printerTemplate.fontId, printerTemplate.letterSpacing, 16 * TILE_WIDTH);
        else
            printerTemplate.fontId = GetFontIdToFit(text, printerTemplate.fontId, printerTemplate.letterSpacing, 8 * TILE_WIDTH);
    }

    if (printerTemplate.x == 0xFF)
    {
        u32 width = GetBattleWindowTemplatePixelWidth(gBattleScripting.windowsType, windowId);
        s32 alignX = GetStringCenterAlignXOffsetWithLetterSpacing(printerTemplate.fontId, printerTemplate.currentChar, width, printerTemplate.letterSpacing);
        printerTemplate.x = printerTemplate.currentX = alignX;
    }

    if (windowId == ARENA_WIN_JUDGMENT_TEXT)
        gTextFlags.useAlternateDownArrow = FALSE;
    else
        gTextFlags.useAlternateDownArrow = TRUE;

    if ((gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED)) || gTestRunnerEnabled)
        gTextFlags.autoScroll = TRUE;
    else
        gTextFlags.autoScroll = FALSE;

    if (windowId == B_WIN_MSG || windowId == ARENA_WIN_JUDGMENT_TEXT)
    {
        if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            speed = 1;
        else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            speed = sRecordedBattleTextSpeeds[GetTextSpeedInRecordedBattle()];
        else
            speed = GetPlayerTextSpeedDelay();

        gTextFlags.canABSpeedUpPrint = 1;
    }
    else
    {
        speed = textInfo[windowId].speed;
        gTextFlags.canABSpeedUpPrint = 0;
    }

    AddTextPrinter(&printerTemplate, speed, NULL);

    if (copyToVram)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

void SetPpNumbersPaletteInMoveSelection(u32 battler)
{
    struct ChooseMoveStruct *chooseMoveStruct = (struct ChooseMoveStruct *)(&gBattleResources->bufferA[battler][4]);
    const u16 *palPtr = gPPTextPalette;
    u8 var;

    if (!gBattleStruct->zmove.viewing)
        var = GetCurrentPpToMaxPpState(chooseMoveStruct->currentPp[gMoveSelectionCursor[battler]],
                         chooseMoveStruct->maxPp[gMoveSelectionCursor[battler]]);
    else
        var = 3;

    gPlttBufferUnfaded[BG_PLTT_ID(5) + 12] = palPtr[(var * 2) + 0];
    gPlttBufferUnfaded[BG_PLTT_ID(5) + 11] = palPtr[(var * 2) + 1];

    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 12], &gPlttBufferFaded[ + 12], PLTT_SIZEOF(1));
    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 11], &gPlttBufferFaded[BG_PLTT_ID(5) + 11], PLTT_SIZEOF(1));
}

u8 GetCurrentPpToMaxPpState(u8 currentPp, u8 maxPp)
{
    if (maxPp == currentPp)
    {
        return 3;
    }
    else if (maxPp <= 2)
    {
        if (currentPp > 1)
            return 3;
        else
            return 2 - currentPp;
    }
    else if (maxPp <= 7)
    {
        if (currentPp > 2)
            return 3;
        else
            return 2 - currentPp;
    }
    else
    {
        if (currentPp == 0)
            return 2;
        if (currentPp <= maxPp / 4)
            return 1;
        if (currentPp > maxPp / 2)
            return 3;
    }

    return 0;
}
