<<<<<<< HEAD
LavenderTown_PokemonCenter_1F_Frlg_MapScripts::
=======
LavenderTown_PokemonCenter_1F_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavenderTown_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
	end

LavenderTown_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
<<<<<<< HEAD
	call EventScript_PkmnCenterNurse_Frlg
=======
	call Common_EventScript_PkmnCenterNurse
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	release
	end

LavenderTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_1F_EventScript_Lass::
	msgbox LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney::
    .string "TEAM ROCKET will do anything for\n"
    .string "the sake of money!\p"
    .string "There is no job too dirty, no deed\n"
    .string "too heinous, no crime too wicked!$"

LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets::
    .string "I saw CUBONE's mother trying to\n"
    .string "escape from TEAM ROCKET.\p"
    .string "She was killed trying to get away…$"

LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls::
    .string "You know how the CUBONE species\n"
    .string "wears skulls, right?\p"
    .string "People will pay a lot for one.$"

