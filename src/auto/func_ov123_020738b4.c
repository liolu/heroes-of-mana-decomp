/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020738b4(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    if (arg0 == NULL) {
        return -1;
    }
    switch (arg1) {                                 /* irregular */
        case 3:
            if (M2C_FIELD(arg0, s8 *, 0x72) == 1) {
                var_r0 = 0;
            } else {
                var_r0 = 4;
            }
            return var_r0;
        case 4:
            if (arg2 & 4) {
                M2C_FIELD(arg0, s8 *, 0x72) = 0;
            } else {
                M2C_FIELD(arg0, s8 *, 0x72) = 1;
            }
        /* fallthrough */
        default:
            return 0;
    }
}
