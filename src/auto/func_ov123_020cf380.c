#include "m2c.h"

s32 func_ov123_020cf380(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4C) == 1) {
        return 1;
    }
    return 0;
}
