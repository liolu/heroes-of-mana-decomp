#include "m2c.h"

M2C_UNK func_ov120_020ef0f8(s32, s32, s32, s32);    /* extern */
extern s32 data_ov120_020f345c[];

void func_ov120_020ef068(void) {
    s32 i;
    s32 j;

    for (i = 0, j = 0; i < 8; i++, j += 12) {
        func_ov120_020ef0f8(data_ov120_020f345c[j], data_ov120_020f345c[j + 1],
                            data_ov120_020f345c[j + 2], data_ov120_020f345c[j + 3]);
        func_ov120_020ef0f8(data_ov120_020f345c[j + 4], data_ov120_020f345c[j + 5],
                            data_ov120_020f345c[j + 6], data_ov120_020f345c[j + 7]);
        func_ov120_020ef0f8(data_ov120_020f345c[j + 8], data_ov120_020f345c[j + 9],
                            data_ov120_020f345c[j + 10], data_ov120_020f345c[j + 11]);
    }
}
