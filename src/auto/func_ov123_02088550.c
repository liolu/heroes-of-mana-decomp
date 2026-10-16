#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK data_ov123_020db52c;
extern M2C_UNK data_ov123_020db538;

s32 func_ov123_02088550(void *arg0) {
    if (arg0 == NULL) {
        func_02020d04(&data_ov123_020db52c, &data_ov123_020db538, 0, 0x1AA);
    }
    return M2C_FIELD(arg0, s32 *, 0x40);
}
