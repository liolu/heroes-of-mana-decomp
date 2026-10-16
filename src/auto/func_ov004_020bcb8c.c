#include "m2c.h"

s32 func_ov004_020bcb8c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > 0) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    return 0;
}
