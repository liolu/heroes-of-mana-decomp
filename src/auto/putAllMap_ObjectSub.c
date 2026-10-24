/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    u16 f0 : 1;
    u16 rest : 15;
} Child;

typedef struct Obj {
    u32 a : 6;
    u32 f6 : 1;
    u32 b : 7;
    u32 kind : 8;
    u32 c : 10;
    u32 d : 6;
    u32 k : 3;
    u32 e : 23;
    u32 g : 29;
    u32 h : 1;
    u32 i : 2;
    u8 pad0[0x2c - 0xc];
    s16 s2c;
    u8 pad1[0x40 - 0x2e];
    s32 w40;
    u8 pad2[0x48 - 0x44];
    s32 w48;
    u8 pad3[0x70 - 0x4c];
    s32 w70;
    u8 pad4[0x8c - 0x74];
    s16 s8c;
    u8 pad5[0xac - 0x8e];
    Child *child;
    u8 pad6[0xf0 - 0xb0];
    struct Obj *sub;
} Obj;

void SetGXGYforModel(Obj *);
void SetObjsOnOffForMapObj(Obj *);
void putOneP_Obj(Obj *);
void putOneP_ObjsKage(s32, s32, s32, s32, s32, s32, s32);

void putAllMap_ObjectSub(Obj *o) {
    Child *c;
    if (o == NULL) {
        return;
    }
    if (o->sub != NULL) {
        putAllMap_ObjectSub(o->sub);
    }
    if (o->kind == 0xB && o->s2c != 0) {
        return;
    }
    SetObjsOnOffForMapObj(o);
    if (o->h) {
        c = o->child;
        SetGXGYforModel(o);
        c->f0 = o->f6;
    } else if (o->f6) {
        putOneP_Obj(o);
        if (o->k != 0) {
            putOneP_ObjsKage(o->w40, o->w48, o->w70, 1, o->s8c, 1, 0x10);
        }
    }
}
