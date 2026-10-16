#include "m2c.h"

M2C_UNK func_ov123_0209d354(M2C_UNK);               /* extern */
void *func_ov123_0209d368();                        /* extern */
s32 func_ov123_0209e400(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_0209ed70(u8, M2C_UNK);           /* extern */
M2C_UNK func_ov123_0209f47c(M2C_UNK);               /* extern */

void func_ov123_020a2de4(u8 arg0, s32 arg1, void *arg2) {
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r5;
    u8 temp_r6;
    void *temp_r0;
    void *temp_r4;
    void *temp_r4_2;

    switch (arg1) {                                 /* irregular */
        case 2:
            if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x1A0) == 1) {
                if (M2C_FIELD(arg2, u8 *, 0) == 1) {
                    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20C) = 0;
                }
                temp_r6                                                   = M2C_FIELD(arg2, u8 *, 1);
                M2C_FIELD((func_ov123_0209d368() + temp_r6), u8 *, 0x2D0) = (u8) M2C_FIELD(arg2, u8 *, 2);
                temp_r4                                                   = func_ov123_0209d368();
                M2C_FIELD((temp_r4 + (temp_r6 * 4)), s32 *, 0xF4) = (s32) M2C_FIELD(func_ov123_0209d368(), s32 *, 0x200);
                if ((M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 0) ||
                    (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 1)) {
                    temp_r4_2                        = func_ov123_0209d368();
                    M2C_FIELD(temp_r4_2, u8 *, 0x16) = (u8) M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD);
                }
                M2C_FIELD(func_ov123_0209d368(), s8 *, 0x1AD) = 0;
                func_ov123_0209d354(9);
            }
            func_ov123_0209ed70(arg0, 3);
            return;
        case 3:
            if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x1A0) == 0x10) {
                temp_r0                          = func_ov123_0209d368();
                M2C_FIELD(temp_r0, s32 *, 0x1D4) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x1D4) | (1 << arg0));
                temp_r4_3                        = M2C_FIELD(arg2, u8 *, 0) | (M2C_FIELD(arg2, u8 *, 1) << 8);
                if (temp_r4_3 > (s32) M2C_FIELD(func_ov123_0209d368(), u16 *, 0x1B0)) {
                    M2C_FIELD(func_ov123_0209d368(), s16 *, 0x1B0) = (s16) temp_r4_3;
                }
                temp_r4_4 = func_ov123_0209e400(0);
                if (temp_r4_4 != M2C_FIELD(func_ov123_0209d368(), s32 *, 0x1D4)) {
                    return;
                }
                var_r5 = 1;
                if ((s32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) >= 1) {
                    do {
                        func_ov123_0209ed70(M2C_FIELD((func_ov123_0209d368() + var_r5), u8 *, 0x2D0), 4);
                        var_r5 += 1;
                    } while (var_r5 <= (s32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD));
                }
                func_ov123_0209d354(0x11);
                return;
            }
            func_ov123_0209ed70(arg0, 4);
            return;
        case 4:
            if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x1A0) != 9) {
                return;
            }
            func_ov123_0209f47c(4);
            return;
    }
}
