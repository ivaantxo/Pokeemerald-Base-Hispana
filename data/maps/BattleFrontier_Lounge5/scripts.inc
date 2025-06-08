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

BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "¡Aunque le hagan pupa!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "Pero que si le hacen pupa,\l"
	.string "¡se lo pensará dos veces!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow::
	.string "Mmm…\p"
	.string "¡Dice que le gusta combatir!\n"
	.string "Pero que si le hacen pupa,\l"
	.string "¡se reservará!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "Pero que si le hacen pupa,\l"
	.string "¡se vengará!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho,\n"
	.string "le hagan o no daño!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow::
	.string "Mmm…\p"
	.string "¡Dice que se cuida mucho!\n"
	.string "Pero que si le hacen pupa,\l"
	.string "¡se reservará!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse!\n"
	.string "¡Y que, si le hacen pupa, no se anda\l"
	.string "con pamplinas!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse!\n"
	.string "Pero que si le hacen pupa,\l"
	.string "¡se lo pensará dos veces!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow::
	.string "Mmm…\p"
	.string "¡Dice que le gusta reservarse!\n"
	.string "Le gusta reservarse, incluso\l"
	.string "si le hacen mucha pupa.$"

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

