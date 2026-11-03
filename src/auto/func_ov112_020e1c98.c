#include "m2c.h"

extern u8 data_ov112_020ec980;
extern void *data_0203673c;

s32 func_ov112_020e1c98(void) {
    u16 idx;
    s32 val;

    idx = *(u16 *) (&data_ov112_020ec980 + 0x88);
    if (idx == 0xFFFF) {
        return 0;
    }
    val = *(s32 *) ((u8 *) *(void **) ((u8 *) data_0203673c + 0x24) + idx * 0x34);
    return ((u32) (val << 31) >> 31) != 0;
}
