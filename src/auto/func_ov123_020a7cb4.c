/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

u16 func_ov123_020a66fc();                          /* extern */
u16 func_ov123_020a67dc(u16);                       /* extern */
M2C_UNK func_ov123_020a68d8(void *, s32, s32);      /* extern */

void func_ov123_020a7cb4(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r4;
    void *var_r5;

    var_r5 = arg1;
    var_r4 = 0;
    if (arg0 > 0) {
        do {
            func_ov123_020a68d8(var_r5, arg2, 6);
            M2C_FIELD(var_r5, u16 *, 6) = func_ov123_020a66fc();
            M2C_FIELD(var_r5, u16 *, 6) = func_ov123_020a67dc(M2C_FIELD(var_r5, u16 *, 6));
            var_r5 += 8;
            var_r4 += 1;
        } while (var_r4 < arg0);
    }
}
