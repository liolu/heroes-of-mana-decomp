/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void *func_ov123_020ac7a4(u8 *arg0, s32 *arg1, s32 *arg2) {
    u32 sum;
    u8 *end;
    u8 *p;
    u16 h;
    u16 want;

    sum   = 0;
    h     = *(u16 *) arg0;
    *arg1 = (u16) (((h >> 8) & 0xFF) | ((h << 8) & 0xFF00));
    h     = *(u16 *) (arg0 + 2);
    *arg2 = (u16) (((h >> 8) & 0xFF) | ((h << 8) & 0xFF00));
    end   = arg0 + 6 + *arg2;
    p     = arg0;
    if (p < end) {
        do {
            sum += *p;
            p += 1;
        } while (p < end);
    }
    h    = *(u16 *) end;
    want = (u16) (((h >> 8) & 0xFF) | ((h << 8) & 0xFF00));
    if ((u16) sum != want) {
        return 0;
    }
    return arg0 + 6;
}
