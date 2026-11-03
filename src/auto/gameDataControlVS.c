/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 a : 16;
    u32 f16 : 1;
    u32 b : 6;
    u32 f23 : 1;
    u32 c : 8;
} PW0;
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
    u8 v : 7;
    u8 x : 1;
} B7;
typedef struct {
    u16 a : 8;
    u16 b : 1;
    u16 c : 5;
    u16 d : 2;
} H3;
typedef struct {
    PW0 w0;
    PW4 w4;
    u8 pad8[0x210 - 8];
    PW210 w210;
    u8 pad214[8];
    Cell cell[9];
    u16 slot[0x25];
    u16 last;
    u8 pad2b0[4];
    B7 b[12];
    H3 h[8];
} P;
typedef struct {
    u32 f0 : 1;
    u32 pad : 1;
    u32 idx : 9;
    u32 mid : 20;
    u32 top : 1;
} EW0;
typedef struct {
    u32 sl : 4;
    u32 rest : 28;
} EW4;
typedef struct {
    EW0 w0;
    EW4 w4;
    u8 pad8[8];
    u16 h10;
    u16 h12;
    u8 pad14[0x20];
} E;
typedef struct {
    u8 pad0[8];
    u8 f8;
    u8 pad9;
    u8 fa;
    u8 padb;
    u16 v;
    u8 pade[0x12];
} Tab;
typedef struct {
    u32 g0;
    Tab *t;
    u8 pad8[0x1c];
    E *ents;
    P *pl;
} G;

extern G *data_0203673c;
extern Tab data_ov003_020b532c[];

void MIi_CpuClear16(s16, void *, s32);
void RestoreUpDownParaUD_ST(void);
void SetCarisumaSkillInShip(void);
void SetShisetuLevelBySeireiKazu(s32, u8);
u16 func_02002474(s32, s32, s32);

void gameDataControlVS(void) {
    s32 sp0[4];
    s32 n;
    E *e;
    P *pl;
    s32 k;
    Cell *cp;
    s32 b;
    s32 i;

    n  = 0;
    pl = data_0203673c->pl;
    do {
        for (i = 0; i < 0x25; i++) {
            pl->slot[i] = 0xFFFF;
        }
        pl->last  = 0xFFFF;
        pl->w4.lo = n;
        for (k = 0; k < 0xC; k++) {
            pl->b[k].v = 0x7F;
        }
        b  = 0;
        cp = &pl->cell[0];
        do {
            MIi_CpuClear16(0, cp, 8);
            b += 1;
            cp->lo = 0;
            cp += 1;
        } while (b < 9);
        for (k = 0; k < 8; k++) {
            pl->h[k].a = 0;
            pl->h[k].b = 0;
            pl->h[k].c = 0;
        }
        n += 1;
        pl += 1;
    } while (n < 4);

    pl = data_0203673c->pl;
    k  = 0;
    do {
        pl->w0.f16   = 1;
        pl->w210.lo  = 1;
        pl->w210.mid = 0;
        pl->w0.f23   = data_ov003_020b532c[k].fa;
        SetShisetuLevelBySeireiKazu(k, data_ov003_020b532c[k].f8);
        k += 1;
        pl += 1;
    } while (k < 2);

    MIi_CpuClear16(0, sp0, 0x10);
    e = data_0203673c->ents;
    for (k = 0; k < 0x58; k++, e++) {
        u32 sl;
        if (e->w0.f0 != 0) {
            sl = e->w4.sl;
            if (sl < 4U) {
                if (e->w0.top != 0) {
                    data_0203673c->pl[sl].last = k;
                } else {
                    data_0203673c->pl[sl].slot[sp0[sl]] = k;
                    sp0[e->w4.sl]                       = sp0[e->w4.sl] + 1;
                }
                e->h10 = e->h12 = data_0203673c->t[e->w0.idx].v;
            }
        }
    }

    k = 0;
    do {
        if (data_0203673c->pl[k].last == 0xFFFF) {
            data_0203673c->pl[k].last = func_02002474(data_ov003_020b532c[k].fa == 0 ? 0x90 : 0x8E, 0, k);
        }
        k += 1;
    } while (k < 2);
    RestoreUpDownParaUD_ST();
    SetCarisumaSkillInShip();
}
