#include "m2c.h"

M2C_UNK func_ov116_020e32e8(s32, s32, s32, s32);    /* extern */
extern s32 data_ov116_020e63f0[];

void func_ov116_020e3258(void) {
    s32 i;
    s32 j;

    for (i = 0, j = 0; i < 8; i++, j += 12) {
        func_ov116_020e32e8(data_ov116_020e63f0[j], data_ov116_020e63f0[j + 1],
                            data_ov116_020e63f0[j + 2], data_ov116_020e63f0[j + 3]);
        func_ov116_020e32e8(data_ov116_020e63f0[j + 4], data_ov116_020e63f0[j + 5],
                            data_ov116_020e63f0[j + 6], data_ov116_020e63f0[j + 7]);
        func_ov116_020e32e8(data_ov116_020e63f0[j + 8], data_ov116_020e63f0[j + 9],
                            data_ov116_020e63f0[j + 10], data_ov116_020e63f0[j + 11]);
    }
}
