/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 p0[0x12];
    u16 off;
    u8 p1[5];
    u8 max;
    u8 p2;
    u8 idx;
    u8 p3;
    u8 st;
} G;
extern G *data_ov123_020e46c8;
extern u8 data_ov123_020d8290[];
extern void func_ov123_020ca658(void *);
extern void func_ov123_020c1de8(s32);
void func_ov123_020c1fdc(void) {
    u16 pos[2];
    G *g;
    u32 w;
    s32 x;
    func_ov123_020ca658(pos);
    g = data_ov123_020e46c8;
    w = data_ov123_020d8290[g->idx];
    x = pos[1] - g->off - (w >> 1);
    if (x < 0) {
        x = 0;
    } else {
        s32 m = g->max - w;
        if (x >= m) {
            x = m;
        }
    }
    func_ov123_020c1de8(x);
    data_ov123_020e46c8->st = 3;
}
