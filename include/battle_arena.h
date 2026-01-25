#ifndef GUARD_BATTLE_ARENA_H
#define GUARD_BATTLE_ARENA_H

#include "constants/battle_arena.h"

void CallBattleArenaFunction(void);
u8 BattleArena_ShowJudgmentWindow(u8 *state);
void BattleArena_InitPoints(void);
<<<<<<< HEAD
void BattleArena_AddMindPoints(enum BattlerId battler);
void BattleArena_AddSkillPoints(enum BattlerId battler);
void BattleArena_DeductSkillPoints(enum BattlerId battler, enum StringID stringId);
=======
void BattleArena_AddMindPoints(u8 battler);
void BattleArena_AddSkillPoints(u8 battler);
void BattleArena_DeductSkillPoints(u8 battler, enum StringID stringId);
>>>>>>> 11d8f44022 (Updated to upcoming)
void DrawArenaRefereeTextBox(void);
void EraseArenaRefereeTextBox(void);

#endif //GUARD_BATTLE_ARENA_H
