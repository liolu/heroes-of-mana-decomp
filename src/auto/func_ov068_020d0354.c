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
void func_ov068_020d0160(void);
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
void func_ov068_020d0304(s32);
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
extern Copy7 data_ov068_020d0898;
extern Copy7 data_ov068_020d08b4;

void func_ov068_020d0354(void) {
    Copy7 sp64;
    Copy7 sp48;
    s32 var_r8  = 0;
    s32 var_r9  = 0;
    s32 var_r11 = 0;
    s32 var_r10 = 0;

    sp64 = data_ov068_020d0898;
    sp48 = data_ov068_020d08b4;
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
                EventDurringTitle(0x189C);
            case 0x189C:
                Routine_KyotenChange(0xE);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov068_020d0160();
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
                MTG_CarisumaPosArrange(&sp64, &sp48);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x1E, 4, 0x3E8, 0x1C2, 0xBE);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x41, 0x2B);
                EventDurringTitle(0x189D);
            case 0x189D:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x18F8;
                    continue;
                }
                if (GetUnitStatus(0xF0B) == 1) {
                    data_ov000_02051548->step = 0x18FE;
                    continue;
                }
                if (GetClearTimer() > 0x168 && var_r8 == 0) {
                    var_r8 = 1;
                    func_ov068_020d0304(3);
                }
                if ((data_ov000_02051548->w8C & 4) == 4 && var_r9 == 0) {
                    var_r9  = 1;
                    var_r11 = GetClearTimer();
                }
                if (GetClearTimer() - var_r11 > 0x1E && var_r10 == 0 && var_r9 == 1) {
                    var_r10 = 1;
                    data_ov000_02051548->w8C |= 8;
                }
                if (checkRectPosUnit(0xF0B, 0x23, 0, 0x27, 2) != 0 && var_r10 == 1) {
                    MTG_StartEvent();
                    WaitSyncCounter(0x1E);
                    CameraMoveAndWait(0x3C, 1, 0xF0B, 0, -1, -1, -1);
                    WaitSyncCounter(0x3C);
                    MTG_BecomeDarkScreen();
                    Routine_MessageRect(2, 9, 0x1C, 0xA);
                    MessagePutAndWait(0x138B);
                    WaitSyncCounter(0x3C);
                    MTG_ReturnDarkScreen();
                    data_ov000_02051548->step = 0x18FE;
                    continue;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x189D;
                continue;
            case 0x18F8:
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
                EventDurringTitle(0x18F9);
            case 0x18F9:
                EventDurringTitle(0x189C);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x18FA);
            case 0x18FA:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x18FB);
            case 0x18FB:
                EventDurringTitle(0x189C);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x18FE);
            case 0x18FE:
                EventDurringTitle(0x189C);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x3F);
                EndScriptRoutine();
                continue;
        }
    }
}
