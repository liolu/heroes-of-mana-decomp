#include "m2c.h"

M2C_UNK func_ov115_020e3700(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov115_020e7374(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_ov115_020e492c(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_ov115_020e7374(arg2, arg0, arg1, 2, 0, 1, 0x45);
    func_ov115_020e3700(arg0 + 0x10, arg1, 0x50, 1);
    func_ov115_020e7374(arg3, arg0 + 0x18, arg1, 2, 0, 1, 0x45);
    func_ov115_020e3700(arg0 + 0x28, arg1, 0x50, 1);
    func_ov115_020e7374(arg4, arg0 + 0x30, arg1, 2, 0, 1, 0x45);
}
