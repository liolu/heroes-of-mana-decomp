#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a0498(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a078c(M2C_UNK, M2C_UNK);      /* extern */

void func_ov031_020d0160(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a06f0(0x37, 0);
    func_ov003_020a06f0(0x39, 0);
    func_ov003_020a078c(0x13, 0x3A);
    func_ov003_020a078c(0x14, 0x38);
    func_ov003_020a0498(0xCD, 0xD9);
    func_ov003_020a0498(0xCE, 0xDA);
    func_ov003_020a0498(0xD8, 0xDB);
}
