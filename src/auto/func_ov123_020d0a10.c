#include "m2c.h"

M2C_UNK func_ov123_020d08a4(void *);                /* extern */
extern M2C_UNK data_ov123_020de904;
extern M2C_UNK data_ov123_020dec7c;
extern M2C_UNK data_ov123_020dee30;
extern M2C_UNK data_ov123_020dee64;

void *func_ov123_020d0a10(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020dec7c;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020de904;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020dee30;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020dee64;
    func_ov123_020d08a4(arg0 + 0x1C);
    func_ov123_020d08a4(arg0 + 0x34);
    M2C_FIELD(arg0, s16 *, 8)    = 0x7F;
    M2C_FIELD(arg0, s16 *, 0xA)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x16)  = 0;
    M2C_FIELD(arg0, s8 *, 0x17)  = 0;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1A)  = 0;
    M2C_FIELD(arg0, s8 *, 0x1B)  = 0;
    return arg0;
}
