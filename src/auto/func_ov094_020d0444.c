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
extern Copy10 data_ov094_020d0d10;

void func_ov094_020d0444(void) {
    Copy10 loc;
    Copy10 spA;
    s32 hp;
    s32 hpmax;
    s32 var_r4  = 0;
    s32 var_r5  = 0;
    s32 var_r11 = 0;
    s32 var_r6  = 0;
    s32 i;
    s32 j;

    spA = data_ov094_020d0d10;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                Routine_FadeOutAll();
                InitializeOtherKuniAndUnit();
                Routine_KyotenChange(0x23);
                WaitSyncCounter(0xA);
                ObjSet_allclear();
                Routine_SetEvPosMode(0);
                Routine_SetEvPos(0);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                CameraMoveAndWait(0x1E, 1, 0, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x22);
                Routine_FadeInAllByCount(0x60);
                ObjSet(0x21, 0x21, 1, 0);
                WaitSyncCounter(0x20);
                TG_objLookObj_withRelay(1, 0x21);
                CameraMoveAndWait(0x40, 1, 1, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x22C4);
                TG_partyLookObj_withRelay(0x21);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                TG_objLookObj_withRelay(0x21, 1);
                CameraMoveAndWait(0x40, 1, 0x21, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                CameraMoveAndWait(0x40, 1, 1, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                CameraMoveAndWait(0x40, 1, 0x21, 0, -1, -1, -1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(1);
                for (i = 0; i < 0x12; i++) {
                    ObjSet(i + 0xF0A, 0x21, 1, 0);
                }
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                WaitSyncCounter(0x20);
                StockDataForRetry();
                EventDurringTitle(0x22C4);
            case 0x22C4: {
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet(0x21, 0x21, 2, 0);
                for (i = 0; i < 0x12; i++) {
                    ObjSet(i + 0xF0A, 0x21, 2, 0);
                }
                Routine_KyotenChange(0x23);
                InitializeSiteOfAreaMap();
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov094_020d0160();
                SG_setParty();
                data_ov000_02051548->f13 = 5;
                SetUpSallyForCharNo(1, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                Routine_SetEvPos(1);
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
                ObjSet(1, 0x14, 0, 0);
                ObjSet(0x21, 0x14, 0, 0);
                CameraMoveAndWait(0x20, 0, 0x11, 0xE, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x17);
                Routine_FadeInAll();
                SetPlanTimer(0);
                MoveOnPlanTimer();
                MTG_BattleStart(0x5B, 0x45);
                EventDurringTitle(0x22CE);
            }
            case 0x22CE:
                GetHpOrResourceAndMax(0x21, &hp, &hpmax);
                if (GetUnitStatus(0x21) == 1) {
                    data_ov000_02051548->step = 0x22F6;
                    continue;
                }
                if (GetPlanTimer() >= 0x3C && var_r6 != GetPlanTimer() && var_r4 == 0) {
                    if (hp < hpmax) {
                        var_r4                    = 1;
                        var_r11                   = 0;
                        var_r6                    = GetPlanTimer();
                        data_ov000_02051548->step = 0x22D8;
                        continue;
                    }
                    SetPlanTimer(0);
                } else if (GetPlanTimer() >= 0x78 && var_r6 != GetPlanTimer() && var_r4 == 1 && var_r5 == 0) {
                    if (hp < hpmax) {
                        var_r5                    = 1;
                        var_r6                    = GetPlanTimer();
                        data_ov000_02051548->step = 0x22E2;
                        continue;
                    }
                    SetPlanTimer(0);
                } else if (GetPlanTimer() >= 0xB4 && var_r6 != GetPlanTimer() && var_r5 == 1 && var_r11 == 0) {
                    SetPlanTimer(0);
                    if (hp < hpmax) {
                        var_r4                    = 0;
                        var_r5                    = 0;
                        var_r11                   = 1;
                        var_r6                    = GetPlanTimer();
                        data_ov000_02051548->step = 0x22EC;
                        continue;
                    }
                } else if (GetUnitStatus(1) == 1) {
                    func_ov094_020d0344();
                } else if (GetUnitStatus(0xB) == 1) {
                    func_ov094_020d03c4();
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x22CE;
                continue;
            case 0x22D8:
                MTG_StartEvent();
                RecoverHpOrResourceByPer(0x21, 0x64);
                MessagePutAndWait(0x22CE);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x22CE;
                continue;
            case 0x22E2:
                MTG_StartEvent();
                RecoverHpOrResourceByPer(0x21, 0x64);
                MessagePutAndWait(0x22D3);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x22CE;
                continue;
            case 0x22EC:
                MTG_StartEvent();
                RecoverHpOrResourceByPer(0x21, 0x64);
                MessagePutAndWait(0x22D8);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x22CE;
                continue;
            case 0x22F6:
                MTG_FreeBattleEnd1();
                ObjSet(0x21, 0xE, 0xA, 0);
                CameraMoveAndWait(0x60, 1, 0x21, 0, -1, -1, -1);
                WaitSyncCounter(0x30);
                MessagePutAndWait(0x22E2);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                ObjSet(0x21, 0x15, 1, 0);
                WaitSyncCounter(0xC0);
                Routine_FadeOutAllByCount(0x60);
                EventDurringTitle(0x22C4);
                MTG_FreeBattleEnd2(0x59);
                SiteSwitching(0);
                Routine_CameraFree();
                cameraTargetIconON();
                HpBar_Status_IconON();
                EndScriptRoutine();
                continue;
        }
    }
}
