/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020bc1fc();                      /* extern */
M2C_UNK func_ov123_020c35ac(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c35c0(s32);                   /* extern */
void *func_ov123_020c35d4();                        /* extern */
extern void *data_ov123_020e4674;

void func_ov123_020bc940(s32 arg0) {
    M2C_UNK var_r5;
    void *temp_r0;

    temp_r0 = func_ov123_020c35d4();
    if (M2C_FIELD(temp_r0, u8 *, 0xF5) == arg0) {
        return;
    }
    if (arg0 != 0) {
        if (M2C_FIELD(data_ov123_020e4674, u8 *, 0x43) != 0) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
    } else {
        var_r5                                     = 0;
        M2C_FIELD(data_ov123_020e4674, u8 *, 0x43) = (u8) M2C_FIELD(temp_r0, u8 *, 0xF6);
    }
    func_ov123_020c35c0(arg0);
    func_ov123_020c35ac(var_r5);
    func_ov123_020bc1fc();
}
