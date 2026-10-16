#include "m2c.h"

M2C_UNK func_ov123_020d08a4(void *);                /* extern */
extern M2C_UNK data_ov123_020de904;
extern M2C_UNK data_ov123_020dec7c;
extern M2C_UNK data_ov123_020deed4;
extern M2C_UNK data_ov123_020def00;

void *func_ov123_020d0c60(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020dec7c;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020de904;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020deed4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov123_020def00;
    func_ov123_020d08a4(arg0 + 0x30);
    func_ov123_020d08a4(arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
