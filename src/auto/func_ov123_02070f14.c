/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov123_020e0a00;
extern s32 data_ov123_020e0a44;
extern M2C_UNK data_ov123_020e0a48;

s32 func_ov123_02070f14(void) {
    if ((s32) M2C_FIELD(&data_ov123_020e0a48, s32 *, 0x1C) < (s32) M2C_FIELD(&data_ov123_020e0a48, s32 *, 0x14)) {
        return -1;
    }
    M2C_FIELD(data_ov123_020e0a00, M2C_UNK(**)(s32), 0x1C)(data_ov123_020e0a44);
    data_ov123_020e0a44 = 0;
    return 0;
}
