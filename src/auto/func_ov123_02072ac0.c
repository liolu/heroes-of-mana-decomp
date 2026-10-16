/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_ov123_02072bb8();                      /* extern */
extern s32 data_ov123_020e0a74;

void func_ov123_02072ac0(void) {
    s32 temp_r5;

    temp_r5 = func_0200fa98();
    if (data_ov123_020e0a74 != 0) {
        do {
            func_ov123_02072bb8();
        } while (data_ov123_020e0a74 != 0);
    }
    func_0200faac(temp_r5);
}
