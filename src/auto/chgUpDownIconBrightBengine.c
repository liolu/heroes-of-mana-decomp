/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK UpDownColor(void *, s32, s32, M2C_UNK); /* extern */
extern void *data_ov000_02051548;
extern void *data_ov000_0205154c;
extern M2C_UNK data_ov003_020a95a0;

void chgUpDownIconBrightBengine(s32 arg6) {
    s32 temp_lr;
    s32 var_r4;

    if (M2C_FIELD(data_ov000_0205154c, u16 *, 0xA1E) != 0) {
        var_r4 = 0;
        do {
            temp_lr = M2C_FIELD(data_ov000_0205154c, u16 *, 0xA1E) + var_r4;
            UpDownColor(data_ov000_0205154c + 0x818 + (temp_lr << 5),
                        M2C_FIELD(data_ov000_0205154c, s32 *, 0x610) + (temp_lr << 5),
                        M2C_FIELD(data_ov000_02051548, s32 *, 0x1A4), 0xF);
            var_r4 += 1;
        } while (var_r4 < 4);
    }
}
