/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02008fb4(s32, u16);                    /* extern */
s32 func_02008ff0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_ov123_020ae628();                      /* extern */
M2C_UNK func_ov123_020b76b8();                      /* extern */
M2C_UNK func_ov123_020b7900();                      /* extern */
M2C_UNK func_ov123_020b7bc4();                      /* extern */
M2C_UNK func_ov123_020c2384();                      /* extern */
M2C_UNK func_ov123_020c239c();                      /* extern */
M2C_UNK func_ov123_020c23b4();                      /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */
extern u16 data_ov123_020e4650;
extern void *data_ov123_020e4654;

void func_ov123_020b7824(M2C_UNK arg0) {
    s32 temp_r1;
    s32 var_r5;

    func_ov123_020c2384();
    func_ov123_020ae628();
    if ((u32) data_ov123_020e4650 > 4U) {
        data_ov123_020e4650 -= 4;
    } else {
        data_ov123_020e4650 = 0;
    }
    var_r5 = func_02008ff0(data_ov123_020e4650, 0x1C);
    if (var_r5 == 0x18) {
        func_ov123_020b7bc4();
        return;
    }
    if (var_r5 > 0x18) {
        temp_r1 = 0x1C - var_r5;
        data_ov123_020e4650 += temp_r1;
        var_r5 = 0;
    }
    func_ov123_020b7900();
    if (var_r5 != 0) {
        return;
    }
    func_02008fb4(data_ov123_020e4650 * M2C_FIELD(data_ov123_020e4654, u8 *, 0x53),
                  M2C_FIELD(data_ov123_020e4654, u16 *, 0x40));
    func_ov123_020c23b4();
    func_ov123_020c239c();
    func_ov123_020b76b8();
    M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = 0;
    func_ov123_020cb5f8(0, arg0);
}
