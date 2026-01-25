#ifndef GUARD_BATTLE_GFX_SFX_UTIL_H
#define GUARD_BATTLE_GFX_SFX_UTIL_H

void AllocateBattleSpritesData(void);
void FreeBattleSpritesData(void);
<<<<<<< HEAD
u16 ChooseMoveAndTargetInBattlePalace(enum BattlerId battler);
void SpriteCB_WaitForBattlerBallReleaseAnim(struct Sprite *sprite);
void SpriteCB_TrainerSlideIn(struct Sprite *sprite);
void SpriteCB_TrainerSpawn(struct Sprite *sprite);
void InitAndLaunchChosenStatusAnimation(enum BattlerId battler, bool32 isVolatile, u32 status);
bool8 TryHandleLaunchBattleTableAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId, u16 argument);
void InitAndLaunchSpecialAnimation(enum BattlerId activeBattlerId, enum BattlerId attacker, enum BattlerId target, u8 tableId);
bool8 IsBattleSEPlaying(enum BattlerId battler);
void BattleLoadMonSpriteGfx(struct Pokemon *mon, enum BattlerId battler);
void DecompressGhostFrontPic(u32 battler);
void BattleGfxSfxDummy2(u16 species);
void DecompressTrainerFrontPic(u16 frontPicId, enum BattlerId battler);
void DecompressTrainerBackPic(enum TrainerPicID backPicId, enum BattlerId battler);
=======
u16 ChooseMoveAndTargetInBattlePalace(u32 battler);
void SpriteCB_WaitForBattlerBallReleaseAnim(struct Sprite *sprite);
void SpriteCB_TrainerSlideIn(struct Sprite *sprite);
void SpriteCB_TrainerSpawn(struct Sprite *sprite);
void InitAndLaunchChosenStatusAnimation(u32 battler, bool32 isVolatile, u32 status);
bool8 TryHandleLaunchBattleTableAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId, u16 argument);
void InitAndLaunchSpecialAnimation(u8 activeBattlerId, u8 attacker, u8 target, u8 tableId);
bool8 IsBattleSEPlaying(u8 battler);
void BattleLoadMonSpriteGfx(struct Pokemon *mon, u32 battler);
void BattleGfxSfxDummy2(u16 species);
void DecompressTrainerFrontPic(u16 frontPicId, u8 battler);
void DecompressTrainerBackPic(enum TrainerPicID backPicId, u8 battler);
>>>>>>> 11d8f44022 (Updated to upcoming)
void FreeTrainerFrontPicPalette(u16 frontPicId);
bool8 BattleLoadAllHealthBoxesGfx(u8 state);
void LoadBattleBarGfx(u8 unused);
bool8 BattleInitAllSprites(u8 *state1, u8 *battler);
void ClearSpritesHealthboxAnimData(void);
void CopyAllBattleSpritesInvisibilities(void);
<<<<<<< HEAD
void CopyBattleSpriteInvisibility(enum BattlerId battler);
void HandleSpeciesGfxDataChange(enum BattlerId battlerAtk, enum BattlerId battlerDef, u8 changeType);
void BattleLoadSubstituteOrMonSpriteGfx(enum BattlerId battler, bool8 loadMonSprite);
void LoadBattleMonGfxAndAnimate(enum BattlerId battler, bool8 loadMonSprite, u8 spriteId);
void TrySetBehindSubstituteSpriteBit(enum BattlerId battler, enum Move move);
void ClearBehindSubstituteBit(enum BattlerId battler);
void HandleLowHpMusicChange(struct Pokemon *mon, enum BattlerId battler);
=======
void CopyBattleSpriteInvisibility(u8 battler);
void HandleSpeciesGfxDataChange(u8 battlerAtk, u8 battlerDef, u8 changeType);
void BattleLoadSubstituteOrMonSpriteGfx(u8 battler, bool8 loadMonSprite);
void LoadBattleMonGfxAndAnimate(u8 battler, bool8 loadMonSprite, u8 spriteId);
void TrySetBehindSubstituteSpriteBit(u8 battler, enum Move move);
void ClearBehindSubstituteBit(u8 battler);
void HandleLowHpMusicChange(struct Pokemon *mon, u8 battler);
>>>>>>> 11d8f44022 (Updated to upcoming)
void BattleStopLowHpSound(void);
u8 GetMonHPBarLevel(struct Pokemon *mon);
void HandleBattleLowHpMusicChange(void);
void SetBattlerSpriteAffineMode(u8 affineMode);
<<<<<<< HEAD
void CreateEnemyShadowSprite(enum BattlerId battler);
void LoadAndCreateEnemyShadowSprites(void);
void SpriteCB_SetInvisible(struct Sprite *sprite);
void SetBattlerShadowSpriteCallback(enum BattlerId battler, u16 species);
void HideBattlerShadowSprite(enum BattlerId battler);
void FillAroundBattleWindows(void);
void ClearTemporarySpeciesSpriteData(enum BattlerId battler, bool32 dontClearTransform, bool32 dontClearSubstitute);
=======
void CreateEnemyShadowSprite(u32 battler);
void LoadAndCreateEnemyShadowSprites(void);
void SpriteCB_SetInvisible(struct Sprite *sprite);
void SetBattlerShadowSpriteCallback(u8 battler, u16 species);
void HideBattlerShadowSprite(u8 battler);
void FillAroundBattleWindows(void);
void ClearTemporarySpeciesSpriteData(u32 battler, bool32 dontClearTransform, bool32 dontClearSubstitute);
>>>>>>> 11d8f44022 (Updated to upcoming)
void AllocateMonSpritesGfx(void);
void FreeMonSpritesGfx(void);
bool32 ShouldPlayNormalMonCry(struct Pokemon *mon);

#endif // GUARD_BATTLE_GFX_SFX_UTIL_H
