/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_ov123_020a68cc(M2C_UNK *, s32, s32);   /* extern */
extern s32 data_ov123_020e20b0;
extern M2C_UNK data_ov123_020e20b8;
extern M2C_UNK data_ov123_020e20cc;

void func_ov123_020a800c(void *arg0) {
    func_ov123_020a68cc(&data_ov123_020e20b8, 0, 8);
    data_ov123_020e20b0 = 1;
    func_ov123_020a68cc(&data_ov123_020e20cc, 0, 0x1C);
    M2C_FIELD(&data_ov123_020e20cc, s32 *, 0)    = (s32) (arg0 + 6);
    M2C_FIELD(&data_ov123_020e20cc, s32 *, 4)    = (s32) M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(&data_ov123_020e20cc, s32 *, 8)    = (s32) (M2C_FIELD(arg0, u16 *, 0) & 0xF);
    M2C_FIELD(&data_ov123_020e20cc, u8 *, 0x19)  = (u8) M2C_FIELD(arg0, u8 *, 2);
    M2C_FIELD(&data_ov123_020e20cc, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_ov123_020e20cc, s32 *, 0x10) = 0xC0A80B01;
    M2C_FIELD(&data_ov123_020e20cc, s8 *, 0x18)  = 0;
}
