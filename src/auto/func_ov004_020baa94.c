#include "m2c.h"

s32 func_ov004_020baa94(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_6;

    switch (arg1) {
        case 0:
            return 0;
        case 1:
            temp_r1 = arg2 * 2;
            return arg3 * ((s32) (temp_r1 + ((u32) (temp_r1 >> 2) >> 0x1D)) >> 3);
        case 2:
            temp_r1_2 = arg2 * 4;
            return arg3 * ((s32) (temp_r1_2 + ((u32) (temp_r1_2 >> 2) >> 0x1D)) >> 3);
        case 3:
            temp_r1_3 = arg2 * 8;
            return arg3 * ((s32) (temp_r1_3 + ((u32) (temp_r1_3 >> 2) >> 0x1D)) >> 3);
        case 4:
            temp_r1_4 = arg2 * 8;
            return arg3 * ((s32) (temp_r1_4 + ((u32) (temp_r1_4 >> 2) >> 0x1D)) >> 3);
        case 5:
            temp_r1_5 = arg2 * 8;
            return arg3 * ((s32) (temp_r1_5 + ((u32) (temp_r1_5 >> 2) >> 0x1D)) >> 3);
        case 6:
            temp_r1_6 = arg2 * 0x10;
            return arg3 * ((s32) (temp_r1_6 + ((u32) (temp_r1_6 >> 2) >> 0x1D)) >> 3);
        default:
            return 0;
    }
}
