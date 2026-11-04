/* near start: 4 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

extern u32 data_ov112_020eca1c;
extern u16 data_ov112_020ec988;
extern u32 data_ov112_020ed22c;
extern void *data_ov112_020ec580;
extern void *data_0203673c;
typedef struct {
    u8 pad[0x488];
    u32 flags;
} S588;
extern S588 data_ov112_020ec588;
s32 func_ov112_020e1ce8(s32);

void func_ov112_020e8f9c(s32 arg0) {
    u8 *g;
    u32 *tbl;
    s32 i;
    u32 *r9;
    u8 *b3;
    u8 *r1;
    u8 *r6;
    u32 v;
    u32 x;
    s32 r5;
    s32 idx;

    g   = (u8 *) &data_ov112_020eca1c;
    tbl = (u32 *) &data_ov112_020eca1c;
    v   = tbl[arg0];
    if (*(u32 *) (g + 0xD4C) == (v >> 0x10)) {
        *(u32 *) (g + 0xD4C) = 0;
    } else {
        *(u32 *) (g + 0xD4C) = v >> 0x10;
        *(u32 *) (g + 0xD44) = 0;
    }
    tbl[arg0] = tbl[arg0] & ~1;
    idx       = *(u16 *) ((u8 *) &data_ov112_020ec988 + 0x80);
    b3        = (u8 *) data_0203673c;
    r1        = *(u8 **) (b3 + 0x24);
    x         = *(u32 *) (r1 + idx * 0x34);
    r5        = (x << 0x15) >> 0x17;
    r6        = *(u8 **) (b3 + 4) + 8;
    r9        = &data_ov112_020ed22c;
    for (i = 0; i < 0x102; i++) {
        if ((r9[0] >> 0x10) == (tbl[arg0] >> 0x10)) {
            r9[0]                          = r9[0] & ~1;
            x                              = *(u32 *) (r6 + r5 * 0x20);
            x                              = (x << 0x16) >> 0x17;
            idx                            = func_ov112_020e1ce8(x);
            b3                             = (u8 *) data_ov112_020ec580;
            *(u8 *) (b3 + idx * 0x108 + i) = 0;
        }
        r9++;
    }
    data_ov112_020ec588.flags |= 6;
}
