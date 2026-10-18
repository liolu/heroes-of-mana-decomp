/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov123_020dc83c[];
extern u8 data_ov123_020dc874[];

u32 data_ov123_020dc824[1] = {
    0x00010001
};
u32 data_ov123_020dc828[5] = {
    (u32)&data_ov123_020dc83c, 0x00000100, (u32)&data_ov123_020dc874, 0x00000003,
    (u32)&data_ov123_020dc824
};
