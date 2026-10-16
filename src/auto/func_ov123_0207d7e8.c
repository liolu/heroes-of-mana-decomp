#include "m2c.h"

M2C_UNK func_ov123_0207e0f0(void **, void *, s32);  /* extern */
M2C_UNK func_ov123_0207e128(void **, void *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020d9f98;
extern M2C_UNK data_ov123_020d9fb4;
extern M2C_UNK data_ov123_020da094;
extern M2C_UNK data_ov123_020da0a0;
extern M2C_UNK data_ov123_020da0b0;

s32 func_ov123_0207d7e8(void **arg0, void *arg1) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020da094);
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020d9f98);
    func_ov123_0207e0f0(arg0, temp_r4 + 0x1F4, M2C_FIELD(temp_r4, s32 *, 0x198));
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020da0a0);
    func_ov123_0207e0f0(arg0, temp_r4 + 0x1F4, M2C_FIELD(arg1, s32 *, 0));
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020da0b0);
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, M2C_FIELD(arg1, M2C_UNK **, 0x10));
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020d9fb4);
    return 0;
}
