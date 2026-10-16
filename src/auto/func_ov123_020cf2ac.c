#include "m2c.h"

s32 func_ov123_020cc9e4(s32);                       /* extern */

s32 func_ov123_020cf2ac(s32 arg0) {
    if (func_ov123_020cc9e4(arg0 + 0x50) != 0) {
        return 1;
    }
    return 0;
}
