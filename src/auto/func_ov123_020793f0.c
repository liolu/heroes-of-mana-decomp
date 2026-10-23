/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void MI_CpuFill8(void *, s32, s32);
s32 func_ov123_02079808(u16 *, s32);
void func_ov123_020794ac(void *, s32, s32, s32);

void func_ov123_020793f0(void *arg0, u16 *arg1, u16 *arg2, s32 arg3) {
    s32 nb;
    s32 i;
    s32 j;
    s32 na;

    MI_CpuFill8(arg0, 0, arg3 * 2);
    na = func_ov123_02079808(arg1, arg3);
    nb = func_ov123_02079808(arg2, arg3);
    for (i = 0; i < nb; i++) {
        for (j = 0; j < na && j < arg3 - i; j++) {
            func_ov123_020794ac(arg0, arg1[j] * arg2[i], i + j, arg3);
        }
    }
}
