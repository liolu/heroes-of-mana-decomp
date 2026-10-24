/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02089710(void *);
s32 func_ov123_02089754(void *, s32, s32);
s32 func_ov123_02089800(void *, s32, s32);
s32 func_ov123_0208980c(void *, s32, s32);
s32 func_ov123_020898f8(void *, s32, s32);

s32 func_ov123_02089638(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a = arg2 + 3;
    s32 b = arg3 - 3;
    if (arg1 == 0x64) {
        if (func_ov123_020898f8(arg0, a, b) == 0) {
            return 0;
        }
    } else if (arg1 == 0x65) {
        if (func_ov123_0208980c(arg0, a, b) == 0) {
            return 0;
        }
    } else if (arg1 == 0x66) {
        if (func_ov123_02089800(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 0x67) {
        if (func_ov123_02089754(arg0, a, b) == 0) {
            return 0;
        }
    } else if (arg1 == 0x68) {
        if (func_ov123_02089710(arg0) == 0) {
            return 0;
        }
    }
    return 1;
}
