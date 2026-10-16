#include "m2c.h"

M2C_UNK func_ov003_0209bca4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov003_0209c8f0(s32);                   /* extern */
extern void *data_ov000_02051548;

void func_ov030_020d0784(void) {
    func_ov003_0209bca4(0x2C, 0x1C, 1, 0x10C);
    func_ov003_0209bca4(0x2C, 0x19, 0x45, 0);
    func_ov003_0209bca4(0x2C, 0x1B, 0, 0);
    func_ov003_0209bca4(0x2C, 0xE, 0xF, 0);
    func_ov003_0209c8f0(0x16E);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x68) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) ^ 0x200000);
}
