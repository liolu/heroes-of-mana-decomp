#include "m2c.h"

s32 func_ov111_020e5d98(s32);
extern u32 data_ov111_020f13a8[];
extern u8 *data_ov111_020f1bd8;

void func_ov111_020e8a40(void) {
    u32 *g;
    s32 r0;
    u8 *p;

    g    = data_ov111_020f13a8;
    g[0] = (g[0] & ~1) | 1;
    g[1] = 0;
    g[0] = g[0] | 0x400;
    r0   = func_ov111_020e5d98(1);
    p    = data_ov111_020f1bd8;
    g[2] = r0;
    p    = p + 0x500;
    *(u16 *) (p + 0xC) += 3;
}
