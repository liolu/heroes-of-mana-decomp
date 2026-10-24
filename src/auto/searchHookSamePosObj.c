/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Q {
    u8 pad[8];
    u32 a : 23;
    u32 b : 1;
    u32 c : 8;
} Q;
typedef struct E {
    u32 f : 1;
    u32 g : 31;
    u8 pad[4];
    u32 a : 23;
    u32 t : 4;
    u32 b : 5;
    u8 pad2[0x56];
    s8 px;
    s8 py;
    u8 pad3[0x84];
    Q *q;
    u8 pad4[0x110 - 0xec];
} E;
extern E data_ov003_020b0cf0[];

s32 searchHookSamePosObj(s32 x, s32 y) {
    E *e = data_ov003_020b0cf0;
    s32 i;
    Q *q;
    for (i = 0; i < 0x42; i++, e++) {
        if (e->f && (q = e->q) != 0) {
            if (!q->b) {
                if (e->t == 4 && e->px == x && e->py == y) {
                    return i;
                }
            }
        }
    }
    return -1;
}
