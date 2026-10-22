/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov123_020dcd40[];
extern u8 data_ov123_020dcdc0[];

u32 data_ov123_020dcd28[1] = {0x00010001};
u32 data_ov123_020dcd2c[5] = {(u32) &data_ov123_020dcd40, 0x00000080, (u32) &data_ov123_020dcdc0, 0x00000003,
                              (u32) &data_ov123_020dcd28};
