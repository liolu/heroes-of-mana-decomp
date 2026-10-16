#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a078c(M2C_UNK, M2C_UNK);      /* extern */

void func_ov023_020d0654(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a078c(0x15, 0x2E);
    func_ov003_020a03f4(0x31, 0);
}
