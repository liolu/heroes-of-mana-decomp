#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
M2C_UNK func_ov003_020665b8(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02068624(s32, void *);               /* extern */
s32 func_ov003_0206c2d4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, void *);               /* extern */
M2C_UNK func_ov003_020909c8(void *);                /* extern */
s32 func_ov003_02091778(void *);                    /* extern */
s32 func_ov003_02092440(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020b0dd8;
extern M2C_UNK func_ov003_02092524;

void func_ov107_020dbc20(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r6;
    void *temp_r1;
    void *temp_r3;
    void *temp_r4;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    temp_r4 = data_ov000_02051548;
    temp_r6 = M2C_FIELD(temp_r4, s32 *, 0x8C) & 0x1000;
    if ((func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x1E) ||
        (temp_r6 == 0x1000)) {
        M2C_FIELD(temp_r4, s32 *, 0x8C) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x8C) | 0x1000);
        temp_r1                         = M2C_FIELD(arg0, void **, 0xE8);
        if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) > 0x50) {
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
        goto block_8;
    }
block_8:
    temp_r0_2 = func_ov003_02091778(arg0);
    if (temp_r0_2 == -1) {
        temp_r0_3 = func_ov003_0206c2d4(7);
        if (temp_r0_3 == -1) {
            temp_r0_4 = func_ov003_0206c2d4(5);
            if (temp_r0_4 == -1) {
                func_ov003_020665b8(arg0, 0x12, 8);
                return;
            }
            func_ov003_020900e4(2, arg0, temp_r0_4, 0);
            return;
        }
        if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_3 * 0x110)), u16 *, 0x10) < 0x190U) {
            func_ov003_020900e4(2, arg0, temp_r0_3, 0);
            return;
        }
        temp_r0_5 = func_ov003_0206c2d4(5);
        if (temp_r0_5 == -1) {
            func_ov003_020665b8(arg0, 0x12, 8);
            return;
        }
        func_ov003_020900e4(2, arg0, temp_r0_5, 0);
        return;
    }
    func_ov003_020909c8(arg0);
    if (func_ov003_02090978(temp_r0_2, arg0) == 1) {
        func_ov003_020900e4(3, arg0, temp_r0_2, 0);
        return;
    }
    temp_r0_6 = func_ov003_0206c2d4(7);
    if ((temp_r0_6 != -1) &&
        ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_6 * 0x110)), u16 *, 0x10) < 0xC8U)) {
        func_ov003_020900e4(2, arg0, temp_r0_6, 0);
        return;
    }
    func_ov003_020665b8(arg0, 0x12, 8);
}
