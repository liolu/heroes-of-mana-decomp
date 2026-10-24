/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_0207aaf4(s8 *src, u8 *dst, s32 n) {
    u8 buf[3];
    s32 i = 0;
    u8 *p;
    if (n > 0) {
        p = buf;
        do {
            *p++ = src[i];
            i++;
        } while (i < n);
    }
    if (i < 3) {
        p = buf + i;
        do {
            i++;
            *p++ = 0;
        } while (i < 3);
    }
    dst[0] = buf[0] >> 2;
    dst[1] = ((buf[0] & 3) << 4) | (buf[1] >> 4);
    dst[2] = ((buf[1] & 0xF) << 2) | (buf[2] >> 6);
    dst[3] = buf[2] & 0x3F;
}
