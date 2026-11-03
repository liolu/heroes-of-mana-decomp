/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020766a8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    s32 v;
    u8 *p;

    i = 0;
    if (arg1 > 0) {
        p = arg0;
        do {
            v = (p[0] << 8) + p[1];
            if (arg2 == 3) {
                v = p[2] + (v << 8);
            }
            if (v == arg3) {
                return 1;
            }
            i += 1;
            p += arg2;
        } while (i < arg1);
    }
    return 0;
}
