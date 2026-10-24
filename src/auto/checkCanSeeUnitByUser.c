/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct K {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 p0 : 5;
    u32 kind : 5;
    u32 p1 : 22;
} K;

void ChangeXYtoAreaMapScreenXY2(s32 *, s32 *);
s32 CheckAreaMapMaskDot(s32, s32);

s32 checkCanSeeUnitByUser(u8 *arg0) {
    s32 xy[2];
    s32 r;
    K *k = *(K **) (arg0 + 0x7C);
    if (k != NULL) {
        switch (k->kind) {
            case 13:
                return 1;
            case 14:
                return 0;
        }
    }
    xy[1] = *(s32 *) (arg0 + 0x40);
    xy[0] = *(s32 *) (arg0 + 0x48);
    ChangeXYtoAreaMapScreenXY2(&xy[1], &xy[0]);
    return CheckAreaMapMaskDot(xy[1], xy[0]);
}
