/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov123_020dcb38[];
extern u8 data_ov123_020dcb88[];

u32 data_ov123_020dcb20[1] = {
    0x00010001
};
u32 data_ov123_020dcb24[5] = {
    (u32)&data_ov123_020dcb38, 0x00000080, (u32)&data_ov123_020dcb88, 0x00000003,
    (u32)&data_ov123_020dcb20
};
