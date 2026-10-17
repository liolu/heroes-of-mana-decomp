#include "m2c.h"

s32 func_ov112_020e1c98();                          /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov112_020ec988;
extern M2C_UNK data_ov112_020eca1c;

s32 func_ov112_020e8cc0(s32 arg0) {
    if (func_ov112_020e1c98() == 0) {
        return 0;
    }
    if (((u32) (M2C_FIELD(((M2C_FIELD(&data_ov112_020ec988, u16 *, 0x80) * 0x34) + M2C_FIELD(data_0203673c, s32 *, 0x24)),
                          s32 *, 8)
                << 0x1C) >>
         0x1C) == ((u32) * (s32 *) ((u8 *) &data_ov112_020eca1c + (arg0 * 4)) >> 0x10)) {
        return 1;
    }
    if (M2C_FIELD(&data_ov112_020eca1c, u8 *, 0xD58) == arg0) {
        return 1;
    }
    return 0;
}
