/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02091ae4(s32, void *, M2C_UNK, void *); /* extern */
M2C_UNK func_ov123_02091b64(u8, void *, M2C_UNK, void *); /* extern */

s32 func_ov123_02091bcc(s8 arg0, void *arg1, M2C_UNK arg2, void *arg3) {
    s32 var_r5;
    s32 var_r4;
    u8 temp_r0;
    u8 temp_r3;
    void *var_lr;

    temp_r3 = M2C_FIELD(arg3, u8 *, 0xD12);
    var_r4  = -1;
    var_r5  = 0;
    if ((s32) temp_r3 > 0) {
        var_lr = arg3 + 0x474;
    loop_2:
        if ((M2C_FIELD(arg1, u8 *, 4) == M2C_FIELD(var_lr, u8 *, 0)) &&
            (M2C_FIELD(arg1, u8 *, 5) == M2C_FIELD(var_lr, u8 *, 1)) &&
            (M2C_FIELD(arg1, u8 *, 6) == M2C_FIELD(var_lr, u8 *, 2)) &&
            (M2C_FIELD(arg1, u8 *, 7) == M2C_FIELD(var_lr, u8 *, 3)) &&
            (M2C_FIELD(arg1, u8 *, 8) == M2C_FIELD(var_lr, u8 *, 4)) &&
            (M2C_FIELD(arg1, u8 *, 9) == M2C_FIELD(var_lr, u8 *, 5))) {
            var_r4 = var_r5;
        } else {
            var_r5 += 1;
            var_lr += 0xC0;
            if (var_r5 < (s32) temp_r3) {
                goto loop_2;
            }
        }
    }
    if (var_r4 == -1) {
        func_ov123_02091b64(arg0, arg1, arg2, arg3);
        temp_r0 = M2C_FIELD(arg3, u8 *, 0xD12);
        var_r4  = 0xA;
        if ((u32) temp_r0 < 0xAU) {
            M2C_FIELD(arg3, u8 *, 0xD12) = (u8) (temp_r0 + 1);
        }
    } else {
        func_ov123_02091ae4(var_r4, arg1, arg2, arg3);
    }
    return var_r4;
}
