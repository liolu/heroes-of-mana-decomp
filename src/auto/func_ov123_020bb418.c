/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02008fb4(u16, M2C_UNK);                    /* extern */
s32 func_02008ff0(u16, M2C_UNK);                    /* extern */
extern u8 data_ov123_020d8020;
extern u16 data_ov123_020e4670;
extern void *data_ov123_020e4674;

void func_ov123_020bb418(void) {
    s32 temp_ip;
    s32 temp_r4;

    if (M2C_FIELD(data_ov123_020e4674, u8 *, 0x44) == 0) {
        return;
    }
    temp_r4                                    = func_02008fb4(data_ov123_020e4670, 0x1D);
    temp_ip                                    = func_02008ff0(data_ov123_020e4670, 0x1D) - 0x33;
    *(s32 *) 0x04000010                        = 0x01FF0000 & (temp_ip << 0x10);
    *(s32 *) 0x04000018                        = 0x01FF0000 & ((temp_ip + *(&data_ov123_020d8020 + temp_r4)) << 0x10);
    M2C_FIELD(data_ov123_020e4674, u8 *, 0x44) = 0U;
}
