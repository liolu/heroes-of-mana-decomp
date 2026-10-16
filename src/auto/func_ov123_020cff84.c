#include "m2c.h"

M2C_UNK func_0202f49c(s32);                         /* extern */
M2C_UNK func_0202f78c(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_ov123_020cfdf0(void *);                /* extern */
extern M2C_UNK func_ov123_020cfca0;

void *func_ov123_020cff84(void *arg0) {
    func_0202f49c(M2C_FIELD(arg0, s32 *, 0x4D54));
    func_0202f49c(M2C_FIELD(arg0, s32 *, 0x4D48));
    func_ov123_020cfdf0(arg0 + 0x1134);
    func_0202f78c(arg0 + 0x89C, 5, 0x1B8, &func_ov123_020cfca0);
    func_0202f78c(arg0 + 4, 5, 0x1B8, &func_ov123_020cfca0);
    return arg0;
}
