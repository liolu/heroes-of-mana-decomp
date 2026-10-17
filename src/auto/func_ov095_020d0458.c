#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_ScreenRGB_ON();                      /* extern */
M2C_UNK Routine_ScreenRGB_rgb(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_alpha(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_ScreenRGB_OFF();                      /* extern */
M2C_UNK Routine_ShakeScreen(M2C_UNK, M2C_UNK);      /* extern */

void func_ov095_020d0458(M2C_UNK arg0) {
    Routine_ScreenRGB_ON();
    Routine_ScreenRGB_rgb(0x1F, 0x10, 8, arg0);
    Routine_ScreenRGB_alpha(0x10, 0x18, arg0);
    WaitSyncCounter(0x20);
    Routine_ShakeScreen(1, 0x50);
    WaitSyncCounter(0x10);
    Routine_ScreenRGB_rgb(0, 0, 0, 0x10);
    Routine_ScreenRGB_alpha(0, 0x1F, 0x10);
    WaitSyncCounter(0x30);
    Routine_ScreenRGB_OFF();
}
