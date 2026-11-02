/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void MI_CpuCopy8(void *, void *, s32);             /* extern */
M2C_UNK *func_ov123_0206fa80(s32);                  /* extern */
M2C_UNK *func_ov123_0206fc0c();                     /* extern */
M2C_UNK func_ov123_02070104(void *, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_02070228(u32);                       /* extern */
s32 func_ov123_02070284(u32);                       /* extern */
extern M2C_UNK data_ov123_020df230;

void func_ov123_0206f824(u8 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, u32 arg4, u16 arg5) {
    M2C_UNK *var_r0;
    s32 temp_r0;

    M2C_FIELD(arg0, s16 *, -2) = (s16) (((s32) arg5 >> 8) | (arg5 << 8));
    if (func_ov123_02070228(arg4) == 0) {
        temp_r0 = func_ov123_02070284(arg4);
        if (temp_r0 == 0) {
            return;
        }
        var_r0 = func_ov123_0206fc0c();
        if (var_r0 == NULL) {
            var_r0 = func_ov123_0206fa80(temp_r0);
        }
        if (var_r0 == NULL) {
            return;
        }
        MI_CpuCopy8(var_r0, arg0 - 0xE, 6);
    } else {
        M2C_FIELD(arg0, s8 *, -0xE) = 1;
        M2C_FIELD(arg0, s8 *, -0xD) = 0;
        M2C_FIELD(arg0, s8 *, -0xC) = 0x5E;
        M2C_FIELD(arg0, s8 *, -0xB) = (s8) ((arg4 >> 0x10) & 0x7F);
        M2C_FIELD(arg0, s8 *, -0xA) = (s8) (arg4 >> 8);
        M2C_FIELD(arg0, s8 *, -9)   = (s8) arg4;
    }
    MI_CpuCopy8(&data_ov123_020df230, arg0 - 8, 6);
    func_ov123_02070104(arg0 - 0xE, (void *) (arg1 + 0xE), arg2, arg3);
}
