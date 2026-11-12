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
void func_ov077_020d0160(void);
void SetUpSallyForCharNo(s32, s32);
void func_ov077_020d0338(void);
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
void func_ov077_020d0510(s32);
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
extern Copy7 data_ov077_020d0ae8;
extern Copy7 data_ov077_020d0b04;

void func_ov077_020d0540(void) {
    Copy7 sp58 = data_ov077_020d0ae8;
    Copy7 sp3C = data_ov077_020d0b04;
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
                EventDurringTitle(0x1C20);
            case 0x1C20:
                Routine_KyotenChange(0x17);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov077_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 4;
                SetUpSallyForCharNo(6, 2);
                SetUpSallyForCharNo(5, 2);
                SetUpSallyForCharNo(7, 2);
                SetUpSallyForCharNo(8, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&sp58, &sp3C);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x21, 7, 0x3E8, 0x2EE, 0xBE);
                ObjSet(6, 20, 0, 0);
                ObjSet(5, 20, 0, 0);
                ObjSet(7, 20, 0, 0);
                ObjSet(8, 20, 0, 0);
                ObjSet(14, 20, 0, 0);
                ObjSet(26, 20, 0, 0);
                ObjSet(14, 30, 0, 0);
                ObjSet(26, 30, 0, 0);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x1B);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x4A, 0x34);
                EventDurringTitle(0x1C21);
            case 0x1C21:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x1C7C;
                    continue;
                }
                if (GetUnitStatus(6) == 1 || GetUnitStatus(5) == 1 || GetUnitStatus(7) == 1 || GetUnitStatus(8) == 1 ||
                    GetUnitStatus(0xE) == 1 || GetUnitStatus(0x1A) == 1) {
                    data_ov000_02051548->step = 0x1C7A;
                    continue;
                }
                if (CheckAllDeathStatusRect(0xF09, 0xF0F) != 0) {
                    data_ov000_02051548->step = 0x1C82;
                    continue;
                }
                if (GetClearTimer() > 0x384 && a == 0) {
                    a = 1;
                    func_ov077_020d0510(3);
                }
                data_ov000_02051548->w760 &= ~1;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x1C21;
                continue;
            case 0x1C7C:
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
                EventDurringTitle(0x1C7D);
            case 0x1C7D:
                EventDurringTitle(0x1C20);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1C7A);
            case 0x1C7A:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x138C);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1C7B);
            case 0x1C7B:
                EventDurringTitle(0x1C20);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1C82);
            case 0x1C82:
                func_ov077_020d0338();
                EventDurringTitle(0x1C20);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x48);
                EndScriptRoutine();
                continue;
        }
    }
}
