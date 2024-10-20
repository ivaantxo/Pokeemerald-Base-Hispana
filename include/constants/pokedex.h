#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

enum DexOrder
{
    DEX_NONE,
    DEX_BULBASAUR,
    DEX_IVYSAUR,
    DEX_VENUSAUR,
    DEX_CHARMANDER,
    DEX_CHARMELEON,
    DEX_CHARIZARD,
    DEX_SQUIRTLE,
    DEX_WARTORTLE,
    DEX_BLASTOISE,
    DEX_CATERPIE,
    DEX_METAPOD,
    DEX_BUTTERFREE,
    DEX_WEEDLE,
    DEX_KAKUNA,
    DEX_BEEDRILL,
    DEX_PIDGEY,
    DEX_PIDGEOTTO,
    DEX_PIDGEOT,
    DEX_RATTATA,
    DEX_RATICATE,
    DEX_RATTATA_ALOLAN,
    DEX_RATICATE_ALOLAN,
    DEX_SPEAROW,
    DEX_FEAROW,
    DEX_EKANS,
    DEX_ARBOK,
    DEX_PICHU,
    DEX_PIKACHU,
    DEX_RAICHU,
    DEX_RAICHU_ALOLAN,
    DEX_SANDSHREW,
    DEX_SANDSLASH,
    DEX_SANDSHREW_ALOLAN,
    DEX_SANDSLASH_ALOLAN,
    DEX_NIDORAN_F,
    DEX_NIDORINA,
    DEX_NIDOQUEEN,
    DEX_NIDORAN_M,
    DEX_NIDORINO,
    DEX_NIDOKING,
    DEX_CLEFFA,
    DEX_CLEFAIRY,
    DEX_CLEFABLE,
    DEX_VULPIX,
    DEX_NINETALES,
    DEX_VULPIX_ALOLAN,
    DEX_NINETALES_ALOLAN,
    DEX_IGGLYBUFF,
    DEX_JIGGLYPUFF,
    DEX_WIGGLYTUFF,
    DEX_ZUBAT,
    DEX_GOLBAT,
    DEX_CROBAT,
    DEX_ODDISH,
    DEX_GLOOM,
    DEX_VILEPLUME,
    DEX_BELLOSSOM,
    DEX_PARAS,
    DEX_PARASECT,
    DEX_DIGLETT,
    DEX_DUGTRIO,
    DEX_MEOWTH,
    DEX_PERSIAN,
    DEX_MEOWTH_ALOLAN,
    DEX_PERSIAN_ALOLAN,
    DEX_PSYDUCK,
    DEX_GOLDUCK,
    DEX_MANKEY,
    DEX_PRIMEAPE,
    DEX_ANNIHILAPE,
    DEX_GROWLITHE,
    DEX_ARCANINE,
    DEX_GROWLITHE_HISUIAN,
    DEX_ARCANINE_HISUIAN,
    DEX_POLIWAG,
    DEX_POLIWHIRL,
    DEX_POLIWRATH,
    DEX_POLITOED,
    DEX_ABRA,
    DEX_KADABRA,
    DEX_ALAKAZAM,
    DEX_MACHOP,
    DEX_MACHOKE,
    DEX_MACHAMP,
    DEX_BELLSPROUT,
    DEX_WEEPINBELL,
    DEX_VICTREEBELL,
    DEX_TENTACOOL,
    DEX_TENTACRUEL,
    DEX_GEODUDE,
    DEX_GRAVELER,
    DEX_GOLEM,
    DEX_GEODUDE_ALOLAN,
    DEX_GRAVELER_ALOLAN,
    DEX_GOLEM_ALOLAN,
    DEX_PONYTA,
    DEX_RAPIDASH,
    DEX_PONYTA_GALARIAN,
    DEX_RAPIDASH_GALARIAN,
    DEX_SLOWPOKE,
    DEX_SLOWBRO,
    DEX_SLOWKING,
    DEX_MAGNEMITE,
    DEX_MAGNETON,
    DEX_MAGNEZONE,
    DEX_DODUO,
    DEX_DODRIO,
    DEX_SEEL,
    DEX_DEWGONG,
    DEX_GRIMER,
    DEX_MUK,
    DEX_SHELLDER,
    DEX_CLOYSTER,
    DEX_GASTLY,
    DEX_HAUNTER,
    DEX_GENGAR,
    DEX_ONIX,
    DEX_STEELIX,
    DEX_DROWZEE,
    DEX_HYPNO,
    DEX_KRABBY,
    DEX_KINGLER,
    DEX_VOLTORB,
    DEX_ELECTRODE,
    DEX_EXEGGCUTE,
    DEX_EXEGGUTOR,
    DEX_CUBONE,
    DEX_MAROWAK,
    DEX_MAROWAK_ALOLAN,
    DEX_TYROGUE,
    DEX_HITMONLEE,
    DEX_HITMONCHAN,
    DEX_HITMONTOP,
    DEX_LICKITUNG,
    DEX_LICKILICKY,
    DEX_KOFFING,
    DEX_WEEZING,
    DEX_WEEZING_GALARIAN,
    DEX_RHYHORN,
    DEX_RHYDON,
    DEX_RHYPERIOR,
    DEX_TANGELA,
    DEX_TANGROWTH,
    DEX_KANGASKHAN,
    DEX_HORSEA,
    DEX_SEADRA,
    DEX_KINGDRA,
    DEX_GOLDEEN,
    DEX_SEAKING,
    DEX_STARYU,
    DEX_STARMIE,
    DEX_MIME_JR,
    DEX_MR_MIME,
    DEX_SCYTHER,
    DEX_SCIZOR,
    DEX_KLEAVOR,
    DEX_SMOOCHUM,
    DEX_JYNX,
    DEX_ELEKID,
    DEX_ELECTABUZZ,
    DEX_ELECTIVIRE,
    DEX_MAGBY,
    DEX_MAGMAR,
    DEX_MAGMORTAR,
    DEX_PINSIR,
    DEX_TAUROS,
    DEX_MAGIKARP,
    DEX_GYARADOS,
    DEX_LAPRAS,
    DEX_EEVEE,
    DEX_VAPOREON,
    DEX_JOLTEON,
    DEX_FLAREON,
    DEX_ESPEON,
    DEX_UMBREON,
    DEX_LEAFEON,
    DEX_GLACEON,
    DEX_SYLVEON,
    DEX_PORYGON,
    DEX_PORYGON2,
    DEX_PORYGON_Z,
    DEX_OMANYTE,
    DEX_OMASTAR,
    DEX_KABUTO,
    DEX_KABUTOPS,
    DEX_AERODACTYL,
    DEX_MUNCHLAX,
    DEX_SNORLAX,
    DEX_ARTICUNO,
    DEX_ZAPDOS,
    DEX_MOLTRES,
    DEX_DRATINI,
    DEX_DRAGONAIR,
    DEX_DRAGONITE,
    DEX_MEW,
    DEX_MEWTWO,
    DEX_CHIKORITA,
    DEX_BAYLEEF,
    DEX_MEGANIUM,
    DEX_CYNDAQUIL,
    DEX_QUILAVA,
    DEX_TYPHLOSION,
    DEX_TOTODILE,
    DEX_CROCONAW,
    DEX_FERALIGATOR,
    DEX_SENTRET,
    DEX_FURRET,
    DEX_HOOTHOOT,
    DEX_NOCTOWL,
    DEX_LEDYBA,
    DEX_LEDIAN,
    DEX_SPINARAK,
    DEX_ARIADOS,
    DEX_CHINCHOU,
    DEX_LANTURN,
    DEX_TOGEPI,
    DEX_TOGETIC,
    DEX_TOGEKISS,
    DEX_NATU,
    DEX_XATU,
    DEX_MAREEP,
    DEX_FLAAFFY,
    DEX_AMPHAROS,
    DEX_AZURILL,
    DEX_MARILL,
    DEX_AZUMARILL,
    DEX_BONSLY,
    DEX_SUDOWOODO,
    DEX_HOPPIP,
    DEX_SKIPLOOM,
    DEX_JUMPLUFF,
    DEX_AIPOM,
    DEX_AMBIPOM,
    DEX_SUNKERN,
    DEX_SUNFLORA,
    DEX_YANMA,
    DEX_YANMEGA,
    DEX_WOOPER,
    DEX_QUAGSIRE,
    DEX_WOOPER_PALDEAN,
    DEX_CLODSIRE,
    DEX_MURKROW,
    DEX_HONCHKROW,
    DEX_MISDREAVUS,
    DEX_MISMAGIUS,
    DEX_GIRAFARIG,
    DEX_PINECO,
    DEX_FORRETRESS,
    DEX_GLIGAR,
    DEX_GLISCOR,
    DEX_SNUBBULL,
    DEX_GRANBULL,
    DEX_HERACROSS,
    DEX_SNEASEL,
    DEX_WEAVILE,
    DEX_SNEASLER,
    DEX_TEDDIURSA,
    DEX_URSARING,
    DEX_SLUGMA,
    DEX_MAGCARGO,
    DEX_SWINUB,
    DEX_PILOSWINE,
    DEX_MAMOSWINE,
    DEX_CORSOLA,
    DEX_REMORAID,
    DEX_OCTILLERY,
    DEX_DELIBIRD,
    DEX_HOUNDOUR,
    DEX_HOUNDOOM,
    DEX_PHANPY,
    DEX_DONPHAN,
    DEX_STANTLER,
    DEX_WYRDEER,
    DEX_MILTANK,
    DEX_RAIKOU,
    DEX_ENTEI,
    DEX_SUICUNE,
    DEX_LARVITAR,
    DEX_PUPITAR,
    DEX_TYRANITAR,
    DEX_LUGIA,
    DEX_HO_OH,
    DEX_CELEBI,
    DEX_TREECKO,
    DEX_GROVYLE,
    DEX_SCEPTILE,
    DEX_TORCHIC,
    DEX_COMBUSKEN,
    DEX_BLAZIKEN,
    DEX_MUDKIP,
    DEX_MARSHTOMP,
    DEX_SWAMPERT,
    DEX_POOCHYENA,
    DEX_MIGHTYENA,
    DEX_ZIGZAGOON,
    DEX_LINOONE,
    DEX_WURMPLE,
    DEX_SILCOON,
    DEX_BEAUTIFLY,
    DEX_CASCOON,
    DEX_DUSTOX,
    DEX_LOTAD,
    DEX_LOMBRE,
    DEX_LUDICOLO,
    DEX_SEEDOT,
    DEX_NUZLEAF,
    DEX_SHIFTRY,
    DEX_TAILLOW,
    DEX_SWELLOW,
    DEX_WINGULL,
    DEX_PELIPPER,
    DEX_RALTS,
    DEX_KIRLIA,
    DEX_GARDEVOIR,
    DEX_GALLADE,
    DEX_SURSKIT,
    DEX_MASQUERAIN,
    DEX_SHROOMISH,
    DEX_BRELOOM,
    DEX_SLAKOTH,
    DEX_VIGOROTH,
    DEX_SLAKING,
    DEX_NINCADA,
    DEX_NINJASK,
    DEX_SHEDINJA,
    DEX_WHISMUR,
    DEX_LOUDRED,
    DEX_EXPLOUD,
    DEX_MAKUHITA,
    DEX_HARIYAMA,
    DEX_NOSEPASS,
    DEX_PROBOPASS,
    DEX_SABLEYE,
    DEX_MAWILE,
    DEX_ARON,
    DEX_LAIRON,
    DEX_AGGRON,
    DEX_MEDITITE,
    DEX_MEDICHAM,
    DEX_ELECTRIKE,
    DEX_MANECTRIC,
    DEX_BUDEW,
    DEX_ROSELIA,
    DEX_ROSERADE,
    DEX_CARVANHA,
    DEX_SHARPEDO,
    DEX_WAILMER,
    DEX_WAILORD,
    DEX_NUMEL,
    DEX_CAMERUPT,
    DEX_TORKOAL,
    DEX_SPOINK,
    DEX_GRUMPIG,
    DEX_TRAPINCH,
    DEX_VIBRAVA,
    DEX_FLYGON,
    DEX_CACNEA,
    DEX_CACTURNE,
    DEX_SWABLU,
    DEX_ALTARIA,
    DEX_LUNATONE,
    DEX_SOLROCK,
    DEX_BALTOY,
    DEX_CLAYDOL,
    DEX_LILEEP,
    DEX_CRADILY,
    DEX_ANORITH,
    DEX_ARMALDO,
    DEX_FEEBAS,
    DEX_MILOTIC,
    DEX_CASTFORM,
    DEX_KECLEON,
    DEX_DUSKULL,
    DEX_DUSCLOPS,
    DEX_DUSKNOIR,
    DEX_TROPIUS,
    DEX_CHINGLING,
    DEX_CHIMECHO,
    DEX_ABSOL,
    DEX_SNORUNT,
    DEX_GLALIE,
    DEX_FROSLASS,
    DEX_SPHEAL,
    DEX_SEALEO,
    DEX_WALREIN,
    DEX_CLAMPERL,
    DEX_HUNTAIL,
    DEX_GOREBYSS,
    DEX_RELICANTH,
    DEX_LUVDISC,
    DEX_BAGON,
    DEX_SHELGON,
    DEX_SALAMENCE,
    DEX_BELDUM,
    DEX_METANG,
    DEX_METAGROSS,
    DEX_LATIAS,
    DEX_LATIOS,
    DEX_KYOGRE,
    DEX_GROUDON,
    DEX_RAYQUAZA,
    DEX_JIRACHI,
    DEX_DEOXYS,
    DEX_TURTWIG,
    DEX_GROTLE,
    DEX_TORTERRA,
    DEX_CHIMCHAR,
    DEX_MONFERNO,
    DEX_INFERNAPE,
    DEX_PIPLUP,
    DEX_PRINPLUP,
    DEX_EMPOLEON,
    DEX_STARLY,
    DEX_STARAVIA,
    DEX_STARAPTOR,
    DEX_BIDOOF,
    DEX_BIBAREL,
    DEX_KRICKETOT,
    DEX_KRICKETUNE,
    DEX_SHINX,
    DEX_LUXIO,
    DEX_LUXRAY,
    DEX_CRANIDOS,
    DEX_RAMPARDOS,
    DEX_SHIELDON,
    DEX_BASTIODON,
    DEX_COMBEE,
    DEX_VESPIQUEN,
    DEX_PACHIRISU,
    DEX_BUIZEL,
    DEX_FLOATZEL,
    DEX_CHERUBI,
    DEX_CHERRIM,
    DEX_SHELLOS,
    DEX_GASTRODON,
    DEX_DRIFLOON,
    DEX_DRIFBLIM,
    DEX_BUNEARY,
    DEX_LOPUNNY,
    DEX_BRONZOR,
    DEX_BRONZONG,
    DEX_GIBLE,
    DEX_GABITE,
    DEX_GARCHOMP,
    DEX_RIOLU,
    DEX_LUCARIO,
    DEX_HIPPOPOTAS,
    DEX_HIPPOWDON,
    DEX_SKORUPI,
    DEX_DRAPION,
    DEX_CROAGUNK,
    DEX_TOXICROAK,
    DEX_SNOVER,
    DEX_ABOMASNOW,
    DEX_ROTOM,
    DEX_HEATRAN,
    DEX_SNIVY,
    DEX_SERVINE,
    DEX_SERPERIOR,
    DEX_TEPIG,
    DEX_PIGNITE,
    DEX_EMBOAR,
    DEX_OSHAWOTT,
    DEX_DEWOTT,
    DEX_SAMUROTT,
    DEX_BLITZLE,
    DEX_ZEBSTRIKA,
    DEX_DRILBUR,
    DEX_EXCADRILL,
    DEX_TIMBURR,
    DEX_GURDURR,
    DEX_CONKELDURR,
    DEX_SANDILE,
    DEX_KROKOROK,
    DEX_KROOKODILE,
    DEX_DARUMAKA,
    DEX_DARMANITAN,
    DEX_DARUMAKA_GALARIAN,
    DEX_DARMANITAN_GALARIAN,
    DEX_SCRAGGY,
    DEX_SCRAFTY,
    DEX_YAMASK,
    DEX_COFAGRIGUS,
    DEX_ZORUA,
    DEX_ZOROARK,
    DEX_ZORUA_HISUIAN,
    DEX_ZOROARK_HISUIAN,
    DEX_GOTHITA,
    DEX_GOTHORITA,
    DEX_GOTHITELLE,
    DEX_FOONGUS,
    DEX_AMOONGUSS,
    DEX_FRILLISH,
    DEX_JELLICENT,
    DEX_JOLTIK,
    DEX_GALVANTULA,
    DEX_FERROSEED,
    DEX_FERROTHORN,
    DEX_ELGYEM,
    DEX_BEHEEYEM,
    DEX_LITWICK,
    DEX_LAMPENT,
    DEX_CHANDELURE,
    DEX_AXEW,
    DEX_FRAXURE,
    DEX_HAXORUS,
    DEX_CUBCHOO,
    DEX_BEARTIC,
    DEX_GOLETT,
    DEX_GOLURK,
    DEX_PAWNIARD,
    DEX_BISHARP,
    DEX_RUFFLET,
    DEX_BRAVIARY,
    DEX_BRAVIARY_HISUIAN,
    DEX_VULLABY,
    DEX_MANDIBUZZ,
    DEX_DEINO,
    DEX_ZWEILOUS,
    DEX_HYDREIGON,
    DEX_LARVESTA,
    DEX_VOLCARONA,
    DEX_CHESPIN,
    DEX_QUILLADIN,
    DEX_CHESNAUGHT,
    DEX_FENNEKIN,
    DEX_BRAIXEN,
    DEX_DELPHOX,
    DEX_FROAKIE,
    DEX_FROGADIER,
    DEX_GRENINJA,
    DEX_BUNNELBY,
    DEX_DIGGERSBY,
    DEX_FLETCHLING,
    DEX_FLETCHINDER,
    DEX_TALONFLAME,
    DEX_SKIDDO,
    DEX_GOGOAT,
    DEX_PANCHAM,
    DEX_PANGORO,
    DEX_HONEDGE,
    DEX_DOUBLADE,
    DEX_AEGISLASH,
    DEX_TYRUNT,
    DEX_TYRANTRUM,
    DEX_AMAURA,
    DEX_AURORUS,
    DEX_CARBINK,
    DEX_DIANCIE,
    DEX_GOOMY,
    DEX_SLIGGOO,
    DEX_GOODRA,
    DEX_PHANTUMP,
    DEX_TREVENANT,
    DEX_ROWLET,
    DEX_DARTRIX,
    DEX_DECIDUEYE,
    DEX_DECIDUEYE_HISUIAN,
    DEX_LITTEN,
    DEX_TORRACAT,
    DEX_INCINEROAR,
    DEX_POPPLIO,
    DEX_BRIONNE,
    DEX_PRIMARINA,
    DEX_ROCKRUFF,
    DEX_LYCANROC,
    DEX_LYCANROC_DUSK,
    DEX_LYCANROC_MIDNIGHT,
    DEX_SANDYGAST,
    DEX_PALOSSAND,
    DEX_MIMIKYU,
    DEX_JANGMO_O,
    DEX_HAKAMO_O,
    DEX_KOMMO_O,
    DEX_ROOKIDEE,
    DEX_CORVISQUIRE,
    DEX_CORVIKNIGHT,
    DEX_BLIPBUG,
    DEX_DOTTLER,
    DEX_ORBEETLE,
    DEX_TOXEL,
    DEX_TOXTRICITY,
    DEX_TOXTRICITY_LOW_KEY,
    DEX_SNOM,
    DEX_FROSMOTH,
    DEX_DREEPY,
    DEX_DRAKLOAK,
    DEX_DRAGAPULT,
    DEX_GLIMMET,
    DEX_GLIMMORA,
    DEX_GREAVARD,
    DEX_HOUNDSTONE,
    DEX_REGIROCK,
    DEX_REGICE,
    DEX_REGISTEEL,
    DEX_REGIELEKI,
    DEX_REGIDRAGO,
    DEX_REGIGIGAS,

    DEX_COUNT
};

#define WEIGHT_HEIGHT_STR_LEN          16
#define WEIGHT_HEIGHT_STR_MEM          (WEIGHT_HEIGHT_STR_LEN * sizeof(u8))

#define DEX_HEADER_X                   96
#define DEX_Y_TOP                      57
#define DEX_Y_BOTTOM                   73
#define DEX_MEASUREMENT_X              129

#define DEX_HGSS_HEADER_X_PADDING      59
#define DEX_HGSS_Y_TOP_PADDING         7
#define DEX_HGSS_Y_BOTTOM_PADDING      4
#define DEX_HGSS_MEASUREMENT_X_PADDING 51

enum
{
    FLAG_GET_SEEN,
    FLAG_GET_CAUGHT,
    FLAG_SET_SEEN,
    FLAG_SET_CAUGHT
};

#endif // GUARD_CONSTANTS_POKEDEX_H
