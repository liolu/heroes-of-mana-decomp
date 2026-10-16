#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a078c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a0828(M2C_UNK);               /* extern */

void func_ov008_020d0184(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a06f0(0x13, 0);
    func_ov003_020a06f0(0x14, 0);
    func_ov003_020a06f0(0x16, 0);
    func_ov003_020a078c(0x12, 0x15);
    func_ov003_020a03f4(0xCD, 0);
    func_ov003_020a03f4(0x47, 0);
    func_ov003_020a0828(0x11);
}
