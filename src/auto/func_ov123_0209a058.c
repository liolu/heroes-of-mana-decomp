/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207acc0();                          /* extern */
M2C_UNK func_ov123_020885cc();                      /* extern */
M2C_UNK func_ov123_02099524(M2C_UNK, s32);          /* extern */
extern s32 *data_ov123_020e1748;
extern s32 data_ov123_020e174c;

void func_ov123_0209a058(void) {
    func_ov123_020885cc();
    data_ov123_020e174c = func_ov123_0207acc0();
    func_ov123_02099524(9, 0xFFFE8515);
    *data_ov123_020e1748 = 0;
}
