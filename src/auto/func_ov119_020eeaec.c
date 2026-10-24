#include "m2c.h"

typedef struct E {
    s16 a;
    s16 b;
    s16 c;
    u8 pad[0x18 - 6];
} E;

typedef struct G {
    u8 pad0[0x14];
    u8 *tab;
    u8 pad1[0x14];
    E e[8];
    u8 pad2[4];
    s32 idx;
    u8 pad3[0x404];
    u16 st;
    u16 fl : 1;
} G;

void GXx_SetMasterBrightness_(s32, s16);
s16 func_ov119_020edf78(s32);
extern G *data_ov119_020f2f68;

void func_ov119_020eeaec(void) {
    G *g;

    g = data_ov119_020f2f68;
    if (g->tab[g->st + 1] == 0) {
        g->e[g->idx].a                                     = func_ov119_020edf78(2);
        data_ov119_020f2f68->e[data_ov119_020f2f68->idx].b = data_ov119_020f2f68->e[data_ov119_020f2f68->idx].a;
        data_ov119_020f2f68->e[data_ov119_020f2f68->idx].c = 0;
        data_ov119_020f2f68->st += 4;
        return;
    }
    g->e[g->idx].a -= 1;
    if (data_ov119_020f2f68->e[data_ov119_020f2f68->idx].a == 0) {
        data_ov119_020f2f68->e[data_ov119_020f2f68->idx].a = data_ov119_020f2f68->e[data_ov119_020f2f68->idx].b;
        data_ov119_020f2f68->e[data_ov119_020f2f68->idx].c -= 1;
        GXx_SetMasterBrightness_(0x0400006C, data_ov119_020f2f68->e[data_ov119_020f2f68->idx].c);
        GXx_SetMasterBrightness_(0x0400106C, data_ov119_020f2f68->e[data_ov119_020f2f68->idx].c);
        *(volatile u16 *) 0x04000050 = 0;
        *(volatile u16 *) 0x04001050 = 0;
        if (data_ov119_020f2f68->e[data_ov119_020f2f68->idx].c <= -0x10) {
            data_ov119_020f2f68->st += 2;
        }
    }
    data_ov119_020f2f68->fl = 1;
}
