#include "m2c.h"

u32 GetRnd();                          /* extern */

s32 func_ov108_020da1d0(void) {
    s32 temp_r0;
    s32 temp_ret;

    temp_ret = GetRnd();
    temp_r0  = temp_ret;
    if ((temp_ret % 100) <= 0x5A) {
        return 1;
    }
    return 0;
}
