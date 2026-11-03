#include "m2c.h"

typedef struct {
    s32 v[7];
} Arr7;
typedef struct {
    u32 a : 5;
    u32 flag : 1;
    u32 b : 7;
    u32 mode : 4;
    u32 rest : 15;
} D0;
typedef struct {
    u32 bit0 : 1;
    u32 rest : 31;
} B760;
typedef struct {
    u8 pad0[0x90];
    s32 f90;
    u8 pad1[0x3c];
    D0 d0;
    u32 d4;
    u8 pad2[0x688];
    B760 f760;
} G;

extern Arr7 data_ov057_020d0698;
extern Arr7 data_ov057_020d06b4;
extern G *data_ov000_02051548;

void ReleaseRetryData(void);
void InitializeOtherKuniAndUnit(void);
void InitializeKuniAndUnit(void);
void SG_setParty(void);
void Routine_FadeOutAll(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void func_ov057_020d0160(void);
void InitializeSiteOfAreaMap(void);
void PutAreaMapUP_LCD(void);
void MTG_BGM_FadeOutAndChange(s32);
void SetUpCarisumaSally(void);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void ObjSet(s32, s32, s32, s32);
void MTG_CarisumaPosArrange(Arr7 *, Arr7 *);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void Routine_FadeInAll(void);
void KuniNameSet(s32, s32);
void MTG_BattleStart(s32, s32);
s32 CheckAllDeathStatusRect(s32, s32);
s32 GetClearTimer(void);
void func_ov057_020d02bc(s32);
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

void func_ov057_020d030c(void) {
    Arr7 a   = data_ov057_020d0698;
    Arr7 b   = data_ov057_020d06b4;
    s32 flag = 0;

    for (;;) {
        switch (data_ov000_02051548->d4 & 0xffff) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (data_ov000_02051548->d0.flag != 0) {
                    InitializeKuniAndUnit();
                    data_ov000_02051548->f90 = 0x1a;
                    SG_setParty();
                }
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x1450);
            case 0x1450:
                Routine_KyotenChange(3);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov057_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->d0.mode = 1;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(10);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&a, &b);
                WaitSyncCounter(10);
                CameraMoveAndWait(1, 0, 0x1d, 0x1c, 0x3e8, 0x41a, 0xbe);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2f);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x36, 0x20);
                EventDurringTitle(0x1451);
            case 0x1451:
                if (CheckAllDeathStatusRect(0, 10) != 0) {
                    data_ov000_02051548->d4 = (data_ov000_02051548->d4 & 0xffff0000) | 0x14ae;
                } else if (CheckAllDeathStatusRect(0xf06, 0xf0a) != 0) {
                    data_ov000_02051548->d4 = (data_ov000_02051548->d4 & 0xffff0000) | 0x14b2;
                } else {
                    if (GetClearTimer() > 0x1a4 && flag == 0) {
                        flag = 1;
                        func_ov057_020d02bc(3);
                    }
                    data_ov000_02051548->f760.bit0 = 0;
                    OS_SleepThread(0);
                    data_ov000_02051548->d4 = (data_ov000_02051548->d4 & 0xffff0000) | 0x1451;
                }
                break;
            case 0x14ae:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1c, 10);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3c);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x14af);
            case 0x14af:
                EventDurringTitle(0x1450);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x14b2);
            case 0x14b2:
                EventDurringTitle(0x1450);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x34);
                EndScriptRoutine();
                break;
        }
    }
}
