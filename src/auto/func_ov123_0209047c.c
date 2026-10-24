/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02090ed8(s8 *, s32);

s32 func_ov123_0209047c(s8 *p, s32 n) {
    s32 k;
    while (n > 0 && *p != 0) {
        k = func_ov123_02090ed8(p, n);
        if (k < 0) {
            return 0;
        }
        n -= k;
        p += k;
        k = func_ov123_02090ed8(p, n);
        if (k < 0) {
            return 0;
        }
        p += k;
        n -= k;
    }
    if (n == 0) {
        return 0;
    }
    return *p == 0;
}
