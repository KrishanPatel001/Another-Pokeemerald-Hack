<<<<<<< HEAD
SSAnne_1F_Room7_Frlg_MapScripts::
=======
SSAnne_1F_Room7_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	.byte 0

SSAnne_1F_Room7_EventScript_Thomas::
	trainerbattle_single TRAINER_GENTLEMAN_THOMAS, SSAnne_1F_Room7_Text_ThomasIntro, SSAnne_1F_Room7_Text_ThomasDefeat
	msgbox SSAnne_1F_Room7_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room7_Text_ThomasIntro::
    .string "I am but a solitary traveler…\p"
    .string "My sole companions and friends are\n"
    .string "POKéMON I caught on my journeys…$"

SSAnne_1F_Room7_Text_ThomasDefeat::
    .string "My, my friends…$"

SSAnne_1F_Room7_Text_ThomasPostBattle::
    .string "You should be nice to friends!$"

