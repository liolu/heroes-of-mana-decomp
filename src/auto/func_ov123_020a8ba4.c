/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK func_ov123_020a682c(s32);                   /* extern */
M2C_UNK func_ov123_020a7c7c(s32);                   /* extern */
M2C_UNK func_ov123_020a8060();                      /* extern */
s32 func_ov123_020a80b8(void *);                    /* extern */
M2C_UNK func_ov123_020a8cac(s32);                   /* extern */
s32 func_ov123_020a8cc0(s32);                       /* extern */
extern s32 data_ov123_020dd4c8;
extern s32 data_ov123_020e20b4;
extern s32 data_ov123_020e2e6c;
extern s32 data_ov123_020e2e78;

s32 func_ov123_020a8ba4(void *arg0) {
    s16 temp_r1;
    s16 temp_r1_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    u16 temp_r2;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x106);
    if ((temp_r1 == 0) || (var_r0 = 0, ((s32) temp_r1 < -1)) || ((s32) M2C_FIELD(arg0, s16 *, 0x108) < -1) ||
        (temp_r1_2 = M2C_FIELD(arg0, s16 *, 0x10A), (temp_r1_2 == 0)) || ((s32) temp_r1_2 < -1) ||
        ((s32) M2C_FIELD(arg0, s16 *, 0x10C) < -1) || ((s32) M2C_FIELD(arg0, s16 *, 0x10E) < -1) ||
        (temp_r2 = M2C_FIELD(arg0, u16 *, 4), (temp_r2 == 0)) || ((u32) temp_r2 > 0x100U) ||
        (M2C_FIELD((arg0 + (temp_r2 - 1)), u8 *, 6) != 0)) {
        var_r0 = -1;
    }
    if ((data_ov123_020e2e6c == 0) || (data_ov123_020e2e78 == 0)) {
        var_r0 = -1;
    }
    if (var_r0 == -1) {
        M2C_FIELD(arg0, s8 *, 0x116) = 0xF;
        func_ov123_020a8060();
        return -1;
    }
    temp_r0             = func_ov123_020a8cc0(0x5F8);
    data_ov123_020e20b4 = temp_r0;
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s8 *, 0x116) = 0xF;
        func_ov123_020a8060();
        return -1;
    }
    func_ov123_020a7c7c(-1);
    temp_r4 = func_ov123_020a80b8(arg0);
    func_ov123_020a8cac(data_ov123_020e20b4);
    func_ov123_020a8060();
    if (data_ov123_020dd4c8 != -1) {
        func_ov123_020a682c(data_ov123_020dd4c8);
    }
    return temp_r4;
}
