#include "m2c.h"

extern u32 data_ov111_020f13c0[];

u16 func_ov111_020e5cb4(s32 i, u32 j) {
    u8 *base = (u8 *) data_ov111_020f13c0[1];
    u16 *arr = *(u16 **) (base + i * 0x510 + 0x30);
    return arr[j];
}
