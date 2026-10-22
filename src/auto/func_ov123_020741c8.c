/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, void *, u32);              /* extern */
u32 func_ov123_0206c9a8(void *, u32, s32, s32, void *); /* extern */
u32 func_ov123_020757dc(s32, void *);               /* extern */
extern void *(*data_ov123_020df1e4)(s32);
extern M2C_UNK (*data_ov123_020df210)(void *);

s32 func_ov123_020741c8(s32 arg0, u32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 sp1C;
    s32 var_r8;
    u32 var_r9;
    void *temp_r0;
    s32 sp10;
    s32 var_r10;
    u32 temp_r0_2;
    s32 sp4;
    s32 sp18;
    s32 var_r6;
    s32 var_r5;
    s32 sp8;
    s32 spC;
    u32 temp_r11;
    s32 var_r4;
    s32 sp14;

    var_r9  = arg1;
    var_r10 = arg0;
    sp8     = 0;
    sp1C    = 0;
    sp14    = 0;
    sp18    = 0;
    spC     = 0x17;
    sp4     = M2C_FIELD(arg4, s32 *, 0xC);
    var_r8  = arg2;
    var_r6  = var_r9 + arg3;
    sp10    = 3;
loop_1:
    if (var_r6 > 0xB4F) {
        var_r5 = 0xB4F;
    } else {
        var_r5 = var_r6;
    }
    temp_r0 = data_ov123_020df1e4(var_r5 + 0x19);
    if (temp_r0 != NULL) {
        if (var_r9 >= (u32) var_r5) {
            var_r4 = var_r5;
        } else {
            var_r4 = (s32) var_r9;
        }
        temp_r11 = var_r5 - var_r4;
        MI_CpuCopy8(var_r10, temp_r0 + 5, (u32) var_r4);
        var_r10 += var_r4;
        var_r9 -= var_r4;
        MI_CpuCopy8(var_r8, temp_r0 + 5 + var_r4, temp_r11);
        M2C_FIELD(temp_r0, s8 *, 0) = (s8) spC;
        var_r8 += temp_r11;
        M2C_FIELD(temp_r0, s8 *, 1) = (s8) sp10;
        M2C_FIELD(temp_r0, s8 *, 2) = (s8) sp14;
        M2C_FIELD(temp_r0, s8 *, 3) = (s8) (var_r5 >> 8);
        M2C_FIELD(temp_r0, s8 *, 4) = (s8) var_r5;
        temp_r0_2                   = func_ov123_020757dc(sp4, temp_r0);
        if (func_ov123_0206c9a8(temp_r0, temp_r0_2, sp18, sp18, arg4) < temp_r0_2) {
            var_r5 = sp1C;
        }
        data_ov123_020df210(temp_r0);
        var_r6 -= var_r5;
        sp8 += var_r5;
        if ((var_r6 != 0) && (var_r5 != 0)) {
            goto loop_1;
        }
    }
    return sp8;
}
