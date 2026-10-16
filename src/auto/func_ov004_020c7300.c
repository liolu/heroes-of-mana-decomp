#include "m2c.h"

void *func_0202f3f8(M2C_UNK);                       /* extern */
M2C_UNK func_ov004_020c295c();                      /* extern */
extern M2C_UNK data_ov004_020ce6dc;
extern M2C_UNK data_ov004_020ce758;
extern M2C_UNK data_ov004_020ce99c;
extern M2C_UNK data_ov004_020cef8c;

void *func_ov004_020c7300(void) {
    void *temp_r0;

    temp_r0 = func_0202f3f8(0x78);
    if (temp_r0 != NULL) {
        func_ov004_020c295c();
        M2C_FIELD(temp_r0, M2C_UNK **, 0)    = &data_ov004_020cef8c;
        M2C_FIELD(temp_r0, M2C_UNK **, 0x10) = &data_ov004_020ce99c;
        M2C_FIELD(temp_r0, M2C_UNK **, 0x1C) = &data_ov004_020ce758;
        M2C_FIELD(temp_r0, M2C_UNK **, 0x20) = &data_ov004_020ce6dc;
        M2C_FIELD(temp_r0, s32 *, 0x2C)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x30)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x34)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x2C)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x30)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x34)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x38)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x3C)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x40)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x38)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x3C)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x40)      = 0;
        M2C_FIELD(temp_r0, M2C_UNK **, 0x48) = &data_ov004_020ce6dc;
        M2C_FIELD(temp_r0, s32 *, 0x54)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x58)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x5C)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x54)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x58)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x5C)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x60)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x64)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x68)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x60)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x64)      = 0;
        M2C_FIELD(temp_r0, s32 *, 0x68)      = 0;
    }
    return temp_r0;
}
