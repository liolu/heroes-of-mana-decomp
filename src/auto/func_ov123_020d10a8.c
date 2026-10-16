#include "m2c.h"

M2C_UNK func_0202f49c(s32);                         /* extern */
M2C_UNK func_0202f78c(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_ov123_020d0a90;
extern M2C_UNK func_ov123_020d0cdc;

void *func_ov123_020d10a8(void *arg0) {
    func_0202f49c(M2C_FIELD(arg0, s32 *, 0x588));
    func_0202f78c(arg0 + 0x39C, 5, 0x60, &func_ov123_020d0cdc);
    func_0202f78c(arg0 + 0x1BC, 5, 0x60, &func_ov123_020d0cdc);
    func_0202f78c(arg0 + 0x40, 5, 0x4C, &func_ov123_020d0a90);
    return arg0;
}
