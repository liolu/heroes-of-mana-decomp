#include "m2c.h"

typedef struct {
    u32 mode : 4;
    u32 r : 28;
    u32 w4;
} Rec;

typedef struct {
    u8 v : 7;
    u8 top : 1;
} B7;

typedef struct {
    u16 lo8 : 8;
    u16 f8 : 1;
    u16 mid : 5;
    u16 r : 2;
} Hh;

typedef struct {
    u32 a0 : 16;
    u32 f16 : 1;
    u32 g17 : 4;
    u32 r21 : 3;
    u32 h24 : 2;
    u32 r26 : 6;
    u32 lo2 : 2;
    u32 r4 : 30;
    u8 b8[8];
    u8 pad10[0x21c - 0x10];
    Rec rec[9];
    u8 pad264[0x264 - 0x264];
    u16 ids[0x26];
    u8 pad2b0[4];
    B7 b7[12];
    Hh hh[8];
    u8 pad2d0[0x2d0 - 0x2d0];
} Sd;

typedef struct {
    u32 f0 : 1;
    u32 b1 : 1;
    u32 key : 9;
    u32 c11 : 8;
    u32 r19 : 13;
    u32 m : 4;
    u32 b4 : 1;
    u32 f5 : 1;
    u32 b6 : 10;
    u32 g16 : 3;
    u32 b19 : 11;
    u32 f30 : 1;
    u32 b31 : 1;
    u32 a0 : 4;
    u32 fld : 9;
    u32 f13 : 1;
    u32 b14 : 9;
    u32 f23 : 1;
    u32 r24 : 8;
    u32 wc;
    u16 h10;
    u16 h12;
    u8 pad[0x2c - 0x14];
    u16 h2c;
    u8 pad2[6];
} Unit;

typedef struct {
    u32 w0;
    u32 w4;
    u32 a : 1;
    u32 v : 9;
    u32 r : 22;
    u8 pad[0x20 - 0xc];
} Row;

typedef struct {
    u8 pad[4];
    Row *rows;
    u8 pad2[0x20 - 8];
    u32 w20;
    Unit *units;
    Sd *sd;
} G2;

void MIi_CpuClear16(s16, void *, s32);
void func_02002304(s32, s32);

extern G2 *data_0203673c;

void func_020015cc(void) {
    s32 i;
    s32 j;
    Sd *p;
    Unit *u;
    Rec *r;
    Hh *h;

    p = data_0203673c->sd + 1;
    for (j = 1; j < 4; j++, p++) {
        MIi_CpuClear16(0, p, 0x2d0);
        p->f16 = 1;
        p->lo2 = j;
        p->g17 = 0;
        p->h24 = 0;
        for (i = 0; i < 8; i++) {
            p->b8[i] = 8;
        }
        for (i = 0; i < 12; i++) {
            p->b7[i].v = 0x7f;
        }
        for (i = 0; i < 9; i++) {
            p->rec[i].mode = 0;
        }
        for (i = 0; i < 0x25; i++) {
            p->ids[i] = 0xffff;
        }
        p->ids[0x25] = 0xffff;
    }
    u = data_0203673c->units;
    for (i = 0; i < 0x58; i++, u++) {
        if (u->f0 != 0) {
            if (u->m != 0 || (data_0203673c->w20 <= u->key && u->key != 0x3c)) {
                func_02002304(u->m, i);
                MIi_CpuClear16(0, &data_0203673c->units[i], 0x34);
            } else {
                u->h10 = u->h12;
                u->c11 = 0;
                u->h2c = 0;
                u->g16 = 0;
                u->f23 = 0;
                u->f30 = 0;
                u->f13 = 0;
                u->f5  = 1;
                u->fld = data_0203673c->rows[u->key].v;
                MIi_CpuClear16(0, (u8 *) u + 0x1c, 4);
                MIi_CpuClear16(0, (u8 *) u + 0x20, 4);
            }
        }
    }
    p = data_0203673c->sd;
    for (i = 0; i < 12; i++) {
        p->b7[i].v = 0x7f;
    }
    for (i = 0; i < 9; i++) {
        MIi_CpuClear16(0, &p->rec[i], 8);
        p->rec[i].mode = 0;
    }
    h = p->hh;
    for (i = 0; i < 8; i++, h++) {
        h->lo8 = 0;
        h->f8  = 0;
        h->mid = 0;
    }
}
