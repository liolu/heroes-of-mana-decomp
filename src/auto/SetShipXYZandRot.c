/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x14];
    s32 s14;
    s32 s18;
    s32 s1c;
    s32 x20;
    s32 y24;
    s32 z28;
    s16 r2c;
    s16 r2e;
    s16 r30;
} T;

typedef struct {
    u32 l0 : 14;
    u32 f14 : 8;
    u32 h0 : 10;
    u32 w4;
    u32 l8 : 29;
    u32 a : 1;
    u32 h8 : 2;
    u32 l12 : 16;
    u32 i16 : 2;
    u32 g18 : 6;
    u32 m24 : 3;
    u32 h27 : 3;
    u32 h30 : 2;
    u8 pad[0x40 - 0x10];
    s32 x;
    s32 y;
    s32 z;
    s32 s4c;
    u8 pad2[0x98 - 0x50];
    u16 x98;
    u8 pad3[0xa8 - 0x9a];
    u16 l_a8 : 14;
    u16 c : 2;
    u8 pad4[2];
    T *t;
} S;

extern s16 data_02030644[];
s32 GetRnd(void);
void SetHikusenScale(void *);
void HikusenChainAnchorPut(void *);

void SetShipXYZandRot(S *o) {
    T *t;
    if (o->a) {
        t      = o->t;
        t->x20 = o->x / 4;
        if (o->f14 == 0) {
            t->y24 = (o->y + o->s4c + (data_02030644[(((s32) (o->g18 << 10)) >> 4) * 2] >> 3)) / 4;
            o->g18 = o->g18 + 1;
        } else {
            o->g18 = 0;
            t->y24 = (o->y + o->s4c) / 4;
        }
        t->z28 = o->z / 4;
        t->r2e = o->x98;
        t->r30 = 0;
        t->r2c = 0;
        if (o->h27 != 0) {
            if (GetRnd() & 1) {
                t->r30 = (GetRnd() & 0x800) - 0x400;
            } else {
                t->r2c = (GetRnd() & 0x800) - 0x400;
            }
            o->h27 = o->h27 - 1;
        }
        SetHikusenScale(&t->s14);
        if (o->i16 != 0) {
            t->s14 = t->s14 * 5 / 6;
            t->s18 = t->s18 * 5 / 6;
            t->s1c = t->s1c * 5 / 6;
            o->i16 = o->i16 - 1;
        }
        if (o->c == 2) {
            HikusenChainAnchorPut(o);
        }
    }
}
