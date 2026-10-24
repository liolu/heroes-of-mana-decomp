#include "m2c.h"
typedef struct {
    u32 a;
    u32 b0 : 6;
    u32 dir : 3;
    u32 b1 : 23;
    u8 p0[0x38];
    s32 v0;
    s32 v1;
    s32 v2;
    u8 p1[0x110 - 0x4c];
} Elem;
typedef struct {
    u8 p0[4];
    s32 idx;
    u8 side;
    u8 p1[3];
    s32 anim;
    u8 p2[0x50];
    s32 w60;
    u8 p3[0x2c];
    s32 x90;
    s32 x94;
    s32 x98;
    u8 p4[0xc];
    s32 a8;
    s32 ac;
    u8 p5[8];
    u16 flags;
} Obj;
extern Elem data_ov003_020b0cf0[];
extern s16 data_ov003_020b0d80[];
extern s32 data_ov003_020b0d84[];
extern void changeAnimationObj(void *, s32, s32);

void func_ov004_020c150c(Obj *o) {
    if (o->flags & 1) {
        data_ov003_020b0cf0[o->idx].dir = o->side != 0 ? 3 : 0;
        o->flags &= ~1;
    }
    if ((o->flags & 2) || (o->flags & 4)) {
        changeAnimationObj(&data_ov003_020b0cf0[o->idx], o->anim, o->w60);
        o->flags &= ~2;
        o->flags &= ~4;
    }
    if (o->flags & 8) {
        Elem *e = &data_ov003_020b0cf0[o->idx];
        e->v0   = o->x90 >> 7;
        e->v1   = o->x94 >> 7;
        e->v2   = o->x98 >> 7;
        o->flags &= ~8;
    }
    if (o->flags & 0x10) {
        *(s16 *) ((u8 *) data_ov003_020b0d80 + o->idx * 0x110) = (o->a8 * 0xb6) >> 16;
        o->flags &= ~0x10;
    }
    if (!(o->flags & 0x20)) {
        return;
    }
    *(s32 *) ((u8 *) data_ov003_020b0d84 + o->idx * 0x110) = o->ac >> 4;
    o->flags &= ~0x20;
}
