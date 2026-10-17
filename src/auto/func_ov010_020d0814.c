#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK MoveOnPlanTimer();                      /* extern */
M2C_UNK MTG_StartEvent();                      /* extern */
M2C_UNK MTG_EndEvent();                      /* extern */

void func_ov010_020d0814(void) {
    MTG_StartEvent();
    CameraMoveAndWait(0x30, 1, 9, 0, -1, -1, -1);
    WaitSyncCounter(0x40);
    ObjSet(9, 0xE, 0xA, 0);
    ObjSet(9, 0x1B, 1, 0);
    MessagePutAndWait(0x247);
    WaitSyncCounter(0x10);
    ObjSet(9, 0xE, 0, 0);
    ObjSet(9, 0x1B, 0, 0);
    MoveOnPlanTimer();
    MTG_EndEvent();
}
