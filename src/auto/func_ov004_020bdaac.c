#include "m2c.h"

extern M2C_UNK data_ov004_020cdea8;

void func_ov004_020bdaac(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cdea8;
    M2C_FIELD(arg0, u8 *, 8)       = 0;
    M2C_FIELD(arg0, u8 *, 9)       = 0;
    M2C_FIELD(arg0, u8 *, 0xA)     = 0;
    M2C_FIELD(arg0, u8 *, 0xB)     = 0xFF;
}
