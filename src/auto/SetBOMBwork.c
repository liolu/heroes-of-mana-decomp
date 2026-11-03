/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 a : 5;
    u32 b : 9;
    u32 c : 6;
    u32 d : 6;
    u32 pad : 6;
    u32 e : 9;
    u32 pad2 : 23;
    s16 p[3];
    s16 q[3];
} Work;

typedef struct {
    u32 pad0 : 19;
    u32 kind : 3;
    u32 pad1 : 10;
    u32 w4;
    u32 w8;
    u32 pad2 : 16;
    u32 idx1 : 8;
    u32 idx2 : 8;
    u32 w10;
} Ent;

typedef struct {
    u32 pad0 : 8;
    u32 dir : 3;
    u32 pad1 : 21;
} UnitHdr;

typedef struct {
    u8 pad[0x38];
    u8 f38;
} Unit;

typedef struct {
    u32 pad0 : 28;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 pad1 : 2;
} Flags;

extern u8 *data_0203673c;
extern u8 *data_ov000_02051548;
extern s8 data_ov003_020ab5f4[];
extern s8 data_ov003_020ab5fc[];

s32 GetArmOutByUnitType(void *unit, s32 *out);
void GetArmOutInPos(void *unit, u32 idx, s32 *out);
s32 GetHighPlace(s32 a, s32 b);
void SetTrsFlyArm(Work *w);
void SetYUMIworkBoth(Work *w);
void AreaAZtoObjAZ(s32 *a, s32 *b);

void SetBOMBwork(u8 *unit, u8 *obj, u32 c) {
    Work w;
    s32 px;
    s32 pos[3];
    s32 py;
    s32 tmp;
    Ent *ent;

    ent = (Ent *) (*(u8 **) (data_0203673c + 8) + 8 + *(u16 *) (unit + 0xD6) * 0x14);
    w.a = 1;
    w.b = c;
    w.e = *(u16 *) (unit + 0xD6);
    w.c = unit[0x38];
    w.d = obj[0x38];
    if (GetArmOutByUnitType(unit, pos) == 1) {
        w.p[0] = pos[0];
        w.p[1] = pos[1];
        w.p[2] = pos[2];
    } else {
        GetArmOutInPos(unit, ent->idx1, pos);
        w.p[0] = pos[0];
        w.p[1] = pos[1];
        w.p[2] = pos[2];
    }
    if (ent->kind == 1) {
        GetArmOutInPos(obj, ent->idx2, pos);
    } else {
        px = ((s8 *) unit)[0x60] + data_ov003_020ab5fc[((UnitHdr *) unit)->dir] * 4;
        py = ((s8 *) unit)[0x61] + data_ov003_020ab5f4[((UnitHdr *) unit)->dir] * 4;
        if (px < 0) {
            px = 0;
        }
        if (py < 0) {
            py = 0;
        }
        if (px >= 0x28) {
            px = 0x27;
        }
        if (py >= 0x28) {
            py = 0x27;
        }
        tmp = (0x28 << **(s32 **) (data_ov000_02051548 + 0x290)) * GetHighPlace(px, py);
        AreaAZtoObjAZ(&px, &py);
        pos[0] = px >> 4;
        pos[1] = tmp >> 4;
        pos[2] = py >> 4;
    }
    w.q[0] = pos[0];
    w.q[1] = pos[1];
    w.q[2] = pos[2];
    if (((Flags *) (data_ov000_02051548 + 0x10))->f29 != 0 && ((Flags *) (data_ov000_02051548 + 0x10))->f28 == 0) {
        SetTrsFlyArm(&w);
    }
    SetYUMIworkBoth(&w);
}
