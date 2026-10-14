/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02010434(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK (*data_02035c9c)(s32, s32, s32);

void func_020148c4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    u32 temp_r0;
    u32 temp_r1;

    var_r6  = arg2;
    var_r7  = arg1;
    temp_r5 = arg0 + 0x20;
    if (var_r6 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x14);
    temp_r1 = temp_r0 + (var_r6 * 8);
    if (temp_r1 < temp_r0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + ((u32) var_r6 >> 0x1D));
    M2C_FIELD(arg0, u32 *, 0x14) = temp_r1;
    temp_r1_2                    = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r1_2 != 0) {
        if ((u32) (temp_r1_2 + var_r6) >= 0x40U) {
            temp_r4 = 0x40 - temp_r1_2;
            func_02010434(var_r7, temp_r5 + temp_r1_2, temp_r4);
            var_r6 -= temp_r4;
            var_r7 += temp_r4;
            data_02035c9c(arg0, temp_r5, 0x40);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            goto block_8;
        }
        func_02010434(var_r7, temp_r5 + temp_r1_2, var_r6);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + var_r6);
        return;
    }
block_8:
    if ((u32) var_r6 >= 0x40U) {
        var_r4 = var_r6 & ~0x3F;
        var_r6 -= var_r4;
        if (!(var_r7 & 3)) {
            data_02035c9c(arg0, var_r7, var_r4);
            var_r7 += var_r4;
        } else {
            do {
                func_02010434(var_r7, temp_r5, 0x40);
                var_r7 += 0x40;
                data_02035c9c(arg0, temp_r5, 0x40);
                var_r4 -= 0x40;
            } while (var_r4 > 0);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r6;
    if (var_r6 == 0) {
        return;
    }
    func_02010434(var_r7, temp_r5, var_r6);
}
