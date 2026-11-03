#include "m2c.h"

typedef struct {
    u32 lo : 14;
    u32 mid : 14;
    u32 hi : 4;
} W210;
typedef struct {
    u8 pad[0x210];
    W210 w;
    u8 pad2[0x2d0 - 0x214];
} P;
typedef struct {
    u32 g0;
    u32 g4;
    u8 pad8[0x1c];
    void *ents;
    P *pl;
} G;
typedef struct {
    u32 a : 8;
    u32 idx : 4;
    u32 b : 20;
} W14;
typedef struct {
    u32 a : 5;
    u32 f : 1;
    u32 b : 26;
} WD0;
typedef struct {
    u8 pad0[0x14];
    W14 w14;
    u8 pad18[0x58 - 0x18];
    s32 f58;
    s32 f5c;
    s32 f60;
    s32 f64;
    u8 pad68[0x90 - 0x68];
    s32 f90;
    u8 pad94[0xd0 - 0x94];
    WD0 wd0;
} S;

extern G *data_0203673c;
extern S *data_ov000_02051548;

s32 GetGameLevelMode(void);
void SetDropItemBySetNo(s32);
void SetShisetuLevel(s32, s32);
void SetLogicNoForShipIn(s32, s32);

void func_ov032_020d0160(void) {
    switch (GetGameLevelMode()) {
        case 0:
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.lo  = 5;
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.mid = 0xB;
            SetDropItemBySetNo(0x1B);
            break;
        case 1:
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.lo  = 1;
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.mid = 4;
            SetDropItemBySetNo(0x35);
            break;
        case 2:
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.lo  = 1;
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.mid = 2;
            break;
        case 3:
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.lo  = 1;
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.mid = 0;
            break;
        default:
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.lo  = 5;
            data_0203673c->pl[data_ov000_02051548->w14.idx].w.mid = 0xB;
            break;
    }
    SetShisetuLevel(0, 6);
    SetShisetuLevel(1, 5);
    SetShisetuLevel(2, 5);
    SetShisetuLevel(3, 5);
    SetShisetuLevel(4, 1);
    SetShisetuLevel(5, 3);
    SetShisetuLevel(6, 1);
    SetShisetuLevel(7, 4);
    SetShisetuLevel(0xC, 1);
    SetShisetuLevel(0xA, 1);
    SetShisetuLevel(0xF, 1);
    SetShisetuLevel(8, 1);
    SetShisetuLevel(0xB, 1);
    SetShisetuLevel(0xD, 1);
    SetShisetuLevel(0xE, 1);
    SetShisetuLevel(9, 1);
    SetLogicNoForShipIn(1, 0);
    data_ov000_02051548->f64 = 0;
    data_ov000_02051548->f58 = 1;
    data_ov000_02051548->f5c = 2;
    data_ov000_02051548->f60 = 3;
    if (data_ov000_02051548->wd0.f != 0) {
        data_ov000_02051548->f90 = 0x1A;
    }
}
