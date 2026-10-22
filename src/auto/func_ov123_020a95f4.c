/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK MI_CpuFill8(u8 *, s32, s32);                /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_02068504(u8 *, u8 *, s32);           /* extern */
s32 func_ov123_020a9754();                          /* extern */
extern u8 data_ov123_020d4e88;
extern u8 data_ov123_020d4e90;
extern s32 data_ov123_020e2fe4;
extern u8 *data_ov123_020e2ff0;
extern u8 *data_ov123_020e2ff4;
extern s32 data_ov123_020e2ff8;
extern u8 data_ov123_020e3008;
extern u8 data_ov123_020e3010;

s32 func_ov123_020a95f4(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    u8 *var_r2_3;
    u8 *var_r5;
    u8 temp_r0_2;
    u8 *var_r4;
    u8 *var_r2_2;
    s32 var_r2;
    s32 sp0;
    u8 *var_r1;
    s32 temp_r7;
    u8 temp_r0;
    s32 var_r1_2;

    var_r5              = arg0;
    var_r4              = arg1;
    sp0                 = arg3;
    temp_r7             = func_0200fa98();
    data_ov123_020e2fe4 = sp0;
    if (var_r5 != NULL) {
        var_r2 = 0;
        var_r1 = &data_ov123_020e3008;
        do {
            temp_r0 = *var_r5;
            var_r5 += 1;
            *var_r1 = temp_r0;
            var_r1 += 1;
            var_r2 += 1;
        } while (var_r2 < 6);
        data_ov123_020e2ff0 = &data_ov123_020e3008;
    } else {
        MI_CpuFill8(&data_ov123_020e3008, 0xFF, 6);
        data_ov123_020e2ff0 = &data_ov123_020d4e88;
    }
    if ((var_r4 != NULL) && (arg2 > 0) && (arg2 <= 0x20)) {
        var_r1_2 = 0;
        if (arg2 > 0) {
            var_r2_2 = &data_ov123_020e3010;
            do {
                temp_r0_2 = *var_r4;
                var_r4 += 1;
                *var_r2_2 = temp_r0_2;
                var_r2_2 += 1;
                var_r1_2 += 1;
            } while (var_r1_2 < arg2);
        }
        if (var_r1_2 < 0x20) {
            var_r2_3 = &(&data_ov123_020e3010)[var_r1_2];
            do {
                *var_r2_3 = 0;
                var_r2_3 += 1;
                var_r1_2 += 1;
            } while (var_r1_2 < 0x20);
        }
        data_ov123_020e2ff4 = &data_ov123_020e3010;
    } else {
        MI_CpuFill8(&data_ov123_020e3010, 0xFF, 0x20);
        data_ov123_020e2ff4 = &data_ov123_020d4e90;
    }
    if (data_ov123_020e2ff8 == 3) {
        if (func_ov123_02068504(data_ov123_020e2ff0, data_ov123_020e2ff4, data_ov123_020e2fe4) == 3) {
            data_ov123_020e2ff8 = 6;
            func_0200faac(temp_r7);
            return 1;
        }
    } else if (func_ov123_020a9754() == 1) {
        data_ov123_020e2ff8 = 6;
        func_0200faac(temp_r7);
        return 1;
    }
    func_0200faac(temp_r7);
    return 0;
}
