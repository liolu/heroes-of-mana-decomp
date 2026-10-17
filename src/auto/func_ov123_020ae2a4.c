/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae394();                          /* extern */
M2C_UNK func_ov123_020ae580(M2C_UNK *, M2C_UNK *);  /* extern */
s32 func_ov123_020b29a0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020c98a8(s32);                   /* extern */
M2C_UNK func_ov123_020c9988(s32, u16, u16, u16, s32, s32, s32, s32); /* extern */
s32 func_ov123_020c9c88(M2C_UNK, M2C_UNK);          /* extern */
extern M2C_UNK data_ov123_020d79a0;
extern M2C_UNK data_ov123_020dd640;
extern u8 data_ov123_020e456c;
extern s32 data_ov123_020e45fc;
extern M2C_UNK func_0200ba44;

s32 func_ov123_020ae2a4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (data_ov123_020e456c != 0) {
        return 0;
    }
    func_ov123_020ae580(&data_ov123_020dd640, &func_0200ba44);
    *(volatile s32 *) 0x04001010 = 0x01920000;
    temp_r4                      = func_ov123_020c9c88(1, 0);
    temp_r5                      = func_ov123_020b29a0(data_ov123_020e45fc, arg0, arg1, arg2);
    func_ov123_020c9988(temp_r4, M2C_FIELD(&data_ov123_020d79a0, u16 *, 0), M2C_FIELD(&data_ov123_020d79a0, u16 *, 2),
                        M2C_FIELD(&data_ov123_020d79a0, u16 *, 4), (s32) M2C_FIELD(&data_ov123_020d79a0, u16 *, 6), 2,
                        func_ov123_020ae394(), temp_r5);
    func_ov123_020c98a8(temp_r4);
    data_ov123_020e456c = 1;
    return 1;
}
