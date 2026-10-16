/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206ba5c(s32, s32);                  /* extern */
s32 func_ov123_0206be1c(s32);                       /* extern */
M2C_UNK func_ov123_0206d2f8();                      /* extern */
M2C_UNK func_ov123_0206d318();                      /* extern */
M2C_UNK func_ov123_0206d34c(M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_0206d3bc();                      /* extern */
extern s32 data_ov123_020df1f0;
extern u32 data_ov123_020df208;
extern u32 data_ov123_020df21c;

s32 func_ov123_0206b8d0(u32 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r6;
    u32 temp_r0_2;

    func_ov123_0206d318();
    func_ov123_0206d3bc();
    if (arg1 == 1) {
        func_ov123_0206d34c(0x44, 0x43, data_ov123_020df1f0);
    } else {
        func_ov123_0206d34c(0x44, 0x43, -1);
    }
    var_r6 = 0;
loop_4:
    temp_r0 = func_ov123_0206ba5c(func_ov123_0206be1c(arg1), var_r6);
    if (temp_r0 == 0) {
        var_r6 += 1;
        if (var_r6 < 4) {
            goto loop_4;
        }
    }
    func_ov123_0206d2f8();
    if (temp_r0 == 2) {
        *arg0               = (u32) data_ov123_020df21c >> 1;
        data_ov123_020df208 = (u32) (data_ov123_020df21c * 3) >> 3;
        return 1;
    }
    temp_r0_2           = (u32) data_ov123_020df208 >> 1;
    data_ov123_020df208 = temp_r0_2;
    *arg0               = temp_r0_2;
    switch (arg1) {                                 /* irregular */
        case 1:
            if (temp_r0_2 < 0x3CU) {
                *arg0               = 1;
                data_ov123_020df208 = (u32) data_ov123_020df21c >> 3;
            }
            break;
        case 2:
            if (temp_r0_2 < 0x3CU) {
                *arg0 = 1;
            }
            break;
    }
    return 0;
}
