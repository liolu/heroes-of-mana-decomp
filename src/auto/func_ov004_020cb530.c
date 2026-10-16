#include "m2c.h"

extern M2C_UNK data_ov004_020cfaf0;

void func_ov004_020cb530(void) {
    s32 var_r1;

    if ((s32) M2C_FIELD(&data_ov004_020cfaf0, s32 *, 0x650) <= 0) {
        return;
    }
    var_r1                                        = M2C_FIELD(&data_ov004_020cfaf0, s32 *, 0x658) + 1;
    M2C_FIELD(&data_ov004_020cfaf0, s32 *, 0x658) = var_r1;
    if (var_r1 >= 6) {
        var_r1 = 6;
    }
    M2C_FIELD(&data_ov004_020cfaf0, s32 *, 0x658) = var_r1;
}
