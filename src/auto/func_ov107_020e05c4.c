#include "m2c.h"
typedef struct {
    u8 pad[0x10];
    u16 h10;
    u16 h12;
} Q;
typedef struct {
    u8 pad[0x68];
    s32 f68;
    u8 pad2[0x20];
    u32 f8c;
} G;
typedef struct {
    u8 pad[0xe8];
    Q *q;
} U;
extern G *data_ov000_02051548;
extern void ActionWazaByLogic(U *, s32, s32, s32);
extern s32 func_0202d478(s32, s32);
extern void ReadySetUpWazaAt(U *);
extern s32 distanceForBattle(s32, U *);
extern void changeOcc(s32, U *, s32, s32);

void func_ov107_020e05c4(U *u, s32 t) {
    G *g   = data_ov000_02051548;
    u32 fl = g->f8c & 0x200000;
    if (g->f68 >= 14 && fl != 0x200000) {
        ActionWazaByLogic(u, 13, 0x145, -1);
        data_ov000_02051548->f8c |= 0x200000;
        data_ov000_02051548->f68 += 1;
        return;
    }
    g->f68 += 1;
    if (func_0202d478(u->q->h10 * 100, u->q->h12) >= 30) {
        return;
    }
    ReadySetUpWazaAt(u);
    if (distanceForBattle(t, u) != 1) {
        return;
    }
    changeOcc(3, u, t, 0);
}
