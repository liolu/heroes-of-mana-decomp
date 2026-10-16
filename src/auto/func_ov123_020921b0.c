#include "m2c.h"

s32 func_ov123_020921b0(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, u8 *, 0xD0B) << 0x1E) >> 0x1E) == 1) {
        return 0x30000;
    }
    return 0x20000;
}
