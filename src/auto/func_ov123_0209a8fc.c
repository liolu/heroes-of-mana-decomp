/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0209a970();                          /* extern */
M2C_UNK func_ov123_0209a9e4();                      /* extern */
M2C_UNK func_ov123_0209aa14(u8);                    /* extern */
extern s32 data_ov123_020e1748;

s32 func_ov123_0209a8fc(s32 arg0, s32 arg1) {
    u8 var_ip;

    var_ip = 0;
    if (arg1 > 0) {
    loop_2:
        if (arg0 != M2C_FIELD((data_ov123_020e1748 + (var_ip * 4)), s32 *, 0x448)) {
            var_ip += 1;
            if ((s32) var_ip < arg1) {
                goto loop_2;
            }
        }
    }
    if ((s32) var_ip >= arg1) {
        return 0;
    }
    func_ov123_0209aa14(M2C_FIELD((data_ov123_020e1748 + var_ip), u8 *, 0x624));
    func_ov123_0209a9e4();
    return func_ov123_0209a970();
}
