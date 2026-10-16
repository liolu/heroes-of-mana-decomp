#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(M2C_UNK, M2C_UNK);      /* extern */

void func_ov013_020d05ac(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a06f0(0x25, 0);
    func_ov003_020a06f0(0x26, 0);
    func_ov003_020a03f4(0x14, 0);
    func_ov003_020a03f4(0xCA, 0);
    func_ov003_020a03f4(0x7C, 0);
    func_ov003_020a03f4(0x28, 0);
    func_ov003_020a03f4(0x2E, 0);
    func_ov003_020a03f4(0x2F, 0);
    func_ov003_020a03f4(0x42, 0);
    func_ov003_020a03f4(0x48, 0);
    func_ov003_020a03f4(0x56, 0);
}
