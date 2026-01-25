<<<<<<< HEAD
ThreeIsland_Harbor_Frlg_MapScripts::
=======
ThreeIsland_Harbor_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	.byte 0

ThreeIsland_Harbor_EventScript_Sailor::
	lock
	faceplayer
	message Text_WhereDoYouWantToSail
	waitmessage
	setvar VAR_0x8004, SEAGALLOP_THREE_ISLAND
	goto EventScript_ChooseDestFromIsland
	end
