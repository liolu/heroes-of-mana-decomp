#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK EventDurringTitle(s32);                   /* extern */
M2C_UNK cameraTargetIconOFF();                      /* extern */
M2C_UNK PutBtlResultForFreeWithoutSave();                      /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */
M2C_UNK MTG_StartEvent();                      /* extern */

void func_ov045_020d07a8(void) {
    MTG_StartEvent();
    WaitSyncCounter(0x1E);
    CameraMoveAndWait(0x3C, 1, 0xB, 0, -1, -1, -1);
    WaitSyncCounter(0x3C);
    MessagePutAndWait(0x225C);
    WaitSyncCounter(0x3C);
    cameraTargetIconOFF();
    MTG_BGM_FadeOutAndChange(6);
    WaitSyncCounter(0x1E);
    EventDurringTitle(0x21FC);
    PutBtlResultForFreeWithoutSave();
}
