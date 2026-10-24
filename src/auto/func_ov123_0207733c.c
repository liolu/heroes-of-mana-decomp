/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov123_0207733c(s8 *dst, s8 *src, s32 n) {
    s8 *start = dst;
    if (*dst != 0) {
        while (*++dst != 0) {
        }
        if (dst - start >= 0xff) {
            return;
        }
        *dst++ = 0x2c;
        *dst++ = 0x20;
    }
    while (n-- != 0 && dst - start < 0xff) {
        *dst++ = *src++;
    }
    *dst = 0;
}
