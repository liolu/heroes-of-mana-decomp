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
s32 GetUnitStatus(s32);
void func_ov066_020d0160(void);
extern Copy7 data_ov066_020d07d8;
extern Copy7 data_ov066_020d07f4;

void func_ov066_020d02f4(void) {
    Copy7 spA;
    Copy7 spB;

    spA = data_ov066_020d07d8;
    spB = data_ov066_020d07f4;
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
                EventDurringTitle(0x17d4);
            case 0x17d4:
                Routine_KyotenChange(0xC);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov066_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 1;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&spA, &spB);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x11, 0x25, 0x3E8, 0x96, 0xBE);
                SetPlanTimer(0x258);
                SetGameTimeMax(0x258);
                PutOnOffTimer(1);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(0, 1);
                KuniNameSet(1, 4);
                MTG_BattleStart(0x3F, 0x29);
                MoveOnPlanTimer();
                EventDurringTitle(0x17d5);
            case 0x17d5:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x1830;
                } else if (CheckAllDeathStatusRect(0, 0xA) != 0) {
                    data_ov000_02051548->step = 0x1832;
                } else if (GetPlanTimer() > 0x258) {
                    data_ov000_02051548->step = 0x1834;
                } else if (CheckAllDeathStatusRect(0xF0B, 0xF12) != 0) {
                    data_ov000_02051548->step = 0x1836;
                } else {
                    data_ov000_02051548->b0 = 0;
                    OS_SleepThread(0);
                    data_ov000_02051548->step = 0x17d5;
                }
                break;
            case 0x1830:
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
                EventDurringTitle(0x1831);
            case 0x1831:
                PutOnOffTimer(0);
                EventDurringTitle(0x17d4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1832);
            case 0x1832:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1833);
            case 0x1833:
                PutOnOffTimer(0);
                EventDurringTitle(0x17d4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1834);
            case 0x1834:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1388);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1835);
            case 0x1835:
                PutOnOffTimer(0);
                EventDurringTitle(0x17d4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1836);
            case 0x1836:
                PutOnOffTimer(0);
                EventDurringTitle(0x17d4);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x3D);
                EndScriptRoutine();
                break;
        }
    }
}
