#include "m2c.h"

void *func_0202f3f8(M2C_UNK);                       /* extern */
M2C_UNK func_ov004_020b972c(void *);                /* extern */
extern M2C_UNK data_ov004_020ce858;

void *func_ov004_020c4f60(void) {
    void *temp_r0;

    temp_r0 = func_0202f3f8(0x60);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_ov004_020ce858;
        func_ov004_020b972c(temp_r0 + 0x18);
        M2C_FIELD(temp_r0, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x50) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x54) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x50) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x54) = 0;
    }
    return temp_r0;
}
