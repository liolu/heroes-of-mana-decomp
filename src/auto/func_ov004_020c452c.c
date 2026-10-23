#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s32 v;
} S4;
typedef struct {
    s32 m[9];
} M9;
typedef struct {
    void **vt;
} Obj;
typedef struct {
    void **vt;
    u8 pad0[0x10];
    u8 *a;
    M9 mat;
    Obj *o3c;
    Obj *o40;
    Obj *o44;
    void *p48;
    V3 v4c;
    void *p58;
    void *p5c;
} T;
typedef struct {
    u8 pad0[0x10];
    u8 vsrc[0xc];
    Obj *o1c;
    Obj *o20;
    u8 pad1[4];
    Obj *o28;
    u8 b2c[0x88 - 0x2c];
    u8 b88;
    u8 b89;
    u8 pad2[2];
    u8 b8c[0x14];
    u8 ba0[1];
} A;

extern void *data_ov004_020ce858;
extern void *data_ov004_020ce890;
extern void *data_ov004_020ce808;
extern void *data_ov004_020ce7e4;

void func_ov004_020c28fc(T *, A *, void *, s32, s32);
void func_ov004_020b972c(void *);
void func_ov004_020c29ec(S4 *, void *);
s32 func_ov004_020c1f9c(void *);
s32 func_ov004_020c1fa4(void *);
s32 func_ov004_020c1fac(void *);
void func_ov004_020c29f4(M9 *, S4 *, s32, s32, s32);
void *func_0202f3f8(s32);
void *func_ov004_020c319c(void *, void *, void *, void *);
void func_ov004_020c37e0(V3 *, void *);
void *func_ov004_020c3c90(void *, void *, void *);
void *func_ov004_020c3fb4(void *, void *, void *);

T *func_ov004_020c452c(T *this, A *a, void *b, s32 c, s32 d) {
    M9 m;
    s32 s8, s7;
    void *q;
    S4 v4;
    Obj *o;
    V3 v8;

    func_ov004_020c28fc(this, a, b, c, d);
    this->vt = &data_ov004_020ce858;
    func_ov004_020b972c(&this->mat);
    this->v4c.x = 0;
    this->v4c.y = 0;
    this->v4c.z = 0;
    this->v4c.x = 0;
    this->v4c.y = 0;
    this->v4c.z = 0;
    this->a     = (u8 *) a;
    func_ov004_020c29ec(&v4, a->vsrc);
    s8 = func_ov004_020c1f9c(b);
    s7 = func_ov004_020c1fa4(b);
    func_ov004_020c29f4(&m, &v4, s8, s7, func_ov004_020c1fac(b));
    this->mat.m[0] = m.m[0];
    this->mat.m[1] = m.m[1];
    this->mat.m[2] = m.m[2];
    this->mat.m[3] = m.m[3];
    this->mat.m[4] = m.m[4];
    this->mat.m[5] = m.m[5];
    this->mat.m[6] = m.m[6];
    this->mat.m[7] = m.m[7];
    this->mat.m[8] = m.m[8];
    o              = a->o1c;
    if (o != NULL) {
        o = (*(Obj * (**) (Obj *) )((u8 *) o->vt + 0x18))(o);
    } else {
        o = func_0202f3f8(4);
        if (o != NULL) {
            o->vt = &data_ov004_020ce890;
        }
    }
    this->o3c = o;
    (*(void (**)(Obj *, s32))((u8 *) this->o3c->vt + 0x30))(this->o3c, a->b88);
    (*(void (**)(Obj *, s32))((u8 *) this->o3c->vt + 0x38))(this->o3c, a->b89);
    o = a->o20;
    if (o != NULL) {
        o = (*(Obj * (**) (Obj *) )((u8 *) o->vt + 0x18))(o);
    } else {
        o = func_0202f3f8(4);
        if (o != NULL) {
            o->vt = &data_ov004_020ce808;
        }
    }
    this->o40 = o;
    (*(void (**)(Obj *, Obj *))((u8 *) this->o3c->vt + 0x10))(this->o3c, this->o40);
    o = a->o28;
    if (o != NULL) {
        o = (*(Obj * (**) (Obj *) )((u8 *) o->vt + 0x18))(o);
    } else {
        o = func_0202f3f8(4);
        if (o != NULL) {
            o->vt = &data_ov004_020ce7e4;
        }
    }
    this->o44 = o;
    q         = func_0202f3f8(0x78);
    if (q != NULL) {
        q = func_ov004_020c319c(q, a->b2c, &this->mat, b);
    }
    this->p48 = q;
    func_ov004_020c37e0(&v8, this->p48);
    this->v4c.x = v8.x;
    this->v4c.y = v8.y;
    this->v4c.z = v8.z;
    q           = func_0202f3f8(8);
    if (q != NULL) {
        q = func_ov004_020c3c90(q, a->b8c, this->o3c);
    }
    this->p58 = q;
    q         = func_0202f3f8(0x18);
    if (q != NULL) {
        q = func_ov004_020c3fb4(q, a->ba0, this->o3c);
    }
    this->p5c = q;
    return this;
}
