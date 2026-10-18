/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov123_020dcc20[];
extern u8 data_ov123_020dcca0[];

u32 data_ov123_020dcc08[1] = {
    0x00010001
};
u32 data_ov123_020dcc0c[5] = {
    (u32)&data_ov123_020dcca0, 0x00000080, (u32)&data_ov123_020dcc20, 0x00000003,
    (u32)&data_ov123_020dcc08
};
