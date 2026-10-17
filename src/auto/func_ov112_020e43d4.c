#include "m2c.h"

M2C_UNK func_ov112_020e4340(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov112_020e4b44(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, s32, s32); /* extern */

void func_ov112_020e43d4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    u8 sp14[20];

    func_ov112_020e4340(sp14, 0xB);
    func_ov112_020e4b44(3, arg0, arg1, arg2, arg3, arg4, sp14, 0xE, 2);
}
