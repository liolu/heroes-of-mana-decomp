/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Obj {
    u8 pad[0xb];
    u8 fb;
} Obj;

typedef struct Ent {
    u16 a;
    u16 b;
    u8 pad[4];
    Obj *obj;
    u8 pad2[0x18 - 12];
} Ent;

typedef struct G {
    u8 pad[0x474];
    Ent ent[2];
    u8 pad2[0x7ac - 0x474 - 0x30];
    u16 f7ac;
} G;

void DeleteNoAnimeObjOnlyOne(Obj *);
Obj *SetNoAnimeObject(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern G *data_ov000_02051548;

void PutWirelessIcon(s32 base) {
    s32 idx;
    if (data_ov000_02051548->f7ac != 0) {
        idx = 1;
    } else {
        idx = 0;
    }
    if (data_ov000_02051548->ent[idx].obj != 0) {
        DeleteNoAnimeObjOnlyOne(data_ov000_02051548->ent[idx].obj);
    }
    data_ov000_02051548->ent[idx].obj =
        SetNoAnimeObject(base + data_ov000_02051548->ent[idx].b, 1, data_ov000_02051548->ent[idx].a, 0x78, 4, 0, 1, 0, idx, 0);
    data_ov000_02051548->ent[idx].obj->fb |= 0x10;
}
