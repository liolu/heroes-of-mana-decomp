/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_ov123_020a9eec(void *, s32, s32);      /* extern */
M2C_UNK func_ov123_020a9f50(M2C_UNK *, void *, s32); /* extern */
M2C_UNK func_ov123_020aa838(void *, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_ov123_020dd5a0;

void func_ov123_020aa7dc(M2C_UNK *arg0, void *arg1) {
    u8 sp0[8];
    s32 var_r2;
    u32 temp_r1;

    func_ov123_020a9f50((void *) sp0, arg1 + 0x10, 8);
    temp_r1 = ((u32) M2C_FIELD(arg1, u32 *, 0x10) >> 3) & 0x3F;
    if (temp_r1 < 0x38U) {
        var_r2 = 0x38 - temp_r1;
    } else {
        var_r2 = 0x78 - temp_r1;
    }
    func_ov123_020aa838(arg1, &data_ov123_020dd5a0, var_r2);
    func_ov123_020aa838(arg1, (void *) sp0, 8);
    func_ov123_020a9f50(arg0, arg1, 0x10);
    func_ov123_020a9eec(arg1, 0, 0x58);
}
