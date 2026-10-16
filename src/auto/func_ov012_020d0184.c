#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a0828(M2C_UNK);               /* extern */

void func_ov012_020d0184(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a06f0(0x21, 0);
    func_ov003_020a06f0(0x22, 0);
    func_ov003_020a06f0(0x23, 0);
    func_ov003_020a03f4(0xCB, 0);
    func_ov003_020a0828(0x17);
}
