/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
extern u8 *data_ov000_02051548;
u32 GetID_takasa(s32 a, s32 b, u32 c) {
    u8 *base = *(u8 **) (data_ov000_02051548 + 0x2e0);
    s32 off  = (b * 0x28 + a) * 2;
    u32 *p;
    u32 bits;
    s32 i;
    u32 m = 1;
    off   = *(u16 *) (base + off);
    p     = (u32 *) (base + off);
    bits  = *(u32 *) (base + off);
    p++;
    for (i = 0; i < 0x18; i++, m <<= 1) {
        if (bits & m) {
            if (c & m) {
                return *p;
            }
            p++;
        }
    }
    return 0;
}
