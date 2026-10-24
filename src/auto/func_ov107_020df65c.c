#include "m2c.h"

typedef struct {
    u8 p0[0x68];
    s32 cnt;
    u8 p6c[0x20];
    s32 flags;
} G;

extern G *data_ov000_02051548;
void ActionWazaByLogic(void *, s32, s32, s32);
void ReadySetUpWazaAt(void *);
s32 distanceForBattle(void *, void *);
void changeOcc(s32, void *, void *, s32);
s32 func_0202d478(s32, u16);

void func_ov107_020df65c(void *a0, void *a1) {
    G *g   = data_ov000_02051548;
    s32 v  = g->flags;
    s32 f1 = v & 0x200000;
    s32 f2 = v & 0x400000;
    if (g->cnt >= 6 && f1 != 0x200000) {
        if (f2 != 0x400000) {
            ActionWazaByLogic(a0, 0xD, 0x132, 0xD - 0xE);
            data_ov000_02051548->flags |= 0x400000;
        } else {
            ActionWazaByLogic(a0, 0xD, 0xD + 0x138, 0xD - 0xE);
        }
        data_ov000_02051548->flags |= 0x200000;
        data_ov000_02051548->cnt = data_ov000_02051548->cnt + 1;
        return;
    }
    g->cnt = g->cnt + 1;
    {
        u8 *s = *(u8 **) ((u8 *) a0 + 0xE8);
        if (func_0202d478(*(u16 *) (s + 0x10) * 0x64, *(u16 *) (s + 0x12)) >= 0x1E) {
            return;
        }
    }
    ReadySetUpWazaAt(a0);
    if (distanceForBattle(a1, a0) == 1) {
        changeOcc(3, a0, a1, 0);
    }
}
