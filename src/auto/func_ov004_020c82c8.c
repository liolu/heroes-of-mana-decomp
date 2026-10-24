#include "m2c.h"

typedef struct V {
    s32 x, y, z;
} V;
typedef struct W {
    s32 w;
} W;
typedef struct V2 {
    s32 x, y;
    W z;
} V2;
typedef struct VT {
    u8 pad0[0x10];
    void (*f10)(void *);
    u8 pad14[0x2C - 0x14];
    void (*f2c)(void *, V *);
    u8 pad30[0x50 - 0x30];
    void (*f50)(void *, W);
    u8 pad54[0x58 - 0x54];
    void (*f58)(void *, V *);
} VT;
typedef struct Obj {
    VT *vt;
} Obj;
typedef struct T {
    u8 pad0[0x14];
    Obj *o14;
    u8 pad18[0x3C - 0x18];
    Obj *o3c;
} T;
V func_ov004_020c37e0(Obj *);
V2 func_ov004_020c37fc(Obj *);
V func_ov004_020c3818(Obj *);

void func_ov004_020c82c8(T *t) {
    V a;
    V2 b;
    V c;
    t->o3c->vt->f10(t->o3c);
    if (t->o14 == 0) {
        return;
    }
    a = func_ov004_020c37e0(t->o3c);
    t->o14->vt->f2c(t->o14, &a);
    b = func_ov004_020c37fc(t->o3c);
    t->o14->vt->f50(t->o14, b.z);
    c = func_ov004_020c3818(t->o3c);
    t->o14->vt->f58(t->o14, &c);
}
