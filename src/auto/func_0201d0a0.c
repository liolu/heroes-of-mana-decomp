#include "m2c.h"

M2C_UNK func_0200e804(M2C_UNK, s32);                /* extern */
M2C_UNK func_0200e828();                            /* extern */
M2C_UNK func_0201f3a8(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0201d0a0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0200e804(arg2, (arg0 + 0x1F) & ~0x1F);
    func_0200e828();
    func_0201f3a8(arg2, arg0, arg1);
}
