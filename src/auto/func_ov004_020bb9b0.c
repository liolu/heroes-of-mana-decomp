#include "m2c.h"

s32 func_ov004_020b9ecc();                          /* extern */
M2C_UNK func_ov004_020ba2bc(s32, s32, s32);         /* extern */
extern M2C_UNK data_ov004_020cd8a8;

void *func_ov004_020bb9b0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cd8a8;
    func_ov004_020ba2bc(func_ov004_020b9ecc(), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
    return arg0;
}
