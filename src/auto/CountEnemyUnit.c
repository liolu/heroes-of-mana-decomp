/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0[5];
    u32 a : 8;
    u32 k : 4;
    u32 b : 20;
} Hd;

typedef struct {
    u32 act : 1;
    u32 pad : 31;
    u32 w4;
    u32 c : 23;
    u32 t : 4;
    u32 d : 5;
    u8 rest[0x110 - 12];
} Un;

extern Hd *data_ov000_02051548;
extern Un data_ov003_020b0cf0[];

s32 CountEnemyUnit(void) {
    Un *p = data_ov003_020b0cf0;
    u32 k = data_ov000_02051548->k;
    s32 n = 0;
    s32 i;
    s32 a, b;
    if (k == 0 || k == 2) {
        a = 1;
        b = 3;
    } else {
        a = 0;
        b = 2;
    }
    for (i = 0; i < 0x42; i++, p++) {
        if (p->act) {
            u32 t = p->t;
            if (t == a || t == b) {
                n++;
            }
        }
    }
    return n;
}
