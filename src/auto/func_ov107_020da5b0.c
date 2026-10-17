#include "m2c.h"

s32 func_ov003_0206c2d4(s32);                       /* extern */
s32 func_ov003_0206e07c(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, M2C_UNK);              /* extern */
s32 func_ov003_02092440(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_ov003_020b0dd8;
extern M2C_UNK func_ov003_020924cc;

s32 func_ov107_020da5b0(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 var_r4_2;
    s32 var_r6;
    u8 var_r4;

    var_r4  = 0;
    temp_r0 = func_ov003_0206c2d4(0xF1B);
    if (temp_r0 == -1) {
        var_r4 = 1;
    } else if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0 * 0x110)), u16 *, 0x10) < 0x32U) {
        var_r4 = 1;
    }
    temp_r0_2 = func_ov003_0206c2d4(0xF1C);
    if (temp_r0_2 == -1) {
        var_r4 |= 2;
    } else if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_2 * 0x110)), u16 *, 0x10) < 0x32U) {
        var_r4 |= 2;
    }
    temp_r0_3 = func_ov003_0206c2d4(0xF1D);
    if (temp_r0_3 == -1) {
        var_r4 |= 4;
    } else if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_3 * 0x110)), u16 *, 0x10) < 0x32U) {
        var_r4 |= 4;
    }
    temp_r0_4 = func_ov003_0206c2d4(0xF1E);
    if (temp_r0_4 == -1) {
        var_r4 |= 8;
    } else if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_4 * 0x110)), u16 *, 0x10) < 0x32U) {
        var_r4 |= 8;
    }
    var_r4_2 = var_r4 & 0xF;
    var_r6   = func_ov003_0206c2d4(0);
    if (var_r6 == func_ov003_02092440(arg0, 1, 0, &func_ov003_020924cc)) {
        var_r4_2 = 0xF;
    }
    if (var_r4_2 == 0xF) {
        temp_r0_5 = func_ov003_0206c2d4(0);
        var_r6    = temp_r0_5;
        if (var_r6 == -1) {
            return 0;
        }
        if (func_ov003_02090978(temp_r0_5, arg0) == 0) {
            return 0;
        }
        goto block_23;
    }
block_23:
    if (func_ov003_02090978(var_r6, arg0) == 1) {
        func_ov003_020900e4(3, arg0, var_r6, 0);
        return 1;
    }
    if (func_ov003_0206e07c(arg0, 5) == 0) {
        return 0;
    }
    func_ov003_020900e4(6, arg0, var_r6, 0);
    return 1;
}
