#include "m2c.h"

M2C_UNK func_ov123_02079ce0(s32);                   /* extern */
s32 *func_ov123_0207a194(s32, s32);                 /* extern */
s32 func_ov123_0207a204(s32);                       /* extern */
M2C_UNK func_ov123_0209104c(void *);                /* extern */
M2C_UNK func_ov123_02091110(void *, s32);           /* extern */

void func_ov123_02090ff4(void *arg0) {
    s32 temp_r0;
    s32 var_r5;

    temp_r0 = func_ov123_0207a204(M2C_FIELD(arg0, s32 *, 4));
    var_r5  = 0;
    if (temp_r0 > 0) {
        do {
            func_ov123_02091110(arg0, *func_ov123_0207a194(M2C_FIELD(arg0, s32 *, 4), var_r5));
            var_r5 += 1;
        } while (var_r5 < temp_r0);
    }
    func_ov123_02079ce0(M2C_FIELD(arg0, s32 *, 4));
    func_ov123_0209104c(arg0);
}
