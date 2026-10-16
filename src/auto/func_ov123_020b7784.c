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

void func_ov123_020b7784(M2C_UNK arg0) {
    s32 temp_r0;

    func_ov123_020c2384();
    func_ov123_020ae628();
    data_ov123_020e4650 += 4;
    temp_r0 = func_02008ff0(data_ov123_020e4650, 0x1C);
    if (temp_r0 >= 4) {
        func_ov123_020b7900();
        return;
    }
    data_ov123_020e4650 -= temp_r0;
    func_ov123_020b7bc4();
    func_02008fb4(data_ov123_020e4650 * M2C_FIELD(data_ov123_020e4654, u8 *, 0x53),
                  M2C_FIELD(data_ov123_020e4654, u16 *, 0x40));
    func_ov123_020c23b4();
    func_ov123_020c239c();
    func_ov123_020b76b8();
    M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = 0;
    func_ov123_020cb5f8(0, arg0);
}
