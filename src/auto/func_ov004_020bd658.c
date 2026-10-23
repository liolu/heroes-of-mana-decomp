#include "m2c.h"
typedef struct W {
    void *vt;
    s32 pad;
    u8 a;
    u8 b;
    u8 c;
    u8 d;
} W;
typedef struct O {
    u8 pad[4];
    void *p4;
    s32 i8;
    W *w;
    s32 i10;
    W *w14;
    u8 b18;
    u8 b19;
    u8 b1a;
    u8 b1b;
} O;
extern s32 func_ov004_020bd8d4(void *);
extern W *func_0202f3f8(s32);
extern W *func_ov004_020bd8e8(void *, W *);
extern void func_ov004_020bdb8c(u8 *, W *);
extern u8 data_ov004_020cdea8[];
void func_ov004_020bd658(O *o) {
    u8 t[4];
    W *w;
    o->i8 = -1;
    o->w  = (W *) func_ov004_020bd8d4(o->p4);
    if (o->w == 0) {
        w = func_0202f3f8(12);
        if (w != 0) {
            w->vt = data_ov004_020cdea8;
            w->a  = 0;
            w->b  = 0;
            w->c  = 0;
            w->d  = 0xff;
        }
        o->w = w;
    }
    o->i10 = 0;
    o->w14 = func_ov004_020bd8e8(o->p4, o->w);
    if (o->w14 == 0) {
        o->w14 = o->w;
    }
    func_ov004_020bdb8c(t, o->w);
    o->b18 = t[0];
    o->b19 = t[1];
    o->b1a = t[2];
    o->b1b = t[3];
}
