/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0209ccc8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_ov123_0209cdb0(s32);                       /* extern */
void *func_ov123_0209d368();                        /* extern */
s32 func_ov123_0209deb8();                          /* extern */
M2C_UNK func_ov123_020a2318();                      /* extern */
extern M2C_UNK data_ov123_020dd3f4;

void func_ov123_0209f334(void) {
    M2C_UNK var_r6;
    M2C_UNK var_r7;
    s32 temp_r4;
    void *temp_r5;

    func_ov123_0209ccc8(1, &data_ov123_020dd3f4, 0);
    if (func_ov123_0209deb8() != 0) {
        return;
    }
    func_ov123_020a2318();
    if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20C) != 0) {
        var_r6 = 1;
    } else if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 2) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20C) == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    temp_r5 = func_ov123_0209d368();
    temp_r4 = func_ov123_0209cdb0(M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20C));
    M2C_FIELD(temp_r5, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32),
              0x464)(0, 1, var_r7, var_r6, temp_r4, M2C_FIELD(func_ov123_0209d368(), s32 *, 0x468));
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x1A9) = 0;
}
