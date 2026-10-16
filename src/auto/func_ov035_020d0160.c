#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a078c(M2C_UNK, M2C_UNK);      /* extern */

void func_ov035_020d0160(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a078c(0x19, 0x1A);
    func_ov003_020a06f0(0x1B, 0);
    func_ov003_020a03f4(0x32, 0);
    func_ov003_020a03f4(0x33, 0);
    func_ov003_020a03f4(0x87, 0);
    func_ov003_020a03f4(0x12, 0);
    func_ov003_020a03f4(0xA, 0);
    func_ov003_020a03f4(0x1D, 0);
    func_ov003_020a03f4(0x1E, 0);
    func_ov003_020a03f4(0xC8, 0);
}
