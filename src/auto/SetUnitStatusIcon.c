/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_0203673c;

void SetUnitStatusIcon(u8 *obj, s32 idx) {
    u8 *tab;
    u32 v;

    tab = *(u8 **) (data_0203673c + 0x10);
    v   = *(u32 *) (tab + idx * 4 + 8) >> 0x1A;
    if (v < 0x18) {
        *(u16 *) (obj + 0xDC) = (u16) v;
    }
}
