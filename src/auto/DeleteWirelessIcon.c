/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteNoAnimeObjOnlyOne();                      /* extern */
M2C_UNK ReleaseWirelessIconPal(s32);                   /* extern */
M2C_UNK ResetWirelessIconBit(s32);                   /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a9b2c;

void DeleteWirelessIcon(s32 arg6) {
    s32 var_r4;
    s32 var_r5;

    var_r4 = 0;
    var_r5 = 0;
    do {
        if (M2C_FIELD((data_ov000_02051548 + var_r5), s32 *, 0x47C) != 0) {
            DeleteNoAnimeObjOnlyOne();
            M2C_FIELD((data_ov000_02051548 + var_r5), s32 *, 0x47C) = 0;
            ResetWirelessIconBit(var_r4);
            ReleaseWirelessIconPal(var_r4);
        }
        var_r4 += 1;
        var_r5 += 0x18;
    } while (var_r4 < 2);
}
