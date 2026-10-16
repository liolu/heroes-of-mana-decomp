#include "m2c.h"

M2C_UNK func_ov123_020cbb70();                      /* extern */
M2C_UNK func_ov123_020cbeac(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020cbe30(void) {
    u32 temp_r0;

    func_ov123_020cbb70();
    if (data_ov123_020e4790 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(data_ov123_020e4790, u32 *, 0xE08);
    switch (temp_r0) {
        default:
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            func_ov123_020cbeac(0, 0);
            break;
    }
    M2C_FIELD(data_ov123_020e4790, u32 *, 0xE08) = 0U;
}
