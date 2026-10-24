#include "m2c.h"
typedef struct {
    s32 a;
    u8 p[4];
    s32 b;
    u8 q[8];
    s32 c;
} S;
extern void func_02020d04(void *, void *, s32, s32);
extern s32 func_ov123_02079c1c(s32, s32, s32, s32, s32, s32 *);
extern s32 func_0202d478(s32, s32);
extern void func_ov123_0207a088(S *, s32, s32);
extern u8 data_ov123_020d9b44[];
extern u8 data_ov123_020d9b18[];
void func_ov123_0207a00c(S *s, s32 x, s32 k) {
    s32 tmp[2];
    s32 r;
    if (k == 0) {
        func_02020d04(data_ov123_020d9b44, data_ov123_020d9b18, 0, 0xb7);
    }
    r = func_ov123_02079c1c(x, s->c, s->a, s->b, k, tmp);
    r = func_0202d478(r - s->c, s->b);
    func_ov123_0207a088(s, x, r);
}
