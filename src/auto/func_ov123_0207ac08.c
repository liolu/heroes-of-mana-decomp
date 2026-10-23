/* compiler: 1.2/sp2p3 */
#include "m2c.h"
u32 func_ov123_0207ac08(u32 x) {
    u32 hi = x >> 16;
    u32 lo = x & 0xffff;
    u32 ph = hi * 0x41a7;
    u32 pl = lo * 0x41a7;
    u32 t  = pl + ((ph & 0x7fff) << 16);
    if (t > 0x7fffffff) {
        t = (t & 0x7fffffff) + 1;
    }
    t += ph >> 15;
    if (t > 0x7fffffff) {
        t = (t & 0x7fffffff) + 1;
    }
    return t;
}
