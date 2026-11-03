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

typedef struct {
    s32 w[7];
} Copy7;
typedef struct {
    u8 pad0[0x90];
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
void func_ov055_020d0160(void);
extern Copy7 data_ov055_020d06b8;
extern Copy7 data_ov055_020d06d4;

void func_ov055_020d02c4(void) {
    Copy7 spA;
    Copy7 spB;

    spA = data_ov055_020d06b8;
    spB = data_ov055_020d06d4;
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
                EventDurringTitle(0x1388);
            case 0x1388:
                Routine_KyotenChange(1);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov055_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 2;
                SetUpSallyForCharNo(0, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&spA, &spB);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 7, 0x14, 0x3E8, 0x2EE, 0xBE);
                SetPlanTimer(0x8C);
                SetGameTimeMax(0x8C);
                PutOnOffTimer(1);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x34, 0x1E);
                MoveOnPlanTimer();
                EventDurringTitle(0x1389);
            case 0x1389:
                if (CheckAllDeathStatusRect(0, 0xA) != 0) {
                    data_ov000_02051548->step = 0x13E6;
                } else if (GetPlanTimer() > 0x8C) {
                    data_ov000_02051548->step = 0x13E8;
                } else if (CheckAllDeathStatusRect(0xF04, 0xF1C) != 0) {
                    data_ov000_02051548->step = 0x13EA;
                } else {
                    data_ov000_02051548->b0 = 0;
                    OS_SleepThread(0);
                    data_ov000_02051548->step = 0x1389;
                }
                break;
            case 0x13E6:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x13E7);
            case 0x13E7:
                PutOnOffTimer(0);
                EventDurringTitle(0x1388);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x13E8);
            case 0x13E8:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1388);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x13E9);
            case 0x13E9:
                PutOnOffTimer(0);
                EventDurringTitle(0x1388);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x13EA);
            case 0x13EA:
                PutOnOffTimer(0);
                EventDurringTitle(0x1388);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x32);
                EndScriptRoutine();
                break;
        }
    }
}
