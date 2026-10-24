/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f0;
    u32 pad : 15;
    u32 a : 5;
    u32 b : 1;
} U;
s32 checkCanSeeUnitByUser(U *);

void SetFirstUNITOnOff(U *u) {
    if (checkCanSeeUnitByUser(u) == 1) {
        u->b = 0;
        u->a = 0x1f;
    } else {
        u->b = 1;
        u->a = 1;
    }
}
