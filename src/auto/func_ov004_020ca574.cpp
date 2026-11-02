#include "m2c.h"

typedef struct {
    s32 v;
} Fx;

extern "C" void func_ov004_020ca574(u8 *arg0, Fx v) {
    *(s32 *) (arg0 + 0x40) = v.v;
}
