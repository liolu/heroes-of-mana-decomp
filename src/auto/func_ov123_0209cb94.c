/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u64 func_0200f510(void);
extern s32 func_ov123_0207c0b0(void *);
typedef struct {
    u32 a;
    void *p;
    s32 cnt;
    u64 t;
} S;
extern S *data_ov123_020e18dc;

s32 func_ov123_0209cb94(void) {
    s32 r = 0;
    S *s  = data_ov123_020e18dc;
    if (((func_0200f510() - s->t) << 6) / 0x82EA >= 0x12C) {
        s->cnt++;
        r                      = func_ov123_0207c0b0(data_ov123_020e18dc->p);
        data_ov123_020e18dc->t = func_0200f510();
    }
    return r;
}
