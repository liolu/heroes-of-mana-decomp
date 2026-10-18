/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0208e3e0();                          /* extern */
s32 func_ov123_0208e428(void *, s32, u16);          /* extern */
s32 func_ov123_02090008(void *, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov123_020902e0(void *, M2C_UNK, s32, s32 *, u16 *); /* extern */
s32 func_ov123_020910a8(void *, s32);               /* extern */
s32 func_ov123_02091150(void *, s32, u16);          /* extern */
M2C_UNK func_ov123_020911cc(void *, s32);           /* extern */

s32 func_ov123_0208f4b8(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp8;
    u16 sp4;
    s32 var_r5;
    s32 temp_r0;

    if (arg2 < 5) {
        return 4;
    }
    func_ov123_020902e0(arg0, arg1, arg2, &sp8, &sp4);
    temp_r0 = func_ov123_02091150(arg0, sp8, sp4);
    if (temp_r0 == -1) {
        var_r5 = func_ov123_0208e428(arg0, sp8, sp4);
        if (func_ov123_0208e3e0() != 0) {
            return 5;
        }
        goto block_6;
    }
    var_r5 = func_ov123_020910a8(arg0, temp_r0);
block_6:
    if (func_ov123_02090008(arg0, var_r5, arg1, arg2, 0) < 0) {
        return 4;
    }
    if (temp_r0 == -1) {
        func_ov123_020911cc(arg0, var_r5);
    }
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 1, var_r5, M2C_FIELD(arg0, s32 *, 0x494));
    return 0;
}
