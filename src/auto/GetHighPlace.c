/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_02051548;
s32 GetHighPlace(s32 x, s32 y) {
    s32 m;
    u8 *base;
    u32 off;
    u32 bits;
    u8 *q;
    s32 v;
    m = 0x81000000;
    if (x < 0 || y < 0 || x >= 0x28 || y >= 0x28) {
        return 0;
    }
    base = *(u8 **) (data_ov000_02051548 + 0x2E0);
    off  = *(u16 *) (base + (y * 0x28 + x) * 2);
    bits = *(u32 *) (base + off) & 0xFFFFFF;
    q    = base + off;
    if (bits != 0) {
        q += 4;
        do {
            if (bits & 1) {
                v = *(s32 *) q;
                if (m < v) {
                    m = v;
                }
                q += 4;
            }
            bits >>= 1;
        } while (bits != 0);
    }
    return m;
}
