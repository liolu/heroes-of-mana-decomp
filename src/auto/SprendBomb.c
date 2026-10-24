/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} V3;

typedef struct {
    u32 p0 : 7;
    u32 n : 4;
    u32 p1 : 21;
    u32 w4;
    u32 p2 : 25;
    u32 k : 7;
} Ent;

typedef struct {
    s32 a0;
    u8 pad[2];
    u16 idx;
} Sub;

typedef struct {
    u8 pad0[0xa];
    u16 w;
    u8 pad[0x40 - 0xc];
    s32 x;
    s32 y;
    s32 z;
} Cx;

typedef struct {
    Cx *c;
    u8 pad[4];
    Sub *s;
} Obj;

typedef struct {
    u8 pad[8];
    u8 *tbl;
} G;

typedef struct {
    s8 x;
    s8 z;
} Off;

extern G *data_0203673c;
extern Off data_ov003_020ab644[];

void *SetOneHitMarkWork(s32, V3 *, s32);
void SetDamageAiteInGrid(s32, u16, s32, s32, s32, s32);

void SprendBomb(Obj *o) {
    s32 n;
    s32 i;
    Off *p;
    Ent *e;
    Cx *c;
    V3 v;

    p = data_ov003_020ab644;
    e = (Ent *) (data_0203673c->tbl + 8 + o->s->idx * 0x14);
    n = e->n;
    if (n == 0) {
        n++;
    }
    n = n * 4;
    c = o->c;
    i = 0;
    if (n > 0) {
        do {
            if (p->x != 0x7f) {
                v.x                                                                          = c->x + (p->x << 14);
                v.y                                                                          = c->y;
                v.z                                                                          = c->z + (p->z << 14);
                *(s16 *) ((u8 *) SetOneHitMarkWork((((Ent *) e)->k - 1) * 2, &v, -1) + 0x2c) = (i >> 2) * 15;
                SetDamageAiteInGrid(o->s->a0, o->s->idx, v.x, v.y, v.z, c->w);
            }
            i++;
            p++;
        } while (i < n);
    }
}
