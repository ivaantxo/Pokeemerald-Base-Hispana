OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "Cuando los POKéMON luchan,\n"
	.string "suben de nivel y se hacen más fuertes.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "Si los POKéMON que tienes se vuelven\n"
	.string "más fuertes, podrás viajar más lejos.$"

