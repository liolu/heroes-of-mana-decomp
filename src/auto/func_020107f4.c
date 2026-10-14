#include "m2c.h"

M2C_UNK func_02010a00(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020111a8(M2C_UNK, M2C_UNK, s32);           /* extern */

void func_020107f4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_02010a00(0x12, arg0, arg1, arg2, func_020111a8(arg0, arg3, arg4));
}
