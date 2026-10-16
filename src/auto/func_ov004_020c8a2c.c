#include "m2c.h"

s32 func_ov004_020c8a2c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >= (s32) M2C_FIELD(arg0, s32 *, 0x18)) {
        return 1;
    }
    return 0;
}
