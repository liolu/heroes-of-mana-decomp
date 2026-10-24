/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_0203673c;
extern M2C_UNK data_ov003_020a96c8;

typedef struct {
    u32 pad : 3;
    u32 cost : 10;
    u32 rest : 19;
} CostW;

s32 GetHouseBuildCost(u8 *p, s32 idx) {
    CostW *e = (CostW *) (*(u8 **) (data_0203673c + 0x18) + idx * 4);
    u32 fl   = *(u16 *) (p + 0x2B0);
    s32 r    = e[2].cost;
    if (fl & 1) {
        r -= 1;
        if (r < 0) {
            r = 0;
        }
    }
    return r;
}
