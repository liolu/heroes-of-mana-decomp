#include "m2c.h"

s32 func_0202f3f8(M2C_UNK);                         /* extern */
s32 func_ov004_020bbdc0();                          /* extern */
extern M2C_UNK data_ov004_020cf8bc;

s32 func_ov004_020bbd10(void) {
    s32 temp_r2;
    s32 var_r0;

    temp_r2                                   = M2C_FIELD(&data_ov004_020cf8bc, s32 *, 4);
    M2C_FIELD(&data_ov004_020cf8bc, s32 *, 4) = (s32) (temp_r2 + 1);
    if (temp_r2 == 0) {
        var_r0 = func_0202f3f8(0x10);
        if (var_r0 != 0) {
            var_r0 = func_ov004_020bbdc0();
        }
        M2C_FIELD(&data_ov004_020cf8bc, s32 *, 0) = var_r0;
    }
    return M2C_FIELD(&data_ov004_020cf8bc, s32 *, 0);
}
