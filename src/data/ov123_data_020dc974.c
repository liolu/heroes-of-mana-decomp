/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov123_020dc98c[];
extern u8 data_ov123_020dc9dc[];

u32 data_ov123_020dc974[1] = {0x00010001};
u32 data_ov123_020dc978[5] = {(u32) &data_ov123_020dc98c, 0x00000080, (u32) &data_ov123_020dc9dc, 0x00000003,
                              (u32) &data_ov123_020dc974};
