/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct T {
    u16 a : 5;
    u16 b : 6;
    u16 c : 5;
    s16 v[5];
} T;
typedef struct Obj {
    u32 p : 14;
    u32 c : 8;
    u32 q : 10;
    u8 pad[0x34];
    u8 b38;
    u8 pad2[7];
    s32 w40;
    s32 w44;
    s32 w48;
    u8 pad3[0xC];
    s32 w58;
    s32 w5c;
} Obj;
typedef struct G {
    u8 pad[0x4C4];
    u8 *base;
    u8 pad2[8];
    s32 off;
} G;
extern G *data_ov000_02051548;

void SetObjTrsDataOne_forMove(Obj *o) {
    T *t    = (T *) (data_ov000_02051548->base + data_ov000_02051548->off);
    t->a    = 12;
    t->v[0] = o->w40 >> 4;
    t->v[1] = o->w48 >> 4;
    t->v[2] = o->w44 >> 4;
    t->v[3] = o->w58 >> 4;
    t->v[4] = o->w5c >> 4;
    t->b    = o->b38;
    t->c    = o->c;
    data_ov000_02051548->off += 0xC;
}
