/* compiler: 2.0/sp1p5 -profile */
/* near start: 6 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    u16 f0 : 1;
    u16 r : 15;
    u8 pad2[0x20 - 6];
    s32 x;
    s32 y;
    s32 z;
    s16 h2c;
    s16 h2e;
    u8 pad3[8];
    s32 w38;
} Anc;

typedef struct {
    u8 pad[0x40];
    s32 x;
    s32 y;
    s32 z;
    s32 w;
    u8 pad2[0xa0 - 0x50];
    Anc *a;
    Anc *b;
    u16 ha8_lo : 7;
    u16 ha8_hi : 7;
    u16 ha8_r : 2;
    u8 bf : 7;
    u8 bf_r : 1;
} Obj;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} V3;

typedef struct {
    u8 pad[0xaf4];
    s32 w;
} G1;

typedef struct {
    u8 pad[0x290];
    s32 *p;
} G2;

void Ring_SoundEffect(s32);
s32 GetHighPlace(s32, s32);
void AreaAZtoObjAZ(V3 *, s32 *);
u16 FX_Atan2Idx(s32, s32);
s32 FX_Sqrt(s32);

extern G1 *data_ov000_0205154c;
extern G2 *data_ov000_02051548;

void HikusenChainAnchorPut(Obj *o) {
    Anc *b;
    Anc *a;
    s32 x;
    s32 y;
    s32 z;
    s32 dz;
    s32 dy;
    s32 dx;
    s32 hz;
    V3 v;
    s32 t1;
    s32 t0;
    s32 len;

    a = o->a;
    if (a == 0 || (b = o->b) == 0) {
        return;
    }
    if (o->bf < 0x5a) {
        o->bf = o->bf + data_ov000_0205154c->w;
        if (o->bf >= 0x5a) {
            o->bf = 0x5a;
            Ring_SoundEffect(0x6f);
        }
    }
    a->f0 = 1;
    b->f0 = 1;
    x     = o->x;
    y     = o->y + o->w;
    z     = o->z;
    a->x  = x / 4;
    a->y  = y / 4;
    a->z  = z / 4;
    v.x   = o->ha8_lo;
    v.z   = o->ha8_hi;
    v.y   = (0x28 << *data_ov000_02051548->p) * GetHighPlace(v.x, v.z) + 0x1000;
    AreaAZtoObjAZ(&v, &v.z);
    dx     = v.x - x;
    dz     = v.z - z;
    hz     = dz >> 12;
    dy     = v.y - y;
    a->h2e = 0x10000 - FX_Atan2Idx((-dx) >> 12, hz);
    t0     = dz * hz;
    t1     = dx * (dx >> 12);
    a->h2c = FX_Atan2Idx(FX_Sqrt(t1 + t0), dy);
    len    = FX_Sqrt(t0 + (dy * (dy >> 12) + t1));
    t0     = len * o->bf;
    a->w38 = t0 / 400;
    b->x   = (x + dx * (o->bf + 15) / 100) / 4;
    b->y   = (y + dy * (o->bf + 15) / 100) / 4;
    b->z   = (z + dz * (o->bf + 15) / 100) / 4;
    b->h2e = a->h2e;
    b->h2c = a->h2c + 0x8000;
}
