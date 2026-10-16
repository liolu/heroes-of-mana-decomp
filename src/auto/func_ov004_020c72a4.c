#include "m2c.h"

M2C_UNK func_ov004_020b9c64(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c72a4(s32 arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    func_ov004_020b9c64(arg1, arg0 + 0x10);
    func_ov004_020b9c64(arg1, arg0 + 0x1C);
}
