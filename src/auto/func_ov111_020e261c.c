#include "m2c.h"

void func_ov111_020e261c(s32 *arg0, s32 *arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;

    temp_r2 = *arg0;
    if (temp_r2 > 0x40000) {
        *arg0 = temp_r2 - 0x80000;
    }
    temp_r3 = *arg0;
    if (temp_r3 < -0x40000) {
        *arg0 = temp_r3 + 0x80000;
    }
    temp_r0 = *arg1;
    if (temp_r0 > 0x40000) {
        *arg1 = temp_r0 - 0x80000;
    }
    temp_r2_2 = *arg1;
    if (temp_r2_2 < -0x40000) {
        *arg1 = temp_r2_2 + 0x80000;
    }
}
