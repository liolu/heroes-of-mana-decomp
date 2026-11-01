#include "m2c.h"

extern u8 *data_ov000_02051548;
extern void SetDestination(u8 *, s32, s32);
extern void researchHookObj(u8 *);
extern s32 GetHookAooNo(u8 *, s32, s32, s32);
extern s32 checkHookStatus(s32);
extern void changeOccWithKihon(s32, u8 *, s32, s32);

void func_ov107_020db148(u8 *obj) {
    s32 r5;
    u8 *g = data_ov000_02051548;

    if ((*(u32 *) (g + 0x8C) & 2) == 2) {
        SetDestination(obj, 0x13, 0x27);
        return;
    }
    if (((u32) * (u16 *) (obj + 0xA8) << 16) >> 30 == 2) {
        return;
    }
    researchHookObj(obj);
    r5 = GetHookAooNo(obj, 2, 0, 1);
    if (r5 == -1 || checkHookStatus(r5) != -1) {
        r5 = GetHookAooNo(obj, 2, 0, 2);
    }
    if (r5 == -1) {
        return;
    }
    if (checkHookStatus(r5) != -1) {
        return;
    }
    changeOccWithKihon(2, obj, r5, 0);
}
