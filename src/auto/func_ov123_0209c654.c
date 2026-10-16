#include "m2c.h"

s32 func_ov123_0207bb48(s32, M2C_UNK, M2C_UNK *);   /* extern */
M2C_UNK func_ov123_0209c510();                      /* extern */
extern M2C_UNK data_ov123_020dd378;
extern void *data_ov123_020e18dc;

s32 func_ov123_0209c654(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_ov123_0207bb48(M2C_FIELD(data_ov123_020e18dc, s32 *, 4), arg0, &data_ov123_020dd378);
    func_ov123_0209c510();
    return temp_r4;
}
