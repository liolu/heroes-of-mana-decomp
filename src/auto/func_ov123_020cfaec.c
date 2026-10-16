#include "m2c.h"

M2C_UNK func_0202f64c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020dea98;
extern M2C_UNK func_ov123_020cf9fc;
extern M2C_UNK func_ov123_020cfa24;

void *func_ov123_020cfaec(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020dea98;
    func_0202f64c(arg0 + 8, 5, 0x28, &func_ov123_020cf9fc, &func_ov123_020cfa24);
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    return arg0;
}
