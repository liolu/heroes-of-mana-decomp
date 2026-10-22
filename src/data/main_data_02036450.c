/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02036238[];
extern u8 data_020362f0[];
extern u8 data_0203649c[];
extern u8 data_0203657c[];
extern u8 data_0203658c[];
extern u8 func_0202bac8[];
extern u8 func_0202badc[];
extern u8 func_0202bae8[];

u32 data_02036450[3]  = {0x00000001, (u32) &data_0203658c, (u32) &data_020362f0};
u32 data_0203645c[10] = {(u32) &data_0203657c, (u32) &data_0203649c, (u32) &data_02036238, 0x00000000, (u32) &data_02036238,
                         (u32) &func_0202bae8, (u32) &func_0202bac8, (u32) &func_0202badc, 0x00000000, (u32) &data_0203645c};
