/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 lo : 2;
    u32 rest : 30;
} PW4;
typedef struct {
    u32 lo : 14;
    u32 mid : 14;
    u32 hi : 4;
} PW210;
typedef struct {
    u32 lo : 4;
    u32 rest : 28;
    u32 y;
} Cell;
typedef struct {
    u16 a : 8;
    u16 b : 1;
    u16 c : 5;
    u16 d : 2;
} H3;
typedef struct {
    u32 w0;
    PW4 w4;
    u8 pad8[0x210 - 8];
    PW210 w210;
    u8 pad214[8];
    Cell cell[9];
    u16 slot[0x25];
    u16 last;
    u8 pad2b0[0x10];
    H3 h[8];
} P;
typedef struct {
    u32 f0 : 1;
    u32 rest : 31;
} EW0;
typedef struct {
    u32 a : 5;
    u32 b : 1;
    u32 c : 2;
    u32 d : 8;
    u32 e : 15;
    u32 f : 1;
} EW4;
typedef struct {
    EW0 w0;
    EW4 w4;
    u8 pad8[0x2c];
} E;
typedef struct {
    u8 pad0[8];
    u32 pad8 : 10;
    u32 sel : 4;
    u32 rest : 18;
    u8 padc[9];
    u8 b15;
    u8 pad16[10];
} Tab;
typedef struct {
    u32 cnt : 10;
    u32 rest : 22;
} U;
typedef struct {
    u8 pad[0xccc];
    U arr[0xF0];
} P2C;
typedef struct {
    u32 lo : 22;
    u32 top : 10;
} P30;
typedef struct {
    u32 g0;
    Tab *t;
    u8 pad8[0x1c];
    E *ents;
    P *pl;
    P2C *p2c;
    P30 *p30;
} G;
typedef struct {
    u8 pad0[0x10];
    u32 p10 : 28;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 r10 : 2;
    u32 p14 : 8;
    u32 idx : 4;
    u32 r14 : 20;
    u8 pad18[0x1f4 - 0x18];
    s32 f1f4;
} S;

extern G *data_0203673c;
extern S *data_ov000_02051548;
extern u8 data_ov003_020a7b84[];

void SetTrsObjCommand(u32, u32, u32, u32);
s32 func_02002474(s32, s32, s32);
s32 func_02002650(void *, s32);
s32 GetCreateUnitSpeed(void *, s32);
void RedrawTrentSeedKazu(s32);
void SetKUNI_paras(void *, s32);
void SetUD_ST_paras(void *, s32);

s32 MakeUnitOne(P *pl, s32 k) {
    s32 a;
    s32 r4;

    if (k == 0) {
        return 0;
    }
    if (data_ov000_02051548->b29 != 0 && data_ov000_02051548->b28 != 0) {
        SetTrsObjCommand(1, pl->w4.lo, k, 0);
        return 1;
    }
    a = func_02002474(k, 0xFFF, pl->w4.lo);
    if (a != 0xFFFF) {
        r4 = func_02002650(pl, a);
        if (r4 == -1) {
            data_0203673c->ents[a].w0.f0 = 0;
            return 0;
        }
        data_0203673c->ents[a].w4.b                               = 1;
        data_0203673c->ents[a].w4.c                               = 2;
        pl->w210.mid                                              = pl->w210.mid - data_0203673c->t[k].b15;
        pl->cell[data_ov003_020a7b84[data_0203673c->t[k].sel]].lo = 3;
        *(u16 *) ((u8 *) pl + data_ov003_020a7b84[data_0203673c->t[k].sel] * 8 + 0x220) = 0;
        *(u16 *) ((u8 *) pl + data_ov003_020a7b84[data_0203673c->t[k].sel] * 8 + 0x222) =
            GetCreateUnitSpeed(pl, data_0203673c->t[k].sel);
        if (pl->h[data_0203673c->t[k].sel].a != 0 || pl->h[data_0203673c->t[k].sel].b != 0) {
            data_0203673c->ents[a].w4.d = pl->h[data_0203673c->t[k].sel].a;
            data_0203673c->ents[a].w4.f = pl->h[data_0203673c->t[k].sel].b;
        }
        if (pl->w4.lo == data_ov000_02051548->idx) {
            if (k < 0xF0) {
                s32 n = data_0203673c->p2c->arr[k].cnt + 1;
                if (n < 1000) {
                    data_0203673c->p2c->arr[k].cnt = n;
                }
                data_0203673c->p30->top = data_0203673c->p30->top + 1;
                if (data_0203673c->p30->top > 999) {
                    data_0203673c->p30->top = 999;
                }
            }
            if (data_ov000_02051548->f1f4 != 0) {
                RedrawTrentSeedKazu(pl->w4.lo);
            }
        }
        if (data_ov000_02051548->b29 != 0 && data_ov000_02051548->b28 == 0) {
            if (r4 == 0x25) {
                SetKUNI_paras(&pl->last, 4);
            } else {
                SetKUNI_paras(&pl->slot[r4], 4);
            }
            SetKUNI_paras(&pl->w210, 0xC);
            SetKUNI_paras(&pl->cell[data_ov003_020a7b84[data_0203673c->t[k].sel]], 8);
            SetUD_ST_paras(&data_0203673c->ents[a], 0x34);
        }
        return 1;
    }
    return 0;
}
