#include "m2c.h"
M2C_UNK func_ov123_020bc1fc();
M2C_UNK func_ov123_020c35ac(s8);
void *func_ov123_020c35d4();
extern void *data_ov123_020e4674;

void func_ov123_020bc908(s8 arg0) {
    u8 v = M2C_FIELD(func_ov123_020c35d4(), u8 *, 0xF6);
    if (v == arg0) {
        return;
    }
    M2C_FIELD(data_ov123_020e4674, s8 *, 0x43) = arg0;
    func_ov123_020c35ac(arg0);
    func_ov123_020bc1fc();
}
