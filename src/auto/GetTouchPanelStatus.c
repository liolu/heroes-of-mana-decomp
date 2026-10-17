/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov000_020507a4;
extern M2C_UNK data_ov000_02051544;

s32 GetTouchPanelStatus(void) {
    M2C_UNK var_r0;
    u16 temp_r1;

    if (M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x13C) == 0) {
        temp_r1 = M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), u16 *, 0x144);
        if (temp_r1 != 0) {
            M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), u16 *, 0x144) = (u16) (temp_r1 - 1);
            if (M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), u16 *, 0x144) != 0) {
                var_r0 = 0;
            } else {
                var_r0 = 2;
            }
        } else {
            var_r0 = 2;
        }
    } else {
        var_r0                                                               = 3;
        M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), u16 *, 0x144) = 3U;
        if (M2C_FIELD(M2C_FIELD(&data_ov000_02051544, void **, 8), s32 *, 0x140) == 0) {
            var_r0 = 1;
        }
    }
    return var_r0;
}
