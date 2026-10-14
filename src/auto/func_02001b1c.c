#include "m2c.h"

M2C_UNK func_0201027c(M2C_UNK, s32, M2C_UNK);       /* extern */
extern void *data_0203673c;

void func_02001b1c(void) {
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r8;
    s32 var_r8_2;

    var_r7 = 0;
    var_r8 = 0;
    do {
        func_0201027c(0, M2C_FIELD(data_0203673c, s32 *, 0x2C) + var_r8, 0x14);
        var_r7 += 1;
        var_r8 += 0x14;
    } while (var_r7 < 0x31);
    var_r8_2 = 0x64;
    var_r7_2 = 0x7D0;
    do {
        func_0201027c(0, M2C_FIELD(data_0203673c, s32 *, 0x2C) + var_r7_2, 0x14);
        var_r8_2 += 1;
        var_r7_2 += 0x14;
    } while (var_r8_2 < 0x80);
}
