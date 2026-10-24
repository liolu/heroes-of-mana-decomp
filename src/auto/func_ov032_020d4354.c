#include "m2c.h"
extern s32 GetUnitStatus(s32);
extern void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
extern void WaitSyncCounter(s32);
extern void TG_objLookObj_withRelay(s32, s32);

void func_ov032_020d4354(s32 a) {
    if (GetUnitStatus(a) != 3) {
        return;
    }
    CameraMoveAndWait(0x40, 1, a, 0, -1, -1, -1);
    WaitSyncCounter(0x10);
    if (GetUnitStatus(0xF01) == 0) {
        TG_objLookObj_withRelay(a, 0xF01);
        return;
    }
    if (GetUnitStatus(0xF02) == 0) {
        TG_objLookObj_withRelay(a, 0xF02);
        return;
    }
    if (GetUnitStatus(0xF03) != 0) {
        return;
    }
    TG_objLookObj_withRelay(a, 0xF03);
}
