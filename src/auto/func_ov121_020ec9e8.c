#include "m2c.h"

M2C_UNK func_ov121_020f166c();                      /* extern */
extern M2C_UNK data_ov121_020f5cac;
extern M2C_UNK data_ov121_020f6d60;

void func_ov121_020ec9e8(void) {
    u32 temp_r4;

    temp_r4 = M2C_FIELD(&data_ov121_020f6d60, u32 *, 0xA40);
    if (M2C_FIELD(&data_ov121_020f5cac, s32 *, 8) == 0) {
        return;
    }
    if (temp_r4 <= 0x100U) {
        if (temp_r4 < 0x100U) {
            if (temp_r4 <= 0x40U) {
                if ((temp_r4 < 0x40U) && (temp_r4 != 0x20)) {

                } else {
                    goto block_18;
                }
            } else if (temp_r4 != 0x80) {

            } else {
                goto block_18;
            }
        } else {
            goto block_18;
        }
    } else if (temp_r4 <= 0x800U) {
        if ((temp_r4 < 0x800U) && (temp_r4 != 0x200)) {

        } else {
            goto block_18;
        }
    } else if (temp_r4 <= 0x1000U) {
        if (temp_r4 != 0x1000) {

        } else {
            goto block_18;
        }
    } else if (temp_r4 == 0x2000) {
    block_18:
        M2C_FIELD(&data_ov121_020f6d60, u32 *, 0xA40) = 0x400U;
        func_ov121_020f166c();
        M2C_FIELD(&data_ov121_020f6d60, u32 *, 0xA40) = temp_r4;
    }
    M2C_FIELD(&data_ov121_020f5cac, s32 *, 8) = 0;
}
