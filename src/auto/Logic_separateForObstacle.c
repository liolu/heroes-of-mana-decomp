/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 w0;
    u32 w4;
    u32 a0 : 23;
    u32 a23 : 1;
    u32 arest : 8;
} Sub;

typedef struct {
    u8 pad[0xe8];
    Sub *sub;
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
extern Ent data_ov108_020da3fc[];
extern s32 data_ov107_020e0de4;
extern Ent data_ov107_020e0dfc[];
s32 GetLogicNo();

void Logic_separateForObstacle(Actor *a, s32 b) {
    s32 no = GetLogicNo();
    if (no == 0) {
        return;
    }
    if (data_ov000_02051548->g8) {
        return;
    }
    if (a->sub == NULL) {
        return;
    }
    if (a->sub->a23) {
        return;
    }
    if (data_ov000_02051548->h1) {
        if (no < data_ov108_020da3e4) {
            if (data_ov108_020da3fc[no].fn != NULL) {
                data_ov108_020da3fc[no].fn(a, b);
            }
        }
    } else {
        if (no < data_ov107_020e0de4) {
            if (data_ov107_020e0dfc[no].fn != NULL) {
                data_ov107_020e0dfc[no].fn(a, b);
            }
        }
    }
}
