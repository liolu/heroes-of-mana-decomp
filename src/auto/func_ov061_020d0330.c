#include "m2c.h"

typedef struct Arr7 {
    s32 w[7];
} Arr7;

typedef struct G0 {
    u8 pad[0xd0];
    u32 b0 : 5;
    u32 f5 : 1;
    u32 b6 : 7;
    u32 f13 : 4;
    u32 rest : 15;
    u32 id : 16;
    u32 rest2 : 16;
} G0;

typedef struct G1 {
    u8 pad[0x90];
    s32 v90;
} G1;

typedef struct G2 {
    u8 pad[0x760];
    u32 b0 : 1;
    u32 rest : 31;
} G2;

extern Arr7 data_ov061_020d0770;
extern Arr7 data_ov061_020d078c;
extern void *data_ov000_02051548;

extern void ReleaseRetryData(void);
extern void InitializeOtherKuniAndUnit(void);
extern void InitializeKuniAndUnit(void);
extern void SG_setParty(void);
extern void Routine_FadeOutAll(void);
extern void StockDataForRetry(void);
extern void EventDurringTitle(s32);
extern void Routine_KyotenChange(s32);
extern void ObjSet_allclear(void);
extern void func_ov061_020d0160(void);
extern void InitializeSiteOfAreaMap(void);
extern void PutAreaMapUP_LCD(void);
extern void MTG_BGM_FadeOutAndChange(s32);
extern void SetUpCarisumaSally(void);
extern void Routine_SetEvPosMode(s32);
extern void SelectCarisumaChar(void);
extern void Routine_SetEvPos(s32);
extern void WaitSyncCounter(s32);
extern void ObjSet(s32, s32, s32, s32);
extern void MTG_CarisumaPosArrange(Arr7 *, Arr7 *);
extern void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
extern void Routine_FadeInAll(void);
extern void KuniNameSet(s32, s32);
extern void MTG_BattleStart(s32, s32);
extern s32 GetUnitStatus(s32);
extern s32 CheckAllDeathStatusRect(s32, s32);
extern s32 MTG_Check_Live_No(s32, s32);
extern void func_ov061_020d02e0(s32);
extern void OS_SleepThread(s32);
extern void MTG_StartEvent(void);
extern void MTG_BecomeDarkScreen(void);
extern void Routine_MessageRect(s32, s32, s32, s32);
extern void MessagePutAndWait(s32);
extern void MTG_ReturnDarkScreen(void);
extern void PutBtlResultForFreeWithoutSave(void);
extern void MTG_FreeBattleEnd1(void);
extern void MTG_FreeBattleEnd2(s32);
extern void EndScriptRoutine(void);

void func_ov061_020d0330(void) {
    Arr7 la;
    Arr7 lb;
    s32 flag;

    la   = data_ov061_020d0770;
    lb   = data_ov061_020d078c;
    flag = 0;
    while (1) {
        switch (((G0 *) data_ov000_02051548)->id) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if (((G0 *) data_ov000_02051548)->f5 != 0) {
                    InitializeKuniAndUnit();
                    ((G1 *) data_ov000_02051548)->v90 = 0x1a;
                    SG_setParty();
                }
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x15e0);
            case 0x15e0:
                Routine_KyotenChange(7);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov061_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                ((G0 *) data_ov000_02051548)->f13 = 3;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(10);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&la, &lb);
                WaitSyncCounter(10);
                CameraMoveAndWait(1, 0, 0x12, 0x21, 0x3e8, 0x96, 0xbe);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2f);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x3a, 0x24);
                EventDurringTitle(0x15e1);
            case 0x15e1:
                if (GetUnitStatus(0xb) == 0) {
                    ((G0 *) data_ov000_02051548)->id = 0x163c;
                    continue;
                }
                if (CheckAllDeathStatusRect(0, 10) != 0) {
                    ((G0 *) data_ov000_02051548)->id = 0x163e;
                    continue;
                }
                if (CheckAllDeathStatusRect(0xf08, 0xf20) != 0) {
                    ((G0 *) data_ov000_02051548)->id = 0x1642;
                    continue;
                }
                if (MTG_Check_Live_No(0xf08, 0xf20) <= 10 && flag == 0) {
                    flag = 1;
                    func_ov061_020d02e0(3);
                }
                ((G2 *) data_ov000_02051548)->b0 = 0;
                OS_SleepThread(0);
                ((G0 *) data_ov000_02051548)->id = 0x15e1;
                continue;
            case 0x163c:
                MTG_StartEvent();
                WaitSyncCounter(0x1e);
                CameraMoveAndWait(0x3c, 1, 0xb, 0, -1, -1, -1);
                WaitSyncCounter(0x3c);
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1c, 10);
                MessagePutAndWait(0x138a);
                WaitSyncCounter(0x3c);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x163d);
            case 0x163d:
                EventDurringTitle(0x15e0);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x163e);
            case 0x163e:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1c, 10);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3c);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x163f);
            case 0x163f:
                EventDurringTitle(0x15e0);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1642);
            case 0x1642:
                EventDurringTitle(0x15e0);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x38);
                EndScriptRoutine();
                break;
        }
    }
}
