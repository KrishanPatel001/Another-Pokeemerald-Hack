#ifndef GUARD_BATTLE_AI_FIELD_STATUSES_H
#define GUARD_BATTLE_AI_FIELD_STATUSES_H

#include "battle_ai_main.h"
#include "battle_ai_util.h"

enum FieldEffectOutcome
{
    FIELD_EFFECT_POSITIVE,
    FIELD_EFFECT_NEUTRAL,
    FIELD_EFFECT_NEGATIVE,
    FIELD_EFFECT_BLOCKED,
};

<<<<<<< HEAD
bool32 WeatherChecker(enum BattlerId battler, u32 weather, enum FieldEffectOutcome desiredResult);
bool32 FieldStatusChecker(enum BattlerId battler, u32 fieldStatus, enum FieldEffectOutcome desiredResult);
s32 CalcWeatherScore(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Move move, struct AiLogicData *aiData);
=======
bool32 WeatherChecker(u32 battler, u32 weather, enum FieldEffectOutcome desiredResult);
bool32 FieldStatusChecker(u32 battler, u32 fieldStatus, enum FieldEffectOutcome desiredResult);
s32 CalcWeatherScore(u32 battlerAtk, u32 battlerDef, enum Move move, struct AiLogicData *aiData);
>>>>>>> 11d8f44022 (Updated to upcoming)

#endif //GUARD_BATTLE_AI_FIELD_STATUSES_H
