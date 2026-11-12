#include "m2c.h"

void OS_SleepThread(s32);
void ReleaseRetryData(void);
void InitializeOtherKuniAndUnit(void);
void InitializeKuniAndUnit(void);
void SG_setParty(void);
void Routine_FadeOutAll(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void SetPlanTimer(s32);
void SetGameTimeMax(s32);
void PutOnOffTimer(s32);
void MoveOnPlanTimer(void);
s32 GetPlanTimer(void);
s32 CheckAllDeathStatusRect(s32, s32);
s32 CountEnemyUnit(void);
void ShipUnitSelCanOrNot(s32);
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
void Routine_FadeInAll(void);
void KuniNameSet(s32, s32);
void MTG_BattleStart(s32, s32);
s32 GetUnitStatus(s32);
s32 GetClearTimer(void);
s32 checkRectPosUnit(s32, s32, s32, s32, s32);
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
    u8 pad0[0x8C];
    s32 w8C;
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
void func_ov079_020d0160(void);
extern Copy7 data_ov079_020d0810;
extern Copy7 data_ov079_020d082c;

void func_ov079_020d02f0(void) {
    Copy7 sp28;
    Copy7 spC;
    s32 var_r4;
    s32 i;

    sp28   = data_ov079_020d0810;
    spC    = data_ov079_020d082c;
    var_r4 = 0;
    for (;;) {
        switch (data_ov000_02051548->step) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->f5 != 0) {
                    InitializeKuniAndUnit();
                    data_ov000_02051548->w90 = 0x1A;
                    SG_setParty();
                    data_ov000_02051548->w90 = 0x1A;
                    SG_setParty();
                }
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x1388);
            case 0x1388:
                Routine_KyotenChange(0x19);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov079_020d0160();
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
                MTG_CarisumaPosArrange(&sp28, &spC);
                WaitSyncCounter(0xA);
                ShipUnitSelCanOrNot(1);
                CameraMoveAndWait(1, 0, 0x1C, 0xE, 0x3E8, 0x96, 0xBE);
                for (i = 0; i < 0xB; i++) {
                    ObjSet(i, 0x14, 0, 0);
                }
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x1C);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x4C, 0x36);
                EventDurringTitle(0x1CE9);
            case 0x1CE9:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x1D44;
                    continue;
                }
                for (i = 0; i < 0xB; i++) {
                    if (GetUnitStatus(i) == 1) {
                        var_r4 = i + 1;
                        break;
                    }
                }
                if (var_r4 > 0) {
                    var_r4 -= 1;
                    data_ov000_02051548->step = 0x1D42;
                    continue;
                }
                if (CheckAllDeathStatusRect(0xF08, 0xF0D) != 0) {
                    data_ov000_02051548->step = 0x1D4A;
                    continue;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x1CE9;
                continue;
            case 0x1D44:
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
                ShipUnitSelCanOrNot(0);
                EventDurringTitle(0x1D45);
            case 0x1D45:
                EventDurringTitle(0x1CE8);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1D42);
            case 0x1D42:
                MTG_StartEvent();
                WaitSyncCounter(0x1E);
                CameraMoveAndWait(0x3C, 1, var_r4, 0, -1, -1, -1);
                WaitSyncCounter(0x3C);
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x138C);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                ShipUnitSelCanOrNot(0);
                EventDurringTitle(0x1D43);
            case 0x1D43:
                EventDurringTitle(0x1CE8);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1D48);
            case 0x1D48:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                ShipUnitSelCanOrNot(0);
                EventDurringTitle(0x1D49);
            case 0x1D49:
                EventDurringTitle(0x1CE8);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1D4A);
            case 0x1D4A:
                ShipUnitSelCanOrNot(0);
                EventDurringTitle(0x1CE8);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x4A);
                EndScriptRoutine();
                continue;
        }
    }
}
