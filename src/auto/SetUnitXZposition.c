/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void OneMovePartysIconInAreaMapByMapXY(void *);
s32 SetNowDownId_a(s32, s32, s32);
s32 SetNowDownId_i2(s32, s32, void *);
void SetObjActionToNONE(void *);
s32 SetObjsY2(void *);
s32 SetObjsY2forFly(void *);

void SetUnitXZposition(s8 *u, s32 x, s32 z) {
    s8 sx;
    s8 sz;
    u32 k;

    u[0x60]             = x;
    u[0x61]             = z;
    *(s32 *) (u + 0x6C) = SetNowDownId_a(x, z, -1);
    *(s32 *) (u + 0x70) = SetNowDownId_i2(x, z, u);
    sx                  = x;
    u[0x64]             = sx;
    sz                  = z;
    u[0x65]             = sz;
    u[0x62]             = sx;
    u[0x63]             = sz;
    *(s32 *) (u + 0x40) = (x << 0xE) - 0x4E000;
    *(s32 *) (u + 0x48) = (z << 0xE) - 0x4E000;
    *(s32 *) (u + 0x58) = *(s32 *) (u + 0x40);
    *(s32 *) (u + 0x5C) = *(s32 *) (u + 0x48);
    u[0x66]             = u[0x60];
    u[0x67]             = u[0x61];
    k                   = (*(u32 *) u << 3) >> 0x1D;
    if (k == 1 || k == 5) {
        *(s32 *) (u + 0x44) = SetObjsY2forFly(u);
    } else {
        *(s32 *) (u + 0x44) = SetObjsY2(u);
    }
    SetObjActionToNONE(u);
    OneMovePartysIconInAreaMapByMapXY(u);
}
