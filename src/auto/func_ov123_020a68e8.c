/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a68e8(u8 *a, u8 *b, s32 n) {
    s32 r = 0;

    while (n-- > 0 && (r = *a - *b) == 0) {
        a++;
        b++;
    }
    return r;
}
