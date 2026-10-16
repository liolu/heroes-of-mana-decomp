#include "m2c.h"

M2C_UNK func_ov123_020af480(s8, M2C_UNK);           /* extern */
extern void *data_ov123_020e45bc;

void func_ov123_020afac0(s8 arg0) {
    if (arg0 == M2C_FIELD(data_ov123_020e45bc, s8 *, 0x11F)) {
        return;
    }
    func_ov123_020af480(arg0, 1);
    func_ov123_020af480(M2C_FIELD(data_ov123_020e45bc, s8 *, 0x11F), 0);
    M2C_FIELD(data_ov123_020e45bc, s8 *, 0x11F) = arg0;
}
