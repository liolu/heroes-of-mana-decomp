#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a0498(M2C_UNK, M2C_UNK);      /* extern */

void func_ov022_020d0878(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a03f4(0xC7, 0);
    func_ov003_020a03f4(0x80, 0);
    func_ov003_020a0498(0xCB, 0xD5);
    func_ov003_020a03f4(0x45, 0);
    func_ov003_020a03f4(0x4B, 0);
    func_ov003_020a03f4(0x57, 0);
}
