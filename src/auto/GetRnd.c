/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_0205154c;
extern M2C_UNK data_ov003_020a7a08;

s32 GetRnd(void) {
    u32 temp_r3;

    M2C_FIELD(data_ov000_0205154c, u32 *, 0x150) = (u32) (M2C_FIELD(data_ov000_0205154c, u32 *, 0x150) * 2);
    temp_r3                                      = M2C_FIELD(data_ov000_0205154c, u32 *, 0x150);
    M2C_FIELD(data_ov000_0205154c, u32 *, 0x150) = (u32) (temp_r3 + *(u16 *) 0x04000006 + (temp_r3 >> 8));
    M2C_FIELD(data_ov000_0205154c, u32 *, 0x150) = (u32) (M2C_FIELD(data_ov000_0205154c, u32 *, 0x150) + *(u16 *) 0x04000006);
    return (u16) M2C_FIELD(data_ov000_0205154c, u32 *, 0x150);
}
