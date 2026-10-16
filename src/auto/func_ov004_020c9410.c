#include "m2c.h"

s32 func_ov004_020c9410(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (arg1 + 4);
    return 1;
}
