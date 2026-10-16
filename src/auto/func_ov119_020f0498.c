#include "m2c.h"

extern void *data_ov119_020f2f68;

void func_ov119_020f0498(void) {
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) = (u16) ((M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) & ~1) | 1);
}
