#include "m2c.h"

M2C_UNK func_ov123_020b0e9c(s8, M2C_UNK);           /* extern */
extern void *data_ov123_020e45c0;

void func_ov123_020b13cc(s8 arg0) {
    if (arg0 == M2C_FIELD(data_ov123_020e45c0, s8 *, 0x62)) {
        return;
    }
    func_ov123_020b0e9c(arg0, 1);
    func_ov123_020b0e9c(M2C_FIELD(data_ov123_020e45c0, s8 *, 0x62), 0);
    M2C_FIELD(data_ov123_020e45c0, s8 *, 0x62) = arg0;
}
