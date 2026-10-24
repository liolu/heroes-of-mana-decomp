/* near start: 8 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct Obj_ {
    s32 (*f0)(void);
    s32 (*f1)(void);
    s32 (*f2)(void *);
} VT;

typedef struct {
    VT *vt;
} Obj;

typedef struct {
    Obj *o;
    s32 ref;
} Pair;

typedef struct {
    s32 pad0;
    s32 cap;
    s32 size;
    Pair *data;
} Vec;

Obj *func_0202f3f8(s32);
Pair *func_0202f470(s32);
void func_0202f49c(Pair *);
Obj *func_ov004_020c0bd0(Obj *, s32, s32);

Obj *func_ov004_020c1900(Vec *v, s32 id, s32 arg) {
    s32 i;
    Obj *o;
    s32 need;
    s32 ncap;
    Pair *nd;
    Pair *src;
    Pair *dst;
    s32 n;
    s32 j;
    s32 sz;
    Pair *e;
    Pair *t;
    Pair *u;
    Obj *x;
    Pair *d;

    for (i = 0; i < v->size; i++) {
        if (id == v->data[i].o->vt->f2(v->data[i].o)) {
            e      = v->data + i;
            e->ref = e->ref + 1;
            return v->data[i].o;
        }
    }
    o = func_0202f3f8(0xc0);
    if (o != 0) {
        o = func_ov004_020c0bd0(o, id, arg);
    }
    need = v->size + 1;
    if (v->cap < need) {
        ncap = v->cap + (v->cap >> 1);
        if (ncap <= need) {
            ncap = need;
        }
        nd  = func_0202f470(ncap * 8);
        n   = v->size;
        dst = nd;
        src = v->data;
        j   = 0;
        if (n > 0) {
            do {
                t = src;
                x = src->o;
                src++;
                u      = dst;
                dst->o = x;
                dst++;
                j++;
                u->ref = t->ref;
            } while (j < n);
        }
        func_0202f49c(v->data);
        v->cap  = ncap;
        v->data = nd;
    }
    sz      = v->size;
    v->size = sz + 1;
    d       = v->data;
    d[sz].o = o;
    d       = &d[sz];
    d->ref  = 1;
    return o;
}
