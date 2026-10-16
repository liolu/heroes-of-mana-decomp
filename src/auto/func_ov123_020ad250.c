/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32, s32);                 /* extern */
M2C_UNK MI_CpuFill8(s32, s32, s32);                 /* extern */
M2C_UNK MIi_CpuCopy32(s32, s32, s32);               /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_02068034(s32, s32, s32);             /* extern */
s32 func_ov123_020ad500();                          /* extern */
extern s32 data_ov123_020e3058;
extern s32 data_ov123_020e305c;
extern s32 data_ov123_020e307c;
extern s32 data_ov123_020e3088;

s32 func_ov123_020ad250(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4             = func_0200fa98();
    data_ov123_020e3088 = arg2;
    if (arg1 != 0) {
        MI_CpuCopy8(arg1, data_ov123_020e3058, 0x60);
    } else {
        MI_CpuFill8(data_ov123_020e3058, 0, 0x60);
    }
    MIi_CpuCopy32(arg0, data_ov123_020e307c, 0xC0);
    if (func_ov123_020ad500() == 1) {
        data_ov123_020e305c = 8;
        func_0200faac(temp_r4);
        return 1;
    }
    if ((data_ov123_020e305c == 3) &&
        (func_ov123_02068034(data_ov123_020e307c, data_ov123_020e3058, data_ov123_020e3088) == 3)) {
        data_ov123_020e305c = 8;
        func_0200faac(temp_r4);
        return 1;
    }
    func_0200faac(temp_r4);
    return 0;
}
