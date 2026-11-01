/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02073240(u8 *o) {
    s32 r = 0;
    u8 *p = *(u8 **) (o + 0x64);
    if (p != 0) {
        s8 k = (s8) o[0x73];
        if (k == 1) {
            u8 *q = *(u8 **) (p + 0x104);
            if (q != 0) {
                r = *(u16 *) (q + 4);
            }
        } else if (k == 0 || k == 4) {
            r = *(s32 *) (o + 0x44) - *(s32 *) (p + 0xF8);
        }
    }
    return r;
}
