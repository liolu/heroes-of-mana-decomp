/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208864c(s32);                   /* extern */
s32 *func_ov123_0209a8fc(s32, s32);                 /* extern */
void *func_ov123_0209d368();                        /* extern */
M2C_UNK func_ov123_020a2bc8(s32, s32);              /* extern */

s32 func_ov123_0209efd8(s32 arg0) {
    s32 *temp_r0;

    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x20C) = arg0;
    temp_r0 = func_ov123_0209a8fc(arg0, M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) + 1);
    if (temp_r0 != NULL) {
        M2C_FIELD(func_ov123_0209d368(), s8 *, 0x1A8) = 2;
        func_ov123_0208864c(*temp_r0);
        M2C_FIELD(func_ov123_0209d368(), s8 *, 0x1A8) = 0;
        return 1;
    }
    func_ov123_020a2bc8(arg0, M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) + 1);
    return 0;
}
