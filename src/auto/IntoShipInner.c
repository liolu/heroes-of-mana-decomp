/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0 : 15;
    u32 b15 : 1;
    u32 pad1 : 4;
    u32 kind : 7;
    u32 mode : 4;
    u32 pad2 : 1;
} W4;
typedef struct {
    u32 low : 7;
    u32 pad : 25;
} W8;
typedef struct {
    u32 pad0 : 18;
    u32 idx : 8;
    u32 pad1 : 2;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 pad2 : 2;
} W10;
typedef struct {
    u32 pad0 : 8;
    u32 x : 4;
    u32 pad1 : 20;
} W14;

typedef struct {
    u8 pad0[4];
    W4 w4;
    W8 w8;
    u8 pad1[4];
    W10 w10;
    W14 w14;
    u8 pad2[0x1b4 - 0x18];
    s32 s1b4, s1b8, s1bc;
    s32 s1c0, s1c4, s1c8;
} G;

typedef struct {
    u8 pad[8];
    u32 pad0 : 23;
    u32 b23 : 1;
    u32 pad1 : 8;
} UW;
typedef struct {
    UW *unit;
    u8 pad[0x10c];
} UA;
typedef struct {
    u32 f0 : 1;
    u32 pad0 : 31;
    u32 pad4;
    u32 pad8 : 29;
    u32 b29 : 1;
    u32 pad8b : 2;
    u8 pad[0x110 - 0xc];
} Obj;

extern G *data_ov000_02051548;
extern Obj data_ov003_020b0cf0[];
extern UA data_ov003_020b0dd8[];

void SetCameraObject(Obj *, s32);
void func_02000f44(s32);
void InShipRoutine(u32);
void func_02000f78(s32);
void SetTrsObjCommand(s32, s32, s32, s32);
void TrsGodbeastCallToChild(s32, s32);

s32 IntoShipInner(void) {
    u32 idx;
    Obj *o;
    G *g;
    UW *unit;
    u32 mode;

    data_ov000_02051548->w4.b15 = 1;
    idx                         = data_ov000_02051548->w10.idx;
    if (idx < 0x42) {
        o = &data_ov003_020b0cf0[idx];
        if (o->f0) {
            SetCameraObject(o, 1);
            data_ov000_02051548->s1b4 = data_ov000_02051548->s1c0;
            data_ov000_02051548->s1b8 = data_ov000_02051548->s1c4;
            data_ov000_02051548->s1bc = data_ov000_02051548->s1c8;
        }
    }
    if (data_ov000_02051548->w4.mode == 0) {
        func_02000f44(0x14);
        InShipRoutine(data_ov000_02051548->w14.x);
        func_02000f78(0x14);
    }
    g = data_ov000_02051548;
    if (g->w4.kind == 0x19) {
        return 0;
    }
    idx = g->w10.idx;
    o   = &data_ov003_020b0cf0[idx];
    if (o->f0 && o->b29 && (unit = data_ov003_020b0dd8[idx].unit) != NULL && !unit->b23 && (mode = g->w4.mode) != 0) {
        if (g->w10.b29 && g->w10.b28) {
            SetTrsObjCommand(8, idx, mode, 0);
            data_ov000_02051548->w4.mode = 0;
        } else {
            if (g->w10.b29 && !data_ov000_02051548->w10.b28) {
                TrsGodbeastCallToChild(idx, mode);
            }
            data_ov000_02051548->w8.low = data_ov000_02051548->w10.idx;
            return 1;
        }
    }
    return 0;
}
