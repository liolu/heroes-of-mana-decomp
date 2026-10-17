/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207b3f4();                          /* extern */
M2C_UNK func_ov123_0208ba9c();                      /* extern */

void func_ov123_0208b3a8(void *arg0, void *arg1, void *arg2) {
    s32 temp_r1;
    u16 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) < 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 4);
    temp_r3                      = M2C_FIELD(arg2, u16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) ((u8) ((s32) temp_r3 >> 8) | ((temp_r3 << 8) & 0xFF00));
    M2C_FIELD(arg0, s8 *, 0x32)  = 1;
    if (M2C_FIELD(arg1, u8 *, 0x12) == 0) {
        func_ov123_0208ba9c(arg0);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
        if (M2C_FIELD(arg0, u8 *, 0x33) == 0) {
            func_ov123_0208ba9c(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 3;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (func_ov123_0207b3f4() + 0x1388);
        temp_r1                      = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r1 == -1) {
            return;
        }
        M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK, s32, void *, s32), 0x38)(0, temp_r1, arg2, M2C_FIELD(arg0, s32 *, 0x3C));
        return;
    }
    if (M2C_FIELD(arg1, u8 *, 0x13) != 0) {
        return;
    }
    func_ov123_0208ba9c(arg0);
}
