/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u32 *dst;
    u32 w;
    u32 h;
    u8 fmt;
} I;
void MIi_CpuClearFast(u32, void *, u32);
void func_ov123_0206a460(I *im, u32 v) {
    s32 fm = im->fmt;
    u32 wh;
    if (fm == 4) {
        v |= v << 4;
        v |= v << 8;
        v |= v << 16;
    } else {
        v |= v << 8;
        v |= v << 16;
    }
    wh = im->w * im->h;
    MIi_CpuClearFast(v, im->dst, wh * ((fm << 6) / 8));
}
