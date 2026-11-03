/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 *func_ov123_0209d368(void);
void MIi_CpuCopy32(void *src, void *dst, u32 size);

void func_ov123_020a04d8(s32 arg0, s32 *arg1) {
    u32 n = (u32) (*arg1 + 2);
    u8 *dst;

    if (n > 2) {
        dst = func_ov123_0209d368() + 0x350;
        MIi_CpuCopy32(arg1 + 1, dst, (n - 2) * 4);
    }
    *(s32 *) (func_ov123_0209d368() + 0x348) = (s32) (n - 1);
    *(s32 *) (func_ov123_0209d368() + 0x34C) = arg0;
}
