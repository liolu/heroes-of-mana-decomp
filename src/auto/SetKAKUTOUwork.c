/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct W {
    u32 f0 : 5;
    u32 id : 9;
    u32 a : 6;
    u32 b : 6;
    u32 r0 : 6;
    u32 g0 : 9;
    u32 r1 : 23;
    s16 px;
    s16 py;
    s16 pz;
    s16 pw;
    s16 pv;
} W;
typedef struct Unit {
    u8 pad[0x38];
    u8 b38;
    u8 pad2[0xD6 - 0x39];
    u16 d6;
} Unit;
typedef struct Row {
    u32 lo : 16;
    u32 k : 8;
    u32 r : 8;
} Row;
typedef struct G2 {
    u8 pad[8];
    u8 *tbl;
} G2;
typedef struct G1 {
    u8 pad[0x10];
    u32 p0 : 28;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 p1 : 2;
} G1;
typedef struct Pos {
    s32 x, y, z;
} Pos;

s32 GetArmOutByUnitType(Unit *, Pos *);
void GetArmOutInPos(Unit *, u32, Pos *);
void SetKAKUTOUworkBoth(W *);
void SetTrsFlyArm(W *);
extern G2 *data_0203673c;
extern G1 *data_ov000_02051548;

void SetKAKUTOUwork(Unit *u, Unit *o, u32 c) {
    W w;
    Pos p;
    w.f0 = 1;
    w.id = c;
    w.g0 = u->d6;
    w.a  = u->b38;
    w.b  = o->b38;
    if (GetArmOutByUnitType(u, &p) == 1) {
        w.px = p.x;
        w.py = p.y;
        w.pz = p.z;
    } else {
        GetArmOutInPos(u, ((Row *) (data_0203673c->tbl + w.g0 * 0x14 + 0x14))->k, &p);
        w.px = p.x;
        w.py = p.y;
        w.pz = p.z;
    }
    if (data_ov000_02051548->f29 != 0 && data_ov000_02051548->f28 == 0) {
        SetTrsFlyArm(&w);
    }
    SetKAKUTOUworkBoth(&w);
}
