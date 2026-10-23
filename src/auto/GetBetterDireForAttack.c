/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 l : 3;
    u32 m : 4;
    u32 n : 4;
    u32 pad : 18;
    u32 t : 3;
    u32 x[4];
} Ent;

typedef struct {
    u32 w0;
    u32 w4;
    u32 l8 : 23;
    u32 b23 : 1;
    u32 h : 8;
} X;

typedef struct {
    u32 l0 : 11;
    u32 k : 8;
    u32 h0 : 13;
} Y;

typedef struct {
    u32 f0 : 1;
    u32 r : 31;
    u8 pad[0xe8 - 4];
    X *e8;
} Ob;

typedef struct {
    u32 l : 8;
    u32 dir : 3;
    u32 r : 21;
    u8 pad[0xe8 - 4];
    Y *e8;
} Ob2;

typedef struct {
    u32 pad[2];
    u8 *a;
    u32 pad2;
    u8 *b;
} G;

typedef struct {
    u32 l : 10;
    u32 b10 : 1;
    u32 r : 21;
} Bw;

extern G *data_0203673c;
extern s32 (*data_ov003_020a7bec[])(void *, void *, s32, s32);
s32 CheckEfTakasa(void *, void *, void *);

s32 GetBetterDireForAttack(Ob2 *a, Ob *b, s32 c) {
    s32 (**fp)(void *, void *, s32, s32);
    s32 n;
    u8 *tbl;
    s32 off;
    s32 d;
    s32 dir;
    tbl = data_0203673c->a + 8;
    off = c * 20;
    dir = a->dir;
    if (c == 0) {
        return -1;
    }
    if (b->f0 == 0) {
        return -1;
    }
    if (b->e8 == 0) {
        return -1;
    }
    if (b->e8->b23 != 0) {
        return -1;
    }
    if (((Bw *) (data_0203673c->b + 8 + a->e8->k * 4))->b10 != 0) {
        return -1;
    }
    if (((Ent *) (tbl + off))->m == 0) {
        return -1;
    }
    if (((Ent *) (tbl + off))->m == 3) {
        return dir;
    }
    if (((Ent *) (tbl + off))->m == 7) {
        return dir;
    }
    fp = &data_ov003_020a7bec[((Ent *) (tbl + off))->m];
    if (fp == 0 || *fp == 0 || ((Ent *) (tbl + off))->m >= 10) {
        return -1;
    }
    n = ((Ent *) (tbl + off))->n;
    if (*fp == 0) {
        return -1;
    }
    if (CheckEfTakasa(a, b, tbl + off) == 0) {
        return -1;
    }
    if (((Ent *) (tbl + off))->t == 2) {
        if ((*fp)(a, b, n, dir) == 0) {
            dir = -1;
        }
        return dir;
    }
    d = dir & 6;
    if ((*fp)(a, b, n, d) == 1) {
        return d;
    }
    d = (dir + 2) & 6;
    if ((*fp)(a, b, n, d) == 1) {
        return d;
    }
    d = (dir + 6) & 6;
    if ((*fp)(a, b, n, d) == 1) {
        return d;
    }
    d = (dir + 4) & 6;
    if ((*fp)(a, b, n, d) != 1) {
        d = -1;
    }
    return d;
}
