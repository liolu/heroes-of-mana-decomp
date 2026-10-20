/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 data_ov000_02051548;

void SetAreaMapMaskForEnemy(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 temp_r2;
    s32 var_lr;
    s32 var_r4;
    s32 temp_r5;

    if (arg2 > 7) {
        arg2 = 7;
    }
    temp_ip = (arg2 * 2) + 1;
    arg0 -= arg2;
    arg1 -= arg2;
    var_r4 = 0;
    if (temp_ip > 0) {
        do {
            var_lr = 0;
            if (temp_ip > 0) {
                do {
                    temp_r5 = arg1 + var_r4;
                    temp_r2 = arg0 + var_lr;
                    if ((temp_r2 >= 0) && (temp_r2 < 0x28) && (temp_r5 >= 0) && (temp_r5 < 0x28)) {
                        M2C_FIELD(data_ov000_02051548 + (((temp_r2 + (temp_r5 << 6)) >> 5) * 4), s32 *, 0x540) |= 1 << (temp_r2 & 0x1F);
                    }
                    var_lr += 1;
                } while (var_lr < temp_ip);
            }
            var_r4 += 1;
        } while (var_r4 < temp_ip);
    }
}
