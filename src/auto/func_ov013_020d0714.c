#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK MTG_StartEvent();                      /* extern */
M2C_UNK MTG_GameOver(M2C_UNK, M2C_UNK);      /* extern */

void func_ov013_020d0714(void) {
    MTG_StartEvent();
    CameraMoveAndWait(0x30, 1, 0xE, 0, -1, -1, -1);
    WaitSyncCounter(0x40);
    MessagePutAndWait(0x37A);
    WaitSyncCounter(0x40);
    MessagePutAndWait(-1);
    WaitSyncCounter(0x10);
    MessagePutAndWait(-1);
    WaitSyncCounter(0x40);
    MTG_GameOver(8, 0x320);
}
