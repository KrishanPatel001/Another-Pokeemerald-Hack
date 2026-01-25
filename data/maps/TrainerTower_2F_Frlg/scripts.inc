<<<<<<< HEAD
TrainerTower_2F_Frlg_MapScripts::
=======
TrainerTower_2F_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_OnFrame
	.byte 0

@ Below scripts are unused, the identical versions in the 1F script are used instead

TrainerTower_2F_EventScript_DoublesTrainer1::
	call TrainerTower_EventScript_SpeakToDoublesTrainer1
	end

TrainerTower_2F_EventScript_SinglesTrainer::
	call TrainerTower_EventScript_SpeakToSinglesTrainer
	end

TrainerTower_2F_EventScript_KnockoutTrainer::
	call TrainerTower_EventScript_SpeakToKnockoutTrainer
	end

TrainerTower_2F_EventScript_DoublesTrainer2::
	call TrainerTower_EventScript_SpeakToDoublesTrainer2
	end

TrainerTower_2F_EventScript_Owner::
	call TrainerTower_EventScript_SpeakToOwner
	end
