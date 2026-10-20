/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_0203673c;

s32 countingWaitCondForUnit(s32 arg0, s32 arg1) {
    s32 var_r3;
    s32 var_ip;
    u8 *var_lr;
    s32 temp_r6;
    s32 var_r2;

    var_ip = 0;
    var_r3 = 0;
    var_lr = M2C_FIELD(data_0203673c, u8 **, 0x24);
    do {
        temp_r6 = M2C_FIELD(var_lr, s32 *, 0);
        if (((u32) (temp_r6 << 0x1F) >> 0x1F) != 0) {
            var_r2 = M2C_FIELD(var_lr, s32 *, 4);
            if (arg0 == ((u32) (var_r2 << 0x1C) >> 0x1C)) {
                if ((arg1 == ((u32) (M2C_FIELD((u8 *) M2C_FIELD(data_0203673c, s32 *, 4) + (((u32) (temp_r6 << 0x15) >> 0x17) << 5), s32 *, 8) << 0x12) >> 0x1C)) && (((u32) (var_r2 << 0x18) >> 0x1E) == 2) && (((u32) (var_r2 << 0x1A) >> 0x1F) == 1)) {
                    if (arg1 == 5) {
                        return 1;
                    }
                    var_ip += 1;
                }
            }
        }
        var_r3 += 1;
        var_lr += 0x34;
    } while (var_r3 < 0x58);
    return var_ip;
}
