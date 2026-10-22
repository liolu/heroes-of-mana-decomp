/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0209cdb0(s32);                       /* extern */
void *func_ov123_0209d368();                        /* extern */
s32 func_ov123_0209de24();                      /* extern */
M2C_UNK func_ov123_0209f334();                      /* extern */
M2C_UNK func_ov123_0209ffec(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020a2118(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020a23a8();                      /* extern */

void func_ov123_0209f158(s32 arg0) {
    M2C_UNK var_r6;
    s32 temp_r4;
    void *temp_r5;

    if (arg0 == 0) {
        func_ov123_0209f334(arg0);
        return;
    }
    func_ov123_020a23a8(arg0);
    if ((M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 2) || (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 3)) {
        if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20C) == 0) {
            var_r6 = 1;
        } else {
            var_r6 = 0;
        }
        temp_r5 = func_ov123_0209d368();
        temp_r4 = func_ov123_0209cdb0(M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20C));
        M2C_FIELD(temp_r5, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32),
                  0x464)(0, 1, var_r6, 0, temp_r4, M2C_FIELD(func_ov123_0209d368(), s32 *, 0x468));
        return;
    }
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 0) {
        if (arg0 != 1) {
            return;
        }
        func_ov123_020a2118(0);
        if (func_ov123_0209de24() == 0) {
            return;
        }
        return;
    }
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) != 1) {
        return;
    }
    if (arg0 != 1) {
        return;
    }
    func_ov123_0209ffec(0, 0, 0);
}
