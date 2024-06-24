BattleFrontier_Lounge5_MapScripts::
	.byte 0

BattleFrontier_Lounge5_EventScript_NatureGirl::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	special ChoosePartyMon
	waitstate
	lock
	faceplayer
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
	special ShowNatureGirlMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_Gentleman::
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_BlackBelt::
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_LittleBoy::
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
	end

BattleFrontier_Lounge5_Text_NatureGirlGreeting::
	.string "¡Je, je, je!\n"
	.string "¡Yo puedo decirte lo que piensan los\l"
	.string "POKéMON sobre esto de los combates!\p"
	.string "Porfa, ¿me dejas ver tus POKéMON?$"

BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
	.string "¡Ay!\n"
	.string "¡Qué carácter, oye!$"

BattleFrontier_Lounge5_Text_NatureGirlHardy::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlLonely::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse!\n"
	.string "¡Y que, si le hacen pupa, no se anda\l"
	.string "con pamplinas!$"

BattleFrontier_Lounge5_Text_NatureGirlBrave::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Pero que se preocupa si le hacen pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlAdamant::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlNaughty::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "¡Y que, si le hacen pupa, no se anda\l"
	.string "con pamplinas!$"

BattleFrontier_Lounge5_Text_NatureGirlBold::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse!\n"
	.string "¡Pero que se preocupa si le hacen pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlDocileNaiveQuietQuirky::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlRelaxed::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse!\n"
	.string "¡Y que, si le hacen pupa, no se anda\l"
	.string "con pamplinas!$"

BattleFrontier_Lounge5_Text_NatureGirlImpish::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Pero que se preocupa si le hacen pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlLax::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse! ¡Le\n"
	.string "gusta reservarse aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlTimid::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Pero que, si le hacen mucha\l"
	.string "pupa, se lo pensará dos veces!$"

BattleFrontier_Lounge5_Text_NatureGirlHasty::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlSerious::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse! ¡Le\n"
	.string "gusta reservarse aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlJolly::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse!\n"
	.string "¡Pero que se preocupa si le hacen pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlModest::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "Que se preocupa si le hacen pupa,\l"
	.string "¡y aunque no se la hagan!$"

BattleFrontier_Lounge5_Text_NatureGirlMild::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "¡Pero que, si le hacen mucha\l"
	.string "pupa, se lo pensará dos veces!$"

BattleFrontier_Lounge5_Text_NatureGirlBashful::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "Que se preocupa si le hacen pupa,\l"
	.string "¡y aunque no se la hagan!$"

BattleFrontier_Lounge5_Text_NatureGirlRash::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse! ¡Le\n"
	.string "gusta reservarse aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlCalm::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "Que se preocupa si le hacen pupa,\l"
	.string "¡y aunque no se la hagan!$"

BattleFrontier_Lounge5_Text_NatureGirlGentle::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "¡Y que, si le hacen pupa, no se anda\l"
	.string "con pamplinas!$"

BattleFrontier_Lounge5_Text_NatureGirlSassy::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Pero que, si le hacen mucha\l"
	.string "pupa, se lo pensará dos veces!$"

BattleFrontier_Lounge5_Text_NatureGirlCareful::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "¡Pero que, si le hacen mucha\l"
	.string "pupa, se lo pensará dos veces!$"

BattleFrontier_Lounge5_Text_NatureGirlEgg::
	.string "¡Qué tontería! ¡Los HUEVOS duermen!\n"
	.string "¡No puedo hablar con los HUEVOS!$"

BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
	.string "¡Qué ricura!\n"
	.string "¡Esa pequeña dice que puede leerles\l"
	.string "el pensamiento a los POKéMON!$"

BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
	.string "Me parece a mí que esa niña\n"
	.string "dice cosas la mar de profundas.$"

BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
	.string "¿Sabes una cosa? \p"
	.string "¡Esa niña juega mucho en la casa roja!$"

