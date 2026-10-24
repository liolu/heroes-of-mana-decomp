#include "m2c.h"

typedef struct {
    u8 pad0[0x14];
    u32 p14 : 8;
    u32 tsel : 4;
    u32 q14 : 20;
    u8 pad18[0xb8];
    u32 wd0_lo : 5;
    u32 wd0_f : 1;
    u32 wd0_hi : 26;
    u32 hd4 : 16;
    u32 hd4hi : 16;
} G;

typedef struct {
    u8 pad[0x210];
    u32 lo : 14;
    u32 mid : 14;
    u32 hi : 4;
} Ent;

typedef struct {
    u8 pad[0x28];
    u8 *tbl;
} Gl;

extern G *data_ov000_02051548;
extern Gl *data_0203673c;
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

void func_ov047_020d0160(void) {
    s32 i;
    s32 j;
    Ent *e;
    while (1) {
        switch (data_ov000_02051548->hd4) {
            default:
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
                SetShisetuLevel(0xc, 1);
                SetShisetuLevel(0xa, 1);
                SetShisetuLevel(0xf, 1);
                SetShisetuLevel(8, 1);
                SetShisetuLevel(0xb, 1);
                SetShisetuLevel(0xd, 1);
                SetShisetuLevel(0xe, 1);
                SetShisetuLevel(9, 1);
                SetLogicNoForShipIn(1, 0);
                AddCarisumaToParty(0x3c, 0);
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
                for (i = 1; i < 0xe8; i++) {
                    GettingItemOne(i, 1);
                }
                SetUpCarisumaSally();
                SetUpSallyForCharNo(0, 2);
                SetUpSallyForCharNo(3, 2);
                Routine_SetEvPosMode(2);
                SelectCarisumaChar();
                if (data_ov000_02051548->wd0_f) {
                    e      = (Ent *) (data_0203673c->tbl + data_ov000_02051548->tsel * 0x2D0);
                    e->lo  = 7;
                    e      = (Ent *) (data_0203673c->tbl + data_ov000_02051548->tsel * 0x2D0);
                    e->mid = 8;
                    e      = (Ent *) (data_0203673c->tbl + (data_ov000_02051548->tsel ^ 1) * 0x2D0);
                    e->lo  = 7;
                    e      = (Ent *) (data_0203673c->tbl + (data_ov000_02051548->tsel ^ 1) * 0x2D0);
                    e->mid = 8;
                }
                Routine_KyotenChange(0x1a);
                ObjSet_allclear();
                CameraMove(0x1e, 0, 0x13, 0x15, -1, -1, -1);
                MTG_BGM_FadeOutAndChange(0x2b);
                Routine_SetEvPos(0);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                SiteSwitching(2);
                EventDurringTitle(1);
            case 1:
                Routine_BattleStart();
                ObjSet(0, 0x1c, 1, 0);
                ObjSet(3, 0x1c, 1, 0);
                for (j = 0; j < 0x14; j++) {
                    ObjSet(j + 0xf00, 0x1c, 1, 0);
                }
                WaitSyncBattle();
                Routine_FadeOutAll();
                Routine_PutEventTitle(1, 1);
                Routine_FadeInAll();
                WaitSyncCounterTouch(0x12c);
                Routine_FadeOutAll();
                EventDurringTitle(0x13);
            case 0x13:
                Routine_SaveGo();
                Routine_KyotenChange(1);
                WaitSyncCounter(10);
                Routine_FadeInAll();
                EndScriptRoutine();
        }
    }
}
