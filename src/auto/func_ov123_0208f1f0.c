/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov123_0207ae10(s32, s32, s32, s32);
s32 func_ov123_0207b0c4(s32);
void func_ov123_0208d940(void *, s32, s32);
s32 func_ov123_0208f2dc(void *);
s32 func_ov123_0208fa80(void *);
void func_ov123_02090e14(void *);
s32 func_ov123_0208f1f0(u8 *arg0) {
    s32 var_r5;
    s32 temp_r0;
    s32 temp_r4;

    if (func_ov123_0207b0c4(*(s32 *) (arg0 + 0x4B0)) == 0) {
        return 0;
    }
    temp_r4 = *(s32 *) (arg0 + 0x80);
    temp_r0 = func_ov123_0207ae10(*(s32 *) (arg0 + 0x4B0), *(s32 *) (arg0 + 0x7C) + temp_r4, 0x1000 - temp_r4, 0);
    if ((u32) (temp_r0 + 1) <= 1U) {
        func_ov123_02090e14(arg0);
        return 3;
    }
    var_r5                 = 0;
    *(s32 *) (arg0 + 0x80) = *(s32 *) (arg0 + 0x80) + temp_r0;
    if ((*(s32 *) arg0 == 2) || (*(s32 *) (arg0 + 0x5C8) > 0)) {
        func_ov123_0208d940(arg0 + 0x4BC, *(s32 *) (arg0 + 0x7C) + temp_r4, *(s32 *) (arg0 + 0x80) - temp_r4);
    }
    if (*(s32 *) arg0 == 3) {
        var_r5 = func_ov123_0208fa80(arg0);
    }
    if (var_r5 != 0) {
        return var_r5;
    }
    if ((*(s32 *) arg0 == 2) && (*(s32 *) (arg0 + 0x80) > 0)) {
        return func_ov123_0208f2dc(arg0);
    }
    return 0;
}
