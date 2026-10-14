#include "m2c.h"

s32 func_02012fb8(void *);                          /* extern */
M2C_UNK func_02013054(void *);                      /* extern */

s32 func_02012f2c(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        temp_r0 = func_02012fb8(arg0);
        if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 4) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~4);
            var_r4                                = M2C_FIELD(arg0, volatile s32 *, 0x44);
            M2C_FIELD(arg0, volatile s32 *, 0x44) = 0;
            M2C_FIELD(arg0, volatile s32 *, 0x2C) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x3C);
            M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x40);
            M2C_FIELD(arg0, volatile s32 *, 0x50) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x48);
        }
        if (temp_r0 != 0) {
            func_02013054(arg0);
        }
    }
    return var_r4;
}
