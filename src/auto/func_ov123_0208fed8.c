/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_020213f0(void *, M2C_UNK *, M2C_UNK);      /* extern */
s32 func_ov123_0208e3e0();                          /* extern */
s32 func_ov123_0208e428(M2C_UNK, s32, u16);         /* extern */
s32 func_ov123_02090008(M2C_UNK, s32, u8 *, s32, s32); /* extern */
M2C_UNK func_ov123_020902e0(M2C_UNK, u8 *, s32, s32 *, u16 *); /* extern */
s32 func_ov123_0209036c(M2C_UNK, void *, s32);      /* extern */
s32 func_ov123_0209047c(void *, s32);               /* extern */
s32 func_ov123_02090514(u8);                        /* extern */
M2C_UNK func_ov123_020911cc(M2C_UNK, s32);          /* extern */
extern M2C_UNK data_ov123_020dbde0;

s32 func_ov123_0208fed8(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    s32 sp8;
    u16 sp4;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7_2;
    u8 temp_r7;

    if (arg2 < 1) {
        return 0;
    }
    temp_r7 = *arg1;
    temp_r0 = func_ov123_02090514(temp_r7);
    if (arg2 < temp_r0) {
        return 0;
    }
    if ((temp_r7 & 0x40) && (func_ov123_0209036c(arg0, arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if ((temp_r7 & 0x80) && (func_ov123_0209047c(arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if (func_020213f0(arg1 + 1, &data_ov123_020dbde0, 4) == 0) {
        return -1;
    }
    func_ov123_020902e0(arg0, arg1, arg2, &sp8, &sp4);
    temp_r7_2 = func_ov123_0208e428(arg0, sp8, sp4);
    if (func_ov123_0208e3e0() != 0) {
        return -2;
    }
    temp_r4 = func_ov123_02090008(arg0, temp_r7_2, arg1, arg2, 1);
    func_ov123_020911cc(arg0, temp_r7_2);
    return temp_r4;
}
