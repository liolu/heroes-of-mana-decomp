#include "m2c.h"

extern M2C_UNK data_ov118_020e3104;
extern M2C_UNK data_ov118_020e31e0;

s32 func_ov118_020e20e8(void) {
    return *(s32 *) ((u8 *) &data_ov118_020e3104 +
                     (((u32) (M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x14C) << 0xC) >> 0x18) * 8));
}
