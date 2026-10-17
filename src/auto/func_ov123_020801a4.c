/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207e0f0(void **, void *, s32);  /* extern */
M2C_UNK func_ov123_0207e128(void **, void *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020da7a4;
extern M2C_UNK data_ov123_020da7bc;
extern M2C_UNK data_ov123_020da7c8;
extern M2C_UNK data_ov123_020da7d0;

s32 func_ov123_020801a4(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020da7a4);
    func_ov123_0207e0f0(arg0, temp_r4 + 0x1F4, M2C_FIELD(temp_r4, s32 *, 0x198));
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020da7bc);
    func_ov123_0207e0f0(arg0, temp_r4 + 0x1F4, arg1);
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020da7c8);
    func_ov123_0207e0f0(arg0, temp_r4 + 0x1F4, arg2);
    func_ov123_0207e128(arg0, temp_r4 + 0x1F4, &data_ov123_020da7d0);
    return 0;
}
