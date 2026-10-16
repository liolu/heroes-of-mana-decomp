#include "m2c.h"

s32 func_ov004_020bade8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x18) & 4) {
        return 1;
    }
    return 0;
}
