/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov120_020f3288[];
extern u8 data_ov120_020f3298[];

u32 data_ov120_020f3280[2] = {
    (u32)&data_ov120_020f3298, (u32)&data_ov120_020f3288
};
