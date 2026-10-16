#include "m2c.h"

extern void *data_ov111_020f1bd8;

void func_ov111_020e89c0(void) {
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E) = (u16) ((M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E) & ~1) | 1);
}
