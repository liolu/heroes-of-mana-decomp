#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a06f0(M2C_UNK, M2C_UNK);      /* extern */

void func_ov016_020d0848(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a06f0(0x27, 0);
}
