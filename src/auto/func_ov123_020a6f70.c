/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a6778(M2C_UNK *);                 /* extern */
M2C_UNK func_ov123_020a68cc(s32, s32, s32);         /* extern */
M2C_UNK func_ov123_020a68d8(M2C_UNK *, s32, s32);   /* extern */
M2C_UNK func_ov123_020a6a90(M2C_UNK *, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov123_020a6dc0(s32, s32, s32, s32);    /* extern */
M2C_UNK func_ov123_020a6e28(s32, s32, s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020dd52c;
extern s32 data_ov123_020e20b4;

s32 func_ov123_020a6f70(M2C_UNK hunt_pad, s32 arg1, s32 arg2) {
    u8 spC[8];
    s32 temp_r4;

    temp_r4 = data_ov123_020e20b4;
    func_ov123_020a68cc(temp_r4, 0, 0x5DC);
    func_ov123_020a68d8((void *) spC, arg1 + 0x10, 8);
    func_ov123_020a6a90((void *) spC, 8, &data_ov123_020dd52c, func_ov123_020a6778(&data_ov123_020dd52c));
    func_ov123_020a6e28(temp_r4, 0x3000, 0, 0, 0, 0x11, (void *) spC);
    func_ov123_020a6dc0(temp_r4, 0x18, 0, arg2);
    return 0;
}
