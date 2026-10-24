/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[8];
    u32 a : 23;
    u32 floor : 1;
    u32 b : 8;
} Info;
typedef struct {
    u32 active : 1;
    u32 rest : 31;
    u8 pad[0x62 - 4];
    s8 x;
    s8 y;
    u8 pad2[0xe8 - 0x64];
    Info *info;
    u8 pad3[0x110 - 0xec];
} Obj;
extern Obj data_ov003_020b0cf0[0x42];
s32 searchSamePosObjWithoutFloor(Obj *self, s32 x, s32 y) {
    Obj *o = data_ov003_020b0cf0;
    s32 i;
    for (i = 0; i < 0x42; i++, o++) {
        if (o->active && o->info != 0 && !o->info->floor && self != o && o->x == x && o->y == y) {
            return i;
        }
    }
    return -1;
}
