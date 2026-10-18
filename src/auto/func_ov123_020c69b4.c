/* compiler: 1.2/sp3 */
#include "m2c.h"

extern void *data_ov123_020e4708;

s16 func_ov123_020c69b4(u32 arg0) {
    u16 var_r2;
    u32 var_r0;
    s16 var_r1;
    s16 var_r5;
    u32 var_r3;
    s16 var_r4;

    var_r0 = arg0;
    var_r4 = 0;
    var_r2 = 0;
    var_r5 = 0;
    do {
        if (var_r0 & (1 << var_r5)) {
            var_r4 = var_r5 + 1;
            var_r2 += 1;
        }
        var_r5 += 1;
    } while ((s32) var_r5 < 0x10);
    if ((u32) var_r2 <= 1U) {
        return var_r4;
    }
    var_r1                                      = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x58) = (s32) ((M2C_FIELD(data_ov123_020e4708, s32 *, 0x58) * 0x10DCD) + 0x3039);
    var_r3 = (u32) ((var_r2 * (u8) M2C_FIELD(data_ov123_020e4708, s32 *, 0x58)) << 8) >> 0x10;
loop_7:
    if (var_r0 & 1) {
        if (var_r3 == 0) {
            return (s16) (var_r1 + 1);
        }
        var_r3 = (u32) (u16) (var_r3 - 1);
        goto block_11;
    }
block_11:
    var_r0 = (u32) (var_r0 << 0xF) >> 0x10;
    var_r1 += 1;
    if ((s32) var_r1 >= 0x10) {
        return 0;
    }
    goto loop_7;
}
