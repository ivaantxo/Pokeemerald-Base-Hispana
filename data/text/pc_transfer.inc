gText_PkmnTransferredSomeonesPC::
	.string "{STR_VAR_2} fue enviado al PC\n"
	.string "de alguien.\p"
	.string "Se ha guardado en la CAJA\n"
	.string "“{STR_VAR_1}”.$"

gText_PkmnTransferredLanettesPC::
	.string "{STR_VAR_2} fue enviado al PC\n"
#if IS_FRLG
	.string "de BILL.\p"
#else
	.string "de AREDIA.\p"
#endif
	.string "Se ha guardado en la CAJA \n"
	.string "“{STR_VAR_1}.”$"

gText_PkmnTransferredSomeonesPCBoxFull::
	.string "La CAJA “{STR_VAR_3}” del PC\n"
	.string "de alguien estaba llena.\p"
	.string "{STR_VAR_2} fue enviado a la CAJA\n"
	.string "“{STR_VAR_1}”.$"

gText_PkmnTransferredLanettesPCBoxFull::
	.string "La CAJA “{STR_VAR_3}” del PC\n"
#if IS_FRLG
	.string "de BILL esta llena.\p"
#else
	.string "de AREDIA esta llena.\p"
#endif
	.string "{STR_VAR_2} ha sido enviado a la CAJA\n"
	.string "“{STR_VAR_1}.”$"

gText_PkmnSentToPCAfterCatch::
	.string "{STR_VAR_2} fue enviado\n"
	.string "a {B_PC_CREATOR_NAME} PC.\p"
	.string "Fue colcoado en \n"
	.string "Caja “{STR_VAR_1}”.$"

gText_PlayerObtainedTheMon::
	.string "{PLAYER} obtained\n"
	.string "the {STR_VAR_1}!$"

gText_NoMoreRoomForPokemon::
	.string "¡No queda sitio para más POKéMON!\p"
	.string "¡Las CAJAS POKéMON están llenas!$"

gText_NicknameThisPokemon::
	.string "¿Quieres darle un mote\n"
	.string "a tu {STR_VAR_1}?$"
