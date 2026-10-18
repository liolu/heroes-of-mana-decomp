/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02072870(M2C_UNK, M2C_UNK, M2C_UNK, u16, s32, s32); /* extern */

void func_ov123_02073bd0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, void *arg4) {
    s32 var_r4;
    u16 temp_r4;
    u16 var_r5;
    u32 temp_r6;

    if (!(arg4 == NULL)) {
        temp_r4 = M2C_FIELD(arg4, u16 *, 2);
        temp_r6 = M2C_FIELD(arg4, u32 *, 4);
        var_r5  = (u8) ((s32) temp_r4 >> 8) | ((temp_r4 << 8) & 0xFF00);
        var_r4  = ((temp_r6 << 0x18) & 0xFF000000) |
                 (((temp_r6 << 8) & 0xFF0000) | ((u8) (temp_r6 >> 0x18) | ((temp_r6 >> 8) & 0xFF00)));
    } else {
        var_r5 = 0;
        var_r4 = 0;
    }
    func_ov123_02072870(arg0, arg1, arg2, var_r5, var_r4, arg3);
}
