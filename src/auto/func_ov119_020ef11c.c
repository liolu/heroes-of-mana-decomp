#include "m2c.h"

typedef struct {
    u16 a : 5;
    u16 b : 5;
    u16 c : 5;
    u16 d : 1;
} F0;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 p3 : 8;
    u32 f11 : 9;
    u32 f20 : 9;
    u32 b29 : 1;
    u32 b30 : 1;
    u32 b31 : 1;
} F4;

typedef struct {
    u8 pad0[0x400];
    F0 f0;
    u16 pad402;
    F4 w4;
    s32 w8;
    s32 wc;
} Elem;

typedef struct {
    u8 pad0[0x14];
    u8 *p14;
    u8 pad18[0x4f8 - 0x18];
    u16 h4f8;
} Gx;

typedef struct {
    Elem e[4][2];
} Pt;

extern Pt *data_ov119_020f1e40;
extern Gx *data_ov119_020f2f68;
extern s32 func_ov119_020edf78(s32 n);

void func_ov119_020ef11c(void) {
    s32 v4, v2, v6, v8, va, vc, f, x, y, z;
    v2 = func_ov119_020edf78(2);
    v4 = func_ov119_020edf78(4);
    v6 = func_ov119_020edf78(6);
    v8 = func_ov119_020edf78(8);
    va = func_ov119_020edf78(0xa);
    vc = func_ov119_020edf78(0xc);
    f  = data_ov119_020f2f68->p14[data_ov119_020f2f68->h4f8 + 1];
    x  = f & 1;
    y  = (f >> 4) & 1;
    z  = (f >> 7) & 1;
    if (v4 & 1) {
        data_ov119_020f1e40->e[0][v2].w4.b1  = 1;
        data_ov119_020f1e40->e[0][v2].f0.a   = v6;
        data_ov119_020f1e40->e[0][v2].f0.b   = v8;
        data_ov119_020f1e40->e[0][v2].f0.c   = va;
        data_ov119_020f1e40->e[0][v2].w4.f11 = 0;
        data_ov119_020f1e40->e[0][v2].w4.f20 = 0x100;
        data_ov119_020f1e40->e[0][v2].w8     = 0;
        data_ov119_020f1e40->e[0][v2].wc     = vc;
        data_ov119_020f1e40->e[0][v2].w4.b2  = x;
        data_ov119_020f1e40->e[0][v2].w4.b29 = y;
        data_ov119_020f1e40->e[0][v2].w4.b30 = z;
    }
    if (v4 & 2) {
        data_ov119_020f1e40->e[1][v2].w4.b1  = 1;
        data_ov119_020f1e40->e[1][v2].f0.a   = v6;
        data_ov119_020f1e40->e[1][v2].f0.b   = v8;
        data_ov119_020f1e40->e[1][v2].f0.c   = va;
        data_ov119_020f1e40->e[1][v2].w4.f11 = 0;
        data_ov119_020f1e40->e[1][v2].w4.f20 = 0x100;
        data_ov119_020f1e40->e[1][v2].w8     = 0;
        data_ov119_020f1e40->e[1][v2].wc     = vc;
        data_ov119_020f1e40->e[1][v2].w4.b2  = x;
        data_ov119_020f1e40->e[1][v2].w4.b29 = y;
        data_ov119_020f1e40->e[1][v2].w4.b30 = z;
    }
    if (v4 & 4) {
        data_ov119_020f1e40->e[2][v2].w4.b1  = 1;
        data_ov119_020f1e40->e[2][v2].f0.a   = v6;
        data_ov119_020f1e40->e[2][v2].f0.b   = v8;
        data_ov119_020f1e40->e[2][v2].f0.c   = va;
        data_ov119_020f1e40->e[2][v2].w4.f11 = 0;
        data_ov119_020f1e40->e[2][v2].w4.f20 = 0x100;
        data_ov119_020f1e40->e[2][v2].w8     = 0;
        data_ov119_020f1e40->e[2][v2].wc     = vc;
        data_ov119_020f1e40->e[2][v2].w4.b2  = x;
        data_ov119_020f1e40->e[2][v2].w4.b29 = y;
        data_ov119_020f1e40->e[2][v2].w4.b30 = z;
    }
    if (v4 & 8) {
        data_ov119_020f1e40->e[3][v2].w4.b1  = 1;
        data_ov119_020f1e40->e[3][v2].f0.a   = v6;
        data_ov119_020f1e40->e[3][v2].f0.b   = v8;
        data_ov119_020f1e40->e[3][v2].f0.c   = va;
        data_ov119_020f1e40->e[3][v2].w4.f11 = 0;
        data_ov119_020f1e40->e[3][v2].w4.f20 = 0x100;
        data_ov119_020f1e40->e[3][v2].w8     = 0;
        data_ov119_020f1e40->e[3][v2].wc     = vc;
        data_ov119_020f1e40->e[3][v2].w4.b2  = x;
        data_ov119_020f1e40->e[3][v2].w4.b29 = y;
        data_ov119_020f1e40->e[3][v2].w4.b30 = z;
    }
    data_ov119_020f2f68->h4f8 = data_ov119_020f2f68->h4f8 + 0xe;
}
