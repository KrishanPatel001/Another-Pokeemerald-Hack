<<<<<<< HEAD
FiveIsland_PokemonCenter_1F_Frlg_MapScripts::
=======
FiveIsland_PokemonCenter_1F_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FiveIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

FiveIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
<<<<<<< HEAD
	call EventScript_PkmnCenterNurse_Frlg
=======
	call Common_EventScript_PkmnCenterNurse
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	release
	end

FiveIsland_PokemonCenter_1F_EventScript_Chef::
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
	end

FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
	end

FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal::
    .string "I'm on my way to prepare a meal\n"
    .string "for a certain high-society person.$"

FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon::
    .string "You're on a quest to catch every\n"
    .string "single kind of POKéMON?\p"
    .string "…How incredible. Please tell me if\n"
    .string "you catch a strong one!$"

