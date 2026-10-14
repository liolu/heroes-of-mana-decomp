#include "m2c.h"

extern s32 data_020367b8;

void func_02003ce8(s32 arg0) {
    data_020367b8 &= ~(1 << arg0);
}
