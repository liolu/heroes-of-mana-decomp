#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0207a350(s32 *, M2C_UNK, s32);   /* extern */
M2C_UNK func_ov123_0207a3d8(s32 *, s32);            /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b24;

void func_ov123_02079ec0(s32 *arg0, M2C_UNK arg1, s32 arg2) {
    if ((arg2 < 0) || (arg2 >= (s32) *arg0)) {
        func_02020d04(&data_ov123_020d9b24, &data_ov123_020d9b18, 0, 0xD3);
    }
    func_ov123_0207a3d8(arg0, arg2);
    func_ov123_0207a350(arg0, arg1, arg2);
}
