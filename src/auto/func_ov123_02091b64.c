/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 p;
    u8 a;
    u8 b;
    u8 d;
} R;
extern void MIi_CpuCopy32(void *, void *, s32);
void func_ov123_02091b64(u8 v, u16 *src, s32 f, u8 *base) {
    u8 *d = base + 0xbf0;
    R *r  = (R *) (base + 0x46c);
    u16 h;
    u8 t;
    r->a = v;
    h    = src[1];
    f &= 0x7f;
    if (h & 2) {
        t = h >> 2;
    } else {
        t = (h >> 2) + 0x19;
    }
    r->b = t;
    r->d = (r->d & ~0x7f) | f;
    MIi_CpuCopy32(src, d, 0xc0);
}
