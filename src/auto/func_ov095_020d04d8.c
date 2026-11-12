#include "m2c.h"

void ReleaseRetryData(void);
void Routine_FadeOutAll(void);
void InitializeOtherKuniAndUnit(void);
void Routine_KyotenChange(s32);
void WaitSyncCounter(s32);
void ObjSet_allclear(void);
void Routine_SetEvPosMode(s32);
void Routine_SetEvPos(s32);
void PutOnePlanePicUP_LCD(s32);
void cameraTargetIconOFF(void);
void HpBar_Status_IconOFF(void);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void MTG_BGM_FadeOutAndChange(s32);
void Routine_FadeInAllByCount(s32);
void ObjSet(s32, s32, s32, s32);
void TG_objLookObj_withRelay(s32, s32);
void TG_partyLookObj_withRelay(s32);
void MessagePutAndWait(s32);
void Routine_SetEvPosFadeIn(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void InitializeSiteOfAreaMap(void);
void func_ov094_020d0160(void);
void SG_setParty(void);
void SetUpSallyForCharNo(s32, s32);
void SelectCarisumaChar(void);
void KuniNameSet(s32, s32);
void PutAreaMapUP_LCD(void);
s32 GetUnitStatus(s32);
void TG_setObjDirection_withRelay(s32, s32);
void SetAikyoEffectWithXYZ(s32, s32, s32, s32, s32, s32, s32);
void WaitSyncAikyoEffect(s32, s32);
void SG_setSisetuFree(void);
void SetRoutineByCallGodBeast(void (*)(void));
void func_ov095_020d0444(void);
void func_ov095_020d0458(s32);
void MessagePut(s32);
void WaitSyncMessageEnd(void);
s32 CountEnemyUnit(void);
void PutBtlResultForFreeWithoutSave(void);
void Routine_FadeInAll(void);
void SetPlanTimer(s32);
void MoveOnPlanTimer(void);
void MTG_BattleStart(s32, s32);
void GetHpOrResourceAndMax(s32, s32 *, s32 *);
s32 GetPlanTimer(void);
void func_ov094_020d0344(void);
void func_ov094_020d03c4(void);
void OS_SleepThread(s32);
void MTG_StartEvent(void);
void RecoverHpOrResourceByPer(s32, s32);
void MTG_EndEvent(void);
void MTG_FreeBattleEnd1(void);
void Routine_FadeOutAllByCount(s32);
void MTG_FreeBattleEnd2(s32);
void SiteSwitching(s32);
void Routine_CameraFree(void);
void cameraTargetIconON(void);
void HpBar_Status_IconON(void);
void EndScriptRoutine(void);

typedef struct {
    s32 w[10];
} Copy10;
typedef struct {
    u8 pad0[0xD0];
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
extern SceneWork *data_ov000_02051548;
extern Copy10 data_ov095_020d1878;
extern s32 data_ov095_020d18c0;
void func_ov095_020d0160(void);
void func_ov095_020d02e0(void);
void func_ov095_020d032c(void);
void func_ov095_020d0378(void);
void func_ov095_020d03c4(void);

void func_ov095_020d04d8(void) {
    Copy10 loc;
    Copy10 spA;
    s32 var_a = 0;
    s32 x10;
    s32 x0c;
    s32 var_b;
    s32 var_c;
    s32 var_d;
    s32 i;
    s32 j;

    spA   = data_ov095_020d1878;
    x10   = 0;
    x0c   = 0;
    var_b = 0;
    var_c = 0;
    var_d = 0;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                Routine_FadeOutAll();
                InitializeOtherKuniAndUnit();
                Routine_KyotenChange(0x24);
                WaitSyncCounter(0xA);
                ObjSet_allclear();
                Routine_SetEvPosMode(0);
                Routine_SetEvPos(0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                CameraMoveAndWait(0x1E, 0, 0x16, 0x10, 0x5DC, 0x259, 0xF0);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x24);
                Routine_FadeInAllByCount(0x60);
                WaitSyncCounter(0x40);
                func_ov095_020d0458(0x10);
                CameraMoveAndWait(0x60, 1, 0, 0, 0x3E8, 0x1C2, 0xBE);
                WaitSyncCounter(0x40);
                func_ov095_020d0458(0x10);
                MessagePut(0x2328);
                TG_setObjDirection_withRelay(0, 4);
                WaitSyncCounter(0x20);
                TG_setObjDirection_withRelay(0, 0);
                WaitSyncCounter(0x80);
                WaitSyncCounter(0x40);
                func_ov095_020d0458(0x10);
                TG_setObjDirection_withRelay(0, 6);
                CameraMoveAndWait(0x40, 0, 0xA, 0x1E, 0x3E8, 0x1C2, 0xBE);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(4);
                ObjSet(0x22, 0x24, 0, 0);
                ObjSet(0xF0A, 0x21, 1, 0);
                ObjSet(0xF0A, 6, 0x82, 0);
                ObjSet(0xF0A, 7, 0xB, 0x1F);
                ObjSet(0xF0A, 0x26, 0, 0);
                ObjSet(0xF0A, 0x12, 0, 0);
                WaitSyncCounter(1);
                SetAikyoEffectWithXYZ(0x96, 0xF0A, 0, 0, 0, 0, 0);
                WaitSyncAikyoEffect(-1, -1);
                ObjSet(0xF0A, 0x26, 1, 0);
                ObjSet(0xF0A, 0x13, 0, 0);
                TG_partyLookObj_withRelay(0xF0A);
                WaitSyncCounter(0x80);
                CameraMoveAndWait(0x40, 0, 0xA, 0x1F, -1, -1, -1);
                WaitSyncCounter(0x20);
                Routine_SetEvPos(5);
                ObjSet(0x1C, 0x24, 0, 0);
                ObjSet(0x1C, 0x26, 0, 0);
                ObjSet(0x1C, 0x12, 0, 0);
                WaitSyncCounter(1);
                SetAikyoEffectWithXYZ(0x97, 0x1C, 0, 0, 0, 0, 0);
                WaitSyncAikyoEffect(-1, -1);
                ObjSet(0x1C, 0x26, 1, 0);
                ObjSet(0x1C, 0x13, 0, 0);
                WaitSyncCounter(0x80);
                TG_objLookObj_withRelay(0x1C, 0xF0A);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                CameraMoveAndWait(0x40, 0, 0xA, 0x1E, -1, -1, -1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                CameraMoveAndWait(0x40, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x30);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                CameraMoveAndWait(0x40, 1, 0xF0A, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                ObjSet(0xF0A, 0x26, 0, 0);
                ObjSet(0xF0A, 0x12, 0, 0);
                WaitSyncCounter(1);
                SetAikyoEffectWithXYZ(0xB2, 0xF0A, 0, 0, 0, 0, 0);
                WaitSyncCounter(0x40);
                MessagePut(-1);
                WaitSyncAikyoEffect(-1, -1);
                ObjSet(0xF0A, 0x26, 1, 0);
                ObjSet(0xF0A, 0x13, 0, 0);
                WaitSyncMessageEnd();
                Routine_FadeOutAllByCount(0x60);
                ObjSet_allclear();
                Routine_SetEvPosMode(0);
                Routine_SetEvPos(0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                CameraMoveAndWait(1, 0, 0x12, 0xA, 0x3E8, 0x1C2, 0xBE);
                for (i = 0; i < 5; i++) {
                    ObjSet(i + 0xF0B, 0x21, 1, 0);
                }
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x18);
                Routine_FadeInAllByCount(0x10);
                WaitSyncCounter(0x40);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(4);
                ObjSet(0xF0A, 6, 0x77, 0);
                ObjSet(0xF0A, 0x21, 1, 0);
                TG_partyLookObj_withRelay(0xF0A);
                WaitSyncCounter(0xC0);
                CameraMoveAndWait(0x40, 1, 2, 0, 0x3E8, 0x1C2, 0xBE);
                WaitSyncCounter(0x40);
                MessagePutAndWait(0x2332);
                WaitSyncCounter(0x10);
                CameraMoveAndWait(0x40, 1, 2, 0, 0x3E8, 0x1C2, 0xBE);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                StockDataForRetry();
                EventDurringTitle(0x2328);
            case 0x2328:
                Routine_FadeOutAll();
                ObjSet(0xF0A, 0x21, 2, 0);
                for (i = 0; i < 5; i++) {
                    ObjSet(i + 0xF0B, 0x21, 2, 0);
                }
                MTG_BGM_FadeOutAndChange(0x28);
                Routine_KyotenChange(0x24);
                InitializeSiteOfAreaMap();
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                SG_setParty();
                func_ov095_020d0160();
                data_ov000_02051548->f13 = 5;
                SetUpSallyForCharNo(0, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                Routine_SetEvPos(4);
                KuniNameSet(1, 8);
                WaitSyncCounter(0xA);
                PutAreaMapUP_LCD();
                loc = spA;
                i   = 0;
                j   = 0;
                for (; i < 0xB; i++) {
                    if (GetUnitStatus(i) == 2) {
                        ObjSet(i, 7, loc.w[j], loc.w[j + 1]);
                        j += 2;
                    }
                }
                ObjSet(0xF0A, 0x1C, 6, 0xC);
                ObjSet(0xF0A, 0x14, 0, 0);
                for (j = 0; j < 0xB; j++) {
                    ObjSet(j, 0x14, 0, 0);
                }
                SetRoutineByCallGodBeast(func_ov095_020d0444);
                data_ov095_020d18c0 = 0;
                CameraMoveAndWait(1, 1, 0, 0, 0x3E8, 0x1C2, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x18);
                Routine_FadeInAll();
                SetPlanTimer(0);
                MoveOnPlanTimer();
                var_a = 0;
                MTG_BattleStart(0x5C, 0x46);
                EventDurringTitle(0x2332);
            case 0x2332:
                if (GetUnitStatus(0xF0A) == 1) {
                    data_ov000_02051548->step = 0x236E;
                    continue;
                }
                if (GetPlanTimer() >= 0x3C && var_b != GetPlanTimer() && var_a == 0) {
                    var_a                     = 1;
                    var_b                     = GetPlanTimer();
                    data_ov000_02051548->step = 0x233C;
                    continue;
                }
                if (GetPlanTimer() >= 0x78 && var_b != GetPlanTimer() && var_a == 1) {
                    var_a                     = 2;
                    var_b                     = GetPlanTimer();
                    data_ov000_02051548->step = 0x2346;
                    continue;
                }
                if (GetPlanTimer() >= 0xB4 && var_b != GetPlanTimer() && var_a == 2) {
                    var_a = 0;
                    var_b = GetPlanTimer();
                    SetPlanTimer(0);
                    data_ov000_02051548->step = 0x2350;
                    continue;
                }
                if (data_ov095_020d18c0 == 1 && var_d == 0) {
                    var_d                     = 1;
                    data_ov000_02051548->step = 0x235A;
                    continue;
                }
                var_c = 0;
                if (GetUnitStatus(var_c) == 1) {
                    var_c                     = 0;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(1) == 1) {
                    var_c                     = 1;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(2) == 1) {
                    var_c                     = 2;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(3) == 1) {
                    var_c                     = 3;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(4) == 1) {
                    var_c                     = 4;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(5) == 1) {
                    var_c                     = 5;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(6) == 1) {
                    var_c                     = 6;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(7) == 1) {
                    var_c                     = 7;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(8) == 1) {
                    var_c                     = 8;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(9) == 1) {
                    var_c                     = 9;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(0xA) == 1) {
                    var_c                     = 0xA;
                    data_ov000_02051548->step = 0x2364;
                    continue;
                }
                if (GetUnitStatus(0xB) == 1) {
                    func_ov095_020d03c4();
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2332;
                continue;
            case 0x233C:
                func_ov095_020d02e0();
                if (var_d == 0) {
                    MTG_StartEvent();
                    ObjSet(0xF0A, 0x21, 1, 0);
                    for (i = 0; i < 3; i++) {
                        ObjSet(i + 0xF10, 0x21, 1, 0);
                    }
                    CameraMoveAndWait(0x50, 1, 0xF0A, 0, -1, -1, -1);
                    WaitSyncCounter(0x20);
                    MessagePutAndWait(0x233C);
                    WaitSyncCounter(0x20);
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0x20);
                    ObjSet(0xF0A, 0x21, 2, 0);
                    for (i = 0; i < 3; i++) {
                        ObjSet(i + 0xF10, 0x21, 2, 0);
                    }
                    MoveOnPlanTimer();
                    MTG_EndEvent();
                } else {
                    MoveOnPlanTimer();
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2332;
                continue;
            case 0x2346:
                func_ov095_020d032c();
                if (x10 == 0) {
                    MTG_StartEvent();
                    ObjSet(0xF0A, 0x21, 1, 0);
                    for (i = 0; i < 6; i++) {
                        ObjSet(i + 0xF13, 0x21, 1, 0);
                    }
                    CameraMoveAndWait(0x50, 1, 0xF0A, 0, -1, -1, -1);
                    WaitSyncCounter(0x40);
                    MessagePutAndWait(0x2341);
                    WaitSyncCounter(0x20);
                    ObjSet(0xF0A, 0x21, 2, 0);
                    for (i = 0; i < 6; i++) {
                        ObjSet(i + 0xF13, 0x21, 2, 0);
                    }
                    MoveOnPlanTimer();
                    x10 = 1;
                    MTG_EndEvent();
                } else {
                    MoveOnPlanTimer();
                    x10 = 1;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2332;
                continue;
            case 0x2350:
                func_ov095_020d0378();
                if (x0c == 0) {
                    MTG_StartEvent();
                    ObjSet(0xF0A, 0x21, 1, 0);
                    for (i = 0; i < 10; i++) {
                        ObjSet(i + 0xF19, 0x21, 1, 0);
                    }
                    CameraMoveAndWait(0x50, 1, 0xF0A, 0, -1, -1, -1);
                    WaitSyncCounter(0x20);
                    MessagePutAndWait(0x2346);
                    WaitSyncCounter(0x10);
                    MessagePutAndWait(-1);
                    WaitSyncCounter(0x20);
                    ObjSet(0xF0A, 0x21, 2, 0);
                    for (i = 0; i < 10; i++) {
                        ObjSet(i + 0xF19, 0x21, 2, 0);
                    }
                    MoveOnPlanTimer();
                    x0c = 1;
                    MTG_EndEvent();
                } else {
                    MoveOnPlanTimer();
                    x0c = 1;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2332;
                continue;
            case 0x2364:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, var_c, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(var_c + 0x237D);
                WaitSyncCounter(0x3C);
                cameraTargetIconOFF();
                MTG_BGM_FadeOutAndChange(6);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x2328);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x235A);
            case 0x235A:
                MTG_StartEvent();
                ObjSet(0xF0A, 0x21, 1, 0);
                CameraMoveAndWait(0x50, 1, 0xF0A, 0, -1, -1, -1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(0x234B);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                ObjSet(0xF0A, 0x21, 2, 0);
                ObjSet(0xF0A, 0x1C, 0, 0xC);
                MoveOnPlanTimer();
                MTG_EndEvent();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x2332;
                continue;
            case 0x236E:
                MTG_FreeBattleEnd1();
                CameraMoveAndWait(0x50, 1, 0xF0A, 0, -1, -1, -1);
                WaitSyncCounter(0x60);
                MessagePutAndWait(0x2350);
                WaitSyncCounter(0x20);
                ObjSet(0xF0A, 0xE, 0, 0);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                ObjSet(0xF0A, 0xE, 0xA, 0);
                ObjSet(0xF0A, 0x15, 1, 0);
                WaitSyncCounter(0xF0);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                SG_setSisetuFree();
                Routine_FadeOutAllByCount(0x60);
                EventDurringTitle(0x2328);
                MTG_FreeBattleEnd2(0x5A);
                SiteSwitching(0);
                Routine_CameraFree();
                cameraTargetIconON();
                HpBar_Status_IconON();
                EndScriptRoutine();
                continue;
        }
    }
}
