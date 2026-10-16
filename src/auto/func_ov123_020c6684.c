/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK WM_GetSharedDataAddress(s32, s32, M2C_UNK); /* extern */
extern s32 data_ov123_020e4708;

void func_ov123_020c6684(M2C_UNK arg0) {
    WM_GetSharedDataAddress(data_ov123_020e4708 + 0x13E0, data_ov123_020e4708 + 0x1C00, arg0);
}
