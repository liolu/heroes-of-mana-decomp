#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */

void func_ov021_020d0160(void) {
    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a03f4(0xBE, 0);
    func_ov003_020a03f4(0x7F, 0);
    func_ov003_020a03f4(0x40, 0);
    func_ov003_020a03f4(0x4F, 0);
    func_ov003_020a03f4(0x54, 0);
}
