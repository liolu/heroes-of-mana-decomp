/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 data_ov003_020b0cf0[];

void checkEndOrderPos(void *arg0) {
    switch (M2C_FIELD(arg0, u8 *, 0xD0)) {
    case 3:
        if (((((u32) (M2C_FIELD((data_ov003_020b0cf0 + (M2C_FIELD(arg0, s8 *, 0xD1) * 0x110)), s32 *, 0) << 0x1F) >> 0x1F)) == 0)) {
            M2C_FIELD(arg0, u8 *, 0xD0) = 0;
        }
        break;
    case 2:
        if (((((u32) (M2C_FIELD((data_ov003_020b0cf0 + (M2C_FIELD(arg0, s8 *, 0xD1) * 0x110)), s32 *, 0) << 0x1F) >> 0x1F)) == 0)) {
            M2C_FIELD(arg0, u8 *, 0xD0) = 0;
        }
        break;
    case 1:
    case 6:
        if ((M2C_FIELD(arg0, s8 *, 0xD2) == M2C_FIELD(arg0, s8 *, 0x60))
            && (M2C_FIELD(arg0, s8 *, 0xD3) == M2C_FIELD(arg0, s8 *, 0x61))) {
            M2C_FIELD(arg0, u8 *, 0xD0) = 0;
        }
        break;
    }
}
