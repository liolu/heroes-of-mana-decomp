/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x22];
    u16 v22;
    u8 pad1[0x1b];
    u8 f3f_0 : 1;
    u8 f3f_1 : 1;
    u8 f3f_2 : 1;
    u8 f3f_3 : 1;
    u8 f3f_4 : 1;
    u8 f3f_5 : 1;
    u8 f3f_6 : 1;
    u8 f3f_7 : 1;
} Sub;
typedef struct {
    u32 flag : 1;
    u8 pad[0x78];
    Sub *sub;
    u8 pad2[0x90];
} Ent;
typedef struct {
    u8 pad[0xa1c];
    u16 v;
} Glob;
extern Ent data_ov003_020b0cf0[];
extern Glob *data_ov000_0205154c;

void InitNowSelectUnitInAreaMap(void) {
    s32 i;
    Ent *e = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, e++) {
        if (e->flag && e->sub != 0) {
            e->sub->v22   = data_ov000_0205154c->v;
            e->sub->f3f_6 = 0;
        }
    }
}
