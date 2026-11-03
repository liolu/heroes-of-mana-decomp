typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct {
    s32 w[7];
} Pos7;
typedef struct {
    u8 pad00[0x8c];
    u32 f8c;
    s32 f90;
    u8 pad1[0xd0 - 0x94];
    u32 fd0;
    u32 fd4;
    u8 pad2[0x760 - 0xd8];
    u32 f760;
} Glob;

extern Glob *data_ov000_02051548;
extern Pos7 data_ov069_020d0808;
extern Pos7 data_ov069_020d0824;

void ReleaseRetryData(void);
void InitializeOtherKuniAndUnit(void);
void InitializeKuniAndUnit(void);
void SG_setParty(void);
void Routine_FadeOutAll(void);
void StockDataForRetry(void);
void EventDurringTitle(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void func_ov069_020d0160(void);
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
s32 GetClearTimer(void);
s32 checkRectPosUnit(s32, s32, s32, s32, s32);
void func_ov069_020d030c(s32);
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

void func_ov069_020d035c(void) {
    Pos7 a = data_ov069_020d0808;
    Pos7 b = data_ov069_020d0824;
    s32 f1 = 0;
    s32 f2 = 0;
    s32 t  = 0;
    s32 f3 = 0;

    for (;;) {
        switch ((u32) (u16) data_ov000_02051548->fd4) {
            default:
                ReleaseRetryData();
                InitializeOtherKuniAndUnit();
                if ((data_ov000_02051548->fd0 << 26) >> 31) {
                    InitializeKuniAndUnit();
                    data_ov000_02051548->f90 = 0x1a;
                    SG_setParty();
                }
                Routine_FadeOutAll();
                StockDataForRetry();
                EventDurringTitle(0x1900);
            case 0x1900:
                Routine_KyotenChange(0xf);
                ObjSet_allclear();
                InitializeOtherKuniAndUnit();
                func_ov069_020d0160();
                InitializeSiteOfAreaMap();
                PutAreaMapUP_LCD();
                MTG_BGM_FadeOutAndChange(0x28);
                ObjSet_allclear();
                SetUpCarisumaSally();
                data_ov000_02051548->fd0 = (data_ov000_02051548->fd0 & ~0x1e000) | 0x6000;
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                Routine_SetEvPos(0);
                WaitSyncCounter(10);
                ObjSet(0, 5, 0, 0);
                MTG_CarisumaPosArrange(&a, &b);
                WaitSyncCounter(10);
                CameraMoveAndWait(1, 0, 0x16, 0x20, 0x3e8, 0x41a, 0xbe);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                MTG_BGM_FadeOutAndChange(0x2f);
                KuniNameSet(0, 1);
                KuniNameSet(1, 4);
                MTG_BattleStart(0x42, 0x2c);
                EventDurringTitle(0x1901);
            case 0x1901:
                if (GetUnitStatus(0xb) == 0) {
                    data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x195c;
                } else if (GetUnitStatus(0x10) == 1) {
                    data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x1962;
                } else {
                    if (GetClearTimer() > 0x1e0 && f1 == 0) {
                        f1 = 1;
                        func_ov069_020d030c(3);
                    }
                    if ((data_ov000_02051548->f8c & 4) == 4 && f2 == 0) {
                        f2 = 1;
                        t  = GetClearTimer();
                    }
                    if (GetClearTimer() - t > 30 && f3 == 0 && f2 == 1) {
                        f3 = 1;
                        data_ov000_02051548->f8c |= 8;
                    }
                    if (checkRectPosUnit(0x10, 0x21, 0, 0x22, 6) != 0 && f3 == 1) {
                        MTG_StartEvent();
                        WaitSyncCounter(0x1e);
                        CameraMoveAndWait(0x3c, 1, 0x10, 0, -1, -1, -1);
                        WaitSyncCounter(0x3c);
                        MTG_BecomeDarkScreen();
                        Routine_MessageRect(2, 9, 0x1c, 10);
                        MessagePutAndWait(0x138b);
                        WaitSyncCounter(0x3c);
                        MTG_ReturnDarkScreen();
                        data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x1962;
                    } else {
                        data_ov000_02051548->f760 &= ~1;
                        OS_SleepThread(0);
                        data_ov000_02051548->fd4 = (data_ov000_02051548->fd4 & 0xffff0000) | 0x1901;
                    }
                }
                continue;
            case 0x195c:
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
                EventDurringTitle(0x195d);
            case 0x195d:
                EventDurringTitle(0x1900);
                PutBtlResultForFreeWithoutSave();
                EventDurringTitle(0x1962);
            case 0x1962:
                EventDurringTitle(0x1900);
                MTG_FreeBattleEnd1();
                MTG_FreeBattleEnd2(0x40);
                EndScriptRoutine();
                continue;
        }
    }
}
