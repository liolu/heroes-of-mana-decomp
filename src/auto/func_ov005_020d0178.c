#include "m2c.h"

void OS_SleepThread(s32);
void ReleaseRetryData(void);
void EventDurringTitle(s32);
void ScCommonTestRoutine(void);
void InitializeKuniAndUnit(void);
void Routine_FadeOutAllByCount(s32);
void SetShisetuLevel(s32, s32);
void GettingItemOne(s32, s32);
void AddCarisumaToParty(s32, s32);
void SetUpCarisumaSally(void);
void SetUpSallyForCharNo(s32, s32);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void WaitSyncCounter(s32);
void Routine_FadeInAllByCount(s32);
void Routine_BGMchange(s32);
void StockCameraPositon(void);
void HpBar_Status_IconOFF(void);
void HpBar_Status_IconON(void);
void Routine_SetEvPosFadeIn(void);
void Routine_SetEvPos(s32);
void CameraMove(s32, s32, s32, s32, s32, s32, s32);
void WaitSyncUnit(s32);
void WaitSyncCamera(void);
void ObjSet(s32, s32, s32, s32);
void WaitSyncAlphaChange(s32);
void SetAikyoEffectWithXYZ(s32, s32, s32, void *, s32, s32, s32);
void SetLoopFlagForAikyoEffect(s32, s32, s32, s32);
void WaitSyncAikyoEffect(s32, s32);
void RestoreCameraPositon(s32);
void SetTitleNameNo(s32);
void ShipUnitSelCanOrNot(s32);
void MemoStoryFlag(s32, s32);
void MemoKeywordFlag(s32, s32);
void MemoPersonFlag(s32, s32);
void InitResultData(void);
void SetDropItemByNO(s32);
void func_ov005_020d0160(void);
void SetRoutineByCallGodBeast(void (*)(void));
void SetLogicNoForCreateUnit(s32, s32, s32, s32);
void Routine_BattleStart(void);
void MoveOnClearTimer(void);
void SetPlanTimer(s32);
void MoveOnPlanTimer(void);
void cameraTargetIconOFF(void);
void cameraTargetIconON(void);
void Routine_ShakeScreen(s32, s32);
void WaitSyncCounterTouch(s32);
void Routine_FadeOutAllWithUpDown(s32);
void Routine_FadeInAllWithUpDown(s32);
void PutAreaMapUP_LCD(void);
void CancelPutShipInner(void);
void WaitShipInnerToBtlField(void);
void SetResultMapReferenceRate(void);
void StopPlanTimer(void);
void StopClearTimer(void);
void SetScenarioNoForResult(s32);
void PutBtlResult(void);
void StopMovingGame(void);
void EndScriptRoutine(void);

typedef struct {
    u8 pad0[0x210];
    u32 a : 14;
    u32 b : 14;
    u32 c : 4;
    u8 pad1[0x2d0 - 0x214];
} Unit;
typedef struct {
    u8 pad0[0x28];
    Unit *units;
} Glob;
typedef struct {
    u8 pad0[0x14];
    u32 lo : 8;
    u32 idx : 4;
    u32 hi : 20;
    u8 pad1[0x3a - 0x18];
    s16 h3a;
    u8 pad2[0x40 - 0x3c];
    s32 w40;
    s32 w44;
    s32 w48;
    u8 pad3[0xd0 - 0x4c];
    u32 f0 : 5;
    u32 f5 : 1;
    u32 f6 : 7;
    u32 f13 : 4;
    u32 f17 : 15;
    u32 step : 16;
    u32 stepHi : 16;
    u8 padD8[0x688];
    u32 b0 : 1;
    u32 brest : 31;
} SceneWork;
extern SceneWork *data_ov000_02051548;
extern Glob *data_0203673c;

void func_ov005_020d0178(void) {
    s32 i;
    s16 loc;

    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                EventDurringTitle(0);
            case 0:
                ScCommonTestRoutine();
                InitializeKuniAndUnit();
                Routine_FadeOutAllByCount(5);
                SetShisetuLevel(0, 2);
                SetShisetuLevel(1, 0);
                SetShisetuLevel(2, 0);
                SetShisetuLevel(3, 0);
                SetShisetuLevel(4, 0);
                SetShisetuLevel(5, 0);
                SetShisetuLevel(6, 0);
                SetShisetuLevel(7, 2);
                SetShisetuLevel(8, 0);
                data_0203673c->units[data_ov000_02051548->idx].a = 100;
                data_0203673c->units[data_ov000_02051548->idx].b = 100;
                for (i = 0; i < 0x100; i++) {
                    GettingItemOne(i, 0x63);
                }
                SetShisetuLevel(8, 1);
                SetShisetuLevel(0xA, 1);
                SetShisetuLevel(0xB, 1);
                SetShisetuLevel(0xC, 1);
                SetShisetuLevel(0xD, 1);
                SetShisetuLevel(0xE, 1);
                SetShisetuLevel(0xF, 1);
                for (i = 0; i < 0xB; i++) {
                    AddCarisumaToParty(i + 1, i);
                }
                SetUpCarisumaSally();
                SetUpSallyForCharNo(0, 2);
                SetUpSallyForCharNo(1, 2);
                Routine_SetEvPosMode(2);
                data_ov000_02051548->f13 = 7;
                SelectCarisumaChar();
                Routine_KyotenChange(1);
                ObjSet_allclear();
                WaitSyncCounter(0xA);
                Routine_FadeInAllByCount(0x3C);
                Routine_BGMchange(0xA);
                StockCameraPositon();
                HpBar_Status_IconOFF();
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(0);
                CameraMove(1, 1, 0, 0, -1, -1, -1);
                WaitSyncUnit(0);
                WaitSyncCamera();
                StockCameraPositon();
                ObjSet(0xF02, 0x23, 3, 0);
                WaitSyncCounter(0x78);
                ObjSet(0xF02, 0x20, 0x20, 0);
                WaitSyncUnit(0xF02);
                ObjSet(0, 0x24, 0, 0x3C);
                WaitSyncAlphaChange(0);
                ObjSet(0, 0x25, 0, 0x3C);
                WaitSyncAlphaChange(0);
                ObjSet(0, 0x26, 0, 0);
                WaitSyncCounter(0x3C);
                ObjSet(0, 0x26, 1, 0);
                WaitSyncCounter(0x3C);
                loc = 0xF02;
                CameraMove(1, 0, 0x14, 0x14, -1, -1, -1);
                WaitSyncCamera();
                SetAikyoEffectWithXYZ(0xA1, 0, 1, &loc, 0x802, 0x7FFF, 0x802);
                SetLoopFlagForAikyoEffect(-1, -1, 1, 0x1E);
                WaitSyncCounter(0x12C);
                SetLoopFlagForAikyoEffect(-1, -1, 0, 0);
                WaitSyncAikyoEffect(-1, -1);
                ObjSet(0xF02, 0x15, 1, 0);
                WaitSyncUnit(0xF02);
                RestoreCameraPositon(0x3C);
                WaitSyncCamera();
                SetTitleNameNo(0xB);
                EventDurringTitle(1);
            case 1:
                ShipUnitSelCanOrNot(1);
                MemoStoryFlag(2, 1);
                MemoKeywordFlag(0xA, 1);
                MemoPersonFlag(0xB, 1);
                InitResultData();
                SetDropItemByNO(1);
                SetRoutineByCallGodBeast(func_ov005_020d0160);
                data_ov000_02051548->w48 = 0;
                HpBar_Status_IconON();
                SetLogicNoForCreateUnit(0, 7, 0, 2);
                Routine_BattleStart();
                ObjSet(0xF04, 0x23, 0xBA, 0);
                MoveOnClearTimer();
                SetPlanTimer(0);
                MoveOnPlanTimer();
                SetShisetuLevel(0, 2);
                SetShisetuLevel(1, 1);
                SetShisetuLevel(2, 1);
                SetShisetuLevel(3, 1);
                SetShisetuLevel(4, 1);
                SetShisetuLevel(5, 1);
                SetShisetuLevel(6, 1);
                SetShisetuLevel(7, 2);
                cameraTargetIconOFF();
                cameraTargetIconON();
                data_ov000_02051548->w40 = 0;
                EventDurringTitle(6);
            case 6:
                data_ov000_02051548->w44 = 0;
                EventDurringTitle(5);
            case 5:
                ObjSet(0, 0x1C, 1, 0x107);
                ObjSet(1, 0x1C, 1, 7);
                ObjSet(1, 0x1D, 0x4A, 0);
                ObjSet(1, 0x1F, 0, 0);
                Routine_ShakeScreen(1, 0x3C);
                EventDurringTitle(8);
            case 8:
                WaitSyncUnit(1);
                EventDurringTitle(2);
            case 2:
                WaitSyncCounterTouch(0xF0);
                data_ov000_02051548->w44 = data_ov000_02051548->w44 + 1;
                if (data_ov000_02051548->w44 == 10) {
                    data_ov000_02051548->step = 4;
                    continue;
                }
                if (data_ov000_02051548->w48 == 1) {
                    data_ov000_02051548->step = 7;
                    continue;
                }
                if (data_ov000_02051548->w44 == 2 && data_ov000_02051548->w40 == 0) {
                    Routine_FadeOutAllWithUpDown(2);
                    PutAreaMapUP_LCD();
                    Routine_FadeInAllWithUpDown(2);
                }
                EventDurringTitle(3);
            case 3:
                WaitSyncCounterTouch(0xF0);
                data_ov000_02051548->step = 5;
                continue;
            case 4:
                data_ov000_02051548->w40 = data_ov000_02051548->w40 + 1;
                if (data_ov000_02051548->w40 == 10) {
                    data_ov000_02051548->step = 7;
                } else {
                    data_ov000_02051548->step = 6;
                }
                continue;
            case 7:
                CancelPutShipInner();
                WaitShipInnerToBtlField();
                SetResultMapReferenceRate();
                StopPlanTimer();
                StopClearTimer();
                SetScenarioNoForResult(1);
                PutBtlResult();
                StopMovingGame();
                data_ov000_02051548->h3a = 2;
                data_ov000_02051548->b0  = 0;
                OS_SleepThread(0);
                EndScriptRoutine();
                continue;
        }
    }
}
