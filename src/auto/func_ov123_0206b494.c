/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_ov123_0206b544(u8 *, u8 **);

s32 func_ov123_0206b494(u8 *arg0, u32 *arg1) {
    u8 *end;
    u32 acc;
    s32 i;
    u32 v;
    u8 *p;

    acc = 0;
    p   = arg0;
    i   = acc;
    do {
        acc <<= 8;
        v = func_ov123_0206b544(p, &end);
        if (p == end) {
            return 0;
        }
        p = end;
        if (v > 0xff || (i != 3 && (p = end + 1, *end != '.')) || (i == 3 && *p != 0)) {
            return 0;
        }
        i++;
        acc |= v;
    } while (i < 4);
    *arg1 = acc;
    return 1;
}
