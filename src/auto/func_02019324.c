#include "m2c.h"

M2C_UNK func_020184e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018550(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
void *func_0201866c();                              /* extern */
s32 func_020186e0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02019324(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020186e0(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020184e0(3, arg0);
    temp_r0_2 = func_0201866c();
    var_r0 =
        func_02018550(3, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
