/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f0 : 1;
    u32 pad : 13;
    u32 act : 8;
    u32 rest : 10;
    u32 pad1[6];
    u16 pad2;
    u16 x;
    u32 pad3[0x3C];
} OW;
extern OW data_ov003_020b0cf0[];
s32 GetUnitStatusRect(s32 lo, s32 hi) {
    s32 i;
    OW *p = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, p++) {
        if (p->f0 != 0 && lo <= p->x && p->x <= hi) {
            u32 a = p->act;
            if (a == 0 || (u32) (a - 9) <= 1) {
                return 3;
            }
            return 2;
        }
    }
    return 0;
}
