/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02094b48(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 & ~arg3) {
        return 0;
    }
    *arg0 = (*arg0 & ~(arg3 << arg2)) | (arg1 << arg2);
    return 1;
}
