typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct {
    s32 w[7];
} Pos7;
typedef struct {
    u8 pad0[0x90];
    s32 f90;
    u8 pad1[0xd0 - 0x94];
    u32 fd0;
    u32 fd4;
    u8 pad2[0x760 - 0xd8];
    u32 f760;
} Glob;

extern Glob *data_ov000_02051548;
extern Pos7 data_ov078_020d07a0;
extern Pos7 data_ov078_020d07bc;

void ReleaseRetryData(void);
void InitializeOtherKuniAndUnit(void);
void InitializeKuniAndUnit(void);
void SG_setParty(void);
void Routine_FadeOutAll(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void func_ov078_020d0160(void);
void InitializeSiteOfAreaMap(void);
void PutAreaMapUP_LCD(void);
void MTG_BGM_FadeOutAndChange(s32);
void SetUpCarisumaSally(void);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void ObjSet(s32, s32, s32, s32);
void MTG_CarisumaPosArrange(Pos7 *, Pos7 *);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void Routine_FadeInAll(void);
void KuniNameSet(s32, s32);
void MTG_BattleStart(s32, s32);
s32 GetUnitStatus(s32);
s32 CheckAllDeathStatusRect(s32, s32);
s32 CountEnemyUnit(void);
s32 MTG_Check_Live_No(s32, s32);
void func_ov078_020d0304(s32);
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

void func_ov078_020d0354(void) {
    Pos7 a   = data_ov078_020d07a0;
    Pos7 b   = data_ov078_020d07bc;
    s32 flag = 0;

    for (;;) {
        switch ((u32) (u16) data_ov000_02051548->fd4) {
            default:
            case 0x1ce4:
            case 0x1ce5:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if ((data_ov000_02051548->fd0 << 26) >> 31) {
                    InitializeKuniAndUnit();
                    data_ov000_02051548->f90 = 0x1a;
                    SG_setParty();
                }
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x1c84);
            case 0x1c84:
                Routine_KyotenChange(0x18);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov078_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->fd0 = (data_ov000_02051548->fd0 & ~0x1e000) | 0xa000;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(10);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&a, &b);
                WaitSyncCounter(10);
                CameraMoveAndWait(1, 0, 0x22, 0x19, 0x3e8, 0x41a, 0xbe);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x27);
                KuniNameSet(0, 1);
                KuniNameSet(1, 8);
                MTG_BattleStart(0x4b, 0x35);
                EventDurringTitle(0x1c85);
            case 0x1c85:
                if (GetUnitStatus(0xb) == 0) {
                    data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x1ce0;
                } else if (CheckAllDeathStatusRect(0, 10) != 0) {
                    data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x1ce2;
                } else if (CountEnemyUnit() == 0) {
                    data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x1ce6;
                } else {
                    if (MTG_Check_Live_No(0xf0b, 0xf23) <= 10 && flag == 0) {
                        flag = 1;
                        func_ov078_020d0304(3);
                    }
                    data_ov000_02051548->f760 &= ~1;
                    OS_SleepThread(0);
                    data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x1c85;
                }
                continue;
            case 0x1ce0:
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
                EventDurringTitle(0x1ce1);
            case 0x1ce1:
                EventDurringTitle(0x1c84);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1ce2);
            case 0x1ce2:
                MTG_StartEvent();
                MTG_BecomeDarkScreen();
                MTG_BGM_FadeOutAndChange(6);
                Routine_MessageRect(2, 9, 0x1c, 10);
                MessagePutAndWait(0x1389);
                WaitSyncCounter(0x3c);
                MTG_ReturnDarkScreen();
                EventDurringTitle(0x1ce3);
            case 0x1ce3:
                EventDurringTitle(0x1c84);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1ce6);
            case 0x1ce6:
                EventDurringTitle(0x1c84);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x49);
                EndScriptRoutine();
                continue;
        }
    }
}
