/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov123_020788f0(u8 *dst, u16 *src, s32 n) {
    u8 *ip;
    u16 v;
    s32 off;

    off = n - 1;
    dst = dst + off;
    if (n > 1) {
        do {
            v = *src;
            n -= 2;
            ip   = dst - 1;
            *dst = (u8) v;
            v    = *src;
            src += 1;
            dst -= 2;
            *ip = (u8) (v >> 8);
        } while (n > 1);
    }
    if (n > 0) {
        *dst = (u8) *src;
    }
}
