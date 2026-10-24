/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 p[0x118];
    u32 f : 2;
} A;

typedef struct {
    u8 p[0x154];
    u16 g;
} B;

extern A *data_ov000_02051548;
extern B *data_ov000_0205154c;
typedef struct {
    u16 b : 1;
} H;

extern H *data_ov000_02051550;

void SetScreenRGB_AengineOff(void) {
    if (data_ov000_02051548->f != 0) {
        u32 i;
        data_ov000_02051548->f       = 0;
        i                            = 0;
        *(volatile u16 *) 0x04000050 = 0;
        data_ov000_0205154c->g &= ~4;
        *(volatile u32 *) 0x04000000 = (*(volatile u32 *) 0x04000000 & ~0x1F00) | (data_ov000_0205154c->g << 8);
        if (data_ov000_02051550->b != 0) {
            do {
                s32 n  = i + 0x17F;
                u32 *q = (u32 *) data_ov000_02051550 + (n >> 5);
                q[2] &= ~(1 << (n & 0x1F));
                i = (u16) (i + 1);
            } while (i < 0x41);
        }
    }
}
