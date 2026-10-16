#include "m2c.h"

M2C_UNK func_0202f45c(s32);                         /* extern */
extern M2C_UNK data_ov004_020ce6fc;

void *func_ov004_020c3790(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ce6fc;
    func_0202f45c(M2C_FIELD(arg0, s32 *, 0x44));
    return arg0;
}
