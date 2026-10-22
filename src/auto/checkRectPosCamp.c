/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 data_ov003_020b0cf0[];

s32 checkRectPosCamp(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *var_ip;
    void *temp_r6;
    s8 temp_r6_2;
    s8 temp_r6_3;
    s32 var_lr;
    s32 var_r4;

    var_r4 = 0;
    var_ip = data_ov003_020b0cf0;
    var_lr = 0;
    do {
        if ((((u32) (M2C_FIELD(var_ip, s32 *, 0) << 0x1F) >> 0x1F) != 0) &&
            (temp_r6 = M2C_FIELD(var_ip, void **, 0xE8), (temp_r6 != NULL))) {
            if ((((u32) (M2C_FIELD(temp_r6, s32 *, 8) << 8) >> 0x1F) == 0) &&
                (arg0 == ((u32) (M2C_FIELD(var_ip, s32 *, 8) << 5) >> 0x1C))) {
                temp_r6_2 = M2C_FIELD(var_ip, s8 *, 0x60);
                if ((temp_r6_2 >= arg1) && (temp_r6_2 <= arg3)) {
                    temp_r6_3 = M2C_FIELD(var_ip, s8 *, 0x61);
                    if ((temp_r6_3 >= arg2) && (temp_r6_3 <= arg4)) {
                        var_r4 += 1;
                    }
                }
            }
        }
        var_lr += 1;
        var_ip += 0x110;
    } while (var_lr < 0x42);
    return var_r4;
}
