#include "m2c.h"

M2C_UNK func_ov120_020ec6fc(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov120_020eced0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, s32, s32); /* extern */

void func_ov120_020ec7fc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    u8 sp14[20];

    func_ov120_020ec6fc(sp14, 8);
    func_ov120_020eced0(3, arg0, arg1, arg2, arg3, arg4, sp14, 0xE, 2);
}
