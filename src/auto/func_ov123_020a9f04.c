/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void func_ov123_020a9f04(u8 *dst, u8 *src, u32 n) {
    u32 i;
    s32 pad;

    i = 0;
    while (i < n) {
        dst[i] = src[i];
        i++;
    }
}
