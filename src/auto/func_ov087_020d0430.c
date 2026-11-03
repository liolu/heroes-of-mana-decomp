#include "m2c.h"

typedef struct {
    s32 a[10];
} T10;
typedef struct {
    u8 pad0[0xd0];
    u32 r0 : 13;
    u32 sel : 4;
    u32 r1 : 15;
    u32 ev : 16;
    u32 hi : 16;
    u8 pad1[0x760 - 0xd8];
    u32 flag : 1;
    u32 rest : 31;
} G;
typedef struct {
    G *g;
} GP;

extern G *data_ov000_02051548;
extern T10 data_ov087_020d0888;

void OS_SleepThread();
void ReleaseRetryData();
void Routine_FadeOutAll();
void InitializeOtherKuniAndUnit();
void Routine_KyotenChange();
void WaitSyncCounter();
void ObjSet_allclear();
void Routine_SetEvPosMode();
void Routine_SetEvPos();
void PutOnePlanePicUP_LCD();
void cameraTargetIconOFF();
void HpBar_Status_IconOFF();
void CameraMoveAndWait();
void MTG_BGM_FadeOutAndChange();
void Routine_FadeInAllByCount();
void MessagePutAndWait();
void TG_partyLookObj_withRelay();
void ObjSet();
void TG_objLookObj_withRelay();
void StockDataForRetry();
void EventDurringTitle();
void InitializeSiteOfAreaMap();
void func_ov087_020d0160();
void SG_setParty();
void SelectCarisumaChar();
void KuniNameSet();
void PutAreaMapUP_LCD();
s32 GetUnitStatus();
void Routine_FadeInAll();
void SetPlanTimer();
void MoveOnPlanTimer();
void MTG_BattleStart();
void func_ov087_020d03b0();
void func_ov087_020d02cc();
void MTG_FreeBattleEnd1();
void Routine_FadeOutAllByCount();
void MTG_FreeBattleEnd2();
void SiteSwitching();
void Routine_CameraFree();
void cameraTargetIconON();
void HpBar_Status_IconON();
void EndScriptRoutine();

void func_ov087_020d0430(void) {
    s32 sp10;
    s32 spC;
    T10 cp;
    T10 tbl;
    s32 i;
    s32 k;
    s32 j;

    sp10 = 0;
    spC  = 0;
    tbl  = data_ov087_020d0888;
    for (;;) {
        switch (data_ov000_02051548->ev) {
            default:
                ReleaseRetryData();
                Routine_FadeOutAll();
                InitializeOtherKuniAndUnit();
                Routine_KyotenChange(0xb);
                WaitSyncCounter(10);
                ObjSet_allclear();
                Routine_SetEvPosMode(0);
                for (i = 0; i < 6; i++) {
                    Routine_SetEvPos(i);
                }
                PutOnePlanePicUP_LCD(0);
                cameraTargetIconOFF();
                HpBar_Status_IconOFF();
                CameraMoveAndWait(0x1e, 1, 0, 0, 1000, 750, 0xbe);
                WaitSyncCounter(10);
                MTG_BGM_FadeOutAndChange(0x21);
                Routine_FadeInAllByCount(0x60);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x2008);
                WaitSyncCounter(0x10);
                TG_partyLookObj_withRelay(0xf20);
                ObjSet(0xf20, 0x21, 1, 0);
                CameraMoveAndWait(0x40, 1, 0xf20, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                CameraMoveAndWait(0x40, 1, 2, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x40);
                TG_objLookObj_withRelay(1, 0);
                WaitSyncCounter(0x10);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x40);
                MessagePutAndWait(-1);
                WaitSyncCounter(0x20);
                ObjSet(0xf20, 0x21, 2, 0);
                StockDataForRetry();
                EventDurringTitle(0x2008);
            case 0x2008:
                Routine_FadeOutAll();
                MTG_BGM_FadeOutAndChange(0x28);
                Routine_KyotenChange(0xb);
                InitializeSiteOfAreaMap();
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov087_020d0160();
                SG_setParty();
                data_ov000_02051548->sel = 5;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                for (i = 0; i < 6; i++) {
                    Routine_SetEvPos(i);
                }
                KuniNameSet(1, 8);
                WaitSyncCounter(10);
                PutAreaMapUP_LCD();
                cp = tbl;
                k = j = 0;
                for (; j < 11; j++) {
                    if (GetUnitStatus(j) == 2) {
                        ObjSet(j, 7, cp.a[k], cp.a[k + 1]);
                        k += 2;
                    }
                }
                CameraMoveAndWait(0x20, 0, 8, 0x1b, 1000, 750, 0xbe);
                WaitSyncCounter(10);
                MTG_BGM_FadeOutAndChange(0x10);
                Routine_FadeInAll();
                SetPlanTimer(0);
                MoveOnPlanTimer();
                MTG_BattleStart(0x54, 0x3e);
                EventDurringTitle(0x2012);
            case 0x2012:
                if (sp10 >= 100) {
                    data_ov000_02051548->ev = 0x201c;
                    break;
                }
                if (GetUnitStatus(0xb) == 1) {
                    func_ov087_020d03b0();
                }
                func_ov087_020d02cc(&sp10, &spC);
                data_ov000_02051548->flag = 0;
                OS_SleepThread(0);
                data_ov000_02051548->ev = 0x2012;
                break;
            case 0x201c:
                MTG_FreeBattleEnd1();
                WaitSyncCounter(0x10);
                CameraMoveAndWait(0x40, 1, 0, 0, -1, -1, -1);
                WaitSyncCounter(0x20);
                MessagePutAndWait(0x201c);
                WaitSyncCounter(0x10);
                Routine_FadeOutAllByCount(0x60);
                EventDurringTitle(0x2008);
                MTG_FreeBattleEnd2(0x52);
                SiteSwitching(0);
                Routine_CameraFree();
                cameraTargetIconON();
                HpBar_Status_IconON();
                EndScriptRoutine();
                break;
        }
    }
}
