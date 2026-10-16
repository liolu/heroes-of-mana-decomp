#include "m2c.h"

s32 func_ov004_020c88a8(s32);                       /* extern */

s32 func_ov004_020c87ac(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) >= func_ov004_020c88a8(M2C_FIELD(arg0, s32 *, 0x14))) {
        return 1;
    }
    return 0;
}
