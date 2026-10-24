#include "m2c.h"
s32 func_ov123_0209d368(void);
void func_ov123_020a1b40(s32, s32, s32, s32, s32 *, s32);
s32 func_ov123_020a04a8(void);
u64 func_0200f510(void);
s32 func_ov123_0209ea64(s32 a, s32 b) {
    s32 tmp[2];
    s32 fl;
    s32 g;
    if (b != 0xd) {
        fl = 0;
    } else {
        tmp[0] = *(s32 *) (func_ov123_0209d368() + 0x20c);
        fl     = 1;
    }
    func_ov123_020a1b40(b, a, 0, 0, tmp, fl);
    if (func_ov123_020a04a8() != 0) {
        return 0;
    }
    g                    = func_ov123_0209d368();
    *(u64 *) (g + 0x1e8) = func_0200f510();
    return 1;
}
