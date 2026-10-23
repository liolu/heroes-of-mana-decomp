#include "m2c.h"

typedef struct {
    u32 st : 8;
    u32 b : 8;
    u32 c : 3;
    u32 rest : 13;
    u16 h4;
    u16 h6;
    u8 pad[16];
} Rec;

typedef struct {
    u8 pad[0x20];
    Rec rec[8];
    u8 pad2[0x10];
    s32 cur;
    u8 pad3[0x4f8 - 0xf4];
    u16 f8;
    u16 fa0 : 1;
    u16 fa1 : 15;
} P;

typedef struct {
    s32 x0;
    P *p;
} D;

extern P *data_ov119_020f2f68;
extern D data_ov119_020f2750;
s32 func_ov119_020edf40(s32);
s32 func_ov119_020ede90(s32, s32);
s32 func_ov119_020edf78(s32);

void func_ov119_020f0278(void) {
    s32 a;
    s32 b;
    s32 k;
    P *pp;
    a  = func_ov119_020edf40(1);
    b  = func_ov119_020edf40(3);
    pp = &data_ov119_020f2750.p[a];
    switch (data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].c) {
        case 0:
            for (k = 1; k < 8; k++) {
                if (pp->rec[k].st == 0xf) {
                    pp->rec[k].h4                                        = func_ov119_020ede90(a, b);
                    pp->rec[k].st                                        = func_ov119_020edf78(5);
                    pp->rec[k].h6                                        = a;
                    data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].b = k;
                    data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].c = 1;
                    data_ov119_020f2f68->fa0                             = 1;
                    return;
                }
            }
            break;
        case 1:
            if (pp->cur == data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].b ||
                pp->rec[data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].b].st == 0xf) {
                data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].c = 2;
            } else {
                data_ov119_020f2f68->fa0 = 1;
            }
            break;
        case 2:
            if (pp->rec[data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].b].st == 0xf) {
                data_ov119_020f2f68->rec[data_ov119_020f2f68->cur].c = 0;
                data_ov119_020f2f68->f8 += 7;
            } else {
                data_ov119_020f2f68->fa0 = 1;
            }
            break;
    }
}
