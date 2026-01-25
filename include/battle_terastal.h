#ifndef GUARD_BATTLE_TERASTAL_H
#define GUARD_BATTLE_TERASTAL_H

<<<<<<< HEAD
void ActivateTera(enum BattlerId battler);
void ApplyBattlerVisualsForTeraAnim(enum BattlerId battler);
bool32 CanTerastallize(enum BattlerId battler);
enum Type GetBattlerTeraType(enum BattlerId battler);
void ExpendTypeStellarBoost(enum BattlerId battler, enum Type type);
bool32 IsTypeStellarBoosted(enum BattlerId battler, enum Type type);
=======
void ActivateTera(u32 battler);
void ApplyBattlerVisualsForTeraAnim(u32 battler);
bool32 CanTerastallize(u32 battler);
enum Type GetBattlerTeraType(u32 battler);
void ExpendTypeStellarBoost(u32 battler, enum Type type);
bool32 IsTypeStellarBoosted(u32 battler, enum Type type);
>>>>>>> 11d8f44022 (Updated to upcoming)
uq4_12_t GetTeraMultiplier(struct BattleContext *ctx);

u16 GetTeraTypeRGB(enum Type type);

#endif
