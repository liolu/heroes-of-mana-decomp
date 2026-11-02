/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207c7f4(void *, s32, s32);
extern s32 data_ov123_020e0d74;

s32 func_ov123_0207c12c(void *arg0, s32 arg1, s32 arg2) {
    if (data_ov123_020e0d74 != 1) {
        return 2;
    }
    if (arg0 == 0) {
        return 2;
    }
    return func_ov123_0207c7f4(arg0, arg1, arg2);
}
