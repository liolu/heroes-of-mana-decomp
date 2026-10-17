#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK MessagePutAndWait(s32);                   /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_ov027_020d0b2c(s32 arg0) {
    ObjSet(arg0, 0xE, 0xA, 0);
    ObjSet(arg0, 0x1B, 1, 0);
    CameraMoveAndWait(0x30, 1, arg0, 0, -1, -1, -1);
    WaitSyncCounter(0x20);
    if (arg0 == 0x16) {
        MessagePutAndWait(0x8CB);
    } else {
        MessagePutAndWait(0x8CA);
    }
    WaitSyncCounter(0x20);
    ObjSet(arg0, 0x15, 1, 0);
    WaitSyncCounter(0x90);
}
