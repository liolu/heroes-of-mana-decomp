/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, M2C_UNK, s32);             /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_02071e14(void *, s32 *, u16 *, u16 *, s32 *); /* extern */

s32 func_ov123_02071ea4(void *arg0, M2C_UNK arg1, s32 arg2, u16 *arg3, s32 *arg4) {
    s32 sp8;
    s32 spC;
    u16 sp4;
    u16 sp6;
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r2;
    s32 var_r4;
    s32 var_r7;
    s8 temp_r1;
    void *temp_r1_2;

    var_r7  = arg2;
    temp_r5 = func_0200fa98();
    temp_r0 = func_ov123_02071e14(arg0, &sp8, &sp4, &sp6, &spC);
    if (temp_r0 != 0) {
        var_r4 = sp8;
        if (var_r4 == 0) {
            var_r4 = -6;
        } else {
            if (var_r7 > var_r4) {
                var_r7 = var_r4;
            }
            var_r2  = 1;
            temp_r1 = M2C_FIELD(arg0, s8 *, 0x73);
            if ((temp_r1 != 0) && (temp_r1 != 4)) {
                var_r2 = 0;
            }
            if (var_r2 != 0) {
                var_r4 = var_r7;
            }
            MI_CpuCopy8(temp_r0, arg1, var_r7);
            temp_r1_2 = M2C_FIELD(arg0, void **, 0x64);
            if (M2C_FIELD(temp_r1_2, s8 *, 0xFE) == 0) {
                M2C_FIELD(temp_r1_2, s32 *, 0xF8) = (s32) (M2C_FIELD(temp_r1_2, s32 *, 0xF8) + var_r4);
            }
        }
    } else {
        if (sp8 == 0) {
            var_r4 = 0;
        } else {
            var_r4 = -0x1C;
        }
        M2C_FIELD(arg0, s16 *, 0x70) = (s16) (M2C_FIELD(arg0, s16 *, 0x70) & ~6);
    }
    if (var_r4 >= 0) {
        if ((arg3 != NULL) && (arg4 != NULL)) {
            *arg3 = sp6;
            *arg4 = spC;
        }
        if (M2C_FIELD(arg0, u16 *, 0x74) == 0) {
            M2C_FIELD(arg0, u16 *, 0x74) = sp4;
        }
    }
    func_0200faac(temp_r5);
    return var_r4;
}
