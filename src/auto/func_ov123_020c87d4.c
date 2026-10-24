/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s32 func_02024c28(s8 *);
extern s32 func_020213f0(void *, void *, s32);
s32 func_ov123_020c87d4(s8 *arg0, s8 *arg1, s32 arg2) {
    s32 a = func_02024c28(arg0);
    s32 b = func_02024c28(arg1);
    if (a < arg2 || b < arg2) {
        return 0;
    }
    if (func_020213f0(arg0 + (a - arg2), arg1 + (b - arg2), arg2) == 0) {
        return 1;
    }
    return 0;
}
