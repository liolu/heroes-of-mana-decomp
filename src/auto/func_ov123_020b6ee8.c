/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_ov123_020e4644;
extern M2C_UNK func_ov123_020b6b7c;
extern M2C_UNK func_ov123_020b6df0;

void func_ov123_020b6ee8(void) {
    if (func_ov123_020ae120() == -2) {
        return;
    }
    data_ov123_020e4644 = func_ov123_020cb6ac(1, &func_ov123_020b6b7c, 0, 0x78);
    func_ov123_020b2410(&func_ov123_020b6df0);
}
