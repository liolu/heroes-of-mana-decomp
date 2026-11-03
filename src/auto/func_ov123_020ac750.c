/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020ac750(u8 **arg0, u32 arg1, u32 *arg2, u32 *arg3) {
    u8 *p;
    s32 v;
    s32 w;

    if (*(u32 *) arg0 >= arg1) {
        return 0;
    }
    p     = *arg0;
    v     = *(u16 *) p;
    v     = ((v >> 8) & 0xFF) | ((v << 8) & 0xFF00);
    *arg2 = (u16) v;
    w     = *(u16 *) (p + 2);
    w     = ((w >> 8) & 0xFF) | ((w << 8) & 0xFF00);
    *arg3 = (u16) w;
    p     = p + 4;
    *arg0 = p + ((((*arg3) + 0xB) & ~7) - 4);
    return (s32) p;
}
