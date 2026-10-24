#include "m2c.h"

typedef struct {
    u32 a : 11;
    u32 k : 8;
    u32 b : 13;
    u8 p4[0x12];
    u16 idx;
} S;

typedef struct {
    u8 p0[8];
    u32 p8a : 19;
    u32 t : 3;
    u32 p8b : 10;
    u8 pc[4];
    u32 q0 : 18;
    u32 v : 7;
    u32 q1 : 7;
} T;

typedef struct {
    u8 p0[8];
    T *t;
} G;

typedef struct {
    u8 p0[0xE8];
    S *s;
} U;

extern G *data_0203673c;
s32 HowManyEnemyInSpWaza(U *);
s32 GetRnd(void);

s32 func_ov107_020ddc80(U *u) {
    s32 r;
    S *s = u->s;
    if (s->k == 7) {
        r = 1;
    } else {
        r = data_0203673c->t[s->idx].t == 1 ? 1 : 0;
    }
    if (r == 0 && HowManyEnemyInSpWaza(u) < 2) {
        return GetRnd() % 100 <= 0x50 ? 1 : 0;
    }
    {
        s32 x = GetRnd() % 30;
        if (x > data_0203673c->t[u->s->idx].v) {
            return 0;
        } else {
            return 1;
        }
    }
}
