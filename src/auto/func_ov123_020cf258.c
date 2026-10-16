#include "m2c.h"

s32 func_ov123_020cc9f0(s32);                       /* extern */

s32 func_ov123_020cf258(s32 arg0) {
    if (func_ov123_020cc9f0(arg0 + 4) != 0) {
        return 1;
    }
    return 0;
}
