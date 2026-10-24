#include "m2c.h"

typedef struct Gl {
    u8 pad0[0x14];
    u32 pa : 8;
    u32 idx : 4;
    u32 pb : 20;
    u8 pad18[0xb8];
    u32 d0pa : 5;
    u32 d0b5 : 1;
    u32 d0pb : 26;
    u32 fd4 : 16;
    u32 fd4r : 16;
} Gl;

typedef struct Ent {
    u8 pad[0x210];
    u32 a : 14;
    u32 b : 14;
    u32 c : 4;
    u8 pad214[0xbc];
} Ent;

typedef struct Cfg {
    u8 pad[0x28];
    Ent *tab;
} Cfg;

void ReleaseRetryData(void);
void InitializeKuniAndUnit(void);
void KuniNameSet(s32, s32);
void SetLogicNoForShipIn(s32, s32);
void SetLogicParaNoForShipIn(s32, s32);
void AddCarisumaToParty(s32, s32);
void GettingItemOne(s32, s32);
void SetUpCarisumaSally(void);
void SetUpSallyForCharNo(s32, s32);
void Routine_SetEvPosMode(s32);
void SelectCarisumaChar(void);
void SetShisetuLevel(s32, s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void CameraMove(s32, s32, s32, s32, s32, s32, s32);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void Routine_FadeInAll(void);
void SiteSwitching(s32);
void EventDurringTitle(s32);
void Routine_BattleStart(void);
void WaitSyncBattle(void);
void Routine_FadeOutAll(void);
void Routine_PutEventTitle(s32, s32);
void WaitSyncCounterTouch(s32);
void Routine_SaveGo(void);
void EndScriptRoutine(void);

extern Gl *data_ov000_02051548;
extern Cfg *data_0203673c;

void func_ov053_020d0160(void) {
    s32 i;

    for (;;) {
        if (data_ov000_02051548->fd4 == 1) {
            goto l414;
        }
        if (data_ov000_02051548->fd4 == 0x13) {
            goto l444;
        }
        ReleaseRetryData();
        InitializeKuniAndUnit();
        KuniNameSet(0, 1);
        SetLogicNoForShipIn(1, 1);
        SetLogicParaNoForShipIn(1, 1);
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
        i = 1;
        do {
            GettingItemOne(i, 1);
            i++;
        } while (i < 0xe8);
        SetUpCarisumaSally();
        SetUpSallyForCharNo(0, 2);
        Routine_SetEvPosMode(2);
        SelectCarisumaChar();
        if (data_ov000_02051548->d0b5) {
            data_0203673c->tab[data_ov000_02051548->idx].a     = 7;
            data_0203673c->tab[data_ov000_02051548->idx].b     = 8;
            data_0203673c->tab[data_ov000_02051548->idx ^ 1].a = 1;
            data_0203673c->tab[data_ov000_02051548->idx ^ 1].b = 0;
        }
        SetShisetuLevel(7, 2);
        SetShisetuLevel(0, 2);
        SetShisetuLevel(1, 2);
        SetShisetuLevel(2, 1);
        SetShisetuLevel(3, 2);
        SetShisetuLevel(5, 1);
        SetShisetuLevel(4, 1);
        SetShisetuLevel(0xc, 1);
        SetShisetuLevel(0xa, 1);
        Routine_KyotenChange(1);
        ObjSet_allclear();
        CameraMove(0x1e, 0, 0x13, 0x15, -1, -1, -1);
        Routine_SetEvPos(0);
        WaitSyncCounter(10);
        Routine_FadeInAll();
        SiteSwitching(2);
        EventDurringTitle(1);
    l414:
        Routine_BattleStart();
        WaitSyncBattle();
        Routine_FadeOutAll();
        Routine_PutEventTitle(1, 1);
        Routine_FadeInAll();
        WaitSyncCounterTouch(0x12c);
        Routine_FadeOutAll();
        EventDurringTitle(0x13);
    l444:
        Routine_SaveGo();
        Routine_KyotenChange(1);
        WaitSyncCounter(10);
        Routine_FadeInAll();
        EndScriptRoutine();
    }
}
