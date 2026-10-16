#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 func_ov003_02068624(s32, void *);               /* extern */
s32 func_ov003_0206c2d4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, void *);               /* extern */
M2C_UNK func_ov003_020909c8(void *);                /* extern */
s32 func_ov003_02091778(void *);                    /* extern */
s32 func_ov003_02092440(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK func_ov003_02092524;

void func_ov107_020dc698(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;

    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x1E) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) | 0x1000);
        temp_r1_2                                   = M2C_FIELD(arg0, void **, 0xE8);
        if (func_0202d478(M2C_FIELD(temp_r1_2, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1_2, u16 *, 0x12)) > 0x50) {
            M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) ^ 0x1000);
        }
        temp_r0 = func_ov003_02092440(arg0, 0, 1, &func_ov003_02092524);
        if (temp_r0 != -1) {
            if (func_ov003_02068624(temp_r0, arg0) == 1) {
                func_ov003_020900e4(0, arg0, temp_r0, 0);
                return;
            }
            func_ov003_020900e4(6, arg0, temp_r0, 0);
            return;
        }
        goto block_7;
    }
block_7:
    temp_r0_2 = func_ov003_02091778(arg0);
    if (temp_r0_2 == -1) {
        temp_r0_3 = func_ov003_02092440(arg0, 0, 1, &func_ov003_02092524);
        if ((temp_r0_3 != -1) && (func_ov003_02068624(temp_r0_3, arg0) == 1)) {
            temp_r1_3 = M2C_FIELD(arg0, void **, 0xE8);
            if (func_0202d478(M2C_FIELD(temp_r1_3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1_3, u16 *, 0x12)) < 0x64) {
                func_ov003_020900e4(0, arg0, temp_r0_3, 0);
                return;
            }
        }
        temp_r0_4 = func_ov003_0206c2d4(7);
        if (temp_r0_4 == -1) {
            return;
        }
        func_ov003_020900e4(2, arg0, temp_r0_4, 0);
        return;
    }
    func_ov003_020909c8(arg0);
    if (func_ov003_02090978(temp_r0_2, arg0) == 1) {
        func_ov003_020900e4(3, arg0, temp_r0_2, 0);
        return;
    }
    temp_r1_4 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1_4, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1_4, u16 *, 0x12)) > 0x46) {
        func_ov003_020900e4(2, arg0, temp_r0_2, 0);
        return;
    }
    func_ov003_020900e4(0, arg0, 0, 0);
}
