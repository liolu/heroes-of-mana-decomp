/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_020794f4(u16 *a, u16 *b, s32 n) {
    s32 i;
    for (i = n - 1; i >= 0; i--) {
        u16 x = b[i];
        u16 y = a[i];
        if (y > x) {
            return 1;
        }
        if (y < x) {
            return -1;
        }
    }
    return 0;
}
