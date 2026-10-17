/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0200f510();                            /* extern */
M2C_UNK func_ov123_020a593c(void *);                /* extern */
s32 func_ov123_020c2d6c();                          /* extern */
M2C_UNK func_ov123_020c63b4(void *);                /* extern */
M2C_UNK func_ov123_020c7a60();                      /* extern */
extern void *data_ov123_020e470c;

void func_ov123_020c86e0(void *arg0, void *arg1) {
    data_ov123_020e470c = arg0;
    func_ov123_020c63b4(arg0 + 0xB00);
    M2C_FIELD(data_ov123_020e470c, s16 *, 0x648) = 0;
    M2C_FIELD(data_ov123_020e470c, s16 *, 0x64A) = 0;
    M2C_FIELD(data_ov123_020e470c, s8 *, 0xA90)  = 1;
    M2C_FIELD(data_ov123_020e470c, s8 *, 0xA91)  = 1;
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xA9C) = 0;
    func_ov123_020c7a60();
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xAB4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xAB8) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xABC) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xAC0) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xAC4) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xAC8) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(data_ov123_020e470c, u8 *, 0xA92)  = (u8) M2C_FIELD(arg1, u8 *, 0x18);
    M2C_FIELD(data_ov123_020e470c, s8 *, 0xACC)  = 2;
    func_0200f510();
    func_ov123_020a593c(data_ov123_020e470c + 0x64C);
    func_0200f510();
    M2C_FIELD(data_ov123_020e470c, s32 *, 0xAA4) = func_ov123_020c2d6c();
}
