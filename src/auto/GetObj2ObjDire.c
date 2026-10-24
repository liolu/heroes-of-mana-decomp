/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 8;
    u32 f : 1;
    u32 pad1 : 23;
} SubB;
typedef struct {
    u32 f0 : 1;
    u32 pad : 31;
    u32 pad2[15];
    s32 x;
    s32 pad3;
    s32 z;
    u32 pad4[0x27];
    SubB *s;
} Obj;
u16 FX_Atan2Idx(s32, s32);
s32 GetObj2ObjDire(Obj *a, Obj *b) {
    if (b->f0 == 0) {
        return -1;
    }
    if (b->s == 0) {
        return -1;
    }
    if (*((u32 *) b->s + 2) << 8 >> 31 != 0) {
        return -1;
    }
    return (u16) (FX_Atan2Idx(-(b->x - a->x) >> 12, (b->z - a->z) >> 12) + 0x1000) >> 13;
}
