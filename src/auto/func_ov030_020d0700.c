#include "m2c.h"

M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *data_ov000_02051548;

void func_ov030_020d0700(void) {
    ObjSet(0x2C, 0xE, 0xD, 0);
    ObjSet(0x2C, 0x19, 0, 0);
    ObjSet(0x2C, 0x1C, 0, 0);
    ObjSet(0x2C, 0xE, 0xE, 0);
    ObjSet(0x2C, 0x1B, 1, 0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) | 0x200000);
}
