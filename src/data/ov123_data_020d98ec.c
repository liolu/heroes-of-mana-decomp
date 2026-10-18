/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov123_020d98c0[];
extern u8 data_ov123_020d98c8[];
extern u8 data_ov123_020d98cc[];
extern u8 data_ov123_020d98d4[];
extern u8 data_ov123_020d98e0[];

u32 data_ov123_020d98ec[3] = {
    0x8648862A, 0x01010DF7, 0x00000005
};
u32 data_ov123_020d98f8[6] = {
    (u32)&data_ov123_020d98c0, (u32)&data_ov123_020d98d4, (u32)&data_ov123_020d98cc, (u32)&data_ov123_020d98e0,
    (u32)&data_ov123_020d98ec, (u32)&data_ov123_020d98c8
};
