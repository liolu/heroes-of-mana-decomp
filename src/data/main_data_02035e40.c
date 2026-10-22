/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __mbtowc_noconv[];
extern u8 data_02035e30[];
extern u8 data_02035e34[];
extern u8 data_02035e38[];
extern u8 data_02035e78[];
extern u8 data_02035f38[];
extern u8 data_02035f50[];
extern u8 data_02035f5c[];
extern u8 data_02035f6c[];
extern u8 data_02035fc4[];
extern u8 func_020211e8[];

u32 data_02035e40[2] = {(u32) &__mbtowc_noconv, (u32) &func_020211e8};
u32 data_02035e48[4] = {0x00000020, 0x0000006E, 0x00000000, (u32) &data_02035e78};
u32 data_02035e58[8] = {(u32) &data_02035e38, (u32) &data_02035f5c, (u32) &data_02035f50, (u32) &data_02035f38,
                        (u32) &data_02035e34, (u32) &data_02035f6c, (u32) &data_02035fc4, (u32) &data_02035e30};
