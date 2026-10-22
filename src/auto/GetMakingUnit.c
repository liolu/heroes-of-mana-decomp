/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_0203673c;
extern M2C_UNK data_ov109_020e9b14;

typedef struct {
    u32 active : 1;
    u32 b1 : 1;
    u32 no : 9;
    u32 rest : 21;
} Unit;

typedef struct {
    u32 id : 4;
    u32 b4 : 1;
    u32 t1 : 1;
    u32 t2 : 2;
    u32 rest : 24;
} P4;

typedef struct {
    u32 lo : 10;
    u32 f : 4;
    u32 hi : 18;
} T;

typedef struct {
    u32 pad;
    u8 *table;
    u8 pad1[0x1C];
    Unit *units;
} Sys;

s32 GetMakingUnit(s32 arg0, s32 arg1) {
    s32 var_r2;
    P4 *p;
    Unit *var_r3;
    u32 idx;

    var_r2 = 0;
    var_r3 = ((Sys *) data_0203673c)->units;
    do {
        if (var_r3->active) {
            p = (P4 *) ((u8 *) var_r3 + 4);
            if (p->id == arg0) {
                idx = var_r3->no;
                if ((arg1 == ((T *) (((Sys *) data_0203673c)->table + (idx << 5) + 8))->f) && (p->t2 == 2) && (p->t1 == 1)) {
                    return idx;
                }
            }
        }
        var_r2 += 1;
        var_r3 = (Unit *) ((u8 *) var_r3 + 0x34);
    } while (var_r2 < 0x58);
    return 0;
}
