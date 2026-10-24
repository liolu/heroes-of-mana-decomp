/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Ob {
    u32 f_a : 8;
    u32 dir : 3;
    u32 f_b : 3;
    u32 st : 8;
    u32 f_c : 10;
    u8 p0[0x2a];
    u16 t2e;
    u8 p1[0xc];
    s32 f3c;
    u8 p2[0x20];
    s8 x;
    s8 y;
    u8 p3[4];
    u8 a;
    u8 b;
    u8 p4[0x5c];
    void *buf;
    u16 h;
} Ob;
typedef struct G {
    u8 p[0x2f4];
    u16 v;
} G;
extern G *data_ov000_02051548;
void OS_FreeToHeap(u32, s32, void *);
void *OnStartFly(s32, s32, s32, s32);
void changeAnimationObj(Ob *, s32, s32);
s32 CheckShipMoveTiming(Ob *);
void CheckAndSetGoingHook(Ob *, s32, s32);
void SetNextKisekiPointAndDire(Ob *);

s32 objSetDistanceForFly(Ob *o, s32 a, s32 b) {
    if (o->buf != 0) {
        if (o->buf != 0) {
            OS_FreeToHeap(0, -1, o->buf);
            o->buf = 0;
        }
        o->h = 0;
    }
    o->a   = a;
    o->b   = b;
    o->buf = OnStartFly(o->x, o->y, a, b);
    o->h   = data_ov000_02051548->v;
    if (o->h == 0 || o->buf == 0) {
        changeAnimationObj(o, 0, o->dir);
        o->st  = 5;
        o->t2e = 0x3c;
        o->f3c = 3;
        return 0;
    }
    if (CheckShipMoveTiming(o) == 1) {
        CheckAndSetGoingHook(o, a, b);
        o->st  = 3;
        o->f3c = 0;
        SetNextKisekiPointAndDire(o);
    } else {
        SetNextKisekiPointAndDire(o);
        changeAnimationObj(o, 0, o->dir);
        o->st  = 5;
        o->t2e = 0x3c;
        o->f3c = 3;
    }
    return 1;
}
