/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_02068648(s32, M2C_UNK *);            /* extern */
s32 func_ov123_020688f4(s32, s32);                  /* extern */
extern s32 data_ov123_020e2fe0;
extern s32 data_ov123_020e2fe8;
extern s32 data_ov123_020e2ff8;
extern s32 data_ov123_020e2ffc;
extern s32 data_ov123_020e3000;
extern s32 data_ov123_020e3004;
extern M2C_UNK func_ov123_020a97d8;

s32 func_ov123_020a9360(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r4;

    temp_r4                                    = func_0200fa98();
    data_ov123_020e3004                        = arg1;
    temp_r2                                    = (arg1 + 0x53) & ~3;
    data_ov123_020e2fe8                        = temp_r2;
    temp_r1                                    = (temp_r2 + 0x2F) & ~0x1F;
    data_ov123_020e2fe0                        = temp_r1;
    temp_r1_2                                  = (temp_r1 + 0x231F) & ~0x1F;
    data_ov123_020e3000                        = temp_r1_2;
    M2C_FIELD(temp_r2, s32 *, 4)               = (s32) ((temp_r1_2 + 0xDF) & ~0x1F);
    M2C_FIELD(data_ov123_020e2fe8, s32 *, 8)   = (s32) ((arg1 + arg2) - M2C_FIELD(data_ov123_020e2fe8, s32 *, 4));
    M2C_FIELD(data_ov123_020e2fe8, s32 *, 0xC) = 0;
    M2C_FIELD(data_ov123_020e2fe8, s32 *, 0)   = 3;
    data_ov123_020e2ffc                        = arg0;
    if (data_ov123_020e2ff8 == 0) {
        if (func_ov123_020688f4(data_ov123_020e2fe0, 0x2300) != 0) {
            func_0200faac(temp_r4);
            return 0;
        }
        data_ov123_020e2ff8 = 1;
        goto block_4;
    }
block_4:
    if (data_ov123_020e2ff8 == 1) {
        if (func_ov123_02068648(data_ov123_020e2fe8, &func_ov123_020a97d8) != 3) {
            func_0200faac(temp_r4);
            return 0;
        }
        data_ov123_020e2ff8 = 4;
        func_0200faac(temp_r4);
        return 1;
    }
    func_0200faac(temp_r4);
    return 0;
}
