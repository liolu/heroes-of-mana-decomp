#include "m2c.h"

M2C_UNK MIi_CpuCopyFast(M2C_UNK, s32, M2C_UNK);     /* extern */
s32 *func_ov123_020ca4ec(s32, M2C_UNK);             /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 *data_ov123_020e46bc;
extern M2C_UNK func_ov123_020c1c88;

void func_ov123_020c1d88(M2C_UNK arg0) {
    s32 *temp_r0;

    temp_r0             = func_ov123_020ca4ec(0x608, 4);
    data_ov123_020e46bc = temp_r0;
    MIi_CpuCopyFast(arg0, ((void *) ((u8 *) temp_r0 + 4)), 0x600);
    *data_ov123_020e46bc = func_ov123_020cb6ac(1, &func_ov123_020c1c88, 0, 0x78);
}
