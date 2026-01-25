<<<<<<< HEAD
SafariZone_North_RestHouse_Frlg_MapScripts::
=======
SafariZone_North_RestHouse_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	.byte 0

SafariZone_North_RestHouse_EventScript_Fisher::
	msgbox SafariZone_East_Text_PrizeInDeepestPartOfSafariZone, MSGBOX_NPC
	end

SafariZone_North_RestHouse_EventScript_Scientist::
	msgbox SafariZone_East_Text_KeepAnyItemFoundOnSafari, MSGBOX_NPC
	end

SafariZone_North_RestHouse_EventScript_Gentleman::
	msgbox SafariZone_East_Text_MyEeveeEvolvedIntoFlareon, MSGBOX_NPC
	end

SafariZone_East_Text_KeepAnyItemFoundOnSafari::
    .string "You can keep any item you find in\n"
    .string "the SAFARI ZONE.\p"
    .string "But, you'll run out of time if you\n"
    .string "try for all of them at once.$"

SafariZone_East_Text_PrizeInDeepestPartOfSafariZone::
    .string "Go to the deepest part of the\n"
    .string "SAFARI ZONE. You will win a prize!$"

SafariZone_East_Text_MyEeveeEvolvedIntoFlareon::
    .string "My EEVEE evolved into FLAREON.\p"
    .string "But, a friend's EEVEE turned into a\n"
    .string "VAPOREON. I wonder why?$"

