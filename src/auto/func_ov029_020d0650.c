#include "m2c.h"

M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(s32);                   /* extern */
extern void *data_ov000_02051548;

void func_ov029_020d0650(void) {
    ObjSet(0x2C, 0x1C, 1, 0x10C);
    ObjSet(0x2C, 0x19, 0x42, 0);
    ObjSet(0x2C, 0x1B, 0, 0);
    ObjSet(0x2C, 0xE, 0xF, 0);
    Routine_SoundEffect(0x16E);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x68) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) ^ 0x200000);
}
