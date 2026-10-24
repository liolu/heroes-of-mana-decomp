/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0207af84(u32 *arg0) {
    u32 x = *arg0;
    s32 a;
    s32 b;
    x = ((x >> 24) & 0xFF) | ((x >> 8) & 0xFF00) | ((x << 8) & 0xFF0000) | ((x << 24) & 0xFF000000);
    a = (u8) (x >> 24);
    b = (u8) (x >> 16);
    if (a == 10) {
        return 1;
    }
    if (a == 172 && b >= 16 && b <= 31) {
        return 1;
    }
    if (a == 192 && b == 168) {
        return 1;
    }
    return 0;
}
