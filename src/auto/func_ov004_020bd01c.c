#include "m2c.h"

void *func_0202f3f8(M2C_UNK);                       /* extern */
extern M2C_UNK data_ov004_020cdbb8;

void func_ov004_020bd01c(void) {
    void *temp_r0;

    temp_r0 = func_0202f3f8(0x14);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_ov004_020cdbb8;
    M2C_FIELD(temp_r0, s32 *, 0xC)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10)   = 0;
}
