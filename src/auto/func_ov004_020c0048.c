#include "m2c.h"

void *func_0202f3f8(M2C_UNK);                       /* extern */
extern M2C_UNK data_ov004_020ce41c;
extern M2C_UNK data_ov004_020ce458;

void func_ov004_020c0048(void) {
    void *temp_r0;

    temp_r0 = func_0202f3f8(0x1C);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, M2C_UNK **, 0)    = &data_ov004_020ce458;
    M2C_FIELD(temp_r0, M2C_UNK **, 4)    = &data_ov004_020ce41c;
    M2C_FIELD(temp_r0, s32 *, 8)         = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)       = 0;
    M2C_FIELD(temp_r0, M2C_UNK **, 0x10) = &data_ov004_020ce41c;
    M2C_FIELD(temp_r0, s32 *, 0x14)      = 0;
    M2C_FIELD(temp_r0, s32 *, 0x18)      = 0;
}
