#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK TG_setObjDirection_withRelay(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MTG_StartEvent();                      /* extern */
M2C_UNK MTG_GameOver(M2C_UNK, s32);          /* extern */

void func_ov020_020d09d0(void) {
    MTG_StartEvent();
    TG_setObjDirection_withRelay(0, 4);
    CameraMoveAndWait(0x30, 1, 0, 0, -1, -1, -1);
    WaitSyncCounter(0x40);
    MessagePutAndWait(0x63C);
    WaitSyncCounter(0x40);
    MTG_GameOver(0xF, 0x5DC);
}
