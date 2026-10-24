/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void MIi_CpuCopy16(int, int, int);
extern u8 data_ov000_020512c8;
typedef struct {
    u8 p0[0x4c];
    u32 lo : 12;
    u32 flag : 1;
    u32 hi : 19;
    u8 p1[0x6c];
    int src;
    u8 p2[4];
    int dst;
    u8 p3[8];
} W;
typedef struct {
    W w[2];
} G;
extern G *data_ov000_02051550;

void WindowVramUpdate(void) {
    int i;
    int off;
    i   = 0;
    off = 0;
    for (; i < 2; i++) {
        W *w = (W *) ((u8 *) data_ov000_02051550 + off);
        if (w->flag) {
            MIi_CpuCopy16(w->src, w->dst, 0x800);
            w       = (W *) ((u8 *) data_ov000_02051550 + off);
            w->flag = 0;
        }
        off += 0xd0;
    }
}
