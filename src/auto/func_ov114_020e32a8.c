#include "m2c.h"

M2C_UNK func_ov114_020e30d4(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov114_020e39c8(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_ov114_020e6558;

void func_ov114_020e32a8(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 sp14[20];
    s32 var_r5;

    var_r5 = arg2;
    func_ov114_020e30d4(sp14, 0xD);
    if (var_r5 >= 0xC8) {
        var_r5 -= 0xC8;
    }
    func_ov114_020e39c8(4, arg0, arg1, var_r5, arg3, arg4, sp14, &data_ov114_020e6558, 0x10);
}
