/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_02071750(void *);
s32 func_ov123_020733a8();
s32 func_ov123_020718b4(void *arg0, s16 arg1) {
    s32 ok;
    if (func_ov123_020733a8() != 0) {
        return -0x1C;
    }
    ok = 0;
    if (arg0 != NULL) {
        ok = (*(s16 *) ((u8 *) arg0 + 0x70) & 1) ? 1 : 0;
    }
    if (!ok) {
        return -0x27;
    }
    if (*(s16 *) ((u8 *) arg0 + 0x70) & 2) {
        return -7;
    }
    *(s16 *) ((u8 *) arg0 + 0x74) = arg1;
    if (*(s8 *) ((u8 *) arg0 + 0x73) != 1) {
        return 0;
    }
    return func_ov123_02071750(arg0);
}
