#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a0498(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a078c(M2C_UNK, M2C_UNK);      /* extern */

void func_ov024_020d0160(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a078c(0x1B, 0x2F);
    func_ov003_020a0498(0xC9, 0xD6);
}
