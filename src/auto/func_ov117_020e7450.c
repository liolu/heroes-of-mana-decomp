#include "m2c.h"

M2C_UNK func_ov117_020e74e0(s32, s32, s32, s32);    /* extern */
extern s32 data_ov117_020efd64[];

void func_ov117_020e7450(void) {
    s32 i;
    s32 j;

    for (i = 0, j = 0; i < 8; i++, j += 12) {
        func_ov117_020e74e0(data_ov117_020efd64[j], data_ov117_020efd64[j + 1], data_ov117_020efd64[j + 2],
                            data_ov117_020efd64[j + 3]);
        func_ov117_020e74e0(data_ov117_020efd64[j + 4], data_ov117_020efd64[j + 5], data_ov117_020efd64[j + 6],
                            data_ov117_020efd64[j + 7]);
        func_ov117_020e74e0(data_ov117_020efd64[j + 8], data_ov117_020efd64[j + 9], data_ov117_020efd64[j + 10],
                            data_ov117_020efd64[j + 11]);
    }
}
