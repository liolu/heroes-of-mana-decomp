/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_02092d40(s32);

s32 func_ov123_0209335c(u8 *arg0) {
    u32 v;
    u32 hi;

    arg0[0xD15] = 0;
    v           = arg0[0xD0B];
    hi          = (v << 0x18) >> 0x1C;
    hi          = (hi + 1) & 0xFF;
    hi &= 0xF;
    v           = (v & ~0xF0) | (hi << 4);
    arg0[0xD0B] = (u8) v;
    func_ov123_02092d40(0);
    arg0[0xD11] = 1;
    return 3;
}
