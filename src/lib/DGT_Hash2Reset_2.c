#include "m2c.h"

void DGT_Hash2Reset(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = 0x67452301;
    M2C_FIELD(arg0, s32 *, 4)    = 0xEFCDAB89;
    M2C_FIELD(arg0, s32 *, 8)    = 0x98BADCFE;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0x10325476;
    M2C_FIELD(arg0, s32 *, 0x10) = 0xC3D2E1F0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
