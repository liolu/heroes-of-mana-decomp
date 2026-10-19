/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa0a0;

s32 GetCompasIconAtai(void) {
    M2C_UNK var_r0;
    s32 temp_r1;

    temp_r1 = M2C_FIELD(data_ov000_02051548, s32 *, 0x1E0);
    if ((temp_r1 >= 0x2A3) && (temp_r1 <= 0x339)) {
        var_r0 = 6;
    } else if ((temp_r1 >= 0x339) && (temp_r1 <= 0x3CF)) {
        var_r0 = 5;
    } else if ((temp_r1 >= 0x3CF) && (temp_r1 <= 0x465)) {
        var_r0 = 4;
    } else if ((temp_r1 >= 0x465) || (temp_r1 <= 0x4B)) {
        var_r0 = 3;
    } else if ((temp_r1 >= 0x4B) && (temp_r1 <= 0xE1)) {
        var_r0 = 2;
    } else if ((temp_r1 >= 0xE1) && (temp_r1 <= 0x177)) {
        var_r0 = 1;
    } else if ((temp_r1 >= 0x177) && (temp_r1 <= 0x20D)) {
        var_r0 = 0;
    } else {
        var_r0 = 7;
    }
    return var_r0;
}
