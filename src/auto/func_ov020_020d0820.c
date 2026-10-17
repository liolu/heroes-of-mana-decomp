#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK MTG_StartEvent();                      /* extern */
M2C_UNK MTG_GameOver(M2C_UNK, s32);          /* extern */

void func_ov020_020d0820(void) {
    MTG_StartEvent();
    WaitSyncCounter(0x1E);
    CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
    WaitSyncCounter(0x3C);
    MessagePutAndWait(0x63B);
    WaitSyncCounter(0x3C);
    MTG_GameOver(0xF, 0x5DC);
}
