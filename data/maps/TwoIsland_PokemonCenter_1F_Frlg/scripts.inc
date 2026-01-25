<<<<<<< HEAD
TwoIsland_PokemonCenter_1F_Frlg_MapScripts::
=======
TwoIsland_PokemonCenter_1F_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

TwoIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_TWO_ISLAND
	end

TwoIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
<<<<<<< HEAD
	call EventScript_PkmnCenterNurse_Frlg
=======
	call Common_EventScript_PkmnCenterNurse
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	release
	end

TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner::
    .string "Have you visited the GAME CORNER\n"
    .string "already?\p"
    .string "It's no good to go alone.\n"
    .string "You have to take a friend along.$"

TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape::
    .string "Not many people live on\n"
    .string "TWO ISLAND.\p"
    .string "There is this old lady who lives\n"
    .string "out on the cape.\p"
    .string "She's been there since I don't know\n"
    .string "when.$"

