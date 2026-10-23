#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
} R;
extern s32 func_ov004_020b9cf4(u8 *p);
void func_ov004_020b9c84(R *out, u8 *p) {
    s32 s = func_ov004_020b9cf4(p);
    s32 m;
    s32 old;
    func_ov004_020b9cf4(p);
    old                = *(s32 *) (p + 0xc);
    *(s32 *) (p + 0xc) = old + s;
    m                  = s % 4;
    if (m != 0) {
        *(s32 *) (p + 0xc) = *(s32 *) (p + 0xc) + (4 - m);
    }
    out->a = old;
    out->b = s;
}
