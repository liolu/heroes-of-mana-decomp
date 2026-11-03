/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020ae754(s32, u16, u16, u16);
extern u8 data_ov123_020e464c;
extern u16 data_ov123_020d7f20[];

void func_ov123_020b76b8(void) {
    s32 k;

    k = data_ov123_020e464c;
    func_ov123_020ae754((u32) k < 4U ? 2 : 3, data_ov123_020d7f20[k * 4], data_ov123_020d7f20[k * 4 + 2],
                        data_ov123_020d7f20[k * 4 + 1]);
}
