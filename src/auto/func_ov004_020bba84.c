#include "m2c.h"

void func_ov004_020bba84(void *arg0) {
    s32 var_r2;

    if (M2C_FIELD(arg0, s32 *, 0x18) == 2) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    *(u32 *) 0x040004AC = (u32) M2C_FIELD(arg0, u32 *, 0x10) >> (4 - var_r2);
}
