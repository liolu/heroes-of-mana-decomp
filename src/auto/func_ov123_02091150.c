/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov123_0207a204(void *);
s32 *func_ov123_0207a194(void *, s32);
s32 func_ov123_0208e93c(s32);
u16 func_ov123_0208e910(s32);
s32 func_ov123_02091150(u8 *p, s32 a, s32 b) {
    s32 n;
    s32 e;
    s32 i;
    n = func_ov123_0207a204(*(void **) (p + 4));
    for (i = 0; i < n; i++) {
        e = *func_ov123_0207a194(*(void **) (p + 4), i);
        if (a == func_ov123_0208e93c(e) && b == func_ov123_0208e910(e)) {
            return i;
        }
    }
    return -1;
}
