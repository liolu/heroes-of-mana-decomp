/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02077ef4(void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov123_02078718(M2C_UNK *, void *, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020d9aac;

void func_ov123_02077e80(void *arg0, M2C_UNK *arg1) {
    s32 temp_r0;
    s32 var_r2;

    func_ov123_02078718(arg1, arg0 + 0x14, 8);
    temp_r0 = ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 3) & 0x3F;
    if (temp_r0 < 0x38) {
        var_r2 = 0x38 - temp_r0;
    } else {
        var_r2 = 0x78 - temp_r0;
    }
    func_ov123_02077ef4(arg0, &data_ov123_020d9aac, var_r2);
    func_ov123_02077ef4(arg0, arg1, 8);
    func_ov123_02078718(arg1, arg0, 0x14);
}
