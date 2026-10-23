/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_020773c0(u8 **pp) {
    u8 *p;
    u32 v;
    s32 n;
    u32 t;
    p = *pp;
    v = *p++;
    t = v & 0x80;
    if (t) {
        t = v & 0x7f;
        n = t - 1;
        v = 0;
        if (t != 0) {
            for (;;) {
                t = v & 0xff000000;
                if (t) {
                    return -1;
                }
                v = *p++ + (v << 8);
                if (n-- == 0) {
                    break;
                }
            }
        }
    }
    *pp = p;
    return v;
}
