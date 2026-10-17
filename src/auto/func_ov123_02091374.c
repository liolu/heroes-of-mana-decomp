/* compiler: 1.2/sp3 */
#include "m2c.h"

s8 func_ov123_020912ec(u8);                         /* extern */
void *func_ov123_020913d8(M2C_UNK);                 /* extern */

void func_ov123_02091374(u8 arg0) {
    void *temp_r4;
    void *temp_r5;

    temp_r5                     = func_ov123_020913d8(1);
    temp_r4                     = func_ov123_020913d8(0x10);
    M2C_FIELD(temp_r5, u8 *, 9) = arg0;
    if ((u32) arg0 >= 0x10U) {
        return;
    }
    if ((u32) arg0 <= (u32) M2C_FIELD(temp_r5, u8 *, 0x16)) {
        return;
    }
    M2C_FIELD(temp_r5, u8 *, 0x16) = arg0;
    if ((u32) arg0 <= 7U) {
        return;
    }
    M2C_FIELD(temp_r5, s8 *, 0x15) = func_ov123_020912ec(M2C_FIELD(temp_r4, u8 *, 0xD0D));
    M2C_FIELD(temp_r5, u8 *, 0x14) = (u8) M2C_FIELD((temp_r4 + (M2C_FIELD(temp_r4, u8 *, 0xD13) * 4)), u8 *, 0x444);
}
