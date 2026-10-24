/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct A {
    u32 w0;
    u32 w1;
    u32 p0 : 2;
    u32 on : 1;
    u32 p1 : 26;
    u32 p2 : 3;
} A;
typedef struct AA {
    u32 w0;
    u32 w1;
    u32 p0 : 23;
    u32 team : 4;
    u32 p1 : 2;
    u32 on : 1;
    u32 p2 : 2;
} AA;
typedef struct B {
    u32 p0 : 24;
    u32 cnt : 2;
    u32 p1 : 6;
} B;
typedef struct G {
    u8 pad[0x28];
    u8 *tbl;
} G;
extern G *data_0203673c;

s32 CheckShipMoveTiming(AA *arg0) {
    s32 r = 1;
    if (arg0->on) {
        B *b = (B *) (data_0203673c->tbl + arg0->team * 0x2D0);
        if (b->cnt != 0) {
            b->cnt = b->cnt - 1;
            r      = 0;
        }
    }
    return r;
}
