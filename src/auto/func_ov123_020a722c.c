/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a6f70(s32, s32, s32);             /* extern */
s32 func_ov123_020a6fe0(s32, s32, s32);             /* extern */
s32 func_ov123_020a70d4(s32, s32, s32);             /* extern */
M2C_UNK func_ov123_020a7c7c(s32);                   /* extern */

s32 func_ov123_020a722c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    switch (arg0) {                                 /* irregular */
        case 0:
            func_ov123_020a7c7c(2);
            return func_ov123_020a70d4(arg1, arg2, arg3);
        case 1:
            func_ov123_020a7c7c(3);
            return func_ov123_020a6fe0(arg1, arg2, arg3);
        case 2:
            func_ov123_020a7c7c(5);
            return func_ov123_020a6f70(arg1, arg2, arg3);
        default:
            return -1;
    }
}
