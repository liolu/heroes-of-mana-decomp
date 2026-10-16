#include "m2c.h"

void *func_ov123_0209d368();                        /* extern */
s32 func_ov123_020a1b40(M2C_UNK, s32, s32, u16, s32 *, s32); /* extern */

s32 func_ov123_0209f260(void) {
    s32 sp8;
    s32 var_r4;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r7;

    var_r4 = 0;
    sp8    = 0;
    if ((M2C_FIELD(func_ov123_0209d368(), u8 *, 0x17) != 0) && (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20) != 0)) {
        temp_r5 = func_ov123_0209d368();
        if (M2C_FIELD(temp_r5, s32 *, 0x20) != M2C_FIELD(func_ov123_0209d368(), s32 *, 0x200)) {
            temp_r7   = func_ov123_0209d368();
            temp_r5_2 = func_ov123_0209d368();
            temp_r6   = func_ov123_0209d368();
            temp_r4   = func_ov123_0209d368();
            var_r4    = func_ov123_020a1b40(
                0xC, M2C_FIELD(temp_r7, s32 *, 0x20),
                M2C_FIELD((temp_r5_2 + ((M2C_FIELD(temp_r6, u8 *, 0xD) + 1) * 4)), s32 *, 0x24),
                M2C_FIELD((temp_r4 + ((M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) + 1) * 2)), u16 *, 0xA4), &sp8, 1);
            M2C_FIELD(func_ov123_0209d368(), s8 *, 0x17)  = 0;
            M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20) = 0;
        }
    }
    return var_r4;
}
