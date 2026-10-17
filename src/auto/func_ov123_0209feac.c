/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_0209d368();                        /* extern */
s32 func_ov123_020a1b40(M2C_UNK, M2C_UNK, s32, u16, s32, s32); /* extern */

s32 func_ov123_0209feac(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r4_2;

    temp_r4_2 = func_ov123_0209d368();
    temp_r4 =
        func_ov123_020a1b40(5, arg0, M2C_FIELD(temp_r4_2, s32 *, 0x24), M2C_FIELD(func_ov123_0209d368(), u16 *, 0xA4), 0, 0);
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x204) = 0;
    return temp_r4;
}
