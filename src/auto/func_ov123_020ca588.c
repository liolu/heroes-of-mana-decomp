#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
s32 func_02007c48(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0200fddc();                            /* extern */
extern s32 data_ov123_020e4728;

void func_ov123_020ca588(M2C_UNK arg0) {
    s32 temp_r0;

    MI_CpuFill8(arg0, 0, 0x40000);
    temp_r0             = func_02007c48(arg0, 0x40000, 0);
    data_ov123_020e4728 = temp_r0;
    if (temp_r0 != 0) {
        return;
    }
    func_0200fddc();
}
