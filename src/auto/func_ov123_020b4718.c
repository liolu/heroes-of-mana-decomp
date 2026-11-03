#include "m2c.h"

extern s32 data_ov123_020e4614;
extern u8 data_ov123_020e460c;
extern u8 data_ov123_020d7e48[];

void func_ov123_020c1c4c(s32, u8, u8);

void func_ov123_020b4718(void) {
    u8 v = data_ov123_020d7e48[data_ov123_020e460c];

    func_ov123_020c1c4c(data_ov123_020e4614, v, v);
}
