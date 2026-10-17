#include "m2c.h"

M2C_UNK func_ov112_020e4340(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov112_020e4dd8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, s32); /* extern */

void func_ov112_020e4944(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 sp10[20];

    func_ov112_020e4340(sp10, 8);
    func_ov112_020e4dd8(3, arg0, arg1, arg2, arg3, arg4, sp10, arg5);
}
