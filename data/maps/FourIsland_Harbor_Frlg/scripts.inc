<<<<<<< HEAD
FourIsland_Harbor_Frlg_MapScripts::
=======
FourIsland_Harbor_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	.byte 0

FourIsland_Harbor_EventScript_Sailor::
	lock
	faceplayer
	message Text_WhereDoYouWantToSail
	waitmessage
	setvar VAR_0x8004, SEAGALLOP_FOUR_ISLAND
	goto EventScript_ChooseDestFromIsland
	end
