/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_02069d90(u16 *dst, s32 w, s32 h, s32 stride, s32 start, u32 pal) {
    s32 x;
    s32 y;
    u16 *p;
    u32 hi = (pal << 28) >> 16;
    for (y = 0; y < h; y++) {
        p = dst;
        for (x = 0; x < w; x++) {
            u32 v = hi | start;
            start++;
            *p++ = v;
        }
        dst += stride;
    }
}
