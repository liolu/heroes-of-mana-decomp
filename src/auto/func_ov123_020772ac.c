/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020772ac(u8 *p, s32 type) {
    u32 a;
    s32 b;

    a = ((u32) p[0] * 10 + p[1]) - 0x210;
    p += 2;
    if (type == 0x17) {
        if (a < 0x32) {
            b = a + 0x7D0;
        } else {
            b = a + 0x76C;
        }
    } else {
        b = a * 100 + (((u32) p[0] * 10 + p[1]) - 0x210);
        p += 2;
    }
    return (b << 16) + ((((u32) p[0] * 10 + p[1]) - 0x210) << 8) + (((u32) p[2] * 10 + p[3]) - 0x210);
}
