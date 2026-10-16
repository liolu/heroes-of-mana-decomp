#include "m2c.h"

M2C_UNK func_ov003_02099b2c(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209a0ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov003_0209a25c(s32);                   /* extern */
M2C_UNK func_ov003_020a2a88();                      /* extern */
M2C_UNK func_ov003_020a2d58(M2C_UNK, M2C_UNK);      /* extern */

void func_ov011_020d0678(void) {
    func_ov003_020a2a88();
    func_ov003_02099b2c(0x1E);
    func_ov003_0209a0ec(0x3C, 1, 0, 0, -1, -1, -1);
    func_ov003_02099b2c(0x3C);
    func_ov003_0209a25c(0x2B7);
    func_ov003_02099b2c(0x3C);
    func_ov003_020a2d58(6, 0x258);
}
