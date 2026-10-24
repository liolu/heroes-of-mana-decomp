#include "m2c.h"

typedef struct Unit {
    u8 pad[0x210];
    u32 a : 14;
    u32 b : 14;
    u32 c : 4;
    u8 pad2[0x2d0 - 0x214];
} Unit;

typedef struct Tbl {
    u8 pad[0x28];
    Unit *units;
} Tbl;

typedef struct G {
    u8 pad[0x14];
    u32 f14_lo : 8;
    u32 idx : 4;
    u32 f14_hi : 20;
    u8 pad2[0xb8];
    u32 d0_lo : 5;
    u32 b5 : 1;
    u32 d0_hi : 26;
} G;

extern G *data_ov000_02051548;
extern Tbl *data_0203673c;
void ReleaseRetryData(void);
void InitializeOtherKuniAndUnit();
void InitializeKuniAndUnit(void);
void Routine_FadeOutAll(void);
void SetShisetuLevel(s32, s32);
void SetLogicNoForShipIn(s32, s32);
void MTG_SaveParaReset(void);
void SetTitleNameNo(s32);
void Routine_KyotenChange(s32);
void ObjSet_allclear(void);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void Routine_SetEvPos(s32);
void WaitSyncCounter(s32);
void Routine_FadeInAll(void);
void MessagePutAndWait(s32);
void EndScriptRoutine(void);

void func_ov039_020d0160(void) {
    s32 i;
    while (1) {
        ReleaseRetryData();
        InitializeOtherKuniAndUnit();
        if (data_ov000_02051548->b5) {
            InitializeKuniAndUnit();
        }
        Routine_FadeOutAll();
        data_0203673c->units[data_ov000_02051548->idx].a = 4;
        data_0203673c->units[data_ov000_02051548->idx].b = 2;
        SetShisetuLevel(7, 1);
        SetShisetuLevel(0, 1);
        SetShisetuLevel(1, 1);
        SetShisetuLevel(2, 0);
        SetShisetuLevel(3, 0);
        SetShisetuLevel(4, 0);
        SetShisetuLevel(5, 0);
        SetShisetuLevel(6, 0);
        SetShisetuLevel(8, 0);
        SetLogicNoForShipIn(1, 0);
        MTG_SaveParaReset();
        Routine_FadeOutAll();
        data_0203673c->units[data_ov000_02051548->idx].a = 4;
        data_0203673c->units[data_ov000_02051548->idx].b = 2;
        SetShisetuLevel(7, 1);
        SetShisetuLevel(0, 1);
        SetShisetuLevel(1, 1);
        SetShisetuLevel(2, 0);
        SetShisetuLevel(3, 0);
        SetShisetuLevel(4, 0);
        SetShisetuLevel(5, 0);
        SetShisetuLevel(6, 0);
        SetShisetuLevel(8, 0);
        SetLogicNoForShipIn(1, 0);
        MTG_SaveParaReset();
        SetTitleNameNo(5);
        Routine_KyotenChange(1);
        ObjSet_allclear();
        CameraMoveAndWait(1, 0, 7, 0x14, 0x3e8, 0x2ee, 0xbe);
        Routine_SetEvPos(0);
        WaitSyncCounter(10);
        Routine_FadeInAll();
        WaitSyncCounter(0x1e);
        MessagePutAndWait(0xd48);
        for (i = 0; i < 0x3a; i++) {
            MessagePutAndWait(-1);
            WaitSyncCounter(0xf);
        }
        EndScriptRoutine();
    }
}
