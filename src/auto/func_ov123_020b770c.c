/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02008ff0(u16, M2C_UNK);                    /* extern */
extern u16 data_ov123_020e4650;
extern void *data_ov123_020e4654;

void func_ov123_020b770c(void) {
    s32 temp_r2;

    if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x56) == 0) {
        return;
    }
    temp_r2                                    = 0x01FF0000 & ((func_02008ff0(data_ov123_020e4650, 0x1C) - 0x32) << 0x10);
    *(s32 *) 0x04000010                        = temp_r2;
    *(s32 *) 0x04000018                        = temp_r2;
    M2C_FIELD(data_ov123_020e4654, u8 *, 0x56) = 0U;
}
