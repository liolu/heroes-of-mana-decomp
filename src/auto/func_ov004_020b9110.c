#include "m2c.h"
void func_ov004_020b9110(s32 *o, s32 a, ...) {
    s32 x = *(volatile s32 *) &a;
    if (x < 0) {
        do {
            x += 0x1680000;
        } while (x < 0);
    } else if (x >= 0x1680000) {
        do {
            x -= 0x1680000;
        } while (x >= 0x1680000);
    }
    *o = x;
}
