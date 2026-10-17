/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208b878(s32);                   /* extern */
M2C_UNK func_ov123_0209d354(M2C_UNK);               /* extern */
void *func_ov123_0209d368();                        /* extern */
M2C_UNK func_ov123_0209efa0();                      /* extern */
M2C_UNK func_ov123_0209f114();                      /* extern */
s32 func_ov123_0209ff00(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020a2fe4(M2C_UNK, s32);          /* extern */

s32 func_ov123_0209fbc4(void) {
    s32 var_r4;
    void *temp_r5;

    var_r4 = 1;
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 3) {
        if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) != 0) {
            func_ov123_0209efa0();
        }
        func_ov123_020a2fe4(6, 0xFFFEC5D2);
        return 0;
    }
    temp_r5                                        = func_ov123_0209d368();
    M2C_FIELD(temp_r5, u8 *, 0x14)                 = (u8) M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD);
    M2C_FIELD(func_ov123_0209d368(), s32 *, 0x208) = 0;
    if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0x19C) != 0) {
        func_ov123_0208b878(M2C_FIELD(func_ov123_0209d368(), s32 *, 0x19C));
        M2C_FIELD(func_ov123_0209d368(), s32 *, 0x19C) = 0;
    }
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) != 0) {
        func_ov123_0209f114();
    } else {
        func_ov123_0209d354(4);
        var_r4 = func_ov123_0209ff00(0);
    }
    return var_r4;
}
