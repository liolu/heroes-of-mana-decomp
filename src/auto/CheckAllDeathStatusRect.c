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
    u8 pad[0x1e - 4];
    u16 v;
    u8 pad2[0xe8 - 0x20];
    Info *info;
    u8 pad3[0x110 - 0xec];
} Obj;
extern Obj data_ov003_020b0cf0[0x42];
s32 CheckAllDeathStatusRect(s32 lo, s32 hi) {
    s32 i;
    Obj *o = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, o++) {
        if (!o->active || lo > o->v || o->v > hi) {
            continue;
        }
        if (o->info == 0) {
            continue;
        }
        if (o->info->floor == 0) {
            return 0;
        }
    }
    return 1;
}
