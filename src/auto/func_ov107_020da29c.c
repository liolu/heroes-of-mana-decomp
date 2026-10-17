#include "m2c.h"

s32 func_ov003_0206c2d4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, M2C_UNK);              /* extern */
M2C_UNK func_ov003_020909c8();                      /* extern */
s32 func_ov003_02091778(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov003_020b0dd8;

void func_ov107_020da29c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    func_ov003_020909c8();
    temp_r0 = func_ov003_02091778(arg0);
    if (temp_r0 == -1) {
        temp_r0_2 = func_ov003_0206c2d4(0x1E);
        if (temp_r0_2 == -1) {
            return;
        }
        if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_2 * 0x110)), u16 *, 0x10) >= 0x64U) {
            return;
        }
        func_ov003_020900e4(2, arg0, temp_r0_2, 0);
        return;
    }
    if (func_ov003_02090978(temp_r0, arg0) == 1) {
        func_ov003_020900e4(3, arg0, temp_r0, 0);
        return;
    }
    temp_r0_3 = func_ov003_0206c2d4(0x1E);
    if (temp_r0_3 == -1) {
        return;
    }
    if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_3 * 0x110)), u16 *, 0x10) >= 0x64U) {
        return;
    }
    func_ov003_020900e4(2, arg0, temp_r0_3, 0);
}
