/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a6778(M2C_UNK *);                 /* extern */
s32 func_ov123_020a68e8(void *, M2C_UNK *, s32);    /* extern */
extern M2C_UNK data_ov123_020dd534;

s32 func_ov123_020a7d38(u32 *arg0) {
    u32 sp0;
    s32 sp4;
    s32 var_r4;
    s32 var_r7;
    u32 *var_r5;
    u32 temp_r0;
    void *var_r6;

    var_r5  = arg0;
    sp4     = 0;
    var_r4  = 0;
    temp_r0 = *var_r5;
    sp0     = temp_r0;
    if (temp_r0 == 0) {
        return 5;
    }
    if (temp_r0 > 0x40U) {
        sp0 = 0x40;
    }
    var_r7 = 0;
    if ((s32) sp0 > 0) {
        var_r6 = var_r5 + 2;
        do {
            if ((M2C_FIELD(var_r5, s32 *, 0x54) & 1) &&
                (M2C_FIELD(var_r5, s32 *, 4) == func_ov123_020a6778(&data_ov123_020dd534)) &&
                (func_ov123_020a68e8(var_r6, &data_ov123_020dd534, func_ov123_020a6778(&data_ov123_020dd534)) == 0)) {
                var_r4 += 1;
            }
            var_r5 = (void *) ((u8 *) (u8 *) var_r5 + 0x54);
            var_r6 = (void *) ((u8 *) (u8 *) var_r6 + 0x54);
            var_r7 += 1;
        } while (var_r7 < (s32) sp0);
    }
    if (var_r4 > 1) {
        sp4 = 4;
    }
    if (var_r4 == 0) {
        sp4 = 5;
    }
    return sp4;
}
