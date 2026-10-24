#include "m2c.h"
typedef struct {
    u8 pad[0xBC];
    s32 f;
    u8 pad2[0x110 - 0xC0];
} H;
typedef struct Obj {
    s32 (**vt)(struct Obj *);
} Obj;
typedef struct {
    u8 pad[4];
    s32 idx;
    u8 pad2[0x10];
    s32 f18;
    u16 pal[16];
    u8 pad3[0x5C - 0x3C];
    Obj *obj;
} T;
typedef struct {
    u32 pad : 12;
    u32 b : 1;
} BF;
void func_0200fb08(void);
void GX_BeginLoadTexPltt(void);
void GX_EndLoadTexPltt(void);
Obj *func_0202f3f8(s32);
Obj *func_ov004_020bbab0(Obj *, s32);
u8 *func_ov004_020c0ec8(T *, s32);
extern u8 *data_ov000_02051548;
extern H data_ov003_020b0cf0[];
extern s32 data_ov003_020b0dac[][0x110 / 4];

void func_ov004_020c0dd4(T *t) {
    u8 *r0;
    s32 i;
    Obj *o;
    if (((BF *) (data_ov000_02051548 + 0x20))->b != 0) {
        t->obj = NULL;
        return;
    }
    t->f18 = data_ov003_020b0dac[t->idx][0];
    if ((s32) * (volatile u16 *) 0x04000006 < 0xBF || (s32) * (volatile u16 *) 0x04000006 > 0xD5) {
        func_0200fb08();
    }
    GX_BeginLoadTexPltt();
    r0 = func_ov004_020c0ec8(t, 0x20);
    for (i = 0; i < 0x10; i++) {
        t->pal[i] = ((u16 *) (r0 + data_ov003_020b0cf0[t->idx].f))[i];
    }
    GX_EndLoadTexPltt();
    o = func_0202f3f8(0x1C);
    if (o != NULL) {
        o = func_ov004_020bbab0(o, -1);
    }
    t->obj                         = o;
    data_ov003_020b0dac[t->idx][0] = o->vt[4](o);
}
