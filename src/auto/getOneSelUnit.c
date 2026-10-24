/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Sub {
    u32 pad0;
    u32 pad1;
    u32 p : 23;
    u32 b23 : 1;
    u32 q : 8;
} Sub;
typedef struct Unit {
    u32 a : 1;
    u32 x : 2;
    u32 k : 3;
    u32 y : 26;
    u8 pad4[0x28];
    u16 h0 : 1;
    u16 h1 : 1;
    u16 h2 : 14;
    u8 pad2e[0xE8 - 0x2E];
    Sub *sub;
    u8 pad_ec[0x110 - 0xEC];
} Unit;
extern Unit data_ov003_020b0cf0[];

s32 getOneSelUnit(void) {
    Unit *u = data_ov003_020b0cf0;
    s32 i   = 0;
    do {
        if (u->a) {
            if (u->k == 1) {
                Sub *s = u->sub;
                if (s != 0) {
                    if (s->b23 == 0) {
                        if (u->h1 != 0) {
                            return i;
                        }
                    }
                }
            }
        }
        i++;
        u++;
    } while (i < 0x42);
    return -1;
}
