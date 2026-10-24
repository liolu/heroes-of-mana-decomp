#include "m2c.h"

typedef struct U {
    u8 pad[0xA8];
    u16 pad1 : 14;
    u16 st : 2;
    u8 pad2[0x3C];
    u16 *p;
} U;
s32 func_0202d478(s32, u16);
void ReOrderOrderUnit(void *);
void researchHookObj(void *);
s32 GetHookAooNo(void *, s32, s32, s32);
s32 checkHookStatus(s32);
void changeOcc(s32, void *, s32, s32);

void func_ov107_020d96c0(U *arg0) {
    s32 r;
    if (arg0->st == 2) {
        u16 *q = arg0->p;
        if (func_0202d478(q[8] * 100, q[9]) >= 50) {
            ReOrderOrderUnit(arg0);
            return;
        }
    }
    researchHookObj(arg0);
    r = GetHookAooNo(arg0, 0, 0, 1);
    if (r == -1 || checkHookStatus(r) != -1) {
        r = GetHookAooNo(arg0, 0, 0, 2);
    }
    if (r == -1) {
        return;
    }
    if (checkHookStatus(r) != -1) {
        return;
    }
    changeOcc(2, arg0, r, 0);
}
