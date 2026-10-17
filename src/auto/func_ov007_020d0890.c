#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_MessageRect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK MessagePutAndWait(M2C_UNK);               /* extern */
M2C_UNK MTG_BecomeDarkScreen();                      /* extern */
M2C_UNK MTG_ReturnDarkScreen();                      /* extern */

void func_ov007_020d0890(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    WaitSyncCounter(0xA);
    Routine_MessageRect(arg1, arg2, 0x1C, 8);
    MTG_BecomeDarkScreen();
    MessagePutAndWait(arg0);
    MTG_ReturnDarkScreen();
}
