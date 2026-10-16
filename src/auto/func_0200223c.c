#include "m2c.h"

extern void *data_0203673c;

s32 func_0200223c(void) {
    s8 *var_r2;
    s32 var_r0;
    s32 var_r3;

    var_r0 = 0;
    var_r3 = 0;
    var_r2 = M2C_FIELD(data_0203673c, s32 **, 0x24);
loop_1:
    if ((((u32) (*(s32 *)var_r2 << 0x1F) >> 0x1F) == 0) && (((u32) (M2C_FIELD(((s8 *)M2C_FIELD(data_0203673c, s32 **, 0x24) + var_r3), s32 *, 8) * 4) >> 0x1B) == 0)) {
        return var_r0;
    }
    var_r0 += 1;
    var_r2 += 0x34;
    var_r3 += 0x34;
    if (var_r0 >= 0x58) {
        return 0xFFFF;
    }
    goto loop_1;
}
