/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 func_0200273c(void *, M2C_UNK);                 /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020acf7c;

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
    u32 lo : 8;
    u32 f : 4;
    u32 hi : 20;
} D4;

typedef struct {
    u8 pad[0x20];
    u32 cnt;
    Unit *units;
} Sys;

void CarisumaUnitParamUpDownByEquip(void) {
    s32 var_r4;
    Unit *var_r5;
    P4 *p;

    var_r4 = 0;
    var_r5 = ((Sys *) data_0203673c)->units;
    do {
        if (var_r5->active && ((((Sys *) data_0203673c)->cnt > var_r5->no) || (var_r5->no == 0x3C))) {
            p = (P4 *) ((u8 *) var_r5 + 4);
            if (p->id == ((D4 *) ((u8 *) data_ov000_02051548 + 0x14))->f) {
                func_0200273c(var_r5, 1);
            }
        }
        var_r4 += 1;
        var_r5 = (Unit *) ((u8 *) var_r5 + 0x34);
    } while (var_r4 < 0x58);
}
