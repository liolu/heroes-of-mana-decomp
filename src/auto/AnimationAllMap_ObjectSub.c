/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct Obj2 Obj2;
struct Obj2 {
    u32 pad0 : 14;
    u32 kind : 8;
    u32 pad1 : 8;
    u32 dying : 1;
    u32 pad1b : 1;
    u8 pad4[4];
    u8 pad8[4];
    u32 pad_c : 24;
    u32 noMove : 1;
    u32 rel : 1;
    u32 pad_c2 : 6;
    u8 pad10[0x1c];
    s16 s2c;
    s16 s2e;
    s16 s30;
    s16 s32;
    u8 pad34[0xc];
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4c;
    u8 pad50[0x48];
    u16 s98;
    u8 pad9a[0x4a];
    Obj2 *src;
    u8 padE8[8];
    Obj2 *next;
};

typedef struct G1 {
    u8 pad[0x2e0];
    s32 f2e0;
    u8 pad2[8];
    s32 f2ec;
} G1;

typedef struct G2 {
    u8 pad[0xaf4];
    s32 spd;
} G2;

extern G1 *data_ov000_02051548;
extern G2 *data_ov000_0205154c;
void ReleaseObjWorkOne(Obj2 *);
void OS_FreeToHeap(s32, s32, void *);
void MoveActionsObj(Obj2 *);
void SetObjActionToNONE(Obj2 *);
s32 ShitaToShita(s32, s32, s32);
void SetShipXYZandRot(Obj2 *);
void Animation_aONEOBJ(Obj2 *, s32);
s32 func_0202d478();
void AnimationAllMap_ObjectSub();

void AnimationAllMap_ObjectSub(Obj2 **pp, s32 arg) {
    Obj2 *o = *pp;
    s32 d;
    s32 spd;
    s32 a98;
    s32 a30;
    Obj2 *sr;
    if (o == 0) {
        return;
    }
    if (o->next != 0) {
        AnimationAllMap_ObjectSub(&o->next, arg);
    }
    if (o->rel) {
        *pp = o->next;
        ReleaseObjWorkOne(o);
        if (o != 0) {
            OS_FreeToHeap(0, -1, o);
        }
        return;
    }
    data_ov000_02051548->f2e0 = data_ov000_02051548->f2ec;
    if (!o->noMove) {
        MoveActionsObj(o);
    }
    switch (o->kind) {
        case 0xe:
            sr     = o->src;
            o->f40 = sr->f40;
            o->f44 = sr->f44;
            o->f48 = sr->f48;
            if (o->dying) {
                *pp = o->next;
                ReleaseObjWorkOne(o);
                if (o != 0) {
                    OS_FreeToHeap(0, -1, o);
                }
                return;
            }
            break;
        case 0xc:
            spd = data_ov000_0205154c->spd;
            a98 = o->s2e;
            if (a98 - spd <= 1) {
                o->s2e = 0;
                o->f4c = o->s30;
                SetObjActionToNONE(o);
            } else {
                a30    = o->s30;
                o->f4c = o->f4c + func_0202d478(spd * (a30 - o->f4c), a98, a30, spd);
                o->s2e = o->s2e - data_ov000_0205154c->spd;
            }
            break;
        case 0xd:
            a98 = o->s98;
            a30 = o->s30;
            d   = a30 - a98;
            if ((d < 0 ? -d : d) > 0x400) {
                d      = func_0202d478(d < 0 ? -d : d, o->s32);
                o->s98 = ShitaToShita(a30, a98, (u16) d);
                o->s32 = o->s32 - 1;
            } else {
                SetObjActionToNONE(o);
            }
            break;
        case 0xb:
            if (o->s2c != 0) {
                if (o->s2c <= data_ov000_0205154c->spd) {
                    o->s2c = 0;
                } else {
                    o->s2c = o->s2c - data_ov000_0205154c->spd;
                    return;
                }
            }
            break;
    }
    SetShipXYZandRot(o);
    Animation_aONEOBJ(o, arg);
    if (o->kind == 0xb && o->dying) {
        *pp = o->next;
        ReleaseObjWorkOne(o);
        if (o != 0) {
            OS_FreeToHeap(0, -1, o);
        }
    }
}
