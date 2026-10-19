/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_0205154c;
extern M2C_UNK data_ov003_020aaf2c;

s32 ScrollCheckScreenEdge(void) {
    M2C_UNK var_r0;
    u16 temp_r0;
    u16 temp_r0_2;

    temp_r0 = M2C_FIELD(data_ov000_0205154c, u16 *, 0x28);
    if (((u32) temp_r0 < 0x14U) || ((u32) temp_r0 > 0xECU) ||
        (temp_r0_2 = M2C_FIELD(data_ov000_0205154c, u16 *, 0x2A), ((u32) temp_r0_2 < 0x14U)) || ((u32) temp_r0_2 > 0xACU)) {
        M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) = 0U;
        if ((u32) M2C_FIELD(data_ov000_0205154c, u16 *, 0x28) < 0x14U) {
            M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) = (u16) (M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) | 0x20);
        }
        if ((u32) M2C_FIELD(data_ov000_0205154c, u16 *, 0x28) > 0xECU) {
            M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) = (u16) (M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) | 0x10);
        }
        if ((u32) M2C_FIELD(data_ov000_0205154c, u16 *, 0x2A) < 0x14U) {
            M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) = (u16) (M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) | 0x40);
        }
        if ((u32) M2C_FIELD(data_ov000_0205154c, u16 *, 0x2A) > 0xACU) {
            M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) = (u16) (M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) | 0x80);
        }
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
