#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(M2C_UNK, M2C_UNK);      /* extern */

void func_ov026_020d0800(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a06f0(0x31, 0);
    func_ov003_020a06f0(0x32, 0);
    func_ov003_020a03f4(0xCC, 0);
    func_ov003_020a03f4(0x7B, 0);
    func_ov003_020a03f4(0x46, 0);
    func_ov003_020a03f4(0x50, 0);
    func_ov003_020a03f4(0x55, 0);
    func_ov003_020a03f4(0x58, 0);
}
