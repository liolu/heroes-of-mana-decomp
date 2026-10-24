/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_0203673c;
void SetUnitTypeMax(s32 unit, s32 type, u16 val) {
    u16 *p = (u16 *) (*(u8 **) (data_0203673c + 0x28) + unit * 0x2D0 + 0x2C0);
    u32 v  = val;
    u32 t;
    v       = (u16) v;
    t       = p[type] & ~0x3E00;
    p[type] = t | ((v << 27) >> 18);
}
