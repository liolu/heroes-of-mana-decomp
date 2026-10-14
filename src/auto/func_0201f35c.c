#include "m2c.h"

s32 func_02019d88(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0201f530(M2C_UNK, s32);                /* extern */

s32 func_0201f35c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;

    temp_r0 = func_02019d88(arg0, 0, arg1, arg2, (s32) arg4, 1, 3);
    func_0201f530(0xF, temp_r0);
    return temp_r0;
}
