<<<<<<< HEAD
Route22_NorthEntrance_Frlg_MapScripts::
=======
Route22_NorthEntrance_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	.byte 0

Route22_NorthEntrance_EventScript_BoulderBadgeGuard::
	lock
	faceplayer
	setvar VAR_TEMP_1, 1
	bufferstdstring STR_VAR_1, STDSTRING_BOULDER_BADGE
	goto Route22_NorthEntrance_EventScript_BadgeGuard
	end

Route22_NorthEntrance_EventScript_BoulderBadgeGuardTrigger::
	lockall
	setvar VAR_TEMP_1, 1
	setvar VAR_0x8009, 1
	bufferstdstring STR_VAR_1, STDSTRING_BOULDER_BADGE
	goto Route23_EventScript_BadgeGuardTrigger
	end
