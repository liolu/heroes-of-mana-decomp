#include "m2c.h"

extern u8 data_ov122_020647c0;

s32 func_ov122_0205e3a4(s32 arg0) {
    s32 var_r2;
    u8 *var_r3;
    u8 temp_r1;

    var_r3 = &data_ov122_020647c0;
    var_r2 = 0;
loop_1:
    temp_r1 = *var_r3;
    if ((temp_r1 != 0) && (temp_r1 == arg0)) {
        return 1;
    }
    var_r2 += 1;
    var_r3 += 1;
    if (var_r2 >= 5) {
        return 0;
    }
    goto loop_1;
}
