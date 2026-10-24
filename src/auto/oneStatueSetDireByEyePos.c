/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct S {
    u32 a : 7;
    u32 b : 1;
    u32 dir : 3;
    u32 c : 19;
    u32 d : 1;
    u32 e : 1;
    u8 pad[0x35];
    u8 k39;
} S;

extern void getAnimation(void *, u16, u16, s32 *);

void oneStatueSetDireByEyePos(S *o, s32 arg) {
    u32 d = o->d;
    u32 e = o->e;
    s32 v = ((arg + o->dir) & 7) + o->k39 * 8;
    s32 t[3];
    if (*(u16 *) ((u8 *) o + 0xf4) == v && d == 0) {
        return;
    }
    *(u16 *) ((u8 *) o + 0xf4) = v;
    getAnimation(*(void **) (*(u8 **) ((u8 *) o + 0x10) + 0x10), *(u16 *) ((u8 *) o + 0xf4), *(u16 *) ((u8 *) o + 0xf6), t);
    *(s16 *) ((u8 *) o + 0xf8) = t[1];
    *(s16 *) ((u8 *) o + 0xfa) = t[0];
    if (*(u16 *) ((u8 *) o + 0xfc) != t[2]) {
        *(u16 *) ((u8 *) o + 0xfc) = t[2];
        o->b                       = 1;
    }
    o->d = d;
    o->e = e;
}
