#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} R4;
void func_ov123_020d27d8(R4 *);
void func_ov123_020d2850(R4 *);
s32 func_ov123_020d3a8c(void) {
    R4 z, w, y, x;
    func_ov123_020d2850(&y);
    z = y;
    func_ov123_020d27d8(&x);
    w = x;
    return ((u8 *) &z)[2] == ((u8 *) &w)[2] && ((u8 *) &z)[3] == ((u8 *) &w)[3];
}
