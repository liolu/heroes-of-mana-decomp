/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct F {
    u32 a : 1;
    u32 b : 1;
    u32 c : 1;
    u32 d : 29;
} F;
typedef struct P {
    u8 pad[0x10];
    F f1;
    u8 pad2[0xc];
    F f2;
} P;
typedef struct G {
    u8 pad[0x174];
    u32 x : 5;
    u32 y : 1;
    u32 z : 26;
    u8 pad2[0x194 - 0x178];
    P *p;
    u8 pad3[4];
    s32 k;
} G;
extern G data_ov003_020b5380;

s32 EndTransCheck(void) {
    P *p = data_ov003_020b5380.p;
    if (p->f1.c) {
        if (!p->f1.a) {
            return 0;
        }
    }
    if (p->f2.c) {
        if (!p->f2.a) {
            return 0;
        }
    }
    if (data_ov003_020b5380.k != 0) {
        return 0;
    }
    return data_ov003_020b5380.y == 0;
}
