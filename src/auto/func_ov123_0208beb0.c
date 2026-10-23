/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 a;
    u8 b;
    u16 c;
    s32 d;
} Pk;
void func_ov123_0207ad6c(s32, s32, s32, s32, Pk *, s32);

void func_ov123_0208beb0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    Pk p;
    p.d = a1;
    p.b = 2;
    p.c = ((a2 >> 8) & 0xFF) | ((a2 << 8) & 0xFF00);
    func_ov123_0207ad6c(a0, a3, a4, 0, &p, 8);
}
