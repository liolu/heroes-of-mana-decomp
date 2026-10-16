/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206cc20(M2C_UNK, s32, s32, s32);    /* extern */

void func_ov123_0206cbc4(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (func_ov123_0206cc20(arg0, arg1, arg4, arg5) == 0) {
        return;
    }
    if (arg3 == 0) {
        return;
    }
    func_ov123_0206cc20(arg2, arg3, arg4, 0);
}
