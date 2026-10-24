/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 a : 5;
    u32 b : 9;
    u32 d : 6;
    u32 e : 6;
    u32 r0 : 6;
    u32 c : 9;
    u32 r1 : 23;
    s16 p[3];
    s16 q[3];
} S;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    u32 pad0 : 19;
    u32 kind : 3;
    u32 pad1 : 10;
    u8 pad2[8];
    u32 m0 : 16;
    u32 mid : 8;
    u32 hi : 8;
    u8 pad3[4];
} Ent;

typedef struct {
    u8 pad0[0x38];
    u8 b38;
    u8 pad1[0x44 - 0x39];
    s32 w44;
    u8 pad2[0xD6 - 0x48];
    u16 d6;
} Unit;

typedef struct {
    u8 pad0[8];
    u8 *tbl;
} G3;

typedef struct {
    u8 pad0[0x10];
    u32 lo : 28;
    u32 b : 1;
    u32 a : 1;
    u32 hi : 2;
} G1;

extern s32 GetArmOutByUnitType(Unit *, Vec *);
extern void GetArmOutInPos(Unit *, u32, Vec *);
extern void GetDisPosByDire(Unit *, Ent *, Vec *);
extern void SetTrsFlyArm(S *);
extern void SetBOWGUNworkBoth(S *);
extern G3 *data_0203673c;
extern G1 *data_ov000_02051548;

void SetBOWGUNwork(Unit *u, Unit *t, s32 val) {
    S s;
    Vec v;
    Ent *e;

    e   = (Ent *) (data_0203673c->tbl + 8 + u->d6 * 0x14);
    s.a = 1;
    s.b = val;
    s.c = u->d6;
    s.d = u->b38;
    s.e = t->b38;
    if (GetArmOutByUnitType(u, &v) == 1) {
        s.p[0] = v.x;
        s.p[1] = v.y;
        s.p[2] = v.z;
    } else {
        GetArmOutInPos(u, e->mid, &v);
        s.p[0] = v.x;
        s.p[1] = v.y;
        s.p[2] = v.z;
    }
    if (e->kind == 1) {
        GetArmOutInPos(t, e->hi, &v);
    } else {
        GetDisPosByDire(u, e, &v);
        v.y = t->w44 >> 4;
    }
    s.q[0] = v.x;
    s.q[1] = v.y;
    s.q[2] = v.z;
    if (data_ov000_02051548->a != 0 && data_ov000_02051548->b == 0) {
        SetTrsFlyArm(&s);
    }
    SetBOWGUNworkBoth(&s);
}
