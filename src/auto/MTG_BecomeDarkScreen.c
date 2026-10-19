/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_ScreenRGB_ON(s32);                   /* extern */
M2C_UNK Routine_ScreenRGB_rgb(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_alpha(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020ad3e8;

void MTG_BecomeDarkScreen(M2C_UNK arg0) {
    Routine_ScreenRGB_ON(arg0);
    Routine_ScreenRGB_rgb(0, 0, 0, 0x3C);
    Routine_ScreenRGB_alpha(0x1F, 8, 0x3C);
    WaitSyncCounter(0x3C);
}
