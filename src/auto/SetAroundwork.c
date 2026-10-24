/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetArmOutByUnitType(void *, s32 *);
void GetArmOutInPos(void *, u32, s32 *);
void SetAroundworkBoth(void *);
void SetTrsFlyArm(void *);

typedef struct {
    u32 a0 : 5;
    u32 num : 9;
    u32 ua : 6;
    u32 ub : 6;
    u32 pad : 6;
    u32 w10lo : 9;
    u32 w10hi : 23;
    s16 x;
    s16 y;
    s16 z;
    s16 ax;
    s16 ay;
    s16 az;
} W;

typedef struct {
    u32 pad0 : 8;
    u32 idx : 3;
    u32 pad1 : 21;
    u8 pad4[0x38 - 4];
    u8 b38;
    u8 pad39[0xD6 - 0x39];
    u16 hd6;
} Unit;
typedef struct {
    u8 pad[0x14];
} Row;
typedef struct {
    u32 pad : 16;
    u32 v : 8;
    u32 pad2 : 8;
} Wb;
typedef struct {
    u8 pad[8];
    Row *rows;
} Tb;
typedef struct {
    u32 pad0 : 28;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 pad3 : 2;
} Fl;
typedef struct {
    u8 pad[0x10];
    Fl fl;
} Gl;
extern Tb *data_0203673c;
extern Gl *data_ov000_02051548;
extern s32 data_ov003_020ab604[];
extern s32 data_ov003_020ab624[];

void SetAroundwork(Unit *a, Unit *b, s32 num) {
    W w;
    s32 v[3];
    w.a0    = 1;
    w.num   = num;
    w.w10lo = a->hd6;
    w.ua    = a->b38;
    w.ub    = b->b38;
    if (GetArmOutByUnitType(a, v) == 1) {
        w.x = v[0];
        w.y = v[1];
        w.z = v[2];
    } else {
        GetArmOutInPos(a, ((Wb *) ((u8 *) &data_0203673c->rows[w.w10lo] + 0x14))->v, v);
        w.x = v[0];
        w.y = v[1];
        w.z = v[2];
    }
    w.ax = v[0] + (data_ov003_020ab624[a->idx] >> 4);
    w.ay = v[1];
    w.az = v[2] + (data_ov003_020ab604[a->idx] >> 4);
    if (data_ov000_02051548->fl.f29 && !data_ov000_02051548->fl.f28) {
        SetTrsFlyArm(&w);
    }
    SetAroundworkBoth(&w);
}
