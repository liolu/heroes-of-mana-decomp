#include "m2c.h"

extern u8 data_ov004_020ce41c[];

typedef struct {
    void *p;
    s32 b;
    s32 c;
} Ov004Dst;

typedef struct {
    u8 pad[0x1c];
    s32 f1c;
    s32 f20;
} Ov004Src;

void func_ov004_020cad18(Ov004Dst *d, Ov004Src *s) {
    s32 t3 = s->f1c;
    s32 t2 = s->f20;
    d->p   = data_ov004_020ce41c;
    d->b   = t2;
    d->c   = t3;
}
