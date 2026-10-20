#include "m2c.h"

s32 MATH_CalcCRC32(M2C_UNK *, void *, M2C_UNK);     /* extern */
M2C_UNK MATHi_CRC32InitTableRev(M2C_UNK *, s32);    /* extern */

void func_ov123_02094450(void *arg0) {
    M2C_UNK table[0x100];

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~1);
    MATHi_CRC32InitTableRev(table, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = MATH_CalcCRC32(table, arg0, 0x3C);
}