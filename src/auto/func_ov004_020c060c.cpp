#include "m2c.h"

typedef struct {
    s32 v;
} Fx;

extern "C" void func_ov004_020c060c(u8 *arg0, Fx v) {
    *(s32 *) (arg0 + 0xb8) = v.v;
    *(u8 *) (arg0 + 0x34)  = 1;
}
