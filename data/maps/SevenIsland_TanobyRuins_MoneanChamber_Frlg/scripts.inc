<<<<<<< HEAD
SevenIsland_TanobyRuins_MoneanChamber_Frlg_MapScripts::
=======
SevenIsland_TanobyRuins_MoneanChamber_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_MoneanChamber_OnTransition
	.byte 0

SevenIsland_TanobyRuins_MoneanChamber_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
	call EventScript_TryDarkenRuins
	end
