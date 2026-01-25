#ifndef GUARD_BATTLE_UTIL2_H
#define GUARD_BATTLE_UTIL2_H

void AllocateBattleResources(void);
void FreeBattleResources(void);
<<<<<<< HEAD
void AdjustFriendshipOnBattleFaint(enum BattlerId battler);
void SwitchPartyOrderInGameMulti(enum BattlerId battler, u8 arg1);
u32 BattlePalace_TryEscapeStatus(enum BattlerId battler);
=======
void AdjustFriendshipOnBattleFaint(u8 battler);
void SwitchPartyOrderInGameMulti(u8 battler, u8 arg1);
u32 BattlePalace_TryEscapeStatus(u8 battler);
>>>>>>> 11d8f44022 (Updated to upcoming)

#endif // GUARD_BATTLE_UTIL_H
