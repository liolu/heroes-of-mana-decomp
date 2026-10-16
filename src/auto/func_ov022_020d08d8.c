#include "m2c.h"

M2C_UNK func_ov003_02099b2c(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209a0ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov003_0209a25c(s32);                   /* extern */
M2C_UNK func_ov003_020a2a88();                      /* extern */
M2C_UNK func_ov003_020a2d58(M2C_UNK, s32);          /* extern */
extern void *data_ov000_02051548;

void func_ov022_020d08d8(void) {
    func_ov003_020a2a88();
    func_ov003_02099b2c(0x1E);
    func_ov003_0209a0ec(0x3C, 1, 0, 0, -1, -1, -1);
    func_ov003_02099b2c(0x3C);
    func_ov003_0209a25c(0x703);
    func_ov003_02099b2c(0x3C);
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x48) == 1) {
        func_ov003_0209a0ec(0x60, 1, 0x20, 0, -1, -1, -1);
        func_ov003_02099b2c(0x40);
        func_ov003_0209a25c(-1);
        func_ov003_02099b2c(0x3C);
    }
    func_ov003_020a2d58(0x11, 0x6A4);
}
