/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov123_020dce58[];
extern u8 data_ov123_020dced8[];

u32 data_ov123_020dce40[1] = {
    0x00010001
};
u32 data_ov123_020dce44[5] = {
    (u32)&data_ov123_020dced8, 0x00000080, (u32)&data_ov123_020dce58, 0x00000003,
    (u32)&data_ov123_020dce40
};
