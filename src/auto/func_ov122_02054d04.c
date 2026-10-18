#include "m2c.h"

extern M2C_UNK data_ov122_020603a8;
extern u8 data_ov122_020603b0;

s32 func_ov122_02054d04(s32 arg0) {
    s32 var_r2;
    u8 *var_r3;

    var_r3 = (u8 *) (&data_ov122_020603a8);
    var_r2 = 0;
loop_1:
    if (((s32) M2C_FIELD(var_r3, s32 *, 0) <= arg0) && ((s32) M2C_FIELD(var_r3, s32 *, 4) >= arg0)) {
        return *(s32 *) (&data_ov122_020603b0 + (var_r2 * 0xC));
    }
    var_r3 += 0xC;
    var_r2 += 1;
    if (M2C_FIELD(var_r3, s32 *, 8) == 0xFF) {
        return 0x11;
    }
    goto loop_1;
}
