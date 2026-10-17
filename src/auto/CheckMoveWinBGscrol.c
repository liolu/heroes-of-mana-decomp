/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SetWinBGscrolOut(u32);                   /* extern */
extern M2C_UNK data_ov000_02051124;
extern void *data_ov000_02051550;

s32 CheckMoveWinBGscrol(void) {
    M2C_UNK var_r0;
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(data_ov000_02051550, u16 *, 0x338) << 0x19) >> 0x1F;
    if (temp_r0 != 0) {
        if (M2C_FIELD(data_ov000_02051550, s8 *, 0x454) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
    } else {
        SetWinBGscrolOut(temp_r0);
        var_r0 = 0;
    }
    return var_r0;
}
