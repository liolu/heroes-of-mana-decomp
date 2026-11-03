#include "m2c.h"

extern u8 data_ov004_020cedb8[];

void func_ov004_020c28fc(void *, s32, s32, s32, s32);
s32 func_ov004_020c1f9c(s32);
void func_ov004_020c058c(s32, s32);
void func_ov004_020c05cc(s32, s32);
void func_ov004_020c060c(s32, s32);

typedef struct {
    u8 pad[0x10];
    s32 f10;
    s32 f14;
    s32 f18;
} Obj;

void **func_ov004_020c6bc8(void **out, Obj *o, s32 a2, s32 a3, s32 a4) {
    volatile s32 l1;
    volatile s32 l2;
    volatile s32 l3;
    s32 t;
    s32 v;

    func_ov004_020c28fc(out, (s32) o, a2, a3, a4);
    *out = data_ov004_020cedb8;
    t    = func_ov004_020c1f9c(a2);
    v    = o->f10;
    l1   = v;
    func_ov004_020c058c(t, v);
    v  = o->f14;
    l2 = v;
    func_ov004_020c05cc(t, v);
    v  = o->f18;
    l3 = v;
    func_ov004_020c060c(t, v);
    return out;
}
