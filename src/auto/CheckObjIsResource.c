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
    u8 pad[4];
    u32 w8a : 23;
    u32 type : 4;
    u32 w8b : 5;
    u8 pad1[0xe8 - 0xc];
    Info *info;
    u8 pad3[0x110 - 0xec];
} Obj;
extern Obj data_ov003_020b0cf0[0x42];
s32 CheckObjIsResource(s32 i) {
    Obj *o;
    if (i >= 0x42) {
        return 0;
    }
    i = i * 17;
    o = (Obj *) ((u8 *) data_ov003_020b0cf0 + (i << 4));
    if (o->active && o->info != 0 && !o->info->floor && (u32) (o->type - 5) <= 1) {
        return 1;
    }
    return 0;
}
