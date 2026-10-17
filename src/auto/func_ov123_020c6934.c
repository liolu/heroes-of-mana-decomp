/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020c68b0();                          /* extern */
extern void *data_ov123_020e4708;

s32 func_ov123_020c6934(void) {
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A4) = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A0) = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x48)   = 0;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x50)   = 0;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x52)   = 1;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x54)   = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0)      = 0;
    M2C_FIELD(data_ov123_020e4708, s16 *, 4)      = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x4C)   = 0;
    if (func_ov123_020c68b0() != 0) {
        return 1;
    }
    return 0;
}
