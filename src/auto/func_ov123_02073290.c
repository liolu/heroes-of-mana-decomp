/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98(s32);                              /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_020726a0(void *);                    /* extern */
s32 func_ov123_02073240(void *);                    /* extern */
s32 func_ov123_020733a8();                          /* extern */

s32 func_ov123_02073290(void *arg0) {
    s32 temp_r6;
    s32 var_r1;
    s32 var_r4;
    s8 temp_r0;
    s32 var_r0;

    var_r4 = 0;
    if (func_ov123_020733a8() != 0) {
        var_r4 |= 0x80;
    } else {
        if ((*(volatile s16 *) ((u8 *) arg0 + 0x70)) & 0x40) {
            var_r4 |= 0x20;
        }
        var_r0 = M2C_FIELD(arg0, s8 *, 0x73);
        if ((var_r0 == 1) || (var_r0 = (*(volatile s16 *) ((u8 *) arg0 + 0x70)) & 4, (var_r0 != 0))) {
            temp_r6 = func_0200fa98(var_r0);
            if (func_ov123_02073240(arg0) > 0) {
                var_r4 |= 1;
            }
            if (func_ov123_020726a0(arg0) > 0) {
                var_r4 |= 8;
            }
            func_0200faac(temp_r6);
        }
        temp_r0 = M2C_FIELD(arg0, s8 *, 0x73);
        var_r1  = 1;
        if ((temp_r0 != 0) && (temp_r0 != 4)) {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            if (((*(volatile s16 *) ((u8 *) arg0 + 0x70)) & 4) && (M2C_FIELD(arg0, u8 *, 8) != 4) && !(var_r4 & 1)) {
                (*(volatile s16 *) ((u8 *) arg0 + 0x70)) = (s16) ((*(volatile s16 *) ((u8 *) arg0 + 0x70)) & ~6);
            }
            if (!((*(volatile s16 *) ((u8 *) arg0 + 0x70)) & 2) && !((*(volatile s16 *) ((u8 *) arg0 + 0x70)) & 4)) {
                var_r4 |= 0x40;
            }
        }
    }
    return var_r4;
}
