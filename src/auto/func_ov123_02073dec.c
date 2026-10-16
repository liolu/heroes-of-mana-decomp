#include "m2c.h"

M2C_UNK func_ov123_020718b4(M2C_UNK, u16);          /* extern */

void func_ov123_02073dec(M2C_UNK arg0, void *arg1) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u16 *, 2);
    func_ov123_020718b4(arg0, (u16) ((u8) ((s32) temp_r1 >> 8) | ((temp_r1 << 8) & 0xFF00)));
}
