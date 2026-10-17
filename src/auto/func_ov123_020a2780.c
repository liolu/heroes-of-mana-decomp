/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02099778(M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_ov123_0209d378(M2C_UNK);               /* extern */
M2C_UNK func_ov123_0209e5c4();                      /* extern */
extern s32 data_ov123_020e18e0;
extern M2C_UNK data_ov123_020e18e8;
extern s32 data_ov123_020e18ec;

void func_ov123_020a2780(void) {
    func_ov123_0209d378(0);
    if (data_ov123_020e18ec != 0) {
        func_ov123_02099778(4, data_ov123_020e18ec, 0);
        data_ov123_020e18ec = 0;
    }
    func_ov123_0209e5c4();
    if (data_ov123_020e18e0 != 0) {
        func_ov123_02099778(4, data_ov123_020e18e0, 0);
        data_ov123_020e18e0 = 0;
    }
    M2C_FIELD(&data_ov123_020e18e8, s8 *, 0) = 0;
    M2C_FIELD(&data_ov123_020e18e8, s8 *, 1) = 0;
}
