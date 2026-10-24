/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_ov123_020796a8(u16 *dst, u16 *src, u32 carry, s32 n) {
    s32 i = 0;
    if (n > 0) {
        do {
            carry += src[i];
            dst[i] = carry;
            carry >>= 16;
            if (carry == 0) {
                break;
            }
            i++;
        } while (i < n);
    }
    if (dst == src) {
        return;
    }
    i++;
    if (i >= n) {
        return;
    }
    do {
        dst[i] = src[i];
        i++;
    } while (i < n);
}
