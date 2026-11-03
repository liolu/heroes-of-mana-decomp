/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02091dd4(void *p);
s32 func_02024ea0(void *a, void *b, u16 c);

s32 func_ov123_02091d44(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 i;
    s32 r;
    u16 id;
    u8 tag;
    u8 *p;
    u8 *e;

    if (*(u16 *) (arg0 + 0xa) == 0x20) {
        r = func_ov123_02091dd4(arg0);
        if (r > 0) {
            return r;
        }
    }
    i = 0;
    if (arg1 > 0) {
        id  = *(u16 *) (arg0 + 0xa);
        p   = arg0 + 0xc;
        tag = (u8) id;
        e   = arg2;
        do {
            if (tag == e[3]) {
                if (func_02024ea0(p, e + 4, id) == 0) {
                    return e[1];
                }
            }
            i++;
            e += 0x24;
        } while (i < arg1);
    }
    return -1;
}
