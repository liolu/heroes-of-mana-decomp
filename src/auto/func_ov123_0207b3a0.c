/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024c28();                                /* extern */
M2C_UNK func_02024c44(s32, s32);                    /* extern */
s32 func_ov123_020996d4(s32);                       /* extern */

s32 func_ov123_0207b3a0(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        return 0;
    }
    temp_r0 = func_ov123_020996d4(func_02024c28() + 1);
    if (temp_r0 != 0) {
        func_02024c44(temp_r0, arg0);
    }
    return temp_r0;
}
