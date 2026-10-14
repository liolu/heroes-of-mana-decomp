#include "m2c.h"

M2C_UNK func_0200e7cc(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200e7e8(s32, u32);                    /* extern */
M2C_UNK func_020184e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018550(M2C_UNK, M2C_UNK, s32, u32);      /* extern */
void *func_0201866c();                              /* extern */
s32 func_020186e0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02019f54(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_0201866c();
    temp_r0 = func_020186e0(1, 8);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0200e7cc(M2C_FIELD(temp_r4, void **, 4) + 0x10, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0x10) == 1) {
        return 3;
    }
    if (arg2 < 0x10U) {
        return 6;
    }
    if (arg1 == 0) {
        return 6;
    }
    func_0200e7e8(arg1, arg2);
    func_020184e0(0x11, arg0);
    var_r0 = func_02018550(0x11, 2, arg1, arg2);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
