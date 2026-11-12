/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 kind;
    s8 s1;
    s8 s2;
    s8 s3;
} Cmd;

typedef struct {
    u32 w0;
    u32 w4;
    u32 w8 : 23;
    u32 b23 : 1;
    u32 rest8 : 8;
} Tgt;

typedef struct {
    u32 w;
    u8 pad4[0x14 - 4];
    u16 h14;
    u16 h16;
} Wz;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 p2 : 6;
    u32 dir : 3;
    u32 p11 : 3;
    u32 mode : 8;
    u32 rest : 10;
    u8 pad4[0x18 - 4];
    u16 h18;
    u8 pad1a[0x2e - 0x1a];
    s16 h2e;
    s16 h30;
    u8 pad32[0x3a - 0x32];
    u8 b3a;
    u8 pad3b;
    s32 w3c;
    u8 pad40[0x66 - 0x40];
    s8 s66;
    s8 s67;
    u8 pad68[0xcc - 0x68];
    u8 cc;
    s8 cd;
    s8 ce;
    s8 cf;
    u8 d0;
    s8 d1;
    s8 d2;
    s8 d3;
    u8 padd4[2];
    u16 d6;
    u8 padd8[0xe4 - 0xd8];
    s32 e4;
    Wz *e8;
} Obj;

typedef struct {
    u32 b0 : 1;
    u32 rest : 31;
    u8 pad4[0x110 - 4];
} Ent;

typedef struct {
    Tgt *p;
    u8 pad4[0x110 - 4];
} EntP;

typedef struct {
    s8 v;
    u8 pad[0x110 - 1];
} EntB;

typedef struct {
    u8 pad0[0x10];
    u8 *p10;
} Gd;

extern Ent data_ov003_020b0cf0[];
extern EntP data_ov003_020b0dd8[];
extern EntB data_ov003_020b0d50[];
extern EntB data_ov003_020b0d51[];
extern Gd *data_0203673c;

extern void SetObjIdling(Obj *o);
extern void changeAnimationObj(Obj *o, s32 a, s32 b);
extern void SetObjActionToNONE(Obj *o);
extern s32 SetToGoThere(Obj *o, s32 x, s32 y);
extern s32 isItOkTargetOne(Obj *o, Ent *e, s32 v);
extern void SetUseWaza(Obj *o, s32 a, s32 b);
extern s32 GetBetterDireForAttack(Obj *o, Ent *e, s32 v);
extern s32 GetObj2ObjDire(Obj *o, Ent *e);
extern void SetActionToATTACK(Obj *o);

void changeOccasion(s32 kind, Cmd *c, Obj *o, s32 a, s32 b) {
    s32 m;
    if (kind == 4) {
        switch (kind = c->kind) {
            case 0:
            case 5:
                SetObjIdling(o);
                return;
            case 1:
                a = c->s2;
                b = c->s3;
                break;
            case 6:
                a = c->s1;
                break;
            case 2:
            case 3:
            case 7:
                a = c->s1;
                break;
            case 4:
                return;
        }
    } else if (c->kind == kind) {
        switch (kind) {
            case 0:
            case 5:
                return;
            case 1:
                if (c->s2 == a && c->s3 == b) {
                    return;
                }
                break;
            case 6:
                if (c->s1 == a) {
                    if (c->s2 == data_ov003_020b0d50[a].v && c->s3 == data_ov003_020b0d51[a].v) {
                        return;
                    }
                }
                break;
            case 2:
            case 3:
            case 7:
                if (c->s1 == a) {
                    return;
                }
                break;
            case 4:
                return;
        }
    }
    switch (kind) {
        case 0:
        case 5:
            c->kind = 0;
            m       = o->mode;
            if (m == 2) {
                return;
            }
            if (o->b1) {
                return;
            }
            if (m == 0x10) {
                return;
            }
            if (m == 0xf) {
                return;
            }
            changeAnimationObj(o, 0, o->dir);
            SetObjActionToNONE(o);
            break;
        case 2:
            if (data_ov003_020b0cf0[a].b0 == 0 || (data_ov003_020b0dd8[a].p != 0 && data_ov003_020b0dd8[a].p->b23)) {
                o->d0   = 0;
                c->kind = 0;
                return;
            }
            c->s1   = a;
            c->kind = 2;
            m       = o->mode;
            if (m == 2) {
                return;
            }
            if (o->b1) {
                return;
            }
            if (m == 0x10) {
                return;
            }
            if (m == 0xf) {
                return;
            }
            if (SetToGoThere(o, data_ov003_020b0d50[a].v, data_ov003_020b0d51[a].v) == 1) {
                if (o->d0 == o->cc && o->d1 == o->cd) {
                    o->d0 = 0;
                }
                o->cc = 0;
            } else {
                o->s66 = data_ov003_020b0d50[a].v;
                o->s67 = data_ov003_020b0d51[a].v;
            }
            break;
        case 1:
            c->s2   = a;
            c->s3   = b;
            c->kind = 1;
            m       = o->mode;
            if (m == 2) {
                return;
            }
            if (o->b1) {
                return;
            }
            if (m == 0x10) {
                return;
            }
            if (m == 0xf) {
                return;
            }
            if (SetToGoThere(o, c->s2, c->s3) == 1) {
                if (o->d0 == o->cc && o->d2 == o->ce && o->d3 == o->cf) {
                    o->d0 = 0;
                }
                o->cc = 0;
            } else {
                o->s66 = a;
                o->s67 = b;
            }
            break;
        case 6:
            if (data_ov003_020b0cf0[a].b0 == 0 || (data_ov003_020b0dd8[a].p != 0 && data_ov003_020b0dd8[a].p->b23)) {
                o->d0   = 0;
                c->kind = 0;
                return;
            }
            c->s1   = a;
            c->s2   = data_ov003_020b0d50[a].v;
            c->s3   = data_ov003_020b0d51[a].v;
            c->kind = 6;
            m       = o->mode;
            if (m == 2) {
                return;
            }
            if (o->b1) {
                return;
            }
            if (m == 0x10) {
                return;
            }
            if (m == 0xf) {
                return;
            }
            if (SetToGoThere(o, c->s2, c->s3) == 1) {
                if (o->d0 == o->cc && o->d1 == o->cd) {
                    o->d0 = 0;
                }
                o->cc = 0;
            } else {
                o->s66 = data_ov003_020b0d50[a].v;
                o->s67 = data_ov003_020b0d51[a].v;
            }
            break;
        case 3:
        case 7: {
            Ent *e = &data_ov003_020b0cf0[a];
            s32 d;
            if (e->b0 == 0 || (data_ov003_020b0dd8[a].p != 0 && data_ov003_020b0dd8[a].p->b23)) {
                o->d0   = 0;
                c->kind = 0;
                return;
            }
            c->s1   = a;
            c->kind = kind;
            if (e->b0 == 0) {
                if (o->d0 == kind && o->d1 == o->cd) {
                    o->d0 = 0;
                }
                o->cc = 0;
                return;
            }
            if ((*(u32 *) (data_0203673c->p10 + ((o->e8->w << 13) >> 24) * 4 + 8) << 21) >> 31) {
                return;
            }
            if (o->e4 == 0) {
                return;
            }
            m = o->mode;
            if (m == 2) {
                return;
            }
            if (o->b1) {
                return;
            }
            if (m == 0x10) {
                return;
            }
            if (m == 0xf) {
                return;
            }
            if (isItOkTargetOne(o, e, o->d6) == 0) {
                o->cc = 0;
                o->d0 = 0;
                return;
            }
            if (kind == 7) {
                SetUseWaza(o, 1, o->e8->h16);
            }
            d = GetBetterDireForAttack(o, e, o->d6);
            if (d == -1) {
                s32 t = GetObj2ObjDire(o, e);
                if (t != -1 && t != o->dir) {
                    o->mode = 1;
                    o->h30  = t;
                    o->h2e  = 8;
                    o->w3c  = 0;
                    o->b3a  = a;
                }
                if (kind == 7) {
                    SetUseWaza(o, 0, o->e8->h14);
                }
            } else if (d == -1) {
                if (kind == 7) {
                    SetUseWaza(o, 0, o->e8->h14);
                }
            } else {
                if (d == o->dir && o->h18 == 0) {
                    o->b3a = a;
                    SetActionToATTACK(o);
                } else {
                    o->mode = 1;
                    o->h30  = d;
                    o->h2e  = 8;
                    o->w3c  = 2;
                    o->b3a  = a;
                    if (kind == 7) {
                        SetUseWaza(o, 0, o->e8->h14);
                    }
                }
            }
            break;
        }
    }
}
