#include "m2c.h"

M2C_UNK func_0200e7e8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02010a7c();                            /* extern */
M2C_UNK func_02010a90();                            /* extern */

void func_020116e0(s32 arg0, s32 arg1, s32 arg2) {
    func_02010a7c();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_0200e7e8(arg0 + 0x3C + (arg1 * 4), 4);
    func_02010a90();
}
