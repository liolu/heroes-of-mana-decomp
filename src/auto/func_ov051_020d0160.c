#include "m2c.h"

typedef struct {
    u32 a : 14;
    u32 b : 14;
    u32 r : 4;
} W210;
typedef struct {
    u8 p[0x210];
    W210 w210;
    u8 q[0x2D0 - 0x214];
} Unit;
typedef struct {
    u8 p[0x28];
    Unit *units;
} T;
typedef struct {
    u32 pad : 8;
    u32 idx : 4;
    u32 r : 20;
} W14;
typedef struct {
    u32 pad : 5;
    u32 f : 1;
    u32 r : 26;
} WD0;
typedef struct {
    u8 p[0x14];
    W14 w14;
    u8 q[0xD0 - 0x18];
    WD0 wD0;
    struct {
        u32 st : 16;
        u32 r : 16;
    } wD4;
} G;
extern G *data_ov000_02051548;
extern T *data_0203673c;

void ReleaseRetryData(void);
void InitializeKuniAndUnit(void);
void KuniNameSet(s32, s32);
void SetShisetuLevel(s32, s32);
void SetLogicNoForShipIn(s32, s32);
void AddCarisumaToParty(s32, s32);
void MTG_BGM_FadeOutAndChange(s32);
void GettingItemOne(s32, s32);
void SetUpCarisumaSally(void);
void SetUpSallyForCharNo(s32, s32);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void CameraMove(s32, s32, s32, s32, s32, s32, s32);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void Routine_FadeInAll(void);
void SiteSwitching(s32);
void EventDurringTitle(s32);
void Routine_BattleStart(void);
void ObjSet(s32, s32, s32, s32);
void WaitSyncBattle(void);
void Routine_FadeOutAll(void);
void Routine_PutEventTitle(s32, s32);
void WaitSyncCounterTouch(s32);
void Routine_SaveGo(void);
void EndScriptRoutine(void);

void func_ov051_020d0160(void) {
    s32 i;
    s32 j;
    u32 st;

    for (;;) {
        st = data_ov000_02051548->wD4.st;
        if (st == 1) {
            goto L1;
        }
        if (st == 0x13) {
            goto L13;
        }
        ReleaseRetryData();
        InitializeKuniAndUnit();
        KuniNameSet(0, 1);
        SetShisetuLevel(0, 6);
        SetShisetuLevel(1, 5);
        SetShisetuLevel(2, 5);
        SetShisetuLevel(3, 5);
        SetShisetuLevel(4, 1);
        SetShisetuLevel(5, 3);
        SetShisetuLevel(6, 1);
        SetShisetuLevel(7, 4);
        SetShisetuLevel(12, 1);
        SetShisetuLevel(10, 1);
        SetShisetuLevel(15, 1);
        SetShisetuLevel(8, 1);
        SetShisetuLevel(11, 1);
        SetShisetuLevel(13, 1);
        SetShisetuLevel(14, 1);
        SetShisetuLevel(9, 1);
        SetLogicNoForShipIn(1, 0);
        AddCarisumaToParty(1, 0);
        AddCarisumaToParty(2, 1);
        AddCarisumaToParty(3, 2);
        AddCarisumaToParty(4, 3);
        AddCarisumaToParty(5, 4);
        AddCarisumaToParty(6, 5);
        AddCarisumaToParty(7, 6);
        AddCarisumaToParty(8, 7);
        AddCarisumaToParty(9, 8);
        AddCarisumaToParty(10, 9);
        AddCarisumaToParty(11, 10);
        MTG_BGM_FadeOutAndChange(0x28);
        i = 1;
        j = i;
        do {
            GettingItemOne(i, j);
            i += 1;
        } while (i < 0xE8);
        SetUpCarisumaSally();
        SetUpSallyForCharNo(0, 2);
        SetUpSallyForCharNo(3, 2);
        Routine_SetEvPosMode(2);
        SelectCarisumaChar();
        if (data_ov000_02051548->wD0.f) {
            data_0203673c->units[data_ov000_02051548->w14.idx].w210.a     = 7;
            data_0203673c->units[data_ov000_02051548->w14.idx].w210.b     = 8;
            data_0203673c->units[data_ov000_02051548->w14.idx ^ 1].w210.a = 7;
            data_0203673c->units[data_ov000_02051548->w14.idx ^ 1].w210.b = 8;
        }
        Routine_KyotenChange(0x1A);
        ObjSet_allclear();
        CameraMove(0x1E, 0, 0x13, 0x15, -1, -1, -1);
        MTG_BGM_FadeOutAndChange(0x18);
        Routine_SetEvPos(0);
        WaitSyncCounter(10);
        Routine_FadeInAll();
        SiteSwitching(2);
        EventDurringTitle(1);
    L1:
        Routine_BattleStart();
        ObjSet(0, 0x1C, 1, 0);
        ObjSet(3, 0x1C, 1, 0);
        for (i = 0; i < 0x14; i++) {
            ObjSet(0xF00 + i, 0x1C, 1, 0);
        }
        WaitSyncBattle();
        Routine_FadeOutAll();
        Routine_PutEventTitle(1, 1);
        Routine_FadeInAll();
        WaitSyncCounterTouch(0x12C);
        Routine_FadeOutAll();
        EventDurringTitle(0x13);
    L13:
        Routine_SaveGo();
        Routine_KyotenChange(1);
        WaitSyncCounter(10);
        Routine_FadeInAll();
        EndScriptRoutine();
    }
}
