#include "m2c.h"

void *func_0202f3f8(M2C_UNK);                       /* extern */
M2C_UNK func_ov004_020c295c();                      /* extern */
extern M2C_UNK data_ov004_020cee00;

void *func_ov004_020c6d80(void) {
    void *temp_r0;

    temp_r0 = func_0202f3f8(0x1C);
    if (temp_r0 != NULL) {
        func_ov004_020c295c();
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_ov004_020cee00;
        M2C_FIELD(temp_r0, s32 *, 0x10)   = 0;
        M2C_FIELD(temp_r0, s32 *, 0x14)   = 0;
        M2C_FIELD(temp_r0, s32 *, 0x18)   = 0;
    }
    return temp_r0;
}
