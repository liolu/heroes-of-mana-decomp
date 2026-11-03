/* compiler: 1.2/sp3 */
#include "m2c.h"
u64 func_0202d478(s32, s32);
s32 func_ov123_0207abe0();

s32 func_ov123_0207ab94(s32 arg0, s32 arg1) {
    s32 var_r5;
    s32 temp_r4;
    u64 temp_ret;

    var_r5  = arg0;
    temp_r4 = arg1 - var_r5;
    if (temp_r4 == 0) {
        return var_r5;
    }
    temp_ret = func_0202d478(func_ov123_0207abe0(), temp_r4);
    return (s32) (temp_ret >> 0x20) + var_r5;
}
