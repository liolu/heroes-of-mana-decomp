/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae5c8(s32);                       /* extern */
s32 func_ov123_020c887c(s32, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020de378;
extern s32 data_ov123_020e46d8;
extern M2C_UNK func_ov123_020c37a8;

void func_ov123_020c37f4(s32 arg0) {
    data_ov123_020e46d8 = func_ov123_020c887c(func_ov123_020ae5c8(*(s32 *) ((u8 *) &data_ov123_020de378 + (arg0 * 4))), 0, 4);
    func_ov123_020cb6ac(1, &func_ov123_020c37a8, 0, 0x78);
}
