/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208bf30();                      /* extern */
M2C_UNK func_ov123_0208ee68(s32);                   /* extern */
M2C_UNK func_ov123_02099778(M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_ov123_0209d354(M2C_UNK);               /* extern */
void *func_ov123_0209d368();                        /* extern */
M2C_UNK func_ov123_0209e5c4();                      /* extern */
extern s32 data_ov123_020e18ec;

void func_ov123_020a2318(void) {
    if (func_ov123_0209d368() == NULL) {
        return;
    }
    if (M2C_FIELD(func_ov123_0209d368(), s32 *, 0xE4) != 0) {
        func_ov123_0208ee68(M2C_FIELD(func_ov123_0209d368(), s32 *, 0xE4));
        M2C_FIELD(func_ov123_0209d368(), s32 *, 0xE4) = 0;
    }
    func_ov123_0208bf30();
    func_ov123_0209d354(0);
    if (data_ov123_020e18ec != 0) {
        func_ov123_02099778(4, data_ov123_020e18ec, 0);
        data_ov123_020e18ec = 0;
    }
    func_ov123_0209e5c4();
    M2C_FIELD(func_ov123_0209d368(), s8 *, 0x18) = 1;
}
