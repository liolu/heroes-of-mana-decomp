#include "m2c.h"

extern M2C_UNK data_ov123_020de904;
extern M2C_UNK data_ov123_020dec7c;
extern M2C_UNK data_ov123_020ded94;
extern M2C_UNK data_ov123_020dedc0;

void func_ov123_020d08a4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020dec7c;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020de904;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020ded94;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020dedc0;
    M2C_FIELD(arg0, s16 *, 8)      = 0;
    M2C_FIELD(arg0, s16 *, 0xA)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s16 *, 0x14)   = 0;
    M2C_FIELD(arg0, s16 *, 0x16)   = 0;
}
