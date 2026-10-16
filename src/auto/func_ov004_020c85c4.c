#include "m2c.h"

s32 func_ov004_020c867c(s32);                       /* extern */

s32 func_ov004_020c85c4(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) >= func_ov004_020c867c(M2C_FIELD(arg0, s32 *, 0x14))) {
        return 1;
    }
    return 0;
}
