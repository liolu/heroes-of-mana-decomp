/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 func_ov123_02092a74(void *arg0) {
    s32 var_r8;
    s32 var_r9_3;
    s32 var_r6;
    u32 temp_r9;
    u8 temp_r10;
    u8 temp_r10_2;
    u8 var_r5;
    u8 var_r9;
    u8 var_r9_2;
    void *var_r4;
    void *var_lr;

    var_r5 = 0;
    var_r4 = arg0;
    var_r6 = 0;
    var_lr = arg0 + 0x300;
    do {
        temp_r9 = (u32) (M2C_FIELD(arg0, u8 *, 0xD0C) << 0x1C) >> 0x1C;
        if (((temp_r9 == 0) || (temp_r9 == (var_r6 + 1))) && (M2C_FIELD(var_r4, u8 *, 0xE7) != 0xFF)) {
            var_r9 = 0;
        loop_5:
            temp_r10 = M2C_FIELD((var_r4 + var_r9), u8 *, 0x40);
            if (temp_r10 != 0) {
                M2C_FIELD((var_lr + var_r9), u8 *, 4) = temp_r10;
                var_r9 += 1;
                if ((u32) var_r9 < 0x20U) {
                    goto loop_5;
                }
            }
            if (var_r9 != 0) {
                M2C_FIELD(var_lr, u8 *, 3) = var_r9;
                var_r8                     = 1;
                M2C_FIELD(var_lr, s8 *, 1) = var_r6;
            } else {
                var_r8 = 0;
            }
            if (var_r8 != 0) {
                var_r5 += 1;
                var_lr += 0x24;
            }
            if (M2C_FIELD(var_r4, u8 *, 0xE7) == 1) {
                var_r9_2 = 0;
            loop_14:
                temp_r10_2 = M2C_FIELD((var_r4 + var_r9_2), u8 *, 0x60);
                if (temp_r10_2 != 0) {
                    M2C_FIELD((var_lr + var_r9_2), u8 *, 4) = temp_r10_2;
                    var_r9_2 += 1;
                    if ((u32) var_r9_2 < 0x20U) {
                        goto loop_14;
                    }
                }
                if (var_r9_2 != 0) {
                    M2C_FIELD(var_lr, u8 *, 3) = var_r9_2;
                    var_r9_3                   = 1;
                    M2C_FIELD(var_lr, s8 *, 1) = (s8) (var_r6 + 3);
                } else {
                    var_r9_3 = 0;
                }
                if (var_r9_3 != 0) {
                    var_r5 += 1;
                    var_lr += 0x24;
                }
            }
        }
        var_r6 += 1;
        var_r4 += 0x100;
    } while ((s32) var_r6 < 3);
    return var_r5;
}
