#include "m2c.h"

s32 MATH_CalcCRC32(u32 *, void *, M2C_UNK);          /* extern */
M2C_UNK MATHi_CRC32InitTableRev(u32 *, s32);        /* extern */

s32 func_ov123_020945b4(void *arg0) {
    u32 table[0x100];
    s32 crc;

    MATHi_CRC32InitTableRev(table, 0xEDB88320);
    crc = MATH_CalcCRC32(table, arg0, 0x3C);
    if (crc == M2C_FIELD(arg0, s32 *, 0x3C)) {
        return 1;
    }
    return 0;
}
