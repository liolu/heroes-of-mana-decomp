/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_ov123_0207ad28(s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov123_0207b2c8(s32 a, s32 b, s32 c, s32 d, ...) {
    s32 r = func_ov123_0207ad28(a, 0xffff, 0x1002, (s32) &b, 4);
    return r != -1;
}
