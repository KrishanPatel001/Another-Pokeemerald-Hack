<<<<<<< HEAD
SevenIsland_PokemonCenter_1F_Frlg_MapScripts::
=======
SevenIsland_PokemonCenter_1F_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SevenIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end

SevenIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
<<<<<<< HEAD
	call EventScript_PkmnCenterNurse_Frlg
=======
	call Common_EventScript_PkmnCenterNurse
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	release
	end

SevenIsland_PokemonCenter_1F_EventScript_OldMan::
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Sailor::
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_EventScript_Beauty::
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
	end

SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
    .string "On this island, different events\n"
    .string "occur depending on connections.\p"
    .string "What are those connections?\p"
    .string "They are for you to discover on\n"
    .string "your own.$"

SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
    .string "Did you ride a SEAGALLOP ferry\n"
    .string "to get here?\p"
    .string "There are at least ten of those\n"
    .string "high-speed ships.\p"
    .string "I don't know where they all go,\n"
    .string "though.$"

SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
    .string "If you're confident, you should\n"
    .string "check out TRAINER TOWER.$"

