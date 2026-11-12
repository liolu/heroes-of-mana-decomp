#include "m2c.h"

void ReleaseRetryData(void);
void InitializeOtherKuniAndUnit(void);
void InitializeKuniAndUnit(void);
void SG_setParty(void);
void Routine_FadeOutAll(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void InitializeSiteOfAreaMap(void);
void PutAreaMapUP_LCD(void);
void MTG_BGM_FadeOutAndChange(s32);
void SetUpCarisumaSally(void);
void SetUpSallyForCharNo(s32, s32);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void ObjSet(s32, s32, s32, s32);
void MTG_CarisumaPosArrange(void *, void *);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void SetPlanTimer(s32);
void SetGameTimeMax(s32);
void PutOnOffTimer(s32);
void Routine_FadeInAll(void);
void KuniNameSet(s32, s32);
void MTG_BattleStart(s32, s32);
void MoveOnPlanTimer(void);
s32 GetPlanTimer(void);
void OS_SleepThread(s32);
void MTG_StartEvent(void);
void MTG_BecomeDarkScreen(void);
void Routine_MessageRect(s32, s32, s32, s32);
void MessagePutAndWait(s32);
void MTG_ReturnDarkScreen(void);
void PutBtlResultForFreeWithoutSave(void);
void MTG_FreeBattleEnd1(void);
void MTG_FreeBattleEnd2(s32);
void EndScriptRoutine(void);
s32 GetClearTimer(void);
void func_ov062_020d02fc(s32);
s32 checkRectPosUnit(s32, s32, s32, s32, s32);

typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x8c];
    u32 w8c;
    s32 w90;
    u8 pad94[0xd0 - 0x94];
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
s32 CheckAllDeathStatusRect(s32, s32);
extern Copy7 data_ov062_020d0878;
extern Copy7 data_ov062_020d0894;

void func_ov062_020d034c(void) {
    Copy7 spA;
    Copy7 spB;
    s32 f1 = 0;
    s32 f2 = 0;
    s32 t  = 0;
    s32 f3 = 0;

    spA = data_ov062_020d0878;
    spB = data_ov062_020d0894;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->f5 != 0) {
                    InitializeKuniAndUnit();
                    data_ov000_02051548->w90 = 0x1A;
                    SG_setParty();
                }
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x1644);
            case 0x1644:
                Routine_KyotenChange(8);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov062_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 3;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&spA, &spB);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x11, 8, 0x3E8, 0x1C2, 0xBE);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(0, 1);
                KuniNameSet(1, 4);
                MTG_BattleStart(0x3B, 0x25);
                EventDurringTitle(0x1645);
            case 0x1645:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x16A0;
                } else if (GetUnitStatus(0xF0C) == 1) {
                    data_ov000_02051548->step = 0x16A6;
                } else {
                    if (GetClearTimer() > 0x2D0 && f1 == 0) {
                        f1 = 1;
                        func_ov062_020d02fc(3);
                    }
                    if ((data_ov000_02051548->w8c & 4) == 4 && f2 == 0) {
                        f2 = 1;
                        t  = GetClearTimer();
                    }
                    if (GetClearTimer() - t > 0x1E && f3 == 0 && f2 == 1) {
                        f3 = 1;
                        data_ov000_02051548->w8c |= 8;
                    }
                    if (checkRectPosUnit(0xF0C, 0x21, 0, 0x22, 1) != 0 && f3 == 1) {
                        MTG_StartEvent();
                        WaitSyncCounter(0x1E);
                        CameraMoveAndWait(0x3C, 1, 0xF0C, 0, -1, -1, -1);
                        WaitSyncCounter(0x3C);
                        MTG_BecomeDarkScreen();
                        Routine_MessageRect(2, 9, 0x1C, 0xA);
                        MessagePutAndWait(0x138B);
                        WaitSyncCounter(0x3C);
                        MTG_ReturnDarkScreen();
                        data_ov000_02051548->step = 0x16A6;
                    } else {
                        data_ov000_02051548->b0 = 0;
                        OS_SleepThread(0);
                        data_ov000_02051548->step = 0x1645;
                    }
                }
                break;
            case 0x16A0:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x138A);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x16A1);
            case 0x16A1:
                EventDurringTitle(0x1644);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x16A2);
            case 0x16A2:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x16A3);
            case 0x16A3:
                EventDurringTitle(0x1644);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x16A6);
            case 0x16A6:
                EventDurringTitle(0x1644);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x39);
                EndScriptRoutine();
                break;
        }
    }
}
