/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_0203673c;

s32 GetFreeScenarioOnOff(s32 idx) {
    s32 q;
    u8 *base;
    u32 v;

    q    = idx >> 5;
    base = *(u8 **) (data_0203673c + 0x2C) + (q << 2) + 0x1000;
    v    = *(u32 *) (base + 0x90);
    return (s32) ((v >> (idx & 0x1F)) & 1);
}
