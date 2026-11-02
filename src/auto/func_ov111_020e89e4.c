#include "m2c.h"

s32 func_ov111_020e5d98(s32);

extern u8 data_ov111_020f13a8[];
extern u8 data_ov111_020f1bd8[];

void func_ov111_020e89e4(void) {
    u32 w;
    u8 *h;
    u16 t;

    w                                  = *(u32 *) data_ov111_020f13a8;
    w                                  = (w & ~1) | 1;
    *(u32 *) data_ov111_020f13a8       = w;
    *(u32 *) (data_ov111_020f13a8 + 4) = 0;
    *(u32 *) data_ov111_020f13a8       = w & ~0x400;
    *(u32 *) (data_ov111_020f13a8 + 8) = func_ov111_020e5d98(1);
    h                                  = *(u8 **) data_ov111_020f1bd8 + 0x500;
    *(u16 *) (h + 0xC) += 3;
}
