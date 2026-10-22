/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK MI_CpuFill8(u8 *, s32, s32);                /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_02068504(u8 *, u8 *, s32);           /* extern */
s32 func_ov123_020ad500();                          /* extern */
extern u8 data_ov123_020d4e88;
extern u8 data_ov123_020d4e90;
extern s32 data_ov123_020e305c;
extern u8 *data_ov123_020e3074;
extern u8 *data_ov123_020e3078;
extern s32 data_ov123_020e3090;
extern u8 data_ov123_020e30c4;
extern u8 data_ov123_020e3124;

s32 func_ov123_020ad3a8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 temp_r7;
    s32 var_r2;
    u8 *var_r0;
    u8 *var_r2_2;
    u8 *var_r2_3;
    u8 *var_r4;
    u8 *var_r5;
    u8 temp_r0;
    u8 temp_r1;
    s32 var_r1;
    var_r5              = arg0;
    var_r4              = arg1;
    sp0                 = arg3;
    temp_r7             = func_0200fa98();
    data_ov123_020e3090 = sp0;
    var_r0              = &data_ov123_020e30c4;
    data_ov123_020e3074 = &data_ov123_020e30c4;
    if (var_r5 != NULL) {
        var_r2 = 0;
        do {
            temp_r1 = *var_r5;
            var_r5 += 1;
            *var_r0 = temp_r1;
            var_r0 += 1;
            var_r2 += 1;
        } while (var_r2 < 6);
    } else {
        MI_CpuFill8(&data_ov123_020e30c4, 0xFF, 6);
        data_ov123_020e3074 = &data_ov123_020d4e88;
    }
    var_r2_2            = &data_ov123_020e3124;
    data_ov123_020e3078 = &data_ov123_020e3124;
    if ((var_r4 != NULL) && (arg2 > 0) && (arg2 < 0x20)) {
        var_r1 = 0;
        if (arg2 > 0) {
            do {
                temp_r0 = *var_r4;
                var_r4 += 1;
                *var_r2_2 = temp_r0;
                var_r2_2 += 1;
                var_r1 += 1;
            } while (var_r1 < arg2);
        }
        if (var_r1 < 0x20) {
            var_r2_3 = &(&data_ov123_020e3124)[var_r1];
            do {
                *var_r2_3 = 0;
                var_r2_3 += 1;
                var_r1 += 1;
            } while (var_r1 < 0x20);
        }
    } else {
        MI_CpuFill8(&data_ov123_020e3124, 0xFF, 0x20);
        data_ov123_020e3078 = &data_ov123_020d4e90;
    }
    if (data_ov123_020e305c == 3) {
        if (func_ov123_02068504(&data_ov123_020e30c4, data_ov123_020e3078, data_ov123_020e3090) == 3) {
            data_ov123_020e305c = 6;
            func_0200faac(temp_r7);
            return 1;
        }
    } else {
        if (func_ov123_020ad500() == 1) {
            data_ov123_020e305c = 6;
            func_0200faac(temp_r7);
            return 1;
        }
    }
    func_0200faac(temp_r7);
    return 0;
}
