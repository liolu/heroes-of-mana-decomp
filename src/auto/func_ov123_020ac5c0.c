/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void *func_ov123_020ac5ec(u8 *out, u32 a, void *src, u32 c);

u32 func_ov123_020ac5c0(u8 *out, u32 a, void *src, u32 c) {
    u8 *ret;
    u32 len;

    out[0]       = 0;
    out[1]       = 0;
    out[2]       = 0;
    out[3]       = 0;
    out[4]       = 0;
    out[5]       = 0;
    out[6]       = 0;
    out[7]       = 0;
    ret          = func_ov123_020ac5ec(out + 8, a, src, c);
    len          = (u32) ret - (u32) out;
    *(u16 *) out = (u16) (len - 8);
    return len;
}
