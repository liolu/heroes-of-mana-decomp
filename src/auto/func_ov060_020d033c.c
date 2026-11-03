#include "m2c.h"

void OS_SleepThread(s32);
void ReleaseRetryData(void);
void InitializeKuniAndUnit(void);
void InitializeOtherKuniAndUnit(void);
void Routine_FadeOutAll(void);
void Routine_FadeInAll(void);
void WaitSyncCounter(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void MessagePutAndWait(s32);
void EventDurringTitle(s32);
void Routine_SetEvPos(s32);
void ObjSet(s32, s32, s32, s32);
s32 GetUnitStatus(s32);
void KuniNameSet(s32, s32);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void EndScriptRoutine(void);
void InitializeSiteOfAreaMap(void);
void PutAreaMapUP_LCD(void);
void StockDataForRetry(void);
void SG_setParty(void);
void MTG_CarisumaPosArrange(void *, void *);
void MTG_BGM_FadeOutAndChange(s32);
void MTG_StartEvent(void);
void MTG_BattleStart(s32, s32);
void func_ov060_020d0160(void);
void func_ov060_020d02ec(s32);
void SetUpCarisumaSally(void);
s32 CheckAllDeathStatusRect(s32, s32);
s32 GetClearTimer(void);
void MTG_BecomeDarkScreen(void);
void MTG_ReturnDarkScreen(void);
void Routine_MessageRect(s32, s32, s32, s32);
void PutBtlResultForFreeWithoutSave(void);
void MTG_FreeBattleEnd1(void);
void MTG_FreeBattleEnd2(s32);

typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x90];
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
    u32 b0 : 1;
    u32 brest : 31;
} SceneWork;
extern SceneWork *data_ov000_02051548;
extern Copy7 data_ov060_020d077c;
extern Copy7 data_ov060_020d0798;

void func_ov060_020d033c(void) {
    Copy7 spA;
    Copy7 spB;
    s32 var_r9;

    spA    = data_ov060_020d077c;
    spB    = data_ov060_020d0798;
    var_r9 = 0;
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
                EventDurringTitle(0x157C);
            /* fallthrough */
            case 0x157C:
                Routine_KyotenChange(6);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov060_020d0160();
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
                CameraMoveAndWait(1, 0, 0xF, 6, 0x3E8, 0x1C2, 0xBE);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x39, 0x23);
                EventDurringTitle(0x157D);
            /* fallthrough */
            case 0x157D:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x15D8;
                } else if (CheckAllDeathStatusRect(0, 0xA) != 0) {
                    data_ov000_02051548->step = 0x15DA;
                } else if (CheckAllDeathStatusRect(0xF06, 0xF0E) != 0) {
                    data_ov000_02051548->step = 0x15DE;
                } else {
                    if ((GetClearTimer() > 0x384) && (var_r9 == 0)) {
                        var_r9 = 1;
                        func_ov060_020d02ec(3);
                    }
                    data_ov000_02051548->b0 = 0;
                    OS_SleepThread(0);
                    data_ov000_02051548->step = 0x157D;
                }
                break;
            case 0x15D8:
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
                EventDurringTitle(0x15D9);
            /* fallthrough */
            case 0x15D9:
                EventDurringTitle(0x157C);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x15DA);
            /* fallthrough */
            case 0x15DA:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x15DB);
            /* fallthrough */
            case 0x15DB:
                EventDurringTitle(0x157C);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x15DE);
            /* fallthrough */
            case 0x15DE:
                EventDurringTitle(0x157C);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x37);
                EndScriptRoutine();
                break;
        }
    }
}
