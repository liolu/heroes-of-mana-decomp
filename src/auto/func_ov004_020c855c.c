#include "m2c.h"
extern u8 data_ov004_020cf44c;
void func_ov004_020c28fc(void *, s32, s32, s8, s32);
void *func_ov004_020c855c(s32 *p, s32 a, s32 b, s8 c, s32 d) {
    func_ov004_020c28fc(p, a, b, c, d);
    p[0] = (s32) &data_ov004_020cf44c;
    p[5] = a;
    p[6] = -1;
    return p;
}
