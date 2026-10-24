#include "m2c.h"
s32 GetUnitStatus(s32);
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
void TG_objLookObj_withRelay(s32, s32);
void WaitSyncCounter(u16);
void MessagePutAndWait(s32);
void func_ov032_020d42d8(s32 msg) {
    if (GetUnitStatus(1) != 0) {
        CameraMoveAndWait(0x30, 1, 1, 0, -1, -1, -1);
        TG_objLookObj_withRelay(1, 0);
    } else {
        CameraMoveAndWait(0x30, 1, 0xb, 0, -1, -1, -1);
    }
    WaitSyncCounter(0x20);
    MessagePutAndWait(msg);
}
