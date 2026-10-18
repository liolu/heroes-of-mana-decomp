/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02035cf0[];

u32 mbi_life_frame[4] = {
    0x0028FFFF, 0xFFFF0028, (u32)&data_02035cf0, 0x00000001
};
