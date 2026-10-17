/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208b560(void *, M2C_UNK);       /* extern */
M2C_UNK func_ov123_0208b878(s32);                   /* extern */
M2C_UNK func_ov123_0208ba9c(void *);                /* extern */

void func_ov123_0208b490(void *arg0, void *arg1, M2C_UNK arg2) {
    M2C_UNK var_r0;
    u16 temp_r2;
    u8 temp_r1;

    if (M2C_FIELD(arg1, u8 *, 0x13) == 0) {
        func_ov123_0208b560(arg0, arg2);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) >= 2) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, u8 *, 0x13);
    if (temp_r1 != 0) {
        var_r0 = 3;
        if (temp_r1 == 1) {
            var_r0 = 1;
        } else if (temp_r1 == 2) {
            var_r0 = 2;
        }
        M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK, s32), 0x38)(var_r0, -1, 0, M2C_FIELD(arg0, s32 *, 0x3C));
        func_ov123_0208b878(M2C_FIELD(arg0, s32 *, 8));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    temp_r2                      = M2C_FIELD(arg1, u16 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) ((u8) ((s32) temp_r2 >> 8) | ((temp_r2 << 8) & 0xFF00));
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 2;
    M2C_FIELD(arg0, M2C_UNK(**)(s32, s32), 0x34)(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x3C));
    func_ov123_0208ba9c(arg0);
}
