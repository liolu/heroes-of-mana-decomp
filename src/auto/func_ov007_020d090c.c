#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_ScreenRGB_ON();                      /* extern */
M2C_UNK Routine_ScreenRGB_rgb(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_alpha(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_OFF();                      /* extern */
M2C_UNK Routine_SoundEffect(s32);                   /* extern */
M2C_UNK Routine_ShakeScreen(M2C_UNK, M2C_UNK);      /* extern */

void func_ov007_020d090c(M2C_UNK arg0) {
    Routine_ScreenRGB_ON();
    Routine_ScreenRGB_rgb(0x1F, 0x10, 8, arg0);
    Routine_ScreenRGB_alpha(0x10, 0x18, arg0);
    WaitSyncCounter(8);
    Routine_SoundEffect(0x28B);
    WaitSyncCounter(0x10);
    Routine_ShakeScreen(1, 0x50);
    WaitSyncCounter(0x20);
    Routine_ScreenRGB_rgb(0, 0, 0, 0x20);
    Routine_ScreenRGB_alpha(0, 0x1F, 0x20);
    WaitSyncCounter(0x40);
    Routine_ScreenRGB_OFF();
}
