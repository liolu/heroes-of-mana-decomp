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
extern Copy10 data_ov089_020d0fe4;
extern Copy10 data_ov089_020d100c;
void func_ov089_020d0160(void);
void func_ov089_020d027c(s32);
void TG_setObjDirection_withRelay(s32, s32);
void TG_setPartyDirection(s32);

void func_ov089_020d02e8(void) {
    Copy10 loc1;
    Copy10 loc2;
    Copy10 spA;
    Copy10 spB;
    s32 var_a = 0;
    s32 var_b = 0;
    s32 var_c = 0;
    s32 var_d = 0;
    s32 cnt1;
    s32 cnt2;
    s32 j;
    s32 i;
    s32 k;

    spA = data_ov089_020d0fe4;
    spB = data_ov089_020d100c;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                Routine_FadeOutAll();
                InitializeOtherKuniAndUnit();
                Routine_KyotenChange(0xD);
                WaitSyncCounter(0xA);
                ObjSet_allclear();
                Routine_SetEvPosMode(0);
                Routine_SetEvPos(0);
                for (i = 0; i < 0xB; i++) {
                    if (i != 0 && i != 2 && i != 3 && i != 7 && i != 8) {
                        ObjSet(i, 0x15, 0, 0);
                    }
                }
                ObjSet(0, 7, 0x15, 0xC);
                ObjSet(2, 7, 0x14, 0xB);
                ObjSet(3, 7, 0x16, 0xB);
                ObjSet(7, 7, 0x15, 0xD);
                ObjSet(8, 7, 0x13, 0xB);
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                CameraMoveAndWait(0x20, 1, 7, 0, 0x3E8, 0x2EE, 0xBE);
                for (i = 0; i < 0x28; i++) {
                    ObjSet(i + 0xF10, 6, 0x3B, 0);
                }
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x23);
                Routine_FadeInAllByCount(0x60);
                WaitSyncCounter(0x40);
                CameraMoveAndWait(0x50, 1, 0, 0, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0x40);
                MessagePutAndWait(0x20D0);
                WaitSyncCounter(0x10);
                TG_objLookObj_withRelay(7, 0);
                WaitSyncCounter(0x30);
                TG_setObjDirection_withRelay(7, 0);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                CameraMoveAndWait(0x50, 0, 0x14, 0x14, -1, -1, -1);
                WaitSyncCounter(0x60);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x30);
                CameraMoveAndWait(0x40, 1, 7, 0, -1, -1, -1);
                WaitSyncCounter(0x10);
                TG_objLookObj_withRelay(7, 2);
                WaitSyncCounter(0x20);
                TG_objLookObj_withRelay(7, 3);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                TG_objLookObj_withRelay(8, 7);
                CameraMoveAndWait(0x40, 1, 8, 0, -1, -1, -1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                TG_partyLookObj_withRelay(8);
                WaitSyncCounter(0x10);
                TG_setObjDirection_withRelay(8, 0);
                WaitSyncCounter(0x20);
                CameraMoveAndWait(0x60, 0, 0x14, 0x1F, -1, 0x41A, -1);
                TG_setPartyDirection(0);
                WaitSyncCounter(0x40);
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(1);
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i + 0xF05, 0x21, 1, 0);
                }
                WaitSyncCounter(0xC0);
                CameraMoveAndWait(0x50, 1, 0, 0, 0x3E8, -1, 0xBE);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i + 0xF05, 0x21, 2, 0);
                }
                StockDataForRetry();
                EventDurringTitle(0x20D0);
            case 0x20D0:
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(0x28);
                Routine_KyotenChange(0xD);
                InitializeSiteOfAreaMap();
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov089_020d0160();
                SG_setParty();
                data_ov000_02051548->f13 = 5;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                Routine_SetEvPos(1);
                KuniNameSet(1, 8);
                WaitSyncCounter(0xA);
                PutAreaMapUP_LCD();
                loc1 = spA;
                i    = 0;
                j    = 0;
                for (; i < 0xB; i++) {
                    if (GetUnitStatus(i) == 2) {
                        ObjSet(i, 7, loc1.w[j], loc1.w[j + 1]);
                        j += 2;
                    }
                }
                CameraMoveAndWait(0x20, 0, 0x15, 0xD, 0x3E8, 0x2EE, 0xBE);
                for (i = 0; i < 0x28; i++) {
                    ObjSet(i + 0xF10, 6, 0x3B, 0);
                }
                loc2 = spB;
                for (k = 0; k < 0xB; k++) {
                    if (GetUnitStatus(k) == 0) {
                        ObjSet(k + 0xF05, 0x15, 0, 0);
                    }
                }
                {
                    s32 n;
                    s32 m;
                    m = 0;
                    n = 0;
                    for (; m < 0xB; m++) {
                        if (GetUnitStatus(m) == 2) {
                            ObjSet(m + 0xF05, 7, loc2.w[n], loc2.w[n + 1]);
                            n += 2;
                        }
                    }
                }
                SiteSwitching(2);
                WaitSyncCounter(0xA);
                MTG_BGM_FadeOutAndChange(0x15);
                Routine_FadeInAll();
                MTG_BattleStart(0x56, 0x40);
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i, 0x1C, 1, 7);
                }
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i + 0xF05, 0x1C, 1, 7);
                }
                EventDurringTitle(0x20DA);
            case 0x20DA:
                cnt1 = 0;
                cnt2 = 0;
                for (i = 0; i < 0x14; i++) {
                    if (GetUnitStatus(i + 0xF24) == 3 || GetUnitStatus(i + 0xF24) == 2) {
                        cnt1++;
                    }
                }
                for (i = 0; i < 0x14; i++) {
                    if (GetUnitStatus(i + 0xF10) == 3 || GetUnitStatus(i + 0xF10) == 2) {
                        cnt2++;
                    }
                }
                if (cnt2 == 0) {
                    data_ov000_02051548->step = 0x2116;
                    continue;
                }
                if (cnt1 <= 10 && var_a == 0) {
                    var_a                     = 1;
                    data_ov000_02051548->step = 0x20EE;
                    continue;
                }
                if (cnt2 <= 10 && var_b == 0) {
                    var_b                     = 1;
                    data_ov000_02051548->step = 0x20F8;
                    continue;
                }
                if (cnt1 <= 5 && var_c == 0) {
                    var_c                     = 1;
                    data_ov000_02051548->step = 0x2102;
                    continue;
                }
                if (cnt2 <= 5 && var_d == 0) {
                    var_d                     = 1;
                    data_ov000_02051548->step = 0x210C;
                    continue;
                }
                if (cnt1 == 0) {
                    data_ov000_02051548->step = 0x20E4;
                    continue;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x20DA;
                continue;
            case 0x20E4:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                func_ov089_020d027c(0);
                WaitSyncCounter(0x3C);
                MessagePutAndWait(0x20DA);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x3C);
                cameraTargetIconOFF();
                MTG_BGM_FadeOutAndChange(6);
                WaitSyncCounter(0x1E);
                EventDurringTitle(0x20D0);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x20EE);
            case 0x20EE:
                MTG_StartEvent();
                func_ov089_020d027c(0);
                WaitSyncCounter(0x40);
                MessagePutAndWait(0x20E4);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x20DA;
                continue;
            case 0x20F8:
                MTG_StartEvent();
                func_ov089_020d027c(1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(0x20EE);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x20DA;
                continue;
            case 0x2102:
                MTG_StartEvent();
                func_ov089_020d027c(0);
                WaitSyncCounter(0x40);
                MessagePutAndWait(0x20F8);
                WaitSyncCounter(0x30);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x20DA;
                continue;
            case 0x210C:
                MTG_StartEvent();
                func_ov089_020d027c(1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x2102);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                MTG_EndEvent();
                MoveOnPlanTimer();
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x20DA;
                continue;
            case 0x2116:
                MTG_FreeBattleEnd1();
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i, 0x1C, 0, 7);
                }
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i + 0xF05, 0x1C, 0, 7);
                }
                func_ov089_020d027c(0);
                WaitSyncCounter(0x40);
                CameraMoveAndWait(0x20, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x10);
                MessagePutAndWait(0x210C);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                Routine_FadeOutAllByCount(0x60);
                EventDurringTitle(0x20D0);
                MTG_FreeBattleEnd2(0x54);
                EndScriptRoutine();
                continue;
        }
    }
}
