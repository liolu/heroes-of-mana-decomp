/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 *data_ov123_020e46d0;
void MI_CpuFill8(void *, s32, s32);
void func_ov123_020c2b08(s32);
void func_ov123_020c2d28(s32 a) {
    u8 *p = data_ov123_020e46d0 + (a << 8);
    MI_CpuFill8(p, 0, 0xEF);
    p[0xE7] = 0xFF;
    func_ov123_020c2b08(a);
}
