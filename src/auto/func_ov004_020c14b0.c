#include "m2c.h"

typedef struct {
    s32 v;
} Fx;

void func_ov004_020c14b0(u8 *o, Fx a) {
    *(s32 *) (o + 0xA8) = a.v;
    *(u16 *) (o + 0xB8) = (u16) (*(u16 *) (o + 0xB8) | 0x10);
}
