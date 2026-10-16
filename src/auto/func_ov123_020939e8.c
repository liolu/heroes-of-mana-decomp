#include "m2c.h"

s32 func_ov123_020912ec(u8);                        /* extern */
void *func_ov123_020913d8(M2C_UNK);                 /* extern */
s32 func_ov123_02098618();                          /* extern */
s32 func_ov123_02098630();                          /* extern */
M2C_UNK func_ov123_020986f4();                      /* extern */

s32 func_ov123_020939e8(void *arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_ov123_020913d8(1);
    temp_r0 = func_ov123_02098630();
    if (temp_r0 != 0) {
        if (M2C_FIELD(temp_r4, u8 *, 0x15) == func_ov123_020912ec(M2C_FIELD(arg0, u8 *, 0xD0D))) {
            M2C_FIELD(temp_r4, s32 *, 0x10) = func_ov123_02098618();
        }
        func_ov123_020986f4();
        if (temp_r0 == 0xB) {
            return 0xF;
        }
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0xD13) * 4)), s8 *, 0x444) = 1;
        return 0xB;
    }
    return 0xE;
}
