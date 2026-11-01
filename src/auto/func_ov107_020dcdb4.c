#include "m2c.h"

void changeOccWithKihon(s8, void *, s32, s8);
s32 GetNowUnitKazu(void *);
void researchHookObj(void *);
s32 GetHookAooNo(void *, s32, s32, s32);
s32 checkHookStatus(s32);
extern void *data_0203673c;

void func_ov107_020dcdb4(void *arg0) {
    u8 *base;
    s32 o;

    base = *(u8 **) ((u8 *) data_0203673c + 0x28);
    if (((u32) (*(u16 *) ((u8 *) arg0 + 0xA8) << 0x10) >> 0x1E) == 2) {
        changeOccWithKihon(0, arg0, 0, 0);
        if (GetNowUnitKazu(base + 0x2D0) < 0xA) {
            return;
        }
    }
    researchHookObj(arg0);
    o = GetHookAooNo(arg0, 2, 0, 1);
    if (o == -1 || checkHookStatus(o) != -1) {
        o = GetHookAooNo(arg0, 2, 1, 1);
    }
    if (o == -1) {
        return;
    }
    if (checkHookStatus(o) != -1) {
        return;
    }
    changeOccWithKihon(2, arg0, o, 0);
}
