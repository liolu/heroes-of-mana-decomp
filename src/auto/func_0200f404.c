#include "m2c.h"

extern u16 data_02038970;

void func_0200f404(s32 arg0) {
    data_02038970 |= 1 << arg0;
}
