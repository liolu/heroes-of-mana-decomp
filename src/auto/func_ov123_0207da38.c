/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_02021338(s32, s32, s32);               /* extern */
s32 func_ov123_0207dff4(M2C_UNK, M2C_UNK, s32, s32, s32 *, s32 *, s32); /* extern */
extern M2C_UNK data_ov123_020da0cc;
extern M2C_UNK data_ov123_020da0e4;
extern M2C_UNK data_ov123_020da0f0;
extern M2C_UNK data_ov123_020da0fc;
extern M2C_UNK data_ov123_020da108;

s32 func_ov123_0207da38(M2C_UNK arg0, M2C_UNK arg1, void *arg2, s32 *arg3, s32 arg4, s32 arg5) {
    void *spC;
    s32 sp14;
    s32 sp18;
    s32 var_r7;
    s32 var_r6;
    s32 *sp10;
    s32 temp_r5;
    s32 var_r4;
    s32 var_r11;
    s32 temp_r0;

    spC  = arg2;
    sp10 = arg3;
    if (arg2 == NULL) {
        func_02020d04(&data_ov123_020da0cc, &data_ov123_020da0e4, 0, 0x1B9);
    }
    var_r7  = 0;
    var_r11 = M2C_FIELD(spC, s32 *, 8);
    var_r4  = M2C_FIELD(spC, s32 *, 0xC);
    temp_r5 = M2C_FIELD(spC, s32 *, 0);
    var_r6  = var_r11 - var_r4;
    if (var_r6 == 0) {
        return 0;
    }
loop_4:
    temp_r0 = func_ov123_0207dff4(arg0, arg1, temp_r5 + (var_r4 + var_r7), var_r6, &sp14, &sp18, arg5);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (sp18 != 0) {
        var_r7 += sp18;
        var_r6 -= sp18;
    }
    if ((sp18 == 0) || (var_r6 == 0)) {
        if (arg4 != 0) {
            if (var_r7 > 0) {
                func_02021338(temp_r5, temp_r5 + var_r7, var_r6 + 1);
                var_r11 -= var_r7;
            }
        } else {
            var_r4 += var_r7;
        }
        if (var_r11 < 0) {
            func_02020d04(&data_ov123_020da0f0, &data_ov123_020da0e4, 0, 0x1DE);
        }
        if (var_r4 < 0) {
            func_02020d04(&data_ov123_020da0fc, &data_ov123_020da0e4, 0, 0x1DF);
        }
        if (var_r4 > var_r11) {
            func_02020d04(&data_ov123_020da108, &data_ov123_020da0e4, 0, 0x1E0);
        }
        M2C_FIELD(spC, s32 *, 8)   = var_r11;
        M2C_FIELD(spC, s32 *, 0xC) = var_r4;
        if (sp10 != NULL) {
            *sp10 = sp14;
        }
        return 0;
    }
    goto loop_4;
}
