#include "m2c.h"

void *func_0202f3f8(M2C_UNK);                       /* extern */
extern M2C_UNK data_ov004_020cdc9c;

void func_ov004_020bd3d8(void) {
    void *temp_r0;

    temp_r0 = func_0202f3f8(0x28);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_ov004_020cdc9c;
    M2C_FIELD(temp_r0, s32 *, 4)      = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0x14)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24)   = 0;
}
