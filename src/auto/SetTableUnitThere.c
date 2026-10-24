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
    u8 pad4[0x5E];
    s8 px;
    s8 py;
    u8 pad_64[0xE8 - 0x64];
    Sub *sub;
    u8 pad_ec[0x110 - 0xEC];
} Unit;
extern Unit data_ov003_020b0cf0[];

void SetTableUnitThere(Unit *self, u8 *tbl) {
    Unit *u = data_ov003_020b0cf0;
    s32 i   = 0;
    do {
        if (u->a != 0 && u->sub != 0) {
            if (u->sub->b23 == 0) {
                if (self != u) {
                    (tbl + u->px)[u->py * 0x28] = 1;
                }
            }
        }
        i++;
        u++;
    } while (i < 0x42);
}
