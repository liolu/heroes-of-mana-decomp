/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0 : 1;
    u32 f1 : 1;
    u32 rest : 30;
    u8 pad[0x34];
    u8 id;
} Actor;

typedef struct {
    u8 pad0[0x24];
    u32 g0 : 8;
    u32 g8 : 1;
    u32 grest : 23;
    u8 pad1[0xc8 - 0x28];
    u32 h0 : 1;
    u32 h1 : 1;
    u32 hrest : 30;
} Glob;

typedef struct {
    void (*fn)(Actor *, s32);
    u8 pad[0x10];
} Ent;

extern Glob *data_ov000_02051548;
extern s32 data_ov108_020da3e4;
extern Ent data_ov108_020da3f4[];
extern s32 data_ov107_020e0de4;
extern Ent data_ov107_020e0df4[];
s32 GetLogicNo();

void Logic_separateForBtl(Actor *a, s32 b) {
    s32 no = GetLogicNo();
    if (no == 0) {
        return;
    }
    if (a->f1) {
        return;
    }
    if (data_ov000_02051548->g8) {
        return;
    }
    if (a->id == b) {
        return;
    }
    if (data_ov000_02051548->h1) {
        if (no < data_ov108_020da3e4) {
            if (data_ov108_020da3f4[no].fn != NULL) {
                data_ov108_020da3f4[no].fn(a, b);
            }
        }
    } else {
        if (no < data_ov107_020e0de4) {
            if (data_ov107_020e0df4[no].fn != NULL) {
                data_ov107_020e0df4[no].fn(a, b);
            }
        }
    }
}
