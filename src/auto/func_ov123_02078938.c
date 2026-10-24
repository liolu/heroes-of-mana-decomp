/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void MI_CpuFill8(void *, s32, s32);
void func_ov123_02078938(u16 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    MI_CpuFill8(arg0, 0, arg3 * 2);
    arg1 += arg2 - 1;
    while (arg2 > 1) {
        arg2 -= 2;
        *arg0 = arg1[0] + (arg1[-1] << 8);
        arg0++;
        arg1 -= 2;
    }
    if (arg2 > 0) {
        *arg0 = *arg1;
    }
}
