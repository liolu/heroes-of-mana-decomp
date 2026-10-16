#include "m2c.h"

M2C_UNK func_ov123_02069a04(s32, u8, u8, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_ov123_020c8cb8(M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_020c8e38(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020c8ec0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020c8f80(M2C_UNK, M2C_UNK);          /* extern */

void func_ov123_020c98d8(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r5;

    temp_r5 = func_ov123_020c8f80(arg3, 0);
    func_ov123_020c8ec0(arg3, -1, 0, 0);
    func_ov123_020c8e38(arg3, -1, 0, 0xF);
    func_ov123_020c8cb8(arg3, -1, arg4);
    func_ov123_02069a04(temp_r5, M2C_FIELD(arg0, u8 *, 0x36), M2C_FIELD(arg0, u8 *, 0x37), arg1, arg2, 0,
                        (s32) M2C_FIELD(arg0, u16 *, 0x34), 2);
}
