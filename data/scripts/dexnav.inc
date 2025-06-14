EventScript_StartDexNavBattle::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	dowildbattle	
	release
	end

EventScript_NotFoundNearby::
	msgbox sText_NotFoundNearby, MSGBOX_SIGN
	end

EventScript_MovedTooFast::
	msgbox sText_TryMovingSlower, MSGBOX_SIGN
	end

EventScript_PokemonGotAway::
	msgbox sText_PokemonGotAway, MSGBOX_SIGN
	end

EventScript_LostSignal::
	msgbox sText_LostSignal, MSGBOX_SIGN
	end

EventScript_TooDark::
	msgbox sText_TooDark, MSGBOX_SIGN
	end

sText_NotFoundNearby:
	.string "No se pudo encontrar cerca.\n"
	.string "¡Intenta buscar en otra zona!$"

sText_TryMovingSlower:
	.string "¡El Pokémon escapó!\n"
	.string "Intenta moverte más despacio.$"

sText_PokemonGotAway:
	.string "¡El Pokémon escapó!$"

sText_LostSignal:
	.string "No hay reacción.\n"
	.string "¡Se perdió la señal!$"

sText_TooDark:
	.string "Es demasido oscuro para\nbuscar un Pokémon!$"
