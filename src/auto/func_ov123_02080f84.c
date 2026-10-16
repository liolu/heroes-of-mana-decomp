#include "m2c.h"

M2C_UNK func_ov123_0207e0f0(void **, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_0207e128(void **, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020da7d0;
extern M2C_UNK data_ov123_020da9c0;
extern M2C_UNK data_ov123_020da9d8;

s32 func_ov123_02080f84(void **arg0, M2C_UNK arg1) {
    void *temp_r4;

    temp_r4 = *arg0;
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x448) > 0) {
        func_ov123_0207e128(arg0, arg1, &data_ov123_020da9c0);
        func_ov123_0207e0f0(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x198));
        func_ov123_0207e128(arg0, arg1, M2C_FIELD(temp_r4, M2C_UNK **, 0x440));
        func_ov123_0207e128(arg0, arg1, &data_ov123_020da7d0);
        M2C_FIELD(temp_r4, s32 *, 0x448) = 0;
    }
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x458) > 0) {
        func_ov123_0207e128(arg0, arg1, &data_ov123_020da9d8);
        func_ov123_0207e0f0(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x198));
        func_ov123_0207e128(arg0, arg1, M2C_FIELD(temp_r4, M2C_UNK **, 0x450));
        func_ov123_0207e128(arg0, arg1, &data_ov123_020da7d0);
        M2C_FIELD(temp_r4, s32 *, 0x458) = 0;
    }
    return 0;
}
