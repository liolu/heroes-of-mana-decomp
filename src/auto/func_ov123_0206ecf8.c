/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206f4d0(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov123_0206fb0c(s32);                   /* extern */
s32 func_ov123_0206fc0c();                          /* extern */
s32 func_ov123_02070284(s32);                       /* extern */
s32 func_ov123_02070358(void *, M2C_UNK);           /* extern */

void func_ov123_0206ecf8(void *arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    u16 temp_r1;
    u16 temp_r3;
    u16 temp_r4;
    u16 temp_r6;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0xC);
    temp_r4 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_r0 = func_ov123_02070284(((u16) (((s32) temp_r3 >> 8) | (temp_r3 << 8)) << 0x10) |
                                  (u16) (((s32) temp_r4 >> 8) | (temp_r4 << 8)));
    if (temp_r0 == 0) {
        return;
    }
    if (func_ov123_0206fc0c() == 0) {
        func_ov123_0206fb0c(temp_r0);
        return;
    }
    M2C_FIELD(arg1, s8 *, 0)  = 0;
    M2C_FIELD(arg1, s16 *, 2) = 0;
    temp_r0_2                 = func_ov123_02070358(arg1, arg2);
    M2C_FIELD(arg1, s16 *, 2) = (s16) ((temp_r0_2 >> 8) | (temp_r0_2 << 8));
    temp_r1                   = M2C_FIELD(arg0, u16 *, 0xC);
    temp_r6                   = M2C_FIELD(arg0, u16 *, 0xE);
    func_ov123_0206f4d0(
        arg1, arg2, 0, 0,
        ((u16) (((s32) temp_r1 >> 8) | (temp_r1 << 8)) << 0x10) | (u16) (((s32) temp_r6 >> 8) | (temp_r6 << 8)), 1);
}
