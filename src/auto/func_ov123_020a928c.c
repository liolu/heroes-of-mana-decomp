/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void MIi_CpuClear16(u16 value, void *dst, u32 size);
void MI_CpuCopy8(void *src, void *dst, u32 size);

void func_ov123_020a928c(u8 *arg0, u8 *arg1) {
    volatile u16 zero = 0;

    MIi_CpuClear16(zero, arg1 + 0xC, 0x20);
    *(u16 *) (arg1 + 0xA) = (u16) * (u32 *) arg0;
    MI_CpuCopy8(arg0 + 4, arg1 + 0xC, *(u16 *) (arg1 + 0xA));
}
