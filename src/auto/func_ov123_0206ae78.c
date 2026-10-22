/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0206977c(void **, s32, s32, M2C_UNK);
M2C_UNK func_ov123_0206af74(void *, s32, s32, s32, s32, s32 *);

void func_ov123_0206ae78(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 spC;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r8;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 4), s8 *, 1);
    spC     = arg6;
    var_r8  = arg2;
    if (arg6 == 0) {
        return;
    }
    do {
        var_r1 = arg1;
        if (arg5 & 0x800) {
            var_r1 = arg1 + (arg3 - func_ov123_0206977c(M2C_FIELD(arg0, void ***, 4), M2C_FIELD(arg0, s32 *, 8), spC, 0));
        } else if (arg5 & 0x400) {
            var_r1 = arg1 + ((arg3 + 1) / 2 -
                             (func_ov123_0206977c(M2C_FIELD(arg0, void ***, 4), M2C_FIELD(arg0, s32 *, 8), spC, 0) + 1) / 2);
        }
        func_ov123_0206af74(arg0, var_r1, var_r8, arg4, spC, &spC);
        var_r8 += temp_r6;
    } while (spC != 0);
}
