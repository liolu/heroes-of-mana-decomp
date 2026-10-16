#include "m2c.h"

s32 func_ov123_020944a0(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x20) & 1) == 1) {
        return 1;
    }
    return 0;
}
