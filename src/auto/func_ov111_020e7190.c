#include "m2c.h"

s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov111_020f0298;
extern M2C_UNK data_ov111_020f1298;
extern void *data_ov111_020f1bd8;

void func_ov111_020e7190(void) {
    M2C_FIELD(&data_ov111_020f0298, s32 *, 0x8DC) = 0;
    M2C_FIELD(&data_ov111_020f0298, s32 *, 0x8D8) = func_ov111_020e5d98(1);
    M2C_FIELD(&data_ov111_020f0298, s32 *, 0x8CC) = (s32) ((M2C_FIELD(&data_ov111_020f0298, s32 *, 0x8CC) & ~1) | 3);
    M2C_FIELD(&data_ov111_020f1298, s32 *, 0xFC)  = 0;
    M2C_FIELD(&data_ov111_020f1298, s32 *, 0xF8)  = func_ov111_020e5d98(1);
    M2C_FIELD(&data_ov111_020f1298, s32 *, 0xEC)  = (s32) ((M2C_FIELD(&data_ov111_020f1298, s32 *, 0xEC) & ~1) | 3);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C)  = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 3);
}
