#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0208ab90(void *);                /* extern */
extern M2C_UNK data_ov123_020db4f0;
extern M2C_UNK data_ov123_020db4f8;

s32 func_ov123_02087f40(void *arg0) {
    if (arg0 == NULL) {
        func_02020d04(&data_ov123_020db4f0, &data_ov123_020db4f8, 0, 0x1B);
    }
    if (arg0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x24) == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x24)(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
    if ((M2C_FIELD(arg0, s32 *, 0x14) != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        func_ov123_0208ab90(arg0);
        return 0;
    }
    return 1;
}
