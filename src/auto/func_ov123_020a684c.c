/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_02073bd0(s32, s32, s32, s32, s8 *);

void func_ov123_020a684c(s32 a0, s32 a1, s32 a2, s32 a3, s8 *p, s32 v) {
    *p = (s8) v;
    func_ov123_02073bd0(a0, a1, a2, a3, p);
}
