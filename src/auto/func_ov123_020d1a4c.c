#include "m2c.h"

s32 func_ov123_020d1a4c(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xEB0) != 0) && (M2C_FIELD(arg0, s32 *, 0xEB4) == 0)) {
        return 1;
    }
    return 0;
}
