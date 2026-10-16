#include "m2c.h"

extern M2C_UNK data_ov123_020de904;
extern M2C_UNK data_ov123_020dec7c;
extern M2C_UNK data_ov123_020deccc;
extern M2C_UNK data_ov123_020ded24;

void func_ov123_020d0538(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020dec7c;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020de904;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020deccc;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020ded24;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s8 *, 0xC)     = 0;
}
