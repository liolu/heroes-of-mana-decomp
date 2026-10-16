/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02021338(s32, s32, s32);               /* extern */
u32 func_ov123_0206c8bc(s32, u32, s32, u32);        /* extern */
extern M2C_UNK OSi_ThreadInfo;

u32 func_ov123_0206c804(s32 arg0, u32 arg1) {
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r5 != NULL) {
        temp_r4 = M2C_FIELD(temp_r5, u32 *, 0x60);
        if (temp_r4 != 0) {
            temp_r0 = func_ov123_0206c8bc(M2C_FIELD(temp_r5, s32 *, 0x5C), temp_r4, arg0, arg1);
            temp_r1 = M2C_FIELD(temp_r5, u32 *, 0x60);
            if (temp_r0 >= temp_r1) {
                M2C_FIELD(temp_r5, u32 *, 0x60) = 0U;
                return temp_r0 - temp_r1;
            }
            temp_r0_2 = M2C_FIELD(temp_r5, s32 *, 0x5C);
            func_02021338(temp_r0_2, temp_r0_2 + temp_r0, temp_r1 - temp_r0);
            M2C_FIELD(temp_r5, u32 *, 0x60) = (u32) (M2C_FIELD(temp_r5, u32 *, 0x60) - temp_r0);
            return 0U;
        }
        return func_ov123_0206c8bc(arg0, arg1, 0, 0U);
    }
    return 0U;
}
