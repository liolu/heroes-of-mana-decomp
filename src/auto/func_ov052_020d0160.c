#include "m2c.h"

extern void ReleaseRetryData(void);
extern void InitializeKuniAndUnit(void);
extern void KuniNameSet(s32, s32);
extern void SetShisetuLevel(s32, s32);
extern void SetLogicNoForShipIn(s32, s32);
extern void AddCarisumaToParty(s32, s32);
extern void MTG_BGM_FadeOutAndChange(s32);
extern void GettingItemOne(s32, s32);
extern void SetUpCarisumaSally(void);
extern void SetUpSallyForCharNo(s32, s32);
extern void Routine_SetEvPosMode(s32);
extern void SelectCarisumaChar(void);
extern void Routine_KyotenChange(s32);
extern void ObjSet_allclear(void);
extern void CameraMove(s32, s32, s32, s32, s32, s32, s32);
extern void Routine_SetEvPos(s32);
extern void WaitSyncCounter(s32);
extern void Routine_FadeInAll(void);
extern void SiteSwitching(s32);
extern void EventDurringTitle(s32);
extern void Routine_BattleStart(void);
extern void ObjSet(s32, s32, s32, s32);
extern void WaitSyncBattle(void);
extern void Routine_FadeOutAll(void);
extern void Routine_PutEventTitle(s32, s32);
extern void WaitSyncCounterTouch(s32);
extern void Routine_SaveGo(void);
extern void EndScriptRoutine(void);
typedef struct {
    u32 lo : 14;
    u32 mid : 14;
    u32 hi : 4;
} B;

typedef struct {
    u8 pad[0x210];
    B b;
    u8 pad2[0x2D0 - 0x214];
} Ent;

typedef struct {
    u8 pad[0x28];
    Ent *arr;
} G2;

typedef struct {
    u8 pad0[0x14];
    struct {
        u32 a : 8;
        u32 n : 4;
        u32 rest : 20;
    } w14;
    u8 pad1[0xD0 - 0x18];
    struct {
        u32 a : 5;
        u32 f : 1;
        u32 rest : 26;
    } wd0;
    u32 wd4;
} S;

extern S *data_ov000_02051548;
extern G2 *data_0203673c;

void func_ov052_020d0160(void) {
    s32 i;

    for (;;) {
        u16 st = data_ov000_02051548->wd4;
        if (st == 1) {
            goto battle;
        }
        if (st == 0x13) {
            goto save;
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
        do {
            GettingItemOne(i, 1);
            i += 1;
        } while (i < 0xE8);
        SetUpCarisumaSally();
        SetUpSallyForCharNo(0, 2);
        SetUpSallyForCharNo(3, 2);
        Routine_SetEvPosMode(2);
        SelectCarisumaChar();
        if (data_ov000_02051548->wd0.f != 0) {
            data_0203673c->arr[data_ov000_02051548->w14.n].b.lo      = 7;
            data_0203673c->arr[data_ov000_02051548->w14.n].b.mid     = 8;
            data_0203673c->arr[data_ov000_02051548->w14.n ^ 1].b.lo  = 7;
            data_0203673c->arr[data_ov000_02051548->w14.n ^ 1].b.mid = 8;
        }
        Routine_KyotenChange(0x1A);
        ObjSet_allclear();
        CameraMove(0x1E, 0, 0x13, 0x15, -1, -1, -1);
        MTG_BGM_FadeOutAndChange(0x1E);
        Routine_SetEvPos(0);
        WaitSyncCounter(0x0A);
        Routine_FadeInAll();
        SiteSwitching(2);
        EventDurringTitle(1);

    battle:
        Routine_BattleStart();
        ObjSet(0, 0x1C, 1, 0);
        ObjSet(3, 0x1C, 1, 0);
        i = 0;
        do {
            ObjSet(i + 0xF00, 0x1C, 1, 0);
            i += 1;
        } while (i < 0x14);
        WaitSyncBattle();
        Routine_FadeOutAll();
        Routine_PutEventTitle(1, 1);
        Routine_FadeInAll();
        WaitSyncCounterTouch(0x12C);
        Routine_FadeOutAll();
        EventDurringTitle(0x13);

    save:
        Routine_SaveGo();
        Routine_KyotenChange(1);
        WaitSyncCounter(0x0A);
        Routine_FadeInAll();
        EndScriptRoutine();
    }
}
