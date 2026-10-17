#include "m2c.h"

M2C_UNK func_ov121_020eb584(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov121_020ebda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, s32, s32); /* extern */

void func_ov121_020eb608(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 sp14[20];

    func_ov121_020eb584(sp14, 0xC);
    func_ov121_020ebda8(4, arg0, arg1, arg2, arg3, arg4, sp14, arg5, 8);
}
