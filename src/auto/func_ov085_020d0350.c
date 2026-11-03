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
void func_ov085_020d0160(void);
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
s32 GetClearTimer(void);
void func_ov085_020d0300(s32);
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
extern G *data_ov000_02051548;

void func_ov085_020d0350(void) {
    s32 flag = 0;

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
                EventDurringTitle(0x1F40);
            case 0x1F40:
                Routine_KyotenChange(0x26);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov085_020d0160();
                flag = 0;
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->fD0 = (data_ov000_02051548->fD0 & ~0x1E000) | 0x4000;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(flag);
                WaitSyncCounter(10);
                ObjSet(flag, 5, flag, flag);
                WaitSyncCounter(10);
                CameraMoveAndWait(1, 1, 0xB, flag, 0x3E8, 0x2EE, 0xBE);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x27);
                KuniNameSet(flag, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x52, 0x3C);
                EventDurringTitle(0x1F41);
            case 0x1F41:
                if (GetUnitStatus(0xB) == 0) {
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1F9C;
                } else if (CheckAllDeathStatusRect(0, 0xA) != 0) {
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1F9E;
                } else if (CheckAllDeathStatusRect(0xF08, 0xF0F) != 0) {
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1FA2;
                } else {
                    if (GetClearTimer() > 0x168 && flag == 0) {
                        flag = 1;
                        func_ov085_020d0300(3);
                    }
                    data_ov000_02051548->f760 &= ~1;
                    OS_SleepThread(0);
                    data_ov000_02051548->fD4 = (data_ov000_02051548->fD4 & 0xFFFF0000) | 0x1F41;
                }
                continue;
            case 0x1F9C:
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
                EventDurringTitle(0x1F9D);
            case 0x1F9D:
                EventDurringTitle(0x1F40);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1F9E);
            case 0x1F9E:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1C, 0xA);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3C);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1F9F);
            case 0x1F9F:
                EventDurringTitle(0x1F40);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1FA2);
            case 0x1FA2:
                EventDurringTitle(0x1F40);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x50);
                EndScriptRoutine();
                continue;
        }
    }
}
