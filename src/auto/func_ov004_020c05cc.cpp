#include "m2c.h"

typedef struct {
    s32 v;
} Fx;

extern "C" void func_ov004_020c05cc(u8 *arg0, Fx v) {
    *(s32 *) (arg0 + 0xb4) = v.v;
    *(u8 *) (arg0 + 0x34)  = 1;
}
