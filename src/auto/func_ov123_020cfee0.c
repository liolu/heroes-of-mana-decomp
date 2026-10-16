#include "m2c.h"

M2C_UNK func_0202f64c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_ov123_020cfd90(void *);                /* extern */
extern M2C_UNK data_ov123_020debf4;
extern M2C_UNK func_ov123_020cfc58;
extern M2C_UNK func_ov123_020cfca0;

void *func_ov123_020cfee0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020debf4;
    func_0202f64c(arg0 + 4, 5, 0x1B8, &func_ov123_020cfc58, &func_ov123_020cfca0);
    func_0202f64c(arg0 + 0x89C, 5, 0x1B8, &func_ov123_020cfc58, &func_ov123_020cfca0);
    func_ov123_020cfd90(arg0 + 0x1134);
    M2C_FIELD(arg0, s32 *, 0x4D40) = 0;
    M2C_FIELD(arg0, s32 *, 0x4D44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4D48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4D4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x4D50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4D54) = 0;
    M2C_FIELD(arg0, s16 *, 0x4D38) = 0;
    M2C_FIELD(arg0, s16 *, 0x4D3A) = 0;
    M2C_FIELD(arg0, s8 *, 0x4D3C)  = 0;
    return arg0;
}
