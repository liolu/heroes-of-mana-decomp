/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void changeAnimationObj(void *, s32, u32);

typedef struct {
    u32 a : 1;
    u32 p1 : 7;
    u32 d : 3;
    u32 p2 : 3;
    u32 e : 8;
    u32 p3 : 10;
    u8 pad[0x2E - 4];
    s16 wait;
    u8 pad2[0x3C - 0x30];
    s32 st;
    u8 pad3[0xC8 - 0x40];
    s16 c8;
    u8 pad4[0xE8 - 0xCA];
    u32 *sub;
} S;

typedef struct {
    u32 pad[2];
    u32 p : 23;
    u32 f : 1;
    u32 q : 8;
} T;

void SetObjWaitAndGo(S *o, s32 arg1) {
    T *t;

    if (o->a != 0 && (t = (T *) o->sub) != 0) {
        if (t->f == 0) {
            changeAnimationObj(o, 0, o->d);
            o->e    = 5;
            o->wait = arg1;
            o->st   = 3;
            o->c8   = 0;
        }
    }
}
