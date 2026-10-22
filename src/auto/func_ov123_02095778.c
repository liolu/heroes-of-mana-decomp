#include "m2c.h"

M2C_UNK func_ov123_02096ca8();
extern M2C_UNK data_ov123_020dc01c;
extern void *data_ov123_020e1678;

void func_ov123_02095778(void) {
    M2C_UNK (*temp_r4)(M2C_UNK *, void *, M2C_UNK);
    u8 *base;
    s32 t;

    if (data_ov123_020e1678 == NULL) {
        return;
    }
    base    = (u8 *) data_ov123_020e1678 + 0x1000;
    temp_r4 = M2C_FIELD(base, M2C_UNK(**)(M2C_UNK *, void *, M2C_UNK), 0x210);
    t       = M2C_FIELD(base, s32 *, 0x314);
    if (t != 0) {
        func_ov123_02096ca8();
    }
    temp_r4(&data_ov123_020dc01c, data_ov123_020e1678, 0);
    data_ov123_020e1678 = NULL;
}
