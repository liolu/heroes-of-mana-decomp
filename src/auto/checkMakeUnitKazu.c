/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetNowUnitKazu(s32);                       /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov109_020e9d8c;
extern s32 *data_ov109_020ea340;

s32 checkMakeUnitKazu(void) {
    M2C_UNK var_r0;

    if ((s32) (0x19 - GetNowUnitKazu((((u32) (*data_ov109_020ea340 << 0xF) >> 0x1C) * 0x2D0) +
                                     M2C_FIELD(data_0203673c, s32 *, 0x28))) >= 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
