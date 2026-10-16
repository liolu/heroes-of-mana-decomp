#include "m2c.h"

s32 func_ov123_020cfd60(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x12) != 0) {
        return 1;
    }
    return 0;
}
