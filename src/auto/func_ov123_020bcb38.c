#include "m2c.h"

M2C_UNK func_ov123_020bad8c();                      /* extern */
M2C_UNK func_ov123_020bb228(u32);                   /* extern */
u32 func_ov123_020bb6a8();                          /* extern */
s32 func_ov123_020bbe78();                          /* extern */
M2C_UNK func_ov123_020bc9b8(u32);                   /* extern */
M2C_UNK func_ov123_020c35d4();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */

s32 func_ov123_020bcb38(void) {
    u32 temp_r0;

    func_ov123_020c35d4();
    temp_r0 = func_ov123_020bb6a8();
    if (temp_r0 == 0xE) {
        return 0;
    }
    if (func_ov123_020bbe78() == 0) {
        func_ov123_020c36bc(9);
        return 1;
    }
    func_ov123_020bb228(temp_r0);
    switch (temp_r0) {
        default:
            break;
        case 2:
        case 3:
        case 7:
        case 8:
            func_ov123_020bad8c();
            break;
    }
    func_ov123_020bc9b8(temp_r0);
    return 1;
}
