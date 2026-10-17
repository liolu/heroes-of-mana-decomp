#include "m2c.h"

M2C_UNK MIi_CpuCopyFast(s32, s32, M2C_UNK);         /* extern */
s32 func_ov123_020ae5c8(s32);                       /* extern */
M2C_UNK func_ov123_020c8840(s32);                   /* extern */
s32 func_ov123_020c887c(s32, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020dd824;
extern s32 data_ov123_020e45b4;
extern M2C_UNK func_ov123_020ae858;

void func_ov123_020ae8d8(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_ov123_020c887c(func_ov123_020ae5c8(*(s32 *) ((u8 *) &data_ov123_020dd824 + (arg0 * 4))), 0, 4);
    MIi_CpuCopyFast(temp_r0, data_ov123_020e45b4, 0xC0);
    func_ov123_020c8840(temp_r0);
    func_ov123_020cb6ac(1, &func_ov123_020ae858, 0, 0x78);
}
