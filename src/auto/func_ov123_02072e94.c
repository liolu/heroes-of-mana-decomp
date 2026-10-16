/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02069230(M2C_UNK);               /* extern */
s32 func_ov123_02070508();                          /* extern */
M2C_UNK func_ov123_02072ac0();                      /* extern */
M2C_UNK func_ov123_02072d6c(s32);                   /* extern */
s32 func_ov123_02072e58(s32);                       /* extern */
s32 func_ov123_02072f14();                          /* extern */
extern s32 data_ov123_020e0a10;

s32 func_ov123_02072e94(void) {
    s32 var_r4;

    if (data_ov123_020e0a10 != 0) {
        var_r4 = func_ov123_02072f14();
        if (var_r4 == 0) {
            func_ov123_02072d6c(data_ov123_020e0a10);
            if (func_ov123_02072e58(data_ov123_020e0a10) != 0) {
                data_ov123_020e0a10 = 0;
            }
            var_r4 = -0x1A;
        }
        func_ov123_02072ac0();
    } else if (func_ov123_02070508() == 0) {
        var_r4 = -0x1A;
    } else {
        func_ov123_02069230(0);
        var_r4 = 0;
    }
    return var_r4;
}
