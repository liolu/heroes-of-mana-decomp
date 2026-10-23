/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_ov123_0207039c(s32 a, s32 b, s32 c);
s32 func_ov123_020702fc(s32 a, s32 b, s32 c, s32 d) {
    s32 t = func_ov123_0207039c(a, b, d);
    s32 u = func_ov123_0207039c(c + 0xc, 8, t);
    s32 s = u + b;
    if (s & 0x10000) {
        s = (s + 1) & 0xffff;
    }
    return s != 0xffff;
}
