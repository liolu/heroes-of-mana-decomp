#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK MTG_StartEvent();                      /* extern */
M2C_UNK MTG_GameOver(M2C_UNK, s32);          /* extern */

void func_ov026_020d0878(void) {
    MTG_StartEvent();
    WaitSyncCounter(0x1E);
    CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
    WaitSyncCounter(0x3C);
    MessagePutAndWait(0x893);
    WaitSyncCounter(0x3C);
    ObjSet(0x2A, 0x21, 1, 0);
    CameraMoveAndWait(0x60, 1, 0x2A, 0, -1, -1, -1);
    WaitSyncCounter(0x40);
    MessagePutAndWait(-1);
    WaitSyncCounter(0x3C);
    MTG_GameOver(0x15, 0x834);
}
