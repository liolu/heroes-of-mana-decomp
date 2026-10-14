#include "m2c.h"

M2C_UNK func_0200e7cc(s32, M2C_UNK);                /* extern */
M2C_UNK func_020184e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018550(M2C_UNK, M2C_UNK);                /* extern */
void *func_0201866c();                              /* extern */
s32 func_020186e0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_0201a0c0(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_0201866c();
    temp_r0 = func_020186e0(1, 0xB);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200e7cc(M2C_FIELD(temp_r4, void **, 4) + 0x10, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0x10) == 0) {
        return 3;
    }
    func_020184e0(0x13, arg0);
    var_r0 = func_02018550(0x13, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
