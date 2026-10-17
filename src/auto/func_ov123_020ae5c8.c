#include "m2c.h"

M2C_UNK func_02024d0c(M2C_UNK *, void *, M2C_UNK);  /* extern */
s32 func_ov123_020b2388();                          /* extern */
extern M2C_UNK data_ov123_020d79b8;
extern M2C_UNK data_ov123_020e4570;

M2C_UNK *func_ov123_020ae5c8(void *arg0) {
    s32 temp_r0;

    func_02024d0c(&data_ov123_020e4570, arg0, 0x3F);
    if (M2C_FIELD(arg0, u8 *, 5) == 0x78) {
        return &data_ov123_020e4570;
    }
    temp_r0 = func_ov123_020b2388();
    if ((M2C_FIELD(arg0, u8 *, 5) == 0x79) && (temp_r0 != 0)) {
        return &data_ov123_020e4570;
    }
    M2C_FIELD(&data_ov123_020e4570, u8 *, 5) = (u8) * ((u8 *) &data_ov123_020d79b8 + temp_r0);
    return &data_ov123_020e4570;
}
