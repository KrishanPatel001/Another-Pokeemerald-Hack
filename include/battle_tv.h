#ifndef GUARD_BATTLE_TV_H
#define GUARD_BATTLE_TV_H

void BattleTv_SetDataBasedOnString(enum StringID stringId);
void BattleTv_SetDataBasedOnMove(enum Move move, u16 weatherFlags);
void BattleTv_SetDataBasedOnAnimation(u8 animationId);
void TryPutLinkBattleTvShowOnAir(void);
void BattleTv_ClearExplosionFaintCause(void);
<<<<<<< HEAD
u8 GetBattlerMoveSlotId(enum BattlerId battler, enum Move move);
=======
u8 GetBattlerMoveSlotId(u8 battler, enum Move move);
>>>>>>> 11d8f44022 (Updated to upcoming)

#endif // GUARD_BATTLE_TV_H
