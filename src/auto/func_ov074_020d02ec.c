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
void func_ov074_020d0160(void);
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
s32 CheckAllDeathStatusRect(s32, s32);
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
extern Copy7 data_ov074_020d070c;
extern Copy7 data_ov074_020d0728;

void func_ov074_020d02ec(void) {
    Copy7 sp50;
    Copy7 sp34;

    sp50 = data_ov074_020d070c;
    sp34 = data_ov074_020d0728;
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
                EventDurringTitle(0x1AF4);
            case 0x1AF4:
                Routine_KyotenChange(0x14);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov074_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->f13 = 2;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(0xA);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&sp50, &sp34);
                WaitSyncCounter(0xA);
                CameraMoveAndWait(1, 0, 0x13, 0xC, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(0xA);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2F);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x47, 0x31);
                EventDurringTitle(0x1AF5);
            case 0x1AF5:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->step = 0x1B50;
                    continue;
                }
                if (CheckAllDeathStatusRect(0, 0xA) != 0) {
                    data_ov000_02051548->step = 0x1B52;
                    continue;
                }
                if (CheckAllDeathStatusRect(0xF08, 0xF0B) != 0) {
                    data_ov000_02051548->step = 0x1B56;
                    continue;
                }
                data_ov000_02051548->b0 = 0;
                OS_SleepThread(0);
                data_ov000_02051548->step = 0x1AF5;
                continue;
            case 0x1B50:
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
                EventDurringTitle(0x1B51);
            case 0x1B51:
                EventDurringTitle(0x1AF4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1B52);
            case 0x1B52:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1B53);
            case 0x1B53:
                EventDurringTitle(0x1AF4);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1B56);
            case 0x1B56:
                EventDurringTitle(0x1AF4);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x45);
                EndScriptRoutine();
                continue;
        }
    }
}
