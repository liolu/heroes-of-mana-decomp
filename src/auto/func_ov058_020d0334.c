#include "m2c.h"

void OS_SleepThread(s32);
void ReleaseRetryData(void);
void InitializeKuniAndUnit(void);
void InitializeOtherKuniAndUnit(void);
void SG_setParty(void);
void Routine_FadeOutAll(void);
void Routine_FadeInAll(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void func_ov058_020d0160(void);
void SetPlanTimer(s32);
void SetGameTimeMax(s32);
void PutOnOffTimer(s32);
void MoveOnPlanTimer(void);
s32 GetPlanTimer(void);
s32 CheckAllDeathStatusRect(s32, s32);
void InitializeSiteOfAreaMap(void);
void PutAreaMapUP_LCD(void);
void MTG_BGM_FadeOutAndChange(s32);
void SetUpCarisumaSally(void);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void ObjSet(s32, s32, s32, s32);
void MTG_CarisumaPosArrange(void *, void *);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void KuniNameSet(s32, s32);
void MTG_BattleStart(s32, s32);
s32 GetUnitStatus(s32);
s32 GetClearTimer(void);
void func_ov058_020d02e4(s32);
s32 checkRectPosUnit(s32, s32, s32, s32, s32);
void MTG_StartEvent(void);
void MTG_BecomeDarkScreen(void);
void MTG_ReturnDarkScreen(void);
void Routine_MessageRect(s32, s32, s32, s32);
void MessagePutAndWait(s32);
void PutBtlResultForFreeWithoutSave(void);
void MTG_FreeBattleEnd1(void);
void MTG_FreeBattleEnd2(s32);
void EndScriptRoutine(void);

typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x8C];
    u32 w8C;
    s32 w90;
    u8 pad94[0x3C];
    u32 f0 : 5;
    u32 f5 : 1;
    u32 f6 : 7;
    u32 f13 : 4;
    u32 f17 : 15;
    u32 step : 16;
    u32 stepHi : 16;
    u8 padD8[0x688];
    u32 w760;
} SceneWork;
extern SceneWork *data_ov000_02051548;
extern Copy7 data_ov058_020d0830;
extern Copy7 data_ov058_020d084c;

void func_ov058_020d0334(void) {
    Copy7 sp5C = data_ov058_020d0830;
    Copy7 sp40 = data_ov058_020d084c;
    s32 a      = 0;

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
                EventDurringTitle(0x14B4);
            case 0x14B4:
                Routine_KyotenChange(4);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov058_020d0160();
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
                MTG_CarisumaPosArrange(&sp5C, &sp40);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x12, 6, 0x3E8, 0x1C2, 0xBE);
                SetPlanTimer(0x1E0);
                SetGameTimeMax(0x1E0);
                PutOnOffTimer(1);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(0, 1);
                KuniNameSet(1, 4);
                MTG_BattleStart(0x37, 0x21);
                MoveOnPlanTimer();
                EventDurringTitle(0x14B5);
            case 0x14B5:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x1510;
                    continue;
                }
                if (CheckAllDeathStatusRect(0, 0xA) != 0) {
                    data_ov000_02051548->step = 0x1512;
                    continue;
                }
                if (GetPlanTimer() > 0x1E0) {
                    data_ov000_02051548->step = 0x1514;
                    continue;
                }
                if (CheckAllDeathStatusRect(0xF06, 0xF0A) != 0) {
                    data_ov000_02051548->step = 0x1516;
                    continue;
                }
                if (GetClearTimer() > 0x2D0 && a == 0) {
                    a = 1;
                    func_ov058_020d02e4(3);
                }
                data_ov000_02051548->w760 &= ~1;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x14B5;
                continue;
            case 0x1510:
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
                EventDurringTitle(0x1511);
            case 0x1511:
                PutOnOffTimer(0);
                EventDurringTitle(0x14B4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1512);
            case 0x1512:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1513);
            case 0x1513:
                PutOnOffTimer(0);
                EventDurringTitle(0x14B4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1514);
            case 0x1514:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1388);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1515);
            case 0x1515:
                PutOnOffTimer(0);
                EventDurringTitle(0x14B4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1516);
            case 0x1516:
                PutOnOffTimer(0);
                EventDurringTitle(0x14B4);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x35);
                EndScriptRoutine();
                continue;
        }
    }
}
