#include "m2c.h"

typedef struct {
    s32 v;
} Fx;

extern "C" void func_ov004_020bc500(Fx x, Fx a, Fx b, Fx c) {
    if (a.v == 0 && b.v == 0 && c.v == 0) {
        return;
    }
    *(volatile s32 *) 0x04000470 = a.v >> 4;
    *(volatile s32 *) 0x04000470 = b.v >> 4;
    *(volatile s32 *) 0x04000470 = c.v >> 4;
}
