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
void func_ov080_020d0160(void);
void InitializeSiteOfAreaMap(void);
void PutAreaMapUP_LCD(void);
void MTG_BGM_FadeOutAndChange(s32);
void SetUpCarisumaSally(void);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void ObjSet(s32, s32, s32, s32);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void Routine_FadeInAll(void);
void KuniNameSet(s32, s32);
void MTG_BattleStart(s32, s32);
s32 GetUnitStatus(s32);
s32 CheckAllDeathStatusRect(s32, s32);
void MTG_CarisumaPosArrange(void *, void *);
void SetPlanTimer(s32);
void SetGameTimeMax(s32);
void PutOnOffTimer(s32);
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

typedef struct {
    u8 p0[0x90];
    s32 f90;
    u8 p1[0x3C];
    u32 fD0;
    u32 fD4;
    u8 p2[0x688];
    u32 f760;
} G;
typedef struct {
    s32 v[7];
} S28;
extern G *data_ov000_02051548;
extern S28 data_ov080_020d0754;
extern S28 data_ov080_020d0770;

void func_ov080_020d0304(void) {
    S28 a = data_ov080_020d0754;
    S28 b = data_ov080_020d0770;

    for (;;) {
        switch (data_ov000_02051548->fD4 & 0xFFFF) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if ((data_ov000_02051548->fD0 << 26) >> 31) {
                    InitializeKuniAndUnit();
                    data_ov000_02051548->f90 = 0x1A;
                    SG_setParty();
                }
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x1D4C);
            case 0x1D4C:
                Routine_KyotenChange(0x1A);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov080_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->fD0 = (data_ov000_02051548->fD0 & ~0x1E000) | 0xA000;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(10);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&a, &b);
                WaitSyncCounter(10);
                CameraMoveAndWait(1, 0, 0x14, 0x21, 0x3E8, 0x41A, 0xBE);
                SetPlanTimer(0x708);
                SetGameTimeMax(0x708);
                PutOnOffTimer(1);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x18);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x4D, 0x37);
                MoveOnPlanTimer();
                EventDurringTitle(0x1D4D);
            case 0x1D4D:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1DA8;
                } else if (GetPlanTimer() > 0x708) {
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1DAC;
                } else if (GetUnitStatus(0x11) == 1) {
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1DAE;
                } else {
                    data_ov000_02051548->f760 &= ~1;
                    OS_SleepThread(0);
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1D4D;
                }
                continue;
            case 0x1DA8:
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
                EventDurringTitle(0x1DA9);
            case 0x1DA9:
                PutOnOffTimer(0);
                EventDurringTitle(0x1D4C);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1DAC);
            case 0x1DAC:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1388);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1DAD);
            case 0x1DAD:
                PutOnOffTimer(0);
                EventDurringTitle(0x1D4C);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1DAE);
            case 0x1DAE:
                PutOnOffTimer(0);
                EventDurringTitle(0x1D4C);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x4B);
                EndScriptRoutine();
                continue;
        }
    }
}
