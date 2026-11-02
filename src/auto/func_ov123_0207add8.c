/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02073ca4(void *, void *, void *, void *, u8 *);
M2C_UNK func_ov123_0207af6c(s32, M2C_UNK);

void func_ov123_0207add8(void *arg0, void *arg1, void *arg2, void *arg3, u8 *arg4, s32 *arg5) {
    s32 temp_r0;
    *arg4   = (u8) *arg5;
    temp_r0 = func_ov123_02073ca4(arg0, arg1, arg2, arg3, arg4);
    *arg5   = (s32) *arg4;
    func_ov123_0207af6c(temp_r0, -1);
}
