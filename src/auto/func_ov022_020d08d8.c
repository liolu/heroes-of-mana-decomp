#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK MTG_StartEvent();                      /* extern */
M2C_UNK MTG_GameOver(M2C_UNK, s32);          /* extern */
extern void *data_ov000_02051548;

void func_ov022_020d08d8(void) {
    MTG_StartEvent();
    WaitSyncCounter(0x1E);
    CameraMoveAndWait(0x3C, 1, 0, 0, -1, -1, -1);
    WaitSyncCounter(0x3C);
    MessagePutAndWait(0x703);
    WaitSyncCounter(0x3C);
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x48) == 1) {
        CameraMoveAndWait(0x60, 1, 0x20, 0, -1, -1, -1);
        WaitSyncCounter(0x40);
        MessagePutAndWait(-1);
        WaitSyncCounter(0x3C);
    }
    MTG_GameOver(0x11, 0x6A4);
}
