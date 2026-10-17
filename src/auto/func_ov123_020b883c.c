/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02008fb4(s32, u16);                        /* extern */
M2C_UNK func_ov123_020c2428(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern u16 data_ov123_020e4650;
extern void *data_ov123_020e4654;

void func_ov123_020b883c(void) {
    s32 var_r0;
    s32 var_r4;
    u8 temp_r1;

    var_r0                                      = 0;
    M2C_FIELD(data_ov123_020e4654, u16 *, 0x40) = (u16) ((M2C_FIELD(data_ov123_020e4654, u8 *, 0x51) - 4) * 0x1C);
    temp_r1                                     = M2C_FIELD(data_ov123_020e4654, u8 *, 0x51);
    if ((u32) temp_r1 <= 4U) {
        var_r4                                     = 0;
        M2C_FIELD(data_ov123_020e4654, u8 *, 0x53) = 0U;
    } else if ((u32) temp_r1 <= 8U) {
        M2C_FIELD(data_ov123_020e4654, u8 *, 0x53) = 0x1FU;
        var_r4                                     = 1;
    } else {
        M2C_FIELD(data_ov123_020e4654, u8 *, 0x53) = 0x37U;
        var_r4                                     = 2;
    }
    if (var_r4 != 0) {
        var_r0 = func_02008fb4(data_ov123_020e4650 * M2C_FIELD(data_ov123_020e4654, u8 *, 0x53),
                               M2C_FIELD(data_ov123_020e4654, u16 *, 0x40));
    }
    func_ov123_020c2428(var_r4, 0x55, 0xEC, 0x3F, var_r0);
}
