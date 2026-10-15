#include "m2c.h"

M2C_UNK MATHi_CRC8Update(M2C_UNK, u8 *, M2C_UNK, M2C_UNK);
M2C_UNK MATHi_CRC16UpdateRev(M2C_UNK, u16 *, M2C_UNK, M2C_UNK);
M2C_UNK MATHi_CRC32UpdateRev(M2C_UNK, s32 *, M2C_UNK, M2C_UNK);

u8 MATH_CalcCRC8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0;

    sp0 = 0;
    MATHi_CRC8Update(arg0, &sp0, arg1, arg2);
    return sp0;
}

u16 MATH_CalcCRC16(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp0;

    sp0 = 0;
    MATHi_CRC16UpdateRev(arg0, &sp0, arg1, arg2);
    return sp0;
}

s32 MATH_CalcCRC32(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp0;

    sp0 = -1;
    MATHi_CRC32UpdateRev(arg0, &sp0, arg1, arg2);
    return ~sp0;
}
