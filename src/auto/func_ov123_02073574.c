#include "m2c.h"

void func_ov123_02073574(u32 v, u8 *p) {
    p[0] = v >> 24;
    p[1] = v >> 16;
    p[2] = v >> 8;
    p[3] = v;
}
