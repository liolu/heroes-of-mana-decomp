#include "m2c.h"

void *func_0202f3f8(M2C_UNK);                       /* extern */
extern M2C_UNK data_ov004_020ced20;

void func_ov004_020c6a1c(void) {
    void *temp_r0;

    temp_r0 = func_0202f3f8(0x38);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_ov004_020ced20;
    M2C_FIELD(temp_r0, s32 *, 0x1C)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x20)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24)   = 0;
}
