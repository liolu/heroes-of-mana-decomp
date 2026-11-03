#include "m2c.h"

struct V3 {
    s32 x, y, z;
};
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void s9(s32 a);
};
struct Fac {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual Obj *mk(s32 a, s32 b);
};
struct Self {
    void **vt;
    s32 f4;
    s8 f8;
    u8 p9[3];
    s32 fC;
    s32 f10;
    s32 f14;
    Obj *f18;
    s32 cap;
    s32 cnt;
    Obj **arr;
    s32 v28, v2C, v30;
    u8 b34;
    u8 b35;
    s32 f38;
    s32 f3C;
    s32 f40;
    s32 g44, g48, g4C, g50, g54, g58;
};

extern "C" void *func_0202f3f8(s32);
extern "C" void *func_0202f470(s32);
extern "C" void func_0202f49c(void *);
extern "C" s32 func_ov004_020b9a04(void *, void *);
extern "C" void func_ov004_020b9c64(s32, s32);
extern "C" s32 func_ov004_020c0098(void *);
extern "C" s32 func_ov004_020c27b8(void *);
extern "C" void func_ov004_020c17f8(void);
extern "C" Fac *func_ov004_020c1840(void);
extern u8 data_ov004_020ce584[];
extern u8 data_ov004_020ce41c[];

extern "C" Self *func_ov004_020c1b34(Self *self, s32 a1, s8 a2, s32 *a3, s32 a4, s32 n, s32 *list, V3 *v) {
    s32 i;
    self->vt  = (void **) data_ov004_020ce584;
    self->cap = 0;
    self->cnt = 0;
    self->arr = 0;
    self->v28 = 0;
    self->v2C = 0;
    self->v30 = 0;
    self->v28 = 0;
    self->v2C = 0;
    self->v30 = 0;
    self->g44 = 0;
    self->g48 = 0;
    self->g4C = 0;
    self->g50 = 0;
    self->g54 = 0;
    self->g58 = 0;
    self->f4  = a1;
    self->f8  = a2;
    self->b34 = 1;
    self->b35 = 0;
    self->f38 = 0;
    self->f3C = -1;
    self->f40 = -1;
    {
        void *p = func_0202f3f8(0x10);
        if (p != 0) {
            s32 sp[3];
            sp[0] = (s32) data_ov004_020ce41c;
            sp[1] = a3[1];
            sp[2] = a3[2];
            p     = (void *) func_ov004_020b9a04(p, sp);
        }
        self->fC = (s32) p;
    }
    {
        void *p = func_0202f3f8(0x10);
        if (p != 0) {
            p = (void *) func_ov004_020c27b8(p);
        }
        self->f10 = (s32) p;
    }
    func_ov004_020b9c64(self->fC, self->f10);
    {
        void *p = func_0202f3f8(0xC0);
        if (p != 0) {
            p = (void *) func_ov004_020c0098(p);
        }
        self->f14 = (s32) p;
    }
    func_ov004_020c17f8();
    {
        Fac *f    = func_ov004_020c1840();
        self->f18 = f->mk(a4, self->f14);
        self->f18->s9(a2);
    }
    for (i = 0; i < n; i++) {
        Fac *f = func_ov004_020c1840();
        Obj *o = f->mk(list[i], self->f14);
        o->s9(a2);
        if (self->cap < self->cnt + 1) {
            Obj **na;
            s32 nc = self->cap + (self->cap >> 1);
            Obj **s;
            Obj **d;
            s32 k;
            if (nc <= self->cnt + 1) {
                nc = self->cnt + 1;
            }
            na = (Obj **) func_0202f470(nc * 4);
            d  = na;
            s  = self->arr;
            k  = 0;
            if (self->cnt > 0) {
                s32 c = self->cnt;
                do {
                    *d++ = *s++;
                    k++;
                } while (k < c);
            }
            func_0202f49c(self->arr);
            self->cap = nc;
            self->arr = na;
        }
        self->arr[self->cnt++] = o;
    }
    self->v28 = v->x;
    self->v2C = v->y;
    self->v30 = v->z;
    return self;
}
