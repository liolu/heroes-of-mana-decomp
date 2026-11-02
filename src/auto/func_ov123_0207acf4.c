/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02073a50(s32);
void func_ov123_0207af6c(s32, s32);

void func_ov123_0207acf4(s32 arg0, u8 *arg1, u32 *arg2) {
    u32 w;
    s32 r;

    w     = *arg2;
    *arg1 = (u8) w;
    r     = func_ov123_02073a50(arg0);
    *arg2 = *arg1;
    func_ov123_0207af6c(r, -1);
}
