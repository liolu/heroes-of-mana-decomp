#include "m2c.h"

s32 func_0202d478(s32, s32);                        /* extern */
s32 func_ov119_020eb1e8(u16);                       /* extern */

typedef struct {
    u32 bit0 : 1;
    u32 bit1 : 1;
    u32 rest : 30;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    s32 f18;
} Obj;

void func_ov119_020f1334(Obj *p) {
    s32 var;
    s32 t1;
    s32 t2;

    if (!p->bit0) {
        return;
    }
    if (p->bit1 == 0) {
        var = p->f10;
    } else {
        var = p->fc - p->f10;
    }
    t1 = func_0202d478(p->f4 * func_ov119_020eb1e8((u16) var), p->fc);
    t2 = func_0202d478(p->f8 * func_ov119_020eb1e8((u16) var), p->fc);
    p->f14 = t1;
    p->f18 = t2;
    if (p->f10 < p->fc) {
        p->f10 = p->f10 + 1;
        return;
    }
    if (p->bit1) {
        p->bit0 = 0;
    }
}
