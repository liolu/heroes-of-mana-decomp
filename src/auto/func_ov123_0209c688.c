/* compiler: 1.2/sp3 */
/* near start: 3 diffs with profile "1.2/sp3" */
#include "m2c.h"

M2C_UNK func_ov123_02094390(s32, s32);              /* extern */
M2C_UNK func_ov123_020949e0(s32);                   /* extern */
s32 func_ov123_02094a50(s32);                       /* extern */
s32 func_ov123_02094a5c(s32);                       /* extern */
M2C_UNK func_ov123_0209c850(s32, s32, s32);         /* extern */
s32 func_ov123_0209ce1c(s32);                       /* extern */
extern void *data_ov123_020e18dc;

s32 func_ov123_0209c688(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 sp4;
    s32 var_r8;
    s32 var_r7;
    s32 sp8;
    s32 var_r6;
    s32 sp0;
    s32 var_r5;
    s32 var_r4;

    sp0    = arg2;
    sp4    = -1;
    var_r8 = 0;
    if (arg1 > 0) {
        var_r6 = arg0;
        var_r5 = arg0;
        sp8    = 1;
        do {
            temp_r0 = func_ov123_0209ce1c(var_r8);
            if (temp_r0 != 0) {
                var_r7 = var_r8 + 1;
                if (temp_r0 == sp0) {
                    sp4 = var_r8;
                }
                if (var_r7 < arg1) {
                    var_r4 = (var_r7 * 0xC) + arg0;
                    do {
                        if (temp_r0 == func_ov123_0209ce1c(var_r7)) {
                            if ((func_ov123_02094a50(var_r6) == 2) && (func_ov123_02094a50(var_r4) == 3)) {
                                func_ov123_02094390(var_r5, temp_r0);
                            }
                            if (func_ov123_02094a5c(var_r4) != 0) {
                                func_ov123_020949e0(var_r5);
                            }
                            func_ov123_0209c850(arg0, var_r7, var_r8);
                            M2C_FIELD(data_ov123_020e18dc, s8 *, 0x1D) = (s8) sp8;
                        }
                        var_r7 += 1;
                        var_r4 += 0xC;
                    } while (var_r7 < arg1);
                }
            }
            var_r8 += 1;
            var_r6 += 0xC;
            var_r5 += 0xC;
        } while (var_r8 < arg1);
    }
    return sp4;
}
