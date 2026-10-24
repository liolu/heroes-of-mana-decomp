/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 5;
    u32 f : 9;
    u32 pad1 : 18;
    u32 g : 9;
    u32 pad2 : 23;
    s16 x;
    s16 y;
    s16 z;
    s16 x2;
    s16 pad3;
    s16 z2;
} O;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} V;
void *func_0200ed38(s32, s32, s32);
u16 FX_Atan2Idx(s32, s32);
void SetFlyArmAOM(void *, O *, s32);
void SetOneFlyArmWork(V *, u16, s32, s32, s32, s32, void *);

void SetSLASHworkBoth(O *o) {
    V v;
    s16 a;
    s16 b;
    void *obj;
    u16 ang;
    a   = o->x2;
    b   = o->z2;
    obj = func_0200ed38(0, -1, 0xC);
    v.x = o->x * 0x10;
    v.y = o->y * 0x10;
    v.z = o->z * 0x10;
    ang = (u32) ((u16) (FX_Atan2Idx((s32) (0 - (a * 0x10 - v.x)) >> 0xC, (s32) (b * 0x10 - v.z) >> 0xC) + 0x8000) * 0x4B0) >>
          0x10;
    SetFlyArmAOM(obj, o, o->g);
    SetOneFlyArmWork(&v, ang, 0x12C, 0x400, 1, o->f, obj);
}
