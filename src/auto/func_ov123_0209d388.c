/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_0209d368();                        /* extern */
M2C_UNK func_ov123_020a2fe4(M2C_UNK, s32);          /* extern */

s32 func_ov123_0209d388(s32 arg0) {
    void *temp_r0;

    if (arg0 != 0) {
        return 1;
    }
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) != 3) {
        temp_r0                         = func_ov123_0209d368();
        M2C_FIELD(temp_r0, u8 *, 0x17D) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x17D) + 1);
    }
    if ((M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 3) || ((u32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0x17D) >= 5U)) {
        func_ov123_020a2fe4(6, 0xFFFEAE6C);
        return 0;
    }
    return 1;
}
