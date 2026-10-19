/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(void *, void *, M2C_UNK);       /* extern */
s32 func_020213f0(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_ov123_02075d34(void *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_ov123_02075e1c(void *, M2C_UNK *, M2C_UNK); /* extern */

void func_ov123_02075c6c(void *arg0, s32 arg1) {
    u8 sp0[16];

    MI_CpuCopy8(arg0 + 0x3A4, arg0 + 0x3FC, 0x58);
    func_ov123_02075e1c(arg0, (void *) sp0, 1);
    MI_CpuCopy8(arg0 + 0x3FC, arg0 + 0x3A4, 0x58);
    if (func_020213f0(arg1, (void *) sp0, 0x10) != 0) {
        M2C_FIELD(arg0, s8 *, 0x455) = 9;
        return;
    }
    MI_CpuCopy8(arg0 + 0x2EC, arg0 + 0x348, 0x5C);
    func_ov123_02075d34(arg0, (void *) sp0, 1);
    MI_CpuCopy8(arg0 + 0x348, arg0 + 0x2EC, 0x5C);
    if (func_020213f0(arg1 + 0x10, (void *) sp0, 0x14) != 0) {
        M2C_FIELD(arg0, s8 *, 0x455) = 9;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x455) = 6;
}
