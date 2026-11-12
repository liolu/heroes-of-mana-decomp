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
extern Copy10 data_ov093_020d0dec;
void func_ov093_020d0160(void);
void func_ov093_020d0324(void);

void func_ov093_020d03a0(void) {
    Copy10 loc;
    Copy10 spA;
    s32 i;
    s32 t;
    s32 var_r7 = 0;
    s32 var_r8 = 0;
    s32 var_r9 = 0;
    s32 j;

    spA = data_ov093_020d0dec;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                Routine_FadeOutAll();
                InitializeOtherKuniAndUnit();
                Routine_KyotenChange(0x22);
                WaitSyncCounter(0xA);
                ObjSet_allclear();
                Routine_SetEvPosMode(0);
                Routine_SetEvPos(0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                CameraMoveAndWait(0x20, 1, 0, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x21);
                Routine_FadeInAllByCount(0x60);
                ObjSet(0xF08, 0x21, 1, 0);
                WaitSyncCounter(0x20);
                TG_partyLookObj_withRelay(0xF08);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x2260);
                WaitSyncCounter(0x10);
                CameraMoveAndWait(0x40, 1, 0xF08, 0, -1, -1, -1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                StockDataForRetry();
                EventDurringTitle(0x2260);
            case 0x2260:
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet(0xF08, 0x21, 2, 0);
                Routine_KyotenChange(0x22);
                InitializeSiteOfAreaMap();
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov093_020d0160();
                SG_setParty();
                data_ov000_02051548->f13 = 5;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
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
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i, 0x14, 0, 0);
                }
                ObjSet(0xF08, 0x1C, 4, 0);
                CameraMoveAndWait(0x20, 0, 7, 0xE, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x18);
                Routine_FadeInAll();
                SetPlanTimer(0);
                MoveOnPlanTimer();
                MTG_BattleStart(0x5A, 0x44);
                EventDurringTitle(0x226A);
            case 0x226A:
                if (GetUnitStatus(0xF08) == 0 && GetUnitStatus(0xF09) == 0 && GetUnitStatus(0xF0A) == 0 &&
                    GetUnitStatus(0xF0B) == 0 && var_r7 == 1 && var_r8 == 1) {
                    data_ov000_02051548->step = 0x2288;
                    continue;
                }
                if ((CountEnemyUnit() == 0 || GetPlanTimer() >= 0x3C) && var_r7 == 0) {
                    var_r7                    = 1;
                    data_ov000_02051548->step = 0x2274;
                    continue;
                }
                if ((CountEnemyUnit() == 0 || GetPlanTimer() >= 0x78) && var_r8 == 0) {
                    var_r8                    = 1;
                    data_ov000_02051548->step = 0x227E;
                    continue;
                }
                var_r9 = 0;
                if (GetUnitStatus(var_r9) == 1) {
                    var_r9                    = 0;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(1) == 1) {
                    var_r9                    = 1;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(2) == 1) {
                    var_r9                    = 2;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(3) == 1) {
                    var_r9                    = 3;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(4) == 1) {
                    var_r9                    = 4;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(5) == 1) {
                    var_r9                    = 5;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(6) == 1) {
                    var_r9                    = 6;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(7) == 1) {
                    var_r9                    = 7;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(8) == 1) {
                    var_r9                    = 8;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(9) == 1) {
                    var_r9                    = 9;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(0xA) == 1) {
                    var_r9                    = 0xA;
                    data_ov000_02051548->step = 0x2292;
                    continue;
                }
                if (GetUnitStatus(0xB) == 1) {
                    func_ov093_020d0324();
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x226A;
                continue;
            case 0x2274:
                MTG_StartEvent();
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(1);
                ObjSet(0xF09, 0x1C, 4, 0);
                ObjSet(0xF09, 0x21, 1, 0);
                CameraMoveAndWait(0x40, 1, 0xF09, 0, -1, -1, -1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(0x2265);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x226A;
                continue;
            case 0x227E:
                MTG_StartEvent();
                MessagePut(0x2266);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(2);
                ObjSet(0xF0A, 0x1C, 4, 0);
                ObjSet(0xF0B, 0x1C, 4, 0);
                ObjSet(0xF0A, 0x21, 1, 0);
                ObjSet(0xF0B, 0x21, 1, 0);
                CameraMoveAndWait(0x40, 1, 0xF0A, 0, -1, -1, -1);
                WaitSyncCounter(0x40);
                CameraMoveAndWait(0x40, 1, 0xF0B, 0, -1, -1, -1);
                WaitSyncCounter(0x40);
                WaitSyncMessageEnd();
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x226A;
                continue;
            case 0x2292:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, var_r9, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(var_r9 + 0x237D);
                WaitSyncCounter(0x3C);
                cameraTargetIconOFF();
                MTG_BGM_FadeOutAndChange(6);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x2260);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x2288);
            case 0x2288:
                MTG_FreeBattleEnd1();
                WaitSyncCounter(0x20);
                if (GetUnitStatus(1) == 3) {
                    t = 1;
                    TG_objLookObj_withRelay(t, 0);
                } else {
                    t = 0xB;
                }
                CameraMoveAndWait(0x40, 1, t, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x226A);
                WaitSyncCounter(0x20);
                Routine_FadeOutAllByCount(0x60);
                EventDurringTitle(0x2260);
                MTG_FreeBattleEnd2(0x58);
                SiteSwitching(0);
                Routine_CameraFree();
                cameraTargetIconON();
                HpBar_Status_IconON();
                EndScriptRoutine();
                continue;
        }
    }
}
