/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_020717b0(M2C_UNK, u16, s32);     /* extern */

void func_ov123_02073d8c(M2C_UNK arg0, void *arg1) {
    u16 temp_r2;
    u32 temp_lr;

    temp_r2 = M2C_FIELD(arg1, u16 *, 2);
    temp_lr = M2C_FIELD(arg1, u32 *, 4);
    func_ov123_020717b0(arg0, (u16) ((u8) ((s32) temp_r2 >> 8) | ((temp_r2 << 8) & 0xFF00)),
                        ((temp_lr << 0x18) & 0xFF000000) |
                            (((temp_lr << 8) & 0xFF0000) | ((u8) (temp_lr >> 0x18) | ((temp_lr >> 8) & 0xFF00))));
}
