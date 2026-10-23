/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 z : 1;
    u32 v : 9;
    u32 k : 4;
    u32 g : 4;
    u32 a : 3;
    u32 b : 3;
    u32 h : 8;
    u16 x4;
    u8 p6;
    u8 b7 : 3;
    u8 b7h : 5;
    u16 x8[2];
    u8 pad[20];
} T;

typedef struct {
    u32 a0 : 2;
    u32 id : 9;
    u32 a1 : 21;
    u32 w4;
    u32 b0 : 4;
    u32 v : 9;
    u32 b1 : 19;
    u16 x0c;
    u16 x0e;
    u16 x10;
    u16 x12;
    u16 x14[2];
} E;

typedef struct {
    u32 l0 : 26;
    u32 kind : 3;
    u32 h0 : 3;
    u32 l4 : 6;
    u32 f : 3;
    u32 h4 : 23;
    u8 pad[0x3c];
    s32 y;
    u8 pad2[0x18];
    s8 x60;
    s8 x61;
    u8 pad3[10];
    s32 d6c;
    s32 d70;
    u8 pad4[0x28];
    u16 x9c;
    u8 pad5[0x4a];
    E *e;
    T *t;
} S;

typedef struct {
    u32 w0;
    u8 *tbl;
} G;

extern G *data_0203673c;
void func_0200273c(void *, s32);
void ReadySetUpWaza(void *);
s32 SetNowDownId_a(s8, s8, s32);
s32 SetNowDownId_i2(s8, s8, void *);
s32 SetObjsY2(void *);
s32 SetObjsY2forFly(void *);
void ChangeObjPicture(void *, s32);

void SetUnitBaseNo(S *o, s32 idx) {
    s32 i;
    o->t = (T *) (data_0203673c->tbl + 8 + idx * 32);
    if (o->e != 0) {
        o->e->id  = idx;
        o->e->v   = ((T *) (data_0203673c->tbl + idx * 32 + 8))->v;
        o->e->x12 = ((T *) (data_0203673c->tbl + idx * 32 + 8))->x4;
        if (o->e->x10 > o->e->x12) {
            o->e->x10 = o->e->x12;
        }
        if (((T *) (data_0203673c->tbl + idx * 32 + 8))->k != 5) {
            for (i = 0; i < 2; i++) {
                o->e->x14[i] = ((T *) (data_0203673c->tbl + idx * 32 + 8))->x8[i];
            }
        }
        func_0200273c(o->e, 0);
        ReadySetUpWaza(o);
    }
    o->f   = o->t->b7;
    o->x9c = o->t->a * 0x32;
    if (o->x9c == 0) {
        o->x9c = 0x19;
    }
    o->kind = o->t->b;
    if (o->kind != 1) {
        o->d6c = SetNowDownId_a(o->x60, o->x61, -1);
        o->d70 = SetNowDownId_i2(o->x60, o->x61, o);
    }
    if (o->kind == 1 || o->kind == 5) {
        o->y = SetObjsY2forFly(o);
    } else {
        o->y = SetObjsY2(o);
    }
    ChangeObjPicture(o, idx);
}
