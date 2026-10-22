#include "m2c.h"

typedef struct Obj Obj;
typedef Obj *(*M2)(Obj *, s32);
typedef Obj *(*M1)(Obj *);
typedef void (*M0)(Obj *);

struct Obj {
    void **vt;
};

extern Obj *data_ov123_020e47e8;

void func_ov123_020d3dac(s32 arg0) {
    Obj *o = (Obj *) ((u8 *) data_ov123_020e47e8 + 0x530);

    o = (Obj *) ((u8 *) o + 0x7000);
    o = ((M2) o->vt[0x54 / 4])(o, arg0);
    o = ((M1) o->vt[0x20 / 4])(o);
    ((M0) o->vt[0x1c / 4])(o);
}
