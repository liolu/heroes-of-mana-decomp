/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

u32 func_ov123_020a678c(u16);                       /* extern */
s32 func_ov123_020a77d4(void *);                    /* extern */
s32 func_ov123_020a78e4(s32, void *, s32 *, s32);   /* extern */
s32 func_ov123_020a79a8(s32, void *, s32 *, s32);   /* extern */
s32 func_ov123_020a7ab0(s32, void *, s32 *, s32);   /* extern */

s32 func_ov123_020a7bc0(s32 arg0, void *arg1, s32 *arg2, s32 arg3) {
    s32 sp0;
    s32 var_r5;
    u32 temp_r0;
    void *temp_r7;

    var_r5  = arg0;
    sp0     = arg3;
    temp_r7 = arg1 + 0xC;
    if (func_ov123_020a678c(M2C_FIELD(arg1, u16 *, 0xC)) < 1U) {
        *arg2 += 1;
        return var_r5;
    }
    if (M2C_FIELD(temp_r7, u8 *, 0xF) != 0x11) {
        *arg2 += 1;
        return var_r5;
    }
    if (func_ov123_020a77d4(arg1 + 0xC) > 0) {
        *arg2 += 1;
        return var_r5;
    }
    temp_r0 = func_ov123_020a678c(M2C_FIELD(temp_r7, u16 *, 6));
    switch (temp_r0) {                              /* irregular */
        case 0x1010:
            var_r5 = func_ov123_020a7ab0(var_r5, arg1, arg2, sp0);
            break;
        case 0x2010:
            var_r5 = func_ov123_020a79a8(var_r5, arg1, arg2, sp0);
            break;
        case 0x3010:
            var_r5 = func_ov123_020a78e4(var_r5, arg1, arg2, sp0);
            break;
    }
    return var_r5;
}
