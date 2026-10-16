#include "m2c.h"

M2C_UNK func_ov114_020e2114(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov114_020e2170();                      /* extern */
M2C_UNK func_ov114_020e21b0(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov114_020e3d20(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov114_020e6148;

void func_ov114_020e468c(void) {
    func_ov114_020e2170();
    func_ov114_020e21b0(0xD3, 0x14, func_ov114_020e3d20(3) + 0x19, 0);
    if (((u32) (M2C_FIELD(&data_ov114_020e6148, s32 *, 0x514) << 0x17) >> 0x1F) == 0) {
        func_ov114_020e21b0(0xF0, 0x10, 0x1B, 0);
    }
    func_ov114_020e21b0(0x80, 0x60, func_ov114_020e3d20(0xC) + 0x2E, 1);
    func_ov114_020e21b0(0x80, 0x90, func_ov114_020e3d20(0xD) + 0x30, 1);
    func_ov114_020e2114(0, 0x400);
}
