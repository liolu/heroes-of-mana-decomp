#include "m2c.h"

s32 func_ov123_02094a94(s32);
s64 func_ov123_02094b0c(s32);
s32 func_ov123_02094970(s64, s32);
s32 func_ov123_02094950(s64, s32);
s32 func_ov123_02094b04(s32);

s32 func_ov123_020943cc(u8 *arg0, s32 arg1) {
    s64 v;
    switch (func_ov123_02094a94(arg1)) {
        case 2:
            v = func_ov123_02094b0c(arg1);
            if (func_ov123_02094970(v, *(s32 *) (arg0 + 0x24)) == 0) {
                return 0;
            }
            return func_ov123_02094950(v, *(s32 *) (arg0 + 0x24));
        case 3:
            return func_ov123_02094b04(arg1);
        case 1:
            return -1;
        default:
            return 0;
    }
}
