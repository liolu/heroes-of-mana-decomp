/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Ent {
    u32 lo : 4;
    u32 hi : 4;
    u32 rest : 24;
    s16 a;
    s16 b;
} Ent;
typedef struct House {
    u8 pad[0x21c];
    Ent ent[8];
    u8 pad2[0x2d0 - 0x21c - 0x40];
} House;
typedef struct Wld {
    u8 pad[0x28];
    House *houses;
} Wld;
typedef struct Sel {
    u32 pad : 13;
    u32 idx : 4;
    u32 rest : 15;
} Sel;
typedef struct Flg {
    u32 pad0 : 28;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 rest : 2;
} Flg;
typedef struct Fx {
    u8 pad[0x10];
    Flg flg;
} Fx;

extern Fx *data_ov000_02051548;
extern Wld *data_0203673c;
extern Sel *data_ov109_020ea340;
void SetTrsObjCommand(s32, s32, s32, s32);
s16 GetHouseBuildSpeed(House *, s32);
void BuildHouse(House *, s32);

void SetFactoryMakeInWorld(s32 a, s32 b) {
    s32 save;
    if (data_ov000_02051548->flg.f29 && data_ov000_02051548->flg.f28) {
        save = a;
        SetTrsObjCommand(3, data_ov109_020ea340->idx, a, b);
        if (a >= 8) {
            a = 8;
        }
        data_0203673c->houses[data_ov109_020ea340->idx].ent[a].lo = 1;
        data_0203673c->houses[data_ov109_020ea340->idx].ent[a].hi = b;
        data_0203673c->houses[data_ov109_020ea340->idx].ent[a].a  = 0;
        data_0203673c->houses[data_ov109_020ea340->idx].ent[a].b =
            GetHouseBuildSpeed(&data_0203673c->houses[data_ov109_020ea340->idx], save);
    } else {
        BuildHouse(&data_0203673c->houses[data_ov109_020ea340->idx], a);
        if (a >= 8) {
            a = 8;
        }
        data_0203673c->houses[data_ov109_020ea340->idx].ent[a].hi = b;
    }
}
