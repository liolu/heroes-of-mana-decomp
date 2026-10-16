#include "m2c.h"

s32 func_ov004_020b9ecc();                          /* extern */
M2C_UNK func_ov004_020ba020(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov004_020ba488();                      /* extern */
extern M2C_UNK data_ov004_020cfaf0;

void func_ov004_020cb4f4(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;

    if ((s32) M2C_FIELD(&data_ov004_020cfaf0, s32 *, 0x650) <= 0) {
        return;
    }
    temp_r0 = func_ov004_020b9ecc();
    if (arg0 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_ov004_020ba020(temp_r0, var_r1);
    func_ov004_020b9ecc();
    func_ov004_020ba488();
}
