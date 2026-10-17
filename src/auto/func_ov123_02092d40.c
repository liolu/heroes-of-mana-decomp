/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuClear32(M2C_UNK, void *, M2C_UNK);   /* extern */
void *func_ov123_020913d8(M2C_UNK);                 /* extern */
s8 func_ov123_02092998(void *);                     /* extern */
u8 func_ov123_020929dc();                           /* extern */
u8 func_ov123_02092b8c(void *);                     /* extern */
u8 func_ov123_02092c84(void *);                     /* extern */

u8 func_ov123_02092d40(s32 arg0) {
    void *temp_r4;

    temp_r4 = func_ov123_020913d8(0x10);
    switch (arg0) {                                 /* irregular */
        case 0:
            MIi_CpuClear32(0, temp_r4 + 0x300, 0x144);
            M2C_FIELD(temp_r4, u8 *, 0xD10) = func_ov123_02092c84(temp_r4);
            break;
        case 1:
            M2C_FIELD(temp_r4, u8 *, 0xD10) = func_ov123_020929dc();
            M2C_FIELD(temp_r4, s8 *, 0xD0F) = func_ov123_02092998(temp_r4);
            break;
        case 2:
            MIi_CpuClear32(0, temp_r4 + 0x300, 0x144);
            M2C_FIELD(temp_r4, s8 *, 0xD0F) = 0;
            M2C_FIELD(temp_r4, u8 *, 0xD10) = func_ov123_02092b8c(temp_r4);
            break;
    }
    return M2C_FIELD(temp_r4, u8 *, 0xD10);
}
