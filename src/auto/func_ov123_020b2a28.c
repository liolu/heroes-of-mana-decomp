/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[0x60];
    void *f60;
} G;
typedef struct {
    u8 *f0;
    u8 *f4;
    u8 *f8;
} R;
extern G *data_ov123_020e45f0;
R *func_ov123_020c9410(void *);
u8 *func_ov123_020c887c(s32, s32 *, s32);

R *func_ov123_020b2a28(s32 a) {
    s32 tmp;
    R *r = func_ov123_020c9410(data_ov123_020e45f0->f60);
    u8 *t;
    r->f8 = func_ov123_020c887c(a, &tmp, 4);
    t     = r->f8 + 0x20;
    r->f0 = t + 0x10;
    r->f4 = t + *(s32 *) (t + 4) + 8;
    return r;
}
