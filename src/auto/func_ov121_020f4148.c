#include "m2c.h"

u32 func_ov003_0207a754();                          /* extern */

s32 func_ov121_020f4148(void) {
    s32 var_r2;
    u32 var_r0;

    var_r0 = func_ov003_0207a754();
    if (var_r0 == 0) {
        return 8;
    }
    var_r2 = 0;
loop_3:
    if ((var_r0 & 1) == 1) {
        return var_r2;
    }
    var_r2 += 1;
    var_r0 = var_r0 >> 1;
    if (var_r2 >= 8) {
        return 8;
    }
    goto loop_3;
}
