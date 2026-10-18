/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02008fb4(u16, M2C_UNK);                    /* extern */
M2C_UNK func_ov123_020bb330();                      /* extern */
void *func_ov123_020c35d4();                        /* extern */
extern u8 data_ov123_020d8014;
extern u8 data_ov123_020e4664;
extern u8 data_ov123_020e466c;
extern u16 data_ov123_020e4670;

void func_ov123_020bb264(void) {
    s32 temp_r2;
    void *temp_r4;

    if ((u32) (u8) (data_ov123_020e4664 + 0xF5) <= 2U) {
        func_ov123_020bb330();
        return;
    }
    temp_r4 = func_ov123_020c35d4();
    temp_r2 = data_ov123_020e466c + func_02008fb4(data_ov123_020e4670, 0x1D);
    switch (temp_r2) {                              /* irregular */
        case 2:
            if (M2C_FIELD(temp_r4, u8 *, 0xF5) != 0) {
                data_ov123_020e4664 = 2;
            } else {
                data_ov123_020e4664 = 3;
            }
            break;
        case 6:
            if (M2C_FIELD(temp_r4, u8 *, 0xF6) != 0) {
                data_ov123_020e4664 = 7;
            } else {
                data_ov123_020e4664 = 8;
            }
            break;
        default:
            data_ov123_020e4664 = *(&data_ov123_020d8014 + temp_r2);
            break;
    }
    func_ov123_020bb330();
}
