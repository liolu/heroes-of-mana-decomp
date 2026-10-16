#include "m2c.h"

s32 func_ov123_020d1b50(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 4) != 0) && (M2C_FIELD(arg0, s32 *, 0xC) == 1)) {
        return 1;
    }
    return 0;
}
