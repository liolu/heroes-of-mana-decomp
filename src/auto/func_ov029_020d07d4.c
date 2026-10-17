#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_ScreenRGB_ON();                      /* extern */
M2C_UNK Routine_ScreenRGB_rgb(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_alpha(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_OFF();                      /* extern */
M2C_UNK Routine_SoundEffect(M2C_UNK);               /* extern */
M2C_UNK Routine_ShakeScreen(M2C_UNK, M2C_UNK);      /* extern */

void func_ov029_020d07d4(void) {
    Routine_ScreenRGB_ON();
    Routine_ScreenRGB_rgb(0x1D, 0x17, 0x1C, 2);
    Routine_ScreenRGB_alpha(0x1E, 0x14, 2);
    Routine_ShakeScreen(1, 0);
    WaitSyncCounter(2);
    Routine_SoundEffect(0x290);
    Routine_ScreenRGB_rgb(0, 0, 0, 0x20);
    Routine_ScreenRGB_alpha(0, 0x1F, 0x20);
    WaitSyncCounter(0x20);
    Routine_ShakeScreen(0, 0);
    Routine_ScreenRGB_OFF();
}
