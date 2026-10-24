#include "m2c.h"
extern s32 func_ov004_020c777c(s32);
extern s32 func_ov004_020c7784(s32);
s32 func_ov004_020c7718(s32 *arg0, s32 arg1, u8 *arg2) {
    if (func_ov004_020c777c(*arg0) == 0) {
        return arg1;
    }
    if (func_ov004_020c7784(*arg0) >= 0) {
        s32 n = *(s32 *) (arg2 + 4);
        if (func_ov004_020c7784(*arg0) < n) {
            return (*(s32 **) (arg2 + 8))[func_ov004_020c7784(*arg0)];
        }
    }
    return 0;
}
