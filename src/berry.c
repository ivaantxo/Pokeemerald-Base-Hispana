#include "global.h"
#include "berry.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_control_avatar.h"
#include "fieldmap.h"
#include "item.h"
#include "item_menu.h"
#include "main.h"
#include "random.h"
#include "script_pokemon_util.h"
#include "string_util.h"
#include "text.h"
#include "constants/event_object_movement.h"
#include "constants/items.h"

static u16 BerryTypeToItemId(u16 berry);
static u8 BerryTreeGetNumStagesWatered(struct BerryTree *tree);
static u8 GetNumStagesWateredByBerryTreeId(u8 id);
static u8 CalcBerryYieldInternal(u16 max, u16 min, u8 water);
static u8 CalcBerryYield(struct BerryTree *tree);
static u8 GetBerryCountByBerryTreeId(u8 id);
static u16 GetStageDurationByBerryType(u8);
static u8 GetDrainRateByBerryType(u8);
static u8 GetWaterBonusByBerryType(u8);
static u8 GetWeedingBonusByBerryType(u8);
static u8 GetPestsBonusByBerryType(u8);
static void SetTreeMutations(u8 id, u8 berry);
static u8 GetTreeMutationValue(u8 id);
static u16 GetBerryPestSpecies(u8 berryId);
static void TryForWeeds(struct BerryTree *tree);
static void TryForPests(struct BerryTree *tree);
static void AddTreeBonus(struct BerryTree *tree, u8 bonus);

// Check include/config/overworld.h configs and throw an error if illegal
#if OW_BERRY_GROWTH_RATE < GEN_3 || (OW_BERRY_GROWTH_RATE > GEN_7 && OW_BERRY_GROWTH_RATE != GEN_6_ORAS)
#error "OW_BERRY_GROWTH_RATE must be between GEN_3 and GEN_7!"
#endif

#if OW_BERRY_YIELD_RATE < GEN_3 || (OW_BERRY_YIELD_RATE > GEN_6 && OW_BERRY_YIELD_RATE != GEN_6_ORAS)
#error "OW_BERRY_YIELD_RATE must be between GEN_3 and GEN_6!"
#elif OW_BERRY_YIELD_RATE == GEN_5
#error "OW_BERRY_YIELD_RATE can not be GEN_5!"
#endif

#if OW_BERRY_MOISTURE && OW_BERRY_DRAIN_RATE != GEN_4 && OW_BERRY_DRAIN_RATE != GEN_6_XY && OW_BERRY_DRAIN_RATE != GEN_6_ORAS
#error "OW_BERRY_DRAIN_RATE must be GEN_5, GEN_6_XY or GEN_6_ORAS!"
#endif

#define GROWTH_DURATION(g3, g4, g5, xy, oras, g7) OW_BERRY_GROWTH_RATE == GEN_3 ? g3 : OW_BERRY_GROWTH_RATE == GEN_4 ? g4 : OW_BERRY_GROWTH_RATE == GEN_5 ? g5 : OW_BERRY_GROWTH_RATE == GEN_6_XY ? xy : OW_BERRY_GROWTH_RATE == GEN_6_ORAS ? oras : g7
#define YIELD_RATE(g3, g4, xy, oras) OW_BERRY_YIELD_RATE == GEN_3 ? g3 : OW_BERRY_YIELD_RATE == GEN_4 ? g4 : OW_BERRY_YIELD_RATE == GEN_6_XY ? xy : oras

const struct Berry gBerries[] =
{
    [ITEM_CHERI_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Zreza"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_RED,
        .size = 20,
        .maxYield = YIELD_RATE(3, 5, 15, 20),
        .minYield = YIELD_RATE(2, 2, 4, 4),
        .description1 = COMPOUND_STRING("Florece con delicadas flores bonitas."),
        .description2 = COMPOUND_STRING("La baya roja brillante es muy picante."),
        .growthDuration = GROWTH_DURATION(12, 12, 18, 24, 16, 24),
        .spicy = 10,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 0,
        .smoothness = 25,
        .drainRate = 15,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_CHESTO_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Atania"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_PURPLE,
        .size = 80,
        .maxYield = YIELD_RATE(3, 5, 15, 20),
        .minYield = YIELD_RATE(2, 2, 4, 4),
        .description1 = COMPOUND_STRING("La piel gruesa y la fruta de la baya son"),
        .description2 = COMPOUND_STRING("muy duras. Tiene un sabor seco por todo."),
        .growthDuration = GROWTH_DURATION(12, 12, 18, 24, 16, 24),
        .spicy = 0,
        .dry = 10,
        .sweet = 0,
        .bitter = 0,
        .sour = 0,
        .smoothness = 25,
        .drainRate = 15,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_PECHA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Meloc"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_PINK,
        .size = 40,
        .maxYield = YIELD_RATE(3, 5, 15, 20),
        .minYield = YIELD_RATE(2, 2, 4, 4),
        .description1 = COMPOUND_STRING("Muy dulce y deliciosa."),
        .description2 = COMPOUND_STRING("También muy tierna - manejar con cuidado."),
        .growthDuration = GROWTH_DURATION(12, 12, 18, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 10,
        .bitter = 0,
        .sour = 0,
        .smoothness = 25,
        .drainRate = 15,
        .waterBonus = 10,
        .weedsBonus = 4,
        .pestsBonus = 6,
    },

    [ITEM_RAWST_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Safre"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 32,
        .maxYield = YIELD_RATE(3, 5, 15, 20),
        .minYield = YIELD_RATE(2, 2, 4, 4),
        .description1 = COMPOUND_STRING("Si las hojas crecen largas y rizadas,"),
        .description2 = COMPOUND_STRING("la Baya parece volverse muy amarga."),
        .growthDuration = GROWTH_DURATION(12, 12, 18, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 10,
        .sour = 0,
        .smoothness = 25,
        .drainRate = 15,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_ASPEAR_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Perasi"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_YELLOW,
        .size = 50,
        .maxYield = YIELD_RATE(3, 5, 15, 20),
        .minYield = YIELD_RATE(2, 2, 4, 4),
        .description1 = COMPOUND_STRING("La dura Baya está llena de un rico"),
        .description2 = COMPOUND_STRING("jugo. Es bastante agria."),
        .growthDuration = GROWTH_DURATION(12, 12, 18, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 10,
        .smoothness = 25,
        .drainRate = 15,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_LEPPA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Zanama"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_RED,
        .size = 28,
        .maxYield = YIELD_RATE(3, 5, 15, 22),
        .minYield = YIELD_RATE(2, 2, 2, 2),
        .description1 = COMPOUND_STRING("Crece más lento que la Baya Cheri y otras."),
        .description2 = COMPOUND_STRING("Cuanto más pequeña es la Baya, más sabrosa."),
        .growthDuration = GROWTH_DURATION(16, 16, 24, 24, 16, 24),
        .spicy = 10,
        .dry = 0,
        .sweet = 10,
        .bitter = 10,
        .sour = 10,
        .smoothness = 20,
        .drainRate = 15,
        .waterBonus = 15,
        .weedsBonus = 3,
        .pestsBonus = 6,
    },

    [ITEM_ORAN_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Aranja"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_BLUE,
        .size = 35,
        .maxYield = YIELD_RATE(3, 5, 15, 20),
        .minYield = YIELD_RATE(2, 2, 4, 4),
        .description1 = COMPOUND_STRING("Una Baya peculiar con una mezcla de sabores."),
        .description2 = COMPOUND_STRING("Las Bayas crecen en medio día."),
        .growthDuration = GROWTH_DURATION(12, 16, 24, 24, 16, 24),
        .spicy = 10,
        .dry = 10,
        .sweet = 10,
        .bitter = 10,
        .sour = 10,
        .smoothness = 20,
        .drainRate = 15,
        .waterBonus = 10,
        .weedsBonus = 4,
        .pestsBonus = 6,
    },

    [ITEM_PERSIM_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Caquic"),
    .firmness = BERRY_FIRMNESS_HARD,
    .color = BERRY_COLOR_PINK,
    .size = 47,
    .maxYield = YIELD_RATE(3, 5, 15, 20),
    .minYield = YIELD_RATE(2, 2, 4, 4),
    .description1 = COMPOUND_STRING("Le encanta la luz del sol. El color de la Baya"),
    .description2 = COMPOUND_STRING("se vuelve vivo cuando se expone al sol."),
    .growthDuration = GROWTH_DURATION(12, 16, 24, 24, 16, 24),
    .spicy = 10,
    .dry = 10,
    .sweet = 10,
    .bitter = 10,
    .sour = 10,
    .smoothness = 20,
    .drainRate = 15,
    .waterBonus = 10,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_LUM_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Ziuela"),
    .firmness = BERRY_FIRMNESS_SUPER_HARD,
    .color = BERRY_COLOR_GREEN,
    .size = 34,
    .maxYield = YIELD_RATE(2, 5, 20, 18),
    .minYield = YIELD_RATE(1, 2, 3, 2),
    .description1 = COMPOUND_STRING("Crece lentamente. Si se cultiva con cariño"),
    .description2 = COMPOUND_STRING("puede crecer dos Bayas."),
    .growthDuration = GROWTH_DURATION(48, 48, 72, 48, 32, 48),
    .spicy = 10,
    .dry = 10,
    .sweet = 10,
    .bitter = 10,
    .sour = 10,
    .smoothness = 20,
    .drainRate = 8,
    .waterBonus = 12,
    .weedsBonus = 1,
    .pestsBonus = 6,
},

[ITEM_SITRUS_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Zidra"),
    .firmness = BERRY_FIRMNESS_VERY_HARD,
    .color = BERRY_COLOR_YELLOW,
    .size = 95,
    .maxYield = YIELD_RATE(3, 5, 20, 27),
    .minYield = YIELD_RATE(2, 2, 3, 3),
    .description1 = COMPOUND_STRING("Estrechamente relacionada con Oran. La gran"),
    .description2 = COMPOUND_STRING("Baya tiene un sabor bien equilibrado."),
    .growthDuration = GROWTH_DURATION(24, 32, 48, 48, 32, 48),
    .spicy = 10,
    .dry = 10,
    .sweet = 10,
    .bitter = 10,
    .sour = 10,
    .smoothness = 20,
    .drainRate = 7,
    .waterBonus = 12,
    .weedsBonus = 1,
    .pestsBonus = 6,
},

[ITEM_FIGY_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Higog"),
    .firmness = BERRY_FIRMNESS_SOFT,
    .color = BERRY_COLOR_RED,
    .size = 100,
    .maxYield = YIELD_RATE(3, 5, 15, 15),
    .minYield = YIELD_RATE(2, 1, 3, 3),
    .description1 = COMPOUND_STRING("La Baya, que parece masticada,"),
    .description2 = COMPOUND_STRING("rebosa de sustancias picantes."),
    .growthDuration = GROWTH_DURATION(24, 20, 30, 24, 16, 24),
    .spicy = 10,
    .dry = 0,
    .sweet = 0,
    .bitter = 0,
    .sour = 0,
    .smoothness = 25,
    .drainRate = 10,
    .waterBonus = 15,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_WIKI_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Wiki"),
    .firmness = BERRY_FIRMNESS_HARD,
    .color = BERRY_COLOR_PURPLE,
    .size = 115,
    .maxYield = YIELD_RATE(3, 5, 15, 15),
    .minYield = YIELD_RATE(2, 1, 3, 3),
    .description1 = COMPOUND_STRING("Se dice que la Baya se ha vuelto grumosa"),
    .description2 = COMPOUND_STRING("para ayudar a los Pokémon a agarrarla."),
    .growthDuration = GROWTH_DURATION(24, 20, 30, 24, 16, 24),
    .spicy = 0,
    .dry = 10,
    .sweet = 0,
    .bitter = 0,
    .sour = 0,
    .smoothness = 25,
    .drainRate = 10,
    .waterBonus = 15,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_MAGO_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Ango"),
    .firmness = BERRY_FIRMNESS_HARD,
    .color = BERRY_COLOR_PINK,
    .size = 126,
    .maxYield = YIELD_RATE(3, 5, 15, 15),
    .minYield = YIELD_RATE(2, 1, 3, 3),
    .description1 = COMPOUND_STRING("La Baya se vuelve curva a medida que crece."),
    .description2 = COMPOUND_STRING("Cuanto más curva, más dulce y sabrosa."),
    .growthDuration = GROWTH_DURATION(24, 20, 30, 24, 16, 24),
    .spicy = 0,
    .dry = 0,
    .sweet = 10,
    .bitter = 0,
    .sour = 0,
    .smoothness = 25,
    .drainRate = 10,
    .waterBonus = 15,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_AGUAV_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Guaya"),
    .firmness = BERRY_FIRMNESS_SUPER_HARD,
    .color = BERRY_COLOR_GREEN,
    .size = 64,
    .maxYield = YIELD_RATE(3, 5, 15, 15),
    .minYield = YIELD_RATE(2, 1, 3, 3),
    .description1 = COMPOUND_STRING("La flor es delicada. Es rara en su"),
    .description2 = COMPOUND_STRING("capacidad de crecer sin luz."),
    .growthDuration = GROWTH_DURATION(24, 20, 30, 24, 16, 24),
    .spicy = 0,
    .dry = 0,
    .sweet = 0,
    .bitter = 10,
    .sour = 0,
    .smoothness = 25,
    .drainRate = 10,
    .waterBonus = 15,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_IAPAPA_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Pabaya"),
    .firmness = BERRY_FIRMNESS_SOFT,
    .color = BERRY_COLOR_YELLOW,
    .size = 223,
    .maxYield = YIELD_RATE(3, 5, 15, 15),
    .minYield = YIELD_RATE(2, 1, 3, 3),
    .description1 = COMPOUND_STRING("La Baya es muy grande y ácida."),
    .description2 = COMPOUND_STRING("Tarda al menos un día en crecer."),
    .growthDuration = GROWTH_DURATION(24, 20, 30, 24, 16, 24),
    .spicy = 0,
    .dry = 0,
    .sweet = 0,
    .bitter = 0,
    .sour = 10,
    .smoothness = 25,
    .drainRate = 10,
    .waterBonus = 15,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_RAZZ_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Frambu"),
    .firmness = BERRY_FIRMNESS_VERY_HARD,
    .color = BERRY_COLOR_RED,
    .size = 120,
    .maxYield = YIELD_RATE(6, 10, 15, 20),
    .minYield = YIELD_RATE(3, 2, 3, 4),
    .description1 = COMPOUND_STRING("La Baya roja tiene un sabor ligeramente picante."),
    .description2 = COMPOUND_STRING("Crece rápidamente en solo cuatro horas."),
    .growthDuration = GROWTH_DURATION(4, 8, 12, 24, 16, 24),
    .spicy = 10,
    .dry = 10,
    .sweet = 0,
    .bitter = 0,
    .sour = 0,
    .smoothness = 20,
    .drainRate = 35,
    .waterBonus = 10,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_BLUK_BERRY - FIRST_BERRY_INDEX] =
{
    .name = _("Oram"),
    .firmness = BERRY_FIRMNESS_SOFT,
    .color = BERRY_COLOR_PURPLE,
    .size = 108,
    .maxYield = YIELD_RATE(6, 10, 15, 20),
    .minYield = YIELD_RATE(3, 2, 3, 4),
    .description1 = COMPOUND_STRING("La Baya es azul por fuera, pero"),
    .description2 = COMPOUND_STRING("negrea la boca al comerla."),
    .growthDuration = GROWTH_DURATION(4, 8, 12, 24, 16, 24),
    .spicy = 0,
    .dry = 10,
    .sweet = 10,
    .bitter = 0,
    .sour = 0,
    .smoothness = 20,
    .drainRate = 35,
    .waterBonus = 10,
    .weedsBonus = 2,
    .pestsBonus = 6,
},

[ITEM_NANAB_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Latano"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_PINK,
        .size = 77,
        .maxYield = YIELD_RATE(6, 10, 15, 20),
        .minYield = YIELD_RATE(3, 2, 3, 4),
        .description1 = COMPOUND_STRING("Esta Baya fue la séptima"),
        .description2 = COMPOUND_STRING("descubierta en el mundo. Es dulce."),
        .growthDuration = GROWTH_DURATION(4, 8, 12, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 10,
        .bitter = 10,
        .sour = 0,
        .smoothness = 20,
        .drainRate = 35,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

[ITEM_WEPEAR_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Peragu"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 74,
        .maxYield = YIELD_RATE(6, 10, 15, 20),
        .minYield = YIELD_RATE(3, 2, 3, 4),
        .description1 = COMPOUND_STRING("La flor es pequeña y blanca. Tiene un"),
        .description2 = COMPOUND_STRING("delicado equilibrio de amargo y ácido."),
        .growthDuration = GROWTH_DURATION(4, 8, 12, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 10,
        .sour = 10,
        .smoothness = 20,
        .drainRate = 35,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

[ITEM_PINAP_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Pinia"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_YELLOW,
        .size = 80,
        .maxYield = YIELD_RATE(6, 10, 15, 20),
        .minYield = YIELD_RATE(3, 2, 3, 4),
        .description1 = COMPOUND_STRING("Débil contra el viento y el frío."),
        .description2 = COMPOUND_STRING("El fruto es picante y la piel, ácida."),
        .growthDuration = GROWTH_DURATION(4, 8, 12, 24, 16, 24),
        .spicy = 10,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 10,
        .smoothness = 20,
        .drainRate = 35,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

[ITEM_POMEG_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Grana"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_RED,
        .size = 135,
        .maxYield = YIELD_RATE(6, 5, 20, 26),
        .minYield = YIELD_RATE(2, 1, 1, 2),
        .description1 = COMPOUND_STRING("Por más que se riegue,"),
        .description2 = COMPOUND_STRING("solo crece hasta seis Bayas."),
        .growthDuration = GROWTH_DURATION(12, 32, 48, 48, 32, 48),
        .spicy = 10,
        .dry = 0,
        .sweet = 10,
        .bitter = 10,
        .sour = 0,
        .smoothness = 20,
        .drainRate = 8,
        .waterBonus = 5,
        .weedsBonus = 3,
        .pestsBonus = 6,
    },

[ITEM_KELPSY_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Algama"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_BLUE,
        .size = 150,
        .maxYield = YIELD_RATE(6, 5, 20, 26),
        .minYield = YIELD_RATE(2, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una variedad rara en forma de raíz."),
        .description2 = COMPOUND_STRING("Produce una flor muy grande."),
        .growthDuration = GROWTH_DURATION(12, 32, 48, 48, 32, 48),
        .spicy = 0,
        .dry = 10,
        .sweet = 0,
        .bitter = 10,
        .sour = 10,
        .smoothness = 20,
        .drainRate = 8,
        .waterBonus = 5,
        .weedsBonus = 3,
        .pestsBonus = 6,
    },

[ITEM_QUALOT_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Ispero"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_YELLOW,
        .size = 110,
        .maxYield = YIELD_RATE(6, 5, 20, 26),
        .minYield = YIELD_RATE(2, 1, 1, 2),
        .description1 = COMPOUND_STRING("Adora el agua. Crece fuerte incluso en"),
        .description2 = COMPOUND_STRING("lugares con lluvias constantes."),
        .growthDuration = GROWTH_DURATION(12, 32, 48, 48, 32, 48),
        .spicy = 10,
        .dry = 0,
        .sweet = 10,
        .bitter = 0,
        .sour = 10,
        .smoothness = 20,
        .drainRate = 8,
        .waterBonus = 5,
        .weedsBonus = 3,
        .pestsBonus = 6,
    },

[ITEM_HONDEW_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Meluce"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 162,
        .maxYield = YIELD_RATE(6, 5, 20, 26),
        .minYield = YIELD_RATE(2, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una Baya muy valiosa y"),
        .description2 = COMPOUND_STRING("rara vez vista. Es muy deliciosa."),
        .growthDuration = GROWTH_DURATION(12, 32, 48, 48, 32, 48),
        .spicy = 10,
        .dry = 10,
        .sweet = 0,
        .bitter = 10,
        .sour = 0,
        .smoothness = 20,
        .drainRate = 8,
        .waterBonus = 5,
        .weedsBonus = 3,
        .pestsBonus = 6,
    },

[ITEM_GREPA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Uvav"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_YELLOW,
        .size = 149,
        .maxYield = YIELD_RATE(6, 5, 20, 26),
        .minYield = YIELD_RATE(2, 1, 1, 2),
        .description1 = COMPOUND_STRING("A pesar de su suavidad y forma redonda,"),
        .description2 = COMPOUND_STRING("la Baya es increíblemente ácida."),
        .growthDuration = GROWTH_DURATION(12, 32, 48, 48, 32, 48),
        .spicy = 0,
        .dry = 10,
        .sweet = 10,
        .bitter = 0,
        .sour = 10,
        .smoothness = 20,
        .drainRate = 8,
        .waterBonus = 5,
        .weedsBonus = 3,
        .pestsBonus = 6,
    },

[ITEM_TAMATO_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Tamate"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_RED,
        .size = 200,
        .maxYield = YIELD_RATE(4, 5, 20, 26),
        .minYield = YIELD_RATE(2, 1, 1, 2),
        .description1 = COMPOUND_STRING("La Baya es increíblemente picante."),
        .description2 = COMPOUND_STRING("Toma tiempo en crecer."),
        .growthDuration = GROWTH_DURATION(24, 32, 48, 48, 32, 48),
        .spicy = 20,
        .dry = 10,
        .sweet = 0,
        .bitter = 0,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 8,
        .waterBonus = 5,
        .weedsBonus = 3,
        .pestsBonus = 6,
    },

[ITEM_CORNN_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Mais"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_PURPLE,
        .size = 75,
        .maxYield = YIELD_RATE(4, 10, 15, 15),
        .minYield = YIELD_RATE(2, 2, 3, 3),
        .description1 = COMPOUND_STRING("Una Baya de una era antigua. Puede no"),
        .description2 = COMPOUND_STRING("crecer a menos que se plante en cantidad."),
        .growthDuration = GROWTH_DURATION(24, 24, 36, 24, 16, 24),
        .spicy = 0,
        .dry = 20,
        .sweet = 10,
        .bitter = 0,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 10,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

[ITEM_MAGOST_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Aostan"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_PINK,
        .size = 140,
        .maxYield = YIELD_RATE(4, 10, 15, 15),
        .minYield = YIELD_RATE(2, 2, 3, 3),
        .description1 = COMPOUND_STRING("Una Baya que se dice tener un sabor"),
        .description2 = COMPOUND_STRING("finamente equilibrado."),
        .growthDuration = GROWTH_DURATION(24, 24, 36, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 20,
        .bitter = 10,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 10,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

[ITEM_RABUTA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Rautan"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_GREEN,
        .size = 226,
        .maxYield = YIELD_RATE(4, 10, 15, 15),
        .minYield = YIELD_RATE(2, 2, 3, 3),
        .description1 = COMPOUND_STRING("Una variedad rara que está cubierta de"),
        .description2 = COMPOUND_STRING("pelos. Es bastante amarga."),
        .growthDuration = GROWTH_DURATION(24, 24, 36, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 20,
        .sour = 10,
        .smoothness = 30,
        .drainRate = 10,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

[ITEM_NOMEL_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Monli"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_YELLOW,
        .size = 285,
        .maxYield = YIELD_RATE(4, 10, 15, 15),
        .minYield = YIELD_RATE(2, 2, 3, 3),
        .description1 = COMPOUND_STRING("Muy ácida. Solo una mordida hace que"),
        .description2 = COMPOUND_STRING("sea imposible saborear por tres días."),
        .growthDuration = GROWTH_DURATION(24, 24, 36, 24, 16, 24),
        .spicy = 10,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 20,
        .smoothness = 30,
        .drainRate = 10,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

[ITEM_SPELON_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Wikano"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_RED,
        .size = 133,
        .maxYield = YIELD_RATE(2, 15, 15, 15),
        .minYield = YIELD_RATE(1, 2, 3, 3),
        .description1 = COMPOUND_STRING("La Baya de color rojo vivo es muy picante."),
        .description2 = COMPOUND_STRING("Sus verrugas secretan una sustancia picante."),
        .growthDuration = GROWTH_DURATION(72, 60, 90, 24, 16, 24),
        .spicy = 40,
        .dry = 10,
        .sweet = 0,
        .bitter = 0,
        .sour = 0,
        .smoothness = 70,
        .drainRate = 8,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

        [ITEM_PAMTRE_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Plama"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_PURPLE,
        .size = 244,
        .maxYield = YIELD_RATE(2, 15, 15, 15),
        .minYield = YIELD_RATE(1, 3, 3, 3),
        .description1 = COMPOUND_STRING("Deriva en el mar desde algún lugar."),
        .description2 = COMPOUND_STRING("Se cree que crece en otro lugar."),
        .growthDuration = GROWTH_DURATION(72, 60, 90, 24, 16, 24),
        .spicy = 0,
        .dry = 40,
        .sweet = 10,
        .bitter = 0,
        .sour = 0,
        .smoothness = 70,
        .drainRate = 8,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_WATMEL_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Sambia"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_PINK,
        .size = 250,
        .maxYield = YIELD_RATE(2, 15, 15, 15),
        .minYield = YIELD_RATE(1, 2, 3, 3),
        .description1 = COMPOUND_STRING("Una baya enorme, con algunas de más de 20"),
        .description2 = COMPOUND_STRING("pulgadas descubiertas. Extremadamente dulce."),
        .growthDuration = GROWTH_DURATION(72, 60, 90, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 40,
        .bitter = 10,
        .sour = 0,
        .smoothness = 70,
        .drainRate = 8,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_DURIN_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Rudion"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 280,
        .maxYield = YIELD_RATE(2, 15, 15, 15),
        .minYield = YIELD_RATE(1, 3, 3, 3),
        .description1 = COMPOUND_STRING("Amargo hasta al mirarlo. Es tan"),
        .description2 = COMPOUND_STRING("amargo que nadie lo ha comido tal cual."),
        .growthDuration = GROWTH_DURATION(72, 60, 90, 24, 16, 24),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 40,
        .sour = 10,
        .smoothness = 70,
        .drainRate = 8,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_BELUE_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Andano"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_PURPLE,
        .size = 300,
        .maxYield = YIELD_RATE(2, 15, 15, 15),
        .minYield = YIELD_RATE(1, 2, 3, 3),
        .description1 = COMPOUND_STRING("Es brillante y parece deliciosa, pero"),
        .description2 = COMPOUND_STRING("es terriblemente ácida. Toma tiempo en crecer."),
        .growthDuration = GROWTH_DURATION(72, 60, 90, 24, 16, 24),
        .spicy = 10,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 40,
        .smoothness = 70,
        .drainRate = 8,
        .waterBonus = 10,
        .weedsBonus = 2,
        .pestsBonus = 6,
    },

    [ITEM_CHILAN_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Chilan"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_YELLOW,
        .size = 34,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Puede convertirse en una flauta que"),
        .description2 = COMPOUND_STRING("produce un sonido indescriptible."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 25,
        .sweet = 10,
        .bitter = 0,
        .sour = 0,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_OCCA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Caoca"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_RED,
        .size = 90,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Se dice que crece en los trópicos una vez,"),
        .description2 = COMPOUND_STRING("presume de una picanteza intensamente caliente."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 15,
        .dry = 0,
        .sweet = 10,
        .bitter = 0,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_PASSHO_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Pasio"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_BLUE,
        .size = 33,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Su pulpa está salpicada de muchas pequeñas"),
        .description2 = COMPOUND_STRING("burbujas que la mantienen a flote en el agua."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 15,
        .sweet = 0,
        .bitter = 10,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_WACAN_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Gualot"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_YELLOW,
        .size = 250,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("La energía proveniente de los rayos"),
        .description2 = COMPOUND_STRING("hace que esta baya crezca grande y rica."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 0,
        .sweet = 15,
        .bitter = 0,
        .sour = 10,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_RINDO_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Tamar"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_GREEN,
        .size = 156,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Una baya exótica de un verde raro que"),
        .description2 = COMPOUND_STRING("crece en los trópicos. Su sabor es ligeramente ácido."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 15,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

        [ITEM_YACHE_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Rimoya"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_BLUE,
        .size = 135,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Esta baya tiene un sabor seco y"),
        .description2 = COMPOUND_STRING("ácido refrescante. Sabe mejor fría."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 10,
        .sweet = 0,
        .bitter = 0,
        .sour = 15,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_CHOPLE_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Pomaro"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_RED,
        .size = 77,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Contiene una sustancia que genera"),
        .description2 = COMPOUND_STRING("calor. Puede incluso encender un corazón frío."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 15,
        .dry = 0,
        .sweet = 0,
        .bitter = 10,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_KEBIA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Kebia"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 90,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("De color verde brillante por fuera, en"),
        .description2 = COMPOUND_STRING("su interior está llena de pulpa negra."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 15,
        .sweet = 0,
        .bitter = 0,
        .sour = 10,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_SHUCA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Acardo"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_YELLOW,
        .size = 42,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("La pulpa dulce tiene solo un toque de"),
        .description2 = COMPOUND_STRING("un mordisco afilado y fragante."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 10,
        .dry = 0,
        .sweet = 15,
        .bitter = 0,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_COBA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Kouba"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_BLUE,
        .size = 278,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Se dice que esta baya es un cruce de"),
        .description2 = COMPOUND_STRING("dos bayas sopladas desde lejos."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 10,
        .sweet = 0,
        .bitter = 15,
        .sour = 0,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_PAYAPA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Payapa"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_PURPLE,
        .size = 252,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Se dice que percibe las emociones humanas,"),
        .description2 = COMPOUND_STRING("se hincha redondeadamente cuando alguien se acerca."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 0,
        .sweet = 10,
        .bitter = 0,
        .sour = 15,
        .smoothness = 30,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_TANGA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Yecana"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_GREEN,
        .size = 42,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Crece una flor en la punta que atrae"),
        .description2 = COMPOUND_STRING("a Pokémon Insecto con sus pétalos sedosos."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 20,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 10,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_CHARTI_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Alcho"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_YELLOW,
        .size = 28,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("A menudo se usa para encurtidos debido a su"),
        .description2 = COMPOUND_STRING("sabor seco. A veces se come crudo."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 10,
        .dry = 20,
        .sweet = 0,
        .bitter = 0,
        .sour = 0,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_KASIB_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Drasi"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_PURPLE,
        .size = 144,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Antiguas supersticiones dicen que tiene un"),
        .description2 = COMPOUND_STRING("poder extraño. Un popular amuleto de buena suerte."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 10,
        .sweet = 20,
        .bitter = 0,
        .sour = 0,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_HABAN_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Anjiro"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_RED,
        .size = 23,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Menos amargo si se hierve lo suficiente,"),
        .description2 = COMPOUND_STRING("hace una buena mermelada."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 0,
        .sweet = 10,
        .bitter = 20,
        .sour = 0,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_COLBUR_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Dillo"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_PURPLE,
        .size = 39,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Pequeños ganchos en la superficie se adhieren a"),
        .description2 = COMPOUND_STRING("Pokémon para llegar a lugares lejanos."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 10,
        .sour = 20,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_BABIRI_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Baribá"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 265,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("Muy dura con un sabor fuerte. Se"),
        .description2 = COMPOUND_STRING("usaba para hacer medicina en el pasado."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 25,
        .dry = 10,
        .sweet = 0,
        .bitter = 0,
        .sour = 0,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

        [ITEM_ROSELI_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Hibis"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_PINK,
        .size = 35,
        .maxYield = YIELD_RATE(5, 5, 20, 10),
        .minYield = YIELD_RATE(2, 1, 3, 2),
        .description1 = COMPOUND_STRING("En la naturaleza, crecen en anillos amplios"),
        .description2 = COMPOUND_STRING("por razones aún desconocidas."),
        .growthDuration = GROWTH_DURATION(84, 72, 108, 48, 32, 48),
        .spicy = 0,
        .dry = 0,
        .sweet = 25,
        .bitter = 10,
        .sour = 0,
        .smoothness = 35,
        .drainRate = 6,
        .waterBonus = 10,
        .weedsBonus = 1,
        .pestsBonus = 4,
    },

    [ITEM_LIECHI_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Liechi"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_RED,
        .size = 111,
        .maxYield = YIELD_RATE(2, 5, 10, 13),
        .minYield = YIELD_RATE(1, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una baya misteriosa. Se rumorea que"),
        .description2 = COMPOUND_STRING("contiene el poder del mar."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 96, 48, 72),
        .spicy = 40,
        .dry = 0,
        .sweet = 40,
        .bitter = 0,
        .sour = 10,
        .smoothness = 80,
        .drainRate = 4,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 2,
    },

    [ITEM_GANLON_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Gonlan"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_PURPLE,
        .size = 33,
        .maxYield = YIELD_RATE(2, 5, 10, 13),
        .minYield = YIELD_RATE(1, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una baya misteriosa. Se rumorea que"),
        .description2 = COMPOUND_STRING("contiene el poder de la tierra."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 96, 48, 72),
        .spicy = 0,
        .dry = 40,
        .sweet = 0,
        .bitter = 40,
        .sour = 0,
        .smoothness = 80,
        .drainRate = 4,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 2,
    },

    [ITEM_SALAC_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Aslac"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 95,
        .maxYield = YIELD_RATE(2, 5, 10, 13),
        .minYield = YIELD_RATE(1, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una baya misteriosa. Se rumorea que"),
        .description2 = COMPOUND_STRING("contiene el poder del cielo."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 96, 48, 72),
        .spicy = 0,
        .dry = 0,
        .sweet = 40,
        .bitter = 0,
        .sour = 40,
        .smoothness = 80,
        .drainRate = 4,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 2,
    },

    [ITEM_PETAYA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Yapati"),
        .firmness = BERRY_FIRMNESS_VERY_HARD,
        .color = BERRY_COLOR_PINK,
        .size = 237,
        .maxYield = YIELD_RATE(2, 5, 10, 13),
        .minYield = YIELD_RATE(1, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una baya misteriosa. Se rumorea que"),
        .description2 = COMPOUND_STRING("contiene el poder de todos los seres vivos."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 96, 48, 72),
        .spicy = 40,
        .dry = 0,
        .sweet = 0,
        .bitter = 40,
        .sour = 0,
        .smoothness = 80,
        .drainRate = 4,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 2,
    },

    [ITEM_APICOT_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Aricot"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_BLUE,
        .size = 75,
        .maxYield = YIELD_RATE(2, 5, 10, 13),
        .minYield = YIELD_RATE(1, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una baya muy misteriosa. No hay forma de"),
        .description2 = COMPOUND_STRING("saber lo que puede suceder o cómo puede ser utilizada."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 96, 48, 72),
        .spicy = 0,
        .dry = 40,
        .sweet = 0,
        .bitter = 0,
        .sour = 40,
        .smoothness = 80,
        .drainRate = 4,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 2,
    },

    [ITEM_LANSAT_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Zonlan"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_RED,
        .size = 97,
        .maxYield = YIELD_RATE(2, 5, 5, 7),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("Se dice que es una baya legendaria."),
        .description2 = COMPOUND_STRING("Sostenerla supuestamente trae alegría."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 120, 48, 72),
        .spicy = 10,
        .dry = 10,
        .sweet = 10,
        .bitter = 10,
        .sour = 10,
        .smoothness = 30,
        .drainRate = 4,
        .waterBonus = 1,
        .weedsBonus = 0,
        .pestsBonus = 1,
    },

    [ITEM_STARF_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Arabol"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_GREEN,
        .size = 153,
        .maxYield = YIELD_RATE(2, 5, 5, 7),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("Tan fuerte, que fue abandonado en el"),
        .description2 = COMPOUND_STRING("borde del mundo. Considerado un espejismo."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 120, 48, 72),
        .spicy = 10,
        .dry = 10,
        .sweet = 10,
        .bitter = 10,
        .sour = 10,
        .smoothness = 30,
        .drainRate = 4,
        .waterBonus = 1,
        .weedsBonus = 0,
        .pestsBonus = 1,
    },

    [ITEM_ENIGMA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Enigma"),
        .firmness = BERRY_FIRMNESS_HARD,
        .color = BERRY_COLOR_PURPLE,
        .size = 155,
        .maxYield = YIELD_RATE(2, 5, 5, 13),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("Una baya completamente enigmática."),
        .description2 = COMPOUND_STRING("Parece tener el poder de las estrellas."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 72, 48, 72),
        .spicy = 40,
        .dry = 10,
        .sweet = 0,
        .bitter = 0,
        .sour = 0,
        .smoothness = 60,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 0,
    },

    [ITEM_MICLE_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Lagro"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_GREEN,
        .size = 41,
        .maxYield = YIELD_RATE(2, 5, 5, 13),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("Hace que otros alimentos consumidos al mismo"),
        .description2 = COMPOUND_STRING("tiempo sepan dulces."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 72, 48, 72),
        .spicy = 0,
        .dry = 40,
        .sweet = 10,
        .bitter = 0,
        .sour = 0,
        .smoothness = 60,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 0,
    },

    [ITEM_CUSTAP_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Chiri"),
        .firmness = BERRY_FIRMNESS_SUPER_HARD,
        .color = BERRY_COLOR_RED,
        .size = 267,
        .maxYield = YIELD_RATE(2, 5, 5, 13),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("La pulpa debajo de la piel de la Baya Custap"),
        .description2 = COMPOUND_STRING("es dulce y cremosa."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 72, 48, 72),
        .spicy = 0,
        .dry = 0,
        .sweet = 40,
        .bitter = 10,
        .sour = 0,
        .smoothness = 60,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 0,
    },

    [ITEM_JABOCA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Jaboca"),
        .firmness = BERRY_FIRMNESS_SOFT,
        .color = BERRY_COLOR_YELLOW,
        .size = 33,
        .maxYield = YIELD_RATE(2, 5, 5, 13),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("Los drupas que componen esta baya"),
        .description2 = COMPOUND_STRING("rebotan rítmicamente si se manejan bruscamente."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 72, 48, 72),
        .spicy = 0,
        .dry = 0,
        .sweet = 0,
        .bitter = 40,
        .sour = 10,
        .smoothness = 60,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 0,
    },

    [ITEM_ROWAP_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Magua"),
        .firmness = BERRY_FIRMNESS_VERY_SOFT,
        .color = BERRY_COLOR_BLUE,
        .size = 52,
        .maxYield = YIELD_RATE(2, 5, 5, 13),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("La gente solía hacer piezas en forma de"),
        .description2 = COMPOUND_STRING("top de esta baya para usarlas como juguetes."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 72, 48, 72),
        .spicy = 10,
        .dry = 0,
        .sweet = 0,
        .bitter = 0,
        .sour = 40,
        .smoothness = 60,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 0,
    },

    [ITEM_KEE_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Biglia"),
        .firmness = BERRY_FIRMNESS_UNKNOWN,
        .color = BERRY_COLOR_YELLOW,
        .size = 0,
        .maxYield = YIELD_RATE(2, 5, 10, 13),
        .minYield = YIELD_RATE(1, 1, 1, 2),
        .description1 = COMPOUND_STRING("Una baya que es increíblemente picante al"),
        .description2 = COMPOUND_STRING("principio, y luego extremadamente amarga."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 96, 48, 72),
        .spicy = 30,
        .dry = 30,
        .sweet = 10,
        .bitter = 10,
        .sour = 10,
        .smoothness = 60,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 2,
    },

    [ITEM_MARANGA_BERRY - FIRST_BERRY_INDEX] =
    {
        .name = _("Marnga"), // "Maranga" es demasiado largo
        .firmness = BERRY_FIRMNESS_UNKNOWN,
        .color = BERRY_COLOR_BLUE,
        .size = 0,
        .maxYield = YIELD_RATE(2, 5, 10, 13),
        .minYield = YIELD_RATE(1, 1, 1, 2),
        .description1 = COMPOUND_STRING("Su exterior es muy amargo, pero su"),
        .description2 = COMPOUND_STRING("interior sabe como una bebida dulce."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 96, 48, 72),
        .spicy = 10,
        .dry = 10,
        .sweet = 30,
        .bitter = 30,
        .sour = 10,
        .smoothness = 60,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 2,
    },

    [ITEM_ENIGMA_BERRY_E_READER - FIRST_BERRY_INDEX] =
    {
        .name = _("Enigma"),
        .firmness = BERRY_FIRMNESS_UNKNOWN,
        .color = BERRY_COLOR_PURPLE,
        .size = 0,
        .maxYield = YIELD_RATE(2, 5, 5, 13),
        .minYield = YIELD_RATE(1, 1, 1, 1),
        .description1 = COMPOUND_STRING("Una baya completamente enigmática."),
        .description2 = COMPOUND_STRING("Parece tener el poder de las estrellas."),
        .growthDuration = GROWTH_DURATION(96, 96, 144, 72, 48, 72),
        .spicy = 40,
        .dry = 40,
        .sweet = 40,
        .bitter = 40,
        .sour = 40,
        .smoothness = 40,
        .drainRate = 7,
        .waterBonus = 2,
        .weedsBonus = 0,
        .pestsBonus = 0,
    },
};

const struct BerryCrushBerryData gBerryCrush_BerryData[] = {
    [ITEM_CHERI_BERRY - FIRST_BERRY_INDEX]           = {.difficulty =  50, .powder =  20},
    [ITEM_CHESTO_BERRY - FIRST_BERRY_INDEX]          = {.difficulty =  50, .powder =  20},
    [ITEM_PECHA_BERRY - FIRST_BERRY_INDEX]           = {.difficulty =  50, .powder =  20},
    [ITEM_RAWST_BERRY - FIRST_BERRY_INDEX]           = {.difficulty =  50, .powder =  20},
    [ITEM_ASPEAR_BERRY - FIRST_BERRY_INDEX]          = {.difficulty =  50, .powder =  20},
    [ITEM_LEPPA_BERRY - FIRST_BERRY_INDEX]           = {.difficulty =  50, .powder =  30},
    [ITEM_ORAN_BERRY - FIRST_BERRY_INDEX]            = {.difficulty =  50, .powder =  30},
    [ITEM_PERSIM_BERRY - FIRST_BERRY_INDEX]          = {.difficulty =  50, .powder =  30},
    [ITEM_LUM_BERRY - FIRST_BERRY_INDEX]             = {.difficulty =  50, .powder =  30},
    [ITEM_SITRUS_BERRY - FIRST_BERRY_INDEX]          = {.difficulty =  50, .powder =  30},
    [ITEM_FIGY_BERRY - FIRST_BERRY_INDEX]            = {.difficulty =  60, .powder =  50},
    [ITEM_WIKI_BERRY - FIRST_BERRY_INDEX]            = {.difficulty =  60, .powder =  50},
    [ITEM_MAGO_BERRY - FIRST_BERRY_INDEX]            = {.difficulty =  60, .powder =  50},
    [ITEM_AGUAV_BERRY - FIRST_BERRY_INDEX]           = {.difficulty =  60, .powder =  50},
    [ITEM_IAPAPA_BERRY - FIRST_BERRY_INDEX]          = {.difficulty =  60, .powder =  50},
    [ITEM_RAZZ_BERRY - FIRST_BERRY_INDEX]            = {.difficulty =  80, .powder =  70},
    [ITEM_BLUK_BERRY - FIRST_BERRY_INDEX]            = {.difficulty =  80, .powder =  70},
    [ITEM_NANAB_BERRY - FIRST_BERRY_INDEX]           = {.difficulty =  80, .powder =  70},
    [ITEM_WEPEAR_BERRY - FIRST_BERRY_INDEX]          = {.difficulty =  80, .powder =  70},
    [ITEM_PINAP_BERRY - FIRST_BERRY_INDEX]           = {.difficulty =  80, .powder =  70},
    [ITEM_POMEG_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 100, .powder = 100},
    [ITEM_KELPSY_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 100, .powder = 100},
    [ITEM_QUALOT_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 100, .powder = 100},
    [ITEM_HONDEW_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 100, .powder = 100},
    [ITEM_GREPA_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 100, .powder = 100},
    [ITEM_TAMATO_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 130, .powder = 150},
    [ITEM_CORNN_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 130, .powder = 150},
    [ITEM_MAGOST_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 130, .powder = 150},
    [ITEM_RABUTA_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 130, .powder = 150},
    [ITEM_NOMEL_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 130, .powder = 150},
    [ITEM_SPELON_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 160, .powder = 250},
    [ITEM_PAMTRE_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 160, .powder = 250},
    [ITEM_WATMEL_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 160, .powder = 250},
    [ITEM_DURIN_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 160, .powder = 250},
    [ITEM_BELUE_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 160, .powder = 250},
    [ITEM_LIECHI_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 180, .powder = 500},
    [ITEM_GANLON_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 180, .powder = 500},
    [ITEM_SALAC_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 180, .powder = 500},
    [ITEM_PETAYA_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 180, .powder = 500},
    [ITEM_APICOT_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 180, .powder = 500},
    [ITEM_LANSAT_BERRY - FIRST_BERRY_INDEX]          = {.difficulty = 200, .powder = 750},
    [ITEM_STARF_BERRY - FIRST_BERRY_INDEX]           = {.difficulty = 200, .powder = 750},
    [ITEM_ENIGMA_BERRY_E_READER - FIRST_BERRY_INDEX] = {.difficulty = 150, .powder = 200}
};

const struct BerryTree gBlankBerryTree = {};

void SetEnigmaBerry(u8 *src)
{
#if FREE_ENIGMA_BERRY == FALSE
    u32 i;
    u8 *dest = (u8 *)&gSaveBlock1Ptr->enigmaBerry;

    for (i = 0; i < sizeof(gSaveBlock1Ptr->enigmaBerry); i++)
        dest[i] = src[i];
#endif //FREE_ENIGMA_BERRY
}

#if FREE_ENIGMA_BERRY == FALSE
static u32 GetEnigmaBerryChecksum(struct EnigmaBerry *enigmaBerry)
{
    u32 i;
    u32 checksum;
    u8 *dest;

    dest = (u8 *)enigmaBerry;
    checksum = 0;
    for (i = 0; i < sizeof(gSaveBlock1Ptr->enigmaBerry) - sizeof(gSaveBlock1Ptr->enigmaBerry.checksum); i++)
        checksum += dest[i];

    return checksum;
}
#endif //FREE_ENIGMA_BERRY

bool32 IsEnigmaBerryValid(void)
{
#if FREE_ENIGMA_BERRY == FALSE
    if (!gSaveBlock1Ptr->enigmaBerry.berry.growthDuration)
        return FALSE;
    if (!gSaveBlock1Ptr->enigmaBerry.berry.maxYield)
        return FALSE;
    if (GetEnigmaBerryChecksum(&gSaveBlock1Ptr->enigmaBerry) != gSaveBlock1Ptr->enigmaBerry.checksum)
        return FALSE;
    return TRUE;
#else
    return FALSE;
#endif //FREE_ENIGMA_BERRY
}

const struct Berry *GetBerryInfo(u8 berry)
{
    if (berry == ITEM_TO_BERRY(ITEM_ENIGMA_BERRY_E_READER) && IsEnigmaBerryValid())
    #if FREE_ENIGMA_BERRY == FALSE
        return (struct Berry *)(&gSaveBlock1Ptr->enigmaBerry.berry);
    #else
        return &gBerries[0];    //never reached, but will appease the compiler gods
    #endif //FREE_ENIGMA_BERRY
    else
    {
        if (berry == BERRY_NONE || berry > ITEM_TO_BERRY(LAST_BERRY_INDEX))
            berry = ITEM_TO_BERRY(FIRST_BERRY_INDEX);
        return &gBerries[berry - 1];
    }
}

struct BerryTree *GetBerryTreeInfo(u8 id)
{
    return &gSaveBlock1Ptr->berryTrees[id];
}

bool32 ObjectEventInteractionWaterBerryTree(void)
{
    struct BerryTree *tree = GetBerryTreeInfo(GetObjectEventBerryTreeId(gSelectedObjectEvent));

    if (OW_BERRY_MOISTURE)
    {
        tree->moistureLevel = 100;
        if (OW_BERRY_ALWAYS_WATERABLE)
        {
            return TRUE;
        }
        AddTreeBonus(tree, GetWaterBonusByBerryType(tree->berry));
    }

    switch (tree->stage)
    {
    case BERRY_STAGE_PLANTED:
        tree->watered |= (1 << 0);
        break;
    case BERRY_STAGE_SPROUTED:
        tree->watered |= (1 << 1);
        break;
    case BERRY_STAGE_TALLER:
    case BERRY_STAGE_TRUNK:
    case BERRY_STAGE_BUDDING:
        tree->watered |= (1 << 2);
        break;
    case BERRY_STAGE_FLOWERING:
        tree->watered |= (1 << 3);
        break;
    default:
        return FALSE;
    }
    return TRUE;
}

bool8 IsPlayerFacingEmptyBerryTreePatch(void)
{
    if (GetObjectEventScriptPointerPlayerFacing() == BerryTreeScript
     && GetStageByBerryTreeId(GetObjectEventBerryTreeId(gSelectedObjectEvent)) == BERRY_STAGE_NO_BERRY)
        return TRUE;
    else
        return FALSE;
}

bool8 TryToWaterBerryTree(void)
{
    if (GetObjectEventScriptPointerPlayerFacing() != BerryTreeScript)
        return FALSE;
    else
        return ObjectEventInteractionWaterBerryTree();
}

void ClearBerryTrees(void)
{
    int i;

    for (i = 0; i < BERRY_TREES_COUNT; i++)
        gSaveBlock1Ptr->berryTrees[i] = gBlankBerryTree;
}

bool32 BerryTreeGrow(struct BerryTree *tree)
{
    if (tree->stopGrowth)
        return FALSE;

    switch (tree->stage)
    {
    case BERRY_STAGE_NO_BERRY:
        return FALSE;
    case BERRY_STAGE_FLOWERING:
        tree->berryYield = CalcBerryYield(tree);
    case BERRY_STAGE_PLANTED:
    case BERRY_STAGE_SPROUTED:
    case BERRY_STAGE_TRUNK:
        tree->stage++;
        break;
    case BERRY_STAGE_TALLER:
        if (OW_BERRY_SIX_STAGES)
            tree->stage = BERRY_STAGE_TRUNK;
        else
            tree->stage++;
        break;
    case BERRY_STAGE_BUDDING:
        tree->berryYield = CalcBerryYield(tree);
        tree->stage = BERRY_STAGE_BERRIES;
        break;
    case BERRY_STAGE_BERRIES:
        tree->watered = 0;
        tree->berryYield = 0;
        tree->stage = BERRY_STAGE_SPROUTED;
        tree->moistureLevel = 100;
        if (++tree->regrowthCount == ((tree->mulch == ITEM_TO_MULCH(ITEM_GOOEY_MULCH)) ? 15 : 10))
            *tree = gBlankBerryTree;
        break;
    }
    return TRUE;
}

static u16 GetMulchAffectedGrowthRate(u16 berryDuration, u8 mulch, u8 stage)
{
    if (stage == BERRY_STAGE_BERRIES)
        return berryDuration;
    if (mulch == ITEM_TO_MULCH(ITEM_GROWTH_MULCH))
        return berryDuration / 4 * 3;
    if (mulch == ITEM_TO_MULCH(ITEM_DAMP_MULCH))
        return berryDuration / 2 * 3;
    return berryDuration;
}

void BerryTreeTimeUpdate(s32 minutes)
{
    int i;
    u8 drainVal;
    struct BerryTree *tree;

    for (i = 0; i < BERRY_TREES_COUNT; i++)
    {
        tree = &gSaveBlock1Ptr->berryTrees[i];

        if (tree->berry && tree->stage && !tree->stopGrowth)
        {
            if (minutes >= GetStageDurationByBerryType(tree->berry) * 71)
            {
                *tree = gBlankBerryTree;
            }
            else
            {
                s32 time = minutes;

                // Check moisture gradient, pests and weeds
                while (time > 0 && tree->stage != BERRY_STAGE_BERRIES)
                {
                    tree->moistureClock += 1;
                    time -= 1;
                    if (tree->moistureClock % 60 == 0)
                    {
                        if (OW_BERRY_MOISTURE)
                        {
                            drainVal = (OW_BERRY_DRAIN_RATE == GEN_4) ? GetDrainRateByBerryType(tree->berry) : (OW_BERRY_DRAIN_RATE == GEN_6_XY) ? 4 : 25;
                            if (OW_BERRY_MULCH_USAGE)
                            {
                                if (tree->mulch == ITEM_TO_MULCH(ITEM_GROWTH_MULCH))
                                    drainVal *= 2;
                                if (tree->mulch == ITEM_TO_MULCH(ITEM_DAMP_MULCH))
                                    drainVal /= 2;
                                if (tree->mulch == ITEM_TO_MULCH(ITEM_BOOST_MULCH) || tree->mulch == ITEM_TO_MULCH(ITEM_AMAZE_MULCH))
                                    drainVal = 25;
                            }
                            if (OW_BERRY_ALWAYS_WATERABLE && tree->moistureLevel == 0)
                            {
                                if (tree->berryYield > GetBerryInfo(tree->berry)->minYield + GetBerryInfo(tree->berry)->maxYield / 5)
                                    tree->berryYield -= GetBerryInfo(tree->berry)->maxYield / 5;
                                else
                                    tree->berryYield = GetBerryInfo(tree->berry)->minYield;
                            }
                            else if (tree->moistureLevel <= drainVal)
                                tree->moistureLevel = 0;
                            else
                                tree->moistureLevel -= drainVal;
                            if (OW_BERRY_DRAIN_RATE == GEN_6_XY && tree->moistureLevel <= 4) // Without variable drain rate (and without mulches), this needs to trigger after 24 hours, hence the extra check
                                tree->moistureLevel = 0;
                        }
                        if (tree->moistureClock == 120)
                        {
                            TryForWeeds(tree);
                            TryForPests(tree);
                            tree->moistureClock = 0;
                        }
                    }
                }

                // Check Berry growth
                time = minutes;

                while (time != 0)
                {
                    if (tree->minutesUntilNextStage > time)
                    {
                        tree->minutesUntilNextStage -= time;
                        break;
                    }
                    time -= tree->minutesUntilNextStage;
                    tree->minutesUntilNextStage = GetMulchAffectedGrowthRate(GetStageDurationByBerryType(tree->berry), tree->mulch, tree->stage);
                    if (!BerryTreeGrow(tree))
                        break;
                    if (tree->stage == BERRY_STAGE_BERRIES)
                        tree->minutesUntilNextStage = GetStageDurationByBerryType(tree->berry) * ((tree->mulch == ITEM_TO_MULCH(ITEM_STABLE_MULCH)) ? 6 : 4);
                }
            }
        }
    }
}

void PlantBerryTree(u8 id, u8 berry, u8 stage, bool8 allowGrowth)
{
    struct BerryTree *tree = GetBerryTreeInfo(id);

    tree->berry = berry;
    tree->minutesUntilNextStage = GetMulchAffectedGrowthRate(GetStageDurationByBerryType(berry), tree->mulch, stage);
    tree->stage = stage;
    tree->moistureLevel = 100;
    if (OW_BERRY_ALWAYS_WATERABLE)
        tree->berryYield = GetBerryInfo(berry)->maxYield;
    if (stage == BERRY_STAGE_BERRIES)
    {
        tree->berryYield = CalcBerryYield(tree);
        tree->minutesUntilNextStage *= ((tree->mulch == ITEM_TO_MULCH(ITEM_STABLE_MULCH)) ? 6 : 4);
    }

    // Stop growth, to keep tree at this stage until the player has seen it
    // allowGrowth is always true for berry trees the player has planted
    if (!allowGrowth)
        tree->stopGrowth = TRUE;

    SetTreeMutations(id, berry);
}

void RemoveBerryTree(u8 id)
{
    gSaveBlock1Ptr->berryTrees[id] = gBlankBerryTree;
}

u8 GetBerryTypeByBerryTreeId(u8 id)
{
    return gSaveBlock1Ptr->berryTrees[id].berry;
}

u8 GetStageByBerryTreeId(u8 id)
{
    return gSaveBlock1Ptr->berryTrees[id].stage;
}

u8 GetMulchByBerryTreeId(u8 id)
{
    return gSaveBlock1Ptr->berryTrees[id].mulch;
}

u8 ItemIdToBerryType(u16 item)
{
    u16 berry = item - FIRST_BERRY_INDEX;

    if (berry > LAST_BERRY_INDEX - FIRST_BERRY_INDEX)
        return ITEM_TO_BERRY(FIRST_BERRY_INDEX);
    else
        return ITEM_TO_BERRY(item);
}

static u16 BerryTypeToItemId(u16 berry)
{
    u16 item = berry - 1;

    if (item > LAST_BERRY_INDEX - FIRST_BERRY_INDEX)
        return FIRST_BERRY_INDEX;
    else
        return berry + FIRST_BERRY_INDEX - 1;
}

void GetBerryNameByBerryType(u8 berry, u8 *string)
{
    memcpy(string, GetBerryInfo(berry)->name, BERRY_NAME_LENGTH);
    string[BERRY_NAME_LENGTH] = EOS;
}

void AllowBerryTreeGrowth(u8 id)
{
    GetBerryTreeInfo(id)->stopGrowth = FALSE;
}

static u8 BerryTreeGetNumStagesWatered(struct BerryTree *tree)
{
    u8 count = 0;

    if (tree->watered & (1 << 0))
        count++;
    if (tree->watered & (1 << 1))
        count++;
    if (tree->watered & (1 << 2))
        count++;
    if (tree->watered & (1 << 3))
        count++;
    return count;
}

static u8 GetNumStagesWateredByBerryTreeId(u8 id)
{
    return BerryTreeGetNumStagesWatered(GetBerryTreeInfo(id));
}

// Berries can be watered at 4 stages of growth. This function is likely meant
// to divide the berry yield range equally into quartiles. If you watered the
// tree n times, your yield is a random number in the nth quartile.
//
// However, this function actually skews towards higher berry yields, because
// it rounds `extraYield` to the nearest whole number.
//
// See resulting yields: https://gist.github.com/hondew/2a099dbe54aa91414decdbfaa524327d,
// and bug fix: https://gist.github.com/hondew/0f0164e5b9dadfd72d24f30f2c049a0b.
static u8 CalcBerryYieldInternal(u16 max, u16 min, u8 water)
{
    u32 randMin;
    u32 randMax;
    u32 rand;
    u32 extraYield;

    if (water == 0 || OW_BERRY_MOISTURE)
        return min;
    else
    {
        randMin = (max - min) * (water - 1);
        randMax = (max - min) * (water);
        rand = randMin + Random() % (randMax - randMin + 1);

        // Round upwards
        if ((rand % NUM_WATER_STAGES) >= NUM_WATER_STAGES / 2)
            extraYield = rand / NUM_WATER_STAGES + 1;
        else
            extraYield = rand / NUM_WATER_STAGES;
        return extraYield + min;
    }
}

static u8 CalcBerryYield(struct BerryTree *tree)
{
    const struct Berry *berry = GetBerryInfo(tree->berry);
    u8 min = tree->berryYield;
    u8 max = berry->maxYield;
    u8 result;
    if (OW_BERRY_MULCH_USAGE && (tree->mulch == ITEM_TO_MULCH(ITEM_RICH_MULCH) || tree->mulch == ITEM_TO_MULCH(ITEM_AMAZE_MULCH)))
        min += 2;
    if (!(OW_BERRY_MOISTURE && OW_BERRY_ALWAYS_WATERABLE))
        min += berry->minYield;
    if (min >= max)
        result = max;
    else
        result = CalcBerryYieldInternal(max, min, BerryTreeGetNumStagesWatered(tree));

    return result;
}

static u8 GetBerryCountByBerryTreeId(u8 id)
{
    return gSaveBlock1Ptr->berryTrees[id].berryYield;
}

static u16 GetStageDurationByBerryType(u8 berry)
{
    return GetBerryInfo(berry)->growthDuration * 60 / (OW_BERRY_SIX_STAGES ? 6 : 4);
}

static u8 GetDrainRateByBerryType(u8 berry)
{
    return GetBerryInfo(berry)->drainRate;
}

static u8 GetWaterBonusByBerryType(u8 berry)
{
    return GetBerryInfo(berry)->waterBonus;
}

static u8 GetWeedingBonusByBerryType(u8 berry)
{
    u8 bonus = GetBerryInfo(berry)->weedsBonus;
    return (bonus == 0) ? 1 : bonus * 5;
}

static u8 GetPestsBonusByBerryType(u8 berry)
{
    u8 bonus = GetBerryInfo(berry)->pestsBonus;
    return (bonus == 0) ? 2 : bonus * 5;
}

bool8 CanWaterBerryPlot(void)
{
    if (!OW_BERRY_MOISTURE || OW_BERRY_ALWAYS_WATERABLE)
        return TRUE;
    return (gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(gSelectedObjectEvent)].moistureLevel == 0);
}

void ObjectEventInteractionGetBerryTreeData(void)
{
    u8 id;
    u8 berry;
    u8 localId;
    u8 group;
    u8 num;

    id = GetObjectEventBerryTreeId(gSelectedObjectEvent);
    berry = GetBerryTypeByBerryTreeId(id);
    AllowBerryTreeGrowth(id);
    localId = gSpecialVar_LastTalked;
    num = gSaveBlock1Ptr->location.mapNum;
    group = gSaveBlock1Ptr->location.mapGroup;
    if (IsBerryTreeSparkling(localId, num, group))
        gSpecialVar_0x8004 = BERRY_STAGE_SPARKLING;
    else
        gSpecialVar_0x8004 = GetStageByBerryTreeId(id);
    gSpecialVar_0x8005 = GetNumStagesWateredByBerryTreeId(id);
    gSpecialVar_0x8006 = GetBerryCountByBerryTreeId(id);
    CopyItemNameHandlePlural(BerryTypeToItemId(berry), gStringVar1, gSpecialVar_0x8006);
}

void ObjectEventInteractionGetBerryName(void)
{
    u8 berryType = GetBerryTypeByBerryTreeId(GetObjectEventBerryTreeId(gSelectedObjectEvent));
    GetBerryNameByBerryType(berryType, gStringVar1);
}

void ObjectEventInteractionGetBerryCountString(void)
{
    u8 treeId = GetObjectEventBerryTreeId(gSelectedObjectEvent);
    u8 berry = GetBerryTypeByBerryTreeId(treeId);
    u8 count = GetBerryCountByBerryTreeId(treeId);
    CopyItemNameHandlePlural(BerryTypeToItemId(berry), gStringVar1, count);
    berry = GetTreeMutationValue(treeId);
    if (berry > 0)
    {
        count = 1;
        CopyItemNameHandlePlural(BerryTypeToItemId(berry), gStringVar3, count);
        gSpecialVar_Result = TRUE;
    }
    else
        gSpecialVar_Result = FALSE;
}

void Bag_ChooseBerry(void)
{
    SetMainCallback2(CB2_ChooseBerry);
}

void Bag_ChooseMulch(void)
{
    SetMainCallback2(CB2_ChooseMulch);
}

void ObjectEventInteractionPlantBerryTree(void)
{
    u8 berry = ItemIdToBerryType(gSpecialVar_ItemId);

    PlantBerryTree(GetObjectEventBerryTreeId(gSelectedObjectEvent), berry, BERRY_STAGE_PLANTED, TRUE);
    ObjectEventInteractionGetBerryTreeData();
}

void ObjectEventInteractionApplyMulch(void)
{
    u8 mulch = ITEM_TO_MULCH(gSpecialVar_ItemId);

    gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(gSelectedObjectEvent)].mulch = mulch;
    StringExpandPlaceholders(gStringVar1, gItemsInfo[gSpecialVar_ItemId].name);
}

void ObjectEventInteractionPickBerryTree(void)
{
    u8 id = GetObjectEventBerryTreeId(gSelectedObjectEvent);
    u8 berry = GetBerryTypeByBerryTreeId(id);
    u8 mutation = GetTreeMutationValue(id);

    if (!OW_BERRY_MUTATIONS || mutation == 0)
    {
        gSpecialVar_0x8004 = AddBagItem(BerryTypeToItemId(berry), GetBerryCountByBerryTreeId(id));
        return;
    }
    gSpecialVar_0x8004 = (CheckBagHasSpace(BerryTypeToItemId(berry), GetBerryCountByBerryTreeId(id)) && CheckBagHasSpace(BerryTypeToItemId(mutation), 1)) + 2;
    if (gSpecialVar_0x8004 == 3)
    {
        AddBagItem(BerryTypeToItemId(berry), GetBerryCountByBerryTreeId(id));
        AddBagItem(BerryTypeToItemId(mutation), 1);
    }
}

void ObjectEventInteractionRemoveBerryTree(void)
{
    RemoveBerryTree(GetObjectEventBerryTreeId(gSelectedObjectEvent));
    SetBerryTreeJustPicked(gSpecialVar_LastTalked, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
}

void ObjectEventInteractionPullBerryWeed(void)
{
    struct BerryTree *tree = GetBerryTreeInfo(GetObjectEventBerryTreeId(gSelectedObjectEvent));
    tree->weeds = FALSE;
    AddTreeBonus(tree, GetWeedingBonusByBerryType(tree->berry));
}

void ObjectEventInteractionClearBerryPests(void)
{
    struct BerryTree *tree = GetBerryTreeInfo(GetObjectEventBerryTreeId(gSelectedObjectEvent));
    tree->pests = FALSE;
    AddTreeBonus(tree, GetPestsBonusByBerryType(tree->berry));
}

bool8 PlayerHasBerries(void)
{
    return IsBagPocketNonEmpty(POCKET_BERRIES);
}

bool8 ObjectEventInteractionBerryHasWeed(void)
{
    return gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(gSelectedObjectEvent)].weeds;
}

bool8 ObjectEventInteractionBerryHasPests(void)
{
    u16 species;
    if (!OW_BERRY_PESTS || !gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(gSelectedObjectEvent)].pests)
        return FALSE;
    species = GetBerryPestSpecies(gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(gSelectedObjectEvent)].berry);
    if (species == SPECIES_NONE)
        return FALSE;
    CreateScriptedWildMon(species, 14 + Random() % 3, ITEM_NONE);
    gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(gSelectedObjectEvent)].pests = FALSE;
    return TRUE;
}

// Berry tree growth is frozen at their initial stage (usually, fully grown) until the player has seen the tree
// For all berry trees on screen, allow normal growth
void SetBerryTreesSeen(void)
{
    u16 cam_left;
    u16 cam_top;
    s16 left;
    s16 top;
    s16 right;
    s16 bottom;
    int i;

    GetCameraCoords(&cam_left, &cam_top);
    left = cam_left;
    top = cam_top + 3;
    right = cam_left + 14;
    bottom = top + 8;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active && gObjectEvents[i].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH)
        {
            s16 x = gObjectEvents[i].currentCoords.x;
            s16 y = gObjectEvents[i].currentCoords.y;
            if (left <= x && x <= right && top <= y && y <= bottom)
                AllowBerryTreeGrowth(gObjectEvents[i].trainerRange_berryTreeId);
        }
    }
}

bool8 PlayerHasMulch(void)
{
    if (!OW_BERRY_MULCH_USAGE)
        return FALSE;
    if (CheckBagHasItem(ITEM_GROWTH_MULCH, 1))
        return TRUE;
    if (CheckBagHasItem(ITEM_DAMP_MULCH, 1))
        return TRUE;
    if (CheckBagHasItem(ITEM_STABLE_MULCH, 1))
        return TRUE;
    if (CheckBagHasItem(ITEM_GOOEY_MULCH, 1))
        return TRUE;
    if (CheckBagHasItem(ITEM_RICH_MULCH, 1))
        return TRUE;
    if (CheckBagHasItem(ITEM_SURPRISE_MULCH, 1))
        return TRUE;
    if (CheckBagHasItem(ITEM_BOOST_MULCH, 1))
        return TRUE;
    if (CheckBagHasItem(ITEM_AMAZE_MULCH, 1))
        return TRUE;
    return FALSE;
}

#if OW_BERRY_MUTATIONS == TRUE
static const u8 sBerryMutations[][3] = {
    {ITEM_TO_BERRY(ITEM_IAPAPA_BERRY), ITEM_TO_BERRY(ITEM_MAGO_BERRY),   ITEM_TO_BERRY(ITEM_POMEG_BERRY)},
    {ITEM_TO_BERRY(ITEM_CHESTO_BERRY), ITEM_TO_BERRY(ITEM_PERSIM_BERRY), ITEM_TO_BERRY(ITEM_KELPSY_BERRY)},
    {ITEM_TO_BERRY(ITEM_ORAN_BERRY),   ITEM_TO_BERRY(ITEM_PECHA_BERRY),  ITEM_TO_BERRY(ITEM_QUALOT_BERRY)},
    {ITEM_TO_BERRY(ITEM_CHESTO_BERRY), ITEM_TO_BERRY(ITEM_PERSIM_BERRY), ITEM_TO_BERRY(ITEM_KELPSY_BERRY)},
    {ITEM_TO_BERRY(ITEM_ASPEAR_BERRY), ITEM_TO_BERRY(ITEM_LEPPA_BERRY),  ITEM_TO_BERRY(ITEM_HONDEW_BERRY)},
    {ITEM_TO_BERRY(ITEM_AGUAV_BERRY),  ITEM_TO_BERRY(ITEM_FIGY_BERRY),   ITEM_TO_BERRY(ITEM_GREPA_BERRY)},
    {ITEM_TO_BERRY(ITEM_LUM_BERRY),    ITEM_TO_BERRY(ITEM_SITRUS_BERRY), ITEM_TO_BERRY(ITEM_TAMATO_BERRY)},
    {ITEM_TO_BERRY(ITEM_HONDEW_BERRY), ITEM_TO_BERRY(ITEM_YACHE_BERRY),  ITEM_TO_BERRY(ITEM_LIECHI_BERRY)},
    {ITEM_TO_BERRY(ITEM_QUALOT_BERRY), ITEM_TO_BERRY(ITEM_TANGA_BERRY),  ITEM_TO_BERRY(ITEM_GANLON_BERRY)},
    {ITEM_TO_BERRY(ITEM_GREPA_BERRY),  ITEM_TO_BERRY(ITEM_ROSELI_BERRY), ITEM_TO_BERRY(ITEM_SALAC_BERRY)},
    {ITEM_TO_BERRY(ITEM_POMEG_BERRY),  ITEM_TO_BERRY(ITEM_KASIB_BERRY),  ITEM_TO_BERRY(ITEM_PETAYA_BERRY)},
    {ITEM_TO_BERRY(ITEM_KELPSY_BERRY), ITEM_TO_BERRY(ITEM_WACAN_BERRY),  ITEM_TO_BERRY(ITEM_APICOT_BERRY)},
    {ITEM_TO_BERRY(ITEM_GANLON_BERRY), ITEM_TO_BERRY(ITEM_LIECHI_BERRY), ITEM_TO_BERRY(ITEM_KEE_BERRY)},
    {ITEM_TO_BERRY(ITEM_SALAC_BERRY),  ITEM_TO_BERRY(ITEM_PETAYA_BERRY), ITEM_TO_BERRY(ITEM_MARANGA_BERRY)},
    // Up to one more Mutation can be added here for a total of 15 (only 4 bits are allocated)
};

static u8 GetMutationOutcome(u8 berry1, u8 berry2)
{
    u8 i;
    for(i = 0; i < ARRAY_COUNT(sBerryMutations); i++)
    {
        if ((sBerryMutations[i][0] == berry1 && sBerryMutations[i][1] == berry2)
          ||(sBerryMutations[i][0] == berry2 && sBerryMutations[i][1] == berry1))
            return (i + 1);
    }
    return 0;
}

static u8 TryForMutation(u8 berryTreeId, u8 berry)
{
    u8 i, j, mulch;
    s16 x1, x2, y1, y2;

    // Get location of current tree
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].trainerRange_berryTreeId == berryTreeId && gObjectEvents[i].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH)
            break;
    }
    if (i == OBJECT_EVENTS_COUNT)
        return 0;

    x1 = gObjectEvents[i].currentCoords.x;
    y1 = gObjectEvents[i].currentCoords.y;

    mulch = GetMulchByBerryTreeId(GetObjectEventBerryTreeId(i));

    // Try mutation for each adjacent tree
    for (j = 0; j < OBJECT_EVENTS_COUNT; j++)
    {
        if (gObjectEvents[j].active && gObjectEvents[j].movementType == MOVEMENT_TYPE_BERRY_TREE_GROWTH && GetStageByBerryTreeId(GetObjectEventBerryTreeId(j)) != BERRY_STAGE_NO_BERRY && j != i)
        {
            x2 = gObjectEvents[j].currentCoords.x;
            y2 = gObjectEvents[j].currentCoords.y;
            if (Random() % 100 < (OW_BERRY_MUTATION_CHANCE * (mulch == ITEM_TO_MULCH(ITEM_SURPRISE_MULCH) || mulch == ITEM_TO_MULCH(ITEM_AMAZE_MULCH))) && (
                (x1 == x2 && y1 == y2 - 1) ||
                (x1 == x2 && y1 == y2 + 1) ||
                (x1 == x2 - 1 && y1 == y2) ||
                (x1 == x2 + 1 && y1 == y2)))
                return GetMutationOutcome(berry, gSaveBlock1Ptr->berryTrees[GetObjectEventBerryTreeId(j)].berry);
        }
    }
    return 0;
}
#endif

struct TreeMutationBitfield {
  u8 a: 2;
  u8 b: 2;
  u8 unused: 4;
};

union TreeMutation {
  u8 value;
  struct TreeMutationBitfield asField;
};

static u8 GetTreeMutationValue(u8 id)
{
#if OW_BERRY_MUTATIONS
    struct BerryTree *tree = GetBerryTreeInfo(id);
    union TreeMutation myMutation;
    if (tree->stopGrowth) // Pre-generated trees shouldn't have mutations
        return 0;
    myMutation.asField.a = tree->mutationA;
    myMutation.asField.b = tree->mutationB;
    myMutation.asField.unused = 0;
    if (myMutation.value == 0) // no mutation
        return 0;
    return sBerryMutations[myMutation.value - 1][2];
#else
    return 0;
#endif
}

static void SetTreeMutations(u8 id, u8 berry)
{
#if OW_BERRY_MUTATIONS == TRUE
    struct BerryTree *tree = GetBerryTreeInfo(id);
    union TreeMutation myMutation;

    myMutation.value = TryForMutation(id, berry);
    tree->mutationA = myMutation.asField.a;
    tree->mutationB = myMutation.asField.b;
#endif
}

static u16 GetBerryPestSpecies(u8 berryId)
{
    return SPECIES_NONE;
}

#define BERRY_WEEDS_CHANCE 15
#define BERRY_PESTS_CHANCE 15

static void TryForWeeds(struct BerryTree *tree)
{
    if (!OW_BERRY_WEEDS)
        return;
    if (tree->weeds == TRUE)
        return;
    if (Random() % 100 < BERRY_WEEDS_CHANCE)
        tree->weeds = TRUE;
}

static void TryForPests(struct BerryTree *tree)
{
    if (!OW_BERRY_WEEDS)
        return;
    if (tree->pests == TRUE)
        return;
    if (Random() % 100 < BERRY_PESTS_CHANCE && tree->stage > BERRY_STAGE_PLANTED)
        tree->pests = TRUE;
}

static void AddTreeBonus(struct BerryTree *tree, u8 bonus)
{
    if (OW_BERRY_MOISTURE) // use watered field to save track of intermediate bonuses
    {
        tree->watered += bonus;
        while (tree->watered > 10)
        {
            tree->watered -= 10;
            bonus = tree->berryYield + 1;
            if (bonus > GetBerryInfo(tree->berry)->maxYield)
                bonus = GetBerryInfo(tree->berry)->maxYield;
            tree->berryYield = bonus;
        }
    }
    else
    {
        bonus = tree->berryYield + bonus / 10;
        if (bonus > GetBerryInfo(tree->berry)->maxYield)
            bonus = GetBerryInfo(tree->berry)->maxYield;
        tree->berryYield = bonus;
    }
}
