#include "m2c.h"

s32 func_ov004_020badc0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x18) & 1) {
        return 1;
    }
    return 0;
}
