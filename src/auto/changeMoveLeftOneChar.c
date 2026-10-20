/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov109_020ea340;

void changeMoveLeftOneChar(void *arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x70);
    if ((temp_r3 != 0xFF30) && ((u32) temp_r3 >= 0xFF08U) && ((u32) temp_r3 <= 0xFF32U)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 8);
        if (((u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 4) << 0x1B) >> 0x1B) == 0xE) {
            if (M2C_FIELD(arg0, s32 *, 0) < 0x58) {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~1);
            }
        } else if (M2C_FIELD(arg0, s32 *, 0) < 0x40) {
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~1);
        }
    }
}
