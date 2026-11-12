#include "m2c.h"

typedef struct {
    u16 c0 : 5;
    u16 c1 : 5;
    u16 c2 : 5;
    u16 r : 1;
    u16 pad2;
    u32 b0 : 1;
    u32 b1 : 1;
    u32 f0 : 1;
    u32 pad3 : 8;
    u32 f11 : 9;
    u32 f20 : 9;
    u32 g29 : 1;
    u32 g30 : 1;
    u32 g31 : 1;
    u32 w8;
    u32 wc;
    u8 pad10[0x400];
} Ent;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 f0 : 1;
    u32 pad3 : 8;
    u32 f11 : 9;
    u32 f20 : 9;
    u32 g29 : 1;
    u32 g30 : 1;
    u32 g31 : 1;
} FE;

typedef struct {
    u16 c0 : 5;
    u16 c1 : 5;
    u16 c2 : 5;
    u16 r : 1;
} CE;

typedef struct {
    u8 pad0[0x400];
    Ent g[8];
} PS;

typedef struct {
    u8 pad0[0x28];
    u8 *p28;
    u8 pad2c[0x50c - 0x2c];
    u16 h50c;
} P2;

typedef struct {
    u8 pad[0xc20];
    Ent h[2];
} H2;

extern PS *data_ov111_020ec1a4;
extern P2 *data_ov111_020f1bd8;
extern s32 func_ov111_020e5d98(s32);

void func_ov111_020e7f9c(void) {
    s32 a4;
    s32 f0;
    s32 f1;
    s32 idx;
    s32 a6;
    s32 a8;
    s32 a10;
    s32 a12;
    s32 f2;
    s32 b;
    s32 k;
    s32 off;

    idx = func_ov111_020e5d98(2);
    a4  = func_ov111_020e5d98(4);
    a6  = func_ov111_020e5d98(6);
    a8  = func_ov111_020e5d98(8);
    a10 = func_ov111_020e5d98(10);
    a12 = func_ov111_020e5d98(12);
    b   = data_ov111_020f1bd8->p28[data_ov111_020f1bd8->h50c + 1];
    f0  = b & 1;
    f1  = (b >> 4) & 1;
    f2  = (b >> 7) & 1;
    if (a4 & 0x10) {
        data_ov111_020ec1a4->g[4].b1  = 1;
        data_ov111_020ec1a4->g[4].c0  = (u16) a6;
        data_ov111_020ec1a4->g[4].c1  = (u16) a8;
        data_ov111_020ec1a4->g[4].c2  = (u16) a10;
        data_ov111_020ec1a4->g[4].f11 = 0;
        data_ov111_020ec1a4->g[4].f20 = 0x100;
        data_ov111_020ec1a4->g[4].w8  = 0;
        data_ov111_020ec1a4->g[4].wc  = a12;
        data_ov111_020ec1a4->g[4].f0  = f0;
        data_ov111_020ec1a4->g[4].g29 = f1;
        data_ov111_020ec1a4->g[4].g30 = f2;
    }
    if (a4 & 0x14) {
        for (k = 1, off = 0x410; k < 5; k++) {
            ((FE *) ((u8 *) data_ov111_020ec1a4 + 0x1444 + off))->b1  = 1;
            ((Ent *) ((u8 *) data_ov111_020ec1a4 + 0x1440 + off))->c0 = (u16) a6;
            ((Ent *) ((u8 *) data_ov111_020ec1a4 + 0x1440 + off))->c1 = (u16) a8;
            ((Ent *) ((u8 *) data_ov111_020ec1a4 + 0x1440 + off))->c2 = (u16) a10;
            ((FE *) ((u8 *) data_ov111_020ec1a4 + 0x1444 + off))->f11 = 0;
            ((FE *) ((u8 *) data_ov111_020ec1a4 + 0x1444 + off))->f20 = 0x100;
            *(u32 *) ((u8 *) data_ov111_020ec1a4 + 0x1448 + off)      = 0;
            *(u32 *) ((u8 *) data_ov111_020ec1a4 + 0x144c + off)      = a12;
            ((FE *) ((u8 *) data_ov111_020ec1a4 + 0x1444 + off))->f0  = f0;
            ((FE *) ((u8 *) data_ov111_020ec1a4 + 0x1444 + off))->g29 = f1;
            ((FE *) ((u8 *) data_ov111_020ec1a4 + 0x1444 + off))->g30 = f2;
            off += 0x410;
        }
    }
    if (a4 & 4) {
        ((FE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x404))->b1  = 1;
        ((CE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x400))->c0  = (u16) a6;
        ((CE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x400))->c1  = (u16) a8;
        ((CE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x400))->c2  = (u16) a10;
        ((FE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x404))->f11 = 0;
        ((FE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x404))->f20 = 0x100;
        *(u32 *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x408)      = 0;
        *(u32 *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x40c)      = a12;
        ((FE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x404))->f0  = f0;
        ((FE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x404))->g29 = f1;
        ((FE *) ((u8 *) data_ov111_020ec1a4 + idx * 0x410 + 0x404))->g30 = f2;
    }
    if (a4 & 8) {
        ((H2 *) data_ov111_020ec1a4)->h[idx].b1  = 1;
        ((H2 *) data_ov111_020ec1a4)->h[idx].c0  = (u16) a6;
        ((H2 *) data_ov111_020ec1a4)->h[idx].c1  = (u16) a8;
        ((H2 *) data_ov111_020ec1a4)->h[idx].c2  = (u16) a10;
        ((H2 *) data_ov111_020ec1a4)->h[idx].f11 = 0;
        ((H2 *) data_ov111_020ec1a4)->h[idx].f20 = 0x100;
        ((H2 *) data_ov111_020ec1a4)->h[idx].w8  = 0;
        ((H2 *) data_ov111_020ec1a4)->h[idx].wc  = a12;
        ((H2 *) data_ov111_020ec1a4)->h[idx].f0  = f0;
        ((H2 *) data_ov111_020ec1a4)->h[idx].g29 = f1;
        ((H2 *) data_ov111_020ec1a4)->h[idx].g30 = f2;
    }
    data_ov111_020f1bd8->h50c += 0xe;
}
