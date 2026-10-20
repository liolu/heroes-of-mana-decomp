/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(u16, void *, u32);           /* extern */

void func_ov123_020a5bb0(u8 *arg0, s32 arg1) {
    MIi_CpuClear16(0, arg0 + (arg1 << 8), 0x100);
    arg0[(arg1 << 8) + 0xE7] = 0xFF;
}
