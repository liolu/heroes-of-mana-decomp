/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Cam {
    u8 pad0[0x14];
    u32 fl;
    u8 pad1[0x1b4 - 0x18];
    s32 t[3];
    u8 pad2[0x1e0 - 0x1c0];
    u32 ang;
    s32 pitch;
    s32 dist;
    u8 pad3[0x2f8 - 0x1ec];
    s32 p[3];
} Cam;

typedef struct Fl {
    u32 lo : 18;
    u32 b : 1;
    u32 hi : 13;
} Fl;

extern Cam *data_ov000_02051548;
extern u8 data_02030644[];
extern s32 FX_Atan2Idx(s32, s32);
extern s32 FX_Sqrt(s32);
extern void MTX_MultVec33(void *, void *, void *);
extern void func_020085a4(void *, s32, s32);
extern void func_020085c0(void *, s32, s32);

void SetCameraPoint(void) {
    s32 v[3];
    s32 m[9];
    s32 o[3];
    Cam *c = data_ov000_02051548;
    if ((c->fl << 18) >> 31) {
        s32 dx;
        s32 t;
        s32 dy;
        s32 dz;
        s32 a;
        s32 z2;
        s32 x2;
        s32 r;
        dx                         = c->p[0] - c->t[0];
        dz                         = c->p[2] - c->t[2];
        dy                         = c->p[1] - c->t[1];
        a                          = FX_Atan2Idx(dx, -dz) * 0x4b0;
        z2                         = dz * (dz >> 12);
        x2                         = dx * (dx >> 12);
        data_ov000_02051548->ang   = (u32) a >> 16;
        t                          = FX_Atan2Idx(FX_Sqrt(x2 + z2), dy) * 0x4b0;
        data_ov000_02051548->pitch = t / 0x10000;
        data_ov000_02051548->dist  = (FX_Sqrt(z2 + (dy * (dy >> 12) + x2)) * 1000) / 540672;
    } else {
        s32 q = -c->pitch;
        s32 i;
        i = ((u16) ((q << 16) / 1200) >> 4) * 2;
        func_020085a4(m, *(s16 *) (data_02030644 + i * 2), *(s16 *) (data_02030644 + (i + 1) * 2));
        v[0] = 0;
        v[1] = (data_ov000_02051548->dist * 0x84000) / 1000;
        v[2] = 0;
        MTX_MultVec33(v, m, o);
        q = -data_ov000_02051548->ang;
        i = ((u16) ((q << 16) / 1200) >> 4) * 2;
        func_020085c0(m, *(s16 *) (data_02030644 + i * 2), *(s16 *) (data_02030644 + (i + 1) * 2));
        MTX_MultVec33(o, m, data_ov000_02051548->p);
        data_ov000_02051548->p[0] += data_ov000_02051548->t[0];
        data_ov000_02051548->p[1] += data_ov000_02051548->t[1];
        data_ov000_02051548->p[2] += data_ov000_02051548->t[2];
    }
}
